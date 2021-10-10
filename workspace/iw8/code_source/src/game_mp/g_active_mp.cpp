/*
==============
G_ActiveMP_SessionStateHasChanged
==============
*/

void __fastcall G_ActiveMP_SessionStateHasChanged(sessionState_t oldSessionState, sessionState_t newSessionState, gclient_s *gclient)
{
  ?G_ActiveMP_SessionStateHasChanged@@YAXW4sessionState_t@@0PEAUgclient_s@@@Z(oldSessionState, newSessionState, gclient);
}

/*
==============
G_ActiveMP_PostDObjClientUpdate
==============
*/

void __fastcall G_ActiveMP_PostDObjClientUpdate(const characterInfo_t *ci, playerState_s *ps, clientState_t *cs)
{
  ?G_ActiveMP_PostDObjClientUpdate@@YAXPEBUcharacterInfo_t@@PEAUplayerState_s@@PEAUclientState_t@@@Z(ci, ps, cs);
}

/*
==============
G_ActiveMP_ClientCanSpectateTeam
==============
*/

int __fastcall G_ActiveMP_ClientCanSpectateTeam(const gclient_s *client, const team_t team)
{
  return ?G_ActiveMP_ClientCanSpectateTeam@@YAHPEBUgclient_s@@W4team_t@@@Z(client, team);
}

/*
==============
G_ActiveMP_GetCycleSpectatorClientNum
==============
*/

int __fastcall G_ActiveMP_GetCycleSpectatorClientNum(const gclient_s *const client, int *const pArchiveTime, const int currentClientNum, const int dir)
{
  return ?G_ActiveMP_GetCycleSpectatorClientNum@@YAHQEBUgclient_s@@QEAHHH@Z(client, pArchiveTime, currentClientNum, dir);
}

/*
==============
G_ActiveMP_ProcessMLGSpectatorClient
==============
*/

void __fastcall G_ActiveMP_ProcessMLGSpectatorClient(GPMove *pm, gentity_s *playerEnt)
{
  ?G_ActiveMP_ProcessMLGSpectatorClient@@YAXPEAVGPMove@@PEAUgentity_s@@@Z(pm, playerEnt);
}

/*
==============
G_ActiveMP_UpdateClientInfo
==============
*/

int __fastcall G_ActiveMP_UpdateClientInfo(gentity_s *ent)
{
  return ?G_ActiveMP_UpdateClientInfo@@YAHPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveMP_BeginClientTriggerWorkers
==============
*/

void G_ActiveMP_BeginClientTriggerWorkers(void)
{
  ?G_ActiveMP_BeginClientTriggerWorkers@@YAXXZ();
}

/*
==============
G_ActiveMP_PrepareMigration
==============
*/

void G_ActiveMP_PrepareMigration(void)
{
  ?G_ActiveMP_PrepareMigration@@YAXXZ();
}

/*
==============
G_ActiveMP_TouchEnts
==============
*/

void __fastcall G_ActiveMP_TouchEnts(gentity_s *ent, const int numtouch, const __int16 *touchents, const unsigned __int8 *toucherflags)
{
  ?G_ActiveMP_TouchEnts@@YAXPEAUgentity_s@@HQEBFQEBE@Z(ent, numtouch, touchents, toucherflags);
}

/*
==============
G_ActiveMP_FinishClientEndFrameWorkers
==============
*/

void G_ActiveMP_FinishClientEndFrameWorkers(void)
{
  ?G_ActiveMP_FinishClientEndFrameWorkers@@YAXXZ();
}

/*
==============
G_ActiveMP_GetFollowPlayerState
==============
*/

int __fastcall G_ActiveMP_GetFollowPlayerState(int clientNum, playerState_s *ps)
{
  return ?G_ActiveMP_GetFollowPlayerState@@YAHHPEAUplayerState_s@@@Z(clientNum, ps);
}

/*
==============
G_ActiveMP_FinishClientTriggerWorkers
==============
*/

void G_ActiveMP_FinishClientTriggerWorkers(void)
{
  ?G_ActiveMP_FinishClientTriggerWorkers@@YAXXZ();
}

/*
==============
G_ActiveMP_UpdateEntityLoD
==============
*/

void __fastcall G_ActiveMP_UpdateEntityLoD(const int clientNum)
{
  ?G_ActiveMP_UpdateEntityLoD@@YAXH@Z(clientNum);
}

/*
==============
G_ActiveMP_UpdateClientStreamList
==============
*/

void __fastcall G_ActiveMP_UpdateClientStreamList(const unsigned int clientNum)
{
  ?G_ActiveMP_UpdateClientStreamList@@YAXI@Z(clientNum);
}

/*
==============
G_ActiveMP_GetPlayerVehicle
==============
*/

gentity_s *__fastcall G_ActiveMP_GetPlayerVehicle(const gentity_s *const playerEnt, bool *outPlayerLinked, bool *outPlayerPredicted)
{
  return ?G_ActiveMP_GetPlayerVehicle@@YAPEAUgentity_s@@QEBU1@PEA_N1@Z(playerEnt, outPlayerLinked, outPlayerPredicted);
}

/*
==============
G_ActiveMP_BeginClientEndFrameWorkers
==============
*/

void G_ActiveMP_BeginClientEndFrameWorkers(void)
{
  ?G_ActiveMP_BeginClientEndFrameWorkers@@YAXXZ();
}

/*
==============
G_ActiveMP_PlayerHitboxes
==============
*/

void __fastcall G_ActiveMP_PlayerHitboxes(const int clientNum)
{
  ?G_ActiveMP_PlayerHitboxes@@YAXH@Z(clientNum);
}

/*
==============
G_ActiveMP_ClientDropThink
==============
*/

void __fastcall G_ActiveMP_ClientDropThink(int clientNum, const usercmd_s *const cmd)
{
  ?G_ActiveMP_ClientDropThink@@YAXHQEBUusercmd_s@@@Z(clientNum, cmd);
}

/*
==============
G_ActiveMP_PlayerStateToCharacterInfo
==============
*/

void __fastcall G_ActiveMP_PlayerStateToCharacterInfo(const playerState_s *ps, const entityState_t *es, characterInfo_t *ci)
{
  ?G_ActiveMP_PlayerStateToCharacterInfo@@YAXPEBUplayerState_s@@PEBUentityState_t@@PEAUcharacterInfo_t@@@Z(ps, es, ci);
}

/*
==============
G_ActiveMP_VehicleAnimationClientEndFrame
==============
*/

void __fastcall G_ActiveMP_VehicleAnimationClientEndFrame(gentity_s *ent)
{
  ?G_ActiveMP_VehicleAnimationClientEndFrame@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveMP_TouchTriggers
==============
*/

void __fastcall G_ActiveMP_TouchTriggers(gentity_s *ent)
{
  ?G_ActiveMP_TouchTriggers@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveMP_AgentController
==============
*/

void __fastcall G_ActiveMP_AgentController(const gentity_s *self, DObjPartBits *partBits)
{
  ?G_ActiveMP_AgentController@@YAXPEBUgentity_s@@PEAUDObjPartBits@@@Z(self, partBits);
}

/*
==============
G_ActiveMP_UpdateClientSighted
==============
*/

void __fastcall G_ActiveMP_UpdateClientSighted(const unsigned int clientNum)
{
  ?G_ActiveMP_UpdateClientSighted@@YAXI@Z(clientNum);
}

/*
==============
G_ActiveMP_GetEntityLoD
==============
*/

EntityLoDs *__fastcall G_ActiveMP_GetEntityLoD(const int clientNum)
{
  return ?G_ActiveMP_GetEntityLoD@@YAPEAUEntityLoDs@@H@Z(clientNum);
}

/*
==============
G_ActiveMP_FireRecoil
==============
*/

void __fastcall G_ActiveMP_FireRecoil(const gentity_s *ent, playerState_s *ps, const BgWeaponMap *const weaponMap, int event, const vec3_t *kickAngles, vec3_t *outKickAVel, bool *outKickNeedsToCrossCenter)
{
  ?G_ActiveMP_FireRecoil@@YAXPEBUgentity_s@@PEAUplayerState_s@@QEBVBgWeaponMap@@HAEBTvec3_t@@AEAT4@AEA_N@Z(ent, ps, weaponMap, event, kickAngles, outKickAVel, outKickNeedsToCrossCenter);
}

/*
==============
G_ActiveMP_PlayerAnimation
==============
*/

void __fastcall G_ActiveMP_PlayerAnimation(const int clientNum)
{
  ?G_ActiveMP_PlayerAnimation@@YAXH@Z(clientNum);
}

/*
==============
G_ActiveMP_PlayerEvent
==============
*/

void __fastcall G_ActiveMP_PlayerEvent(int clientNum, int event)
{
  ?G_ActiveMP_PlayerEvent@@YAXHH@Z(clientNum, event);
}

/*
==============
G_ActiveMP_RunClient
==============
*/

void __fastcall G_ActiveMP_RunClient(gentity_s *ent)
{
  ?G_ActiveMP_RunClient@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveMP_BeginClientEntityLoDWorkers
==============
*/

void G_ActiveMP_BeginClientEntityLoDWorkers(void)
{
  ?G_ActiveMP_BeginClientEntityLoDWorkers@@YAXXZ();
}

/*
==============
G_ActiveMP_ExtrapolatePlayer
==============
*/

void __fastcall G_ActiveMP_ExtrapolatePlayer(int clientNum, const usercmd_s *const ucmd, SavedPlayerState *const outExtrapState)
{
  ?G_ActiveMP_ExtrapolatePlayer@@YAXHQEBUusercmd_s@@QEAUSavedPlayerState@@@Z(clientNum, ucmd, outExtrapState);
}

/*
==============
G_ActiveMP_ClientValidateScriptable
==============
*/

void __fastcall G_ActiveMP_ClientValidateScriptable(const gentity_s *clientEnt)
{
  ?G_ActiveMP_ClientValidateScriptable@@YAXPEBUgentity_s@@@Z(clientEnt);
}

/*
==============
G_ActiveMP_VehicleOccupancyUpdate
==============
*/

void __fastcall G_ActiveMP_VehicleOccupancyUpdate(gentity_s *ent, characterInfo_t *ci)
{
  ?G_ActiveMP_VehicleOccupancyUpdate@@YAXPEAUgentity_s@@PEAUcharacterInfo_t@@@Z(ent, ci);
}

/*
==============
GClientSystemMP::UpdateFriendlyOverlay
==============
*/

void __fastcall GClientSystemMP::UpdateFriendlyOverlay(GClientSystemMP *this, gentity_s *player)
{
  ?UpdateFriendlyOverlay@GClientSystemMP@@UEBAXPEAUgentity_s@@@Z(this, player);
}

/*
==============
G_ActiveMP_UpdateHudElements
==============
*/

void __fastcall G_ActiveMP_UpdateHudElements(const gentity_s *ent)
{
  ?G_ActiveMP_UpdateHudElements@@YAXPEBUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveMP_ClientThink
==============
*/

void __fastcall G_ActiveMP_ClientThink(int clientNum, const usercmd_s *cmd)
{
  ?G_ActiveMP_ClientThink@@YAXHPEBUusercmd_s@@@Z(clientNum, cmd);
}

/*
==============
G_ActiveMP_ClientThinkInternal
==============
*/

void __fastcall G_ActiveMP_ClientThinkInternal(gentity_s *ent, const usercmd_s *ucmd, GClientTaskQueue *taskQueue, int *outTaskFlags)
{
  ?G_ActiveMP_ClientThinkInternal@@YAXPEAUgentity_s@@PEBUusercmd_s@@AEAVGClientTaskQueue@@AEAH@Z(ent, ucmd, taskQueue, outTaskFlags);
}

/*
==============
G_ActiveMP_IsPlayerActive
==============
*/

bool __fastcall G_ActiveMP_IsPlayerActive(int clientNum)
{
  return ?G_ActiveMP_IsPlayerActive@@YA_NH@Z(clientNum);
}

/*
==============
G_ActiveMP_ProcessEntityTrigger
==============
*/

void __fastcall G_ActiveMP_ProcessEntityTrigger(gentity_s *const playerEnt, gentity_s *const trigger, const bool isVehicleTrigger)
{
  ?G_ActiveMP_ProcessEntityTrigger@@YAXQEAUgentity_s@@0_N@Z(playerEnt, trigger, isVehicleTrigger);
}

/*
==============
G_ActiveMP_FinishClientEntityLoDWorkers
==============
*/

void G_ActiveMP_FinishClientEntityLoDWorkers(void)
{
  ?G_ActiveMP_FinishClientEntityLoDWorkers@@YAXXZ();
}

/*
==============
G_ActiveMP_AgentTouchTriggers
==============
*/

void __fastcall G_ActiveMP_AgentTouchTriggers(gentity_s *entity)
{
  ?G_ActiveMP_AgentTouchTriggers@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
G_ActiveMP_ProcessClientThinkUpdatePreTasks
==============
*/

void __fastcall G_ActiveMP_ProcessClientThinkUpdatePreTasks(const int clientNum, const unsigned int taskFlags)
{
  ?G_ActiveMP_ProcessClientThinkUpdatePreTasks@@YAXHI@Z(clientNum, taskFlags);
}

/*
==============
G_ActiveMP_ClientEndFrame
==============
*/

void __fastcall G_ActiveMP_ClientEndFrame(gentity_s *ent)
{
  ?G_ActiveMP_ClientEndFrame@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveMP_ClientEndFrame_Spectator
==============
*/

void __fastcall G_ActiveMP_ClientEndFrame_Spectator(gentity_s *ent)
{
  ?G_ActiveMP_ClientEndFrame_Spectator@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveMP_ProcessScriptableTrigger
==============
*/

void __fastcall G_ActiveMP_ProcessScriptableTrigger(gentity_s *const playerEnt, const unsigned int scriptableIndex, const unsigned int partIndex)
{
  ?G_ActiveMP_ProcessScriptableTrigger@@YAXQEAUgentity_s@@II@Z(playerEnt, scriptableIndex, partIndex);
}

/*
==============
G_ActiveMP_ValidateSpectateOtherFlags
==============
*/

void __fastcall G_ActiveMP_ValidateSpectateOtherFlags(const GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *otherFlags)
{
  ?G_ActiveMP_ValidateSpectateOtherFlags@@YAXPEBV?$GameModeFlagContainer@W4POtherFlagsCommon@@W4POtherFlagsSP@@W4POtherFlagsMP@@$0EA@@@@Z(otherFlags);
}

/*
==============
G_Footstep_DebugMoveType
==============
*/

void __fastcall G_Footstep_DebugMoveType(int entityNum, const vec3_t *origin, bool canEmit, const float moveTypeWeight, const entity_event_t eventType)
{
  ?G_Footstep_DebugMoveType@@YAXHAEBTvec3_t@@_NMW4entity_event_t@@@Z(entityNum, origin, canEmit, moveTypeWeight, eventType);
}

/*
==============
G_ActiveMP_ValidateFollowPlayerState
==============
*/

void __fastcall G_ActiveMP_ValidateFollowPlayerState(const playerState_s *ps)
{
  ?G_ActiveMP_ValidateFollowPlayerState@@YAXPEBUplayerState_s@@@Z(ps);
}

/*
==============
G_ActiveMP_PlayerController
==============
*/

void __fastcall G_ActiveMP_PlayerController(const gentity_s *self, DObjPartBits *partBits)
{
  ?G_ActiveMP_PlayerController@@YAXPEBUgentity_s@@PEAUDObjPartBits@@@Z(self, partBits);
}

/*
==============
G_ActiveMP_AgentController
==============
*/
void G_ActiveMP_AgentController(const gentity_s *self, DObjPartBits *partBits)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4402, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4403, ASSERT_TYPE_ASSERT, "(self->agent)", (const char *)&queryFormat, "self->agent") )
    __debugbreak();
  G_ActiveMP_CharacterController(self, &self->agent->playerState, partBits);
}

/*
==============
G_ActiveMP_AgentTouchTriggers
==============
*/
void G_ActiveMP_AgentTouchTriggers(gentity_s *entity)
{
  __int128 v1; 
  __int128 v2; 
  gagent_s *agent; 
  double v5; 
  float v6; 
  gagent_s *v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  Bounds bounds; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  unsigned __int16 touch[2048]; 
  __int128 v17; 
  __int128 v18; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 929, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 930, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  agent = entity->agent;
  if ( (agent->flags & 1) != 0 && agent->playerState.pm_type <= 1u )
  {
    v5 = *(double *)&entity->r.absBox.halfSize.y;
    *(_OWORD *)bounds.midPoint.v = *(_OWORD *)entity->r.absBox.midPoint.v;
    *(double *)&bounds.halfSize.y = v5;
    v18 = v1;
    aabbMin.v[1] = bounds.midPoint.v[1] - (float)(*(float *)&v5 + 20.0);
    collectedEnts.ids = touch;
    v17 = v2;
    v6 = _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255).m128_f32[0] + 20.0;
    aabbMin.v[0] = bounds.midPoint.v[0] - v6;
    aabbMin.v[2] = bounds.midPoint.v[2] - (float)(bounds.halfSize.v[2] + 20.0);
    aabbMax.v[0] = v6 + bounds.midPoint.v[0];
    collectedEnts.count = 0;
    collectedEnts.countMax = 2048;
    aabbMax.v[1] = (float)(*(float *)&v5 + 20.0) + bounds.midPoint.v[1];
    bounds.halfSize.v[0] = v6;
    bounds.halfSize.v[1] = *(float *)&v5 + 20.0;
    bounds.halfSize.v[2] = bounds.halfSize.v[2] + 20.0;
    aabbMax.v[2] = bounds.halfSize.v[2] + bounds.midPoint.v[2];
    PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 1078198280, &collectedEnts, NULL);
    if ( collectedEnts.count >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 948, ASSERT_TYPE_ASSERT, "(collectEnts.count < ( 2048 ))", (const char *)&queryFormat, "collectEnts.count < MAX_GENTITIES") )
      __debugbreak();
    v7 = entity->agent;
    v8 = entity->r.box.midPoint.v[1];
    bounds.midPoint.v[0] = v7->playerState.origin.v[0] + entity->r.box.midPoint.v[0];
    v9 = entity->r.box.midPoint.v[2];
    bounds.midPoint.v[1] = v8 + v7->playerState.origin.v[1];
    v10 = v9 + v7->playerState.origin.v[2];
    v11 = entity->r.box.halfSize.v[1];
    bounds.halfSize.v[0] = entity->r.box.halfSize.v[0];
    bounds.halfSize.v[2] = entity->r.box.halfSize.v[2];
    bounds.midPoint.v[2] = v10;
    bounds.halfSize.v[1] = v11;
    Bounds_ExpandToWidth(&bounds);
    G_ActiveMP_TouchTriggers_Internal(entity, &bounds, touch, collectedEnts.count, 0);
  }
}

/*
==============
G_ActiveMP_BeginClientEndFrameWorkers
==============
*/
void G_ActiveMP_BeginClientEndFrameWorkers(void)
{
  GWeaponMap *Instance; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned __int8 v4; 
  gentity_s *GEntity; 
  gclient_s *client; 
  __int64 v7; 
  __int64 v8; 

  Instance = GWeaponMap::GetInstance();
  GWeaponMap::BeginWorkerProcessing(Instance);
  v1 = 0;
  if ( level.maxclients > 0 )
  {
    v2 = 0i64;
    v3 = 0i64;
    do
    {
      if ( (unsigned int)v1 >= 0x800 )
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
        v4 = -24;
        GEntity = G_GetGEntity(v1);
        client = GEntity->client;
        if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2587, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
          __debugbreak();
        if ( client->sess.connected == CON_CONNECTED && (unsigned int)(client->sess.sessionState - 2) > 1 && client->ps.clientNum == GEntity->s.number )
        {
          v4 = -7;
          if ( g_entities[v3].s.eType == ET_PLAYER )
            v4 = -1;
        }
        SV_ClientWorkersMP_StartActiveClientEndFrame(v1, (const ClientEndFrameWorkFlags)v4);
      }
      ++v1;
      ++v2;
      ++v3;
    }
    while ( v1 < level.maxclients );
  }
}

/*
==============
G_ActiveMP_BeginClientEntityLoDWorkers
==============
*/
void G_ActiveMP_BeginClientEntityLoDWorkers(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  v0 = 0;
  if ( level.maxclients > 0 )
  {
    v1 = 0i64;
    v2 = 0i64;
    do
    {
      if ( (unsigned int)v0 >= 0x800 )
      {
        LODWORD(v4) = 2048;
        LODWORD(v3) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v1].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v2] )
        SV_ClientWorkersMP_StartEntityLoDUpdate(v0);
      ++v0;
      ++v2;
      ++v1;
    }
    while ( v0 < level.maxclients );
  }
}

/*
==============
G_ActiveMP_BeginClientTriggerWorkers
==============
*/
void G_ActiveMP_BeginClientTriggerWorkers(void)
{
  unsigned int v0; 
  __int64 v1; 
  __int64 v2; 
  gentity_s *v3; 
  gclient_s *client; 
  const dvar_t *v5; 
  double v6; 
  __int64 duration; 
  __int64 v8; 
  Bounds box; 

  v0 = 0;
  if ( level.maxclients > 0 )
  {
    v1 = 0i64;
    v2 = 0i64;
    do
    {
      if ( v0 >= 0x800 )
      {
        LODWORD(v8) = 2048;
        LODWORD(duration) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v8) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v1].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v2] )
      {
        if ( v0 >= 0x800 )
        {
          LODWORD(v8) = 2048;
          LODWORD(duration) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v8) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v3 = g_entities;
        if ( !g_entities[v1].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5524, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
          __debugbreak();
        client = v3[v1].client;
        if ( (client->flags & 1) == 0 && client->sess.sessionState == SESS_STATE_PLAYING && client->ps.pm_type <= 1u )
        {
          v5 = DCONST_DVARBOOL_g_debugPlayerTriggerBounds;
          if ( !DCONST_DVARBOOL_g_debugPlayerTriggerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugPlayerTriggerBounds") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v5);
          if ( v5->current.enabled )
          {
            v6 = *(double *)&v3[v1].r.absBox.halfSize.y;
            *(_OWORD *)box.midPoint.v = *(_OWORD *)v3[v1].r.absBox.midPoint.v;
            *(double *)&box.halfSize.y = v6;
            box.halfSize.v[0] = _mm_shuffle_ps(*(__m128 *)box.midPoint.v, *(__m128 *)box.midPoint.v, 255).m128_f32[0] + 20.0;
            box.halfSize.v[2] = box.halfSize.v[2] + 20.0;
            box.halfSize.v[1] = *(float *)&v6 + 20.0;
            G_DebugBox(&vec3_origin, &box, 0.0, &colorWhite, 1, 0);
          }
          SV_ClientWorkersMP_StartClientTriggersUpdate(v0);
        }
      }
      ++v0;
      ++v2;
      ++v1;
    }
    while ( (int)v0 < level.maxclients );
  }
}

/*
==============
G_ActiveMP_BreakGlass
==============
*/
void G_ActiveMP_BreakGlass(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  unsigned __int16 *ParameterInternal; 

  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (unsigned __int16 *)GClientTaskQueue::GetParameterInternal(outputQueue, 0x1Cu, 4u);
  G_Glass_DestroyPiece(*ParameterInternal, (const vec3_t *)(ParameterInternal + 2), (const vec3_t *)(ParameterInternal + 8));
}

/*
==============
G_ActiveMP_CharacterController
==============
*/
void G_ActiveMP_CharacterController(const gentity_s *self, const playerState_s *ps, DObjPartBits *partBits)
{
  __int64 v6; 
  __int64 v7; 
  characterInfo_t *v8; 
  __int64 v9; 
  clientControllers_t *p_control; 
  clientControllers_t *v11; 
  const DObj *ServerDObjForEnt; 
  AnimationController Controller; 
  const DObj *v14; 
  clientControllers_t *v15; 
  const DObj *v16; 
  __int64 v17; 
  CEntPlayerInfo info; 

  SV_InitMP_CheckThread();
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4358, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4359, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( self->s.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v17) = self->s.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4360, ASSERT_TYPE_ASSERT, "(unsigned)( self->s.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "self->s.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v17, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v6 = *(_QWORD *)&GStatic::ms_gameStatics;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)self->s.clientNum);
  v8 = (characterInfo_t *)v7;
  if ( (!v7 || !*(_DWORD *)(v7 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4365, ASSERT_TYPE_ASSERT, "( ci && ci->infoValid )", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  G_ActiveMP_PlayerStateToCharacterInfo(ps, &self->s, v8);
  v9 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
  if ( (!v9 || v9 != v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4369, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == gameStatic))", "%s\n\tEntering server game character controller without a valid client game state", "BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == gameStatic)") )
    __debugbreak();
  p_control = &v8->control;
  v11 = &v8->control;
  if ( v8->usingAnimState )
  {
    if ( BG_AnimationState_UpdateControllers(&self->s, v8, v11) )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(self);
      Controller = BG_AnimationState_GetController(&self->s);
      BG_AnimationState_SetPlayerInfo(Controller, ServerDObjForEnt, p_control, &info);
      BG_AnimationState_DoControllers(&info, ServerDObjForEnt, partBits);
    }
  }
  else
  {
    BG_Player_DoControllersInternal(&self->s, v8, v11);
    v14 = Com_GetServerDObjForEnt(self);
    v15 = &v8->control;
    v16 = v14;
    BG_Player_SetPlayerInfo(v14, v15, &info);
    BG_Pose_DoPlayerControllers(&info, v16, partBits);
  }
}

/*
==============
G_ActiveMP_ClientCanSeeOrBeSeen
==============
*/
bool G_ActiveMP_ClientCanSeeOrBeSeen(const unsigned int clientNum, const int serverTime)
{
  __int64 v3; 
  gclient_s *v4; 

  v3 = clientNum;
  if ( !G_IsEntityInUse(clientNum) || SvClient::GetCommonClient(v3)->state != CS_ACTIVE )
    return 0;
  v4 = &level.clients[v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2979, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  return v4->ps.pm_type <= 1u && v4->sess.lastDeathTime < serverTime;
}

/*
==============
G_ActiveMP_ClientCanSpectateTeam
==============
*/
_BOOL8 G_ActiveMP_ClientCanSpectateTeam(const gclient_s *client, const team_t team)
{
  unsigned __int64 v2; 
  bitarray<224> *p_noSpectate; 
  int v6; 

  v2 = (unsigned int)team;
  p_noSpectate = &client->sess.noSpectate;
  if ( (unsigned int)team >= (TEAM_HUNDRED_NINETY_TWO|TEAM_THIRTY_TWO) )
  {
    v6 = 224;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", team, v6) )
      __debugbreak();
  }
  return ((0x80000000 >> (v2 & 0x1F)) & p_noSpectate->array[v2 >> 5]) == 0;
}

/*
==============
G_ActiveMP_ClientDropThink
==============
*/
void G_ActiveMP_ClientDropThink(int clientNum, const usercmd_s *const cmd)
{
  __int64 v2; 
  int *p_commandTime; 
  int time; 
  int v6; 
  int commandTime; 
  int inputTime; 
  __int64 v9; 

  v2 = clientNum;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2537, ASSERT_TYPE_ASSERT, "( cmd != nullptr )", (const char *)&queryFormat, "cmd != nullptr") )
    __debugbreak();
  if ( (unsigned int)v2 >= level.maxclients )
  {
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2538, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v9, level.maxclients) )
      __debugbreak();
  }
  p_commandTime = &g_entities[v2].client->ps.commandTime;
  if ( !p_commandTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2542, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( p_commandTime[5354] == 2 )
  {
    time = level.time;
    v6 = p_commandTime[1];
    if ( cmd->serverTime < level.time )
      time = cmd->serverTime;
    if ( time > v6 )
      v6 = time;
    commandTime = *p_commandTime;
    p_commandTime[1] = v6;
    p_commandTime[1150] = v6;
    if ( cmd->commandTime > commandTime )
      commandTime = cmd->commandTime;
    *p_commandTime = commandTime;
    p_commandTime[1149] = commandTime;
    inputTime = p_commandTime[2];
    if ( cmd->inputTime > inputTime )
      inputTime = cmd->inputTime;
    p_commandTime[2] = inputTime;
    p_commandTime[1151] = inputTime;
  }
}

/*
==============
G_ActiveMP_ClientEndFrame
==============
*/
void G_ActiveMP_ClientEndFrame(gentity_s *ent)
{
  gclient_s *client; 
  GHandler *Handler; 
  float moveSpeedScaleMultiplier; 
  gclient_s *v5; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  int flags; 
  __int64 team; 
  bool v9; 
  bool v10; 
  char v11; 
  bool v12; 
  __int64 radarMode; 
  HudData v14; 
  playerState_s *EntityPlayerState; 
  const dvar_t *v16; 
  playerState_s *v17; 
  scr_string_t attachShieldTagName; 
  const dvar_t *v19; 
  float fGunPitch; 
  unsigned int number; 
  gclient_s *v22; 
  sessionState_t sessionState; 
  const dvar_t *v24; 
  gclient_s *v25; 
  unsigned int v26; 
  gclient_s *v27; 
  int clientNum; 
  int v29; 
  sessionState_t v30; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v31; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v32; 
  __int64 v33; 
  const dvar_t *v34; 
  sentient_s *sentient; 
  float v36; 
  bool v37; 
  int health; 
  int v39; 
  int v40; 
  __int128 v43; 
  int v45; 
  entityType_s eType; 
  GStatic *GameStatics; 
  unsigned int v48; 
  __int64 v49; 
  __int64 v50; 
  int IsAgentEntity; 
  int v52; 
  agentState_s *AgentState; 
  playerState_s *v54; 
  int playerASM_scripted_anim_start_time; 
  clientState_t *ClientState; 
  clientState_t *v57; 
  gclient_s *v58; 
  GMovingPlatformClient *ClientFromGEntity; 
  SavedPlayerState *v60; 
  const dvar_t *v61; 
  int integer; 
  __int16 v63; 
  unsigned __int8 v64; 
  DObj *ServerDObjForEnt; 
  int v66; 
  GWeaponMap *Instance; 
  int v68; 
  int v69; 
  gentity_s *gentities; 
  unsigned __int64 viewlocked_entNum; 
  int v72; 
  __int64 v73; 
  __int64 v74; 
  gentity_s *v75; 
  const gentity_s *v76; 
  scr_string_t LeftHandIKTagName; 
  __int64 attachIgnoreCollision; 
  __int64 attachIgnoreCollisiona; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  int outDuration; 
  int active; 
  SavedPlayerState *outExtrapState; 
  vec3_t v87; 
  vec3_t v88; 
  tmat43_t<vec3_t> v89; 
  vec3_t origin; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outOrigin; 
  vec3_t spawn_angles; 
  vec3_t spawn_origin; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> v98; 
  SavedPlayerState outSavedState; 
  usercmd_s cmd; 

  client = ent->client;
  Handler = GHandler::getHandler();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4968, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4969, ASSERT_TYPE_ASSERT, "(client->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  ent->handler = 15;
  client->ps.deltaTime = 0;
  ent->r.eventTime = level.time;
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4977, ASSERT_TYPE_ASSERT, "( !Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED ) )", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED )") )
    __debugbreak();
  moveSpeedScaleMultiplier = client->sess.moveSpeedScaleMultiplier;
  client->ps.gravity = 800;
  client->ps.moveSpeedScaleMultiplier = MSG_PackUnsignedFloat(moveSpeedScaleMultiplier, 5.0, 0xCu);
  v5 = ent->client;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4781, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  p_otherFlags = &v5->ps.otherFlags;
  if ( (v5->flags & 0x200) != 0 )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 9u);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 9u);
  v5->flags &= ~0x200u;
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4929, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  G_Active_PlayerOrAgent_VehicleAnimationEndFrame(&ent->client->ps);
  flags = client->flags;
  client->sess.cs.healthRatio = 0;
  if ( (flags & 4) != 0 )
  {
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0x10u) )
    {
      client->ps.pm_flags.m_flags[0] |= 0x10000u;
      goto LABEL_25;
    }
    if ( (client->flags & 4) != 0 )
      goto LABEL_26;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0x10u) )
    goto LABEL_26;
  client->ps.pm_flags.m_flags[0] &= ~0x10000u;
LABEL_25:
  SV_ClientMP_ClearExtrapolation(ent->s.number);
LABEL_26:
  if ( (client->flags & 0x400) != 0 )
    client->ps.pm_flags.m_flags[0] |= 0x20000u;
  else
    client->ps.pm_flags.m_flags[0] &= ~0x20000u;
  Handler->PlayerWeaponHeatIterate(Handler, &client->ps, BG_Heat_UpdateFlags);
  if ( client->sess.cs.team >= (unsigned int)TEAM_MP_NUM_TEAMS )
  {
    LODWORD(attachIgnoreCollision) = client->sess.cs.team;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5012, ASSERT_TYPE_ASSERT, "(unsigned)( client->sess.cs.team ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "client->sess.cs.team doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", attachIgnoreCollision, 203) )
      __debugbreak();
  }
  team = client->sess.cs.team;
  v9 = level.teamHasRadar[team] || client->sess.hasRadar;
  client->ps.radarEnabled = v9;
  v10 = level.teamRadarBlocked[team] || client->sess.isRadarBlocked;
  client->ps.radarBlocked = v10;
  v11 = truncate_cast<signed char,int>(client->sess.radarStrength + level.teamRadarStrength[team]);
  v12 = client->sess.radarShowEnemyDirection == 0;
  radarMode = client->sess.radarMode;
  client->ps.radarStrength = v11;
  client->ps.radarShowEnemyDirection = !v12;
  if ( (unsigned int)(radarMode + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum RadarMode __cdecl truncate_cast_impl<enum RadarMode,int>(int)", "signed", (char)radarMode, "signed", radarMode) )
    __debugbreak();
  v14.0 = ($D69577AC11C1636F320D0973E2FBC7CA)client->sess.hudData;
  client->ps.hudData = v14;
  client->ps.radarMode = radarMode;
  ent->s.hudData = v14;
  Profile_Begin(353);
  active = G_ActiveMP_UpdateClientInfo(ent);
  Profile_EndInternal(NULL);
  EntityPlayerState = G_GetEntityPlayerState(ent);
  v16 = DVARBOOL_shieldDebug;
  v17 = EntityPlayerState;
  if ( !DVARBOOL_shieldDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled && v17 && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v17->otherFlags, ACTIVE, 8u) )
  {
    if ( SV_IsAgentEntity(ent) )
    {
      if ( !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1284, ASSERT_TYPE_ASSERT, "( ent->agent )", (const char *)&queryFormat, "ent->agent") )
        __debugbreak();
      attachShieldTagName = ent->agent->attachShieldTagName;
    }
    else
    {
      if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1289, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
        __debugbreak();
      attachShieldTagName = ent->client->attachShieldTagName;
    }
    if ( G_Utils_DObjGetWorldTagMatrix(ent, attachShieldTagName, &outTagMat) )
    {
      end.v[0] = (float)(30.0 * outTagMat.m[0].v[0]) + outTagMat.m[3].v[0];
      end.v[1] = (float)(30.0 * outTagMat.m[0].v[1]) + outTagMat.m[3].v[1];
      end.v[2] = (float)(30.0 * outTagMat.m[0].v[2]) + outTagMat.m[3].v[2];
      G_DebugLineWithDuration(&outTagMat.m[3], &end, &colorBlue, 0, 2);
    }
  }
  v19 = DVARBOOL_g_debugServerAiming;
  if ( !DVARBOOL_g_debugServerAiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugServerAiming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled )
  {
    fGunPitch = client->fGunPitch;
    angles.v[2] = client->ps.viewangles.v[2];
    angles.v[1] = client->fGunYaw;
    angles.v[0] = fGunPitch;
    AngleVectors(&angles, &forward, NULL, NULL);
    G_Client_GetWeaponOrigin(&client->ps, &outOrigin);
    origin.v[0] = (float)(1000.0 * forward.v[0]) + outOrigin.v[0];
    origin.v[1] = (float)(1000.0 * forward.v[1]) + outOrigin.v[1];
    origin.v[2] = (float)(1000.0 * forward.v[2]) + outOrigin.v[2];
    G_Utils_SpawnEventEntity(&origin, 191)->s.eventParm2 = 0;
  }
  number = ent->s.number;
  if ( Sys_IsAnyWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3067, ASSERT_TYPE_ASSERT, "( !Sys_IsAnyWorkerContext() )", (const char *)&queryFormat, "!Sys_IsAnyWorkerContext()") )
    __debugbreak();
  if ( number >= level.maxclients )
  {
    LODWORD(v81) = level.maxclients;
    LODWORD(attachIgnoreCollision) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3068, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", attachIgnoreCollision, v81) )
      __debugbreak();
  }
  v22 = &level.clients[number];
  SV_Game_GetUsercmd(number, &cmd);
  if ( G_ActiveMP_ClientCanSeeOrBeSeen(number, cmd.serverTime) )
  {
    v22->sess.lastSightedPlayers.array[0] = v22->sess.sightedPlayers.array[0];
    v22->sess.lastSightedPlayers.array[1] = v22->sess.sightedPlayers.array[1];
    v22->sess.lastSightedPlayers.array[2] = v22->sess.sightedPlayers.array[2];
    v22->sess.lastSightedPlayers.array[3] = v22->sess.sightedPlayers.array[3];
    v22->sess.lastSightedPlayers.array[4] = v22->sess.sightedPlayers.array[4];
    v22->sess.lastSightedPlayers.array[5] = v22->sess.sightedPlayers.array[5];
    v22->sess.lastSightedPlayers.array[6] = v22->sess.sightedPlayers.array[6];
  }
  else
  {
    *(_QWORD *)v22->sess.lastSightedPlayers.array = 0i64;
    *(_QWORD *)&v22->sess.lastSightedPlayers.array[2] = 0i64;
    *(_QWORD *)&v22->sess.lastSightedPlayers.array[4] = 0i64;
    v22->sess.lastSightedPlayers.array[6] = 0;
  }
  *(_QWORD *)v22->sess.sightedPlayers.array = 0i64;
  *(_QWORD *)&v22->sess.sightedPlayers.array[2] = 0i64;
  *(_QWORD *)&v22->sess.sightedPlayers.array[4] = 0i64;
  v22->sess.sightedPlayers.array[6] = 0;
  *(_QWORD *)v22->sess.sightedByPlayers.array = 0i64;
  *(_QWORD *)&v22->sess.sightedByPlayers.array[2] = 0i64;
  *(_QWORD *)&v22->sess.sightedByPlayers.array[4] = 0i64;
  v22->sess.sightedByPlayers.array[6] = 0;
  if ( client->sess.connected != CON_CONNECTED )
    goto LABEL_91;
  sessionState = client->sess.sessionState;
  if ( sessionState == SESS_STATE_INTERMISSION )
  {
    Profile_Begin(356);
    G_ActiveMP_IntermissionClientEndFrame(ent);
    Profile_EndInternal(NULL);
    client->buttonsSinceLastFrame = 0i64;
    G_ActiveMP_RestorePersistentClientData(ent);
LABEL_92:
    G_ActiveMP_ResetClientNetPerf(&client->ps);
LABEL_93:
    SV_ClientAntiCheatMP_ResetLastRecordedPlayerAngles(ent->s.number);
    return;
  }
  if ( sessionState == SESS_STATE_SPECTATOR )
  {
    v24 = DVARBOOL_g_spectateOrderFixActive;
    if ( !DVARBOOL_g_spectateOrderFixActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_spectateOrderFixActive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( !v24->current.enabled )
    {
      v25 = ent->client;
      if ( v25->sess.sessionState == SESS_STATE_SPECTATOR )
      {
        Profile_Begin(357);
        G_ActiveMP_SpectatorClientEndFrame(ent);
        Profile_EndInternal(NULL);
        v25->buttonsSinceLastFrame = 0i64;
        G_ActiveMP_RestorePersistentClientData(ent);
        SV_ClientAntiCheatMP_ResetLastRecordedPlayerAngles(ent->s.number);
        return;
      }
    }
    goto LABEL_93;
  }
  G_ActiveMP_RestorePersistentClientData(ent);
  if ( client->ps.clientNum != ent->s.number )
  {
    spawn_origin = client->ps.origin;
    spawn_angles.v[1] = client->ps.viewangles.v[1];
    spawn_angles.v[0] = 0.0;
    spawn_angles.v[2] = 0.0;
    Profile_Begin(358);
    G_ActiveMP_ClientSpawn(ent, &spawn_origin, &spawn_angles);
    Profile_EndInternal(NULL);
    v26 = ent->s.number;
    if ( v26 >= level.maxclients )
    {
      LODWORD(v81) = level.maxclients;
      LODWORD(attachIgnoreCollision) = ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2945, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", attachIgnoreCollision, v81) )
        __debugbreak();
    }
    G_ActiveMP_UpdateSpeculativeWeaponStreaming(v26, &level.clients[v26].ps);
    if ( client->ps.clientNum != ent->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5103, ASSERT_TYPE_ASSERT, "(client->ps.clientNum == ent->s.number)", (const char *)&queryFormat, "client->ps.clientNum == ent->s.number") )
      __debugbreak();
LABEL_91:
    client->buttonsSinceLastFrame = 0i64;
    goto LABEL_92;
  }
  v27 = ent->client;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4750, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  clientNum = v27->ps.clientNum;
  if ( SV_ClientNetPerf_IsEnabled() )
    SV_ClientNetPerf_UpdatePlayerState(clientNum, &v27->ps);
  else
    G_ActiveMP_ResetClientNetPerf(&v27->ps);
  ent->r.svFlags = ent->r.svFlags & 0xFC | 2;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&client->ps.eFlags, ACTIVE, 0x10u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(&client->ps.otherFlags, (POtherFlagsMP)34);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&client->ps.otherFlags, CROUCHING|0x20);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&client->ps.otherFlags, (POtherFlagsMP)36);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&client->ps.otherFlags, TURRET_ACTIVE_PRONE|0x20);
  client->ps.viewmodelIndex = client->sess.viewmodelIndex;
  if ( client->compassPingTime <= level.time )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 0x13u);
  }
  v29 = client->flags;
  if ( (v29 & 1) != 0 )
  {
    client->ps.pm_type = 2;
  }
  else if ( (v29 & 2) != 0 )
  {
    client->ps.pm_type = 3;
  }
  else
  {
    v30 = client->sess.sessionState;
    if ( v30 == SESS_STATE_DEAD )
    {
      client->ps.pm_type = (ent->tagInfo != NULL) + 7;
      ent->r.svFlags = ent->r.svFlags & 0xFC | 1;
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 0x10u);
    }
    else if ( client->mpviewer )
    {
      client->ps.pm_type = 4;
    }
    else if ( ent->tagInfo )
    {
      client->ps.pm_type = (client->ps.linkFlags.m_flags[0] & 4) == 0;
      G_SetFixedLinkPlayer(ent);
      client->ps.origin.v[0] = ent->r.currentOrigin.v[0];
      client->ps.origin.v[1] = ent->r.currentOrigin.v[1];
      client->ps.origin.v[2] = ent->r.currentOrigin.v[2];
    }
    else if ( v30 == SESS_STATE_SPECTATOR )
    {
      client->ps.pm_type = 5;
    }
    else
    {
      client->prevLinkAnglesSet = 0;
      client->ps.pm_type = 0;
    }
  }
  v31 = &client->ps.otherFlags;
  if ( client->lastStand )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(v31, ACTIVE, 0xBu);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(v31, ACTIVE, 0xBu);
  v32 = &client->ps.otherFlags;
  if ( (client->flags & 2) != 0 )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(v32, ACTIVE, 0x1Fu);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(v32, ACTIVE, 0x1Fu);
  v33 = (unsigned int)client->flags;
  if ( (v33 & 0x10) == 0 )
    goto LABEL_129;
  if ( (v33 & 2) == 0 || client->ps.pm_type != 3 )
  {
    Com_PrintWarning(15, "Expected (pm_type == PM_UFO) and (client->flags & CL_FLAG_UFO), instead got pm_type==(%d) and flags==(%d). resetting ufo_viewmodel\n", (unsigned int)client->ps.pm_type, v33);
    client->flags &= ~0x10u;
LABEL_129:
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x20u);
    goto LABEL_130;
  }
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x20u);
LABEL_130:
  G_ActiveMP_UpdateAttackerAccuracy(ent);
  v34 = DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates;
  if ( !DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_DisablePlayerNearestDataUpdates") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( !v34->current.enabled )
  {
    sentient = ent->sentient;
    v36 = ent->r.currentOrigin.v[0];
    v37 = v36 != sentient->oldOrigin.v[0] || sentient->oldOrigin.v[1] != ent->r.currentOrigin.v[1] || sentient->oldOrigin.v[2] != ent->r.currentOrigin.v[2];
    sentient->oldOrigin.v[0] = v36;
    sentient->oldOrigin.v[1] = ent->r.currentOrigin.v[1];
    sentient->oldOrigin.v[2] = ent->r.currentOrigin.v[2];
    Sentient_CheckAndUpdateNearestData(ent->sentient, v37);
  }
  G_HeadIcons_Update(ent);
  G_TargetMarkerGroups_Update(ent);
  G_ActiveMP_DamageFeedback(ent);
  health = ent->health;
  v39 = client->ps.stats[2];
  client->ps.stats[0] = health;
  if ( health > v39 )
  {
    LODWORD(v81) = v39;
    LODWORD(attachIgnoreCollision) = health;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3171, ASSERT_TYPE_ASSERT, "( client->ps.stats[STAT_HEALTH] ) <= ( client->ps.stats[STAT_MAX_HEALTH] )", "client->ps.stats[STAT_HEALTH] <= client->ps.stats[STAT_MAX_HEALTH]\n\t%i, %i", attachIgnoreCollision, v81) )
      __debugbreak();
  }
  if ( client->ps.stats[2] <= 0 )
  {
    LODWORD(attachIgnoreCollision) = client->ps.stats[2];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3172, ASSERT_TYPE_ASSERT, "( client->ps.stats[STAT_MAX_HEALTH] ) > ( 0 )", "client->ps.stats[STAT_MAX_HEALTH] > 0\n\t%i, %i", attachIgnoreCollision, 0i64) )
      __debugbreak();
  }
  v40 = client->ps.stats[2];
  _XMM6 = 0i64;
  if ( v40 <= 0 )
  {
    v45 = 0;
  }
  else
  {
    v43 = 0i64;
    *(float *)&v43 = (float)client->ps.stats[0];
    _XMM0 = v43;
    __asm { vmaxss  xmm1, xmm0, xmm6 }
    v45 = (int)(float)((float)(*(float *)&_XMM1 / (float)v40) * 127.0);
  }
  client->sess.cs.healthRatio = v45;
  if ( v45 < 0 || v45 > 127 )
  {
    LODWORD(v82) = 127;
    LODWORD(attachIgnoreCollision) = v45;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3188, ASSERT_TYPE_ASSERT, "( 0 ) <= ( client->sess.cs.healthRatio ) && ( client->sess.cs.healthRatio ) <= ( ( 1 << 7 ) - 1 )", "client->sess.cs.healthRatio not in [0, ( 1 << HEALTH_RATIO_BITS ) - 1]\n\t%i not in [%i, %i]", attachIgnoreCollision, 0i64, v82) )
      __debugbreak();
  }
  client->ps.loopSound = truncate_cast<short,int>(ent->s.loopSound);
  *(_OWORD *)client->ps.sightedEnemyPlayersMask.array = *(_OWORD *)level.markedForEyesOn.array;
  *(double *)&client->ps.sightedEnemyPlayersMask.array[4] = *(double *)&level.markedForEyesOn.array[4];
  client->ps.sightedEnemyPlayersMask.array[6] = level.markedForEyesOn.array[6];
  client->ps.weaponHudIconOverrides[0] = client->sess.weaponHudIconOverrides[0];
  client->ps.weaponHudIconOverrides[1] = client->sess.weaponHudIconOverrides[1];
  client->ps.weaponHudIconOverrides[2] = client->sess.weaponHudIconOverrides[2];
  client->ps.weaponHudIconOverrides[3] = client->sess.weaponHudIconOverrides[3];
  client->ps.weaponHudIconOverrides[4] = client->sess.weaponHudIconOverrides[4];
  client->ps.weaponHudIconOverrides[5] = client->sess.weaponHudIconOverrides[5];
  client->ps.weaponHudIconOverrides[6] = client->sess.weaponHudIconOverrides[6];
  client->ps.weaponHudIconOverrides[7] = client->sess.weaponHudIconOverrides[7];
  client->ps.weaponHudIconOverrides[8] = client->sess.weaponHudIconOverrides[8];
  client->ps.weaponHudIconOverrides[9] = client->sess.weaponHudIconOverrides[9];
  eType = ent->s.eType;
  GameStatics = GStatic::GetGameStatics();
  v48 = ent->s.clientNum;
  v49 = (__int64)GameStatics->GetCharacterInfo(GameStatics, v48);
  v50 = v49;
  if ( (!v49 || !*(_DWORD *)(v49 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5242, ASSERT_TYPE_ASSERT, "( ci && ci->infoValid )", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4802, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  IsAgentEntity = SV_IsAgentEntity(ent);
  v52 = ent->s.number;
  if ( IsAgentEntity )
  {
    AgentState = G_MainMP_GetAgentState(v52);
    if ( *(_DWORD *)(v50 + 14636) != AgentState->playerASM_scripted_anim_start_time )
    {
      v54 = G_GetEntityPlayerState(ent);
      playerASM_scripted_anim_start_time = AgentState->playerASM_scripted_anim_start_time;
LABEL_165:
      *(_DWORD *)(v50 + 14636) = playerASM_scripted_anim_start_time;
      GPlayerASM_ForceUpdateEvent(v54, MOVEMENT, 1, &outDuration);
    }
  }
  else
  {
    ClientState = G_MainMP_GetClientState(v52);
    v57 = ClientState;
    if ( *(_DWORD *)(v50 + 14636) != ClientState->playerASM_scripted_anim_start_time )
    {
      BG_ScriptedAsmDebugPrint("g_active_mp sate change", level.time, (const characterInfo_t *const)v50, ClientState);
      v54 = G_GetEntityPlayerState(ent);
      playerASM_scripted_anim_start_time = v57->playerASM_scripted_anim_start_time;
      goto LABEL_165;
    }
  }
  Profile_Begin(360);
  v58 = ent->client;
  if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2742, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( SV_ClientMP_GetExtrapolatedState(ent->s.number, &outExtrapState) )
  {
    BG_PlayerExtrap_SavePlayerState(&v58->ps, &outSavedState);
    BG_PlayerExtrap_RestorePlayerState(&v58->ps, outExtrapState);
    ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(ent);
    GMovingPlatformClient::ApplyMoverDelta(ClientFromGEntity, &v58->ps);
    GMovingPlatforms::UpdatePlayerLocalOffset(&v58->ps);
    G_ActiveMP_PlayerStateToEntityState(ent);
    v60 = outExtrapState;
    ent->s.lerp.u.player.torsoPitchPacked = outExtrapState->torsoPitchPacked;
    ent->s.lerp.u.actor.lookAtEntityNum = v60->waistPitchPacked;
    BG_PlayerExtrap_RestorePlayerState(&v58->ps, &outSavedState);
  }
  else
  {
    G_ActiveMP_PlayerStateToEntityState(ent);
  }
  Profile_EndInternal(NULL);
  v61 = DCONST_DVARINT_g_debugPlayerSpectateStream;
  if ( !DCONST_DVARINT_g_debugPlayerSpectateStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugPlayerSpectateStream") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v61);
  integer = v61->current.integer;
  if ( integer >= 0 && integer < level.maxclients && integer != ent->s.number )
  {
    v63 = truncate_cast<short,int>(integer);
    G_WorldStreaming_SetNextStreamClientSpectate(v48, v63, 0);
  }
  if ( eType == ET_PLAYER )
    goto LABEL_184;
  if ( ent->s.eType == ET_PLAYER )
  {
    G_PhysicsCharacterProxy_AddCharacter(ent);
    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_g_DisablePlayerRepulsors, "g_DisablePlayerRepulsors") && !Nav_FindRepulsorByEntNum(ent->s.number) )
      G_Nav_AddPlayerRepulsor(ent->s.number);
LABEL_184:
    if ( ent->s.eType == ET_PLAYER )
    {
      v64 = 16;
      if ( ent->health > 0 )
        v64 = 14;
      ent->handler = v64;
      G_ActiveMP_PlayerStateToCharacterInfo(&client->ps, &ent->s, (characterInfo_t *)v50);
      G_ActiveMP_VehicleOccupancyUpdate(ent, (characterInfo_t *)v50);
      if ( client == (gclient_s *)-22068i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4918, ASSERT_TYPE_ASSERT, "( clientState )", (const char *)&queryFormat, "clientState") )
        __debugbreak();
      v12 = active == 0;
      *(_DWORD *)(v50 + 20) = client->sess.cs.modelindex;
      *(__m256i *)(v50 + 24) = *(__m256i *)client->sess.cs.attachModelIndex;
      *(_DWORD *)(v50 + 56) = client->sess.cs.attachModelIndex[8];
      if ( !v12 )
        G_Utils_DObjSafeFree(ent);
      ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
      Profile_Begin(364);
      v66 = ent->attachIgnoreCollision;
      Instance = GWeaponMap::GetInstance();
      BG_AnimationMP_UpdatePlayerDObj(LOCAL_CLIENT_INVALID, ServerDObjForEnt, Instance, &ent->s, (characterInfo_t *)v50, v66);
      Profile_EndInternal(NULL);
      G_ActiveMP_PostDObjClientUpdate((const characterInfo_t *)v50, &client->ps, &client->sess.cs);
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&client->ps.otherFlags, (POtherFlagsMP)34) )
      {
        if ( client->ps.clientNum != ent->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5289, ASSERT_TYPE_ASSERT, "(client->ps.clientNum == ent->s.number)", (const char *)&queryFormat, "client->ps.clientNum == ent->s.number") )
          __debugbreak();
        if ( BG_IsTurretActive(&client->ps) )
        {
          v68 = 2047;
          if ( client->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5292, ASSERT_TYPE_ASSERT, "(client->ps.viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "client->ps.viewlocked_entNum != ENTITYNUM_NONE") )
            __debugbreak();
          if ( !EntHandle::isDefined(&level.gentities[client->ps.viewlocked_entNum].r.ownerNum) || EntHandle::ent(&level.gentities[client->ps.viewlocked_entNum].r.ownerNum) != ent )
          {
            v69 = ent->s.number;
            if ( EntHandle::isDefined(&level.gentities[client->ps.viewlocked_entNum].r.ownerNum) )
            {
              gentities = level.gentities;
              viewlocked_entNum = client->ps.viewlocked_entNum;
              v72 = level.gentities[viewlocked_entNum].r.ownerNum.number;
              if ( (unsigned int)(v72 - 1) >= 0x7FF )
              {
                LODWORD(v81) = 2047;
                LODWORD(attachIgnoreCollisiona) = v72 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", attachIgnoreCollisiona, v81) )
                  __debugbreak();
              }
              v73 = gentities[viewlocked_entNum].r.ownerNum.number;
              if ( (unsigned int)(v73 - 1) >= 0x800 )
              {
                LODWORD(v81) = 2048;
                LODWORD(attachIgnoreCollisiona) = v73 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attachIgnoreCollisiona, v81) )
                  __debugbreak();
              }
              if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                __debugbreak();
              v74 = v73 - 1;
              if ( g_entities[v74].r.isInUse != g_entityIsInUse[v74] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
                __debugbreak();
              if ( !g_entityIsInUse[v74] )
              {
                LODWORD(v81) = gentities[viewlocked_entNum].r.ownerNum.number - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v81) )
                  __debugbreak();
              }
              v68 = (__int16)(gentities[viewlocked_entNum].r.ownerNum.number - 1);
            }
            LODWORD(v83) = v69;
            LODWORD(v82) = v68;
            LODWORD(v81) = client->ps.viewlocked_entNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5293, ASSERT_TYPE_ASSERT, "(level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined() && (level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent))", "%s\n\tviewlocked_entNum is %i, ownerNum is %i, ent->s.number is %i", "level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined() && (level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent)", v81, v82, v83) )
              __debugbreak();
          }
          v75 = &level.gentities[client->ps.viewlocked_entNum];
          if ( v75->r.isInUse )
            G_TurretMP_ThinkClient(v75);
          else
            BG_Turret_ClearPlayerstateOwnedTurret(&client->ps);
        }
      }
      G_Execution_Update(ent);
      if ( (client->ps.carryState.flags & 1) != 0 )
      {
        v76 = &g_entities[client->ps.clientNum];
        LeftHandIKTagName = BG_CarryObject_GetLeftHandIKTagName();
        if ( G_Utils_DObjGetWorldTagMatrix(v76, LeftHandIKTagName, &v98) )
        {
          *(__m256i *)v89.m[0].v = *(__m256i *)v98.m[0].v;
          __asm { vunpcklps xmm0, xmm6, xmm2 }
          *(double *)v87.v = *(double *)&_XMM0;
          *(_QWORD *)&_XMM0 = *(_QWORD *)client->ps.origin.v;
          origin.v[2] = 0.0;
          v87.v[2] = 0.0;
          v88.v[2] = client->ps.origin.v[2];
          *(double *)v88.v = *(double *)&_XMM0;
          *(_OWORD *)&v89.row2.z = *(_OWORD *)&v98.row2.z;
          BG_CarryObject_SetCharacterIKInfo(&v88, &v87, &v89, (characterInfo_t *)v50);
          *(_BYTE *)(v50 + 14680) = 1;
        }
        else
        {
          *(_BYTE *)(v50 + 14680) = 0;
        }
      }
      SV_ClientMP_SendClientPlayerData(ent->s.number);
      G_Omnvar_UpdatePmoveValues(ent->client);
    }
  }
  SV_ClientAntiCheatMP_LogPlayerAngles(ent, level.time);
  client->buttonsSinceLastFrame = 0i64;
}

/*
==============
G_ActiveMP_ClientEndFrame_Spectator
==============
*/
void G_ActiveMP_ClientEndFrame_Spectator(gentity_s *ent)
{
  gclient_s *client; 

  client = ent->client;
  if ( client->sess.sessionState == SESS_STATE_SPECTATOR )
  {
    Profile_Begin(357);
    G_ActiveMP_SpectatorClientEndFrame(ent);
    Profile_EndInternal(NULL);
    client->buttonsSinceLastFrame = 0i64;
    G_ActiveMP_RestorePersistentClientData(ent);
  }
}

/*
==============
G_ActiveMP_ClientThink
==============
*/
void G_ActiveMP_ClientThink(int clientNum, const usercmd_s *cmd)
{
  __int64 v3; 
  gentity_s *GEntity; 
  gclient_s *client; 
  __int64 v6; 
  __int64 v7; 
  const usercmd_s *p_cmd; 
  usercmd_s *p_oldcmd; 
  usercmd_s *v10; 
  __int128 v11; 
  usercmd_s *v12; 
  __int128 v13; 
  int v14; 
  const dvar_t *v15; 
  __int64 v16; 
  int outTaskFlags; 
  GClientTaskQueue *outTaskQueue; 

  v3 = clientNum;
  if ( !Sys_IsServerThread() && !Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2485, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread() || Sys_IsServerUserMoveWorker())", (const char *)&queryFormat, "Sys_IsServerThread() || Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  GEntity = G_GetGEntity(v3);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2495, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !GEntity->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2496, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  client = GEntity->client;
  v6 = 2i64;
  v7 = 2i64;
  p_cmd = &client->sess.cmd;
  p_oldcmd = &client->sess.oldcmd;
  v10 = &client->sess.cmd;
  do
  {
    p_oldcmd = (usercmd_s *)((char *)p_oldcmd + 128);
    v11 = *(_OWORD *)&v10->buttons;
    v10 = (usercmd_s *)((char *)v10 + 128);
    *(_OWORD *)&p_oldcmd[-1].offHand.attachmentVariationIndices[13] = v11;
    *(_OWORD *)&p_oldcmd[-1].offHand.weaponCamo = *(_OWORD *)&v10[-1].offHand.weaponCamo;
    *(_OWORD *)p_oldcmd[-1].remoteControlMove = *(_OWORD *)v10[-1].remoteControlMove;
    *(_OWORD *)p_oldcmd[-1].vehAngles = *(_OWORD *)v10[-1].vehAngles;
    *(_OWORD *)&p_oldcmd[-1].vehOrgZ = *(_OWORD *)&v10[-1].vehOrgZ;
    *(_OWORD *)&p_oldcmd[-1].gunYOfs = *(_OWORD *)&v10[-1].gunYOfs;
    *(_OWORD *)p_oldcmd[-1].sightedClientsMask.data = *(_OWORD *)v10[-1].sightedClientsMask.data;
    *(_OWORD *)&p_oldcmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v10[-1].sightedClientsMask.data[4];
    --v7;
  }
  while ( v7 );
  p_oldcmd->buttons = v10->buttons;
  v12 = (usercmd_s *)p_cmd;
  do
  {
    v12 = (usercmd_s *)((char *)v12 + 128);
    v13 = *(_OWORD *)&cmd->buttons;
    cmd = (const usercmd_s *)((char *)cmd + 128);
    *(_OWORD *)&v12[-1].offHand.attachmentVariationIndices[13] = v13;
    *(_OWORD *)&v12[-1].offHand.weaponCamo = *(_OWORD *)&cmd[-1].offHand.weaponCamo;
    *(_OWORD *)v12[-1].remoteControlMove = *(_OWORD *)cmd[-1].remoteControlMove;
    *(_OWORD *)v12[-1].vehAngles = *(_OWORD *)cmd[-1].vehAngles;
    *(_OWORD *)&v12[-1].vehOrgZ = *(_OWORD *)&cmd[-1].vehOrgZ;
    *(_OWORD *)&v12[-1].gunYOfs = *(_OWORD *)&cmd[-1].gunYOfs;
    *(_OWORD *)v12[-1].sightedClientsMask.data = *(_OWORD *)cmd[-1].sightedClientsMask.data;
    *(_OWORD *)&v12[-1].sightedClientsMask.data[4] = *(_OWORD *)&cmd[-1].sightedClientsMask.data[4];
    --v6;
  }
  while ( v6 );
  v12->buttons = cmd->buttons;
  G_GameInterface_OnClientThink(v3);
  if ( GClienThinkTaskManager::AllocateTaskQueue(&GClienThinkTaskManager::ms_clientTaskGlobalManager, v3, &outTaskQueue) )
  {
    if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2511, ASSERT_TYPE_ASSERT, "( taskQueue != nullptr )", (const char *)&queryFormat, "taskQueue != nullptr") )
      __debugbreak();
    outTaskFlags = 0;
    Sys_ProfBeginNamedEvent(0xFF00FFu, "G_ActiveMP_ClientThinkInternal");
    G_ActiveMP_ClientThinkInternal(GEntity, p_cmd, outTaskQueue, &outTaskFlags);
    Sys_ProfEndNamedEvent();
    v14 = outTaskFlags;
    if ( (unsigned int)v3 >= GClienThinkTaskManager::ms_clientTaskGlobalManager.m_allocatedClientCount )
    {
      LODWORD(v16) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 226, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( m_allocatedClientCount )", "clientNum doesn't index m_allocatedClientCount\n\t%i not in [0, %i)", v16, GClienThinkTaskManager::ms_clientTaskGlobalManager.m_allocatedClientCount) )
        __debugbreak();
    }
    if ( !GClienThinkTaskManager::ms_clientTaskGlobalManager.m_taskFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 227, ASSERT_TYPE_ASSERT, "( m_taskFlags )", (const char *)&queryFormat, "m_taskFlags") )
      __debugbreak();
    GClienThinkTaskManager::ms_clientTaskGlobalManager.m_taskFlags[v3] |= v14;
  }
  else
  {
    v15 = DCONST_DVARBOOL_sv_client_task_limit_assert;
    if ( !DCONST_DVARBOOL_sv_client_task_limit_assert && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_client_task_limit_assert") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      LODWORD(v16) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2525, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to allocate global task queue for client %i. This will lead to a missed command in ship.", v16) )
        __debugbreak();
    }
    Com_PrintError(34, "G_ActiveMP_ClientThink: Unable to allocate global task queue for client %i. This command will be droped.\n", (unsigned int)v3);
  }
}

/*
==============
G_ActiveMP_ClientThinkInternal
==============
*/
void G_ActiveMP_ClientThinkInternal(gentity_s *ent, const usercmd_s *ucmd, GClientTaskQueue *taskQueue, int *outTaskFlags)
{
  gclient_s *client; 
  int commandTime; 
  int v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  int integer; 
  const usercmd_s *v14; 
  usercmd_s *p_pmoveCmd; 
  __int64 v16; 
  __int64 v17; 
  sessionState_t sessionState; 
  gclient_s *v19; 
  unsigned __int64 buttons; 
  unsigned __int64 v21; 
  char *v22; 
  GStaticMP *GameStaticsMP; 
  __int64 number; 
  unsigned __int64 UseButtonMask; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  bool v28; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v30; 
  usercmd_s *p_cmd; 
  usercmd_s *v32; 
  __int64 v33; 
  usercmd_s *p_oldcmd; 
  usercmd_s *v35; 
  __int64 v36; 
  int v37; 
  int IsTestClient; 
  int Int_Internal_DebugName; 
  unsigned __int16 v40; 
  int UserCommandTime; 
  int v42; 
  bool Bool_Internal_DebugName; 
  double v44; 
  double v45; 
  size_t numtouch; 
  gclient_s *v47; 
  gclient_s *v48; 
  __int16 m_flags; 
  const Weapon *CurrentWeaponForPlayer; 
  char *fmt; 
  char *debugTaskName; 
  char *debugTaskNamea; 
  __int64 v54; 
  __int64 v55; 
  int msec; 
  GPlayerEventsMP *v57; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  __int64 v59; 
  GPMove Src; 
  int outRemoteEntNum[2]; 
  __int16 v62; 
  unsigned __int16 v63[2]; 
  __int128 v64; 
  float v65; 
  float v66; 
  __m256i mem; 
  __int128 v68; 
  __int64 v69; 
  int v70; 
  __m256i v71; 
  __int128 v72; 
  __int64 v73; 
  int v74; 
  bool prevAlternate; 
  bool v76; 
  usercmd_s pmoveCmd; 
  char taskData[272]; 
  PlayerViewValues outViewValues; 

  v59 = -2i64;
  *(_QWORD *)outRemoteEntNum = outTaskFlags;
  GPMove::GPMove(&Src);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2251, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ucmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2252, ASSERT_TYPE_ASSERT, "( ucmd != nullptr )", (const char *)&queryFormat, "ucmd != nullptr") )
    __debugbreak();
  if ( ucmd->serverTime > level.time )
  {
    LODWORD(debugTaskName) = ucmd->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2253, ASSERT_TYPE_ASSERT, "( ucmd->serverTime ) <= ( level.time )", "ucmd->serverTime <= level.time\n\t%i, %i", debugTaskName, level.time) )
      __debugbreak();
  }
  client = ent->client;
  *outTaskFlags = 0;
  if ( !GClientTaskQueue::ValidateOwner(taskQueue, ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2259, ASSERT_TYPE_ASSERT, "( taskQueue.ValidateOwner( ent ) )", (const char *)&queryFormat, "taskQueue.ValidateOwner( ent )") )
    __debugbreak();
  if ( client->sess.connected == CON_CONNECTED )
  {
    commandTime = client->ps.commandTime;
    v10 = Com_GetUserCommandTime(ucmd) - commandTime;
    v11 = DCONST_DVARINT_com_userCmdMinTimeStep;
    if ( !DCONST_DVARINT_com_userCmdMinTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMinTimeStep") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v10 >= v11->current.integer || client->ps.clientNum != G_GetEntityIndex(ent) )
    {
      v12 = DCONST_DVARINT_com_userCmdMaxTimeStep;
      if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      integer = v12->current.integer;
      if ( v10 < integer )
        integer = v10;
      msec = integer;
      if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
        G_FrontEndScene_UpdateClientState();
      v14 = ucmd;
      p_pmoveCmd = &pmoveCmd;
      v16 = 2i64;
      v17 = 2i64;
      do
      {
        *(__m256i *)&p_pmoveCmd->buttons = *(__m256i *)&v14->buttons;
        *(__m256i *)(&p_pmoveCmd->angles.xy + 1) = *(__m256i *)(&v14->angles.xy + 1);
        *(__m256i *)&p_pmoveCmd->weapon.attachmentVariationIndices[1] = *(__m256i *)&v14->weapon.attachmentVariationIndices[1];
        *(_OWORD *)&p_pmoveCmd->offHand.weaponIdx = *(_OWORD *)&v14->offHand.weaponIdx;
        p_pmoveCmd = (usercmd_s *)((char *)p_pmoveCmd + 128);
        *(_OWORD *)&p_pmoveCmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v14->offHand.weaponAttachments[2];
        v14 = (const usercmd_s *)((char *)v14 + 128);
        --v17;
      }
      while ( v17 );
      p_pmoveCmd->buttons = v14->buttons;
      G_Active_ClientThinkUpdateStateFlags(client, &pmoveCmd);
      sessionState = client->sess.sessionState;
      if ( sessionState == SESS_STATE_INTERMISSION )
      {
        Profile_Begin(349);
        v19 = ent->client;
        buttons = v19->buttons;
        v19->oldbuttons = buttons;
        v21 = ucmd->buttons;
        v19->buttons = ucmd->buttons;
        v19->buttonsSinceLastFrame |= v21 & ~buttons;
        Profile_EndInternal(NULL);
      }
      else if ( sessionState == SESS_STATE_SPECTATOR )
      {
        v22 = taskData;
        do
        {
          *(__m256i *)v22 = *(__m256i *)&ucmd->buttons;
          *((__m256i *)v22 + 1) = *(__m256i *)(&ucmd->angles.xy + 1);
          *((__m256i *)v22 + 2) = *(__m256i *)&ucmd->weapon.attachmentVariationIndices[1];
          *((_OWORD *)v22 + 6) = *(_OWORD *)&ucmd->offHand.weaponIdx;
          v22 += 128;
          *((_OWORD *)v22 - 1) = *(_OWORD *)&ucmd->offHand.weaponAttachments[2];
          ucmd = (const usercmd_s *)((char *)ucmd + 128);
          --v16;
        }
        while ( v16 );
        *(_QWORD *)v22 = ucmd->buttons;
        GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_SpectatorThinkCallback, taskData, 0x108u, 8u, "SpectatorThink");
      }
      else
      {
        GameStaticsMP = GStaticMP::GetGameStaticsMP();
        number = ent->s.number;
        if ( (unsigned int)number >= GameStaticsMP->m_characterCount )
        {
          LODWORD(v54) = GameStaticsMP->m_characterCount;
          LODWORD(debugTaskName) = ent->s.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( m_characterCount )", "entityIndex doesn't index m_characterCount\n\t%i not in [0, %i)", debugTaskName, v54) )
            __debugbreak();
        }
        v57 = &GameStaticsMP->m_playerEvents[number];
        v57->m_eventsEnabled = 1;
        G_ActiveMP_ValidateCommand(taskQueue, ent, &pmoveCmd);
        client->oldbuttons = client->buttons;
        UseButtonMask = G_PlayerUse_GetUseButtonMask(&client->ps);
        if ( !client->useButtonDone )
          client->oldbuttons &= ~UseButtonMask;
        v26 = pmoveCmd.buttons;
        client->buttons = pmoveCmd.buttons;
        if ( (v26 & UseButtonMask) == 0 )
          client->useButtonDone = 0;
        v27 = v26 & ~client->oldbuttons;
        client->latched_buttons = v27;
        client->buttonsSinceLastFrame |= v27;
        G_ActiveMP_UpdateLocationSelector(taskQueue, client, ucmd);
        client->currentAimSpreadScale = client->ps.weapCommon.aimSpreadScale * 0.0039215689;
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_aimSpreadDebugLog, "bg_aimSpreadDebugLog") )
        {
          LODWORD(debugTaskName) = ucmd->serverTime;
          LODWORD(fmt) = level.time;
          Com_Printf(17, "S: G_ActiveMP_ClientThinkInternal: client->currentAimSpreadScale: %.5f Aim spread scale: %.5f Server Time: %d Next cmd time: %d\n", client->currentAimSpreadScale, client->ps.weapCommon.aimSpreadScale, fmt, debugTaskName);
        }
        Src.ps = &client->ps;
        v28 = SV_UserMoveWorkersMP_IsInWorkerContext();
        Src.m_isUserMoveWorker = v28;
        PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(ent->s.number);
        PlayerTraceInfo->m_isUserMoveWorker = v28;
        CharacterInfo = GStaticMP::GetCharacterInfo(GameStaticsMP, ent->s.number);
        v30 = CharacterInfo;
        if ( (!CharacterInfo || !CharacterInfo->infoValid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2355, ASSERT_TYPE_ASSERT, "( ci && ci->infoValid )", (const char *)&queryFormat, "ci && ci->infoValid") )
          __debugbreak();
        G_Active_InitPmoveExternalSystems(&Src, ent->s.number, &client->ps, client->movingPlatformHandle);
        p_cmd = &Src.cmd;
        v32 = &pmoveCmd;
        v33 = 2i64;
        do
        {
          *(__m256i *)&p_cmd->buttons = *(__m256i *)&v32->buttons;
          *(__m256i *)(&p_cmd->angles.xy + 1) = *(__m256i *)(&v32->angles.xy + 1);
          *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1] = *(__m256i *)&v32->weapon.attachmentVariationIndices[1];
          *(_OWORD *)&p_cmd->offHand.weaponIdx = *(_OWORD *)&v32->offHand.weaponIdx;
          p_cmd = (usercmd_s *)((char *)p_cmd + 128);
          *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v32->offHand.weaponAttachments[2];
          v32 = (usercmd_s *)((char *)v32 + 128);
          --v33;
        }
        while ( v33 );
        p_cmd->buttons = v32->buttons;
        p_oldcmd = &client->sess.oldcmd;
        v35 = &Src.oldcmd;
        v36 = 2i64;
        do
        {
          *(_OWORD *)&v35->buttons = *(_OWORD *)&p_oldcmd->buttons;
          *(_OWORD *)&v35->commandTime = *(_OWORD *)&p_oldcmd->commandTime;
          *(_OWORD *)(&v35->angles.xy + 1) = *(_OWORD *)(&p_oldcmd->angles.xy + 1);
          *(_OWORD *)&v35->weapon.weaponOthers = *(_OWORD *)&p_oldcmd->weapon.weaponOthers;
          *(_OWORD *)&v35->weapon.attachmentVariationIndices[1] = *(_OWORD *)&p_oldcmd->weapon.attachmentVariationIndices[1];
          *(_OWORD *)&v35->weapon.attachmentVariationIndices[17] = *(_OWORD *)&p_oldcmd->weapon.attachmentVariationIndices[17];
          *(_OWORD *)&v35->offHand.weaponIdx = *(_OWORD *)&p_oldcmd->offHand.weaponIdx;
          v35 = (usercmd_s *)((char *)v35 + 128);
          *(_OWORD *)&v35[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_oldcmd->offHand.weaponAttachments[2];
          p_oldcmd = (usercmd_s *)((char *)p_oldcmd + 128);
          --v36;
        }
        while ( v36 );
        v35->buttons = p_oldcmd->buttons;
        Src.fTorsoPitch = v30->fTorsoPitch;
        Src.fWaistPitch = v30->fWaistPitch;
        v37 = 33636369;
        if ( Src.ps->pm_type >= 7 )
          v37 = 65553;
        Src.tracemask = v37;
        if ( SV_BotIsBotEnt(ent) == 1 || (IsTestClient = SV_ClientMP_IsTestClient(ent->s.number), Src.isBot = 0, IsTestClient) )
          Src.isBot = 1;
        Src.m_bgHandler = GHandler::getHandler();
        Src.localClientNum = LOCAL_CLIENT_INVALID;
        Src.bounds = &client->playerBox;
        Src.ground = &client->playerGround;
        Src.groundPersistent = &client->playerGroundPersistent;
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_g_speed, "g_speed");
        v40 = Int_Internal_DebugName;
        if ( (Int_Internal_DebugName < 0 || (unsigned int)Int_Internal_DebugName > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)Int_Internal_DebugName, "signed", Int_Internal_DebugName) )
          __debugbreak();
        client->ps.speed = v40;
        G_Deploy_Clear(&client->ps);
        if ( level.time > client->ps.shellshockTime + client->ps.shellshockDuration )
          client->ps.pm_flags.m_flags[0] &= ~0x200000u;
        UserCommandTime = Com_GetUserCommandTime(&Src.cmd);
        SV_GameMP_GetExtrapolatedData(ent->s.number, UserCommandTime, &client->extrapolatedData);
        if ( (Src.m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2395, ASSERT_TYPE_ASSERT, "((pm.m_flags & PMF_MANTLE_STARTED) == 0)", (const char *)&queryFormat, "(pm.m_flags & PMF_MANTLE_STARTED) == 0") )
          __debugbreak();
        G_Debug_TestPlayerCollisionPoint(ent);
        Profile_Begin(11);
        SV_Profile_BeginEvent(SVPROF_CLIENT_MOVE);
        Pmove(&Src);
        SV_Profile_EndEvent(SVPROF_CLIENT_MOVE);
        Profile_EndInternal(NULL);
        G_Debug_TestPlayerCollisionPoint(ent);
        G_Active_ApplyPMoveFlags(&Src, ent);
        v42 = msec;
        BG_AnimationMP_UpdateCharacterInfoHeightOffset(Src.ps, v30, Src.m_stepHeight, Src.m_flags, msec);
        client->sess.cs.heightOffset = v30->heightOffset;
        G_Execution_Check(taskQueue, &client->sess.oldcmd, &pmoveCmd, ent);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_execution_hint_enabled, "execution_hint_enabled") )
          G_Execution_UpdateHint(ent);
        v57->m_eventsEnabled = 0;
        if ( client->playerGround.walking )
        {
          client->flags |= 0x4000u;
          client->lastGroundOrigin.v[0] = client->ps.origin.v[0];
          client->lastGroundOrigin.v[1] = client->ps.origin.v[1];
          client->lastGroundOrigin.v[2] = client->ps.origin.v[2];
        }
        G_ActiveMP_UpdatePlayerView(client, &Src.cmd, v42, &outViewValues);
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_cameraUpdateOrderFix, "bg_cameraUpdateOrderFix");
        if ( Bool_Internal_DebugName )
          G_ActiveMP_UpdateViewAndWeaponTransforms(ent->client, &outViewValues);
        v44 = BG_AnimationMP_QuantizePitch(Src.fTorsoPitch);
        v30->fTorsoPitch = *(float *)&v44;
        v45 = BG_AnimationMP_QuantizePitch(Src.fWaistPitch);
        v30->fWaistPitch = *(float *)&v45;
        **(_DWORD **)outRemoteEntNum |= 1u;
        GPlayerEventsMP::HandlePMoveEvents(v57, taskQueue, ent);
        if ( !Bool_Internal_DebugName )
          G_ActiveMP_UpdateViewAndWeaponTransforms(ent->client, &outViewValues);
        G_PlayerUse_UpdateActivate(taskQueue, ent);
        numtouch = (unsigned int)Src.numtouch;
        if ( Src.numtouch )
        {
          DebugWipe(&mem, 0x64ui64);
          if ( (unsigned int)numtouch > 0x20 )
          {
            LODWORD(v54) = 32;
            LODWORD(debugTaskName) = numtouch;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1764, ASSERT_TYPE_ASSERT, "( numTouch ) <= ( ( sizeof( *array_counter( touchEntsParams.touchEnts ) ) + 0 ) )", "numTouch <= ARRAY_COUNT( touchEntsParams.touchEnts )\n\t%i, %i", debugTaskName, v54) )
              __debugbreak();
            LODWORD(v55) = 32;
            LODWORD(debugTaskNamea) = numtouch;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1765, ASSERT_TYPE_ASSERT, "( numTouch ) <= ( ( sizeof( *array_counter( touchEntsParams.toucherFlags ) ) + 0 ) )", "numTouch <= ARRAY_COUNT( touchEntsParams.toucherFlags )\n\t%i, %i", debugTaskNamea, v55) )
              __debugbreak();
          }
          mem.m256i_i32[0] = numtouch;
          memcpy_0((char *)mem.m256i_i64 + 4, Src.touchents, 2 * numtouch);
          memcpy_0(&v71.m256i_u64[1], Src.toucherflags, numtouch);
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_ClientThink_TouchEntsExecute, &mem, 0x64u, 4u, "TouchEnts");
        }
        v47 = ent->client;
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v47->ps.otherFlags, ACTIVE, 1u) && v47->ps.remoteEyesEnt != 2047 )
        {
          DebugWipe(outRemoteEntNum, 0xCui64);
          if ( G_Active_RemoteControlledEntityShouldUpdateAngles(ent, msec, outRemoteEntNum) )
          {
            outRemoteEntNum[1] = msec;
            v62 = *(_WORD *)ucmd->remoteControlAngles;
            GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_RemoteControlEnt, outRemoteEntNum, 0xCu, 4u, "RemoteControlEnt");
          }
        }
        v48 = ent->client;
        if ( v48->ps.vehicleState.entity != 2047 )
        {
          DebugWipe(&msec, 4ui64);
          msec = v48->ps.vehicleState.entity;
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_UpdateVehicleControlledEnt, &msec, 4u, 4u, "VehicleControlledEnt");
        }
        m_flags = Src.m_flags;
        if ( (Src.m_flags & 4) != 0 )
        {
          v63[0] = Src.glassBreakIndex;
          v64 = *(_OWORD *)Src.glassBreakPos.v;
          v65 = Src.glassBreakDir.v[1];
          v66 = Src.glassBreakDir.v[2];
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_BreakGlass, v63, 0x1Cu, 4u, "MoveBreakGlass");
          m_flags = Src.m_flags;
        }
        if ( (m_flags & 0x20) != 0 )
        {
          mem = *(__m256i *)&Src.prevWeapon.weaponIdx;
          v68 = *(_OWORD *)&Src.prevWeapon.attachmentVariationIndices[5];
          v69 = *(__int64 *)&Src.prevWeapon.attachmentVariationIndices[21];
          v70 = *(_DWORD *)&Src.prevWeapon.weaponCamo;
          prevAlternate = Src.prevAlternate;
          CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Src.weaponMap, Src.ps);
          v71 = *(__m256i *)&CurrentWeaponForPlayer->weaponIdx;
          v72 = *(_OWORD *)&CurrentWeaponForPlayer->attachmentVariationIndices[5];
          v73 = *(_QWORD *)&CurrentWeaponForPlayer->attachmentVariationIndices[21];
          v74 = *(_DWORD *)&CurrentWeaponForPlayer->weaponCamo;
          v76 = BG_UsingAlternate(Src.ps);
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_WeaponChanged, &mem, 0x7Au, 2u, "MoveWeaponChanged");
          m_flags = Src.m_flags;
        }
        if ( (m_flags & 0x400) != 0 )
        {
          mem = *(__m256i *)&Src.offhandAdsWeapon.weaponIdx;
          v68 = *(_OWORD *)&Src.offhandAdsWeapon.attachmentVariationIndices[5];
          v69 = *(__int64 *)&Src.offhandAdsWeapon.attachmentVariationIndices[21];
          v70 = *(_DWORD *)&Src.offhandAdsWeapon.weaponCamo;
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_OffhandADSOn, &mem, 0x3Cu, 2u, "MoveOffhandADSOn");
          m_flags = Src.m_flags;
        }
        if ( (m_flags & 0x800) != 0 )
        {
          mem = *(__m256i *)&Src.offhandAdsWeapon.weaponIdx;
          v68 = *(_OWORD *)&Src.offhandAdsWeapon.attachmentVariationIndices[5];
          v69 = *(__int64 *)&Src.offhandAdsWeapon.attachmentVariationIndices[21];
          v70 = *(_DWORD *)&Src.offhandAdsWeapon.weaponCamo;
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_OffhandADSOff, &mem, 0x3Cu, 2u, "MoveOffhandADSOff");
        }
        G_Door_SetOwnership(Src.ps);
        PlayerTraceInfo->m_isUserMoveWorker = 0;
      }
    }
  }
  GPMove::~GPMove(&Src);
}

/*
==============
G_ActiveMP_ClientThink_TouchEntsExecute
==============
*/
void G_ActiveMP_ClientThink_TouchEntsExecute(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  const void *ParameterInternal; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1737, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1738, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = GClientTaskQueue::GetParameterInternal(outputQueue, 0x64u, 4u);
  Profile_Begin(348);
  SV_Profile_BeginEvent(SVPROF_CLIENT_TOUCH);
  G_ActiveMP_TouchEnts(playerEnt, *(_DWORD *)ParameterInternal, (const __int16 *)ParameterInternal + 2, (const unsigned __int8 *)ParameterInternal + 68);
  SV_Profile_EndEvent(SVPROF_CLIENT_TOUCH);
  Profile_EndInternal(NULL);
}

/*
==============
G_ActiveMP_ClientValidateScriptable
==============
*/
void G_ActiveMP_ClientValidateScriptable(const gentity_s *clientEnt)
{
  const dvar_t *v2; 
  gclient_s *client; 

  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4870, ASSERT_TYPE_ASSERT, "( clientEnt )", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  if ( !clientEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4871, ASSERT_TYPE_ASSERT, "( clientEnt->client )", (const char *)&queryFormat, "clientEnt->client") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_scriptable_debug_determinism;
  client = clientEnt->client;
  if ( !DCONST_DVARBOOL_scriptable_debug_determinism && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_determinism") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && client->sess.connected == CON_CONNECTED && (unsigned int)(client->sess.sessionState - 2) > 1 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    if ( client->ps.cursorHintClass != USE_CLASS_SCRIPTABLE || ScriptableSv_GetInstanceInUse(client->ps.cursorHintEntIndex) )
    {
      G_ActiveMP_ValidateClientScriptable(clientEnt);
    }
    else
    {
      *(_WORD *)&client->ps.cursorHintData = 0;
      client->ps.cursorHintEntIndex = 2047;
    }
  }
}

/*
==============
G_ActiveMP_DamageFeedback
==============
*/
void G_ActiveMP_DamageFeedback(gentity_s *player)
{
  gclient_s *client; 
  unsigned __int8 damageEvent; 
  unsigned __int8 v4; 
  int damage_ricochet; 
  int damage_blood; 
  int v7; 
  int damage_armor; 
  const dvar_t *v9; 
  int v10; 
  bool v11; 
  int entity; 
  const VehicleDef *v13; 
  GHandler *Handler; 
  const VehicleDef *VehicleDef; 
  __int16 linkEnt; 
  gentity_s *GEntity; 
  gentity_s *v18; 
  unsigned int defIndex; 
  __int16 remoteControlEnt; 
  Vehicle *vehicle; 
  int maxHealth; 
  int v23; 
  int v24; 
  float v26; 
  float v27; 
  __int128 v28; 
  __int128 v33; 
  double v39; 
  unsigned __int8 v41; 
  unsigned __int8 v42; 
  unsigned __int8 v43; 
  float viewKickMax; 
  float viewKickScale; 
  float viewKickMin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  client = player->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 223, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->damage_clear_indicators )
  {
    damageEvent = client->ps.damageEvent;
    if ( damageEvent == 0xFF )
      v4 = 0;
    else
      v4 = damageEvent + 1;
    client->ps.damageEvent = v4;
    client->damageTime = level.time;
    client->ps.damageCount = 0;
    client->ps.damageType = 6;
    client->ps.damageModFlags = 0;
    *(_QWORD *)&client->damage_mod_flags = 0i64;
    *(_QWORD *)&client->damage_stun = 0i64;
    *(_QWORD *)&client->damage_armor = 0i64;
    client->damage_clear_indicators = 0;
    return;
  }
  if ( level.time - client->damageTime > 500 )
    client->ps.damageCount = 0;
  damage_ricochet = client->damage_ricochet;
  damage_blood = client->damage_blood;
  v7 = 0;
  if ( damage_ricochet > 0 && damage_ricochet == damage_blood )
    v7 = 3;
  damage_armor = client->damage_armor;
  if ( damage_armor > 0 && damage_armor == damage_blood )
    v7 = 4;
  if ( damage_blood > 0 )
    goto LABEL_30;
  if ( client->damage_stun > 0 )
  {
    v9 = DVARBOOL_player_stunWhiteFlash;
    damage_blood = client->damage_stun;
    v7 = 0;
    if ( !DVARBOOL_player_stunWhiteFlash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stunWhiteFlash") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
      v7 = 2;
  }
  v10 = damage_blood;
  if ( damage_blood > 0 )
    goto LABEL_30;
  damage_blood = client->damage_kick;
  v11 = damage_blood <= 0;
  if ( damage_blood <= 0 )
    damage_blood = v10;
  if ( !v11 )
    v7 = 5;
  if ( damage_blood > 0 )
  {
LABEL_30:
    entity = client->ps.vehicleState.entity;
    v13 = NULL;
    if ( entity && entity != 2047 )
    {
      Handler = GHandler::getHandler();
      VehicleDef = BG_GetVehicleDef(&client->ps, Handler);
LABEL_41:
      v13 = VehicleDef;
      goto LABEL_42;
    }
    linkEnt = client->ps.linkEnt;
    if ( linkEnt == 2047 )
    {
      remoteControlEnt = client->ps.remoteControlEnt;
      if ( remoteControlEnt != 2047 )
      {
        vehicle = G_GetGEntity(remoteControlEnt)->vehicle;
        if ( vehicle )
        {
          defIndex = vehicle->defIndex;
          goto LABEL_40;
        }
      }
    }
    else
    {
      GEntity = G_GetGEntity(linkEnt);
      v18 = GEntity;
      if ( GEntity->vehicle && G_Vehicle_ValidateLinkedOwner(GEntity, player) )
      {
        defIndex = v18->vehicle->defIndex;
LABEL_40:
        VehicleDef = G_Vehicle_GetServerDef(defIndex);
        goto LABEL_41;
      }
    }
LABEL_42:
    maxHealth = client->sess.maxHealth;
    if ( v13 )
      maxHealth = v13->health;
    if ( maxHealth > 0 )
    {
      v23 = I_clamp(100 * damage_blood / maxHealth, 1, 127);
      v24 = v23;
      _XMM8 = LODWORD(FLOAT_255_0);
      v26 = 0.0;
      if ( !v13 )
      {
        if ( client->ps.pm_type >= 7 )
          return;
        v28 = 0i64;
        v27 = (float)v23;
        *(float *)&v28 = (float)v23 + client->ps.weapCommon.aimSpreadScale;
        _XMM1 = v28;
        __asm
        {
          vcmpltss xmm0, xmm8, xmm1
          vblendvps xmm1, xmm1, xmm8, xmm0
        }
        v33 = _XMM1;
        *(float *)&v33 = *(float *)&_XMM1 + (float)v23;
        _XMM2 = v33;
        __asm
        {
          vcmpltss xmm0, xmm8, xmm2
          vblendvps xmm0, xmm2, xmm8, xmm0
        }
        client->ps.weapCommon.aimSpreadScale = *(float *)&_XMM0;
        viewKickMax = *(float *)&_XMM1;
        BG_GetDamageViewKickScaleValues(&client->ps, &client->sess.cmd, &viewKickScale, &viewKickMin, &viewKickMax);
        *(float *)&v33 = v27 * viewKickScale;
        *(float *)&_XMM6 = viewKickMin;
        if ( *(float *)&v33 >= viewKickMin )
        {
          _XMM0 = LODWORD(viewKickMax);
          __asm { vminss  xmm6, xmm0, xmm1 }
        }
        _XMM0 = LODWORD(client->ps.viewKickScale);
        if ( *(float *)&_XMM0 < 0.0 )
        {
          v39 = *(float *)&_XMM0;
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 366, ASSERT_TYPE_ASSERT, "( client->ps.viewKickScale ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "client->ps.viewKickScale", "0.0f", v39, *(double *)&_XMM0) )
            __debugbreak();
        }
        v26 = *(float *)&_XMM6 * client->ps.viewKickScale;
      }
      if ( client->damage_fromWorld )
      {
        client->v_dmg_pitch = COERCE_FLOAT(LODWORD(v26) ^ _xmm);
        client->v_dmg_roll = 0.0;
        v41 = -1;
        client->ps.damagePitch = -1;
        client->damage_fromWorld = 0;
      }
      else
      {
        AnglesToAxis(&client->ps.viewangles, &axis);
        client->v_dmg_roll = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(axis.m[1].v[1] * client->damage_from.v[1]) + (float)(axis.m[1].v[0] * client->damage_from.v[0])) + (float)(axis.m[1].v[2] * client->damage_from.v[2])) * v26) ^ _xmm);
        client->v_dmg_pitch = (float)((float)((float)(axis.m[0].v[1] * client->damage_from.v[1]) + (float)(axis.m[0].v[0] * client->damage_from.v[0])) + (float)(axis.m[0].v[2] * client->damage_from.v[2])) * v26;
        vectoangles(&client->damage_from, &angles);
        client->ps.damagePitch = truncate_cast<unsigned char,int>((int)(float)((float)(0.0027777778 * angles.v[0]) * 255.0));
        v41 = truncate_cast<unsigned char,int>((int)(float)((float)(0.0027777778 * angles.v[1]) * 255.0));
      }
      client->ps.damageYaw = v41;
      v42 = client->ps.damageEvent;
      if ( v42 == 0xFF )
        v43 = 0;
      else
        v43 = v42 + 1;
      client->ps.damageEvent = v43;
      client->damageTime = level.time - 20;
      client->ps.damageCount = truncate_cast<unsigned char,int>(v24);
      client->ps.damageModFlags = client->damage_mod_flags;
      *(_QWORD *)&client->damage_mod_flags = 0i64;
      client->ps.damageType = v7;
      *(_QWORD *)&client->damage_stun = 0i64;
      *(_QWORD *)&client->damage_armor = 0i64;
    }
  }
}

/*
==============
G_ActiveMP_ExtrapolatePlayer
==============
*/
void G_ActiveMP_ExtrapolatePlayer(int clientNum, const usercmd_s *const ucmd, SavedPlayerState *const outExtrapState)
{
  gentity_s *GEntity; 
  gclient_s *client; 
  GWeaponMap *Instance; 
  GWeaponMap *v8; 
  __int64 p_oldcmd; 
  char *v10; 
  __int64 v11; 
  __int64 v12; 
  usercmd_s *p_cmd; 
  usercmd_s *v14; 
  usercmd_s *v15; 
  usercmd_s *v16; 
  __int64 v17; 
  usercmd_s *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  bool v22; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  usercmd_s *v24; 
  usercmd_s *v25; 
  __int64 v26; 
  usercmd_s *v27; 
  usercmd_s *v28; 
  __int64 v29; 
  double v30; 
  double v31; 
  int v32; 
  int IsTestClient; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  usercmd_s *v36; 
  __int64 v37; 
  char *v38; 
  GWeaponMap *v39; 
  GHandler *Handler; 
  PlayerWeaponAnimArrays *v41; 
  void *v42; 
  char v44[272]; 
  char v45[14800]; 
  char Src[16736]; 
  GPMove v47; 
  playerState_s dstPs; 

  dstPs.meleeReaction.m_packed = 0;
  GPMove::GPMove(&v47);
  if ( !ucmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2621, ASSERT_TYPE_ASSERT, "( ucmd )", (const char *)&queryFormat, "ucmd") )
    __debugbreak();
  GEntity = G_GetGEntity(clientNum);
  client = GEntity->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2625, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  Handler = GHandler::getHandler();
  memset_0(&dstPs, 0, sizeof(dstPs));
  Instance = GWeaponMap::GetInstance();
  v8 = GWeaponMap::GetInstance();
  G_Client_CopyPlayerState(v8, &dstPs, Instance, &client->ps);
  p_oldcmd = (__int64)&GEntity->client->sess.oldcmd;
  v10 = v44;
  v11 = 2i64;
  v12 = 2i64;
  do
  {
    *(__m256i *)v10 = *(__m256i *)p_oldcmd;
    *((__m256i *)v10 + 1) = *(__m256i *)(p_oldcmd + 32);
    *((__m256i *)v10 + 2) = *(__m256i *)(p_oldcmd + 64);
    *((_OWORD *)v10 + 6) = *(_OWORD *)(p_oldcmd + 96);
    v10 += 128;
    *((_OWORD *)v10 - 1) = *(_OWORD *)(p_oldcmd + 112);
    p_oldcmd += 128i64;
    --v12;
  }
  while ( v12 );
  *(_QWORD *)v10 = *(_QWORD *)p_oldcmd;
  p_cmd = &client->sess.cmd;
  v14 = &client->sess.oldcmd;
  v15 = &client->sess.oldcmd;
  v16 = &client->sess.cmd;
  v17 = 2i64;
  do
  {
    *(__m256i *)&v15->buttons = *(__m256i *)&v16->buttons;
    *(__m256i *)(&v15->angles.xy + 1) = *(__m256i *)(&v16->angles.xy + 1);
    *(__m256i *)&v15->weapon.attachmentVariationIndices[1] = *(__m256i *)&v16->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v15->offHand.weaponIdx = *(_OWORD *)&v16->offHand.weaponIdx;
    v15 = (usercmd_s *)((char *)v15 + 128);
    *(_OWORD *)&v15[-1].sightedClientsMask.data[4] = *(_OWORD *)&v16->offHand.weaponAttachments[2];
    v16 = (usercmd_s *)((char *)v16 + 128);
    --v17;
  }
  while ( v17 );
  v15->buttons = v16->buttons;
  v18 = &client->sess.cmd;
  v19 = 2i64;
  do
  {
    *(_OWORD *)&v18->buttons = *(_OWORD *)&ucmd->buttons;
    *(_OWORD *)&v18->commandTime = *(_OWORD *)&ucmd->commandTime;
    *(_OWORD *)(&v18->angles.xy + 1) = *(_OWORD *)(&ucmd->angles.xy + 1);
    *(_OWORD *)&v18->weapon.weaponOthers = *(_OWORD *)&ucmd->weapon.weaponOthers;
    *(_OWORD *)&v18->weapon.attachmentVariationIndices[1] = *(_OWORD *)&ucmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v18->weapon.attachmentVariationIndices[17] = *(_OWORD *)&ucmd->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v18->offHand.weaponIdx = *(_OWORD *)&ucmd->offHand.weaponIdx;
    v18 = (usercmd_s *)((char *)v18 + 128);
    *(_OWORD *)&v18[-1].sightedClientsMask.data[4] = *(_OWORD *)&ucmd->offHand.weaponAttachments[2];
    ucmd = (const usercmd_s *const)((char *)ucmd + 128);
    --v19;
  }
  while ( v19 );
  v18->buttons = ucmd->buttons;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v20 = *(_QWORD *)&GStatic::ms_gameStatics;
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 48i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)GEntity->s.number);
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2641, ASSERT_TYPE_ASSERT, "( playerEvents != nullptr )", (const char *)&queryFormat, "playerEvents != nullptr") )
    __debugbreak();
  v42 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 224i64))(v20, (unsigned int)GEntity->s.number);
  memcpy_0(v45, v42, 0x39C8ui64);
  v41 = Handler->PlayerWeaponAnims(Handler, &dstPs);
  memcpy_0(Src, v41, sizeof(Src));
  *(_BYTE *)(v21 + 208) = 0;
  v47.ps = &dstPs;
  v22 = SV_UserMoveWorkersMP_IsInWorkerContext();
  v47.m_isUserMoveWorker = v22;
  PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(GEntity->s.number);
  PlayerTraceInfo->m_isUserMoveWorker = v22;
  G_Active_InitPmoveExternalSystems(&v47, GEntity->s.number, &dstPs, client->movingPlatformHandle);
  v24 = &client->sess.cmd;
  v25 = &v47.cmd;
  v26 = 2i64;
  do
  {
    *(_OWORD *)&v25->buttons = *(_OWORD *)&v24->buttons;
    *(_OWORD *)&v25->commandTime = *(_OWORD *)&v24->commandTime;
    *(_OWORD *)(&v25->angles.xy + 1) = *(_OWORD *)(&v24->angles.xy + 1);
    *(_OWORD *)&v25->weapon.weaponOthers = *(_OWORD *)&v24->weapon.weaponOthers;
    *(_OWORD *)&v25->weapon.attachmentVariationIndices[1] = *(_OWORD *)&v24->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v25->weapon.attachmentVariationIndices[17] = *(_OWORD *)&v24->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v25->offHand.weaponIdx = *(_OWORD *)&v24->offHand.weaponIdx;
    v25 = (usercmd_s *)((char *)v25 + 128);
    *(_OWORD *)&v25[-1].sightedClientsMask.data[4] = *(_OWORD *)&v24->offHand.weaponAttachments[2];
    v24 = (usercmd_s *)((char *)v24 + 128);
    --v26;
  }
  while ( v26 );
  v25->buttons = v24->buttons;
  v27 = &client->sess.oldcmd;
  v28 = &v47.oldcmd;
  v29 = 2i64;
  do
  {
    *(_OWORD *)&v28->buttons = *(_OWORD *)&v27->buttons;
    *(_OWORD *)&v28->commandTime = *(_OWORD *)&v27->commandTime;
    *(_OWORD *)(&v28->angles.xy + 1) = *(_OWORD *)(&v27->angles.xy + 1);
    *(_OWORD *)&v28->weapon.weaponOthers = *(_OWORD *)&v27->weapon.weaponOthers;
    *(_OWORD *)&v28->weapon.attachmentVariationIndices[1] = *(_OWORD *)&v27->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v28->weapon.attachmentVariationIndices[17] = *(_OWORD *)&v27->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v28->offHand.weaponIdx = *(_OWORD *)&v27->offHand.weaponIdx;
    v28 = (usercmd_s *)((char *)v28 + 128);
    *(_OWORD *)&v28[-1].sightedClientsMask.data[4] = *(_OWORD *)&v27->offHand.weaponAttachments[2];
    v27 = (usercmd_s *)((char *)v27 + 128);
    --v29;
  }
  while ( v29 );
  v28->buttons = v27->buttons;
  v30 = BG_AnimationMP_UnpackPitch(GEntity->s.lerp.u.player.torsoPitchPacked);
  v47.fTorsoPitch = *(float *)&v30;
  v31 = BG_AnimationMP_UnpackPitch(GEntity->s.lerp.u.player.waistPitchPacked);
  v47.fWaistPitch = *(float *)&v31;
  v32 = 33636369;
  if ( v47.ps->pm_type >= 7 )
    v32 = 65553;
  v47.tracemask = v32;
  if ( SV_BotIsBotEnt(GEntity) == 1 || (IsTestClient = SV_ClientMP_IsTestClient(GEntity->s.number), v47.isBot = 0, IsTestClient) )
    v47.isBot = 1;
  v47.m_bgHandler = Handler;
  v47.localClientNum = LOCAL_CLIENT_INVALID;
  v47.bounds = &client->playerBox;
  v47.ground = &client->playerGround;
  v47.groundPersistent = &client->playerGroundPersistent;
  v34 = DCONST_DVARBOOL_g_extrapolation_full_move;
  if ( !DCONST_DVARBOOL_g_extrapolation_full_move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_extrapolation_full_move") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  v47.isExtrapolation = !v34->current.enabled;
  if ( (v47.m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2677, ASSERT_TYPE_ASSERT, "( (pm.m_flags & PMF_MANTLE_STARTED) == 0 )", (const char *)&queryFormat, "(pm.m_flags & PMF_MANTLE_STARTED) == 0") )
    __debugbreak();
  v35 = DCONST_DVARBOOL_g_extrapolation_full_move;
  if ( !DCONST_DVARBOOL_g_extrapolation_full_move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_extrapolation_full_move") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.enabled )
  {
    Profile_Begin(11);
    Pmove(&v47);
  }
  else
  {
    Profile_Begin(824);
    PM_ExtrapolateMove(&v47);
  }
  Profile_EndInternal(NULL);
  v36 = &client->sess.oldcmd;
  v37 = 2i64;
  do
  {
    *(__m256i *)&p_cmd->buttons = *(__m256i *)&v36->buttons;
    *(__m256i *)(&p_cmd->angles.xy + 1) = *(__m256i *)(&v36->angles.xy + 1);
    *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1] = *(__m256i *)&v36->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&p_cmd->offHand.weaponIdx = *(_OWORD *)&v36->offHand.weaponIdx;
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v36->offHand.weaponAttachments[2];
    v36 = (usercmd_s *)((char *)v36 + 128);
    --v37;
  }
  while ( v37 );
  p_cmd->buttons = v36->buttons;
  v38 = v44;
  do
  {
    *(__m256i *)&v14->buttons = *(__m256i *)v38;
    *(__m256i *)(&v14->angles.xy + 1) = *((__m256i *)v38 + 1);
    *(__m256i *)&v14->weapon.attachmentVariationIndices[1] = *((__m256i *)v38 + 2);
    *(_OWORD *)&v14->offHand.weaponIdx = *((_OWORD *)v38 + 6);
    v14 = (usercmd_s *)((char *)v14 + 128);
    *(_OWORD *)&v14[-1].sightedClientsMask.data[4] = *((_OWORD *)v38 + 7);
    v38 += 128;
    --v11;
  }
  while ( v11 );
  v14->buttons = *(_QWORD *)v38;
  PlayerTraceInfo->m_isUserMoveWorker = 0;
  memcpy_0(v41, Src, sizeof(PlayerWeaponAnimArrays));
  memcpy_0(v42, v45, 0x39C8ui64);
  BG_PlayerExtrap_SavePlayerState(&dstPs, outExtrapState);
  outExtrapState->torsoPitchPacked = BG_AnimationMP_PackPitch(v47.fTorsoPitch);
  outExtrapState->waistPitchPacked = BG_AnimationMP_PackPitch(v47.fWaistPitch);
  v39 = GWeaponMap::GetInstance();
  BG_ClearPlayerWeapons(v39, &dstPs);
  GPMove::~GPMove(&v47);
}

/*
==============
G_ActiveMP_FinishClientEndFrameWorkers
==============
*/
void G_ActiveMP_FinishClientEndFrameWorkers(void)
{
  GWeaponMap *Instance; 
  unsigned int v1; 
  __int64 v2; 
  __int64 v3; 
  char v4; 
  gentity_s *v5; 
  __int64 v6; 
  __int64 v7; 
  ClientEndFrameWorkFlags workFlags[52]; 

  SV_ClientWorkersMP_FinishActiveClientEndFrame(workFlags);
  Instance = GWeaponMap::GetInstance();
  GWeaponMap::EndWorkerProcessing(Instance);
  v1 = 0;
  if ( level.maxclients > 0 )
  {
    v2 = 0i64;
    v3 = 0i64;
    do
    {
      if ( v1 >= 0x800 )
      {
        LODWORD(v7) = 2048;
        LODWORD(v6) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v2].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        v4 = *((_BYTE *)workFlags + v3);
        if ( (v4 & 1) != 0 )
        {
          if ( v1 >= 0x800 )
          {
            LODWORD(v7) = 2048;
            LODWORD(v6) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v5 = &g_entities[v1];
          G_PlayerUse_ProcessHintEntity(v5);
          G_PlayerUse_ProcessAutoUseEntities(v5);
          v4 = *((_BYTE *)workFlags + v3);
        }
        if ( (v4 & 0x10) != 0 )
        {
          G_EntityMarks_NotifyEntityMarks(v1);
          v4 = *((_BYTE *)workFlags + v3);
        }
        if ( (v4 & 2) != 0 )
        {
          G_ActiveMP_PlayerHitboxes(v1);
          v4 = *((_BYTE *)workFlags + v3);
        }
        if ( (v4 & 0x40) != 0 )
          G_ActiveMP_SendSeenPlayerNotifies(v1);
      }
      ++v1;
      ++v3;
      ++v2;
    }
    while ( (int)v1 < level.maxclients );
  }
}

/*
==============
G_ActiveMP_FinishClientEntityLoDWorkers
==============
*/

void G_ActiveMP_FinishClientEntityLoDWorkers(void)
{
  SV_ClientWorkersMP_FinishEntityLoDUpdate();
}

/*
==============
G_ActiveMP_FinishClientTriggerWorkers
==============
*/

void G_ActiveMP_FinishClientTriggerWorkers(void)
{
  SV_ClientWorkersMP_FinishClientTriggersUpdate();
}

/*
==============
G_ActiveMP_FireRecoil
==============
*/
void G_ActiveMP_FireRecoil(const gentity_s *ent, playerState_s *ps, const BgWeaponMap *const weaponMap, int event, const vec3_t *kickAngles, vec3_t *outKickAVel, bool *outKickNeedsToCrossCenter)
{
  gagent_s *agent; 
  bool *outGunNeedsToCrossCenter; 
  vec2_t *outGunKickAVel; 
  const vec2_t *gunKickAngles; 
  gclient_s *client; 
  const usercmd_s *EntityUserCmdConst; 
  int pitchmove; 
  int yawmove; 
  PlayerHandIndex HandFromWeaponEvent; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1204, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1205, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( SV_IsAgentEntity(ent) )
  {
    if ( !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1213, ASSERT_TYPE_ASSERT, "(ent->agent)", (const char *)&queryFormat, "ent->agent") )
      __debugbreak();
    if ( ent->s.eType != ET_AGENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1214, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_AGENT)", (const char *)&queryFormat, "ent->s.eType == ET_AGENT") )
      __debugbreak();
    agent = ent->agent;
    outGunNeedsToCrossCenter = &agent->playerViewState.weapMoveState.recoilNeedsToCrossCenter;
    outGunKickAVel = (vec2_t *)&agent->playerViewState.weapMoveState.recoilSpeed;
    gunKickAngles = (const vec2_t *)&agent->playerViewState.weapMoveState.recoilAngles;
  }
  else
  {
    if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1219, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    client = ent->client;
    outGunNeedsToCrossCenter = &client->playerViewState.weapMoveState.recoilNeedsToCrossCenter;
    outGunKickAVel = (vec2_t *)&client->playerViewState.weapMoveState.recoilSpeed;
    gunKickAngles = (const vec2_t *)&client->playerViewState.weapMoveState.recoilAngles;
  }
  EntityUserCmdConst = G_GetEntityUserCmdConst(ent);
  pitchmove = EntityUserCmdConst->pitchmove;
  yawmove = EntityUserCmdConst->yawmove;
  HandFromWeaponEvent = BG_GetHandFromWeaponEvent(event);
  BG_WeaponFireRecoil(weaponMap, ps, HandFromWeaponEvent, (float)pitchmove, (float)yawmove, gunKickAngles, (const vec2_t *)kickAngles, outGunKickAVel, outGunNeedsToCrossCenter, outKickAVel, outKickNeedsToCrossCenter);
}

/*
==============
G_ActiveMP_GetCycleSpectatorClientNum
==============
*/
__int64 G_ActiveMP_GetCycleSpectatorClientNum(const gclient_s *const client, int *const pArchiveTime, const int currentClientNum, const int dir)
{
  int maxclients; 
  int v9; 
  gentity_s *GEntity; 
  __int64 v12; 
  __int64 v13; 
  team_t outTeam; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3867, ASSERT_TYPE_ASSERT, "( ( client != nullptr ) )", "%s\n\t( client ) = %p", "( client != nullptr )", NULL) )
    __debugbreak();
  maxclients = level.maxclients;
  if ( currentClientNum < 0 )
    currentClientNum = 0;
  v9 = currentClientNum;
  while ( 1 )
  {
    currentClientNum += dir;
    if ( currentClientNum < maxclients )
    {
      if ( currentClientNum < 0 )
        currentClientNum = maxclients - 1;
    }
    else
    {
      currentClientNum = 0;
    }
    if ( client->ps.clientNum == currentClientNum )
      goto LABEL_30;
    if ( SvClient::GetCommonClient(currentClientNum)->state == CS_ACTIVE )
    {
      if ( (unsigned int)currentClientNum >= 0x800 )
      {
        LODWORD(v13) = 2048;
        LODWORD(v12) = currentClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[currentClientNum].r.isInUse != g_entityIsInUse[currentClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[currentClientNum] && SV_SnapshotMP_GetArchivedClientTeam(currentClientNum, 0, pArchiveTime, &outTeam) && G_ActiveMP_ClientCanSpectateTeam(client, outTeam) )
      {
        GEntity = G_GetGEntity(currentClientNum);
        if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3909, ASSERT_TYPE_ASSERT, "( ( gent != nullptr ) )", "( gent ) = %p", NULL) )
          __debugbreak();
        if ( GEntity->s.eType != ET_INVISIBLE )
          return (unsigned int)currentClientNum;
      }
    }
    maxclients = level.maxclients;
LABEL_30:
    if ( currentClientNum == v9 )
      return 0xFFFFFFFFi64;
  }
}

/*
==============
G_ActiveMP_GetEntityLoD
==============
*/
EntityLoDs *G_ActiveMP_GetEntityLoD(const int clientNum)
{
  __int64 v1; 
  int maxclients; 

  v1 = clientNum;
  if ( (unsigned int)clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3161, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  return &level.clients[v1].entityLoDs;
}

/*
==============
G_ActiveMP_GetFollowPlayerState
==============
*/
__int64 G_ActiveMP_GetFollowPlayerState(int clientNum, playerState_s *ps)
{
  __int64 v3; 
  gclient_s *v4; 
  const playerState_s *EntityPlayerStateConst; 
  int time; 
  const dvar_t *v8; 
  unsigned int v9; 
  playerState_s::<unnamed_type_hud> *i; 
  __int64 v11; 
  __int64 v12; 
  char *v13; 
  __int64 v14; 
  __int64 v15; 
  SavedPlayerState *outExtrapState; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3953, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  v4 = &level.clients[v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3955, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( v4 != g_entities[v3].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3956, ASSERT_TYPE_ASSERT, "( client == g_entities[clientNum].client )", (const char *)&queryFormat, "client == g_entities[clientNum].client") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)v3 >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v15) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3968, ASSERT_TYPE_ASSERT, "(unsigned)( psEntNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "psEntNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(&g_entities[v3]);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3972, ASSERT_TYPE_ASSERT, "( srcPs )", (const char *)&queryFormat, "srcPs") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->otherFlags, ACTIVE, 0x22u) )
    return 0i64;
  if ( ps )
  {
    memcpy_0(ps, EntityPlayerStateConst, sizeof(playerState_s));
    time = v4->extrapolatedData.time;
    if ( time )
    {
      ps->commandTime = EntityPlayerStateConst->commandTime + time;
      ps->inputTime = EntityPlayerStateConst->inputTime + v4->extrapolatedData.inputTime;
      ps->origin.v[0] = EntityPlayerStateConst->origin.v[0] + v4->extrapolatedData.offset.v[0];
      ps->origin.v[1] = EntityPlayerStateConst->origin.v[1] + v4->extrapolatedData.offset.v[1];
      ps->origin.v[2] = EntityPlayerStateConst->origin.v[2] + v4->extrapolatedData.offset.v[2];
      *(double *)ps->packedBobCycle = *(double *)v4->extrapolatedData.packedBobCycle;
    }
    v8 = DVARBOOL_command_extrapolation_spectate;
    if ( !DVARBOOL_command_extrapolation_spectate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_extrapolation_spectate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( *(int *)&SvClient::GetCommonClient(v3)[602].lastUsercmd.weapon.attachmentVariationIndices[21] <= 0 && SV_ClientMP_GetExtrapolatedState(v3, &outExtrapState) )
        BG_PlayerExtrap_RestorePlayerState(ps, outExtrapState);
    }
    v9 = 0;
    for ( i = &ps->hud; i->current[0].type; i = (playerState_s::<unnamed_type_hud> *)((char *)i + 184) )
    {
      memset_0(&ps->hud.current[v9], 0, sizeof(ps->hud.current[v9]));
      if ( i->current[0].type )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4011, ASSERT_TYPE_ASSERT, "( ps->hud.current[index].type == HE_TYPE_FREE )", (const char *)&queryFormat, "ps->hud.current[index].type == HE_TYPE_FREE") )
          __debugbreak();
      }
      if ( ++v9 >= 0x1E )
        return 1i64;
    }
    v11 = 184i64 * v9;
    v12 = 30 - v9;
    v13 = (char *)&ps->hud + v11;
    do
    {
      if ( memcmp_0(v13, &g_dummyHudCurrent, 0xB8ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4018, ASSERT_TYPE_ASSERT, "(!I_memcmp( &ps->hud.current[index], &g_dummyHudCurrent, sizeof( g_dummyHudCurrent ) ))", (const char *)&queryFormat, "!I_memcmp( &ps->hud.current[index], &g_dummyHudCurrent, sizeof( g_dummyHudCurrent ) )") )
        __debugbreak();
      v13 += 184;
      --v12;
    }
    while ( v12 );
  }
  return 1i64;
}

/*
==============
G_ActiveMP_GetPlayerVehicle
==============
*/
gentity_s *G_ActiveMP_GetPlayerVehicle(const gentity_s *const playerEnt, bool *outPlayerLinked, bool *outPlayerPredicted)
{
  const playerState_s *EntityPlayerStateConst; 
  bool v7; 
  int RemoteControlledVehicleEntityNum; 
  GHandler *Handler; 
  const characterInfo_t *v10; 
  GHandler *v11; 
  gentity_s *GEntity; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 630, ASSERT_TYPE_ASSERT, "( playerEnt != nullptr )", (const char *)&queryFormat, "playerEnt != nullptr") )
    __debugbreak();
  if ( !outPlayerLinked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 631, ASSERT_TYPE_ASSERT, "( outPlayerLinked != nullptr )", (const char *)&queryFormat, "outPlayerLinked != nullptr") )
    __debugbreak();
  if ( !outPlayerPredicted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 632, ASSERT_TYPE_ASSERT, "( outPlayerPredicted != nullptr )", (const char *)&queryFormat, "outPlayerPredicted != nullptr") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 635, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  *outPlayerLinked = 0;
  v7 = EntityPlayerStateConst->vehicleState.entity == 2047;
  *outPlayerPredicted = EntityPlayerStateConst->vehicleState.entity != 2047;
  if ( v7 )
  {
    Handler = GHandler::getHandler();
    RemoteControlledVehicleEntityNum = BG_GetRemoteControlledVehicleEntityNum(EntityPlayerStateConst, Handler);
  }
  else
  {
    RemoteControlledVehicleEntityNum = EntityPlayerStateConst->vehicleState.entity;
  }
  if ( RemoteControlledVehicleEntityNum == 2047 )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v10 = (const characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)playerEnt->s.number);
    v11 = GHandler::getHandler();
    RemoteControlledVehicleEntityNum = BG_VehicleOccupancy_GetLinkedVehicle(v11, &playerEnt->s, v10, &outVehicleType, &outVehicleSeat);
    if ( RemoteControlledVehicleEntityNum == 2047 )
      return 0i64;
  }
  GEntity = G_GetGEntity(RemoteControlledVehicleEntityNum);
  if ( G_EntIsLinked(playerEnt) )
  {
    if ( !playerEnt->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 662, ASSERT_TYPE_ASSERT, "( playerEnt->tagInfo != nullptr )", (const char *)&queryFormat, "playerEnt->tagInfo != nullptr") )
      __debugbreak();
    if ( !playerEnt->tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 663, ASSERT_TYPE_ASSERT, "( playerEnt->tagInfo->parent != nullptr )", (const char *)&queryFormat, "playerEnt->tagInfo->parent != nullptr") )
      __debugbreak();
    if ( playerEnt->tagInfo->parent->s.number == GEntity->s.number )
      *outPlayerLinked = 1;
  }
  return GEntity;
}

/*
==============
G_ActiveMP_IntermissionClientEndFrame
==============
*/
void G_ActiveMP_IntermissionClientEndFrame(gentity_s *ent)
{
  gclient_s *client; 
  const char *v3; 
  const char *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3196, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3197, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_INTERMISSION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_INTERMISSION )") )
    __debugbreak();
  ent->r.svFlags &= ~2u;
  ent->r.svFlags |= 1u;
  client = ent->client;
  SV_LinkEntity(ent);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x22u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x23u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x24u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x25u);
  client->ps.pm_type = 6;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 0x10u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 0xAu);
  client->ps.viewmodelIndex = 0;
  ent->s.eType = ET_INVISIBLE;
  G_PhysicsCharacterProxy_RemoveCharacter(ent);
  v3 = j_va("%i", (unsigned int)level.teamScores[1]);
  SV_SetConfigstring(0x213u, v3);
  v4 = j_va("%i", (unsigned int)level.teamScores[2]);
  SV_SetConfigstring(0x214u, v4);
  SV_ClientMP_SendClientPlayerData(ent->s.number);
}

/*
==============
G_ActiveMP_IsPlayerActive
==============
*/
bool G_ActiveMP_IsPlayerActive(int clientNum)
{
  gentity_s *GEntity; 
  gclient_s *client; 

  GEntity = G_GetGEntity(clientNum);
  client = GEntity->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2587, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  return client->sess.connected == CON_CONNECTED && (unsigned int)(client->sess.sessionState - 2) > 1 && client->ps.clientNum == GEntity->s.number;
}

/*
==============
G_ActiveMP_NotityWeaponSwitchInvalidCallback
==============
*/
void G_ActiveMP_NotityWeaponSwitchInvalidCallback(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  const Weapon *ParameterInternal; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1443, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1444, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (const Weapon *)GClientTaskQueue::GetParameterInternal(outputQueue, 0x3Cu, 2u);
  G_Active_NotifyWeaponSwitchInvalid(playerEnt, ParameterInternal);
}

/*
==============
G_ActiveMP_OffhandADSOff
==============
*/
void G_ActiveMP_OffhandADSOff(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  scrContext_t *v4; 
  const GClientThinkTaskOffhandADSData *v5; 

  v4 = ScriptContext_Server();
  v5 = GClientTaskQueue::GetParameter<GClientThinkTaskOffhandADSData>(outputQueue);
  GScr_Weapon_AddParam(v4, &v5->offhandAdsWeapon, 0);
  GScr_Notify(playerEnt, scr_const.offhand_ads_off, 1u);
}

/*
==============
G_ActiveMP_OffhandADSOn
==============
*/
void G_ActiveMP_OffhandADSOn(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  scrContext_t *v4; 
  const GClientThinkTaskOffhandADSData *v5; 

  v4 = ScriptContext_Server();
  v5 = GClientTaskQueue::GetParameter<GClientThinkTaskOffhandADSData>(outputQueue);
  GScr_Weapon_AddParam(v4, &v5->offhandAdsWeapon, 0);
  GScr_Notify(playerEnt, scr_const.offhand_ads_on, 1u);
}

/*
==============
G_ActiveMP_PlayerAnimation
==============
*/
void G_ActiveMP_PlayerAnimation(const int clientNum)
{
  __int64 v1; 
  gentity_s *v2; 
  entityType_s eType; 
  playerState_s *p_ps; 
  __int64 v5; 
  characterInfo_t *v6; 
  characterInfo_t *v7; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  GMovingPlatforms *v10; 
  unsigned int v11; 
  gclient_s *client; 
  int animOverrideVehicleType; 
  int animOverrideVehicleSeat; 
  gagent_s *agent; 
  int v16; 
  bool v17; 
  const BgAnimStatic *v18; 
  vec3_t *movingPlatformOrigin; 
  vec3_t *movingPlatformAngles; 
  int outDuration; 
  vec3_t outAngles; 
  vec3_t outOrigin; 

  v1 = clientNum;
  if ( (unsigned int)clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5410, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  v2 = &g_entities[v1];
  if ( !v2->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5412, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  eType = v2->s.eType;
  if ( eType != ET_PLAYER )
  {
    LODWORD(movingPlatformAngles) = 1;
    LODWORD(movingPlatformOrigin) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5413, ASSERT_TYPE_ASSERT, "( ent->s.eType ) == ( ET_PLAYER )", "ent->s.eType == ET_PLAYER\n\t%i, %i", movingPlatformOrigin, movingPlatformAngles) )
      __debugbreak();
  }
  p_ps = &v2->client->ps;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v5 = *(_QWORD *)&GStatic::ms_gameStatics;
  v6 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)v1);
  v7 = v6;
  if ( v6->usingAnimState )
  {
    BG_AnimationState_Update(&v2->s, v6, 0);
  }
  else
  {
    Handler = GHandler::getHandler();
    Instance = GWeaponMap::GetInstance();
    if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    v10 = GMovingPlatforms::ms_instance;
    if ( !p_ps[1].weapCommon.ammoInClip[1].shotsSinceRechamber[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
      __debugbreak();
    v11 = p_ps[1].weapCommon.ammoInClip[1].shotsSinceRechamber[1] - 1;
    if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( v11 >= 0xF8 )
    {
      LODWORD(movingPlatformAngles) = 248;
      LODWORD(movingPlatformOrigin) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", movingPlatformOrigin, movingPlatformAngles) )
        __debugbreak();
    }
    BGMovingPlatformClient::GetPlatformOriginAndAngles(&v10->m_moverClientArray[v11], p_ps, &outOrigin, &outAngles);
    Profile_Begin(363);
    BG_PlayerAnimation(Handler, Instance, &v2->s, v7, &v2->r.currentOrigin, &outOrigin, &outAngles);
    client = v2->client;
    if ( client )
    {
      animOverrideVehicleType = client->animOverrideVehicleType;
      if ( animOverrideVehicleType )
      {
        BG_SetConditionBit(v7, 39, animOverrideVehicleType);
        BG_SetConditionValue(v7, 41, 1ui64);
        BG_SetConditionBit(v7, 42, 1);
        BG_SetConditionBit(v7, 43, 1);
        client = v2->client;
      }
      animOverrideVehicleSeat = client->animOverrideVehicleSeat;
    }
    else
    {
      agent = v2->agent;
      v16 = agent->animOverrideVehicleType;
      if ( v16 )
      {
        BG_SetConditionBit(v7, 39, v16);
        BG_SetConditionValue(v7, 41, 1ui64);
        BG_SetConditionBit(v7, 42, 1);
        BG_SetConditionBit(v7, 43, 1);
        agent = v2->agent;
      }
      animOverrideVehicleSeat = agent->animOverrideVehicleSeat;
    }
    if ( animOverrideVehicleSeat )
      BG_SetConditionBit(v7, 40, animOverrideVehicleSeat);
    Profile_EndInternal(NULL);
    if ( !p_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5399, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v17 = p_ps->animState.animSet && !BG_PlayerASM_GetAnim(p_ps, MOVEMENT);
    if ( v7->vehicleSeatChanged || v17 )
    {
      GPlayerASM_ForceUpdateEvent(p_ps, MOVEMENT, 0, &outDuration);
      BG_AnimationMP_PlayerToEntityAnimation(p_ps, &v2->s);
    }
    v18 = (const BgAnimStatic *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
    BG_UpdateSecondaryWeaponVisibilities(v18, Instance, &v2->s, v7);
  }
}

/*
==============
G_ActiveMP_PlayerController
==============
*/
void G_ActiveMP_PlayerController(const gentity_s *self, DObjPartBits *partBits)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4393, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4394, ASSERT_TYPE_ASSERT, "(self->client)", (const char *)&queryFormat, "self->client") )
    __debugbreak();
  G_ActiveMP_CharacterController(self, &self->client->ps, partBits);
}

/*
==============
G_ActiveMP_PlayerEvent
==============
*/
void G_ActiveMP_PlayerEvent(int clientNum, int event)
{
  gentity_s *v4; 
  playerState_s *p_playerState; 
  GWeaponMap *Instance; 
  bool outKickNeedsToCrossCenter; 
  vec3_t kickAngles; 
  vec3_t kickAVel; 

  v4 = &g_entities[clientNum];
  if ( SV_IsAgentEntity(v4) )
  {
    if ( !v4->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5364, ASSERT_TYPE_ASSERT, "(playerEntity->agent)", (const char *)&queryFormat, "playerEntity->agent") )
      __debugbreak();
    if ( v4->s.eType != ET_AGENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5365, ASSERT_TYPE_ASSERT, "(playerEntity->s.eType == ET_AGENT)", (const char *)&queryFormat, "playerEntity->s.eType == ET_AGENT") )
      __debugbreak();
    p_playerState = &v4->agent->playerState;
  }
  else
  {
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5370, ASSERT_TYPE_ASSERT, "(playerEntity->client)", (const char *)&queryFormat, "playerEntity->client") )
      __debugbreak();
    p_playerState = &v4->client->ps;
  }
  if ( (unsigned int)(event - 89) <= 2 )
  {
    kickAngles.v[0] = 0.0;
    *(_QWORD *)&kickAngles.y = 0i64;
    outKickNeedsToCrossCenter = 0;
    Instance = GWeaponMap::GetInstance();
    G_ActiveMP_FireRecoil(v4, p_playerState, Instance, event, &kickAngles, &kickAVel, &outKickNeedsToCrossCenter);
    if ( SV_BotIsBot(clientNum) )
      SV_BotSetFireRecoil(clientNum, &kickAVel);
    if ( SV_IsAgentEntity(v4) )
      SV_AgentSetFireRecoil(v4, &kickAVel);
  }
}

/*
==============
G_ActiveMP_PlayerHitboxes
==============
*/
void G_ActiveMP_PlayerHitboxes(const int clientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  gentity_s *v3; 
  unsigned int v4; 
  GStatic *GameStatics; 
  DObjPartBits *p_partBits; 
  float *v7; 
  unsigned int i; 
  const char *v9; 
  const dvar_t *v10; 
  DObjPartBits *v11; 
  int duration; 
  DObjPartBits partBits; 

  v1 = clientNum;
  if ( (unsigned int)clientNum >= level.maxclients )
  {
    duration = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5485, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, duration) )
      __debugbreak();
  }
  v2 = DVARINT_g_debugLocDamage;
  v3 = &g_entities[v1];
  if ( !DVARINT_g_debugLocDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v4 = 0;
  if ( v2->current.integer == v3->s.number && SV_Game_DObjExists(v3) )
  {
    GameStatics = GStatic::GetGameStatics();
    p_partBits = &partBits;
    v7 = (float *)GameStatics->GetCharacterInfo(GameStatics, v1);
    for ( i = 0; i < 2; ++i )
    {
      *(_OWORD *)p_partBits->array = _xmm_ffffffffffffffffffffffffffffffff;
      p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
    }
    G_Utils_DObjCalcPose(v3, &partBits);
    SV_Game_XModelDebugBoxes(v3, &colorWhite, 0);
    v9 = j_va("[%i] %.3f, %.3f, %.3f\n", (unsigned int)v1, v7[512], v7[534], v7[625]);
    CL_AddDebugStarWithText(&v3->r.currentOrigin, &colorYellow, &colorYellow, v9, 0.25, 0, 1, 1);
  }
  v10 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer == 3 )
  {
    v11 = &partBits;
    do
    {
      *(_OWORD *)v11->array = _xmm_ffffffffffffffffffffffffffffffff;
      v11 = (DObjPartBits *)((char *)v11 + 16);
      ++v4;
    }
    while ( v4 < 2 );
    G_Utils_DObjCalcPose(v3, &partBits);
  }
}

/*
==============
G_ActiveMP_PlayerStateToCharacterInfo
==============
*/
void G_ActiveMP_PlayerStateToCharacterInfo(const playerState_s *ps, const entityState_t *es, characterInfo_t *ci)
{
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  __int16 groundRefEnt; 
  __int16 v11; 
  __int64 v12; 
  bool v13; 
  float *v; 
  bool IsScriptedSceneAnimFlagEnabled; 
  int enableVehicleOccupancyAnimations; 
  int v17; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  GWeaponMap *v20; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  int hybridScope; 
  GWeaponMap *v23; 
  unsigned __int64 v24; 
  int *isWeaponSmoking; 
  GHandler *Handler; 
  const WeaponHeat *v27; 
  const dvar_t *v28; 
  const SuitDef *SuitDef; 
  const gentity_s *GEntity; 
  unsigned int runtimeInstanceCount; 
  GHandler *v32; 
  __int16 linkEnt; 
  int v34; 
  unsigned int carryObjectIndex; 
  gentity_s *v36; 
  gclient_s *client; 
  gagent_s *agent; 
  bool v39; 
  animScriptParachuteState_t skydiveAnimState; 
  bool v41; 
  Weapon *r_stowedWeapon; 
  Weapon *r_stowedWeapona; 
  Weapon *r_executionWeapon; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 
  Weapon r_heldWeapon; 
  Weapon r_turretWeapon; 
  Weapon r_accessoryWeapon; 
  Weapon v52; 
  Weapon v53; 
  Weapon r_thrownWeapon; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4169, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_MovementDirToDegrees(ps->movementDir);
  v7 = *(float *)&v6;
  v8 = AngleDelta(*(const float *)&v6, ci->lerpMoveDir);
  ci->deltaLerpMoveDir = *(float *)&v8;
  ci->lerpMoveDir = v7;
  if ( (ps->linkFlags.m_flags[0] & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u) )
  {
    ci->playerAngles.v[0] = ps->linkWeaponAngles.v[0];
    ci->playerAngles.v[1] = ps->linkWeaponAngles.v[1];
    v9 = ps->linkWeaponAngles.v[2];
    goto LABEL_9;
  }
  if ( ps->vehicleState.entity == 2047 )
  {
    ci->playerAngles.v[0] = ps->viewangles.v[0];
    ci->playerAngles.v[1] = ps->viewangles.v[1];
    v9 = ps->viewangles.v[2];
LABEL_9:
    ci->playerAngles.v[2] = v9;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4184, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF )") )
    __debugbreak();
  groundRefEnt = ps->groundRefEnt;
  if ( (unsigned __int16)groundRefEnt >= 0x800u )
  {
    LODWORD(r_stowedWeapon) = groundRefEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4185, ASSERT_TYPE_ASSERT, "(unsigned)( ps->groundRefEnt ) < (unsigned)( ( 2048 ) )", "ps->groundRefEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", r_stowedWeapon, 2048) )
      __debugbreak();
  }
  v11 = ps->groundRefEnt;
  if ( v11 != 2047 )
  {
    v12 = v11;
    if ( (unsigned int)v11 >= 0x800 )
    {
      LODWORD(r_executionWeapon) = 2048;
      LODWORD(r_stowedWeapon) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", r_stowedWeapon, r_executionWeapon) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v12] )
    {
      LODWORD(r_executionWeapon) = ps->groundRefEnt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4188, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( ps->groundRefEnt ) ) )", "%s\n\t( ps->groundRefEnt ) = %i", "( G_IsEntityInUse( ps->groundRefEnt ) )", r_executionWeapon) )
        __debugbreak();
    }
    angles = g_entities[ps->groundRefEnt].r.currentAngles;
    AnglesToAxis(&angles, &axis);
    AnglesToAxis(&ci->playerAngles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    AxisToAngles(&out, &ci->playerAngles);
  }
  v13 = ci->usingAnimState == 0;
  *(_WORD *)&ci->useShadowAnims = 0;
  if ( v13 )
  {
    if ( PlayerASM_IsEnabled() )
    {
      BG_PlayerASM_CopyAnimDataToCharacterInfo(ps, ci);
    }
    else
    {
      ci->playerASMAnim.animSet = BG_GetSuitAnimIndexFromPlayerState(ps);
      ci->playerAnim.legsAnim = ps->legsAnim;
      ci->playerAnim.torsoAnim = ps->torsoAnim;
    }
  }
  if ( ci->dualWielding != BG_PlayerDualWielding(ps) )
  {
    ci->dualWielding = BG_PlayerDualWielding(ps);
    ci->dobjDirty = 1;
  }
  v = NULL;
  ci->offhandShieldDeployed = 0;
  ci->isUsingWeaponAltMode = BG_UsingAlternate(ps);
  ci->animLinkedToType = BG_GetLinkedToAnimType(ps);
  ci->isOnWall = BG_IsOnWallAnimFlagEnabled(ps);
  IsScriptedSceneAnimFlagEnabled = BG_IsScriptedSceneAnimFlagEnabled(ps);
  enableVehicleOccupancyAnimations = ci->enableVehicleOccupancyAnimations;
  ci->isScriptedSceneAnim = IsScriptedSceneAnimFlagEnabled;
  v17 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x1Bu);
  ci->enableVehicleOccupancyAnimations = v17;
  if ( enableVehicleOccupancyAnimations != v17 )
    ci->dobjDirty = 1;
  Instance = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, ps);
  v20 = GWeaponMap::GetInstance();
  EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(v20, ps, CurrentWeaponForPlayer);
  if ( EquippedWeaponStateConst )
    hybridScope = EquippedWeaponStateConst->hybridScope;
  else
    hybridScope = 0;
  ci->hybridScopeState = hybridScope;
  ci->usingNVG = BG_IsUsingNightVision(ps);
  v23 = GWeaponMap::GetInstance();
  BG_GetCharacterWeapons(v23, es, ci, &r_heldWeapon, &r_thrownWeapon, &v53, &v52, &r_accessoryWeapon, &r_turretWeapon);
  v24 = 0i64;
  isWeaponSmoking = ci->isWeaponSmoking;
  do
  {
    Handler = GHandler::getHandler();
    v27 = Handler->GetPlayerWeaponHeat(Handler, ps, &r_heldWeapon, (PlayerHandIndex)v24++);
    *isWeaponSmoking++ = BG_Heat_GetIsSmoking(v27, &r_heldWeapon);
  }
  while ( v24 < 2 );
  ci->suitIndex = ps->suitIndex;
  v28 = DCONST_DVARBOOL_scriptable_debug_determinism;
  if ( !DCONST_DVARBOOL_scriptable_debug_determinism && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_determinism") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.enabled )
  {
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4276, ASSERT_TYPE_ASSERT, "( suit )", (const char *)&queryFormat, "suit") )
      __debugbreak();
    if ( SuitDef->scriptableDef )
    {
      GEntity = G_GetGEntity(es->number);
      ScriptableCommon_AssertCountsInitialized();
      runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
      if ( ScriptableSv_GetScriptableIndexForEntity(GEntity) >= runtimeInstanceCount )
      {
        LODWORD(r_stowedWeapona) = ps->clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4280, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsReservedScriptableEntity( ent ) )", "Scriptable Non-Determinism: Player %i with suit %s does not have a scriptable (%s) allocated", r_stowedWeapona, SuitDef->name, SuitDef->scriptableDef->name) )
          __debugbreak();
      }
    }
  }
  v32 = GHandler::getHandler();
  BG_ContextMount_GetWorldmodelProperties(v32, ps, &ci->mount);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4291, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ci->animData.flags = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
    Mantle_UnpackAnimData(&ps->mantleState.compressedAnimData, &ci->animData);
  ci->mantleSpeedAnimCond = ps->mantleState.mantleSpeedAnimCond;
  linkEnt = ps->linkEnt;
  if ( linkEnt == 2047 )
    v34 = 0;
  else
    v34 = linkEnt + 1;
  ci->linkedEntNum = v34;
  ci->execution = ps->activeExecution;
  ci->executionStance = ps->activeExecutionVictimStance;
  ci->executionStartTime = ps->activeExecutionStartTime;
  carryObjectIndex = ps->carryState.carryObjectIndex;
  if ( ci->carryObjectIndex != carryObjectIndex )
  {
    ci->dobjDirty = 1;
    carryObjectIndex = ps->carryState.carryObjectIndex;
  }
  ci->carryObjectIndex = carryObjectIndex;
  ci->carryObjectFlags = ps->carryState.flags;
  v36 = G_GetGEntity(es->number);
  client = v36->client;
  if ( client )
  {
    v = client->playerGroundPersistent.smoothedNormal.v;
    goto LABEL_68;
  }
  agent = v36->agent;
  if ( agent )
  {
    v = agent->playerGroundPersistent.smoothedNormal.v;
LABEL_68:
    if ( v )
      goto LABEL_71;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4327, ASSERT_TYPE_ASSERT, "(groundPersistent)", (const char *)&queryFormat, "groundPersistent") )
    __debugbreak();
LABEL_71:
  ci->groundNormalInterpolated.v[0] = *v;
  ci->groundNormalInterpolated.v[1] = v[1];
  ci->groundNormalInterpolated.v[2] = v[2];
  v39 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  skydiveAnimState = ci->skydiveAnimState;
  ci->isOnStairs = v39;
  ci->isNearEnvironmentCollision = 0;
  v41 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)ps->skydivePlayerState.animState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v41 )
    ci->dobjDirty = 1;
  ci->skydiveAnimState = ps->skydivePlayerState.animState;
  ci->lastStandReviving = ps->lastStandReviving;
  ci->lastStandSelfReviving = ps->lastStandSelfReviving;
  G_GameInterface_ActiveMP_PlayerStateToCharacterInfo(ps, es, ci);
}

/*
==============
G_ActiveMP_PlayerStateToEntityState
==============
*/
void G_ActiveMP_PlayerStateToEntityState(gentity_s *const ent)
{
  gclient_s *client; 
  unsigned int entity; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2720, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2723, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  G_Active_PlayerStateToEntityStateExtrapolate(&client->ps, &ent->s, client->lastServerTime, 1);
  entity = client->ps.vehicleState.entity;
  if ( entity != 2047 )
  {
    G_Vehicle_UpdateVehicleControlledEntity(ent, entity);
    G_Vehicle_UpdateVehicleControlledWeapon(ent);
  }
}

/*
==============
G_ActiveMP_PostDObjClientUpdate
==============
*/
void G_ActiveMP_PostDObjClientUpdate(const characterInfo_t *ci, playerState_s *ps, clientState_t *cs)
{
  GWeaponMap *Instance; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4142, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4143, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !cs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4144, ASSERT_TYPE_ASSERT, "( cs )", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 794, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 795, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance->SetWeapon(Instance, &ps->serverDobjHeldWeapon, &ci->dobjHeldWeapon);
  GWeaponMap::SetWeapon(Instance, &cs->serverDobjHeldWeapon, &ci->dobjHeldWeapon);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 813, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance->SetWeapon(Instance, &ps->serverDobjTurretWeapon, &ci->dobjTurretWeapon);
  GWeaponMap::SetWeapon(Instance, &cs->serverDobjTurretWeapon, &ci->dobjTurretWeapon);
  ps->serverDobjHideWeapon = ci->hideWeapon;
  cs->serverDobjHideWeapon = ci->hideWeapon;
  ps->serverDobjStowHeldWeapon = ci->stowHeldWeapon;
  cs->serverDobjStowHeldWeapon = ci->stowHeldWeapon;
}

/*
==============
G_ActiveMP_PrepareMigration
==============
*/
void G_ActiveMP_PrepareMigration(void)
{
  const char *v0; 
  const char *v1; 

  v0 = j_va("%i", (unsigned int)level.teamScores[1]);
  SV_SetConfigstring(0x213u, v0);
  v1 = j_va("%i", (unsigned int)level.teamScores[2]);
  SV_SetConfigstring(0x214u, v1);
  G_MainMP_FreeAllPlayerCorpses(1);
  G_MainMP_FreeAllAgentCorpses();
}

/*
==============
G_ActiveMP_PrintGunAngles
==============
*/
void G_ActiveMP_PrintGunAngles(const gclient_s *const client, const usercmd_s *const cmd, const PlayerViewValues *viewValues, const vec3_t *baseGunAngles, const vec3_t *localGunAngles, const vec3_t *resultGunAngles)
{
  const dvar_t *v6; 
  unsigned int commandTime; 
  GWeaponMap *Instance; 
  double v13; 
  unsigned int v14; 
  WeaponMovementState *p_weapMoveState; 
  unsigned int v16; 
  __int64 v17; 
  __int64 weaponIdx_low; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 
  ViewMovementState *p_viewMoveState; 
  __int64 v25; 
  __int64 fLastIdleFactor_low; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  char *fmt; 

  v6 = DVARINT_bg_shootingAnglesLog;
  if ( !DVARINT_bg_shootingAnglesLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shootingAnglesLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 1 )
  {
    commandTime = cmd->commandTime;
    Instance = GWeaponMap::GetInstance();
    v13 = BG_WeaponADSFractionAffectedByReload(Instance, &client->ps);
    v14 = -1;
    p_weapMoveState = &client->playerViewState.weapMoveState;
    v16 = -1;
    v17 = 376i64;
    do
    {
      weaponIdx_low = LOBYTE(p_weapMoveState->weapon.weaponIdx);
      p_weapMoveState = (WeaponMovementState *)((char *)p_weapMoveState + 5);
      v19 = (v16 >> 8) ^ g_crc32Table[weaponIdx_low ^ (unsigned __int8)v16];
      v20 = (v19 >> 8) ^ g_crc32Table[p_weapMoveState[-1].recoilNeedsToCrossCenter ^ (unsigned __int64)(unsigned __int8)v19];
      v21 = (v20 >> 8) ^ g_crc32Table[*((unsigned __int8 *)&p_weapMoveState[-1].recoilNeedsToCrossCenter + 1) ^ (unsigned __int64)(unsigned __int8)v20];
      v22 = (v21 >> 8) ^ g_crc32Table[*((unsigned __int8 *)&p_weapMoveState[-1].recoilNeedsToCrossCenter + 2) ^ (unsigned __int64)(unsigned __int8)v21];
      v16 = (v22 >> 8) ^ g_crc32Table[*((unsigned __int8 *)&p_weapMoveState[-1].recoilNeedsToCrossCenter + 3) ^ (unsigned __int64)(unsigned __int8)v22];
      --v17;
    }
    while ( v17 );
    v23 = ~v16;
    p_viewMoveState = &client->playerViewState.viewMoveState;
    v25 = 418i64;
    do
    {
      fLastIdleFactor_low = LOBYTE(p_viewMoveState->fLastIdleFactor);
      p_viewMoveState = (ViewMovementState *)((char *)p_viewMoveState + 4);
      v27 = (v14 >> 8) ^ g_crc32Table[fLastIdleFactor_low ^ (unsigned __int8)v14];
      v28 = (v27 >> 8) ^ g_crc32Table[BYTE1(p_viewMoveState[-1].idleMotionCache.idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v27];
      v29 = (v28 >> 8) ^ g_crc32Table[BYTE2(p_viewMoveState[-1].idleMotionCache.idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v28];
      v14 = (v29 >> 8) ^ g_crc32Table[HIBYTE(p_viewMoveState[-1].idleMotionCache.idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v29];
      --v25;
    }
    while ( v25 );
    LODWORD(fmt) = client->extrapolatedData.time;
    Com_Printf(17, "S->  Time:%d  CmdTime:%d  EX:%d  CA:[%f %f %f]  WA:[%f %f %f]  SA:[%f %f %f]  VA:[%f %f %f]  DA:[%f %f %f]  VMA:[%f %f %f]  VI:%f  WI:%f  VS:%d  WS:%d  IT1:%d  IT2:%d  ADST:%d  ADS:%f  ADSr:%f\n", (unsigned int)cmd->serverTime, commandTime, fmt, baseGunAngles->v[0], baseGunAngles->v[1], baseGunAngles->v[2], resultGunAngles->v[0], resultGunAngles->v[1], resultGunAngles->v[2], localGunAngles->v[0], localGunAngles->v[1], localGunAngles->v[2], client->ps.viewangles.v[0], client->ps.viewangles.v[1], client->ps.viewangles.v[2], client->ps.delta_angles.v[0], client->ps.delta_angles.v[1], client->ps.delta_angles.v[2], viewValues->viewMoveAngles.v[0], viewValues->viewMoveAngles.v[1], viewValues->viewMoveAngles.v[2], client->playerViewState.viewMoveState.fLastIdleFactor, client->playerViewState.weapMoveState.fLastIdleFactor, ~v14, v23, client->ps.weapCommon.weaponIdleTime, client->ps.weapCommon.weaponIdleTime2, client->ps.weapCommon.adsStartTime, client->ps.weapCommon.fWeaponPosFrac, *(float *)&v13);
  }
}

/*
==============
G_ActiveMP_PrintViewState
==============
*/
void G_ActiveMP_PrintViewState(const gclient_s *const client, const usercmd_s *const cmd, const PlayerViewState *viewState)
{
  const dvar_t *v3; 
  WeaponIdleMotionCache *p_idleMotionCache; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 weaponIdx_low; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  unsigned __int8 *stickerIndices; 
  __int64 v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned __int64 v45; 
  unsigned int v46; 
  unsigned __int64 v47; 
  unsigned int v48; 
  unsigned int v49; 
  char *fmt; 

  v3 = DVARINT_bg_shootingAnglesLog;
  if ( !DVARINT_bg_shootingAnglesLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shootingAnglesLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer == 2 )
  {
    p_idleMotionCache = &viewState->weapMoveState.idleMotionCache;
    v8 = -1;
    v9 = -1;
    v10 = 278i64;
    do
    {
      weaponIdx_low = LOBYTE(p_idleMotionCache->weapon.weaponIdx);
      p_idleMotionCache = (WeaponIdleMotionCache *)((char *)p_idleMotionCache + 6);
      v12 = (v9 >> 8) ^ g_crc32Table[weaponIdx_low ^ (unsigned __int8)v9];
      v13 = (v12 >> 8) ^ g_crc32Table[HIBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvT.y) ^ (unsigned __int64)(unsigned __int8)v12];
      v14 = (v13 >> 8) ^ g_crc32Table[LOBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v13];
      v15 = (v14 >> 8) ^ g_crc32Table[BYTE1(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v14];
      v16 = (v15 >> 8) ^ g_crc32Table[BYTE2(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v15];
      v9 = (v16 >> 8) ^ g_crc32Table[HIBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v16];
      --v10;
    }
    while ( v10 );
    v17 = ~v9;
    stickerIndices = (unsigned __int8 *)viewState->weapMoveState.weapon.stickerIndices;
    v19 = 2i64;
    do
    {
      v20 = (unsigned __int8)v8 ^ (unsigned __int64)*(stickerIndices - 2);
      v21 = (((v8 >> 8) ^ g_crc32Table[v20]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v8) ^ g_crc32Table[v20]) ^ (unsigned __int64)*(stickerIndices - 1)];
      v22 = (v21 >> 8) ^ g_crc32Table[*stickerIndices ^ (unsigned __int64)(unsigned __int8)v21];
      v23 = (v22 >> 8) ^ g_crc32Table[(unsigned __int8)v22 ^ (unsigned __int64)stickerIndices[1]];
      v24 = (v23 >> 8) ^ g_crc32Table[(unsigned __int8)v23 ^ (unsigned __int64)stickerIndices[2]];
      v25 = (v24 >> 8) ^ g_crc32Table[(unsigned __int8)v24 ^ (unsigned __int64)stickerIndices[3]];
      v26 = (v25 >> 8) ^ g_crc32Table[(unsigned __int8)v25 ^ (unsigned __int64)stickerIndices[4]];
      v27 = (v26 >> 8) ^ g_crc32Table[(unsigned __int8)v26 ^ (unsigned __int64)stickerIndices[5]];
      v28 = (v27 >> 8) ^ g_crc32Table[(unsigned __int8)v27 ^ (unsigned __int64)stickerIndices[6]];
      v29 = (v28 >> 8) ^ g_crc32Table[(unsigned __int8)v28 ^ (unsigned __int64)stickerIndices[7]];
      v30 = (v29 >> 8) ^ g_crc32Table[(unsigned __int8)v29 ^ (unsigned __int64)stickerIndices[8]];
      v31 = (v30 >> 8) ^ g_crc32Table[(unsigned __int8)v30 ^ (unsigned __int64)stickerIndices[9]];
      v32 = g_crc32Table[(unsigned __int8)v31 ^ (unsigned __int64)stickerIndices[10]];
      v33 = (((v31 >> 8) ^ v32) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v31) ^ v32) ^ (unsigned __int64)stickerIndices[11]];
      v34 = (v33 >> 8) ^ g_crc32Table[(unsigned __int8)v33 ^ (unsigned __int64)stickerIndices[12]];
      v35 = (v34 >> 8) ^ g_crc32Table[(unsigned __int8)v34 ^ (unsigned __int64)stickerIndices[13]];
      v36 = (v35 >> 8) ^ g_crc32Table[(unsigned __int8)v35 ^ (unsigned __int64)stickerIndices[14]];
      v37 = (v36 >> 8) ^ g_crc32Table[(unsigned __int8)v36 ^ (unsigned __int64)stickerIndices[15]];
      v38 = (v37 >> 8) ^ g_crc32Table[(unsigned __int8)v37 ^ (unsigned __int64)stickerIndices[16]];
      v39 = (v38 >> 8) ^ g_crc32Table[(unsigned __int8)v38 ^ (unsigned __int64)stickerIndices[17]];
      v40 = (v39 >> 8) ^ g_crc32Table[(unsigned __int8)v39 ^ (unsigned __int64)stickerIndices[18]];
      v41 = (v40 >> 8) ^ g_crc32Table[(unsigned __int8)v40 ^ (unsigned __int64)stickerIndices[19]];
      v42 = (v41 >> 8) ^ g_crc32Table[(unsigned __int8)v41 ^ (unsigned __int64)stickerIndices[20]];
      v43 = (v42 >> 8) ^ g_crc32Table[(unsigned __int8)v42 ^ (unsigned __int64)stickerIndices[21]];
      v44 = (v43 >> 8) ^ g_crc32Table[(unsigned __int8)v43 ^ (unsigned __int64)stickerIndices[22]];
      v45 = (unsigned __int8)v44 ^ (unsigned __int64)stickerIndices[23];
      v46 = (((v44 >> 8) ^ g_crc32Table[v45]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v44) ^ g_crc32Table[v45]) ^ (unsigned __int64)stickerIndices[24]];
      v47 = stickerIndices[25];
      stickerIndices += 30;
      v48 = (v46 >> 8) ^ g_crc32Table[(unsigned __int8)v46 ^ v47];
      v49 = (v48 >> 8) ^ g_crc32Table[(unsigned __int8)v48 ^ (unsigned __int64)*(stickerIndices - 4)];
      v8 = (v49 >> 8) ^ g_crc32Table[(unsigned __int8)v49 ^ (unsigned __int64)*(stickerIndices - 3)];
      --v19;
    }
    while ( v19 );
    LODWORD(fmt) = client->extrapolatedData.time;
    Com_Printf(17, "S->  Time:%d  CmdTime:%d  EX:%d  VI:%f  WI:%f  WP:%d  MC:%d  BA[%f %f %f]  BO:[%f %f %f]  RA:[%f %f %f]  RS:[%f %f %f]  SA:[%f %f %f]  SO:[%f %f %f]  SVA:[%f %f %f]  BA:[%f %f %f]\n", (unsigned int)cmd->serverTime, (unsigned int)cmd->commandTime, fmt, viewState->viewMoveState.fLastIdleFactor, viewState->weapMoveState.fLastIdleFactor, ~v8, v17, viewState->weapMoveState.baseAngles.v[0], viewState->weapMoveState.baseAngles.v[1], viewState->weapMoveState.baseAngles.v[2], viewState->weapMoveState.baseOrigin.v[0], viewState->weapMoveState.baseOrigin.v[1], viewState->weapMoveState.baseOrigin.v[2], viewState->weapMoveState.recoilAngles.v[0], viewState->weapMoveState.recoilAngles.v[1], viewState->weapMoveState.recoilAngles.v[2], viewState->weapMoveState.recoilSpeed.v[0], viewState->weapMoveState.recoilSpeed.v[1], viewState->weapMoveState.recoilSpeed.v[2], viewState->weapMoveState.swayAngles.v[0], viewState->weapMoveState.swayAngles.v[1], viewState->weapMoveState.swayAngles.v[2], viewState->weapMoveState.swayOrigin.v[0], viewState->weapMoveState.swayOrigin.v[1], viewState->weapMoveState.swayOrigin.v[2], viewState->weapMoveState.swayViewAngles.v[0], viewState->weapMoveState.swayViewAngles.v[1], viewState->weapMoveState.swayViewAngles.v[2], viewState->weapMoveState.bobAngles.v[0], viewState->weapMoveState.bobAngles.v[1], viewState->weapMoveState.bobAngles.v[2]);
  }
}

/*
==============
G_ActiveMP_ProcessClientThinkUpdatePreTasks
==============
*/
void G_ActiveMP_ProcessClientThinkUpdatePreTasks(const int clientNum, const unsigned int taskFlags)
{
  __int64 v2; 
  characterInfo_t *CharacterInfo; 
  gentity_s *GEntity; 
  int UsercmdServerTime; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v2 = clientNum;
  if ( taskFlags != 1 )
  {
    v9 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2226, ASSERT_TYPE_ASSERT, "( taskFlags ) == ( G_CLIENT_TASK_FLAG_UPDATE_ENTITY )", "taskFlags == G_CLIENT_TASK_FLAG_UPDATE_ENTITY\n\t%i, %i", taskFlags, v9) )
      __debugbreak();
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  CharacterInfo = GStaticMP::GetCharacterInfo(*(GStaticMP **)&GStatic::ms_gameStatics, v2);
  GEntity = G_GetGEntity(v2);
  UsercmdServerTime = SV_Game_GetUsercmdServerTime(v2);
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2235, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( clientNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( clientNum )") )
    __debugbreak();
  G_ActiveMP_UpdatePlayerEntityAndCharacter(UsercmdServerTime, CharacterInfo, GEntity);
}

/*
==============
G_ActiveMP_ProcessEntityTrigger
==============
*/
void G_ActiveMP_ProcessEntityTrigger(gentity_s *const playerEnt, gentity_s *const trigger, const bool isVehicleTrigger)
{
  const gentity_s *PlayerVehicle; 
  __int16 EntityIndex; 
  __int16 v7; 
  __int16 v8; 
  const GEntityHandlerList *EntHandlerList; 
  const scrContext_t *v10; 
  void (__fastcall *touch)(gentity_s *, gentity_s *, int); 
  bool outPlayerPredicted; 
  bool outPlayerLinked; 

  PlayerVehicle = playerEnt;
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 676, ASSERT_TYPE_ASSERT, "( playerEnt != nullptr )", (const char *)&queryFormat, "playerEnt != nullptr") )
    __debugbreak();
  if ( !trigger && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 677, ASSERT_TYPE_ASSERT, "( trigger != nullptr )", (const char *)&queryFormat, "trigger != nullptr") )
    __debugbreak();
  EntityIndex = G_GetEntityIndex(PlayerVehicle);
  if ( G_IsEntityInUse(EntityIndex) )
  {
    v7 = G_GetEntityIndex(trigger);
    if ( G_IsEntityInUse(v7) )
    {
      if ( isVehicleTrigger )
        PlayerVehicle = G_ActiveMP_GetPlayerVehicle(PlayerVehicle, &outPlayerLinked, &outPlayerPredicted);
      if ( PlayerVehicle )
      {
        v8 = G_GetEntityIndex(PlayerVehicle);
        if ( G_IsEntityInUse(v8) )
        {
          EntHandlerList = G_Main_GetEntHandlerList(trigger);
          v10 = ScriptContext_Server();
          if ( Scr_IsSystemActive(v10, 1u) )
          {
            GScr_AddEntity(PlayerVehicle);
            GScr_Notify(trigger, scr_const.touch, 1u);
            GScr_AddEntity(trigger);
            GScr_Notify(PlayerVehicle, scr_const.touch, 1u);
          }
          touch = EntHandlerList->touch;
          if ( touch )
            touch(trigger, (gentity_s *)PlayerVehicle, 1);
        }
      }
    }
  }
}

/*
==============
G_ActiveMP_ProcessMLGSpectatorClient
==============
*/
void G_ActiveMP_ProcessMLGSpectatorClient(GPMove *pm, gentity_s *playerEnt)
{
  gclient_s *client; 
  gentity_s *GEntity; 
  gentity_s *v6; 
  playerState_s *EntityPlayerState; 
  float vehOrgX; 
  double v9; 
  float v12; 
  double v13; 
  float v15; 
  double v16; 
  float v18; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 960, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 961, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  client = playerEnt->client;
  if ( client->sess.cs.isMLGFollower )
  {
    GEntity = G_GetGEntity(client->sess.cs.indexMLGFollower);
    v6 = GEntity;
    if ( GEntity->client->sess.cs.isMLGSpectator )
    {
      EntityPlayerState = G_GetEntityPlayerState(GEntity);
      client->ps.origin = EntityPlayerState->origin;
      client->ps.viewangles = EntityPlayerState->viewangles;
      playerEnt->r.currentAngles = EntityPlayerState->viewangles;
      client->mlgSpectatorClientInfo.clientViewAngles.v[0] = EntityPlayerState->viewangles.v[0];
      client->mlgSpectatorClientInfo.clientViewAngles.v[1] = EntityPlayerState->viewangles.v[1];
      client->mlgSpectatorClientInfo.clientFoV = I_clamp(v6->client->mlgSpectatorClientInfo.clientFoV, 0, 60);
      client->mlgSpectatorClientInfo.cameraAerialFocusedClient = v6->client->mlgSpectatorClientInfo.cameraAerialFocusedClient;
      client->mlgSpectatorClientInfo.cameraTypeMLGSpectator = v6->client->mlgSpectatorClientInfo.cameraTypeMLGSpectator;
    }
    else
    {
      client->mlgSpectatorClientInfo.cameraAerialFocusedClient = -1;
      client->mlgSpectatorClientInfo.cameraTypeMLGSpectator = 0;
    }
  }
  else
  {
    if ( pm->cmd.mlgSelectedAngle )
    {
      vehOrgX = pm->cmd.vehOrgX;
      client->ps.origin.v[0] = vehOrgX;
      client->ps.origin.v[1] = pm->cmd.vehOrgY;
      client->ps.origin.v[2] = pm->cmd.vehOrgZ;
      playerEnt->r.currentOrigin.v[0] = vehOrgX;
      playerEnt->r.currentOrigin.v[1] = client->ps.origin.v[1];
      playerEnt->r.currentOrigin.v[2] = client->ps.origin.v[2];
      v9 = MSG_UnpackSignedFloat(pm->cmd.angles.v[0], 180.0, 0x14u);
      _XMM11 = 0i64;
      __asm { vroundss xmm2, xmm11, xmm1, 1 }
      v12 = (float)((float)(*(float *)&v9 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
      v13 = MSG_UnpackSignedFloat(pm->cmd.angles.v[1], 180.0, 0x14u);
      __asm { vroundss xmm4, xmm11, xmm0, 1 }
      v15 = (float)((float)(*(float *)&v13 * 0.0027777778) - *(float *)&_XMM4) * 360.0;
      v16 = MSG_UnpackSignedFloat(pm->cmd.angles.v[2], 180.0, 0x14u);
      client->ps.viewangles.v[0] = v12;
      client->ps.viewangles.v[1] = v15;
      __asm { vroundss xmm3, xmm11, xmm0, 1 }
      v18 = (float)((float)(*(float *)&v16 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      client->ps.viewangles.v[2] = v18;
      playerEnt->r.currentAngles.v[0] = v12;
      playerEnt->r.currentAngles.v[1] = v15;
      playerEnt->r.currentAngles.v[2] = v18;
      client->mlgSpectatorClientInfo.clientFoV = I_clamp(pm->cmd.mlgSelectedAngle - 60, 0, 60);
      client->mlgSpectatorClientInfo.clientViewAngles.v[0] = v12;
      client->mlgSpectatorClientInfo.clientViewAngles.v[1] = v15;
    }
    client->mlgSpectatorClientInfo.cameraAerialFocusedClient = pm->cmd.mlgSelectedLoc[0];
    client->mlgSpectatorClientInfo.cameraTypeMLGSpectator = pm->cmd.mlgSelectedLoc[1];
  }
}

/*
==============
G_ActiveMP_ProcessScriptableTrigger
==============
*/
void G_ActiveMP_ProcessScriptableTrigger(gentity_s *const playerEnt, const unsigned int scriptableIndex, const unsigned int partIndex)
{
  scrContext_t *v6; 
  ScriptableInstanceContext *InstanceCommonContext; 
  GameScriptData *GameScriptDataCommon; 
  scr_string_t PartName; 
  unsigned int v10; 
  char *fmt; 
  scr_string_t out_stateName; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 512, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( ScriptableSv_GetInstanceInUse(scriptableIndex) )
  {
    v6 = ScriptContext_Server();
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 523, ASSERT_TYPE_ASSERT, "( context.def )", (const char *)&queryFormat, "context.def") )
      __debugbreak();
    GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
    if ( !GameScriptDataCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 526, ASSERT_TYPE_ASSERT, "( gScrData )", (const char *)&queryFormat, "gScrData") )
      __debugbreak();
    if ( partIndex >= InstanceCommonContext->def->serverInstancedPartCount || (PartName = ScriptableSv_GetPartName(scriptableIndex, partIndex)) == 0 )
      PartName = ScriptableSv_GetPartName(scriptableIndex, 0);
    out_stateName = 0;
    if ( PartName )
      ScriptableSv_GetPartScriptedState(scriptableIndex, PartName, &out_stateName);
    GScr_AddEntity(playerEnt);
    if ( out_stateName )
      Scr_AddConstString(v6, out_stateName);
    else
      Scr_AddUndefined(v6);
    if ( PartName )
      Scr_AddConstString(v6, PartName);
    else
      Scr_AddUndefined(v6);
    Scr_AddEntityNum(v6, scriptableIndex, ENTITY_CLASS_SCRIPTABLE);
    v10 = Scr_ExecThread(v6, GameScriptDataCommon->scriptable_touched, 4u);
    if ( Scr_IsThreadAlive(v6, v10) )
      Com_PrintError(1, "scriptable_touched failed to terminate. No waits allowed in this callback tree.\n");
    Scr_FreeThread(v6, v10);
  }
  else
  {
    LODWORD(fmt) = playerEnt->s.number;
    Com_PrintError(1, "G_ActiveMP_ProcessScriptableTrigger called with scriptable %d part %d which is not in use (client %d).\n", scriptableIndex, partIndex, fmt);
  }
}

/*
==============
G_ActiveMP_RemoteControlEnt
==============
*/
void G_ActiveMP_RemoteControlEnt(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  const void *ParameterInternal; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1792, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1793, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = GClientTaskQueue::GetParameterInternal(outputQueue, 0xCu, 4u);
  G_Active_RemoteControlledEntityUpdateAngles(playerEnt, (const char *)ParameterInternal + 8, *((_DWORD *)ParameterInternal + 1), *(_DWORD *)ParameterInternal);
}

/*
==============
G_ActiveMP_ResetClientNetPerf
==============
*/
void G_ActiveMP_ResetClientNetPerf(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4740, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)&ps->netPerf.pingMs = 0i64;
  *(_QWORD *)&ps->netPerf.maxExtrapolationMs = 0i64;
  *(_QWORD *)&ps->netPerf.maxUserCmdQueuedTime = 0i64;
}

/*
==============
G_ActiveMP_RestorePersistentClientData
==============
*/
void G_ActiveMP_RestorePersistentClientData(gentity_s *ent)
{
  gclient_s *client; 
  gclient_s *v2; 

  client = ent->client;
  if ( client->sess.persistentDataArchived && client->ps.clientNum == ent->s.number )
  {
    v2 = ent->client;
    client->sess.persistentDataArchived = 0;
    G_Omnvar_RestorePlayerStateOmnvars(v2);
    client->ps.stats[3] = client->sess.savedSpawnCount;
    client->lastServerTime = client->sess.savedServerTime;
    client->ps.footstepCount = client->sess.savedFootstepCount;
  }
}

/*
==============
G_ActiveMP_RunClient
==============
*/
void G_ActiveMP_RunClient(gentity_s *ent)
{
  gclient_s *client; 
  int v3; 
  int pm_type; 

  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2563, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( ent->client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2564, ASSERT_TYPE_ASSERT, "(ent->client->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "ent->client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  client = ent->client;
  if ( (client->flags & 1) == 0 )
  {
    if ( !ent->tagInfo || (client->ps.linkFlags.m_flags[0] & 4) != 0 )
    {
      pm_type = client->ps.pm_type;
      if ( pm_type == 1 || pm_type == 8 )
        client->ps.pm_type = pm_type - 1;
    }
    else
    {
      v3 = 1;
      if ( client->sess.sessionState == SESS_STATE_DEAD )
        v3 = 8;
      client->ps.pm_type = v3;
    }
  }
}

/*
==============
G_ActiveMP_SendSeenPlayerNotifies
==============
*/
void G_ActiveMP_SendSeenPlayerNotifies(const unsigned int clientNum)
{
  __int64 v1; 
  __int64 v2; 
  gclient_s *v3; 
  int v4; 
  unsigned int v5; 
  int *v6; 
  int *i; 
  __int64 v8; 
  __int64 v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 

  v1 = clientNum;
  if ( clientNum >= 0x800 )
  {
    v11 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", clientNum, v11) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[(int)v1].r.isInUse != g_entityIsInUse[(int)v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[(int)v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3035, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( clientNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( clientNum )") )
    __debugbreak();
  if ( (unsigned int)v1 >= level.maxclients )
  {
    LODWORD(v10) = level.maxclients;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3036, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  v2 = v1;
  v3 = &level.clients[v1];
  v12 = v3->sess.sightedPlayers.array[0] & ~v3->sess.lastSightedPlayers.array[0];
  v13 = v3->sess.sightedPlayers.array[1] & ~v3->sess.lastSightedPlayers.array[1];
  v14 = v3->sess.sightedPlayers.array[2] & ~v3->sess.lastSightedPlayers.array[2];
  v15 = v3->sess.sightedPlayers.array[3] & ~v3->sess.lastSightedPlayers.array[3];
  v16 = v3->sess.sightedPlayers.array[4] & ~v3->sess.lastSightedPlayers.array[4];
  v17 = v3->sess.sightedPlayers.array[5] & ~v3->sess.lastSightedPlayers.array[5];
  v4 = 0;
  v18 = v3->sess.sightedPlayers.array[6] & ~v3->sess.lastSightedPlayers.array[6];
  v5 = 0;
  v6 = (int *)&v12;
  while ( !*v6 )
  {
    ++v5;
    ++v6;
    if ( v5 >= 7 )
      goto LABEL_21;
  }
  GScr_Notify(&g_entities[v2], scr_const.enemy_sighted, 0);
LABEL_21:
  v12 = v3->sess.lastSightedPlayers.array[0] & ~v3->sess.sightedPlayers.array[0];
  v13 = v3->sess.lastSightedPlayers.array[1] & ~v3->sess.sightedPlayers.array[1];
  v14 = v3->sess.lastSightedPlayers.array[2] & ~v3->sess.sightedPlayers.array[2];
  v15 = v3->sess.lastSightedPlayers.array[3] & ~v3->sess.sightedPlayers.array[3];
  v16 = v3->sess.lastSightedPlayers.array[4] & ~v3->sess.sightedPlayers.array[4];
  v17 = v3->sess.lastSightedPlayers.array[5] & ~v3->sess.sightedPlayers.array[5];
  v18 = v3->sess.lastSightedPlayers.array[6] & ~v3->sess.sightedPlayers.array[6];
  for ( i = (int *)&v12; !*i; ++i )
  {
    if ( (unsigned int)++v4 >= 7 )
      return;
  }
  GScr_Notify(&g_entities[v2], scr_const.enemy_sighted_lost, 0);
}

/*
==============
G_ActiveMP_SessionStateHasChanged
==============
*/
void G_ActiveMP_SessionStateHasChanged(sessionState_t oldSessionState, sessionState_t newSessionState, gclient_s *gclient)
{
  __int16 viewlocked_entNum; 
  __int64 entity; 
  signed __int64 v7; 
  gentity_s *GEntity; 
  __int64 v9; 

  if ( oldSessionState == SESS_STATE_SPECTATOR && newSessionState != SESS_STATE_SPECTATOR )
  {
    viewlocked_entNum = gclient->ps.viewlocked_entNum;
    if ( viewlocked_entNum != 2047 && !EntHandle::isDefined(&level.gentities[viewlocked_entNum].r.ownerNum) )
    {
      if ( gclient == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2062, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
        __debugbreak();
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&gclient->ps.eFlags, ACTIVE, 5u);
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&gclient->ps.eFlags, ACTIVE, 6u);
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&gclient->ps.eFlags, ACTIVE, 7u);
    }
    entity = gclient->ps.vehicleState.entity;
    if ( (_DWORD)entity != 2047 && !EntHandle::isDefined(&level.gentities[entity].r.ownerNum) )
      BG_InitPlayerstateVehicle(&gclient->ps);
    v7 = gclient - level.clients;
    GEntity = G_GetGEntity(v7);
    G_Client_SetSuit(GEntity, &gclient->ps, gclient->sess.cs.suitIndex);
    if ( gclient->ps.suitIndex != gclient->sess.cs.suitIndex )
    {
      LODWORD(v9) = gclient->ps.suitIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5683, ASSERT_TYPE_ASSERT, "( gclient->ps.suitIndex ) == ( gclient->sess.cs.suitIndex )", "gclient->ps.suitIndex == gclient->sess.cs.suitIndex\n\t%i, %i", v9, gclient->sess.cs.suitIndex) )
        __debugbreak();
    }
    G_WorldStreaming_ClearNextStreamView(v7, MOVEMENT);
  }
  if ( newSessionState == SESS_STATE_INTERMISSION )
    gclient->ps.eFlags.m_flags[0] ^= 4u;
}

/*
==============
G_ActiveMP_SpectatorClientEndFrame
==============
*/
void G_ActiveMP_SpectatorClientEndFrame(gentity_s *ent)
{
  unsigned __int64 v1; 
  gclient_s *client; 
  int frameDuration; 
  char archiveUsePOTG; 
  int forceSpectatorClient; 
  int v7; 
  int EarliestArchiveMaxVariance; 
  int EarliestArchivedClientInfoTime; 
  int archiveTime; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  bool v16; 
  int v17; 
  int killCamEntity; 
  __int16 v19; 
  int killCamLookAtEntity; 
  unsigned int clientNum; 
  int spectatorClient; 
  int v23; 
  int v24; 
  vec3_t *origin; 
  int *health; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *otherFlags; 
  char v28[4]; 
  __int64 v29; 

  v29 = -2i64;
  v1 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64;
  *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1190) = 0;
  GSnapshotWeaponMap::GSnapshotWeaponMap((GSnapshotWeaponMap *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 24), (WeaponMapEntry *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 21504));
  client = ent->client;
  G_GameInterface_ActiveMP_SpectatorClientEndFrame(ent);
  ent->r.svFlags &= ~2u;
  ent->r.svFlags |= 1u;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 0x10u);
  SV_LinkEntity(ent);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x22u);
  ent->s.eType = ET_INVISIBLE;
  G_PhysicsCharacterProxy_RemoveCharacter(ent);
  client->ps.viewmodelIndex = 0;
  *(_QWORD *)&client->fGunPitch = 0i64;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  frameDuration = level.frameDuration;
  if ( client->sess.archiveTime < 0 )
  {
    LODWORD(origin) = client->sess.archiveTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3679, ASSERT_TYPE_ASSERT, "( client->sess.archiveTime ) >= ( 0 )", "client->sess.archiveTime >= 0\n\t%i, %i", origin, 0i64) )
      __debugbreak();
  }
  if ( client->sess.archiveTime % frameDuration )
  {
    LODWORD(health) = client->sess.archiveTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3680, ASSERT_TYPE_ASSERT, "(client->sess.archiveTime % frameDuration == 0)", "%s\n\t%d %d", "client->sess.archiveTime % frameDuration == 0", health, frameDuration) )
      __debugbreak();
  }
  if ( client->sess.psOffsetTime < 0 )
  {
    LODWORD(origin) = client->sess.psOffsetTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3682, ASSERT_TYPE_ASSERT, "( client->sess.psOffsetTime ) >= ( 0 )", "client->sess.psOffsetTime >= 0\n\t%i, %i", origin, 0i64) )
      __debugbreak();
  }
  if ( client->sess.psOffsetTime % frameDuration )
  {
    LODWORD(otherFlags) = frameDuration;
    LODWORD(health) = client->sess.psOffsetTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3683, ASSERT_TYPE_ASSERT, "(client->sess.psOffsetTime % frameDuration == 0)", "%s\n\t%d %d", "client->sess.psOffsetTime % frameDuration == 0", health, otherFlags) )
      __debugbreak();
  }
  archiveUsePOTG = client->sess.archiveUsePOTG;
  *(_BYTE *)v1 = archiveUsePOTG;
  forceSpectatorClient = client->sess.forceSpectatorClient;
  if ( forceSpectatorClient >= 0 )
  {
    client->spectatorClient = forceSpectatorClient;
    if ( !client->sess.isInKillcam )
    {
      v7 = client->sess.archiveTime - client->sess.psOffsetTime;
      *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 4) = v7;
      if ( v7 % frameDuration )
      {
        LODWORD(otherFlags) = frameDuration;
        LODWORD(health) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3701, ASSERT_TYPE_ASSERT, "(psTime % frameDuration == 0)", "%s\n\t%d %d", "psTime % frameDuration == 0", health, otherFlags) )
          __debugbreak();
      }
      if ( SV_SnapshotMP_GetArchivedClientInfo(forceSpectatorClient, archiveUsePOTG, (int *)(v1 + 4), (playerState_s *)(v1 + 64), (GSnapshotWeaponMap *)(v1 + 24), NULL, (int *)(v1 + 16), (GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v1 + 40), (team_t *)(v1 + 8)) )
        G_ActiveMP_SpectatorClientEndFrame_SpectateClient((GSnapshotWeaponMap *)(v1 + 24), (playerState_s *)(v1 + 64), client, ent);
      else
        G_ActiveMP_SpectatorClientEndFrame_SpectateClient_Failed(ent, client, 1);
      G_ActiveMP_SpectatorClientEndFrame_UpdateStreamList(ent->s.number, client);
      goto LABEL_92;
    }
    EarliestArchiveMaxVariance = SV_SnapshotMP_GetEarliestArchiveMaxVariance(archiveUsePOTG);
    EarliestArchivedClientInfoTime = SV_SnapshotMP_GetEarliestArchivedClientInfoTime(archiveUsePOTG);
    archiveTime = client->sess.archiveTime;
    v11 = archiveTime;
    v12 = EarliestArchivedClientInfoTime - EarliestArchiveMaxVariance;
    *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC) = EarliestArchivedClientInfoTime - EarliestArchiveMaxVariance;
    while ( 1 )
    {
      if ( v11 < 0 )
      {
        client->sess.archiveTime = 0;
        v11 = 0;
      }
      v13 = v11 - client->sess.psOffsetTime;
      *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 4) = v13;
      v14 = v13;
      if ( v13 > v12 )
      {
        v15 = client->sess.psOffsetTime - EarliestArchiveMaxVariance;
        v16 = EarliestArchivedClientInfoTime + v15 < 0;
        v17 = EarliestArchivedClientInfoTime + v15;
        client->sess.archiveTime = v17;
        if ( v16 )
        {
          client->sess.archiveTime = 0;
          v17 = 0;
        }
        if ( v17 % frameDuration )
        {
          LODWORD(otherFlags) = frameDuration;
          LODWORD(health) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3738, ASSERT_TYPE_ASSERT, "(client->sess.archiveTime % frameDuration == 0)", "%s\n\t%d %d", "client->sess.archiveTime % frameDuration == 0", health, otherFlags) )
            __debugbreak();
        }
        v13 = client->sess.archiveTime - client->sess.psOffsetTime;
        *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 4) = v13;
        v14 = v13;
      }
      if ( archiveTime > 0 && client->sess.archiveTime <= 0 )
        break;
      if ( v14 % frameDuration )
      {
        LODWORD(otherFlags) = frameDuration;
        LODWORD(health) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3754, ASSERT_TYPE_ASSERT, "(psTime % frameDuration == 0)", "%s\n\t%d %d", "psTime % frameDuration == 0", health, otherFlags) )
          __debugbreak();
      }
      if ( SV_SnapshotMP_GetArchivedClientInfo(forceSpectatorClient, *(_BYTE *)v1, (int *)(v1 + 4), (playerState_s *)(v1 + 64), (GSnapshotWeaponMap *)(v1 + 24), NULL, (int *)(v1 + 16), (GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v1 + 40), (team_t *)(v1 + 8)) )
      {
        killCamEntity = client->sess.killCamEntity;
        if ( killCamEntity == -1 )
          v19 = 2047;
        else
          v19 = truncate_cast<short,int>(killCamEntity);
        *(_WORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 0x2F84) = v19;
        *(_WORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 0x2F86) = truncate_cast<short,int>(client->sess.killCamLookAtEntity);
        *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 0x2F88) = client->sess.forceSpectatorClient;
        *(_BYTE *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 0x2F8C) = truncate_cast<signed char,int>(client->sess.killCamFlags);
        if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v1 + 40), ACTIVE, 0x22u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4078, ASSERT_TYPE_ASSERT, "(otherFlags->TestFlagStrict( POtherFlagsMP::PLAYER ))", "%s\n\tFollow playerState::otherFlags is not PLAYER.", "otherFlags->TestFlagStrict( POtherFlagsMP::PLAYER )") )
          __debugbreak();
        if ( G_ActiveMP_ClientCanSpectateTeam(client, *(const team_t *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 8)) )
        {
          G_ActiveMP_SpectatorClientEndFrame_SpectateClient((GSnapshotWeaponMap *)(v1 + 24), (playerState_s *)(v1 + 64), client, ent);
          G_ActiveMP_SpectatorClientEndFrame_UpdateStreamList(ent->s.number, client);
          goto LABEL_92;
        }
      }
      v11 = client->sess.archiveTime;
      if ( v11 <= 0 )
        break;
      if ( client->sess.killCamEntity < 0 )
        goto LABEL_61;
      killCamLookAtEntity = client->sess.killCamLookAtEntity;
      if ( killCamLookAtEntity < 0 || killCamLookAtEntity >= level.maxclients )
        killCamLookAtEntity = ent->s.number;
      if ( forceSpectatorClient == killCamLookAtEntity )
      {
LABEL_61:
        v11 -= frameDuration;
        client->sess.archiveTime = v11;
        v12 = *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC);
      }
      else
      {
        forceSpectatorClient = killCamLookAtEntity;
        client->spectatorClient = killCamLookAtEntity;
        v12 = *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 0xC);
      }
    }
    client->sess.forceSpectatorClient = -1;
    client->sess.killCamEntity = -1;
    clientNum = ent->s.clientNum;
    archiveUsePOTG = *(_BYTE *)v1;
    client->cycleSpectatorClient = -1;
    client->spectatorClient = -1;
    *(_QWORD *)&client->sess.killCamLookAtEntity = clientNum;
  }
  if ( client->spectatorClient < 0 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    if ( (client->sess.noSpectate.array[6] & 0x100000) != 0 )
      G_CmdsMP_SpectateCycle_f(ent->client, 1);
  }
  spectatorClient = client->spectatorClient;
  if ( spectatorClient >= 0 && spectatorClient == client->cycleSpectatorClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3821, ASSERT_TYPE_ASSERT, "( client->spectatorClient < 0 || client->spectatorClient != client->cycleSpectatorClient )", (const char *)&queryFormat, "client->spectatorClient < 0 || client->spectatorClient != client->cycleSpectatorClient") )
    __debugbreak();
  G_ActiveMP_SpectatorClientEndFrame_UpdateStreamList(ent->s.number, client);
  G_ActiveMP_SpectatorClientEndFrame_CheckSpectateCycle(ent);
  if ( client->spectatorClient < 0 )
    goto LABEL_90;
  if ( client->sess.archiveTime % frameDuration )
  {
    LODWORD(otherFlags) = frameDuration;
    LODWORD(health) = client->sess.archiveTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3828, ASSERT_TYPE_ASSERT, "(client->sess.archiveTime % frameDuration == 0)", "%s\n\t%d %d", "client->sess.archiveTime % frameDuration == 0", health, otherFlags) )
      __debugbreak();
  }
  v23 = client->sess.archiveTime + client->sess.psOffsetTime;
  *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 4) = v23;
  if ( v23 % frameDuration )
  {
    LODWORD(otherFlags) = frameDuration;
    LODWORD(health) = v23;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3831, ASSERT_TYPE_ASSERT, "(psTime % frameDuration == 0)", "%s\n\t%d %d", "psTime % frameDuration == 0", health, otherFlags) )
      __debugbreak();
  }
  if ( !SV_SnapshotMP_GetArchivedClientInfo(client->spectatorClient, archiveUsePOTG, (int *)(v1 + 4), (playerState_s *)(v1 + 64), (GSnapshotWeaponMap *)(v1 + 24), NULL, (int *)(v1 + 16), (GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v1 + 40), (team_t *)(v1 + 8)) )
    goto LABEL_90;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v1 + 40), ACTIVE, 0x22u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4078, ASSERT_TYPE_ASSERT, "(otherFlags->TestFlagStrict( POtherFlagsMP::PLAYER ))", "%s\n\tFollow playerState::otherFlags is not PLAYER.", "otherFlags->TestFlagStrict( POtherFlagsMP::PLAYER )") )
    __debugbreak();
  if ( G_ActiveMP_ClientCanSpectateTeam(client, *(const team_t *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0ui64) + 8)) )
  {
    G_ActiveMP_SpectatorClientEndFrame_SpectateClient((GSnapshotWeaponMap *)(v1 + 24), (playerState_s *)(v1 + 64), client, ent);
  }
  else
  {
LABEL_90:
    v24 = client->spectatorClient;
    G_ActiveMP_SpectatorClientEndFrame_SpectateClient_Failed(ent, client, 0);
    if ( client->sess.cs.isMLGSpectator )
      client->spectatorClient = v24;
  }
LABEL_92:
  GSnapshotWeaponMap::~GSnapshotWeaponMap((GSnapshotWeaponMap *)(v1 + 24));
}

/*
==============
G_ActiveMP_SpectatorClientEndFrame_AddViewWeaponsForSpectatorClient
==============
*/
bool G_ActiveMP_SpectatorClientEndFrame_AddViewWeaponsForSpectatorClient(const int clientNum, const int spectatorClientNum, Weapon (*outViewWeapons)[24], unsigned int *outViewWeaponCount)
{
  __int64 v8; 
  const characterInfo_t *v9; 
  GWeaponMap *Instance; 

  if ( clientNum == spectatorClientNum )
    return 1;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v8 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3271, ASSERT_TYPE_ASSERT, "( ( gameStatic != nullptr ) )", "( gameStatic ) = %p", *(const void **)&GStatic::ms_gameStatics) )
    __debugbreak();
  v9 = (const characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 216i64))(v8, (unsigned int)spectatorClientNum);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3274, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3277, ASSERT_TYPE_ASSERT, "( ( weaponMap != nullptr ) )", "%s\n\t( weaponMap ) = %p", "( weaponMap != nullptr )", NULL) )
    __debugbreak();
  return BG_GetNextSpectateViewWeapons(Instance, v9, outViewWeapons, outViewWeaponCount);
}

/*
==============
G_ActiveMP_SpectatorClientEndFrame_CheckSpectateCycle
==============
*/
void G_ActiveMP_SpectatorClientEndFrame_CheckSpectateCycle(gentity_s *ent)
{
  gclient_s *client; 
  __int64 v3; 
  const characterInfo_t *v4; 
  const clientState_t *ClientState; 
  char **v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  int v9; 
  __int64 number; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3596, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3602, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->cycleSpectatorClient >= 0 )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v3 = *(_QWORD *)&GStatic::ms_gameStatics;
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3553, ASSERT_TYPE_ASSERT, "( ( gameStatic != nullptr ) )", "( gameStatic ) = %p", NULL) )
      __debugbreak();
    v4 = (const characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 216i64))(v3, (unsigned int)client->cycleSpectatorClient);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3556, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
      __debugbreak();
    ClientState = G_MainMP_GetClientState(client->cycleSpectatorClient);
    if ( G_CharacterStreaming_HasCustomizationViewModelsLoaded(ent->s.number, ClientState) )
    {
      if ( G_WeaponStreaming_HasNextSpectateViewWeaponsLoaded(ent->s.number, v4) )
      {
        if ( G_WorldStreaming_HasNextStreamPositionLoadedForClient(ent->s.number, MOVEMENT) )
          goto LABEL_34;
        v6 = off_147EC1D08;
      }
      else
      {
        v6 = off_147EC1D00;
      }
    }
    else
    {
      v6 = off_147EC1CF8;
    }
    v7 = DVARINT_g_spectateCycleTimeout;
    if ( !DVARINT_g_spectateCycleTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_spectateCycleTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.integer + ent->client->cycleSpectatorTime > level.time )
    {
      v8 = DCONST_DVARBOOL_g_devSpectateCycleVerbose;
      if ( !DCONST_DVARBOOL_g_devSpectateCycleVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_devSpectateCycleVerbose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
      {
        v9 = Sys_Milliseconds();
        number = ent->s.number;
        if ( (unsigned int)(v9 - s_lastPrintTime_0[number]) > 0xC8 )
        {
          Com_Printf(15, "G_ActiveMP_SpectatorClientEndFrame_CheckSpectateCycle: client %u returned '%s'\n", (unsigned int)(__int16)number, *v6);
          s_lastPrintTime_0[ent->s.number] = v9;
        }
      }
      return;
    }
    Com_Printf(15, "SpectatorClientEndFrame_CheckSpectateCycle: Timed out for client '%d' spectating client '%d'\n", (unsigned int)ent->s.number, (unsigned int)client->cycleSpectatorClient);
LABEL_34:
    GScr_Notify(ent, scr_const.spectating_cycle, 0);
    client->spectatorClient = client->cycleSpectatorClient;
    client->cycleSpectatorClient = -1;
  }
}

/*
==============
G_ActiveMP_SpectatorClientEndFrame_SpectateClient
==============
*/
void G_ActiveMP_SpectatorClientEndFrame_SpectateClient(GSnapshotWeaponMap *weaponMap, playerState_s *ps, gclient_s *client, gentity_s *ent)
{
  int clientNum; 
  unsigned int v7; 
  bool v10; 
  bool v11; 
  GWeaponMap *Instance; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 

  clientNum = client->ps.clientNum;
  v7 = ps->eFlags.m_flags[0];
  if ( clientNum == ent->s.number && ps->clientNum != clientNum && !client->sess.persistentDataArchived )
  {
    client->sess.persistentDataArchived = 1;
    G_Omnvar_SavePlayerStateOmnvars(client);
    client->sess.savedSpawnCount = client->ps.stats[3];
    client->sess.savedServerTime = client->lastServerTime;
    client->sess.savedFootstepCount = client->ps.footstepCount;
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v10 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Bu);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v11 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Cu);
  Instance = GWeaponMap::GetInstance();
  G_Client_CopyPlayerState(Instance, &client->ps, weaponMap, ps);
  G_HudElemMP_UpdateClient(client, ent->s.number, HUDELEM_UPDATE_CURRENT);
  if ( client->sess.archiveTime && client->sess.killCamEntity >= 0 )
    G_HudElemMP_ClearClient(client, HUDELEM_UPDATE_ARCHIVAL);
  client->ps.eFlags.m_flags[0] = v7;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x22u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x21u);
  if ( v11 )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Cu);
  }
  if ( client->sess.forceSpectatorClient < 0 )
  {
    G_ActiveMP_SpectatorClientEndFrame_UpdateCycleFlag(client);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    p_otherFlags = &client->ps.otherFlags;
    if ( (client->sess.noSpectate.array[6] & 0x100000) != 0 )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(p_otherFlags, (POtherFlagsMP)36);
    else
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(p_otherFlags, (POtherFlagsMP)36);
  }
  else
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x23u);
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x24u);
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x25u);
    if ( v10 )
    {
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x2Bu);
    }
  }
  if ( client->cycleSpectatorClient < 0 )
    G_WorldStreaming_ClearNextStreamView(ent->s.number, MOVEMENT);
  SV_ClientMP_SendClientPlayerData(ent->s.number);
}

/*
==============
G_ActiveMP_SpectatorClientEndFrame_SpectateClient_Failed
==============
*/
void G_ActiveMP_SpectatorClientEndFrame_SpectateClient_Failed(gentity_s *ent, gclient_s *client, const int clearNextFollow)
{
  G_CmdsMP_StopSpectating(ent, clearNextFollow, 0);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x24u);
  if ( (client->sess.noSpectate.array[0] & 0xE0000000) == -536870912 )
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&client->ps.otherFlags, CROUCHING|0x20);
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&client->ps.otherFlags, TURRET_ACTIVE_PRONE|0x20);
  }
  else
  {
    G_ActiveMP_SpectatorClientEndFrame_UpdateCycleFlag(client);
  }
  SV_ClientMP_SendClientPlayerData(ent->s.number);
}

/*
==============
G_ActiveMP_SpectatorClientEndFrame_UpdateCycleFlag
==============
*/
void G_ActiveMP_SpectatorClientEndFrame_UpdateCycleFlag(gclient_s *client)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v2; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3402, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->sess.forceSpectatorClient >= 0 || client->cycleSpectatorClient < 0 )
  {
    p_otherFlags = &client->ps.otherFlags;
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 0x23u);
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0x25u);
  }
  else
  {
    v2 = &client->ps.otherFlags;
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(v2, ACTIVE, 0x23u);
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(v2, ACTIVE, 0x25u);
  }
}

/*
==============
G_ActiveMP_SpectatorClientEndFrame_UpdateStreamList
==============
*/
void G_ActiveMP_SpectatorClientEndFrame_UpdateStreamList(const unsigned int clientNum, const gclient_s *const client)
{
  int spectatorClient; 
  __int64 v5; 
  unsigned int v6; 
  const playerState_s *PlayerState; 
  int cycleSpectatorClient; 
  __int16 v9; 
  int v10; 
  clientState_t *ClientState; 
  unsigned __int16 ViewhandIndexForBody; 
  const dvar_t *v13; 
  int v14; 
  int integer; 
  int CycleSpectatorClientNum; 
  int archiveTime; 
  int v18; 
  __int64 v19; 
  int *v20; 
  __int64 v21; 
  int *v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  clientState_t *v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 SpectateViewModels; 
  const char *v30; 
  __int64 SpectateViewWeapons; 
  const char *v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int outViewWeaponCount; 
  int pArchiveTime; 
  int v38; 
  unsigned int modelIndices[20]; 
  int clientNuma[200]; 
  Weapon outViewWeapons[24]; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3296, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  spectatorClient = client->spectatorClient;
  v5 = 0i64;
  outViewWeaponCount = 0;
  v6 = 0;
  if ( spectatorClient >= 0 )
  {
    if ( (unsigned int)spectatorClient >= level.maxclients )
    {
      LODWORD(v33) = spectatorClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3303, ASSERT_TYPE_ASSERT, "(unsigned)( client->spectatorClient ) < (unsigned)( level.maxclients )", "client->spectatorClient doesn't index level.maxclients\n\t%i not in [0, %i)", v33, level.maxclients) )
        __debugbreak();
    }
    PlayerState = G_MainMP_GetPlayerState(client->spectatorClient);
    G_ActiveMP_UpdateSpeculativeWeaponStreaming(clientNum, PlayerState);
  }
  cycleSpectatorClient = client->cycleSpectatorClient;
  if ( cycleSpectatorClient >= 0 )
  {
    v9 = truncate_cast<short,int>(cycleSpectatorClient);
    G_WorldStreaming_SetNextStreamClientSpectate(clientNum, v9, 1);
    v10 = client->cycleSpectatorClient;
    if ( clientNum != v10 )
    {
      if ( v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3248, ASSERT_TYPE_ASSERT, "( spectatorClientNum ) >= ( 0 )", "%s >= %s\n\t%i, %i", "spectatorClientNum", "0", client->cycleSpectatorClient, 0i64) )
        __debugbreak();
      ClientState = G_MainMP_GetClientState(v10);
      if ( !ClientState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3252, ASSERT_TYPE_ASSERT, "( ( cs != nullptr ) )", "%s\n\t( cs ) = %p", "( cs != nullptr )", NULL) )
        __debugbreak();
      ViewhandIndexForBody = BG_Customization_GetViewhandIndexForBody(ClientState->customization.modelIndex[1]);
      v10 = client->cycleSpectatorClient;
      v6 = 1;
      modelIndices[0] = ViewhandIndexForBody;
    }
    if ( !G_ActiveMP_SpectatorClientEndFrame_AddViewWeaponsForSpectatorClient(clientNum, v10, (Weapon (*)[24])outViewWeapons, &outViewWeaponCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3313, ASSERT_TYPE_ASSERT, "(G_ActiveMP_SpectatorClientEndFrame_AddViewWeaponsForSpectatorClient( clientNum, client->cycleSpectatorClient, viewWeapons, viewWeaponCount ))", (const char *)&queryFormat, "G_ActiveMP_SpectatorClientEndFrame_AddViewWeaponsForSpectatorClient( clientNum, client->cycleSpectatorClient, viewWeapons, viewWeaponCount )") )
      __debugbreak();
  }
  v13 = DVARINT_g_spectateExtraStreamedClients;
  v14 = 0;
  if ( !DVARINT_g_spectateExtraStreamedClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_spectateExtraStreamedClients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  integer = v13->current.integer;
  if ( integer )
  {
    CycleSpectatorClientNum = client->spectatorClient;
    archiveTime = client->sess.archiveTime;
    v18 = integer / 2;
    v38 = integer / 2;
    pArchiveTime = archiveTime;
    if ( integer % 2 + integer / 2 > 0 )
    {
      v19 = (unsigned int)(integer % 2 + integer / 2);
      v20 = clientNuma;
      if ( CycleSpectatorClientNum < 0 )
        CycleSpectatorClientNum = clientNum;
      do
      {
        CycleSpectatorClientNum = G_ActiveMP_GetCycleSpectatorClientNum(client, &pArchiveTime, CycleSpectatorClientNum, 1);
        if ( CycleSpectatorClientNum >= 0 )
        {
          if ( (unsigned int)v14 >= 0xC8 )
          {
            LODWORD(v34) = 200;
            LODWORD(v33) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3333, ASSERT_TYPE_ASSERT, "(unsigned)( extraSpectateClientCount ) < (unsigned)( ( sizeof( *array_counter( extraSpectateClientOrder ) ) + 0 ) )", "extraSpectateClientCount doesn't index ARRAY_COUNT( extraSpectateClientOrder )\n\t%i not in [0, %i)", v33, v34) )
              __debugbreak();
          }
          ++v14;
          *v20++ = CycleSpectatorClientNum;
        }
        --v19;
      }
      while ( v19 );
      CycleSpectatorClientNum = client->spectatorClient;
      v5 = 0i64;
      v18 = v38;
    }
    if ( v18 > 0 )
    {
      v21 = (unsigned int)v18;
      if ( CycleSpectatorClientNum < 0 )
        CycleSpectatorClientNum = clientNum;
      v22 = &clientNuma[v14];
      do
      {
        CycleSpectatorClientNum = G_ActiveMP_GetCycleSpectatorClientNum(client, &pArchiveTime, CycleSpectatorClientNum, -1);
        if ( CycleSpectatorClientNum >= 0 )
        {
          if ( (unsigned int)v14 >= 0xC8 )
          {
            LODWORD(v34) = 200;
            LODWORD(v33) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3345, ASSERT_TYPE_ASSERT, "(unsigned)( extraSpectateClientCount ) < (unsigned)( ( sizeof( *array_counter( extraSpectateClientOrder ) ) + 0 ) )", "extraSpectateClientCount doesn't index ARRAY_COUNT( extraSpectateClientOrder )\n\t%i not in [0, %i)", v33, v34) )
              __debugbreak();
          }
          ++v14;
          *v22++ = CycleSpectatorClientNum;
        }
        --v21;
      }
      while ( v21 );
      v5 = 0i64;
    }
  }
  v23 = v14;
  if ( v14 <= 0 )
    goto LABEL_66;
  v24 = 0i64;
  while ( 1 )
  {
    v25 = clientNuma[v24];
    if ( clientNum != v25 )
      break;
LABEL_57:
    if ( ++v24 >= v23 )
      goto LABEL_61;
  }
  if ( v25 < 0 )
  {
    LODWORD(v35) = clientNuma[v24];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3248, ASSERT_TYPE_ASSERT, "( spectatorClientNum ) >= ( 0 )", "%s >= %s\n\t%i, %i", "spectatorClientNum", "0", v35, 0i64) )
      __debugbreak();
  }
  if ( v6 < 0x14 )
  {
    v26 = G_MainMP_GetClientState(v25);
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3252, ASSERT_TYPE_ASSERT, "( ( cs != nullptr ) )", "%s\n\t( cs ) = %p", "( cs != nullptr )", NULL) )
      __debugbreak();
    v27 = BG_Customization_GetViewhandIndexForBody(v26->customization.modelIndex[1]);
    v28 = v6++;
    modelIndices[v28] = v27;
    goto LABEL_57;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3357, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Exceeded limit for extra spectator view arms. Either 'g_spectateExtraStreamedClients' needs to be lowered, or MAX_VIEWARMS_STREAMED_STATIC needs to be increased.") )
    __debugbreak();
LABEL_61:
  while ( G_ActiveMP_SpectatorClientEndFrame_AddViewWeaponsForSpectatorClient(clientNum, clientNuma[v5], (Weapon (*)[24])outViewWeapons, &outViewWeaponCount) )
  {
    if ( ++v5 >= v23 )
      goto LABEL_66;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3367, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Exceeded limit for extra spectator view weapons. Either 'g_spectateExtraStreamedClients' needs to be lowered, or MAX_VIEW_WEAPONS_STREAMED needs to be increased.") )
    __debugbreak();
LABEL_66:
  if ( v6 )
  {
    SpectateViewModels = G_CharacterStreaming_SetNextSpectateViewModels(clientNum, modelIndices, v6);
    v30 = j_va("G_ActiveMP_SpectatorClientEndFrame_UpdateStreamList expected %u viewarms stream requests, but could only complete %u.\n", v6, SpectateViewModels);
    G_ActiveMP_SpectatorClientEndFrame_ValidateStreaming(clientNum, v6, SpectateViewModels, v30);
  }
  if ( outViewWeaponCount )
  {
    SpectateViewWeapons = G_WeaponStreaming_SetNextSpectateViewWeapons(clientNum, outViewWeapons, outViewWeaponCount);
    v32 = j_va("G_ActiveMP_SpectatorClientEndFrame_UpdateStreamList expected %u view weapons stream requests, but could only complete %u.\n", outViewWeaponCount, SpectateViewWeapons);
    G_ActiveMP_SpectatorClientEndFrame_ValidateStreaming(clientNum, outViewWeaponCount, SpectateViewWeapons, v32);
  }
}

/*
==============
G_ActiveMP_SpectatorClientEndFrame_ValidateStreaming
==============
*/
void G_ActiveMP_SpectatorClientEndFrame_ValidateStreaming(const int clientNum, const unsigned int expectedRequestCount, const unsigned int requestCount, const char *const failureMessage)
{
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  int *v8; 
  int v9; 
  int v10; 

  if ( expectedRequestCount != requestCount )
  {
    v5 = clientNum;
    v6 = Sys_Milliseconds();
    if ( (unsigned int)v5 >= 0xC8 )
    {
      v10 = 200;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2831, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_lastPrintTime ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_lastPrintTime )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v7 = v6 - s_lastPrintTime[v5];
    v8 = &s_lastPrintTime[v5];
    if ( v7 > 0xC8 )
    {
      Com_PrintError(15, (const char *)&queryFormat, failureMessage);
      *v8 = v6;
    }
  }
}

/*
==============
G_ActiveMP_SpectatorThinkCallback
==============
*/
void G_ActiveMP_SpectatorThinkCallback(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  unsigned __int64 *ParameterInternal; 
  gclient_s *client; 
  unsigned __int64 buttons; 
  unsigned __int64 v7; 
  team_t FreeLookTeam; 
  unsigned __int64 v9; 
  int v10; 
  const dvar_t *v11; 
  __int64 v12; 
  bool v13; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  usercmd_s *p_cmd; 
  __int64 v16; 
  int pm_type; 
  const dvar_t *v18; 
  GPMove v19; 

  GPMove::GPMove(&v19);
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1019, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1020, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1021, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR )") )
    __debugbreak();
  Profile_Begin(350);
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (unsigned __int64 *)GClientTaskQueue::GetParameterInternal(outputQueue, 0x108u, 8u);
  client = playerEnt->client;
  buttons = client->buttons;
  client->oldbuttons = buttons;
  v7 = *ParameterInternal;
  client->buttons = *ParameterInternal;
  client->buttonsSinceLastFrame |= v7 & ~buttons;
  if ( !client->sess.cs.isMLGSpectator )
  {
    if ( client->sess.forceSpectatorClient < 0 )
    {
      FreeLookTeam = Com_TeamsMP_GetFreeLookTeam();
      if ( G_ActiveMP_ClientCanSpectateTeam(client, FreeLookTeam) )
      {
        if ( client->spectatorClient >= 0 && ((client->oldbuttons ^ client->buttons) & 0x1000000000000i64) != 0 )
          G_CmdsMP_StopSpectating(playerEnt, 1, 0);
      }
    }
    v9 = client->buttons;
    if ( (v9 & 0x2000000000000i64) != 0 && (client->oldbuttons & 0x2000000000000i64) == 0 )
    {
      v10 = 1;
LABEL_25:
      G_CmdsMP_SpectateCycle_f(client, v10);
      goto LABEL_26;
    }
    if ( (v9 & 0x4000000000000i64) != 0 && (client->oldbuttons & 0x4000000000000i64) == 0 )
    {
      v10 = -1;
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0x21u) )
  {
    v11 = DVARBOOL_cg_mlg_forceDetachCodcasterCamera;
    if ( !DVARBOOL_cg_mlg_forceDetachCodcasterCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_forceDetachCodcasterCamera") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled && client->sess.cs.isMLGSpectator && client->mlgSpectatorClientInfo.cameraTypeMLGSpectator )
    {
      client->spectatorClient = -1;
      client->cycleSpectatorClient = -1;
    }
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)client->spectatorClient);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1073, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    if ( *(_DWORD *)(v12 + 4) )
      client->sess.mlgSpectatingTeam = *(_DWORD *)(v12 + 12);
  }
  else
  {
    if ( (client->flags & 2) != 0 )
      client->ps.pm_type = 3;
    else
      client->ps.pm_type = 5;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    if ( (client->sess.noSpectate.array[6] & 0x100000) != 0 )
      client->ps.speed = 0;
    else
      client->ps.speed = 400;
    G_Deploy_Clear(&client->ps);
    v19.ps = &client->ps;
    v13 = SV_UserMoveWorkersMP_IsInWorkerContext();
    v19.m_isUserMoveWorker = v13;
    PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(playerEnt->s.number);
    PlayerTraceInfo->m_isUserMoveWorker = v13;
    G_Active_InitPmoveExternalSystems(&v19, playerEnt->s.number, &client->ps, client->movingPlatformHandle);
    p_cmd = &v19.cmd;
    v16 = 2i64;
    do
    {
      *(_OWORD *)&p_cmd->buttons = *(_OWORD *)ParameterInternal;
      *(_OWORD *)&p_cmd->commandTime = *((_OWORD *)ParameterInternal + 1);
      *(_OWORD *)(&p_cmd->angles.xy + 1) = *((_OWORD *)ParameterInternal + 2);
      *(_OWORD *)&p_cmd->weapon.weaponOthers = *((_OWORD *)ParameterInternal + 3);
      *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[1] = *((_OWORD *)ParameterInternal + 4);
      *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[17] = *((_OWORD *)ParameterInternal + 5);
      *(_OWORD *)&p_cmd->offHand.weaponIdx = *((_OWORD *)ParameterInternal + 6);
      p_cmd = (usercmd_s *)((char *)p_cmd + 128);
      *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *((_OWORD *)ParameterInternal + 7);
      ParameterInternal += 16;
      --v16;
    }
    while ( v16 );
    p_cmd->buttons = *ParameterInternal;
    pm_type = client->ps.pm_type;
    if ( pm_type == 5 )
    {
      v19.tracemask = 8391313;
    }
    else
    {
      if ( pm_type != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1129, ASSERT_TYPE_ASSERT, "(client->ps.pm_type == PM_UFO)", (const char *)&queryFormat, "client->ps.pm_type == PM_UFO") )
        __debugbreak();
      v19.tracemask = 2065;
    }
    v19.m_bgHandler = GHandler::getHandler();
    v19.localClientNum = LOCAL_CLIENT_INVALID;
    v19.bounds = &client->playerBox;
    v19.ground = &client->playerGround;
    v19.groundPersistent = NULL;
    if ( client->sess.cs.isMLGSpectator )
    {
      v18 = DVARBOOL_cg_mlg_static_cameras_editing;
      if ( !DVARBOOL_cg_mlg_static_cameras_editing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_static_cameras_editing") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( !v18->current.enabled )
        v19.ps->speed = 0;
    }
    Profile_Begin(12);
    Pmove(&v19);
    Profile_EndInternal(NULL);
    PlayerTraceInfo->m_isUserMoveWorker = 0;
    playerEnt->r.currentOrigin.v[0] = client->ps.origin.v[0];
    playerEnt->r.currentOrigin.v[1] = client->ps.origin.v[1];
    playerEnt->r.currentOrigin.v[2] = client->ps.origin.v[2];
    G_Door_SetOwnership(v19.ps);
    SV_UnlinkEntity(playerEnt);
  }
  Profile_EndInternal(NULL);
  GPMove::~GPMove(&v19);
}

/*
==============
G_ActiveMP_TouchEnts
==============
*/
void G_ActiveMP_TouchEnts(gentity_s *ent, const int numtouch, const __int16 *touchents, const unsigned __int8 *toucherflags)
{
  __int64 v5; 
  gentity_s *TouchSource; 
  int v8; 
  const GEntityHandlerList *EntHandlerList; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 i; 
  __int64 v14; 
  const dvar_t *v15; 
  const gentity_s *v16; 
  const scrContext_t *v17; 
  void (__fastcall *touch)(gentity_s *, gentity_s *, int); 
  void (__fastcall *v19)(gentity_s *, gentity_s *, int); 
  __int64 v20; 
  __int64 v21; 

  v5 = numtouch;
  TouchSource = (gentity_s *)G_Utils_GetTouchSource(ent);
  v8 = 0;
  EntHandlerList = G_Main_GetEntHandlerList(TouchSource);
  v10 = v5;
  if ( (int)v5 > 0 )
  {
    v11 = 0i64;
    do
    {
      v12 = 0;
      for ( i = 0i64; i < v11; ++i )
      {
        if ( touchents[i] == touchents[v11] )
          break;
        ++v12;
      }
      if ( v12 == v8 )
      {
        v14 = touchents[v11];
        if ( (unsigned int)v14 >= 0x800 )
        {
          LODWORD(v21) = 2048;
          LODWORD(v20) = touchents[v11];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v14] )
        {
          v15 = DCONST_DVARBOOL_g_vehicleMoverBlockNoneVehicleTouchedEntities;
          if ( !DCONST_DVARBOOL_g_vehicleMoverBlockNoneVehicleTouchedEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_vehicleMoverBlockNoneVehicleTouchedEntities") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v15);
          if ( v15->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) && TouchSource != ent && (unsigned __int16)(TouchSource->s.eType - 12) <= 2u && (toucherflags[v11] & 2) == 0 )
            TouchSource = ent;
          v16 = &g_entities[touchents[v11]];
          v17 = ScriptContext_Server();
          if ( Scr_IsSystemActive(v17, 1u) )
          {
            GScr_AddEntity(v16);
            GScr_Notify(TouchSource, scr_const.touch, 1u);
            GScr_AddEntity(TouchSource);
            GScr_Notify(v16, scr_const.touch, 1u);
          }
          touch = G_Main_GetEntHandlerList(v16)->touch;
          if ( touch )
            touch((gentity_s *)v16, TouchSource, 1);
          v19 = EntHandlerList->touch;
          if ( v19 )
            v19(TouchSource, (gentity_s *)v16, 1);
        }
      }
      ++v8;
      ++v11;
    }
    while ( v11 < v10 );
  }
}

/*
==============
G_ActiveMP_TouchScriptableTriggers_Internal
==============
*/
void G_ActiveMP_TouchScriptableTriggers_Internal(gentity_s *const playerEnt, const Bounds *const boundsToUse, const unsigned int *const touch, unsigned int touchCount)
{
  __int64 v4; 
  const scrContext_t *v8; 
  double v9; 
  __int64 v10; 
  __int64 v11; 
  ScriptableInstanceServerContext *v12; 
  unsigned int scriptableCollisionMain; 
  const Bounds *v14; 
  __int64 v15; 
  __int64 v16; 
  __m128 v17; 
  double v18; 

  v4 = touchCount;
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 582, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !boundsToUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 583, ASSERT_TYPE_ASSERT, "( boundsToUse )", (const char *)&queryFormat, "boundsToUse") )
    __debugbreak();
  if ( !touch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 584, ASSERT_TYPE_ASSERT, "( touch )", (const char *)&queryFormat, "touch") )
    __debugbreak();
  if ( (_DWORD)v4 )
  {
    v8 = ScriptContext_Server();
    if ( Scr_IsSystemActive(v8, 1u) )
    {
      v9 = *(double *)&boundsToUse->halfSize.y;
      v17 = *(__m128 *)boundsToUse->midPoint.v;
      v18 = v9;
      v17.m128_f32[3] = _mm_shuffle_ps(v17, v17, 255).m128_f32[0] + 10.0;
      *((float *)&v18 + 1) = *((float *)&v18 + 1) + 10.0;
      *(float *)&v18 = *(float *)&v9 + 10.0;
      v10 = v4;
      do
      {
        v11 = *touch;
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v11 >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v16) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(v15) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        v12 = g_scriptableSv_instanceContexts;
        if ( g_scriptableSv_instanceContexts[v11].collisionContext.canTouch )
        {
          scriptableCollisionMain = g_scriptableSv_instanceContexts[v11].collisionContext.scriptableCollisionMain;
          if ( scriptableCollisionMain == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 611, ASSERT_TYPE_ASSERT, "( physInstId != 0xFFFFFFFF )", (const char *)&queryFormat, "physInstId != PHYSICSINSTANCEID_INVALID") )
            __debugbreak();
          if ( !v12[v11].collisionContext.canTouch || (v14 = (const Bounds *)&v17, !v12[v11].collisionContext.useLargerBounds) )
            v14 = boundsToUse;
          if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, v14, scriptableCollisionMain, NULL) )
          {
            if ( !SV_ClientWorkersMP_AddScriptableTrigger(playerEnt->s.number, v11, v12[v11].collisionContext.touchPartId) )
              G_ActiveMP_ProcessScriptableTrigger(playerEnt, v11, v12[v11].collisionContext.touchPartId);
          }
        }
        ++touch;
        --v10;
      }
      while ( v10 );
    }
  }
}

/*
==============
G_ActiveMP_TouchTriggers
==============
*/
void G_ActiveMP_TouchTriggers(gentity_s *ent)
{
  signed __int64 v1; 
  void *v2; 
  const playerState_s *EntityPlayerStateConst; 
  double v5; 
  float v6; 
  GHandler *Handler; 
  double v8; 
  float *v; 
  float v10; 
  gentity_s *PlayerVehicle; 
  const dvar_t *v12; 
  float value; 
  PhysicsQuery_Collected<unsigned int> *collectedScriptables; 
  bool outPlayerLinked; 
  bool outPlayerPredicted; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  PhysicsQuery_Collected<unsigned int> v18; 
  Bounds bounds; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  Bounds rotatedBounds; 
  WorldUpReferenceFrame v23; 
  unsigned int v24[2048]; 
  unsigned __int16 touch[2048]; 

  v2 = alloca(v1);
  Profile_Begin(484);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 836, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 839, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  if ( EntityPlayerStateConst->pm_type > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 840, ASSERT_TYPE_ASSERT, "( G_ActiveMP_TouchTriggers_IsSupportedMoveType( ps->pm_type ) )", (const char *)&queryFormat, "G_ActiveMP_TouchTriggers_IsSupportedMoveType( ps->pm_type )") )
    __debugbreak();
  v5 = *(double *)&ent->r.absBox.halfSize.y;
  *(_OWORD *)bounds.midPoint.v = *(_OWORD *)ent->r.absBox.midPoint.v;
  *(double *)&bounds.halfSize.y = v5;
  v6 = _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255).m128_f32[0] + 20.0;
  aabbMin.v[0] = bounds.midPoint.v[0] - v6;
  aabbMin.v[1] = bounds.midPoint.v[1] - (float)(*(float *)&v5 + 20.0);
  collectedEnts.countMax = 2048;
  collectedEnts.count = 0;
  collectedEnts.ids = touch;
  v18.count = 0;
  v18.ids = v24;
  v18.countMax = 2048;
  aabbMin.v[2] = bounds.midPoint.v[2] - (float)(bounds.halfSize.v[2] + 20.0);
  aabbMax.v[0] = bounds.midPoint.v[0] + v6;
  aabbMax.v[1] = bounds.midPoint.v[1] + (float)(*(float *)&v5 + 20.0);
  bounds.halfSize.v[0] = v6;
  bounds.halfSize.v[1] = *(float *)&v5 + 20.0;
  bounds.halfSize.v[2] = bounds.halfSize.v[2] + 20.0;
  aabbMax.v[2] = bounds.halfSize.v[2] + bounds.midPoint.v[2];
  PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 1078198280, &collectedEnts, &v18);
  if ( collectedEnts.count > 0x800 )
  {
    LODWORD(collectedScriptables) = collectedEnts.count;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 853, ASSERT_TYPE_ASSERT, "( collectEnts.count ) <= ( ( 2048 ) )", "collectEnts.count not in [0, MAX_GENTITIES]\n\t%u not in [0, %u]", collectedScriptables, 2048) )
      __debugbreak();
  }
  if ( WorldUpReferenceFrame::HasValidWorldUpInPs(EntityPlayerStateConst) )
  {
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v23, EntityPlayerStateConst, Handler);
    Bounds_Transform(&ent->r.box, &vec3_origin, &v23.m_axis, &rotatedBounds);
  }
  else
  {
    v8 = *(double *)&ent->r.box.halfSize.y;
    *(_OWORD *)rotatedBounds.midPoint.v = *(_OWORD *)ent->r.box.midPoint.v;
    *(double *)&rotatedBounds.halfSize.y = v8;
  }
  v = EntityPlayerStateConst->origin.v;
  bounds.midPoint.v[0] = rotatedBounds.midPoint.v[0] + EntityPlayerStateConst->origin.v[0];
  bounds.midPoint.v[1] = rotatedBounds.midPoint.v[1] + EntityPlayerStateConst->origin.v[1];
  v10 = rotatedBounds.midPoint.v[2] + EntityPlayerStateConst->origin.v[2];
  bounds.halfSize = rotatedBounds.halfSize;
  bounds.midPoint.v[2] = v10;
  Bounds_ExpandToWidth(&bounds);
  PlayerVehicle = G_ActiveMP_GetPlayerVehicle(ent, &outPlayerLinked, &outPlayerPredicted);
  if ( !outPlayerLinked )
  {
    if ( collectedEnts.count )
      G_ActiveMP_TouchTriggers_Internal(ent, &bounds, touch, collectedEnts.count, 0);
    bounds.halfSize.v[0] = bounds.halfSize.v[0] + 1.0;
    bounds.halfSize.v[1] = bounds.halfSize.v[1] + 1.0;
    bounds.halfSize.v[2] = bounds.halfSize.v[2] + 1.0;
    G_ActiveMP_TouchScriptableTriggers_Internal(ent, &bounds, v24, v18.count);
  }
  if ( PlayerVehicle )
  {
    v12 = DCONST_DVARFLT_g_vehicleTriggerBoxPad;
    bounds = PlayerVehicle->r.absBox;
    if ( !DCONST_DVARFLT_g_vehicleTriggerBoxPad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_vehicleTriggerBoxPad") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    value = v12->current.value;
    aabbMin.v[0] = bounds.midPoint.v[0] - (float)(value + bounds.halfSize.v[0]);
    aabbMin.v[1] = bounds.midPoint.v[1] - (float)(value + bounds.halfSize.v[1]);
    aabbMin.v[2] = bounds.midPoint.v[2] - (float)(value + bounds.halfSize.v[2]);
    aabbMax.v[0] = (float)(value + bounds.halfSize.v[0]) + bounds.midPoint.v[0];
    aabbMax.v[1] = (float)(value + bounds.halfSize.v[1]) + bounds.midPoint.v[1];
    aabbMax.v[2] = (float)(value + bounds.halfSize.v[2]) + bounds.midPoint.v[2];
    bounds.halfSize.v[0] = value + bounds.halfSize.v[0];
    bounds.halfSize.v[1] = value + bounds.halfSize.v[1];
    bounds.halfSize.v[2] = value + bounds.halfSize.v[2];
    PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 1078198280, &collectedEnts, NULL);
    if ( collectedEnts.count >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 894, ASSERT_TYPE_ASSERT, "(collectEnts.count < ( 2048 ))", (const char *)&queryFormat, "collectEnts.count < MAX_GENTITIES") )
      __debugbreak();
    if ( !outPlayerLinked )
    {
      v = EntityPlayerStateConst->vehicleState.origin.v;
      if ( !outPlayerPredicted )
        v = PlayerVehicle->r.currentOrigin.v;
    }
    bounds.midPoint.v[0] = *v + PlayerVehicle->r.box.midPoint.v[0];
    bounds.midPoint.v[1] = PlayerVehicle->r.box.midPoint.v[1] + v[1];
    bounds.midPoint.v[2] = PlayerVehicle->r.box.midPoint.v[2] + v[2];
    bounds.halfSize = PlayerVehicle->r.box.halfSize;
    Bounds_ExpandToWidth(&bounds);
    if ( collectedEnts.count )
      G_ActiveMP_TouchTriggers_Internal(ent, &bounds, touch, collectedEnts.count, 1);
  }
  Profile_EndInternal(NULL);
}

/*
==============
G_ActiveMP_TouchTriggers_Internal
==============
*/
void G_ActiveMP_TouchTriggers_Internal(gentity_s *playerEnt, Bounds *boundsToUse, unsigned __int16 *touch, unsigned int touchCount, bool isVehicleTrigger)
{
  __int64 v5; 
  gentity_s *PlayerVehicle; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  gentity_s *v14; 
  int LegacyEntityContactCapsule; 
  unsigned int v16; 
  const VehicleDef *ServerDef; 
  unsigned int v18; 
  bool HasContentFlag; 
  bool v20; 
  __int16 EntityIndex; 
  __int16 v22; 
  const gentity_s *v23; 
  __int16 v24; 
  const GEntityHandlerList *v25; 
  const scrContext_t *v26; 
  void (__fastcall *v27)(gentity_s *, gentity_s *, int); 
  __int64 v28; 
  __int64 v29; 
  bool outPlayerPredicted; 
  bool outPlayerLinked[7]; 
  __int64 v32; 
  Bounds *bounds; 
  const GEntityHandlerList *EntHandlerList; 
  GTrajectory v35; 
  vec3_t position; 
  vec4_t orientation; 

  v5 = touchCount;
  bounds = boundsToUse;
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 731, ASSERT_TYPE_ASSERT, "( playerEnt != nullptr )", (const char *)&queryFormat, "playerEnt != nullptr") )
    __debugbreak();
  if ( isVehicleTrigger )
    PlayerVehicle = G_ActiveMP_GetPlayerVehicle(playerEnt, outPlayerLinked, &outPlayerPredicted);
  else
    PlayerVehicle = playerEnt;
  if ( !PlayerVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 734, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( isVehicleTrigger && PlayerVehicle->vehicle && PlayerVehicle->s.eType == ET_VEHICLE && (Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, PlayerVehicle), Instance != -1) )
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, Instance, 0);
  else
    RigidBodyID = 0xFFFFFF;
  EntHandlerList = G_Main_GetEntHandlerList(PlayerVehicle);
  v11 = (__int64)EntHandlerList;
  if ( (_DWORD)v5 )
  {
    v32 = v5;
    do
    {
      v12 = *touch;
      if ( (unsigned int)v12 >= 0x800 )
      {
        LODWORD(v29) = 2048;
        LODWORD(v28) = *touch;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v12] )
        goto LABEL_74;
      v13 = *touch;
      if ( (unsigned int)v13 >= 0x800 )
      {
        LODWORD(v29) = 2048;
        LODWORD(v28) = *touch;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v14 = &g_entities[v13];
      if ( v14->s.eType == ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 751, ASSERT_TYPE_ASSERT, "( hit->s.eType != ET_MISSILE )", (const char *)&queryFormat, "hit->s.eType != ET_MISSILE") )
        __debugbreak();
      if ( !G_Main_GetEntHandlerList(v14)->touch && !*(_QWORD *)(v11 + 24) )
        goto LABEL_74;
      if ( (v14->s.eType == ET_ITEM || (v14->flags.m_flags[0] & 0x2000000) != 0) && PlayerVehicle->client )
      {
        GTrajectory::GTrajectory(&v35, v14);
        LegacyEntityContactCapsule = BG_PlayerTouchesItem(&PlayerVehicle->client->ps, &v14->s, level.time, &v35);
      }
      else
      {
        v16 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v14);
        if ( Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) )
        {
          ServerDef = G_Vehicle_GetServerDef(PlayerVehicle->vehicle->defIndex);
          if ( v16 != -1 )
          {
            if ( ServerDef->accurateShapeOverlap )
            {
              v18 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v16, 0);
              if ( Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, v18) )
              {
                if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_g_vehicleMakeTriggerContent, "g_vehicleMakeTriggerContent") )
                {
                  HasContentFlag = PhysicsVehicle_HasContentFlag(PHYSICS_WORLD_ID_FIRST, v18, 8);
                  if ( PhysicsVehicle_HasContentFlag(PHYSICS_WORLD_ID_FIRST, v18, 0x40000000) && !HasContentFlag )
                    PhysicsVehicle_AddContentFlag(PHYSICS_WORLD_ID_FIRST, v18, 8);
                }
                if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 711, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( worldId, vehBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( worldId, vehBodyId )") )
                  __debugbreak();
                if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 712, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( worldId, hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( worldId, hitBodyId )") )
                  __debugbreak();
                Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation);
                v20 = !PhysicsVehicle_Overlap_Shapes(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation, v18);
                goto LABEL_60;
              }
            }
          }
        }
        LegacyEntityContactCapsule = PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, bounds, v16, v14);
      }
      v20 = LegacyEntityContactCapsule == 0;
LABEL_60:
      if ( !v20 && (!playerEnt->client || !SV_ClientWorkersMP_AddEntityTrigger(playerEnt->s.number, v14->s.number, isVehicleTrigger)) )
      {
        EntityIndex = G_GetEntityIndex(playerEnt);
        if ( G_IsEntityInUse(EntityIndex) )
        {
          v22 = G_GetEntityIndex(v14);
          if ( G_IsEntityInUse(v22) )
          {
            v23 = isVehicleTrigger ? G_ActiveMP_GetPlayerVehicle(playerEnt, &outPlayerPredicted, outPlayerLinked) : playerEnt;
            if ( v23 )
            {
              v24 = G_GetEntityIndex(v23);
              if ( G_IsEntityInUse(v24) )
              {
                v25 = G_Main_GetEntHandlerList(v14);
                v26 = ScriptContext_Server();
                if ( Scr_IsSystemActive(v26, 1u) )
                {
                  GScr_AddEntity(v23);
                  GScr_Notify(v14, scr_const.touch, 1u);
                  GScr_AddEntity(v14);
                  GScr_Notify(v23, scr_const.touch, 1u);
                }
                v27 = v25->touch;
                if ( v27 )
                  v27(v14, (gentity_s *)v23, 1);
              }
            }
          }
        }
      }
LABEL_74:
      v11 = (__int64)EntHandlerList;
      ++touch;
      --v32;
    }
    while ( v32 );
  }
}

/*
==============
G_ActiveMP_UpdateAttackerAccuracy
==============
*/
void G_ActiveMP_UpdateAttackerAccuracy(gentity_s *player)
{
  int v2; 
  int v3; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  agent_t *agents; 
  const gentity_s *gentity; 
  AIAgentInterface *v7; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v9; 
  actor_s *actor; 
  __int64 v11; 
  EntHandle *v12; 
  int v13; 
  gclient_s *client; 
  const dvar_t *v15; 
  int integer; 
  int v17; 
  const dvar_t *v18; 
  float value; 
  float v20; 
  AIActorInterface v21; 
  AIAgentInterface v22; 
  AIAgentInterface *v23; 

  if ( SV_Loaded() && BG_AgentSystemEnabled() )
  {
    v2 = 0;
    v3 = 0;
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    agents = PersistentGlobalsMP->agents;
    if ( PersistentGlobalsMP->agentCount > 0 )
    {
      while ( agents->entityNum == 2047 || !G_IsEntityInUse(agents->entityNum) || !SV_Agent_IsScripted(agents->entityNum) )
      {
LABEL_37:
        ++v3;
        ++agents;
        if ( v3 >= PersistentGlobalsMP->agentCount )
          goto LABEL_38;
      }
      gentity = agents->gentity;
      AIActorInterface::AIActorInterface(&v21);
      AIAgentInterface::AIAgentInterface(&v22);
      v7 = NULL;
      v22.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v23 = NULL;
      if ( !gentity )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
          __debugbreak();
        v7 = v23;
      }
      if ( gentity->agent )
      {
        if ( SV_Agent_IsScripted(gentity->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(gentity);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v22, ScriptedAgentInfo);
          v7 = &v22;
          v23 = &v22;
          v9 = &v22;
LABEL_27:
          v11 = v7->GetAI(v7);
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 169, ASSERT_TYPE_ASSERT, "(pInfo)", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          v12 = *(EntHandle **)(v11 + 8);
          if ( EntHandle::isDefined(v12 + 18) && EntHandle::ent(v12 + 18) == player && *(int *)(*(_QWORD *)v11 + 440i64) > 0 )
          {
            v13 = 250;
            if ( *(int *)(v11 + 176) > 250 )
              v13 = *(_DWORD *)(v11 + 176);
            if ( AICommonInterface::CanSeeSentient(v9, player->sentient, v13) )
              ++v2;
          }
          goto LABEL_37;
        }
        v7 = v23;
      }
      actor = gentity->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v21, gentity->actor);
        v7 = (AIAgentInterface *)&v21;
        v23 = (AIAgentInterface *)&v21;
      }
      v9 = v7;
      if ( !v7 )
        goto LABEL_37;
      goto LABEL_27;
    }
LABEL_38:
    client = player->client;
    if ( v2 > 1 )
    {
      client->attackerCount = v2;
      v15 = DVARINT_ai_accuracy_attackerCountMax;
      if ( !DVARINT_ai_accuracy_attackerCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracy_attackerCountMax") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      integer = v15->current.integer;
      if ( v2 < integer )
        integer = v2;
      v17 = integer - 1;
      if ( v17 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 193, ASSERT_TYPE_ASSERT, "(attackerCount > 0)", (const char *)&queryFormat, "attackerCount > 0") )
        __debugbreak();
      v18 = DVARFLT_ai_accuracy_attackerCountDecrease;
      if ( !DVARFLT_ai_accuracy_attackerCountDecrease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracy_attackerCountDecrease") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      value = v18->current.value;
      if ( v17 == 2 )
        v20 = value * value;
      else
        v20 = powf_0(value, (float)v17);
      player->client->attackerAccuracyMultiplier = v20;
    }
    else
    {
      client->attackerAccuracyMultiplier = 1.0;
      player->client->attackerCount = 1;
    }
  }
}

/*
==============
G_ActiveMP_UpdateClientInfo
==============
*/
int G_ActiveMP_UpdateClientInfo(gentity_s *ent)
{
  gclient_s *client; 
  __int64 v3; 
  GWeaponMap *Instance; 
  __int64 v5; 
  characterInfo_t *v6; 
  unsigned int model; 
  const char *v8; 
  __int64 v9; 
  const char *v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  BOOL v14; 
  int v15; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  int v17; 
  bool *isWeaponSmoking; 
  int *weaponShotCount; 
  unsigned int *p_weaponShotCount; 
  const WeaponHeat *v21; 
  GHandler *Handler; 
  int endScriptAnimTableIndex; 
  GHandler *v24; 
  signed __int64 v25; 
  char *v26; 
  bool *isCustomizationAttachModel; 
  int v28; 
  char *v29; 
  signed __int64 v30; 
  signed __int64 v31; 
  scr_string_t *attachTagNames; 
  unsigned __int16 *attachModelNames; 
  unsigned int v34; 
  const char *v35; 
  char *v36; 
  int v37; 
  int v38; 
  const char *v39; 
  __int64 v40; 
  unsigned int v41; 
  int v42; 
  unsigned int Animset; 
  int result; 
  int v45; 
  signed __int64 v46; 
  __int64 v47; 
  signed __int64 v49; 
  __int64 v50; 
  characterInfo_t *inOutCharacterInfo; 
  unsigned int *p_attachModelIsOnBack; 
  Weapon r_heldWeapon; 
  Weapon r_turretWeapon; 
  Weapon r_accessoryWeapon; 
  Weapon r_executionWeapon; 
  Weapon r_stowedWeapon; 
  Weapon r_thrownWeapon; 

  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4556, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4557, ASSERT_TYPE_ASSERT, "(client->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v3 = *(_QWORD *)&GStatic::ms_gameStatics;
  Instance = GWeaponMap::GetInstance();
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 224i64))(v3, (unsigned int)ent->s.clientNum);
  inOutCharacterInfo = (characterInfo_t *)v5;
  v6 = (characterInfo_t *)v5;
  if ( (!v5 || !*(_DWORD *)(v5 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4565, ASSERT_TYPE_ASSERT, "(ci && ci->infoValid)", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  BG_GetCharacterWeapons(Instance, &ent->s, v6, &r_heldWeapon, &r_thrownWeapon, &r_stowedWeapon, &r_executionWeapon, &r_accessoryWeapon, &r_turretWeapon);
  model = ent->model;
  v45 = 0;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v8 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, model);
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && SV_TransientsMP_IsTransientModel(v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4581, ASSERT_TYPE_ASSERT, "(!SV_TransientsMP_IsTransientModel( modelName ))", "%s\n\tShould not be using transient models on the server", "!SV_TransientsMP_IsTransientModel( modelName )") )
    __debugbreak();
  client->sess.cs.modelindex = ent->model;
  v9 = 0x7FFFFFFFi64;
  v6->isCustomizationModel = 0;
  v6->dobjModelLoaded = 1;
  v10 = v8;
  if ( v6 == (characterInfo_t *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v11 = v10[v6->model - v8];
    v12 = v9;
    v13 = *v10++;
    --v9;
    if ( !v12 )
      break;
    if ( v11 != v13 )
    {
      v14 = BG_Customization_IsFemaleCustomization(&client->sess.cs.customization) && BG_Customization_IsCustomizationModel(CUSTOMIZATION_TYPE_BODY, v8);
      v6->isFemale = v14;
      v45 = 1;
      Core_strcpy(v6->model, 0x40ui64, v8);
      break;
    }
  }
  while ( v11 );
  client->sess.cs.chargedWeaponInfo.weaponChargeAmount[0] = client->ps.weapState[0].weaponChargeAmount;
  client->sess.cs.chargedWeaponInfo.weaponChargeAmount[1] = client->ps.weapState[1].weaponChargeAmount;
  v15 = BG_PlayerDualWielding(&client->ps);
  client->sess.cs.offhandShieldDeployed = 0;
  client->sess.cs.dualWielding = v15 != 0;
  client->sess.cs.isUsingWeaponAltMode = BG_UsingAlternate(&client->ps);
  client->sess.cs.usingNVG = BG_IsUsingNightVision(&client->ps);
  client->sess.cs.animLinkedToType = BG_GetLinkedToAnimType(&client->ps);
  client->sess.cs.isOnWall = BG_IsOnWallAnimFlagEnabled(&client->ps);
  client->sess.cs.isScriptedSceneAnim = BG_IsScriptedSceneAnimFlagEnabled(&client->ps);
  client->sess.cs.enableVehicleOccupancyAnimations = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0x1Bu);
  client->sess.cs.carryObjectIndex = client->ps.carryState.carryObjectIndex;
  client->sess.cs.carryObjectFlags = client->ps.carryState.flags;
  client->sess.cs.isOnStairs = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 8u);
  client->sess.cs.isNearEnvironmentCollision = (client->sess.cmd.buttons & 0x800000000i64) != 0;
  client->sess.cs.skydiveAnimState = client->ps.skydivePlayerState.animState;
  client->sess.cs.execution = client->ps.activeExecution;
  client->sess.cs.executionStance = client->ps.activeExecutionVictimStance;
  client->sess.cs.executionStartTime = client->ps.activeExecutionStartTime;
  client->sess.cs.lastStandReviving = client->ps.lastStandReviving;
  client->sess.cs.lastStandSelfReviving = client->ps.lastStandSelfReviving;
  client->sess.cs.movingPlatform = client->ps.movingPlatforms.m_movingPlatformEntity;
  EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(Instance, &client->ps, &r_heldWeapon);
  if ( EquippedWeaponStateConst )
    LOBYTE(EquippedWeaponStateConst) = EquippedWeaponStateConst->hybridScope;
  client->sess.cs.hybridScopeState = (char)EquippedWeaponStateConst;
  G_Door_UpdateClientInfo(client);
  v17 = 0;
  isWeaponSmoking = client->sess.cs.isWeaponSmoking;
  weaponShotCount = client->sess.cs.weaponShotCount;
  p_weaponShotCount = &client->ps.weapState[0].weaponShotCount;
  do
  {
    v21 = NULL;
    *weaponShotCount = *p_weaponShotCount;
    if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    {
      Handler = GHandler::getHandler();
      v21 = Handler->GetPlayerWeaponHeat(Handler, &client->ps, &r_heldWeapon, (PlayerHandIndex)v17);
    }
    *isWeaponSmoking = BG_Heat_GetIsSmoking(v21, &r_heldWeapon);
    ++v17;
    ++isWeaponSmoking;
    ++weaponShotCount;
    p_weaponShotCount += 20;
  }
  while ( v17 < 2 );
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4651, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  *(_QWORD *)&client->sess.cs.compressedAnimData.flags = 0i64;
  *(_QWORD *)&client->sess.cs.compressedAnimData.distanceZ = 0i64;
  client->sess.cs.compressedAnimData.endScriptAnimTableIndex = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 5u) )
  {
    endScriptAnimTableIndex = client->ps.mantleState.compressedAnimData.endScriptAnimTableIndex;
    *(_OWORD *)&client->sess.cs.compressedAnimData.flags = *(_OWORD *)&client->ps.mantleState.compressedAnimData.flags;
    client->sess.cs.compressedAnimData.endScriptAnimTableIndex = endScriptAnimTableIndex;
  }
  client->sess.cs.mantleSpeedAnimCond = client->ps.mantleState.mantleSpeedAnimCond;
  v24 = GHandler::getHandler();
  BG_ContextMount_GetWorldmodelProperties(v24, &client->ps, &client->sess.cs.mount);
  client->sess.cs.meleeChargeEnt = client->ps.meleeChargeEnt;
  client->sess.cs.meleeAnimDataPacked = BG_GetMeleeAnimConditionsPacked(&client->ps);
  v6->meleeChargeEnt = client->ps.meleeChargeEnt;
  v6->meleeAnimDataPacked = client->sess.cs.meleeAnimDataPacked;
  G_ActiveMP_UpdateFootstepState(ent, v6);
  p_attachModelIsOnBack = &client->sess.cs.attachModelIsOnBack;
  v25 = (char *)client - (char *)ent;
  *p_attachModelIsOnBack = 0;
  v26 = inOutCharacterInfo->attachTagNames[0];
  v47 = 0i64;
  isCustomizationAttachModel = v6->isCustomizationAttachModel;
  v50 = 9i64;
  v28 = 1;
  v29 = inOutCharacterInfo->attachTagNames[0];
  v30 = v25 + 21328;
  v31 = v25 + 21364;
  v49 = v31;
  attachTagNames = ent->attachTagNames;
  attachModelNames = ent->attachModelNames;
  v46 = v30;
  do
  {
    isCustomizationAttachModel[696] = 1;
    *isCustomizationAttachModel = 0;
    if ( *attachModelNames )
    {
      v34 = *attachModelNames;
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v35 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v34);
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && SV_TransientsMP_IsTransientModel(v35) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4694, ASSERT_TYPE_ASSERT, "(!SV_TransientsMP_IsTransientModel( modelName ))", "%s\n\tShould not be using transient models on the server", "!SV_TransientsMP_IsTransientModel( modelName )") )
        __debugbreak();
      *(scr_string_t *)((char *)attachTagNames + v46) = *attachModelNames;
      v36 = v29 - 576;
      do
      {
        v37 = (unsigned __int8)v36[v35 - (v29 - 576)];
        v38 = (unsigned __int8)*v36 - v37;
        if ( v38 )
          break;
        ++v36;
      }
      while ( v37 );
      if ( v38 )
      {
        v45 = 1;
        Core_strcpy(v29 - 576, 0x40ui64, v35);
      }
      if ( !*attachTagNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4705, ASSERT_TYPE_ASSERT, "(ent->attachTagNames[i] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ent->attachTagNames[i] != NULL_SCR_STRING") )
        __debugbreak();
      v39 = SL_ConvertToString(*attachTagNames);
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      *(scr_string_t *)((char *)attachTagNames + v31) = (__int64)GConfigStrings::ms_gConfigStrings->GetClientTagIndex(GConfigStrings::ms_gConfigStrings, v39);
      if ( strcmp(v29, v39) )
      {
        v45 = 1;
        Core_strcpy(v29, 0x40ui64, v39);
      }
      if ( ent == (gentity_s *)-1448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v40 = v47 >> 5;
      if ( (v28 & ent->attachWeaponTagNames[v40 + 4]) != 0 )
      {
        if ( !p_attachModelIsOnBack && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        p_attachModelIsOnBack[v40] |= v28;
      }
      v31 = v49;
      v30 = v46;
    }
    else
    {
      *(v26 - 576) = 0;
      *v26 = 0;
      *(scr_string_t *)((char *)attachTagNames + v30) = 0;
      *(scr_string_t *)((char *)attachTagNames + v31) = 0;
    }
    ++v47;
    v29 += 64;
    v28 = __ROL4__(v28, 1);
    ++attachModelNames;
    ++attachTagNames;
    ++isCustomizationAttachModel;
    v26 += 64;
    --v50;
  }
  while ( v50 );
  v41 = ent->s.animInfo.animData & 1;
  if ( inOutCharacterInfo->usingAnimState == v41 )
  {
    v42 = v45;
  }
  else
  {
    v42 = 1;
    inOutCharacterInfo->usingAnimState = v41;
    inOutCharacterInfo->animTreeDirty = 1;
  }
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(&ent->s);
    v42 |= BG_PlayersASM_ResetAnimTree(Animset, G_Main_HunkAllocXAnimServer, MOVEMENT, inOutCharacterInfo);
  }
  result = G_GameInterface_ActiveMP_UpdateClientInfo(ent);
  if ( v42 || result )
    return 1;
  return result;
}

/*
==============
G_ActiveMP_UpdateClientSighted
==============
*/
void G_ActiveMP_UpdateClientSighted(const unsigned int clientNum)
{
  const dvar_t *v1; 
  unsigned __int64 v2; 
  gclient_s *v3; 
  unsigned int maxclients; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  gclient_s *v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  gclient_s *v11; 
  gclient_s *v12; 
  team_t team; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  gclient_s *v19; 
  unsigned __int64 v20; 
  usercmd_s cmd; 

  v1 = DCONST_DVARBOOL_sv_clientWorkersEnabled;
  v2 = clientNum;
  if ( !DCONST_DVARBOOL_sv_clientWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientWorkersEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled && !Sys_IsAnyWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3095, ASSERT_TYPE_ASSERT, "( !Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_sv_clientWorkersEnabled, \"sv_clientWorkersEnabled\" ) || Sys_IsAnyWorkerContext() )", (const char *)&queryFormat, "!Dconst_GetBool( sv_clientWorkersEnabled ) || Sys_IsAnyWorkerContext()") )
    __debugbreak();
  if ( (unsigned int)v2 >= level.maxclients )
  {
    LODWORD(v15) = level.maxclients;
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3097, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v3 = &level.clients[v2];
  v20 = v2;
  v19 = v3;
  SV_Game_GetUsercmd(v2, &cmd);
  if ( G_ActiveMP_ClientCanSeeOrBeSeen(v2, cmd.serverTime) )
  {
    maxclients = level.maxclients;
    v5 = 0;
    if ( level.maxclients )
    {
      v6 = 0x80000000 >> (v2 & 0x1F);
      v18 = 4 * (v2 >> 5) + 22584;
      do
      {
        v7 = v5;
        v8 = &level.clients[v7];
        if ( (unsigned int)v2 >= maxclients )
        {
          LODWORD(v15) = maxclients;
          LODWORD(v14) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2997, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
          maxclients = level.maxclients;
        }
        if ( v5 >= maxclients )
        {
          LODWORD(v15) = maxclients;
          LODWORD(v14) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2998, ASSERT_TYPE_ASSERT, "(unsigned)( otherClientNum ) < (unsigned)( level.maxclients )", "otherClientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( (_DWORD)v2 == v5 )
          goto LABEL_47;
        if ( !G_ActiveMP_ClientCanSeeOrBeSeen(v5, cmd.serverTime) )
          goto LABEL_47;
        v9 = 0x80000000 >> (v5 & 0x1F);
        v10 = (unsigned __int64)v5 >> 5;
        if ( (v9 & cmd.sightedClientsMask.data[v10]) == 0 )
          goto LABEL_47;
        v11 = &level.clients[v7];
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3016, ASSERT_TYPE_ASSERT, "( otherClient != nullptr )", (const char *)&queryFormat, "otherClient != nullptr") )
          __debugbreak();
        v12 = &level.clients[v20];
        if ( !&level.clients[v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3019, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
          __debugbreak();
        team = v12->sess.cs.team;
        if ( team && team == v11->sess.cs.team )
        {
LABEL_47:
          if ( (((_BYTE)v8 + (_BYTE)v18) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (char *)v8 + v18) )
            __debugbreak();
          _InterlockedAnd((volatile signed __int32 *)((char *)&v8->ps.commandTime + v18), ~v6);
          v3 = v19;
        }
        else
        {
          if ( (((_BYTE)v8 + (_BYTE)v18) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (char *)v8 + v18) )
            __debugbreak();
          _InterlockedOr((volatile signed __int32 *)((char *)&v8->ps.commandTime + v18), v6);
          if ( v5 >= 0xE0 )
          {
            LODWORD(v17) = 224;
            LODWORD(v16) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
              __debugbreak();
          }
          v3 = v19;
          v19->sess.sightedPlayers.array[v10] |= v9;
        }
        maxclients = level.maxclients;
        ++v5;
      }
      while ( v5 < level.maxclients );
    }
    SV_ClientAntiCheatMP_LogClientSighted(v2, &v3->sess.sightedPlayers, cmd.serverTime);
  }
}

/*
==============
G_ActiveMP_UpdateClientStreamList
==============
*/
void G_ActiveMP_UpdateClientStreamList(const unsigned int clientNum)
{
  __int64 v1; 
  int maxclients; 

  v1 = clientNum;
  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2945, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  G_ActiveMP_UpdateSpeculativeWeaponStreaming(v1, &level.clients[v1].ps);
}

/*
==============
G_ActiveMP_UpdateEntityLoD
==============
*/
void G_ActiveMP_UpdateEntityLoD(const int clientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  gclient_s *v3; 
  int maxclients; 

  v1 = clientNum;
  if ( (unsigned int)clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3140, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  v2 = DCONST_DVARBOOL_sv_clientWorkersEnabled;
  if ( !DCONST_DVARBOOL_sv_clientWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientWorkersEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && !Sys_IsAnyWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3143, ASSERT_TYPE_ASSERT, "( !Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_sv_clientWorkersEnabled, \"sv_clientWorkersEnabled\" ) || Sys_IsAnyWorkerContext() )", (const char *)&queryFormat, "!Dconst_GetBool( sv_clientWorkersEnabled ) || Sys_IsAnyWorkerContext()") )
    __debugbreak();
  v3 = &level.clients[v1];
  if ( SV_EntitiesLoD_UseDynamicLoD() )
  {
    SV_EntitiesLoD_GetHighLoDEntitiesListForClient(v1, &v3->entityLoDs);
  }
  else
  {
    *(_QWORD *)v3->entityLoDs.array = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[2] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[4] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[6] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[8] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[10] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[12] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[14] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[16] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[18] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[20] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[22] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[24] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[26] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[28] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[30] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[32] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[34] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[36] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[38] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[40] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[42] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[44] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[46] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[48] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[50] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[52] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[54] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[56] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[58] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[60] = -1i64;
    *(_QWORD *)&v3->entityLoDs.array[62] = -1i64;
  }
}

/*
==============
G_ActiveMP_UpdateFootstepState
==============
*/
void G_ActiveMP_UpdateFootstepState(gentity_s *ent, characterInfo_t *ci)
{
  gclient_s *client; 
  usercmd_s *p_cmd; 
  usercmd_s *v6; 
  __int64 v7; 
  __int64 v8; 
  usercmd_s *p_oldcmd; 
  usercmd_s *v10; 
  float v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  int integer; 
  entity_event_t updated; 
  bool v16; 
  FootstepMoveType_t v17; 
  float footstepWeight; 
  bool canEmitFootsteps; 
  __int16 EntityIndex; 
  FootstepMoveType_t outMoveType; 
  float outStairsAscentRatio; 
  EquipmentMoveType_t outEquipmentType; 
  float outAmplitudeScale; 
  float outFrequencyScale; 
  __int64 v26; 
  GPMove v27; 

  v26 = -2i64;
  GPMove::GPMove(&v27);
  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4491, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4492, ASSERT_TYPE_ASSERT, "(client->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4494, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v27.ps = &client->ps;
  v27.localClientNum = LOCAL_CLIENT_INVALID;
  v27.ground = &client->playerGround;
  v27.groundPersistent = NULL;
  client->sess.cs.clothType = client->ps.clothType;
  p_cmd = &client->sess.cmd;
  v6 = &v27.cmd;
  v7 = 2i64;
  v8 = 2i64;
  do
  {
    *(_OWORD *)&v6->buttons = *(_OWORD *)&p_cmd->buttons;
    *(_OWORD *)&v6->commandTime = *(_OWORD *)&p_cmd->commandTime;
    *(_OWORD *)(&v6->angles.xy + 1) = *(_OWORD *)(&p_cmd->angles.xy + 1);
    *(_OWORD *)&v6->weapon.weaponOthers = *(_OWORD *)&p_cmd->weapon.weaponOthers;
    *(_OWORD *)&v6->weapon.attachmentVariationIndices[1] = *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v6->weapon.attachmentVariationIndices[17] = *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v6->offHand.weaponIdx = *(_OWORD *)&p_cmd->offHand.weaponIdx;
    v6 = (usercmd_s *)((char *)v6 + 128);
    *(_OWORD *)&v6[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd->offHand.weaponAttachments[2];
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    --v8;
  }
  while ( v8 );
  v6->buttons = p_cmd->buttons;
  p_oldcmd = &client->sess.oldcmd;
  v10 = &v27.oldcmd;
  do
  {
    *(_OWORD *)&v10->buttons = *(_OWORD *)&p_oldcmd->buttons;
    *(_OWORD *)&v10->commandTime = *(_OWORD *)&p_oldcmd->commandTime;
    *(_OWORD *)(&v10->angles.xy + 1) = *(_OWORD *)(&p_oldcmd->angles.xy + 1);
    *(_OWORD *)&v10->weapon.weaponOthers = *(_OWORD *)&p_oldcmd->weapon.weaponOthers;
    *(_OWORD *)&v10->weapon.attachmentVariationIndices[1] = *(_OWORD *)&p_oldcmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v10->weapon.attachmentVariationIndices[17] = *(_OWORD *)&p_oldcmd->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v10->offHand.weaponIdx = *(_OWORD *)&p_oldcmd->offHand.weaponIdx;
    v10 = (usercmd_s *)((char *)v10 + 128);
    *(_OWORD *)&v10[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_oldcmd->offHand.weaponAttachments[2];
    p_oldcmd = (usercmd_s *)((char *)p_oldcmd + 128);
    --v7;
  }
  while ( v7 );
  v10->buttons = p_oldcmd->buttons;
  v11 = fsqrt((float)((float)(v27.ps->velocity.v[0] * v27.ps->velocity.v[0]) + (float)(v27.ps->velocity.v[1] * v27.ps->velocity.v[1])) + (float)(v27.ps->velocity.v[2] * v27.ps->velocity.v[2]));
  v27.speed = v11;
  client->sess.cs.canEmitFootsteps = 0;
  if ( PM_ShouldMakeFootsteps(&v27) )
  {
    client->sess.cs.canEmitFootsteps = 1;
    ci->lastCanEmitFootstepTime = level.time;
  }
  else
  {
    v12 = DCONST_DVARINT_g_canEmitFootstepTimeout;
    if ( !DCONST_DVARINT_g_canEmitFootstepTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_canEmitFootstepTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( level.time - ci->lastCanEmitFootstepTime <= v12->current.integer )
      client->sess.cs.canEmitFootsteps = 1;
  }
  v13 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  integer = v13->current.integer;
  if ( v27.cmd.commandTime - v27.oldcmd.commandTime < integer )
    integer = v27.cmd.commandTime - v27.oldcmd.commandTime;
  updated = PM_Footstep_UpdateMoveType(integer, &v27, v11, &client->footstepWeight);
  v16 = PM_MoveTypesFromFootstepType(updated, &outMoveType, &outEquipmentType);
  v17 = FOOTSTEP_MOVE_TYPE_WALK;
  if ( v16 )
    v17 = outMoveType;
  client->sess.cs.footstepMoveType = v17;
  footstepWeight = client->footstepWeight;
  canEmitFootsteps = client->sess.cs.canEmitFootsteps;
  EntityIndex = G_GetEntityIndex(ent);
  G_Footstep_DebugMoveType(EntityIndex, &ent->r.currentOrigin, canEmitFootsteps, footstepWeight, updated);
  PM_Slope_GetBobCycleScale(&v27, &outStairsAscentRatio, &outFrequencyScale, &outAmplitudeScale);
  client->sess.cs.footstepActionType = PM_GetFootstepActionType(&v27, outStairsAscentRatio);
  GPMove::~GPMove(&v27);
}

/*
==============
G_ActiveMP_UpdateHudElements
==============
*/
void G_ActiveMP_UpdateHudElements(const gentity_s *ent)
{
  gclient_s *client; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2955, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr", -2i64) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF228866, "UpdateHudElems");
  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2960, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  G_HudElemMP_UpdateClient(client, ent->s.number, HUDELEM_UPDATE_ARCHIVAL_AND_CURRENT);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ActiveMP_UpdateLocationAltSelectorConfirmCallback
==============
*/
void G_ActiveMP_UpdateLocationAltSelectorConfirmCallback(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  G_ActiveMP_UpdateLocationSelectorConfirmCallback_internal(playerEnt, outputQueue, scr_const.confirm_location_alt);
}

/*
==============
G_ActiveMP_UpdateLocationSelector
==============
*/
void G_ActiveMP_UpdateLocationSelector(GClientTaskQueue *taskQueue, gclient_s *const client, const usercmd_s *ucmd)
{
  GWeaponMap *Instance; 
  float v7; 
  unsigned __int64 buttonsSinceLastFrame; 
  float v9; 
  float v10; 
  float v11; 
  double v12; 
  double v13; 
  signed __int64 v14; 
  const char *debugTaskName; 
  void (__fastcall *v16)(gentity_s *, GClientTaskQueue *); 
  int taskData[4]; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2060, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( BG_IsLocationSelectorActive(Instance, &client->ps) )
  {
    v7 = (float)ucmd->mlgSelectedLoc[1] * 0.0039215689;
    client->mlgSpectatorClientInfo.locationSelectorCursor.v[0] = (float)((float)ucmd->mlgSelectedLoc[0] * 0.0039215689) + 0.50196081;
    client->mlgSpectatorClientInfo.locationSelectorCursor.v[1] = v7 + 0.50196081;
    buttonsSinceLastFrame = client->buttonsSinceLastFrame;
    client->mlgSpectatorClientInfo.locationSelectorAngle = (float)((float)ucmd->mlgSelectedAngle * 1.4117647) + 180.70589;
    if ( (buttonsSinceLastFrame & 0x8000000000004000ui64) != 0 )
    {
      v9 = 0.0;
      if ( (client->ps.locationSelectionInfo & 0xE0) == 0x80 )
      {
        v10 = (float)((float)((float)(ucmd->selectedAngle % 10) + (float)((float)ucmd->selectedLoc[0] * 0.0039215689)) * 0.1) + 0.050196078;
        v11 = (float)((float)((float)((float)ucmd->selectedLoc[1] * 0.0039215689) + (float)(ucmd->selectedAngle / 10)) * 0.1) + 0.050196078;
      }
      else
      {
        v9 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)ucmd->selectedAngle).m128_f32[0] * 1.4117647) + 180.70589;
        v10 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)ucmd->selectedLoc[0]).m128_f32[0] * 0.0039215689) + 0.50196081;
        v11 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)ucmd->selectedLoc[1]).m128_f32[0] * 0.0039215689) + 0.50196081;
      }
      *(float *)taskData = (float)((float)((float)(v10 * level.compassMapWorldSize.v[0]) * level.compassNorth.v[1]) + level.compassMapUpperLeft.v[0]) - (float)((float)(v11 * level.compassMapWorldSize.v[1]) * level.compassNorth.v[0]);
      *(float *)&taskData[1] = (float)(level.compassMapUpperLeft.v[1] - (float)((float)(v10 * level.compassMapWorldSize.v[0]) * level.compassNorth.v[0])) - (float)((float)(v11 * level.compassMapWorldSize.v[1]) * level.compassNorth.v[1]);
      v12 = vectoyaw(&level.compassNorth);
      v13 = AngleNormalize360(*(float *)&v12 + v9);
      v14 = client->buttonsSinceLastFrame;
      debugTaskName = "LocationAltSelectionConfirm";
      if ( v14 >= 0 )
        debugTaskName = "LocationSelectionConfirm";
      v16 = G_ActiveMP_UpdateLocationAltSelectorConfirmCallback;
      if ( v14 >= 0 )
        v16 = G_ActiveMP_UpdateLocationSelectorConfirmCallback;
      taskData[2] = SLODWORD(v13);
      GClientTaskQueue::AddTaskInternal(taskQueue, v16, taskData, 0xCu, 4u, debugTaskName);
    }
    else if ( (buttonsSinceLastFrame & 0x8000) != 0 )
    {
      GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_UpdateLocationSelectorCancelCallback, NULL, 0, 0, "LocationSelectionCancel");
    }
    client->buttons &= 0x80000000004C0ui64;
    client->latched_buttons &= 0x80000000004C0ui64;
    client->buttonsSinceLastFrame &= 0x80000000004C0ui64;
  }
}

/*
==============
G_ActiveMP_UpdateLocationSelectorCancelCallback
==============
*/
void G_ActiveMP_UpdateLocationSelectorCancelCallback(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  GScr_Notify(playerEnt, scr_const.cancel_location, 0);
}

/*
==============
G_ActiveMP_UpdateLocationSelectorConfirmCallback
==============
*/
void G_ActiveMP_UpdateLocationSelectorConfirmCallback(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  G_ActiveMP_UpdateLocationSelectorConfirmCallback_internal(playerEnt, outputQueue, scr_const.confirm_location);
}

/*
==============
G_ActiveMP_UpdateLocationSelectorConfirmCallback_internal
==============
*/
void G_ActiveMP_UpdateLocationSelectorConfirmCallback_internal(gentity_s *playerEnt, GClientTaskQueue *outputQueue, scr_string_t scrNotify)
{
  float *ParameterInternal; 
  float v7; 
  scrContext_t *v8; 
  float value[4]; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2023, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2024, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (float *)GClientTaskQueue::GetParameterInternal(outputQueue, 0xCu, 4u);
  v7 = *ParameterInternal;
  value[1] = ParameterInternal[1];
  value[2] = 0.0;
  value[0] = v7;
  v8 = ScriptContext_Server();
  Scr_AddFloat(v8, ParameterInternal[2]);
  Scr_AddVector(v8, value);
  GScr_Notify(playerEnt, scrNotify, 2u);
}

/*
==============
G_ActiveMP_UpdatePlayerEntityAndCharacter
==============
*/
void G_ActiveMP_UpdatePlayerEntityAndCharacter(const int gameTime, characterInfo_t *ci, gentity_s *playerEnt)
{
  gclient_s *client; 
  vec3_t *p_currentOrigin; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  int linkEnt; 
  GHandler *Handler; 
  float v14; 
  float v15; 
  vec3_t outLinkAngles; 
  vec3_t outLinkPos; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2165, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !playerEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2166, ASSERT_TYPE_ASSERT, "( playerEnt->client )", (const char *)&queryFormat, "playerEnt->client") )
    __debugbreak();
  client = playerEnt->client;
  SV_Profile_BeginEvent(SVPROF_CLIENT_ENTITY);
  G_Active_PlayerStateToEntityStateExtrapolate(&client->ps, &playerEnt->s, gameTime, 1);
  SV_Profile_EndEvent(SVPROF_CLIENT_ENTITY);
  playerEnt->s.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(ci->fTorsoPitch);
  playerEnt->s.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(ci->fWaistPitch);
  G_ActiveMP_PlayerStateToCharacterInfo(&client->ps, &playerEnt->s, ci);
  p_currentOrigin = &playerEnt->r.currentOrigin;
  if ( playerEnt == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)playerEnt + 123, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( playerEnt->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
  {
    v8 = playerEnt->s.lerp.pos.trBase.v[1];
    v9 = playerEnt->s.lerp.pos.trBase.v[0];
    v10 = playerEnt->s.lerp.pos.trBase.v[2];
    *(_QWORD *)outLinkAngles.v = &playerEnt->r.currentOrigin;
    LODWORD(playerEnt->r.currentOrigin.v[2]) = LODWORD(v8) ^ s_trbase_aab_Z ^ LODWORD(v10);
    LODWORD(playerEnt->r.currentOrigin.v[1]) = LODWORD(v9) ^ LODWORD(v8) ^ s_trbase_aab_Y;
    LODWORD(p_currentOrigin->v[0]) = LODWORD(v9) ^ ~s_trbase_aab_X;
    v11 = p_currentOrigin->v[0];
    memset(&outLinkAngles, 0, 8ui64);
    outLinkAngles.v[0] = v11;
    if ( (LODWORD(v11) & 0x7F800000) == 2139095040 || (outLinkAngles.v[0] = playerEnt->r.currentOrigin.v[1], (LODWORD(outLinkAngles.v[0]) & 0x7F800000) == 2139095040) || (outLinkAngles.v[0] = playerEnt->r.currentOrigin.v[2], (LODWORD(outLinkAngles.v[0]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    p_currentOrigin->v[0] = playerEnt->s.lerp.pos.trBase.v[0];
    playerEnt->r.currentOrigin.v[1] = playerEnt->s.lerp.pos.trBase.v[1];
    playerEnt->r.currentOrigin.v[2] = playerEnt->s.lerp.pos.trBase.v[2];
  }
  *(_OWORD *)playerEnt->r.box.midPoint.v = *(_OWORD *)client->playerBox.midPoint.v;
  *(double *)&playerEnt->r.box.halfSize.y = *(double *)&client->playerBox.halfSize.y;
  SV_LinkEntity(playerEnt);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0x1Bu) )
  {
    if ( client->ps.linkEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2189, ASSERT_TYPE_ASSERT, "( client->ps.linkEnt ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "client->ps.linkEnt", "ENTITYNUM_NONE", 2047, 2047) )
      __debugbreak();
    linkEnt = client->ps.linkEnt;
    Handler = GHandler::getHandler();
    if ( !BG_VehicleOccupancy_GetLinkTransform(Handler, linkEnt, &outLinkPos, &outLinkAngles) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2193, ASSERT_TYPE_ASSERT, "(BG_VehicleOccupancy_GetLinkTransform( GHandler::getHandler(), client->ps.linkEnt, linkPos, linkAngles ))", (const char *)&queryFormat, "BG_VehicleOccupancy_GetLinkTransform( GHandler::getHandler(), client->ps.linkEnt, linkPos, linkAngles )") )
      __debugbreak();
    v14 = outLinkAngles.v[1];
    playerEnt->r.currentAngles.v[0] = 0.0;
    playerEnt->r.currentAngles.v[2] = 0.0;
    playerEnt->r.currentAngles.v[1] = v14;
  }
  else if ( !BG_IsTurretActive(&client->ps) )
  {
    playerEnt->r.currentAngles.v[0] = 0.0;
    playerEnt->r.currentAngles.v[2] = 0.0;
    if ( (client->ps.linkFlags.m_flags[0] & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 1u) )
    {
      v15 = client->ps.linkWeaponAngles.v[1];
    }
    else
    {
      if ( client->ps.vehicleState.entity != 2047 )
        goto LABEL_32;
      v15 = client->ps.viewangles.v[1];
    }
    playerEnt->r.currentAngles.v[1] = v15;
  }
LABEL_32:
  p_currentOrigin->v[0] = client->ps.origin.v[0];
  playerEnt->r.currentOrigin.v[1] = client->ps.origin.v[1];
  playerEnt->r.currentOrigin.v[2] = client->ps.origin.v[2];
}

/*
==============
G_ActiveMP_UpdatePlayerView
==============
*/
void G_ActiveMP_UpdatePlayerView(gclient_s *const client, const usercmd_s *const cmd, const int msec, PlayerViewValues *outViewValues)
{
  const dvar_t *v8; 
  int integer; 
  int v10; 
  const dvar_t *v11; 
  int time; 
  const dvar_t *v13; 
  int inputTime; 
  PlayerViewState *p_playerViewState; 
  PlayerViewValues *outViewValuesa; 
  __int64 v17; 
  char v18[8]; 
  ViewMovementState viewMoveState; 
  WeaponMovementState weapMoveState; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1607, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "G_ActiveMP_UpdatePlayerView");
  v8 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  v10 = cmd->inputTime - client->playerViewState.inputTime;
  if ( integer < 0 )
  {
    LODWORD(v17) = integer;
    LODWORD(outViewValuesa) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", outViewValuesa, v17) )
      __debugbreak();
  }
  if ( integer < v10 )
    v10 = integer;
  if ( v10 < 0 )
    v10 = 0;
  G_ActiveMP_UpdateViewMovement(&client->playerViewState.viewMoveState, client, cmd, msec, outViewValues);
  G_ActiveMP_UpdateWeaponMovement(&client->playerViewState.weapMoveState, client, cmd, msec, v10, outViewValues);
  if ( client->extrapolatedData.time )
  {
    BSplineRelaxedCBezier::BSplineRelaxedCBezier(&viewMoveState.idleMotionCache.idleMotion1Spline);
    BSplineRelaxedCBezier::BSplineRelaxedCBezier(&viewMoveState.idleMotionCache.idleMotion2Spline);
    BSplineRelaxedCBezier::BSplineRelaxedCBezier(&weapMoveState.idleMotionCache.idleMotion1Spline);
    BSplineRelaxedCBezier::BSplineRelaxedCBezier(&weapMoveState.idleMotionCache.idleMotion2Spline);
    memcpy_0(v18, &client->playerViewState, 0xDE8ui64);
    v11 = DCONST_DVARINT_com_userCmdMaxTimeStep;
    if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    time = v11->current.integer;
    if ( client->extrapolatedData.time < time )
      time = client->extrapolatedData.time;
    v13 = DCONST_DVARINT_com_userCmdMaxTimeStep;
    if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    inputTime = v13->current.integer;
    if ( client->extrapolatedData.inputTime < inputTime )
      inputTime = client->extrapolatedData.inputTime;
    G_ActiveMP_UpdateViewMovement(&viewMoveState, client, cmd, time, outViewValues);
    G_ActiveMP_UpdateWeaponMovement(&weapMoveState, client, cmd, time, inputTime, outViewValues);
    p_playerViewState = (PlayerViewState *)v18;
  }
  else
  {
    p_playerViewState = &client->playerViewState;
  }
  G_ActiveMP_PrintViewState(client, cmd, p_playerViewState);
  client->playerViewState.commandTime = cmd->commandTime;
  client->playerViewState.inputTime = cmd->inputTime;
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ActiveMP_UpdateSpeculativeWeaponStreaming
==============
*/
void G_ActiveMP_UpdateSpeculativeWeaponStreaming(const unsigned int clientNum, const playerState_s *ps)
{
  __int128 v2; 
  unsigned int v4; 
  unsigned int cursorHintEntIndex; 
  gentity_s *v6; 
  GWeaponMap *Instance; 
  Weapon *WeaponForEntity; 
  unsigned __int16 weaponIdx; 
  const dvar_t *v10; 
  int v11; 
  unsigned int v12; 
  const dvar_t *v13; 
  __int64 v14; 
  float v15; 
  EntHandle *droppedWeaponCue; 
  __int64 v17; 
  unsigned __int16 number; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned __int16 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  float v26; 
  float v27; 
  float v28; 
  unsigned int v29; 
  unsigned int *v30; 
  Weapon *v31; 
  __int64 v32; 
  gentity_s *v33; 
  GWeaponMap *v34; 
  const Weapon *Weapon; 
  __m256i *v36; 
  int v37; 
  const dvar_t *v38; 
  __int64 v39; 
  const char *v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  unsigned int _First[32]; 
  Weapon Buf1[24]; 
  __int128 v48; 

  v4 = clientNum;
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2852, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2853, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v4 >= level.maxclients )
  {
    LODWORD(v43) = level.maxclients;
    LODWORD(v41) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2804, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v41, v43) )
      __debugbreak();
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2805, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->cursorHint != HINT_WEAPON )
    goto LABEL_21;
  if ( ps->cursorHintClass )
    goto LABEL_21;
  cursorHintEntIndex = ps->cursorHintEntIndex;
  if ( cursorHintEntIndex == 2047 )
    goto LABEL_21;
  if ( cursorHintEntIndex >= 0x800 )
  {
    LODWORD(v43) = 2048;
    LODWORD(v41) = ps->cursorHintEntIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2809, ASSERT_TYPE_ASSERT, "(unsigned)( ps->cursorHintEntIndex ) < (unsigned)( ( 2048 ) )", "ps->cursorHintEntIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, v43) )
      __debugbreak();
  }
  if ( !G_IsEntityInUse(ps->cursorHintEntIndex) )
  {
LABEL_21:
    WeaponForEntity = &NULL_WEAPON;
  }
  else
  {
    v6 = &g_entities[ps->cursorHintEntIndex];
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = (Weapon *)BG_GetWeaponForEntity(Instance, &v6->s);
  }
  weaponIdx = WeaponForEntity->weaponIdx;
  if ( WeaponForEntity->weaponIdx )
    Buf1[0] = *WeaponForEntity;
  v10 = DVARINT_g_speculativeWeaponLoadCount;
  v11 = weaponIdx != 0;
  if ( !DVARINT_g_speculativeWeaponLoadCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_speculativeWeaponLoadCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v12 = v11;
  if ( v11 < v10->current.integer )
  {
    v13 = DVARFLT_g_speculativeWeaponLoadDistance;
    v14 = 0i64;
    v48 = v2;
    if ( !DVARFLT_g_speculativeWeaponLoadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_speculativeWeaponLoadDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v15 = v13->current.value * v13->current.value;
    droppedWeaponCue = level.droppedWeaponCue;
    v17 = 32i64;
    do
    {
      number = droppedWeaponCue->number;
      if ( droppedWeaponCue->number )
      {
        v19 = number;
        v20 = number - 1;
        if ( v20 >= 0x800 )
        {
          LODWORD(v43) = 2048;
          LODWORD(v41) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, v43) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v21 = v19 - 1;
        if ( g_entities[v21].r.isInUse != g_entityIsInUse[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v21] )
        {
          LODWORD(v43) = droppedWeaponCue->number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v43) )
            __debugbreak();
        }
        v22 = droppedWeaponCue->number;
        if ( droppedWeaponCue->number )
        {
          if ( (unsigned int)v22 - 1 >= 0x7FF )
          {
            LODWORD(v43) = 2047;
            LODWORD(v41) = v22 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v41, v43) )
              __debugbreak();
          }
          v23 = droppedWeaponCue->number;
          if ( (unsigned int)(v23 - 1) >= 0x800 )
          {
            LODWORD(v43) = 2048;
            LODWORD(v41) = v23 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, v43) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v24 = v23 - 1;
          if ( g_entities[v24].r.isInUse != g_entityIsInUse[v24] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v24] )
          {
            LODWORD(v43) = droppedWeaponCue->number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v43) )
              __debugbreak();
          }
          v25 = droppedWeaponCue->number;
          v26 = ps->origin.v[0] - g_entities[v25 - 1].r.currentOrigin.v[0];
          v27 = ps->origin.v[1] - g_entities[v25 - 1].r.currentOrigin.v[1];
          v28 = ps->origin.v[2] - g_entities[v25 - 1].r.currentOrigin.v[2];
          if ( (float)((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28)) < v15 )
          {
            _First[v14] = g_entities[v25 - 1].s.number;
            v14 = (unsigned int)(v14 + 1);
          }
        }
      }
      ++droppedWeaponCue;
      --v17;
    }
    while ( v17 );
    v12 = v11;
    v4 = clientNum;
    if ( (_DWORD)v14 )
    {
      std::_Sort_unchecked<unsigned int *,CompareDroppedWeaponDistance>(_First, &_First[v14], (unsigned int)v14, (CompareDroppedWeaponDistance)ps);
      v29 = 0;
      v30 = _First;
      v31 = &Buf1[v11];
      while ( 1 )
      {
        v32 = *v30;
        if ( (unsigned int)v32 >= 0x800 )
        {
          LODWORD(v43) = 2048;
          LODWORD(v41) = *v30;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2898, ASSERT_TYPE_ASSERT, "(unsigned)( droppedEntIndex ) < (unsigned)( ( 2048 ) )", "droppedEntIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, v43) )
            __debugbreak();
          LODWORD(v44) = 2048;
          LODWORD(v42) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v42, v44) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[(int)v32].r.isInUse != g_entityIsInUse[(int)v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[(int)v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2899, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( droppedEntIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( droppedEntIndex )") )
          __debugbreak();
        v33 = &g_entities[v32];
        v34 = GWeaponMap::GetInstance();
        if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        Weapon = BgWeaponMap::GetWeapon(v34, v33->s.weaponHandle);
        v36 = (__m256i *)Weapon;
        if ( Weapon->weaponIdx && BG_WeaponHasStreamedModels(Weapon) )
        {
          v37 = 0;
          if ( v12 )
          {
            while ( memcmp_0(&Buf1[v37], v36, 0x3Cui64) )
            {
              if ( ++v37 >= v12 )
                goto LABEL_91;
            }
          }
          else
          {
LABEL_91:
            v38 = DVARINT_g_speculativeWeaponLoadCount;
            ++v12;
            *(__m256i *)&v31->weaponIdx = *v36;
            *(_OWORD *)&v31->attachmentVariationIndices[5] = *(_OWORD *)v36[1].m256i_i8;
            *(double *)&v31->attachmentVariationIndices[21] = *(double *)&v36[1].m256i_i64[2];
            *(_DWORD *)&v31->weaponCamo = v36[1].m256i_i32[6];
            ++v31;
            if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_speculativeWeaponLoadCount") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v38);
            if ( v12 == v38->current.integer )
            {
LABEL_96:
              v4 = clientNum;
              break;
            }
          }
        }
        ++v29;
        ++v30;
        if ( v29 >= (unsigned int)v14 )
          goto LABEL_96;
      }
    }
  }
  v39 = G_WeaponStreaming_SetPickupViewWeapons(v4, Buf1, v12);
  v40 = j_va("G_ActiveMP_UpdateSpeculativeWeaponStreaming expected %u stream requests, but could only complete %u.\n", v12, v39);
  G_ActiveMP_SpectatorClientEndFrame_ValidateStreaming(v4, v12, v39, v40);
}

/*
==============
G_ActiveMP_UpdateThirdPersonMode
==============
*/
void G_ActiveMP_UpdateThirdPersonMode(gclient_s *client, const vec3_t *viewAngles)
{
  const dvar_t *v4; 
  const char *v5; 
  float v6; 
  float v7; 
  float value; 
  GWeaponMap *Instance; 
  const dvar_t *v10; 
  float v11; 
  float fWeaponPosFrac; 
  int clientNum; 
  float v14; 
  float v15; 
  __int128 v16; 
  int v19; 
  float v20; 
  int v21; 
  float v22; 
  __int128 v23; 
  float v24; 
  vec3_t end; 
  vec3_t start; 
  vec3_t outOrigin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  vec3_t vec; 
  Bounds bounds; 
  trace_t results; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1320, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1321, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
    __debugbreak();
  AnglesToAxis(viewAngles, &axis);
  G_Client_GetViewOrigin(&client->ps, &outOrigin);
  end = outOrigin;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  bounds.halfSize.v[1] = FLOAT_10_0;
  bounds.halfSize.v[2] = FLOAT_10_0;
  if ( BG_IsTurretActive(&client->ps) )
  {
    v4 = DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds;
    if ( DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds )
      goto LABEL_14;
    v5 = "camera_thirdPersonOffsetTurretAds";
  }
  else
  {
    v4 = DCONST_DVARVEC3_camera_thirdPersonOffsetAds;
    if ( DCONST_DVARVEC3_camera_thirdPersonOffsetAds )
      goto LABEL_14;
    v5 = "camera_thirdPersonOffsetAds";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
    __debugbreak();
LABEL_14:
  Dvar_CheckFrontendServerThread(v4);
  v6 = v4->current.vector.v[2];
  v7 = v4->current.vector.v[1];
  value = v4->current.value;
  Instance = GWeaponMap::GetInstance();
  if ( BG_UsingSniperScope(Instance, &client->ps) )
  {
    v7 = 0.0;
    v6 = 0.0;
  }
  else if ( 1.0 == client->ps.weapCommon.fWeaponPosFrac && (client->oldbuttons & 2) == 0 && (client->buttons & 2) != 0 )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 223, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    client->ps.otherFlags.m_flags[1] ^= 0x40u;
  }
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2214, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, GameModeFlagValues::ms_mpValue, 0x26u) )
    LODWORD(v7) ^= _xmm;
  v10 = DCONST_DVARVEC3_camera_thirdPersonOffset;
  if ( !DCONST_DVARVEC3_camera_thirdPersonOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPersonOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.value;
  fWeaponPosFrac = client->ps.weapCommon.fWeaponPosFrac;
  clientNum = client->ps.clientNum;
  v14 = (float)((float)(v7 - v10->current.vector.v[1]) * fWeaponPosFrac) + v10->current.vector.v[1];
  v15 = (float)((float)(v6 - v10->current.vector.v[2]) * fWeaponPosFrac) + v10->current.vector.v[2];
  end.v[0] = (float)((float)(v14 * axis.m[1].v[0]) + end.v[0]) + (float)(v15 * axis.m[2].v[0]);
  end.v[2] = (float)((float)(v14 * axis.m[1].v[2]) + end.v[2]) + (float)(v15 * axis.m[2].v[2]);
  end.v[1] = (float)((float)(v14 * axis.m[1].v[1]) + end.v[1]) + (float)(v15 * axis.m[2].v[1]);
  G_Main_TraceCapsule(&results, &outOrigin, &end, &bounds, clientNum, 33636369);
  v16 = LODWORD(end.v[0]);
  *(float *)&v16 = (float)((float)(end.v[0] - outOrigin.v[0]) * results.fraction) + outOrigin.v[0];
  _XMM7 = v16;
  __asm { vunpcklps xmm0, xmm7, xmm6 }
  *(double *)start.v = *(double *)&_XMM0;
  *(float *)&v16 = (float)((float)(value - v11) * fWeaponPosFrac) + v11;
  end.v[0] = (float)(*(float *)&v16 * axis.m[0].v[0]) + *(float *)&_XMM7;
  end.v[2] = (float)((float)(end.v[2] - outOrigin.v[2]) * results.fraction) + outOrigin.v[2];
  end.v[1] = (float)(*(float *)&v16 * axis.m[0].v[1]) + (float)((float)((float)(end.v[1] - outOrigin.v[1]) * results.fraction) + outOrigin.v[1]);
  start.v[2] = end.v[2];
  v19 = client->ps.clientNum;
  end.v[2] = (float)(*(float *)&v16 * axis.m[0].v[2]) + end.v[2];
  G_Main_TraceCapsule(&results, &start, &end, &bounds, v19, 33636369);
  end.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  v20 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  v21 = client->ps.clientNum;
  v22 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  start.v[0] = (float)(8192.0 * axis.m[0].v[0]) + end.v[0];
  start.v[1] = (float)(8192.0 * axis.m[0].v[1]) + v20;
  start.v[2] = (float)(8192.0 * axis.m[0].v[2]) + v22;
  end.v[1] = v20;
  end.v[2] = v22;
  G_Main_LocationalTrace(&results, &end, &start, v21, 41969969, NULL);
  *(float *)&_XMM7 = (float)((float)(start.v[0] - end.v[0]) * results.fraction) + end.v[0];
  v23 = LODWORD(start.v[1]);
  v24 = (float)((float)((float)(start.v[2] - end.v[2]) * results.fraction) + end.v[2]) - outOrigin.v[2];
  start.v[1] = (float)((float)(start.v[1] - end.v[1]) * results.fraction) + end.v[1];
  start.v[2] = (float)((float)(start.v[2] - end.v[2]) * results.fraction) + end.v[2];
  *(float *)&v23 = fsqrt((float)((float)((float)(start.v[1] - outOrigin.v[1]) * (float)(start.v[1] - outOrigin.v[1])) + (float)((float)(*(float *)&_XMM7 - outOrigin.v[0]) * (float)(*(float *)&_XMM7 - outOrigin.v[0]))) + (float)(v24 * v24));
  _XMM3 = v23;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  vec.v[0] = (float)(1.0 / *(float *)&_XMM0) * (float)(*(float *)&_XMM7 - outOrigin.v[0]);
  vec.v[2] = (float)(1.0 / *(float *)&_XMM0) * v24;
  start.v[0] = *(float *)&_XMM7;
  vec.v[1] = (float)(1.0 / *(float *)&_XMM0) * (float)(start.v[1] - outOrigin.v[1]);
  vectoangles(&vec, &angles);
  AnglesSubtract(&angles, viewAngles, &angles);
  *(double *)&_XMM0 = I_fclamp(angles.v[0], -30.0, 30.0);
  angles.v[0] = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_fclamp(angles.v[1], -30.0, 30.0);
  _XMM9 = 0i64;
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  client->fGunPitch = (float)((float)((float)(angles.v[0] + viewAngles->v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm9, xmm1, 1 }
  client->fGunYaw = (float)((float)((float)(*(float *)&_XMM0 + viewAngles->v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
}

/*
==============
G_ActiveMP_UpdateVehicleControlledEnt
==============
*/
void G_ActiveMP_UpdateVehicleControlledEnt(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  const unsigned int *ParameterInternal; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1838, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1839, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (const unsigned int *)GClientTaskQueue::GetParameterInternal(outputQueue, 4u, 4u);
  G_Vehicle_UpdateVehicleControlledEntity(playerEnt, *ParameterInternal);
}

/*
==============
G_ActiveMP_UpdateViewAndWeaponTransforms
==============
*/
void G_ActiveMP_UpdateViewAndWeaponTransforms(gclient_s *client, const PlayerViewValues *viewValues)
{
  float v4; 
  __int16 groundRefEnt; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 
  float v9; 
  vec3_t viewAngles; 
  vec3_t angles; 
  vec3_t localGunAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1683, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  v4 = viewValues->viewMoveAngles.v[1] + client->ps.viewangles.v[1];
  angles.v[0] = viewValues->viewMoveAngles.v[0] + client->ps.viewangles.v[0];
  angles.v[2] = viewValues->viewMoveAngles.v[2] + client->ps.viewangles.v[2];
  angles.v[1] = v4;
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1687, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF )") )
    __debugbreak();
  groundRefEnt = client->ps.groundRefEnt;
  if ( groundRefEnt != 2047 )
  {
    AnglesToAxis(&g_entities[groundRefEnt].r.currentAngles, &axis);
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    AxisToAngles(&out, &angles);
  }
  Instance = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &client->ps);
  v8 = BG_UsingAlternate(&client->ps);
  BG_ApplyWeaponAnglesToShootingDirection(Instance, &client->ps, CurrentWeaponForPlayer, v8, &viewValues->weapMoveAngles, (const vec3_t (*)[30])viewValues->weapMoveAnglesCategorized, &angles, &viewAngles, &localGunAngles);
  if ( ((LODWORD(viewAngles.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(viewAngles.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(viewAngles.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1707, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gunAngles )[0] ) && !IS_NAN( ( gunAngles )[1] ) && !IS_NAN( ( gunAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( gunAngles )[0] ) && !IS_NAN( ( gunAngles )[1] ) && !IS_NAN( ( gunAngles )[2] )") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(Instance, &client->ps) )
  {
    G_ActiveMP_UpdateThirdPersonMode(client, &viewAngles);
  }
  else
  {
    v9 = viewAngles.v[1];
    client->fGunPitch = viewAngles.v[0];
    client->fGunYaw = v9;
    G_ActiveMP_PrintGunAngles(client, &client->sess.cmd, viewValues, &angles, &localGunAngles, &viewAngles);
  }
}

/*
==============
G_ActiveMP_UpdateViewMovement
==============
*/
void G_ActiveMP_UpdateViewMovement(ViewMovementState *const viewMoveState, gclient_s *const client, const usercmd_s *const cmd, const int msec, PlayerViewValues *outViewValues)
{
  GHandler *Handler; 
  int serverTime; 
  double Speed; 
  int damageTime; 
  float v_dmg_roll; 
  ViewMovementParams params; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1525, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  params.ps = &client->ps;
  params.weaponMap = GWeaponMap::GetInstance();
  Handler = GHandler::getHandler();
  serverTime = cmd->serverTime;
  params.updateTime = (float)msec * 0.001;
  params.handler = Handler;
  params.serverTime = serverTime;
  Speed = BG_GetSpeed(&client->ps, serverTime, Handler);
  damageTime = client->damageTime;
  params.xySpeed = *(float *)&Speed;
  if ( damageTime )
    params.damageTime = level.time - damageTime;
  else
    params.damageTime = 0;
  v_dmg_roll = client->v_dmg_roll;
  params.damagePitch = client->v_dmg_pitch;
  params.damageRoll = v_dmg_roll;
  BG_CalculateViewMovement_Angles(&params, viewMoveState, &outViewValues->viewMoveAngles);
}

/*
==============
G_ActiveMP_UpdateWeaponMovement
==============
*/
void G_ActiveMP_UpdateWeaponMovement(WeaponMovementState *const weapMoveState, gclient_s *const client, const usercmd_s *const cmd, const int msec, const int inputMsec, PlayerViewValues *outViewValues)
{
  const Weapon *ViewmodelWeapon; 
  int serverTime; 
  double Speed; 
  int damageTime; 
  float v_dmg_roll; 
  int v15; 
  WeaponMovementParams params; 
  vec3_t outDuckedAnglesPivotOffset; 
  vec3_t outStandAnglesPivotOffset; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1546, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  params.ps = &client->ps;
  params.weaponMap = GWeaponMap::GetInstance();
  params.handler = GHandler::getHandler();
  ViewmodelWeapon = BG_GetViewmodelWeapon(params.weaponMap, &client->ps);
  serverTime = cmd->serverTime;
  *(__m256i *)&params.weapon.weaponIdx = *(__m256i *)&ViewmodelWeapon->weaponIdx;
  *(_OWORD *)&params.weapon.attachmentVariationIndices[5] = *(_OWORD *)&ViewmodelWeapon->attachmentVariationIndices[5];
  *(_QWORD *)&params.weapon.attachmentVariationIndices[21] = *(_QWORD *)&ViewmodelWeapon->attachmentVariationIndices[21];
  LODWORD(ViewmodelWeapon) = *(_DWORD *)&ViewmodelWeapon->weaponCamo;
  params.updateTime = (float)msec * 0.001;
  params.inputDeltaTime = (float)inputMsec * 0.001;
  *(_DWORD *)&params.weapon.weaponCamo = (_DWORD)ViewmodelWeapon;
  params.serverTime = serverTime;
  Speed = BG_GetSpeed(&client->ps, serverTime, params.handler);
  damageTime = client->damageTime;
  params.xySpeed = *(float *)&Speed;
  if ( damageTime )
    params.damageTime = level.time - damageTime;
  else
    params.damageTime = 0;
  v_dmg_roll = client->v_dmg_roll;
  params.damagePitch = client->v_dmg_pitch;
  params.damageRoll = v_dmg_roll;
  v15 = params.ps->shellshockTime + params.ps->shellshockDuration - level.time;
  *(_QWORD *)&params.shellShockFadeTime = 3000i64;
  params.shellShockDeltaTime = v15;
  BG_CalculateWeaponMovement(&params, weapMoveState, &outViewValues->weapTiltOffset, &outViewValues->weapMoveTiltOffset, &outStandAnglesPivotOffset, &outDuckedAnglesPivotOffset, &outViewValues->weapMoveAngles, (vec3_t (*)[30])outViewValues->weapMoveAnglesCategorized, &outViewValues->weapMoveOrigin);
}

/*
==============
G_ActiveMP_ValidateClientScriptable
==============
*/
void G_ActiveMP_ValidateClientScriptable(const gentity_s *clientEnt)
{
  gclient_s *client; 
  unsigned int runtimeInstanceCount; 
  unsigned int ScriptableIndexForEntity; 
  const ScriptableDef *def; 
  const SuitDef *SuitDef; 
  const ScriptableDef *scriptableDef; 
  bool v8; 
  const SuitDef *v9; 
  ScriptableDef *v10; 
  __int64 v11; 

  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4835, ASSERT_TYPE_ASSERT, "( clientEnt )", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  if ( !clientEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4836, ASSERT_TYPE_ASSERT, "( clientEnt->client )", (const char *)&queryFormat, "clientEnt->client") )
    __debugbreak();
  client = clientEnt->client;
  if ( client->sess.cs.suitIndex != client->ps.suitIndex )
  {
    LODWORD(v11) = client->sess.cs.suitIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4837, ASSERT_TYPE_ASSERT, "( clientEnt->client->sess.cs.suitIndex ) == ( clientEnt->client->ps.suitIndex )", "clientEnt->client->sess.cs.suitIndex == clientEnt->client->ps.suitIndex\n\t%i, %i", v11, client->ps.suitIndex) )
      __debugbreak();
  }
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( ScriptableSv_GetScriptableIndexForEntity(clientEnt) < runtimeInstanceCount )
  {
    ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(clientEnt);
    def = ScriptableSv_GetInstanceCommonContext(ScriptableIndexForEntity)->def;
    if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4845, ASSERT_TYPE_ASSERT, "( def != nullptr )", "Client scriptables should be assigned a def") )
      __debugbreak();
    SuitDef = BG_GetSuitDef(clientEnt->client->ps.suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4848, ASSERT_TYPE_ASSERT, "( suitDef )", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    scriptableDef = SuitDef->scriptableDef;
    if ( scriptableDef )
    {
      if ( def == scriptableDef )
        return;
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4852, ASSERT_TYPE_ASSERT, "( def == suitDef->scriptableDef )", "Active scriptable def '%s' does not match suit scriptable def '%s'", def->name, scriptableDef->name);
    }
    else
    {
      LODWORD(v11) = clientEnt->s.number;
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4856, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Active reserved scriptable for client %i but no def found in suit.", v11);
    }
    goto LABEL_26;
  }
  v9 = BG_GetSuitDef(clientEnt->client->ps.suitIndex);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4862, ASSERT_TYPE_ASSERT, "( suitDef )", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v10 = v9->scriptableDef;
  if ( v10 )
  {
    LODWORD(v11) = clientEnt->s.number;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4863, ASSERT_TYPE_ASSERT, "( suitDef->scriptableDef == nullptr )", "Active suit scriptable for client %i (%s) but no scriptable instance fond.", v11, v10->name);
LABEL_26:
    if ( v8 )
      __debugbreak();
  }
}

/*
==============
G_ActiveMP_ValidateCommand
==============
*/
void G_ActiveMP_ValidateCommand(GClientTaskQueue *taskQueue, const gentity_s *ent, usercmd_s *cmd)
{
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  const Weapon *v8; 
  const Weapon *v9; 
  const dvar_t *v10; 
  __int64 weaponIdx; 
  bool v12; 
  const char ***v13; 
  GWeaponMap *v14; 
  GWeaponMap *v15; 
  const Weapon *CurrentWeaponForPlayer; 
  Weapon *p_offHand; 
  GWeaponMap *v18; 
  GWeaponMap *v19; 
  const Weapon *Weapon; 
  char *debugTaskName; 
  __int64 v22; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1454, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1455, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1458, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( !BG_IsWeaponValid(Instance, EntityPlayerStateConst, &cmd->weapon) )
  {
    if ( cmd->weapon.weaponIdx && ent->client && G_ClientMP_IsPlaying(ent) )
      GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_NotityWeaponSwitchInvalidCallback, &cmd->weapon, 0x3Cu, 2u, "WeaponSwitchInvalid");
    v8 = BG_HighPriorityWeapon_Get(Instance, EntityPlayerStateConst);
    v9 = v8;
    if ( v8->weaponIdx && BG_IsWeaponValid(Instance, EntityPlayerStateConst, v8) )
    {
      *(__m256i *)&cmd->weapon.weaponIdx = *(__m256i *)&v9->weaponIdx;
      *(_OWORD *)&cmd->weapon.attachmentVariationIndices[5] = *(_OWORD *)&v9->attachmentVariationIndices[5];
      *(double *)&cmd->weapon.attachmentVariationIndices[21] = *(double *)&v9->attachmentVariationIndices[21];
      *(_DWORD *)&cmd->weapon.weaponCamo = *(_DWORD *)&v9->weaponCamo;
      v10 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
      {
        weaponIdx = v9->weaponIdx;
        if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
        {
          LODWORD(v22) = bg_lastParsedWeaponIndex;
          LODWORD(debugTaskName) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", debugTaskName, v22) )
            __debugbreak();
        }
        v12 = bg_weaponCompleteDefs[weaponIdx] == NULL;
        v13 = (const char ***)&bg_weaponCompleteDefs[weaponIdx];
        if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
          __debugbreak();
        Com_Printf(17, "HighPriorityDebug - G_ActiveMP_ValidateCommand: usercmd weap invalid, server had valid high prio weapon, replaced usercmd weap with %s\n", **v13);
      }
    }
    else
    {
      v14 = GWeaponMap::GetInstance();
      cmd->weapon = *BG_GetCurrentWeaponForPlayer(v14, EntityPlayerStateConst);
    }
    cmd->isAlternate = BG_UsingAlternate(EntityPlayerStateConst);
  }
  if ( BG_IsThrowingAxe(&cmd->weapon) )
  {
    v15 = GWeaponMap::GetInstance();
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v15, EntityPlayerStateConst);
    if ( memcmp_0(CurrentWeaponForPlayer, &cmd->weapon, 0x3Cui64) )
      cmd->isAlternate = BG_IsFauxFists(EntityPlayerStateConst, &cmd->weapon, 0);
  }
  p_offHand = &cmd->offHand;
  v18 = GWeaponMap::GetInstance();
  if ( !BG_IsWeaponValid(v18, EntityPlayerStateConst, &cmd->offHand) )
  {
    if ( p_offHand->weaponIdx && ent->client && G_ClientMP_IsPlaying(ent) )
      GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_NotityWeaponSwitchInvalidCallback, p_offHand, 0x3Cu, 2u, "WeaponSwitchInvalidOffhand");
    v19 = GWeaponMap::GetInstance();
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v19, EntityPlayerStateConst->weapCommon.offHandHandle);
    *(__m256i *)&p_offHand->weaponIdx = *(__m256i *)&Weapon->weaponIdx;
    *(_OWORD *)&cmd->offHand.attachmentVariationIndices[5] = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
    *(double *)&cmd->offHand.attachmentVariationIndices[21] = *(double *)&Weapon->attachmentVariationIndices[21];
    *(_DWORD *)&cmd->offHand.weaponCamo = *(_DWORD *)&Weapon->weaponCamo;
  }
}

/*
==============
G_ActiveMP_ValidateFollowPlayerState
==============
*/
void G_ActiveMP_ValidateFollowPlayerState(const playerState_s *ps)
{
  bool v2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4035, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x22u) )
  {
    if ( ps->clientNum < level.maxclients )
      return;
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4038, ASSERT_TYPE_ASSERT, "(ps->clientNum < level.maxclients)", "%s\n\tFollow playerState belongs to a PLAYER but is clientNum %i.", "ps->clientNum < level.maxclients", ps->clientNum);
  }
  else
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x29u) )
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4056, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Player controlled agent system is disabled");
    else
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4061, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tFollow playerState does not belong to a PLAYER or AGENT entity.", "0");
  }
  if ( v2 )
    __debugbreak();
}

/*
==============
G_ActiveMP_ValidateSpectateOtherFlags
==============
*/
void G_ActiveMP_ValidateSpectateOtherFlags(const GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *otherFlags)
{
  if ( !otherFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4069, ASSERT_TYPE_ASSERT, "( otherFlags )", (const char *)&queryFormat, "otherFlags") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)otherFlags, ACTIVE, 0x22u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4078, ASSERT_TYPE_ASSERT, "(otherFlags->TestFlagStrict( POtherFlagsMP::PLAYER ))", "%s\n\tFollow playerState::otherFlags is not PLAYER.", "otherFlags->TestFlagStrict( POtherFlagsMP::PLAYER )") )
    __debugbreak();
}

/*
==============
G_ActiveMP_VehicleAnimationClientEndFrame
==============
*/
void G_ActiveMP_VehicleAnimationClientEndFrame(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4928, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4929, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  G_Active_PlayerOrAgent_VehicleAnimationEndFrame(&ent->client->ps);
}

/*
==============
G_ActiveMP_VehicleOccupancyUpdate
==============
*/
void G_ActiveMP_VehicleOccupancyUpdate(gentity_s *ent, characterInfo_t *ci)
{
  playerState_s *EntityPlayerState; 
  GHandler *Handler; 
  int LinkedVehicle; 
  bool vehicleSeatChanged; 
  animScriptVehicleSeat_t seat; 
  gclient_s *client; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 
  vec3_t outLinkAngles; 
  vec3_t outLinkPos; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4087, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4088, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4091, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Handler = GHandler::getHandler();
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4097, ASSERT_TYPE_ASSERT, "( handler )", (const char *)&queryFormat, "handler") )
    __debugbreak();
  LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(Handler, &ent->s, ci, &outVehicleType, &outVehicleSeat);
  ci->vehicleSeatChanged = 0;
  if ( LinkedVehicle == 2047 )
  {
    seat = ci->vehicleAnimation.seat;
    vehicleSeatChanged = 0;
    if ( seat )
    {
      ci->vehicleSeatChanged = 1;
      vehicleSeatChanged = 1;
    }
    ci->vehicleAnimation.prevSeat = seat;
    ci->vehicleAnimation.seat = VEHICLE_SEAT_UNUSED;
  }
  else
  {
    BG_VehicleOccupancy_SetCharacterInfo(Handler, LinkedVehicle, outVehicleSeat, ci, &EntityPlayerState->viewangles, &outLinkPos, &outLinkAngles);
    vehicleSeatChanged = ci->vehicleSeatChanged;
  }
  if ( vehicleSeatChanged )
  {
    ci->dobjDirty = 1;
    ent->s.lerp.eFlags.m_flags[0] ^= 4u;
  }
  EntityPlayerState->vehicleAnimState.seat = ci->vehicleAnimation.seat;
  client = ent->client;
  if ( client )
  {
    client->sess.cs.vehicleAnimStateSeat = ci->vehicleAnimation.seat;
  }
  else
  {
    if ( !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4134, ASSERT_TYPE_ASSERT, "( ent->agent )", (const char *)&queryFormat, "ent->agent") )
      __debugbreak();
    ent->agent->agentState.vehicleAnimStateSeat = ci->vehicleAnimation.seat;
  }
}

/*
==============
G_ActiveMP_WeaponChanged
==============
*/
void G_ActiveMP_WeaponChanged(gentity_s *playerEnt, GClientTaskQueue *outputQueue)
{
  scrContext_t *v4; 
  GameScriptData *GameScriptDataCommon; 
  const void *ParameterInternal; 
  unsigned int v7; 

  v4 = ScriptContext_Server();
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_data_mp.h", 82, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = GClientTaskQueue::GetParameterInternal(outputQueue, 0x7Au, 2u);
  GScr_Weapon_AddParam(v4, (const Weapon *)ParameterInternal + 1, *((_BYTE *)ParameterInternal + 121));
  GScr_Weapon_AddParam(v4, (const Weapon *)ParameterInternal, *((_BYTE *)ParameterInternal + 120));
  v7 = GScr_ExecEntThread(playerEnt, GameScriptDataCommon[2].scriptable_postinit, 2u);
  Scr_FreeThread(v4, v7);
}

/*
==============
G_Footstep_DebugMoveType
==============
*/
void G_Footstep_DebugMoveType(int entityNum, const vec3_t *origin, bool canEmit, const float moveTypeWeight, const entity_event_t eventType)
{
  const dvar_t *v5; 
  const char *v9; 
  const dvar_t *v10; 
  float value; 
  const dvar_t *v12; 
  bool v13; 
  double v14; 
  const char *v15; 
  vec3_t point; 
  char dest[256]; 

  v5 = DCONST_DVARBOOL_snd_footstep_debug;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v9 = "UNKNOWN";
    switch ( eventType )
    {
      case EV_NONE:
        v9 = "NONE";
        break;
      case EV_FOOTSTEP_SUPERSPRINT:
        v9 = "SUPERSPRINT";
        break;
      case EV_FOOTSTEP_SPRINT:
        v9 = "SPRINT";
        break;
      case EV_FOOTSTEP_RUN:
        v9 = "RUN";
        break;
      case EV_FOOTSTEP_WALK:
        v9 = "WALK";
        break;
      case EV_FOOTSTEP_CREEP:
        v9 = "CREEP";
        break;
      case EV_FOOTSTEP_PRONE:
        v9 = "PRONE";
        break;
      default:
        break;
    }
    v10 = DCONST_DVARFLT_snd_footstep_debug_fontsize;
    if ( !DCONST_DVARFLT_snd_footstep_debug_fontsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_fontsize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    value = v10->current.value;
    v12 = DVARBOOL_killswitch_footstep_player_moveblend_enabled;
    if ( !DVARBOOL_killswitch_footstep_player_moveblend_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_footstep_player_moveblend_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v12->current.enabled && Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED|0x80);
    v14 = *(double *)origin->v;
    point.v[2] = origin->v[2];
    *(double *)point.v = v14;
    point.v[2] = point.v[2] + zOffset;
    v15 = "NO";
    if ( v13 )
    {
      if ( canEmit )
        v15 = "YES";
      Com_sprintf(dest, 0x100ui64, "%i: Emit %s | Step Wgt %.2f (%s)", (unsigned int)entityNum, v15, moveTypeWeight, v9);
    }
    else
    {
      if ( canEmit )
        v15 = "YES";
      Com_sprintf(dest, 0x100ui64, "%i: Emit %s | Step Typ %s", (unsigned int)entityNum, v15, v9);
    }
    G_DebugStarWithText(&point, &colorPurple, &colorPurple, dest, value);
  }
}

/*
==============
GClientSystemMP::UpdateFriendlyOverlay
==============
*/
void GClientSystemMP::UpdateFriendlyOverlay(GClientSystemMP *this, gentity_s *player)
{
  ;
}

