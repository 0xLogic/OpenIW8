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
  gagent_s *agent; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  Bounds bounds; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  unsigned __int16 touch[2048]; 

  _RBX = entity;
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 929, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !_RBX->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 930, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  agent = _RBX->agent;
  if ( (agent->flags & 1) != 0 && agent->playerState.pm_type <= 1u )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@41a00000
      vmovsd  xmm1, qword ptr [rbx+128h]
      vmovups xmm0, xmmword ptr [rbx+118h]
      vmovups xmmword ptr [rsp+10B0h+bounds.midPoint], xmm0
      vmovss  xmm4, dword ptr [rsp+10B0h+bounds.midPoint]
      vmovss  xmm3, dword ptr [rsp+10B0h+bounds.midPoint+4]
      vmovsd  qword ptr [rsp+10B0h+bounds.halfSize+4], xmm1
      vaddss  xmm5, xmm2, dword ptr [rsp+10B0h+bounds.halfSize+8]
      vshufps xmm0, xmm0, xmm0, 0FFh
      vmovaps [rsp+10B0h+var_10], xmm6
      vaddss  xmm6, xmm1, xmm2
      vsubss  xmm1, xmm3, xmm6
      vmovss  dword ptr [rsp+10B0h+aabbMin+4], xmm1
    }
    collectedEnts.ids = touch;
    __asm
    {
      vmovaps [rsp+10B0h+var_20], xmm7
      vaddss  xmm7, xmm0, xmm2
      vmovss  xmm2, dword ptr [rsp+10B0h+bounds.midPoint+8]
      vsubss  xmm0, xmm4, xmm7
      vmovss  dword ptr [rsp+10B0h+aabbMin], xmm0
      vsubss  xmm0, xmm2, xmm5
      vaddss  xmm1, xmm7, xmm4
      vmovss  dword ptr [rsp+10B0h+aabbMin+8], xmm0
      vmovss  dword ptr [rsp+10B0h+aabbMax], xmm1
    }
    collectedEnts.count = 0;
    __asm
    {
      vaddss  xmm0, xmm6, xmm3
      vaddss  xmm1, xmm5, xmm2
    }
    collectedEnts.countMax = 2048;
    __asm
    {
      vmovss  dword ptr [rsp+10B0h+aabbMax+4], xmm0
      vmovss  dword ptr [rsp+10B0h+bounds.halfSize], xmm7
      vmovss  dword ptr [rsp+10B0h+bounds.halfSize+4], xmm6
      vmovss  dword ptr [rsp+10B0h+bounds.halfSize+8], xmm5
      vmovss  dword ptr [rsp+10B0h+aabbMax+8], xmm1
    }
    PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 1078198280, &collectedEnts, NULL);
    __asm
    {
      vmovaps xmm7, [rsp+10B0h+var_20]
      vmovaps xmm6, [rsp+10B0h+var_10]
    }
    if ( collectedEnts.count >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 948, ASSERT_TYPE_ASSERT, "(collectEnts.count < ( 2048 ))", (const char *)&queryFormat, "collectEnts.count < MAX_GENTITIES") )
      __debugbreak();
    _RAX = _RBX->agent;
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+104h]
      vmovss  xmm0, dword ptr [rax+30h]
      vaddss  xmm1, xmm0, dword ptr [rbx+100h]
      vmovss  dword ptr [rsp+10B0h+bounds.midPoint], xmm1
      vaddss  xmm0, xmm2, dword ptr [rax+34h]
      vmovss  xmm1, dword ptr [rbx+108h]
      vmovss  dword ptr [rsp+10B0h+bounds.midPoint+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rax+38h]
      vmovss  xmm0, dword ptr [rbx+10Ch]
      vmovss  xmm1, dword ptr [rbx+110h]
      vmovss  dword ptr [rsp+10B0h+bounds.halfSize], xmm0
      vmovss  xmm0, dword ptr [rbx+114h]
      vmovss  dword ptr [rsp+10B0h+bounds.halfSize+8], xmm0
      vmovss  dword ptr [rsp+10B0h+bounds.midPoint+8], xmm2
      vmovss  dword ptr [rsp+10B0h+bounds.halfSize+4], xmm1
    }
    Bounds_ExpandToWidth(&bounds);
    G_ActiveMP_TouchTriggers_Internal(_RBX, &bounds, touch, collectedEnts.count, 0);
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
void G_ActiveMP_BeginClientTriggerWorkers()
{
  unsigned int v1; 
  __int64 v3; 
  gclient_s *client; 
  const dvar_t *v7; 
  __int64 duration; 
  __int64 v18; 
  Bounds box; 

  v1 = 0;
  if ( level.maxclients > 0 )
  {
    _RBP = 0i64;
    v3 = 0i64;
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovss  xmm6, cs:__real@41a00000
    }
    do
    {
      if ( v1 >= 0x800 )
      {
        LODWORD(v18) = 2048;
        LODWORD(duration) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v18) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[_RBP].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        if ( v1 >= 0x800 )
        {
          LODWORD(v18) = 2048;
          LODWORD(duration) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v18) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        _RSI = g_entities;
        if ( !g_entities[_RBP].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5524, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
          __debugbreak();
        client = _RSI[_RBP].client;
        if ( (client->flags & 1) == 0 && client->sess.sessionState == SESS_STATE_PLAYING && client->ps.pm_type <= 1u )
        {
          v7 = DCONST_DVARBOOL_g_debugPlayerTriggerBounds;
          if ( !DCONST_DVARBOOL_g_debugPlayerTriggerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugPlayerTriggerBounds") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v7);
          if ( v7->current.enabled )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rsi+rbp+118h]
              vmovsd  xmm1, qword ptr [rsi+rbp+128h]
              vmovups xmmword ptr [rsp+98h+box.midPoint], xmm0
              vmovsd  qword ptr [rsp+98h+box.halfSize+4], xmm1
              vaddss  xmm2, xmm6, dword ptr [rsp+98h+box.halfSize+8]
              vshufps xmm0, xmm0, xmm0, 0FFh
              vaddss  xmm0, xmm0, xmm6
              vmovss  dword ptr [rsp+98h+box.halfSize], xmm0
              vaddss  xmm0, xmm1, xmm6
              vmovss  dword ptr [rsp+98h+box.halfSize+8], xmm2
              vxorps  xmm2, xmm2, xmm2; yaw
              vmovss  dword ptr [rsp+98h+box.halfSize+4], xmm0
            }
            G_DebugBox(&vec3_origin, &box, *(float *)&_XMM2, &colorWhite, 1, 0);
          }
          SV_ClientWorkersMP_StartClientTriggersUpdate(v1);
        }
      }
      ++v1;
      ++v3;
      ++_RBP;
    }
    while ( (int)v1 < level.maxclients );
    __asm { vmovaps xmm6, [rsp+98h+var_38] }
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

void __fastcall G_ActiveMP_ClientEndFrame(gentity_s *ent, __int64 a2, double _XMM2_8)
{
  GHandler *Handler; 
  gclient_s *client; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  int flags; 
  __int64 team; 
  bool v13; 
  bool v14; 
  char v15; 
  bool v16; 
  __int64 radarMode; 
  HudData v18; 
  playerState_s *EntityPlayerState; 
  const dvar_t *v20; 
  playerState_s *v21; 
  scr_string_t attachShieldTagName; 
  const dvar_t *v29; 
  unsigned int number; 
  gclient_s *v39; 
  sessionState_t sessionState; 
  const dvar_t *v41; 
  gclient_s *v42; 
  unsigned int v48; 
  playerState_s *p_ps; 
  int clientNum; 
  int v51; 
  sessionState_t v52; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v53; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v54; 
  __int64 v55; 
  const dvar_t *v56; 
  bool v59; 
  int health; 
  int v61; 
  entityType_s eType; 
  GStatic *GameStatics; 
  unsigned int v75; 
  __int64 v76; 
  int IsAgentEntity; 
  int v79; 
  agentState_s *AgentState; 
  playerState_s *v81; 
  int playerASM_scripted_anim_start_time; 
  clientState_t *ClientState; 
  clientState_t *v84; 
  playerState_s *v85; 
  GMovingPlatformClient *ClientFromGEntity; 
  SavedPlayerState *v87; 
  const dvar_t *v88; 
  int integer; 
  __int16 v90; 
  char v91; 
  DObj *ServerDObjForEnt; 
  int v95; 
  GWeaponMap *Instance; 
  int v97; 
  int v98; 
  gentity_s *gentities; 
  unsigned __int64 viewlocked_entNum; 
  int v101; 
  __int64 v102; 
  __int64 v103; 
  gentity_s *v104; 
  const gentity_s *v105; 
  scr_string_t LeftHandIKTagName; 
  __int64 attachIgnoreCollision; 
  __int64 attachIgnoreCollisiona; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  int outDuration; 
  int active; 
  SavedPlayerState *outExtrapState; 
  vec3_t v121; 
  vec3_t v122; 
  tmat43_t<vec3_t> v123; 
  vec3_t origin; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outOrigin; 
  vec3_t spawn_angles; 
  vec3_t spawn_origin; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> v132; 
  SavedPlayerState outSavedState; 
  usercmd_s cmd; 

  _RSI = ent->client;
  _R14 = ent;
  Handler = GHandler::getHandler();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4968, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( _RSI->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4969, ASSERT_TYPE_ASSERT, "(client->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  _R14->handler = 15;
  _RSI->ps.deltaTime = 0;
  _R14->r.eventTime = level.time;
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4977, ASSERT_TYPE_ASSERT, "( !Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED ) )", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@40a00000; maxAbsValueSize
    vmovss  xmm0, dword ptr [rsi+55C4h]; value
  }
  _RSI->ps.gravity = 800;
  _RSI->ps.moveSpeedScaleMultiplier = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xCu);
  client = _R14->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4781, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  p_otherFlags = &client->ps.otherFlags;
  if ( (client->flags & 0x200) != 0 )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 9u);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 9u);
  client->flags &= ~0x200u;
  if ( !_R14->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4929, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  G_Active_PlayerOrAgent_VehicleAnimationEndFrame(&_R14->client->ps);
  flags = _RSI->flags;
  _RSI->sess.cs.healthRatio = 0;
  if ( (flags & 4) != 0 )
  {
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->ps.pm_flags, ACTIVE, 0x10u) )
    {
      _RSI->ps.pm_flags.m_flags[0] |= 0x10000u;
      goto LABEL_25;
    }
    if ( (_RSI->flags & 4) != 0 )
      goto LABEL_26;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->ps.pm_flags, ACTIVE, 0x10u) )
    goto LABEL_26;
  _RSI->ps.pm_flags.m_flags[0] &= ~0x10000u;
LABEL_25:
  SV_ClientMP_ClearExtrapolation(_R14->s.number);
LABEL_26:
  if ( (_RSI->flags & 0x400) != 0 )
    _RSI->ps.pm_flags.m_flags[0] |= 0x20000u;
  else
    _RSI->ps.pm_flags.m_flags[0] &= ~0x20000u;
  Handler->PlayerWeaponHeatIterate(Handler, &_RSI->ps, BG_Heat_UpdateFlags);
  if ( _RSI->sess.cs.team >= (unsigned int)TEAM_MP_NUM_TEAMS )
  {
    LODWORD(attachIgnoreCollision) = _RSI->sess.cs.team;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5012, ASSERT_TYPE_ASSERT, "(unsigned)( client->sess.cs.team ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "client->sess.cs.team doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", attachIgnoreCollision, 203) )
      __debugbreak();
  }
  team = _RSI->sess.cs.team;
  v13 = level.teamHasRadar[team] || _RSI->sess.hasRadar;
  _RSI->ps.radarEnabled = v13;
  v14 = level.teamRadarBlocked[team] || _RSI->sess.isRadarBlocked;
  _RSI->ps.radarBlocked = v14;
  v15 = truncate_cast<signed char,int>(_RSI->sess.radarStrength + level.teamRadarStrength[team]);
  v16 = _RSI->sess.radarShowEnemyDirection == 0;
  radarMode = _RSI->sess.radarMode;
  _RSI->ps.radarStrength = v15;
  _RSI->ps.radarShowEnemyDirection = !v16;
  if ( (unsigned int)(radarMode + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum RadarMode __cdecl truncate_cast_impl<enum RadarMode,int>(int)", "signed", (char)radarMode, "signed", radarMode) )
    __debugbreak();
  v18.0 = ($D69577AC11C1636F320D0973E2FBC7CA)_RSI->sess.hudData;
  _RSI->ps.hudData = v18;
  _RSI->ps.radarMode = radarMode;
  _R14->s.hudData = v18;
  Profile_Begin(353);
  active = G_ActiveMP_UpdateClientInfo(_R14);
  Profile_EndInternal(NULL);
  EntityPlayerState = G_GetEntityPlayerState(_R14);
  v20 = DVARBOOL_shieldDebug;
  v21 = EntityPlayerState;
  if ( !DVARBOOL_shieldDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled && v21 && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v21->otherFlags, ACTIVE, 8u) )
  {
    if ( SV_IsAgentEntity(_R14) )
    {
      if ( !_R14->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1284, ASSERT_TYPE_ASSERT, "( ent->agent )", (const char *)&queryFormat, "ent->agent") )
        __debugbreak();
      attachShieldTagName = _R14->agent->attachShieldTagName;
    }
    else
    {
      if ( !_R14->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1289, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
        __debugbreak();
      attachShieldTagName = _R14->client->attachShieldTagName;
    }
    if ( G_Utils_DObjGetWorldTagMatrix(_R14, attachShieldTagName, &outTagMat) )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@41f00000
        vmulss  xmm1, xmm3, dword ptr [rbp+2B0h+outTagMat]
        vaddss  xmm2, xmm1, dword ptr [rbp+2B0h+outTagMat+24h]
        vmulss  xmm1, xmm3, dword ptr [rbp+2B0h+outTagMat+4]
        vmovss  dword ptr [rbp+2B0h+end], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbp+2B0h+outTagMat+28h]
        vmulss  xmm1, xmm3, dword ptr [rbp+2B0h+outTagMat+8]
        vmovss  dword ptr [rbp+2B0h+end+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbp+2B0h+outTagMat+2Ch]
        vmovss  dword ptr [rbp+2B0h+end+8], xmm2
      }
      G_DebugLineWithDuration(&outTagMat.m[3], &end, &colorBlue, 0, 2);
    }
  }
  v29 = DVARBOOL_g_debugServerAiming;
  if ( !DVARBOOL_g_debugServerAiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugServerAiming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( v29->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1E0h]
      vmovss  xmm1, dword ptr [rsi+5E4Ch]
      vmovss  dword ptr [rbp+2B0h+angles+8], xmm0
      vmovss  xmm0, dword ptr [rsi+5E50h]
      vmovss  dword ptr [rbp+2B0h+angles+4], xmm0
      vmovss  dword ptr [rbp+2B0h+angles], xmm1
    }
    AngleVectors(&angles, &forward, NULL, NULL);
    G_Client_GetWeaponOrigin(&_RSI->ps, &outOrigin);
    __asm
    {
      vmovss  xmm3, cs:__real@447a0000
      vmulss  xmm1, xmm3, dword ptr [rbp+2B0h+forward]
      vaddss  xmm2, xmm1, dword ptr [rbp+2B0h+outOrigin]
      vmulss  xmm1, xmm3, dword ptr [rbp+2B0h+forward+4]
      vmovss  dword ptr [rbp+2B0h+origin], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+2B0h+outOrigin+4]
      vmulss  xmm1, xmm3, dword ptr [rbp+2B0h+forward+8]
      vmovss  dword ptr [rbp+2B0h+origin+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+2B0h+outOrigin+8]
      vmovss  dword ptr [rbp+2B0h+origin+8], xmm2
    }
    G_Utils_SpawnEventEntity(&origin, 191)->s.eventParm2 = 0;
  }
  number = _R14->s.number;
  if ( Sys_IsAnyWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3067, ASSERT_TYPE_ASSERT, "( !Sys_IsAnyWorkerContext() )", (const char *)&queryFormat, "!Sys_IsAnyWorkerContext()") )
    __debugbreak();
  if ( number >= level.maxclients )
  {
    LODWORD(v115) = level.maxclients;
    LODWORD(attachIgnoreCollision) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3068, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", attachIgnoreCollision, v115) )
      __debugbreak();
  }
  v39 = &level.clients[number];
  SV_Game_GetUsercmd(number, &cmd);
  if ( G_ActiveMP_ClientCanSeeOrBeSeen(number, cmd.serverTime) )
  {
    v39->sess.lastSightedPlayers.array[0] = v39->sess.sightedPlayers.array[0];
    v39->sess.lastSightedPlayers.array[1] = v39->sess.sightedPlayers.array[1];
    v39->sess.lastSightedPlayers.array[2] = v39->sess.sightedPlayers.array[2];
    v39->sess.lastSightedPlayers.array[3] = v39->sess.sightedPlayers.array[3];
    v39->sess.lastSightedPlayers.array[4] = v39->sess.sightedPlayers.array[4];
    v39->sess.lastSightedPlayers.array[5] = v39->sess.sightedPlayers.array[5];
    v39->sess.lastSightedPlayers.array[6] = v39->sess.sightedPlayers.array[6];
  }
  else
  {
    *(_QWORD *)v39->sess.lastSightedPlayers.array = 0i64;
    *(_QWORD *)&v39->sess.lastSightedPlayers.array[2] = 0i64;
    *(_QWORD *)&v39->sess.lastSightedPlayers.array[4] = 0i64;
    v39->sess.lastSightedPlayers.array[6] = 0;
  }
  *(_QWORD *)v39->sess.sightedPlayers.array = 0i64;
  *(_QWORD *)&v39->sess.sightedPlayers.array[2] = 0i64;
  *(_QWORD *)&v39->sess.sightedPlayers.array[4] = 0i64;
  v39->sess.sightedPlayers.array[6] = 0;
  *(_QWORD *)v39->sess.sightedByPlayers.array = 0i64;
  *(_QWORD *)&v39->sess.sightedByPlayers.array[2] = 0i64;
  *(_QWORD *)&v39->sess.sightedByPlayers.array[4] = 0i64;
  v39->sess.sightedByPlayers.array[6] = 0;
  if ( _RSI->sess.connected != CON_CONNECTED )
    goto LABEL_91;
  sessionState = _RSI->sess.sessionState;
  if ( sessionState == SESS_STATE_INTERMISSION )
  {
    Profile_Begin(356);
    G_ActiveMP_IntermissionClientEndFrame(_R14);
    Profile_EndInternal(NULL);
    _RSI->buttonsSinceLastFrame = 0i64;
    G_ActiveMP_RestorePersistentClientData(_R14);
LABEL_92:
    G_ActiveMP_ResetClientNetPerf(&_RSI->ps);
LABEL_93:
    SV_ClientAntiCheatMP_ResetLastRecordedPlayerAngles(_R14->s.number);
    return;
  }
  if ( sessionState == SESS_STATE_SPECTATOR )
  {
    v41 = DVARBOOL_g_spectateOrderFixActive;
    if ( !DVARBOOL_g_spectateOrderFixActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_spectateOrderFixActive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    if ( !v41->current.enabled )
    {
      v42 = _R14->client;
      if ( v42->sess.sessionState == SESS_STATE_SPECTATOR )
      {
        Profile_Begin(357);
        G_ActiveMP_SpectatorClientEndFrame(_R14);
        Profile_EndInternal(NULL);
        v42->buttonsSinceLastFrame = 0i64;
        G_ActiveMP_RestorePersistentClientData(_R14);
        SV_ClientAntiCheatMP_ResetLastRecordedPlayerAngles(_R14->s.number);
        return;
      }
    }
    goto LABEL_93;
  }
  G_ActiveMP_RestorePersistentClientData(_R14);
  if ( _RSI->ps.clientNum != _R14->s.number )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+30h]
      vmovss  dword ptr [rbp+2B0h+spawn_origin], xmm0
      vmovss  xmm1, dword ptr [rsi+34h]
      vmovss  dword ptr [rbp+2B0h+spawn_origin+4], xmm1
      vmovss  xmm0, dword ptr [rsi+38h]
      vxorps  xmm2, xmm2, xmm2
      vmovss  dword ptr [rbp+2B0h+spawn_origin+8], xmm0
      vmovss  xmm1, dword ptr [rsi+1DCh]
      vmovss  dword ptr [rbp+2B0h+spawn_angles+4], xmm1
      vmovss  dword ptr [rbp+2B0h+spawn_angles], xmm2
      vmovss  dword ptr [rbp+2B0h+spawn_angles+8], xmm2
    }
    Profile_Begin(358);
    G_ActiveMP_ClientSpawn(_R14, &spawn_origin, &spawn_angles);
    Profile_EndInternal(NULL);
    v48 = _R14->s.number;
    if ( v48 >= level.maxclients )
    {
      LODWORD(v115) = level.maxclients;
      LODWORD(attachIgnoreCollision) = _R14->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2945, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", attachIgnoreCollision, v115) )
        __debugbreak();
    }
    G_ActiveMP_UpdateSpeculativeWeaponStreaming(v48, &level.clients[v48].ps);
    if ( _RSI->ps.clientNum != _R14->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5103, ASSERT_TYPE_ASSERT, "(client->ps.clientNum == ent->s.number)", (const char *)&queryFormat, "client->ps.clientNum == ent->s.number") )
      __debugbreak();
LABEL_91:
    _RSI->buttonsSinceLastFrame = 0i64;
    goto LABEL_92;
  }
  p_ps = &_R14->client->ps;
  __asm { vmovaps [rsp+3B0h+var_30], xmm6 }
  if ( !p_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4750, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  clientNum = p_ps->clientNum;
  if ( SV_ClientNetPerf_IsEnabled() )
    SV_ClientNetPerf_UpdatePlayerState(clientNum, p_ps);
  else
    G_ActiveMP_ResetClientNetPerf(p_ps);
  _R14->r.svFlags = _R14->r.svFlags & 0xFC | 2;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RSI->ps.eFlags, ACTIVE, 0x10u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagStrict(&_RSI->ps.otherFlags, (POtherFlagsMP)34);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&_RSI->ps.otherFlags, CROUCHING|0x20);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&_RSI->ps.otherFlags, (POtherFlagsMP)36);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagStrict(&_RSI->ps.otherFlags, TURRET_ACTIVE_PRONE|0x20);
  _RSI->ps.viewmodelIndex = _RSI->sess.viewmodelIndex;
  if ( _RSI->compassPingTime <= level.time )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RSI->ps.eFlags, ACTIVE, 0x13u);
  }
  v51 = _RSI->flags;
  if ( (v51 & 1) != 0 )
  {
    _RSI->ps.pm_type = 2;
  }
  else if ( (v51 & 2) != 0 )
  {
    _RSI->ps.pm_type = 3;
  }
  else
  {
    v52 = _RSI->sess.sessionState;
    if ( v52 == SESS_STATE_DEAD )
    {
      _RSI->ps.pm_type = (_R14->tagInfo != NULL) + 7;
      _R14->r.svFlags = _R14->r.svFlags & 0xFC | 1;
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RSI->ps.eFlags, ACTIVE, 0x10u);
    }
    else if ( _RSI->mpviewer )
    {
      _RSI->ps.pm_type = 4;
    }
    else if ( _R14->tagInfo )
    {
      _RSI->ps.pm_type = (_RSI->ps.linkFlags.m_flags[0] & 4) == 0;
      G_SetFixedLinkPlayer(_R14);
      _RSI->ps.origin.v[0] = _R14->r.currentOrigin.v[0];
      _RSI->ps.origin.v[1] = _R14->r.currentOrigin.v[1];
      _RSI->ps.origin.v[2] = _R14->r.currentOrigin.v[2];
    }
    else if ( v52 == SESS_STATE_SPECTATOR )
    {
      _RSI->ps.pm_type = 5;
    }
    else
    {
      _RSI->prevLinkAnglesSet = 0;
      _RSI->ps.pm_type = 0;
    }
  }
  v53 = &_RSI->ps.otherFlags;
  if ( _RSI->lastStand )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(v53, ACTIVE, 0xBu);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(v53, ACTIVE, 0xBu);
  v54 = &_RSI->ps.otherFlags;
  if ( (_RSI->flags & 2) != 0 )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(v54, ACTIVE, 0x1Fu);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(v54, ACTIVE, 0x1Fu);
  v55 = (unsigned int)_RSI->flags;
  if ( (v55 & 0x10) == 0 )
    goto LABEL_129;
  if ( (v55 & 2) == 0 || _RSI->ps.pm_type != 3 )
  {
    Com_PrintWarning(15, "Expected (pm_type == PM_UFO) and (client->flags & CL_FLAG_UFO), instead got pm_type==(%d) and flags==(%d). resetting ufo_viewmodel\n", (unsigned int)_RSI->ps.pm_type, v55);
    _RSI->flags &= ~0x10u;
LABEL_129:
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&_RSI->ps.otherFlags, ACTIVE, 0x20u);
    goto LABEL_130;
  }
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&_RSI->ps.otherFlags, ACTIVE, 0x20u);
LABEL_130:
  G_ActiveMP_UpdateAttackerAccuracy(_R14);
  v56 = DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates;
  if ( !DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_DisablePlayerNearestDataUpdates") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( !v56->current.enabled )
  {
    _RCX = _R14->sentient;
    __asm
    {
      vmovss  xmm1, dword ptr [r14+130h]
      vucomiss xmm1, dword ptr [rcx+24h]
    }
    if ( v56->current.enabled )
      goto LABEL_138;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+28h]
      vucomiss xmm0, dword ptr [r14+134h]
    }
    if ( v56->current.enabled )
      goto LABEL_138;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vucomiss xmm0, dword ptr [r14+138h]
    }
    if ( v56->current.enabled )
LABEL_138:
      v59 = 1;
    else
      v59 = 0;
    __asm { vmovss  dword ptr [rcx+24h], xmm1 }
    _RCX->oldOrigin.v[1] = _R14->r.currentOrigin.v[1];
    _RCX->oldOrigin.v[2] = _R14->r.currentOrigin.v[2];
    Sentient_CheckAndUpdateNearestData(_R14->sentient, v59);
  }
  G_HeadIcons_Update(_R14);
  G_TargetMarkerGroups_Update(_R14);
  G_ActiveMP_DamageFeedback(_R14);
  health = _R14->health;
  v61 = _RSI->ps.stats[2];
  _RSI->ps.stats[0] = health;
  if ( health > v61 )
  {
    LODWORD(v115) = v61;
    LODWORD(attachIgnoreCollision) = health;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3171, ASSERT_TYPE_ASSERT, "( client->ps.stats[STAT_HEALTH] ) <= ( client->ps.stats[STAT_MAX_HEALTH] )", "client->ps.stats[STAT_HEALTH] <= client->ps.stats[STAT_MAX_HEALTH]\n\t%i, %i", attachIgnoreCollision, v115) )
      __debugbreak();
  }
  if ( _RSI->ps.stats[2] <= 0 )
  {
    LODWORD(attachIgnoreCollision) = _RSI->ps.stats[2];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3172, ASSERT_TYPE_ASSERT, "( client->ps.stats[STAT_MAX_HEALTH] ) > ( 0 )", "client->ps.stats[STAT_MAX_HEALTH] > 0\n\t%i, %i", attachIgnoreCollision, 0i64) )
      __debugbreak();
  }
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( _RSI->ps.stats[2] <= 0 )
  {
    _EAX = 0;
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+258h]
      vmaxss  xmm1, xmm0, xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, cs:__real@42fe0000
      vcvttss2si eax, xmm2
    }
  }
  _RSI->sess.cs.healthRatio = _EAX;
  if ( _EAX < 0 || _EAX > 127 )
  {
    LODWORD(v116) = 127;
    LODWORD(attachIgnoreCollision) = _EAX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3188, ASSERT_TYPE_ASSERT, "( 0 ) <= ( client->sess.cs.healthRatio ) && ( client->sess.cs.healthRatio ) <= ( ( 1 << 7 ) - 1 )", "client->sess.cs.healthRatio not in [0, ( 1 << HEALTH_RATIO_BITS ) - 1]\n\t%i not in [%i, %i]", attachIgnoreCollision, 0i64, v116) )
      __debugbreak();
  }
  _RSI->ps.loopSound = truncate_cast<short,int>(_R14->s.loopSound);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?level@@3Ulevel_locals_t@@A.markedForEyesOn.baseclass_0.array; level_locals_t level
    vmovups xmmword ptr [rsi+30Ch], xmm0
    vmovsd  xmm1, qword ptr cs:?level@@3Ulevel_locals_t@@A.markedForEyesOn.baseclass_0.array+10h; level_locals_t level
    vmovsd  qword ptr [rsi+31Ch], xmm1
  }
  _RSI->ps.sightedEnemyPlayersMask.array[6] = level.markedForEyesOn.array[6];
  _RSI->ps.weaponHudIconOverrides[0] = _RSI->sess.weaponHudIconOverrides[0];
  _RSI->ps.weaponHudIconOverrides[1] = _RSI->sess.weaponHudIconOverrides[1];
  _RSI->ps.weaponHudIconOverrides[2] = _RSI->sess.weaponHudIconOverrides[2];
  _RSI->ps.weaponHudIconOverrides[3] = _RSI->sess.weaponHudIconOverrides[3];
  _RSI->ps.weaponHudIconOverrides[4] = _RSI->sess.weaponHudIconOverrides[4];
  _RSI->ps.weaponHudIconOverrides[5] = _RSI->sess.weaponHudIconOverrides[5];
  _RSI->ps.weaponHudIconOverrides[6] = _RSI->sess.weaponHudIconOverrides[6];
  _RSI->ps.weaponHudIconOverrides[7] = _RSI->sess.weaponHudIconOverrides[7];
  _RSI->ps.weaponHudIconOverrides[8] = _RSI->sess.weaponHudIconOverrides[8];
  _RSI->ps.weaponHudIconOverrides[9] = _RSI->sess.weaponHudIconOverrides[9];
  eType = _R14->s.eType;
  GameStatics = GStatic::GetGameStatics();
  v75 = _R14->s.clientNum;
  v76 = (__int64)GameStatics->GetCharacterInfo(GameStatics, v75);
  _R15 = (characterInfo_t *)v76;
  if ( (!v76 || !*(_DWORD *)(v76 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5242, ASSERT_TYPE_ASSERT, "( ci && ci->infoValid )", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4802, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  IsAgentEntity = SV_IsAgentEntity(_R14);
  v79 = _R14->s.number;
  if ( IsAgentEntity )
  {
    AgentState = G_MainMP_GetAgentState(v79);
    if ( _R15->playerASM_scripted_anim_start_time != AgentState->playerASM_scripted_anim_start_time )
    {
      v81 = G_GetEntityPlayerState(_R14);
      playerASM_scripted_anim_start_time = AgentState->playerASM_scripted_anim_start_time;
LABEL_165:
      _R15->playerASM_scripted_anim_start_time = playerASM_scripted_anim_start_time;
      GPlayerASM_ForceUpdateEvent(v81, MOVEMENT, 1, &outDuration);
    }
  }
  else
  {
    ClientState = G_MainMP_GetClientState(v79);
    v84 = ClientState;
    if ( _R15->playerASM_scripted_anim_start_time != ClientState->playerASM_scripted_anim_start_time )
    {
      BG_ScriptedAsmDebugPrint("g_active_mp sate change", level.time, _R15, ClientState);
      v81 = G_GetEntityPlayerState(_R14);
      playerASM_scripted_anim_start_time = v84->playerASM_scripted_anim_start_time;
      goto LABEL_165;
    }
  }
  Profile_Begin(360);
  v85 = &_R14->client->ps;
  if ( !v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2742, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( SV_ClientMP_GetExtrapolatedState(_R14->s.number, &outExtrapState) )
  {
    BG_PlayerExtrap_SavePlayerState(v85, &outSavedState);
    BG_PlayerExtrap_RestorePlayerState(v85, outExtrapState);
    ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(_R14);
    GMovingPlatformClient::ApplyMoverDelta(ClientFromGEntity, v85);
    GMovingPlatforms::UpdatePlayerLocalOffset(v85);
    G_ActiveMP_PlayerStateToEntityState(_R14);
    v87 = outExtrapState;
    _R14->s.lerp.u.player.torsoPitchPacked = outExtrapState->torsoPitchPacked;
    _R14->s.lerp.u.actor.lookAtEntityNum = v87->waistPitchPacked;
    BG_PlayerExtrap_RestorePlayerState(v85, &outSavedState);
  }
  else
  {
    G_ActiveMP_PlayerStateToEntityState(_R14);
  }
  Profile_EndInternal(NULL);
  v88 = DCONST_DVARINT_g_debugPlayerSpectateStream;
  if ( !DCONST_DVARINT_g_debugPlayerSpectateStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugPlayerSpectateStream") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v88);
  integer = v88->current.integer;
  if ( integer >= 0 && integer < level.maxclients && integer != _R14->s.number )
  {
    v90 = truncate_cast<short,int>(integer);
    G_WorldStreaming_SetNextStreamClientSpectate(v75, v90, 0);
  }
  if ( eType == ET_PLAYER )
    goto LABEL_184;
  if ( _R14->s.eType == ET_PLAYER )
  {
    G_PhysicsCharacterProxy_AddCharacter(_R14);
    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_g_DisablePlayerRepulsors, "g_DisablePlayerRepulsors") && !Nav_FindRepulsorByEntNum(_R14->s.number) )
      G_Nav_AddPlayerRepulsor(_R14->s.number);
LABEL_184:
    if ( _R14->s.eType == ET_PLAYER )
    {
      v91 = 16;
      if ( _R14->health > 0 )
        v91 = 14;
      _R14->handler = v91;
      G_ActiveMP_PlayerStateToCharacterInfo(&_RSI->ps, &_R14->s, _R15);
      G_ActiveMP_VehicleOccupancyUpdate(_R14, _R15);
      _R13 = &_RSI->sess.cs;
      if ( _RSI == (gclient_s *)-22068i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4918, ASSERT_TYPE_ASSERT, "( clientState )", (const char *)&queryFormat, "clientState") )
        __debugbreak();
      v16 = active == 0;
      _R15->modelIndex = _RSI->sess.cs.modelindex;
      __asm
      {
        vmovups ymm0, ymmword ptr [r13+2Ch]
        vmovups ymmword ptr [r15+18h], ymm0
      }
      _R15->attachModelIndex[8] = _RSI->sess.cs.attachModelIndex[8];
      if ( !v16 )
        G_Utils_DObjSafeFree(_R14);
      ServerDObjForEnt = Com_GetServerDObjForEnt(_R14);
      Profile_Begin(364);
      v95 = _R14->attachIgnoreCollision;
      Instance = GWeaponMap::GetInstance();
      BG_AnimationMP_UpdatePlayerDObj(LOCAL_CLIENT_INVALID, ServerDObjForEnt, Instance, &_R14->s, _R15, v95);
      Profile_EndInternal(NULL);
      G_ActiveMP_PostDObjClientUpdate(_R15, &_RSI->ps, &_RSI->sess.cs);
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_RSI->ps.otherFlags, (POtherFlagsMP)34) )
      {
        if ( _RSI->ps.clientNum != _R14->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5289, ASSERT_TYPE_ASSERT, "(client->ps.clientNum == ent->s.number)", (const char *)&queryFormat, "client->ps.clientNum == ent->s.number") )
          __debugbreak();
        if ( BG_IsTurretActive(&_RSI->ps) )
        {
          v97 = 2047;
          if ( _RSI->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5292, ASSERT_TYPE_ASSERT, "(client->ps.viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "client->ps.viewlocked_entNum != ENTITYNUM_NONE") )
            __debugbreak();
          if ( !EntHandle::isDefined(&level.gentities[_RSI->ps.viewlocked_entNum].r.ownerNum) || EntHandle::ent(&level.gentities[_RSI->ps.viewlocked_entNum].r.ownerNum) != _R14 )
          {
            v98 = _R14->s.number;
            if ( EntHandle::isDefined(&level.gentities[_RSI->ps.viewlocked_entNum].r.ownerNum) )
            {
              gentities = level.gentities;
              viewlocked_entNum = _RSI->ps.viewlocked_entNum;
              v101 = level.gentities[viewlocked_entNum].r.ownerNum.number;
              if ( (unsigned int)(v101 - 1) >= 0x7FF )
              {
                LODWORD(v115) = 2047;
                LODWORD(attachIgnoreCollisiona) = v101 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", attachIgnoreCollisiona, v115) )
                  __debugbreak();
              }
              v102 = gentities[viewlocked_entNum].r.ownerNum.number;
              if ( (unsigned int)(v102 - 1) >= 0x800 )
              {
                LODWORD(v115) = 2048;
                LODWORD(attachIgnoreCollisiona) = v102 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attachIgnoreCollisiona, v115) )
                  __debugbreak();
              }
              if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                __debugbreak();
              v103 = v102 - 1;
              if ( g_entities[v103].r.isInUse != g_entityIsInUse[v103] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
                __debugbreak();
              if ( !g_entityIsInUse[v103] )
              {
                LODWORD(v115) = gentities[viewlocked_entNum].r.ownerNum.number - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v115) )
                  __debugbreak();
              }
              v97 = (__int16)(gentities[viewlocked_entNum].r.ownerNum.number - 1);
            }
            LODWORD(v117) = v98;
            LODWORD(v116) = v97;
            LODWORD(v115) = _RSI->ps.viewlocked_entNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5293, ASSERT_TYPE_ASSERT, "(level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined() && (level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent))", "%s\n\tviewlocked_entNum is %i, ownerNum is %i, ent->s.number is %i", "level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined() && (level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent)", v115, v116, v117) )
              __debugbreak();
          }
          v104 = &level.gentities[_RSI->ps.viewlocked_entNum];
          if ( v104->r.isInUse )
            G_TurretMP_ThinkClient(v104);
          else
            BG_Turret_ClearPlayerstateOwnedTurret(&_RSI->ps);
        }
      }
      G_Execution_Update(_R14);
      if ( (_RSI->ps.carryState.flags & 1) != 0 )
      {
        v105 = &g_entities[_RSI->ps.clientNum];
        LeftHandIKTagName = BG_CarryObject_GetLeftHandIKTagName();
        if ( G_Utils_DObjGetWorldTagMatrix(v105, LeftHandIKTagName, &v132) )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+2B0h+var_260]
            vmovss  xmm2, dword ptr [rsi+1DCh]
            vmovups xmm1, xmmword ptr [rbp+2B0h+var_260+20h]
            vmovups [rbp+2B0h+var_330], ymm0
            vunpcklps xmm0, xmm6, xmm2
            vmovsd  [rsp+3B0h+var_350], xmm0
            vmovsd  xmm0, qword ptr [rsi+30h]
            vmovss  dword ptr [rbp+2B0h+origin+8], xmm6
          }
          v121.v[2] = origin.v[2];
          v122.v[2] = _RSI->ps.origin.v[2];
          __asm
          {
            vmovsd  [rsp+3B0h+var_340], xmm0
            vmovups [rbp+2B0h+var_310], xmm1
          }
          BG_CarryObject_SetCharacterIKInfo(&v122, &v121, &v123, _R15);
          _R15->carryObjectIKEnabled = 1;
        }
        else
        {
          _R15->carryObjectIKEnabled = 0;
        }
      }
      SV_ClientMP_SendClientPlayerData(_R14->s.number);
      G_Omnvar_UpdatePmoveValues(_R14->client);
    }
  }
  SV_ClientAntiCheatMP_LogPlayerAngles(_R14, level.time);
  __asm { vmovaps xmm6, [rsp+3B0h+var_30] }
  _RSI->buttonsSinceLastFrame = 0i64;
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
  int v28; 
  const dvar_t *v29; 
  __int64 v30; 
  int outTaskFlags; 
  GClientTaskQueue *outTaskQueue; 

  _RBX = cmd;
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
  _RCX = &client->sess.oldcmd;
  _RAX = &client->sess.cmd;
  do
  {
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v7;
  }
  while ( v7 );
  _RCX->buttons = _RAX->buttons;
  _RCX = (usercmd_s *)p_cmd;
  do
  {
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    _RBX = (const usercmd_s *)((char *)_RBX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rbx-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rbx-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rbx-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rbx-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rbx-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rbx-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rbx-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v6;
  }
  while ( v6 );
  _RCX->buttons = _RBX->buttons;
  G_GameInterface_OnClientThink(v3);
  if ( GClienThinkTaskManager::AllocateTaskQueue(&GClienThinkTaskManager::ms_clientTaskGlobalManager, v3, &outTaskQueue) )
  {
    if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2511, ASSERT_TYPE_ASSERT, "( taskQueue != nullptr )", (const char *)&queryFormat, "taskQueue != nullptr") )
      __debugbreak();
    outTaskFlags = 0;
    Sys_ProfBeginNamedEvent(0xFF00FFu, "G_ActiveMP_ClientThinkInternal");
    G_ActiveMP_ClientThinkInternal(GEntity, p_cmd, outTaskQueue, &outTaskFlags);
    Sys_ProfEndNamedEvent();
    v28 = outTaskFlags;
    if ( (unsigned int)v3 >= GClienThinkTaskManager::ms_clientTaskGlobalManager.m_allocatedClientCount )
    {
      LODWORD(v30) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 226, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( m_allocatedClientCount )", "clientNum doesn't index m_allocatedClientCount\n\t%i not in [0, %i)", v30, GClienThinkTaskManager::ms_clientTaskGlobalManager.m_allocatedClientCount) )
        __debugbreak();
    }
    if ( !GClienThinkTaskManager::ms_clientTaskGlobalManager.m_taskFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 227, ASSERT_TYPE_ASSERT, "( m_taskFlags )", (const char *)&queryFormat, "m_taskFlags") )
      __debugbreak();
    GClienThinkTaskManager::ms_clientTaskGlobalManager.m_taskFlags[v3] |= v28;
  }
  else
  {
    v29 = DCONST_DVARBOOL_sv_client_task_limit_assert;
    if ( !DCONST_DVARBOOL_sv_client_task_limit_assert && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_client_task_limit_assert") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.enabled )
    {
      LODWORD(v30) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2525, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to allocate global task queue for client %i. This will lead to a missed command in ship.", v30) )
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
  int commandTime; 
  int v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  int integer; 
  __int64 v16; 
  __int64 v17; 
  sessionState_t sessionState; 
  gclient_s *client; 
  unsigned __int64 buttons; 
  unsigned __int64 v26; 
  GStaticMP *GameStaticsMP; 
  __int64 number; 
  unsigned __int64 UseButtonMask; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  bool v46; 
  characterInfo_t *CharacterInfo; 
  __int64 v51; 
  __int64 v59; 
  int v70; 
  int IsTestClient; 
  int Int_Internal_DebugName; 
  unsigned __int16 v73; 
  int UserCommandTime; 
  int v75; 
  bool Bool_Internal_DebugName; 
  size_t numtouch; 
  gclient_s *v83; 
  gclient_s *v84; 
  __int16 m_flags; 
  char *fmt; 
  char *debugTaskName; 
  char *debugTaskNamea; 
  __int64 v105; 
  __int64 v106; 
  int msec; 
  GPlayerEventsMP *v108; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  __int64 v110; 
  GPMove Src; 
  int outRemoteEntNum[2]; 
  __int16 v113; 
  unsigned __int16 v114[2]; 
  __m256i mem; 
  int v121; 
  __m256i v122; 
  int v125; 
  bool prevAlternate; 
  bool v127; 
  usercmd_s pmoveCmd; 
  char taskData[272]; 
  PlayerViewValues outViewValues; 

  v110 = -2i64;
  *(_QWORD *)outRemoteEntNum = outTaskFlags;
  _RDI = ucmd;
  GPMove::GPMove(&Src);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2251, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2252, ASSERT_TYPE_ASSERT, "( ucmd != nullptr )", (const char *)&queryFormat, "ucmd != nullptr") )
    __debugbreak();
  if ( _RDI->serverTime > level.time )
  {
    LODWORD(debugTaskName) = _RDI->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2253, ASSERT_TYPE_ASSERT, "( ucmd->serverTime ) <= ( level.time )", "ucmd->serverTime <= level.time\n\t%i, %i", debugTaskName, level.time) )
      __debugbreak();
  }
  _RSI = ent->client;
  *outTaskFlags = 0;
  if ( !GClientTaskQueue::ValidateOwner(taskQueue, ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2259, ASSERT_TYPE_ASSERT, "( taskQueue.ValidateOwner( ent ) )", (const char *)&queryFormat, "taskQueue.ValidateOwner( ent )") )
    __debugbreak();
  if ( _RSI->sess.connected == CON_CONNECTED )
  {
    commandTime = _RSI->ps.commandTime;
    v10 = Com_GetUserCommandTime(_RDI) - commandTime;
    v11 = DCONST_DVARINT_com_userCmdMinTimeStep;
    if ( !DCONST_DVARINT_com_userCmdMinTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMinTimeStep") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v10 >= v11->current.integer || _RSI->ps.clientNum != G_GetEntityIndex(ent) )
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
      _RAX = _RDI;
      _RCX = &pmoveCmd;
      v16 = 2i64;
      v17 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rcx], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rcx+20h], ymm0
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rcx+40h], ymm0
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rcx+60h], xmm0
        }
        _RCX = (usercmd_s *)((char *)_RCX + 128);
        __asm
        {
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        _RAX = (const usercmd_s *)((char *)_RAX + 128);
        --v17;
      }
      while ( v17 );
      _RCX->buttons = _RAX->buttons;
      G_Active_ClientThinkUpdateStateFlags(_RSI, &pmoveCmd);
      sessionState = _RSI->sess.sessionState;
      if ( sessionState == SESS_STATE_INTERMISSION )
      {
        Profile_Begin(349);
        client = ent->client;
        buttons = client->buttons;
        client->oldbuttons = buttons;
        v26 = _RDI->buttons;
        client->buttons = _RDI->buttons;
        client->buttonsSinceLastFrame |= v26 & ~buttons;
        Profile_EndInternal(NULL);
      }
      else if ( sessionState == SESS_STATE_SPECTATOR )
      {
        _RDX = taskData;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rdi]
            vmovups ymmword ptr [rdx], ymm0
            vmovups ymm0, ymmword ptr [rdi+20h]
            vmovups ymmword ptr [rdx+20h], ymm0
            vmovups ymm0, ymmword ptr [rdi+40h]
            vmovups ymmword ptr [rdx+40h], ymm0
            vmovups xmm0, xmmword ptr [rdi+60h]
            vmovups xmmword ptr [rdx+60h], xmm0
          }
          _RDX += 128;
          __asm
          {
            vmovups xmm1, xmmword ptr [rdi+70h]
            vmovups xmmword ptr [rdx-10h], xmm1
          }
          _RDI = (const usercmd_s *)((char *)_RDI + 128);
          --v16;
        }
        while ( v16 );
        *(_QWORD *)_RDX = _RDI->buttons;
        GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_SpectatorThinkCallback, taskData, 0x108u, 8u, "SpectatorThink");
      }
      else
      {
        GameStaticsMP = GStaticMP::GetGameStaticsMP();
        number = ent->s.number;
        if ( (unsigned int)number >= GameStaticsMP->m_characterCount )
        {
          LODWORD(v105) = GameStaticsMP->m_characterCount;
          LODWORD(debugTaskName) = ent->s.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( m_characterCount )", "entityIndex doesn't index m_characterCount\n\t%i not in [0, %i)", debugTaskName, v105) )
            __debugbreak();
        }
        v108 = &GameStaticsMP->m_playerEvents[number];
        v108->m_eventsEnabled = 1;
        G_ActiveMP_ValidateCommand(taskQueue, ent, &pmoveCmd);
        _RSI->oldbuttons = _RSI->buttons;
        UseButtonMask = G_PlayerUse_GetUseButtonMask(&_RSI->ps);
        if ( !_RSI->useButtonDone )
          _RSI->oldbuttons &= ~UseButtonMask;
        v36 = pmoveCmd.buttons;
        _RSI->buttons = pmoveCmd.buttons;
        if ( (v36 & UseButtonMask) == 0 )
          _RSI->useButtonDone = 0;
        v37 = v36 & ~_RSI->oldbuttons;
        _RSI->latched_buttons = v37;
        _RSI->buttonsSinceLastFrame |= v37;
        G_ActiveMP_UpdateLocationSelector(taskQueue, _RSI, _RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+744h]
          vmulss  xmm1, xmm0, cs:__real@3b808081
          vmovss  dword ptr [rsi+5E9Ch], xmm1
        }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_aimSpreadDebugLog, "bg_aimSpreadDebugLog") )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rsi+744h]
            vcvtss2sd xmm3, xmm3, xmm3
            vmovss  xmm2, dword ptr [rsi+5E9Ch]
            vcvtss2sd xmm2, xmm2, xmm2
          }
          LODWORD(debugTaskName) = _RDI->serverTime;
          LODWORD(fmt) = level.time;
          __asm
          {
            vmovq   r9, xmm3
            vmovq   r8, xmm2
          }
          Com_Printf(17, "S: G_ActiveMP_ClientThinkInternal: client->currentAimSpreadScale: %.5f Aim spread scale: %.5f Server Time: %d Next cmd time: %d\n", *(double *)&_XMM2, *(double *)&_XMM3, fmt, debugTaskName);
        }
        Src.ps = &_RSI->ps;
        v46 = SV_UserMoveWorkersMP_IsInWorkerContext();
        Src.m_isUserMoveWorker = v46;
        PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(ent->s.number);
        PlayerTraceInfo->m_isUserMoveWorker = v46;
        CharacterInfo = GStaticMP::GetCharacterInfo(GameStaticsMP, ent->s.number);
        _R13 = CharacterInfo;
        if ( (!CharacterInfo || !CharacterInfo->infoValid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2355, ASSERT_TYPE_ASSERT, "( ci && ci->infoValid )", (const char *)&queryFormat, "ci && ci->infoValid") )
          __debugbreak();
        G_Active_InitPmoveExternalSystems(&Src, ent->s.number, &_RSI->ps, _RSI->movingPlatformHandle);
        _RCX = &Src.cmd;
        _RAX = &pmoveCmd;
        v51 = 2i64;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rcx], ymm0
            vmovups ymm0, ymmword ptr [rax+20h]
            vmovups ymmword ptr [rcx+20h], ymm0
            vmovups ymm0, ymmword ptr [rax+40h]
            vmovups ymmword ptr [rcx+40h], ymm0
            vmovups xmm0, xmmword ptr [rax+60h]
            vmovups xmmword ptr [rcx+60h], xmm0
          }
          _RCX = (usercmd_s *)((char *)_RCX + 128);
          __asm
          {
            vmovups xmm1, xmmword ptr [rax+70h]
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          _RAX = (usercmd_s *)((char *)_RAX + 128);
          --v51;
        }
        while ( v51 );
        _RCX->buttons = _RAX->buttons;
        _RAX = &_RSI->sess.oldcmd;
        _RCX = &Src.oldcmd;
        v59 = 2i64;
        do
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rcx], xmm0
            vmovups xmm1, xmmword ptr [rax+10h]
            vmovups xmmword ptr [rcx+10h], xmm1
            vmovups xmm0, xmmword ptr [rax+20h]
            vmovups xmmword ptr [rcx+20h], xmm0
            vmovups xmm1, xmmword ptr [rax+30h]
            vmovups xmmword ptr [rcx+30h], xmm1
            vmovups xmm0, xmmword ptr [rax+40h]
            vmovups xmmword ptr [rcx+40h], xmm0
            vmovups xmm1, xmmword ptr [rax+50h]
            vmovups xmmword ptr [rcx+50h], xmm1
            vmovups xmm0, xmmword ptr [rax+60h]
            vmovups xmmword ptr [rcx+60h], xmm0
          }
          _RCX = (usercmd_s *)((char *)_RCX + 128);
          __asm
          {
            vmovups xmm1, xmmword ptr [rax+70h]
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          _RAX = (usercmd_s *)((char *)_RAX + 128);
          --v59;
        }
        while ( v59 );
        _RCX->buttons = _RAX->buttons;
        __asm
        {
          vmovss  xmm0, dword ptr [r13+0AD0h]
          vmovss  [rbp+840h+Src.baseclass_0.fTorsoPitch], xmm0
          vmovss  xmm1, dword ptr [r13+0AD4h]
          vmovss  [rbp+840h+Src.baseclass_0.fWaistPitch], xmm1
        }
        v70 = 33636369;
        if ( Src.ps->pm_type >= 7 )
          v70 = 65553;
        Src.tracemask = v70;
        if ( SV_BotIsBotEnt(ent) == 1 || (IsTestClient = SV_ClientMP_IsTestClient(ent->s.number), Src.isBot = 0, IsTestClient) )
          Src.isBot = 1;
        Src.m_bgHandler = GHandler::getHandler();
        Src.localClientNum = LOCAL_CLIENT_INVALID;
        Src.bounds = &_RSI->playerBox;
        Src.ground = &_RSI->playerGround;
        Src.groundPersistent = &_RSI->playerGroundPersistent;
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_g_speed, "g_speed");
        v73 = Int_Internal_DebugName;
        if ( (Int_Internal_DebugName < 0 || (unsigned int)Int_Internal_DebugName > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)Int_Internal_DebugName, "signed", Int_Internal_DebugName) )
          __debugbreak();
        _RSI->ps.speed = v73;
        G_Deploy_Clear(&_RSI->ps);
        if ( level.time > _RSI->ps.shellshockTime + _RSI->ps.shellshockDuration )
          _RSI->ps.pm_flags.m_flags[0] &= ~0x200000u;
        UserCommandTime = Com_GetUserCommandTime(&Src.cmd);
        SV_GameMP_GetExtrapolatedData(ent->s.number, UserCommandTime, &_RSI->extrapolatedData);
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
        v75 = msec;
        __asm { vmovss  xmm2, [rbp+840h+Src.baseclass_0.m_stepHeight]; stepHeight }
        BG_AnimationMP_UpdateCharacterInfoHeightOffset(Src.ps, _R13, *(float *)&_XMM2, Src.m_flags, msec);
        _RSI->sess.cs.heightOffset = _R13->heightOffset;
        G_Execution_Check(taskQueue, &_RSI->sess.oldcmd, &pmoveCmd, ent);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_execution_hint_enabled, "execution_hint_enabled") )
          G_Execution_UpdateHint(ent);
        v108->m_eventsEnabled = 0;
        if ( _RSI->playerGround.walking )
        {
          _RSI->flags |= 0x4000u;
          _RSI->lastGroundOrigin.v[0] = _RSI->ps.origin.v[0];
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+34h]
            vmovss  dword ptr [rsi+0B728h], xmm0
            vmovss  xmm1, dword ptr [rsi+38h]
            vmovss  dword ptr [rsi+0B72Ch], xmm1
          }
        }
        G_ActiveMP_UpdatePlayerView(_RSI, &Src.cmd, v75, &outViewValues);
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_cameraUpdateOrderFix, "bg_cameraUpdateOrderFix");
        if ( Bool_Internal_DebugName )
          G_ActiveMP_UpdateViewAndWeaponTransforms(ent->client, &outViewValues);
        __asm { vmovss  xmm0, [rbp+840h+Src.baseclass_0.fTorsoPitch]; pitch }
        *(double *)&_XMM0 = BG_AnimationMP_QuantizePitch(*(float *)&_XMM0);
        __asm
        {
          vmovss  dword ptr [r13+0AD0h], xmm0
          vmovss  xmm0, [rbp+840h+Src.baseclass_0.fWaistPitch]; pitch
        }
        *(double *)&_XMM0 = BG_AnimationMP_QuantizePitch(*(float *)&_XMM0);
        __asm { vmovss  dword ptr [r13+0AD4h], xmm0 }
        **(_DWORD **)outRemoteEntNum |= 1u;
        GPlayerEventsMP::HandlePMoveEvents(v108, taskQueue, ent);
        if ( !Bool_Internal_DebugName )
          G_ActiveMP_UpdateViewAndWeaponTransforms(ent->client, &outViewValues);
        G_PlayerUse_UpdateActivate(taskQueue, ent);
        numtouch = (unsigned int)Src.numtouch;
        if ( Src.numtouch )
        {
          DebugWipe(&mem, 0x64ui64);
          if ( (unsigned int)numtouch > 0x20 )
          {
            LODWORD(v105) = 32;
            LODWORD(debugTaskName) = numtouch;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1764, ASSERT_TYPE_ASSERT, "( numTouch ) <= ( ( sizeof( *array_counter( touchEntsParams.touchEnts ) ) + 0 ) )", "numTouch <= ARRAY_COUNT( touchEntsParams.touchEnts )\n\t%i, %i", debugTaskName, v105) )
              __debugbreak();
            LODWORD(v106) = 32;
            LODWORD(debugTaskNamea) = numtouch;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1765, ASSERT_TYPE_ASSERT, "( numTouch ) <= ( ( sizeof( *array_counter( touchEntsParams.toucherFlags ) ) + 0 ) )", "numTouch <= ARRAY_COUNT( touchEntsParams.toucherFlags )\n\t%i, %i", debugTaskNamea, v106) )
              __debugbreak();
          }
          mem.m256i_i32[0] = numtouch;
          memcpy_0((char *)mem.m256i_i64 + 4, Src.touchents, 2 * numtouch);
          memcpy_0(&v122.m256i_u64[1], Src.toucherflags, numtouch);
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_ClientThink_TouchEntsExecute, &mem, 0x64u, 4u, "TouchEnts");
        }
        v83 = ent->client;
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v83->ps.otherFlags, ACTIVE, 1u) && v83->ps.remoteEyesEnt != 2047 )
        {
          DebugWipe(outRemoteEntNum, 0xCui64);
          if ( G_Active_RemoteControlledEntityShouldUpdateAngles(ent, msec, outRemoteEntNum) )
          {
            outRemoteEntNum[1] = msec;
            v113 = *(_WORD *)_RDI->remoteControlAngles;
            GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_RemoteControlEnt, outRemoteEntNum, 0xCu, 4u, "RemoteControlEnt");
          }
        }
        v84 = ent->client;
        if ( v84->ps.vehicleState.entity != 2047 )
        {
          DebugWipe(&msec, 4ui64);
          msec = v84->ps.vehicleState.entity;
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_UpdateVehicleControlledEnt, &msec, 4u, 4u, "VehicleControlledEnt");
        }
        m_flags = Src.m_flags;
        if ( (Src.m_flags & 4) != 0 )
        {
          v114[0] = Src.glassBreakIndex;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+840h+Src.baseclass_0.glassBreakPos]
            vmovups [rbp+840h+var_4CC], xmm0
            vmovss  xmm0, dword ptr [rbp+840h+Src.baseclass_0.glassBreakDir+4]
            vmovss  [rbp+840h+var_4BC], xmm0
            vmovss  xmm1, dword ptr [rbp+840h+Src.baseclass_0.glassBreakDir+8]
            vmovss  [rbp+840h+var_4B8], xmm1
          }
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_BreakGlass, v114, 0x1Cu, 4u, "MoveBreakGlass");
          m_flags = Src.m_flags;
        }
        if ( (m_flags & 0x20) != 0 )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+840h+Src.baseclass_0.prevWeapon.weaponIdx]
            vmovups [rbp+840h+mem], ymm0
            vmovups xmm1, xmmword ptr [rbp+840h+Src.baseclass_0.prevWeapon.attachmentVariationIndices+5]
            vmovups [rbp+840h+var_490], xmm1
            vmovsd  xmm0, qword ptr [rbp+840h+Src.baseclass_0.prevWeapon.attachmentVariationIndices+15h]
            vmovsd  [rbp+840h+var_480], xmm0
          }
          v121 = *(_DWORD *)&Src.prevWeapon.weaponCamo;
          prevAlternate = Src.prevAlternate;
          _RAX = BG_GetCurrentWeaponForPlayer(Src.weaponMap, Src.ps);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+3CCh], ymm0
            vmovups xmm1, xmmword ptr [rax+20h]
            vmovups [rbp+840h+var_454], xmm1
            vmovsd  xmm0, qword ptr [rax+30h]
            vmovsd  [rbp+840h+var_444], xmm0
          }
          v125 = *(_DWORD *)&_RAX->weaponCamo;
          v127 = BG_UsingAlternate(Src.ps);
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_WeaponChanged, &mem, 0x7Au, 2u, "MoveWeaponChanged");
          m_flags = Src.m_flags;
        }
        if ( (m_flags & 0x400) != 0 )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+840h+Src.baseclass_0.offhandAdsWeapon.weaponIdx]
            vmovups [rbp+840h+mem], ymm0
            vmovups xmm1, xmmword ptr [rbp+840h+Src.baseclass_0.offhandAdsWeapon.attachmentVariationIndices+5]
            vmovups [rbp+840h+var_490], xmm1
            vmovsd  xmm0, qword ptr [rbp+840h+Src.baseclass_0.offhandAdsWeapon.attachmentVariationIndices+15h]
            vmovsd  [rbp+840h+var_480], xmm0
          }
          v121 = *(_DWORD *)&Src.offhandAdsWeapon.weaponCamo;
          GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_OffhandADSOn, &mem, 0x3Cu, 2u, "MoveOffhandADSOn");
          m_flags = Src.m_flags;
        }
        if ( (m_flags & 0x800) != 0 )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+840h+Src.baseclass_0.offhandAdsWeapon.weaponIdx]
            vmovups [rbp+840h+mem], ymm0
            vmovups xmm1, xmmword ptr [rbp+840h+Src.baseclass_0.offhandAdsWeapon.attachmentVariationIndices+5]
            vmovups [rbp+840h+var_490], xmm1
            vmovsd  xmm0, qword ptr [rbp+840h+Src.baseclass_0.offhandAdsWeapon.attachmentVariationIndices+15h]
            vmovsd  [rbp+840h+var_480], xmm0
          }
          v121 = *(_DWORD *)&Src.offhandAdsWeapon.weaponCamo;
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
  unsigned __int8 damageEvent; 
  unsigned __int8 v7; 
  int damage_ricochet; 
  int damage_blood; 
  int v10; 
  int damage_armor; 
  const dvar_t *v12; 
  int v13; 
  bool v14; 
  int entity; 
  const VehicleDef *v16; 
  GHandler *Handler; 
  const VehicleDef *VehicleDef; 
  __int16 linkEnt; 
  gentity_s *GEntity; 
  gentity_s *v21; 
  unsigned int defIndex; 
  __int16 remoteControlEnt; 
  Vehicle *vehicle; 
  int maxHealth; 
  int v26; 
  char v37; 
  unsigned __int8 v45; 
  unsigned __int8 v72; 
  unsigned __int8 v73; 
  double v77; 
  double v78; 
  float viewKickMax; 
  float viewKickScale; 
  float viewKickMin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  _RBX = player->client;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 223, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( _RBX->damage_clear_indicators )
  {
    damageEvent = _RBX->ps.damageEvent;
    if ( damageEvent == 0xFF )
      v7 = 0;
    else
      v7 = damageEvent + 1;
    _RBX->ps.damageEvent = v7;
    _RBX->damageTime = level.time;
    _RBX->ps.damageCount = 0;
    _RBX->ps.damageType = 6;
    _RBX->ps.damageModFlags = 0;
    *(_QWORD *)&_RBX->damage_mod_flags = 0i64;
    *(_QWORD *)&_RBX->damage_stun = 0i64;
    *(_QWORD *)&_RBX->damage_armor = 0i64;
    _RBX->damage_clear_indicators = 0;
    return;
  }
  if ( level.time - _RBX->damageTime > 500 )
    _RBX->ps.damageCount = 0;
  damage_ricochet = _RBX->damage_ricochet;
  damage_blood = _RBX->damage_blood;
  v10 = 0;
  if ( damage_ricochet > 0 && damage_ricochet == damage_blood )
    v10 = 3;
  damage_armor = _RBX->damage_armor;
  if ( damage_armor > 0 && damage_armor == damage_blood )
    v10 = 4;
  if ( damage_blood <= 0 )
  {
    if ( _RBX->damage_stun > 0 )
    {
      v12 = DVARBOOL_player_stunWhiteFlash;
      damage_blood = _RBX->damage_stun;
      v10 = 0;
      if ( !DVARBOOL_player_stunWhiteFlash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stunWhiteFlash") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.enabled )
        v10 = 2;
    }
    v13 = damage_blood;
    if ( damage_blood <= 0 )
    {
      damage_blood = _RBX->damage_kick;
      v14 = damage_blood <= 0;
      if ( damage_blood <= 0 )
        damage_blood = v13;
      if ( !v14 )
        v10 = 5;
      if ( damage_blood <= 0 )
        return;
    }
  }
  entity = _RBX->ps.vehicleState.entity;
  v16 = NULL;
  if ( entity && entity != 2047 )
  {
    Handler = GHandler::getHandler();
    VehicleDef = BG_GetVehicleDef(&_RBX->ps, Handler);
LABEL_41:
    v16 = VehicleDef;
    goto LABEL_42;
  }
  linkEnt = _RBX->ps.linkEnt;
  if ( linkEnt == 2047 )
  {
    remoteControlEnt = _RBX->ps.remoteControlEnt;
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
    v21 = GEntity;
    if ( GEntity->vehicle && G_Vehicle_ValidateLinkedOwner(GEntity, player) )
    {
      defIndex = v21->vehicle->defIndex;
LABEL_40:
      VehicleDef = G_Vehicle_GetServerDef(defIndex);
      goto LABEL_41;
    }
  }
LABEL_42:
  maxHealth = _RBX->sess.maxHealth;
  if ( v16 )
    maxHealth = v16->health;
  if ( maxHealth > 0 )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_38], xmm6
      vmovaps [rsp+0F8h+var_48], xmm7
      vmovaps [rsp+0F8h+var_58], xmm8
    }
    v26 = I_clamp(100 * damage_blood / maxHealth, 1, 127);
    __asm
    {
      vmovss  xmm8, cs:__real@437f0000
      vxorps  xmm7, xmm7, xmm7
    }
    if ( !v16 )
    {
      if ( _RBX->ps.pm_type >= 7 )
      {
LABEL_60:
        __asm
        {
          vmovaps xmm7, [rsp+0F8h+var_48]
          vmovaps xmm6, [rsp+0F8h+var_38]
          vmovaps xmm8, [rsp+0F8h+var_58]
        }
        return;
      }
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, eax
        vaddss  xmm1, xmm6, dword ptr [rbx+744h]
        vcmpltss xmm0, xmm8, xmm1
        vblendvps xmm1, xmm1, xmm8, xmm0
        vaddss  xmm2, xmm1, xmm6
        vcmpltss xmm0, xmm8, xmm2
        vblendvps xmm0, xmm2, xmm8, xmm0
        vmovss  dword ptr [rbx+744h], xmm0
        vmovss  [rsp+0F8h+viewKickMax], xmm1
      }
      BG_GetDamageViewKickScaleValues(&_RBX->ps, &_RBX->sess.cmd, &viewKickScale, &viewKickMin, &viewKickMax);
      __asm
      {
        vmulss  xmm1, xmm6, [rsp+0F8h+viewKickScale]
        vmovss  xmm6, [rsp+0F8h+viewKickMin]
        vcomiss xmm1, xmm6
      }
      if ( !v37 )
      {
        __asm
        {
          vmovss  xmm0, [rsp+0F8h+viewKickMax]
          vminss  xmm6, xmm0, xmm1
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+11E0h]
        vcomiss xmm0, xmm7
      }
      if ( v37 )
      {
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vxorpd  xmm0, xmm0, xmm0
          vmovsd  [rsp+0F8h+var_B8], xmm0
          vmovsd  [rsp+0F8h+var_C0], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 366, ASSERT_TYPE_ASSERT, "( client->ps.viewKickScale ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "client->ps.viewKickScale", "0.0f", v77, v78) )
          __debugbreak();
      }
      __asm { vmulss  xmm7, xmm6, dword ptr [rbx+11E0h] }
    }
    if ( _RBX->damage_fromWorld )
    {
      __asm
      {
        vxorps  xmm0, xmm7, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rbx+0B720h], xmm0
      }
      _RBX->v_dmg_roll = 0.0;
      v45 = -1;
      _RBX->ps.damagePitch = -1;
      _RBX->damage_fromWorld = 0;
    }
    else
    {
      AnglesToAxis(&_RBX->ps.viewangles, &axis);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0F8h+axis+10h]
        vmovss  xmm1, dword ptr [rsp+0F8h+axis+0Ch]
        vmulss  xmm3, xmm0, dword ptr [rcx+4]
        vmulss  xmm2, xmm1, dword ptr [rcx]
        vmovss  xmm0, dword ptr [rsp+0F8h+axis+14h]
        vmulss  xmm1, xmm0, dword ptr [rcx+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmulss  xmm3, xmm2, xmm7
        vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rbx+0B71Ch], xmm0
        vmovss  xmm1, dword ptr [rsp+0F8h+axis+4]
        vmulss  xmm3, xmm1, dword ptr [rcx+4]
        vmovss  xmm0, dword ptr [rsp+0F8h+axis]
        vmulss  xmm2, xmm0, dword ptr [rcx]
        vmovss  xmm1, dword ptr [rsp+0F8h+axis+8]
        vmulss  xmm0, xmm1, dword ptr [rcx+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm0
        vmulss  xmm3, xmm2, xmm7
        vmovss  dword ptr [rbx+0B720h], xmm3
      }
      vectoangles(&_RBX->damage_from, &angles);
      __asm
      {
        vmovss  xmm6, cs:__real@3b360b61
        vmulss  xmm1, xmm6, dword ptr [rsp+0F8h+angles]
        vmulss  xmm2, xmm1, xmm8
        vcvttss2si ecx, xmm2; val
      }
      _RBX->ps.damagePitch = truncate_cast<unsigned char,int>(_ECX);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+0F8h+angles+4]
        vmulss  xmm2, xmm1, xmm8
        vcvttss2si ecx, xmm2; val
      }
      v45 = truncate_cast<unsigned char,int>(_ECX);
    }
    _RBX->ps.damageYaw = v45;
    v72 = _RBX->ps.damageEvent;
    if ( v72 == 0xFF )
      v73 = 0;
    else
      v73 = v72 + 1;
    _RBX->ps.damageEvent = v73;
    _RBX->damageTime = level.time - 20;
    _RBX->ps.damageCount = truncate_cast<unsigned char,int>(v26);
    _RBX->ps.damageModFlags = _RBX->damage_mod_flags;
    *(_QWORD *)&_RBX->damage_mod_flags = 0i64;
    _RBX->ps.damageType = v10;
    *(_QWORD *)&_RBX->damage_stun = 0i64;
    *(_QWORD *)&_RBX->damage_armor = 0i64;
    goto LABEL_60;
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
  __int64 v11; 
  __int64 v12; 
  __int64 v22; 
  __int64 v29; 
  __int64 v38; 
  __int64 v39; 
  bool v40; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  __int64 v44; 
  __int64 v55; 
  int v64; 
  int IsTestClient; 
  const dvar_t *v66; 
  const dvar_t *v67; 
  __int64 v69; 
  GWeaponMap *v83; 
  GHandler *Handler; 
  PlayerWeaponAnimArrays *v85; 
  void *v86; 
  char v88[272]; 
  char v89[14800]; 
  char Src[16736]; 
  GPMove v91; 
  playerState_s dstPs; 

  _RSI = ucmd;
  dstPs.meleeReaction.m_packed = 0;
  GPMove::GPMove(&v91);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2621, ASSERT_TYPE_ASSERT, "( ucmd )", (const char *)&queryFormat, "ucmd") )
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
  _RAX = &GEntity->client->sess.oldcmd;
  _RCX = v88;
  v11 = 2i64;
  v12 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    --v12;
  }
  while ( v12 );
  *(_QWORD *)_RCX = _RAX->buttons;
  _R14 = &client->sess.cmd;
  _RDI = &client->sess.oldcmd;
  _RCX = &client->sess.oldcmd;
  _RAX = &client->sess.cmd;
  v22 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    --v22;
  }
  while ( v22 );
  _RCX->buttons = _RAX->buttons;
  _RCX = &client->sess.cmd.buttons;
  v29 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rsi+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rsi+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rsi+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rsi+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rsi+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rsi+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 16;
    __asm
    {
      vmovups xmm1, xmmword ptr [rsi+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RSI = (const usercmd_s *)((char *)_RSI + 128);
    --v29;
  }
  while ( v29 );
  *_RCX = _RSI->buttons;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v38 = *(_QWORD *)&GStatic::ms_gameStatics;
  v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 48i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)GEntity->s.number);
  if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2641, ASSERT_TYPE_ASSERT, "( playerEvents != nullptr )", (const char *)&queryFormat, "playerEvents != nullptr") )
    __debugbreak();
  v86 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v38 + 224i64))(v38, (unsigned int)GEntity->s.number);
  memcpy_0(v89, v86, 0x39C8ui64);
  v85 = Handler->PlayerWeaponAnims(Handler, &dstPs);
  memcpy_0(Src, v85, sizeof(Src));
  *(_BYTE *)(v39 + 208) = 0;
  v91.ps = &dstPs;
  v40 = SV_UserMoveWorkersMP_IsInWorkerContext();
  v91.m_isUserMoveWorker = v40;
  PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(GEntity->s.number);
  PlayerTraceInfo->m_isUserMoveWorker = v40;
  G_Active_InitPmoveExternalSystems(&v91, GEntity->s.number, &dstPs, client->movingPlatformHandle);
  _RAX = &client->sess.cmd.buttons;
  _RCX = &v91.cmd;
  v44 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX += 16;
    --v44;
  }
  while ( v44 );
  _RCX->buttons = *_RAX;
  _RAX = &client->sess.oldcmd.buttons;
  _RCX = &v91.oldcmd;
  v55 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX += 16;
    --v55;
  }
  while ( v55 );
  _RCX->buttons = *_RAX;
  *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(GEntity->s.lerp.u.player.torsoPitchPacked);
  __asm { vmovss  [rbp+0D380h+var_57D0.baseclass_0.fTorsoPitch], xmm0 }
  *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(GEntity->s.lerp.u.player.waistPitchPacked);
  __asm { vmovss  [rbp+0D380h+var_57D0.baseclass_0.fWaistPitch], xmm0 }
  v64 = 33636369;
  if ( v91.ps->pm_type >= 7 )
    v64 = 65553;
  v91.tracemask = v64;
  if ( SV_BotIsBotEnt(GEntity) == 1 || (IsTestClient = SV_ClientMP_IsTestClient(GEntity->s.number), v91.isBot = 0, IsTestClient) )
    v91.isBot = 1;
  v91.m_bgHandler = Handler;
  v91.localClientNum = LOCAL_CLIENT_INVALID;
  v91.bounds = &client->playerBox;
  v91.ground = &client->playerGround;
  v91.groundPersistent = &client->playerGroundPersistent;
  v66 = DCONST_DVARBOOL_g_extrapolation_full_move;
  if ( !DCONST_DVARBOOL_g_extrapolation_full_move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_extrapolation_full_move") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v66);
  v91.isExtrapolation = !v66->current.enabled;
  if ( (v91.m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2677, ASSERT_TYPE_ASSERT, "( (pm.m_flags & PMF_MANTLE_STARTED) == 0 )", (const char *)&queryFormat, "(pm.m_flags & PMF_MANTLE_STARTED) == 0") )
    __debugbreak();
  v67 = DCONST_DVARBOOL_g_extrapolation_full_move;
  if ( !DCONST_DVARBOOL_g_extrapolation_full_move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_extrapolation_full_move") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  if ( v67->current.enabled )
  {
    Profile_Begin(11);
    Pmove(&v91);
  }
  else
  {
    Profile_Begin(824);
    PM_ExtrapolateMove(&v91);
  }
  Profile_EndInternal(NULL);
  _RAX = &client->sess.oldcmd;
  v69 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [r14], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [r14+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [r14+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [r14+60h], xmm0
    }
    _R14 = (usercmd_s *)((char *)_R14 + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [r14-10h], xmm1
    }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    --v69;
  }
  while ( v69 );
  _R14->buttons = _RAX->buttons;
  _RAX = v88;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rdi+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rdi+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rdi+60h], xmm0
    }
    _RDI = (usercmd_s *)((char *)_RDI + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rdi-10h], xmm1
    }
    _RAX += 128;
    --v11;
  }
  while ( v11 );
  _RDI->buttons = *(_QWORD *)_RAX;
  PlayerTraceInfo->m_isUserMoveWorker = 0;
  memcpy_0(v85, Src, sizeof(PlayerWeaponAnimArrays));
  memcpy_0(v86, v89, 0x39C8ui64);
  BG_PlayerExtrap_SavePlayerState(&dstPs, outExtrapState);
  __asm { vmovss  xmm0, [rbp+0D380h+var_57D0.baseclass_0.fTorsoPitch]; pitch }
  outExtrapState->torsoPitchPacked = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
  __asm { vmovss  xmm0, [rbp+0D380h+var_57D0.baseclass_0.fWaistPitch]; pitch }
  outExtrapState->waistPitchPacked = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
  v83 = GWeaponMap::GetInstance();
  BG_ClearPlayerWeapons(v83, &dstPs);
  GPMove::~GPMove(&v91);
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
  PlayerHandIndex HandFromWeaponEvent; 
  float fmt; 

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
  G_GetEntityUserCmdConst(ent);
  HandFromWeaponEvent = BG_GetHandFromWeaponEvent(event);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm0, xmm0, ebx
    vcvtsi2ss xmm3, xmm3, edi; pitchMove
    vmovss  dword ptr [rsp+88h+fmt], xmm0
  }
  BG_WeaponFireRecoil(weaponMap, ps, HandFromWeaponEvent, *(const float *)&_XMM3, fmt, gunKickAngles, (const vec2_t *)kickAngles, outGunKickAVel, outGunNeedsToCrossCenter, outKickAVel, outKickNeedsToCrossCenter);
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
  int time; 
  const dvar_t *v15; 
  unsigned int v16; 
  playerState_s::<unnamed_type_hud> *i; 
  __int64 v18; 
  __int64 v19; 
  char *v20; 
  __int64 v21; 
  __int64 v22; 
  SavedPlayerState *outExtrapState; 

  _RSI = ps;
  v3 = clientNum;
  if ( (unsigned int)clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3953, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  _RDI = &level.clients[v3];
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3955, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( _RDI != g_entities[v3].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3956, ASSERT_TYPE_ASSERT, "( client == g_entities[clientNum].client )", (const char *)&queryFormat, "client == g_entities[clientNum].client") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)v3 >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v22) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v21) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3968, ASSERT_TYPE_ASSERT, "(unsigned)( psEntNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "psEntNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  _R14 = G_GetEntityPlayerStateConst(&g_entities[v3]);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 3972, ASSERT_TYPE_ASSERT, "( srcPs )", (const char *)&queryFormat, "srcPs") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R14->otherFlags, ACTIVE, 0x22u) )
    return 0i64;
  if ( _RSI )
  {
    memcpy_0(_RSI, _R14, sizeof(playerState_s));
    time = _RDI->extrapolatedData.time;
    if ( time )
    {
      _RSI->commandTime = _R14->commandTime + time;
      _RSI->inputTime = _R14->inputTime + _RDI->extrapolatedData.inputTime;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+30h]
        vaddss  xmm1, xmm0, dword ptr [rdi+5E54h]
        vmovss  dword ptr [rsi+30h], xmm1
        vmovss  xmm2, dword ptr [r14+34h]
        vaddss  xmm0, xmm2, dword ptr [rdi+5E58h]
        vmovss  dword ptr [rsi+34h], xmm0
        vmovss  xmm1, dword ptr [r14+38h]
        vaddss  xmm2, xmm1, dword ptr [rdi+5E5Ch]
        vmovss  dword ptr [rsi+38h], xmm2
        vmovsd  xmm0, qword ptr [rdi+5E68h]
        vmovsd  qword ptr [rsi+28h], xmm0
      }
    }
    v15 = DVARBOOL_command_extrapolation_spectate;
    if ( !DVARBOOL_command_extrapolation_spectate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_extrapolation_spectate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( *(int *)&SvClient::GetCommonClient(v3)[602].lastUsercmd.weapon.attachmentVariationIndices[21] <= 0 && SV_ClientMP_GetExtrapolatedState(v3, &outExtrapState) )
        BG_PlayerExtrap_RestorePlayerState(_RSI, outExtrapState);
    }
    v16 = 0;
    for ( i = &_RSI->hud; i->current[0].type; i = (playerState_s::<unnamed_type_hud> *)((char *)i + 184) )
    {
      memset_0(&_RSI->hud.current[v16], 0, sizeof(_RSI->hud.current[v16]));
      if ( i->current[0].type )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4011, ASSERT_TYPE_ASSERT, "( ps->hud.current[index].type == HE_TYPE_FREE )", (const char *)&queryFormat, "ps->hud.current[index].type == HE_TYPE_FREE") )
          __debugbreak();
      }
      if ( ++v16 >= 0x1E )
        return 1i64;
    }
    v18 = 184i64 * v16;
    v19 = 30 - v16;
    v20 = (char *)&_RSI->hud + v18;
    do
    {
      if ( memcmp_0(v20, &g_dummyHudCurrent, 0xB8ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4018, ASSERT_TYPE_ASSERT, "(!I_memcmp( &ps->hud.current[index], &g_dummyHudCurrent, sizeof( g_dummyHudCurrent ) ))", (const char *)&queryFormat, "!I_memcmp( &ps->hud.current[index], &g_dummyHudCurrent, sizeof( g_dummyHudCurrent ) )") )
        __debugbreak();
      v20 += 184;
      --v19;
    }
    while ( v19 );
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
  gentity_s *v5; 
  playerState_s *p_playerState; 
  GWeaponMap *Instance; 
  bool outKickNeedsToCrossCenter; 
  vec3_t kickAngles; 
  vec3_t kickAVel; 

  v5 = &g_entities[clientNum];
  if ( SV_IsAgentEntity(v5) )
  {
    if ( !v5->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5364, ASSERT_TYPE_ASSERT, "(playerEntity->agent)", (const char *)&queryFormat, "playerEntity->agent") )
      __debugbreak();
    if ( v5->s.eType != ET_AGENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5365, ASSERT_TYPE_ASSERT, "(playerEntity->s.eType == ET_AGENT)", (const char *)&queryFormat, "playerEntity->s.eType == ET_AGENT") )
      __debugbreak();
    p_playerState = &v5->agent->playerState;
  }
  else
  {
    if ( !v5->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5370, ASSERT_TYPE_ASSERT, "(playerEntity->client)", (const char *)&queryFormat, "playerEntity->client") )
      __debugbreak();
    p_playerState = &v5->client->ps;
  }
  if ( (unsigned int)(event - 89) <= 2 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+88h+kickAngles], xmm0
    }
    *(_QWORD *)&kickAngles.y = 0i64;
    outKickNeedsToCrossCenter = 0;
    Instance = GWeaponMap::GetInstance();
    G_ActiveMP_FireRecoil(v5, p_playerState, Instance, event, &kickAngles, &kickAVel, &outKickNeedsToCrossCenter);
    if ( SV_BotIsBot(clientNum) )
      SV_BotSetFireRecoil(clientNum, &kickAVel);
    if ( SV_IsAgentEntity(v5) )
      SV_AgentSetFireRecoil(v5, &kickAVel);
  }
}

/*
==============
G_ActiveMP_PlayerHitboxes
==============
*/
void G_ActiveMP_PlayerHitboxes(const int clientNum)
{
  __int64 v2; 
  const dvar_t *v3; 
  gentity_s *v4; 
  unsigned int v5; 
  GStatic *GameStatics; 
  unsigned int v9; 
  const char *v19; 
  const dvar_t *v21; 
  char *fmt; 
  float fmta; 
  int duration; 
  DObjPartBits partBits; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= level.maxclients )
  {
    duration = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 5485, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, duration) )
      __debugbreak();
  }
  v3 = DVARINT_g_debugLocDamage;
  v4 = &g_entities[v2];
  if ( !DVARINT_g_debugLocDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocDamage") )
    __debugbreak();
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  Dvar_CheckFrontendServerThread(v3);
  v5 = 0;
  if ( v3->current.integer == v4->s.number && SV_Game_DObjExists(v4) )
  {
    GameStatics = GStatic::GetGameStatics();
    _RSI = &partBits;
    _R15 = (__int64)GameStatics->GetCharacterInfo(GameStatics, v2);
    v9 = 0;
    __asm { vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff }
    do
    {
      __asm { vmovdqu xmmword ptr [rsi], xmm6 }
      _RSI = (DObjPartBits *)((char *)_RSI + 16);
      ++v9;
    }
    while ( v9 < 2 );
    G_Utils_DObjCalcPose(v4, &partBits);
    SV_Game_XModelDebugBoxes(v4, &colorWhite, 0);
    __asm
    {
      vmovss  xmm3, dword ptr [r15+858h]
      vmovss  xmm2, dword ptr [r15+800h]
      vmovss  xmm0, dword ptr [r15+9C4h]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+0A8h+fmt], xmm0
    }
    v19 = j_va("[%i] %.3f, %.3f, %.3f\n", (unsigned int)v2, _R8, _R9, fmt);
    __asm
    {
      vmovss  xmm0, cs:__real@3e800000
      vmovss  dword ptr [rsp+0A8h+fmt], xmm0
    }
    CL_AddDebugStarWithText(&v4->r.currentOrigin, &colorYellow, &colorYellow, v19, fmta, 0, 1, 1);
  }
  v21 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.integer == 3 )
  {
    _RDI = &partBits;
    __asm { vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff }
    do
    {
      __asm { vmovdqu xmmword ptr [rdi], xmm6 }
      _RDI = (DObjPartBits *)((char *)_RDI + 16);
      ++v5;
    }
    while ( v5 < 2 );
    G_Utils_DObjCalcPose(v4, &partBits);
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
}

/*
==============
G_ActiveMP_PlayerStateToCharacterInfo
==============
*/
void G_ActiveMP_PlayerStateToCharacterInfo(const playerState_s *ps, const entityState_t *es, characterInfo_t *ci)
{
  float v10; 
  __int16 groundRefEnt; 
  __int16 v12; 
  __int64 v13; 
  bool v19; 
  float *v; 
  bool IsScriptedSceneAnimFlagEnabled; 
  int enableVehicleOccupancyAnimations; 
  int v23; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  GWeaponMap *v26; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  int hybridScope; 
  GWeaponMap *v29; 
  unsigned __int64 v30; 
  int *isWeaponSmoking; 
  GHandler *Handler; 
  const WeaponHeat *v33; 
  const dvar_t *v34; 
  const SuitDef *SuitDef; 
  const gentity_s *GEntity; 
  unsigned int runtimeInstanceCount; 
  GHandler *v38; 
  __int16 linkEnt; 
  int v40; 
  unsigned int carryObjectIndex; 
  gentity_s *v42; 
  gclient_s *client; 
  gagent_s *agent; 
  bool v45; 
  animScriptParachuteState_t skydiveAnimState; 
  bool v47; 
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
  Weapon v59; 
  Weapon v60; 
  Weapon r_thrownWeapon; 

  __asm { vmovaps [rsp+2A8h+var_48], xmm6 }
  _RBP = ci;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4169, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(double *)&_XMM0 = BG_MovementDirToDegrees(ps->movementDir);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+8BCh]; angle2
    vmovaps xmm6, xmm0
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8C0h], xmm0
    vmovss  dword ptr [rbp+8BCh], xmm6
  }
  if ( (ps->linkFlags.m_flags[0] & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u) )
  {
    _RBP->playerAngles.v[0] = ps->linkWeaponAngles.v[0];
    _RBP->playerAngles.v[1] = ps->linkWeaponAngles.v[1];
    v10 = ps->linkWeaponAngles.v[2];
    goto LABEL_9;
  }
  if ( ps->vehicleState.entity == 2047 )
  {
    _RBP->playerAngles.v[0] = ps->viewangles.v[0];
    _RBP->playerAngles.v[1] = ps->viewangles.v[1];
    v10 = ps->viewangles.v[2];
LABEL_9:
    _RBP->playerAngles.v[2] = v10;
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
  v12 = ps->groundRefEnt;
  if ( v12 != 2047 )
  {
    v13 = v12;
    if ( (unsigned int)v12 >= 0x800 )
    {
      LODWORD(r_executionWeapon) = 2048;
      LODWORD(r_stowedWeapon) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", r_stowedWeapon, r_executionWeapon) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v13] )
    {
      LODWORD(r_executionWeapon) = ps->groundRefEnt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4188, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( ps->groundRefEnt ) ) )", "%s\n\t( ps->groundRefEnt ) = %i", "( G_IsEntityInUse( ps->groundRefEnt ) )", r_executionWeapon) )
        __debugbreak();
    }
    _RCX = 1456i64 * ps->groundRefEnt;
    _RAX = g_entities;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rax+13Ch]
      vmovss  dword ptr [rsp+2A8h+angles], xmm0
      vmovss  xmm1, dword ptr [rcx+rax+140h]
      vmovss  dword ptr [rsp+2A8h+angles+4], xmm1
      vmovss  xmm0, dword ptr [rcx+rax+144h]
      vmovss  dword ptr [rsp+2A8h+angles+8], xmm0
    }
    AnglesToAxis(&angles, &axis);
    AnglesToAxis(&_RBP->playerAngles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    AxisToAngles(&out, &_RBP->playerAngles);
  }
  v19 = _RBP->usingAnimState == 0;
  *(_WORD *)&_RBP->useShadowAnims = 0;
  if ( v19 )
  {
    if ( PlayerASM_IsEnabled() )
    {
      BG_PlayerASM_CopyAnimDataToCharacterInfo(ps, _RBP);
    }
    else
    {
      _RBP->playerASMAnim.animSet = BG_GetSuitAnimIndexFromPlayerState(ps);
      _RBP->playerAnim.legsAnim = ps->legsAnim;
      _RBP->playerAnim.torsoAnim = ps->torsoAnim;
    }
  }
  if ( _RBP->dualWielding != BG_PlayerDualWielding(ps) )
  {
    _RBP->dualWielding = BG_PlayerDualWielding(ps);
    _RBP->dobjDirty = 1;
  }
  v = NULL;
  _RBP->offhandShieldDeployed = 0;
  _RBP->isUsingWeaponAltMode = BG_UsingAlternate(ps);
  _RBP->animLinkedToType = BG_GetLinkedToAnimType(ps);
  _RBP->isOnWall = BG_IsOnWallAnimFlagEnabled(ps);
  IsScriptedSceneAnimFlagEnabled = BG_IsScriptedSceneAnimFlagEnabled(ps);
  enableVehicleOccupancyAnimations = _RBP->enableVehicleOccupancyAnimations;
  _RBP->isScriptedSceneAnim = IsScriptedSceneAnimFlagEnabled;
  v23 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x1Bu);
  _RBP->enableVehicleOccupancyAnimations = v23;
  if ( enableVehicleOccupancyAnimations != v23 )
    _RBP->dobjDirty = 1;
  Instance = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, ps);
  v26 = GWeaponMap::GetInstance();
  EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(v26, ps, CurrentWeaponForPlayer);
  if ( EquippedWeaponStateConst )
    hybridScope = EquippedWeaponStateConst->hybridScope;
  else
    hybridScope = 0;
  _RBP->hybridScopeState = hybridScope;
  _RBP->usingNVG = BG_IsUsingNightVision(ps);
  v29 = GWeaponMap::GetInstance();
  BG_GetCharacterWeapons(v29, es, _RBP, &r_heldWeapon, &r_thrownWeapon, &v60, &v59, &r_accessoryWeapon, &r_turretWeapon);
  v30 = 0i64;
  isWeaponSmoking = _RBP->isWeaponSmoking;
  do
  {
    Handler = GHandler::getHandler();
    v33 = Handler->GetPlayerWeaponHeat(Handler, ps, &r_heldWeapon, (PlayerHandIndex)v30++);
    *isWeaponSmoking++ = BG_Heat_GetIsSmoking(v33, &r_heldWeapon);
  }
  while ( v30 < 2 );
  _RBP->suitIndex = ps->suitIndex;
  v34 = DCONST_DVARBOOL_scriptable_debug_determinism;
  if ( !DCONST_DVARBOOL_scriptable_debug_determinism && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_determinism") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.enabled )
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
  v38 = GHandler::getHandler();
  BG_ContextMount_GetWorldmodelProperties(v38, ps, &_RBP->mount);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4291, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  _RBP->animData.flags = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
    Mantle_UnpackAnimData(&ps->mantleState.compressedAnimData, &_RBP->animData);
  _RBP->mantleSpeedAnimCond = ps->mantleState.mantleSpeedAnimCond;
  linkEnt = ps->linkEnt;
  if ( linkEnt == 2047 )
    v40 = 0;
  else
    v40 = linkEnt + 1;
  _RBP->linkedEntNum = v40;
  _RBP->execution = ps->activeExecution;
  _RBP->executionStance = ps->activeExecutionVictimStance;
  _RBP->executionStartTime = ps->activeExecutionStartTime;
  carryObjectIndex = ps->carryState.carryObjectIndex;
  if ( _RBP->carryObjectIndex != carryObjectIndex )
  {
    _RBP->dobjDirty = 1;
    carryObjectIndex = ps->carryState.carryObjectIndex;
  }
  _RBP->carryObjectIndex = carryObjectIndex;
  _RBP->carryObjectFlags = ps->carryState.flags;
  v42 = G_GetGEntity(es->number);
  client = v42->client;
  if ( client )
  {
    v = client->playerGroundPersistent.smoothedNormal.v;
    goto LABEL_68;
  }
  agent = v42->agent;
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
  _RBP->groundNormalInterpolated.v[0] = *v;
  _RBP->groundNormalInterpolated.v[1] = v[1];
  _RBP->groundNormalInterpolated.v[2] = v[2];
  v45 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  skydiveAnimState = _RBP->skydiveAnimState;
  _RBP->isOnStairs = v45;
  _RBP->isNearEnvironmentCollision = 0;
  v47 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)ps->skydivePlayerState.animState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v47 )
    _RBP->dobjDirty = 1;
  _RBP->skydiveAnimState = ps->skydivePlayerState.animState;
  _RBP->lastStandReviving = ps->lastStandReviving;
  _RBP->lastStandSelfReviving = ps->lastStandSelfReviving;
  G_GameInterface_ActiveMP_PlayerStateToCharacterInfo(ps, es, _RBP);
  __asm { vmovaps xmm6, [rsp+2A8h+var_48] }
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
  const dvar_t *v17; 
  unsigned int commandTime; 
  GWeaponMap *Instance; 
  unsigned int v27; 
  WeaponMovementState *p_weapMoveState; 
  unsigned int v29; 
  __int64 v30; 
  __int64 weaponIdx_low; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  int v36; 
  ViewMovementState *p_viewMoveState; 
  __int64 v38; 
  __int64 fLastIdleFactor_low; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  char *fmt; 
  double v103; 
  double v104; 
  double v105; 
  double v106; 
  double v107; 
  double v108; 
  double v109; 
  double v110; 
  double v111; 
  double v112; 
  double v113; 
  double v114; 
  double v115; 
  double v116; 
  double v117; 
  double v118; 
  double v119; 
  double v120; 
  double v121; 
  double v122; 
  double v123; 
  double v124; 

  v17 = DVARINT_bg_shootingAnglesLog;
  _R14 = baseGunAngles;
  _R15 = viewValues;
  _RBX = client;
  if ( !DVARINT_bg_shootingAnglesLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shootingAnglesLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.integer == 1 )
  {
    commandTime = cmd->commandTime;
    __asm
    {
      vmovaps [rsp+208h+var_38], xmm6
      vmovaps [rsp+208h+var_48], xmm7
      vmovaps [rsp+208h+var_58], xmm8
      vmovaps [rsp+208h+var_68], xmm9
      vmovaps [rsp+208h+var_78], xmm10
      vmovaps [rsp+208h+var_88], xmm11
      vmovaps [rsp+208h+var_98], xmm12
      vmovaps [rsp+208h+var_A8], xmm13
      vmovaps [rsp+208h+var_B8], xmm14
      vmovaps [rsp+208h+var_C8], xmm15
    }
    Instance = GWeaponMap::GetInstance();
    *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(Instance, &_RBX->ps);
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_108], xmm0
      vmovss  xmm0, dword ptr [rbx+730h]
      vcvtss2sd xmm0, xmm0, xmm0
    }
    v27 = -1;
    p_weapMoveState = &_RBX->playerViewState.weapMoveState;
    __asm { vmovsd  [rsp+208h+var_100], xmm0 }
    v29 = -1;
    v30 = 376i64;
    do
    {
      weaponIdx_low = LOBYTE(p_weapMoveState->weapon.weaponIdx);
      p_weapMoveState = (WeaponMovementState *)((char *)p_weapMoveState + 5);
      v32 = (v29 >> 8) ^ g_crc32Table[weaponIdx_low ^ (unsigned __int8)v29];
      v33 = (v32 >> 8) ^ g_crc32Table[p_weapMoveState[-1].recoilNeedsToCrossCenter ^ (unsigned __int64)(unsigned __int8)v32];
      v34 = (v33 >> 8) ^ g_crc32Table[*((unsigned __int8 *)&p_weapMoveState[-1].recoilNeedsToCrossCenter + 1) ^ (unsigned __int64)(unsigned __int8)v33];
      v35 = (v34 >> 8) ^ g_crc32Table[*((unsigned __int8 *)&p_weapMoveState[-1].recoilNeedsToCrossCenter + 2) ^ (unsigned __int64)(unsigned __int8)v34];
      v29 = (v35 >> 8) ^ g_crc32Table[*((unsigned __int8 *)&p_weapMoveState[-1].recoilNeedsToCrossCenter + 3) ^ (unsigned __int64)(unsigned __int8)v35];
      --v30;
    }
    while ( v30 );
    v36 = ~v29;
    p_viewMoveState = &_RBX->playerViewState.viewMoveState;
    v38 = 418i64;
    do
    {
      fLastIdleFactor_low = LOBYTE(p_viewMoveState->fLastIdleFactor);
      p_viewMoveState = (ViewMovementState *)((char *)p_viewMoveState + 4);
      v40 = (v27 >> 8) ^ g_crc32Table[fLastIdleFactor_low ^ (unsigned __int8)v27];
      v41 = (v40 >> 8) ^ g_crc32Table[BYTE1(p_viewMoveState[-1].idleMotionCache.idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v40];
      v42 = (v41 >> 8) ^ g_crc32Table[BYTE2(p_viewMoveState[-1].idleMotionCache.idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v41];
      v27 = (v42 >> 8) ^ g_crc32Table[HIBYTE(p_viewMoveState[-1].idleMotionCache.idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v42];
      --v38;
    }
    while ( v38 );
    _RAX = localGunAngles;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0B4h]
      vmovss  xmm9, dword ptr [rbx+0BDFCh]
      vmovss  xmm6, dword ptr [rax+8]
      vmovss  xmm7, dword ptr [rax+4]
      vmovss  xmm8, dword ptr [rax]
    }
    _RAX = resultGunAngles;
    __asm
    {
      vmovss  xmm10, dword ptr [rbx+0B738h]
      vmovss  xmm11, dword ptr [r15+8]
      vmovss  xmm12, dword ptr [r15+4]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  xmm2, dword ptr [rax]
      vmovss  xmm13, dword ptr [r15]
      vmovss  xmm14, dword ptr [rbx+0BCh]
      vmovss  xmm15, dword ptr [rbx+0B8h]
      vmovss  xmm3, dword ptr [r14+8]
      vmovss  xmm4, dword ptr [r14+4]
      vmovss  xmm5, dword ptr [r14]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_F0], xmm0
      vmovss  xmm0, dword ptr [rbx+1E0h]
      vcvtss2sd xmm9, xmm9, xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_E8], xmm0
      vmovss  xmm0, dword ptr [rbx+1DCh]
      vmovsd  [rsp+208h+var_F8], xmm9
      vmovsd  xmm9, [rsp+208h+var_108]
      vmovsd  [rsp+208h+var_110], xmm9
      vmovsd  xmm9, [rsp+208h+var_100]
      vmovsd  [rsp+208h+var_118], xmm9
      vmovsd  xmm9, [rsp+208h+var_F8]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_E0], xmm0
      vmovss  xmm0, dword ptr [rbx+1D8h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_D8], xmm0
      vmovss  xmm0, dword ptr [rax+8]
      vmovsd  [rsp+208h+var_148], xmm9
      vmovsd  xmm9, [rsp+208h+var_F0]
      vcvtss2sd xmm10, xmm10, xmm10
      vmovsd  [rsp+208h+var_150], xmm10
      vcvtss2sd xmm11, xmm11, xmm11
      vmovsd  [rsp+208h+var_158], xmm11
      vcvtss2sd xmm12, xmm12, xmm12
      vmovsd  [rsp+208h+var_160], xmm12
      vcvtss2sd xmm13, xmm13, xmm13
      vmovsd  [rsp+208h+var_168], xmm13
      vcvtss2sd xmm14, xmm14, xmm14
      vmovsd  [rsp+208h+var_170], xmm14
      vcvtss2sd xmm15, xmm15, xmm15
      vmovsd  [rsp+208h+var_178], xmm15
      vmovsd  [rsp+208h+var_180], xmm9
      vmovsd  xmm9, [rsp+208h+var_E8]
      vmovsd  [rsp+208h+var_188], xmm9
      vmovsd  xmm9, [rsp+208h+var_E0]
      vmovsd  [rsp+208h+var_190], xmm9
      vmovsd  xmm9, [rsp+208h+var_D8]
      vmovsd  [rsp+208h+var_198], xmm9
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+208h+var_1A0], xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vmovsd  [rsp+208h+var_1A8], xmm7
      vcvtss2sd xmm8, xmm8, xmm8
      vmovsd  [rsp+208h+var_1B0], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+208h+var_1B8], xmm0
      vmovsd  [rsp+208h+var_1C0], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+208h+var_1C8], xmm2
      vmovsd  [rsp+208h+var_1D0], xmm3
      vmovsd  [rsp+208h+var_1D8], xmm4
      vmovsd  [rsp+208h+var_1E0], xmm5
    }
    LODWORD(fmt) = _RBX->extrapolatedData.time;
    Com_Printf(17, "S->  Time:%d  CmdTime:%d  EX:%d  CA:[%f %f %f]  WA:[%f %f %f]  SA:[%f %f %f]  VA:[%f %f %f]  DA:[%f %f %f]  VMA:[%f %f %f]  VI:%f  WI:%f  VS:%d  WS:%d  IT1:%d  IT2:%d  ADST:%d  ADS:%f  ADSr:%f\n", (unsigned int)cmd->serverTime, commandTime, fmt, v103, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119, v120, v121, v122, ~v27, v36, _RBX->ps.weapCommon.weaponIdleTime, _RBX->ps.weapCommon.weaponIdleTime2, _RBX->ps.weapCommon.adsStartTime, v123, v124);
    __asm
    {
      vmovaps xmm15, [rsp+208h+var_C8]
      vmovaps xmm14, [rsp+208h+var_B8]
      vmovaps xmm13, [rsp+208h+var_A8]
      vmovaps xmm12, [rsp+208h+var_98]
      vmovaps xmm11, [rsp+208h+var_88]
      vmovaps xmm10, [rsp+208h+var_78]
      vmovaps xmm9, [rsp+208h+var_68]
      vmovaps xmm8, [rsp+208h+var_58]
      vmovaps xmm7, [rsp+208h+var_48]
      vmovaps xmm6, [rsp+208h+var_38]
    }
  }
}

/*
==============
G_ActiveMP_PrintViewState
==============
*/
void G_ActiveMP_PrintViewState(const gclient_s *const client, const usercmd_s *const cmd, const PlayerViewState *viewState)
{
  const dvar_t *v13; 
  WeaponIdleMotionCache *p_idleMotionCache; 
  unsigned int v32; 
  unsigned int v35; 
  __int64 v38; 
  __int64 weaponIdx_low; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  unsigned int v73; 
  unsigned int v74; 
  int v75; 
  unsigned __int8 *stickerIndices; 
  __int64 v77; 
  unsigned __int64 v78; 
  unsigned int v79; 
  unsigned int v80; 
  unsigned int v81; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int v84; 
  unsigned int v85; 
  unsigned int v86; 
  unsigned int v87; 
  unsigned int v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned int v92; 
  unsigned int v93; 
  unsigned int v94; 
  unsigned int v95; 
  unsigned int v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned __int64 v103; 
  unsigned int v104; 
  unsigned __int64 v105; 
  unsigned int v106; 
  unsigned int v107; 
  char *fmt; 
  double v133; 
  double v134; 
  double v135; 
  double v136; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  double v143; 
  double v144; 
  double v145; 
  double v146; 
  double v147; 
  double v148; 
  double v149; 
  double v150; 
  double v151; 
  double v152; 
  double v153; 
  double v154; 
  double v155; 
  double v156; 
  double v157; 
  double v158; 

  v13 = DVARINT_bg_shootingAnglesLog;
  _RBX = viewState;
  if ( !DVARINT_bg_shootingAnglesLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shootingAnglesLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer == 2 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+718h]
      vmovss  xmm2, dword ptr [rbx+750h]
      vmovss  xmm3, dword ptr [rbx+74Ch]
      vmovss  xmm4, dword ptr [rbx+748h]
      vmovss  xmm5, dword ptr [rbx+744h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+218h+arg_18], xmm0
      vmovss  xmm0, dword ptr [rbx+714h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+218h+var_108], xmm0
      vmovss  xmm0, dword ptr [rbx+710h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+218h+var_100], xmm0
      vmovss  xmm0, dword ptr [rbx+70Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+218h+var_F8], xmm0
      vmovss  xmm0, dword ptr [rbx+6FCh]
      vcvtss2sd xmm0, xmm0, xmm0
    }
    p_idleMotionCache = &_RBX->weapMoveState.idleMotionCache;
    v32 = -1;
    __asm
    {
      vmovaps [rsp+218h+var_28], xmm6
      vmovss  xmm6, dword ptr [rbx+740h]
      vmovsd  [rsp+218h+var_F0], xmm0
      vmovss  xmm0, dword ptr [rbx+6F8h]
      vmovaps [rsp+218h+var_38], xmm7
    }
    v35 = -1;
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+73Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovaps [rsp+218h+var_48], xmm8
    }
    v38 = 278i64;
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+738h]
      vmovsd  [rsp+218h+var_E8], xmm0
      vmovss  xmm0, dword ptr [rbx+6F4h]
      vmovaps [rsp+218h+var_58], xmm9
      vmovss  xmm9, dword ptr [rbx+734h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovaps [rsp+218h+var_68], xmm10
      vmovss  xmm10, dword ptr [rbx+730h]
      vmovsd  [rsp+218h+var_E0], xmm0
      vmovss  xmm0, dword ptr [rbx+6D8h]
      vmovaps [rsp+218h+var_78], xmm11
      vmovss  xmm11, dword ptr [rbx+72Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovaps [rsp+218h+var_88], xmm12
      vmovss  xmm12, dword ptr [rbx+728h]
      vmovsd  [rsp+218h+var_D8], xmm0
      vmovss  xmm0, dword ptr [rbx+6D4h]
      vmovaps [rsp+218h+var_98], xmm13
      vmovss  xmm13, dword ptr [rbx+724h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovaps [rsp+218h+var_A8], xmm14
      vmovss  xmm14, dword ptr [rbx+720h]
      vmovsd  [rsp+218h+var_D0], xmm0
      vmovss  xmm0, dword ptr [rbx+6D0h]
      vmovaps [rsp+218h+var_B8], xmm15
      vmovss  xmm15, dword ptr [rbx+71Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+218h+var_C8], xmm0
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vcvtss2sd xmm8, xmm8, xmm8
      vcvtss2sd xmm9, xmm9, xmm9
      vcvtss2sd xmm10, xmm10, xmm10
      vcvtss2sd xmm11, xmm11, xmm11
      vcvtss2sd xmm12, xmm12, xmm12
      vcvtss2sd xmm13, xmm13, xmm13
      vcvtss2sd xmm14, xmm14, xmm14
      vcvtss2sd xmm15, xmm15, xmm15
    }
    do
    {
      weaponIdx_low = LOBYTE(p_idleMotionCache->weapon.weaponIdx);
      p_idleMotionCache = (WeaponIdleMotionCache *)((char *)p_idleMotionCache + 6);
      v70 = (v35 >> 8) ^ g_crc32Table[weaponIdx_low ^ (unsigned __int8)v35];
      v71 = (v70 >> 8) ^ g_crc32Table[HIBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvT.y) ^ (unsigned __int64)(unsigned __int8)v70];
      v72 = (v71 >> 8) ^ g_crc32Table[LOBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v71];
      v73 = (v72 >> 8) ^ g_crc32Table[BYTE1(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v72];
      v74 = (v73 >> 8) ^ g_crc32Table[BYTE2(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v73];
      v35 = (v74 >> 8) ^ g_crc32Table[HIBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v74];
      --v38;
    }
    while ( v38 );
    v75 = ~v35;
    stickerIndices = (unsigned __int8 *)_RBX->weapMoveState.weapon.stickerIndices;
    v77 = 2i64;
    do
    {
      v78 = (unsigned __int8)v32 ^ (unsigned __int64)*(stickerIndices - 2);
      v79 = (((v32 >> 8) ^ g_crc32Table[v78]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v32) ^ g_crc32Table[v78]) ^ (unsigned __int64)*(stickerIndices - 1)];
      v80 = (v79 >> 8) ^ g_crc32Table[*stickerIndices ^ (unsigned __int64)(unsigned __int8)v79];
      v81 = (v80 >> 8) ^ g_crc32Table[(unsigned __int8)v80 ^ (unsigned __int64)stickerIndices[1]];
      v82 = (v81 >> 8) ^ g_crc32Table[(unsigned __int8)v81 ^ (unsigned __int64)stickerIndices[2]];
      v83 = (v82 >> 8) ^ g_crc32Table[(unsigned __int8)v82 ^ (unsigned __int64)stickerIndices[3]];
      v84 = (v83 >> 8) ^ g_crc32Table[(unsigned __int8)v83 ^ (unsigned __int64)stickerIndices[4]];
      v85 = (v84 >> 8) ^ g_crc32Table[(unsigned __int8)v84 ^ (unsigned __int64)stickerIndices[5]];
      v86 = (v85 >> 8) ^ g_crc32Table[(unsigned __int8)v85 ^ (unsigned __int64)stickerIndices[6]];
      v87 = (v86 >> 8) ^ g_crc32Table[(unsigned __int8)v86 ^ (unsigned __int64)stickerIndices[7]];
      v88 = (v87 >> 8) ^ g_crc32Table[(unsigned __int8)v87 ^ (unsigned __int64)stickerIndices[8]];
      v89 = (v88 >> 8) ^ g_crc32Table[(unsigned __int8)v88 ^ (unsigned __int64)stickerIndices[9]];
      v90 = g_crc32Table[(unsigned __int8)v89 ^ (unsigned __int64)stickerIndices[10]];
      v91 = (((v89 >> 8) ^ v90) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v89) ^ v90) ^ (unsigned __int64)stickerIndices[11]];
      v92 = (v91 >> 8) ^ g_crc32Table[(unsigned __int8)v91 ^ (unsigned __int64)stickerIndices[12]];
      v93 = (v92 >> 8) ^ g_crc32Table[(unsigned __int8)v92 ^ (unsigned __int64)stickerIndices[13]];
      v94 = (v93 >> 8) ^ g_crc32Table[(unsigned __int8)v93 ^ (unsigned __int64)stickerIndices[14]];
      v95 = (v94 >> 8) ^ g_crc32Table[(unsigned __int8)v94 ^ (unsigned __int64)stickerIndices[15]];
      v96 = (v95 >> 8) ^ g_crc32Table[(unsigned __int8)v95 ^ (unsigned __int64)stickerIndices[16]];
      v97 = (v96 >> 8) ^ g_crc32Table[(unsigned __int8)v96 ^ (unsigned __int64)stickerIndices[17]];
      v98 = (v97 >> 8) ^ g_crc32Table[(unsigned __int8)v97 ^ (unsigned __int64)stickerIndices[18]];
      v99 = (v98 >> 8) ^ g_crc32Table[(unsigned __int8)v98 ^ (unsigned __int64)stickerIndices[19]];
      v100 = (v99 >> 8) ^ g_crc32Table[(unsigned __int8)v99 ^ (unsigned __int64)stickerIndices[20]];
      v101 = (v100 >> 8) ^ g_crc32Table[(unsigned __int8)v100 ^ (unsigned __int64)stickerIndices[21]];
      v102 = (v101 >> 8) ^ g_crc32Table[(unsigned __int8)v101 ^ (unsigned __int64)stickerIndices[22]];
      v103 = (unsigned __int8)v102 ^ (unsigned __int64)stickerIndices[23];
      v104 = (((v102 >> 8) ^ g_crc32Table[v103]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v102) ^ g_crc32Table[v103]) ^ (unsigned __int64)stickerIndices[24]];
      v105 = stickerIndices[25];
      stickerIndices += 30;
      v106 = (v104 >> 8) ^ g_crc32Table[(unsigned __int8)v104 ^ v105];
      v107 = (v106 >> 8) ^ g_crc32Table[(unsigned __int8)v106 ^ (unsigned __int64)*(stickerIndices - 4)];
      v32 = (v107 >> 8) ^ g_crc32Table[(unsigned __int8)v107 ^ (unsigned __int64)*(stickerIndices - 3)];
      --v77;
    }
    while ( v77 );
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+6CCh]
      vmovss  xmm1, dword ptr [rbx+8]
      vmovsd  [rsp+218h+var_118], xmm2
      vmovsd  xmm2, [rsp+218h+arg_18]
      vmovsd  [rsp+218h+var_120], xmm3
      vmovsd  xmm3, [rsp+218h+var_108]
      vmovsd  [rsp+218h+var_128], xmm4
      vmovsd  xmm4, [rsp+218h+var_100]
      vmovsd  [rsp+218h+var_130], xmm5
      vmovsd  [rsp+218h+var_138], xmm6
      vmovsd  [rsp+218h+var_140], xmm7
      vmovsd  [rsp+218h+var_148], xmm8
      vmovsd  [rsp+218h+var_150], xmm9
      vmovsd  [rsp+218h+var_158], xmm10
      vmovsd  [rsp+218h+var_160], xmm11
      vmovsd  [rsp+218h+var_168], xmm12
      vmovsd  [rsp+218h+var_170], xmm13
      vmovsd  [rsp+218h+var_178], xmm14
      vmovsd  [rsp+218h+var_180], xmm15
      vmovsd  [rsp+218h+var_188], xmm2
      vmovsd  xmm2, [rsp+218h+var_F8]
      vmovsd  [rsp+218h+var_190], xmm3
      vmovsd  xmm3, [rsp+218h+var_F0]
      vmovsd  [rsp+218h+var_198], xmm4
      vmovsd  xmm4, [rsp+218h+var_E8]
      vmovsd  [rsp+218h+var_1A0], xmm2
      vmovsd  xmm2, [rsp+218h+var_E0]
      vmovsd  [rsp+218h+var_1A8], xmm3
      vmovsd  xmm3, [rsp+218h+var_D8]
      vmovsd  [rsp+218h+var_1B0], xmm4
      vmovsd  xmm4, [rsp+218h+var_D0]
      vmovsd  [rsp+218h+var_1B8], xmm2
      vmovsd  xmm2, [rsp+218h+var_C8]
      vmovsd  [rsp+218h+var_1C0], xmm3
      vmovsd  [rsp+218h+var_1C8], xmm4
      vmovsd  [rsp+218h+var_1D0], xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+218h+var_1E8], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+218h+var_1F0], xmm1
    }
    LODWORD(fmt) = client->extrapolatedData.time;
    Com_Printf((unsigned __int8)v77 + 17, "S->  Time:%d  CmdTime:%d  EX:%d  VI:%f  WI:%f  WP:%d  MC:%d  BA[%f %f %f]  BO:[%f %f %f]  RA:[%f %f %f]  RS:[%f %f %f]  SA:[%f %f %f]  SO:[%f %f %f]  SVA:[%f %f %f]  BA:[%f %f %f]\n", (unsigned int)cmd->serverTime, (unsigned int)cmd->commandTime, fmt, v133, v134, ~v32, v75, v135, v136, v137, v138, v139, v140, v141, v142, v143, v144, v145, v146, v147, v148, v149, v150, v151, v152, v153, v154, v155, v156, v157, v158);
    __asm
    {
      vmovaps xmm15, [rsp+218h+var_B8]
      vmovaps xmm14, [rsp+218h+var_A8]
      vmovaps xmm13, [rsp+218h+var_98]
      vmovaps xmm12, [rsp+218h+var_88]
      vmovaps xmm11, [rsp+218h+var_78]
      vmovaps xmm10, [rsp+218h+var_68]
      vmovaps xmm9, [rsp+218h+var_58]
      vmovaps xmm8, [rsp+218h+var_48]
      vmovaps xmm7, [rsp+218h+var_38]
      vmovaps xmm6, [rsp+218h+var_28]
    }
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
  gentity_s *GEntity; 
  gentity_s *v9; 
  playerState_s *EntityPlayerState; 

  _RSI = playerEnt;
  _RDI = pm;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 960, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 961, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  _RBX = _RSI->client;
  if ( _RBX->sess.cs.isMLGFollower )
  {
    GEntity = G_GetGEntity(_RBX->sess.cs.indexMLGFollower);
    v9 = GEntity;
    if ( GEntity->client->sess.cs.isMLGSpectator )
    {
      EntityPlayerState = G_GetEntityPlayerState(GEntity);
      _RBX->ps.origin = EntityPlayerState->origin;
      _RBX->ps.viewangles = EntityPlayerState->viewangles;
      _RSI->r.currentAngles = EntityPlayerState->viewangles;
      _RBX->mlgSpectatorClientInfo.clientViewAngles.v[0] = EntityPlayerState->viewangles.v[0];
      _RBX->mlgSpectatorClientInfo.clientViewAngles.v[1] = EntityPlayerState->viewangles.v[1];
      _RBX->mlgSpectatorClientInfo.clientFoV = I_clamp(v9->client->mlgSpectatorClientInfo.clientFoV, 0, 60);
      _RBX->mlgSpectatorClientInfo.cameraAerialFocusedClient = v9->client->mlgSpectatorClientInfo.cameraAerialFocusedClient;
      _RBX->mlgSpectatorClientInfo.cameraTypeMLGSpectator = v9->client->mlgSpectatorClientInfo.cameraTypeMLGSpectator;
    }
    else
    {
      _RBX->mlgSpectatorClientInfo.cameraAerialFocusedClient = -1;
      _RBX->mlgSpectatorClientInfo.cameraTypeMLGSpectator = 0;
    }
  }
  else
  {
    if ( _RDI->cmd.mlgSelectedAngle )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0D0h]
        vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
        vmovss  dword ptr [rbx+30h], xmm0
      }
      _RBX->ps.origin.v[1] = _RDI->cmd.vehOrgY;
      _RBX->ps.origin.v[2] = _RDI->cmd.vehOrgZ;
      __asm { vmovss  dword ptr [rsi+130h], xmm0 }
      _RSI->r.currentOrigin.v[1] = _RBX->ps.origin.v[1];
      _RSI->r.currentOrigin.v[2] = _RBX->ps.origin.v[2];
      __asm
      {
        vmovaps [rsp+68h+var_18], xmm10
        vmovaps [rsp+68h+var_28], xmm11
        vmovaps [rsp+68h+var_38], xmm12
      }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RDI->cmd.angles.v[0], *(float *)&_XMM1, 0x14u);
      __asm
      {
        vmulss  xmm3, xmm0, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vxorps  xmm11, xmm11, xmm11
        vroundss xmm2, xmm11, xmm1, 1
        vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm12, xmm0, cs:__real@43b40000
      }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RDI->cmd.angles.v[1], *(float *)&_XMM1, 0x14u);
      __asm
      {
        vmulss  xmm5, xmm0, cs:__real@3b360b61
        vaddss  xmm3, xmm5, cs:__real@3f000000
        vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
        vxorps  xmm2, xmm2, xmm2
        vmovss  xmm0, xmm2, xmm3
        vroundss xmm4, xmm11, xmm0, 1
        vsubss  xmm2, xmm5, xmm4
        vmulss  xmm10, xmm2, cs:__real@43b40000
      }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RDI->cmd.angles.v[2], *(float *)&_XMM1, 0x14u);
      __asm
      {
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vmovss  dword ptr [rbx+1D8h], xmm12
        vmovss  dword ptr [rbx+1DCh], xmm10
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm2
        vroundss xmm3, xmm11, xmm0, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, cs:__real@43b40000
        vmovss  dword ptr [rbx+1E0h], xmm0
        vmovss  dword ptr [rsi+13Ch], xmm12
        vmovss  dword ptr [rsi+140h], xmm10
        vmovss  dword ptr [rsi+144h], xmm0
        vmovaps xmm11, [rsp+68h+var_28]
      }
      _RBX->mlgSpectatorClientInfo.clientFoV = I_clamp(_RDI->cmd.mlgSelectedAngle - 60, 0, 60);
      __asm
      {
        vmovss  dword ptr [rbx+5E08h], xmm12
        vmovaps xmm12, [rsp+68h+var_38]
        vmovss  dword ptr [rbx+5E0Ch], xmm10
        vmovaps xmm10, [rsp+68h+var_18]
      }
    }
    _RBX->mlgSpectatorClientInfo.cameraAerialFocusedClient = _RDI->cmd.mlgSelectedLoc[0];
    _RBX->mlgSpectatorClientInfo.cameraTypeMLGSpectator = _RDI->cmd.mlgSelectedLoc[1];
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
  unsigned __int64 buttons; 
  unsigned __int64 v7; 
  team_t FreeLookTeam; 
  unsigned __int64 v9; 
  int v10; 
  const dvar_t *v11; 
  __int64 v12; 
  bool v13; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  __int64 v16; 
  int pm_type; 
  const dvar_t *v26; 
  GPMove v29; 

  _RBP = playerEnt;
  GPMove::GPMove(&v29);
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1019, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1020, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1021, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR )") )
    __debugbreak();
  Profile_Begin(350);
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  _RSI = (unsigned __int64 *)GClientTaskQueue::GetParameterInternal(outputQueue, 0x108u, 8u);
  _RDI = _RBP->client;
  buttons = _RDI->buttons;
  _RDI->oldbuttons = buttons;
  v7 = *_RSI;
  _RDI->buttons = *_RSI;
  _RDI->buttonsSinceLastFrame |= v7 & ~buttons;
  if ( !_RDI->sess.cs.isMLGSpectator )
  {
    if ( _RDI->sess.forceSpectatorClient < 0 )
    {
      FreeLookTeam = Com_TeamsMP_GetFreeLookTeam();
      if ( G_ActiveMP_ClientCanSpectateTeam(_RDI, FreeLookTeam) )
      {
        if ( _RDI->spectatorClient >= 0 && ((_RDI->oldbuttons ^ _RDI->buttons) & 0x1000000000000i64) != 0 )
          G_CmdsMP_StopSpectating(_RBP, 1, 0);
      }
    }
    v9 = _RDI->buttons;
    if ( (v9 & 0x2000000000000i64) != 0 && (_RDI->oldbuttons & 0x2000000000000i64) == 0 )
    {
      v10 = 1;
LABEL_25:
      G_CmdsMP_SpectateCycle_f(_RDI, v10);
      goto LABEL_26;
    }
    if ( (v9 & 0x4000000000000i64) != 0 && (_RDI->oldbuttons & 0x4000000000000i64) == 0 )
    {
      v10 = -1;
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->ps.otherFlags, ACTIVE, 0x21u) )
  {
    v11 = DVARBOOL_cg_mlg_forceDetachCodcasterCamera;
    if ( !DVARBOOL_cg_mlg_forceDetachCodcasterCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_forceDetachCodcasterCamera") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled && _RDI->sess.cs.isMLGSpectator && _RDI->mlgSpectatorClientInfo.cameraTypeMLGSpectator )
    {
      _RDI->spectatorClient = -1;
      _RDI->cycleSpectatorClient = -1;
    }
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)_RDI->spectatorClient);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1073, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    if ( *(_DWORD *)(v12 + 4) )
      _RDI->sess.mlgSpectatingTeam = *(_DWORD *)(v12 + 12);
  }
  else
  {
    if ( (_RDI->flags & 2) != 0 )
      _RDI->ps.pm_type = 3;
    else
      _RDI->ps.pm_type = 5;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    if ( (_RDI->sess.noSpectate.array[6] & 0x100000) != 0 )
      _RDI->ps.speed = 0;
    else
      _RDI->ps.speed = 400;
    G_Deploy_Clear(&_RDI->ps);
    v29.ps = &_RDI->ps;
    v13 = SV_UserMoveWorkersMP_IsInWorkerContext();
    v29.m_isUserMoveWorker = v13;
    PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(_RBP->s.number);
    PlayerTraceInfo->m_isUserMoveWorker = v13;
    G_Active_InitPmoveExternalSystems(&v29, _RBP->s.number, &_RDI->ps, _RDI->movingPlatformHandle);
    _RCX = &v29.cmd;
    v16 = 2i64;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rcx], xmm0
        vmovups xmm1, xmmword ptr [rsi+10h]
        vmovups xmmword ptr [rcx+10h], xmm1
        vmovups xmm0, xmmword ptr [rsi+20h]
        vmovups xmmword ptr [rcx+20h], xmm0
        vmovups xmm1, xmmword ptr [rsi+30h]
        vmovups xmmword ptr [rcx+30h], xmm1
        vmovups xmm0, xmmword ptr [rsi+40h]
        vmovups xmmword ptr [rcx+40h], xmm0
        vmovups xmm1, xmmword ptr [rsi+50h]
        vmovups xmmword ptr [rcx+50h], xmm1
        vmovups xmm0, xmmword ptr [rsi+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX = (usercmd_s *)((char *)_RCX + 128);
      __asm
      {
        vmovups xmm1, xmmword ptr [rsi+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _RSI += 16;
      --v16;
    }
    while ( v16 );
    _RCX->buttons = *_RSI;
    pm_type = _RDI->ps.pm_type;
    if ( pm_type == 5 )
    {
      v29.tracemask = 8391313;
    }
    else
    {
      if ( pm_type != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1129, ASSERT_TYPE_ASSERT, "(client->ps.pm_type == PM_UFO)", (const char *)&queryFormat, "client->ps.pm_type == PM_UFO") )
        __debugbreak();
      v29.tracemask = 2065;
    }
    v29.m_bgHandler = GHandler::getHandler();
    v29.localClientNum = LOCAL_CLIENT_INVALID;
    v29.bounds = &_RDI->playerBox;
    v29.ground = &_RDI->playerGround;
    v29.groundPersistent = NULL;
    if ( _RDI->sess.cs.isMLGSpectator )
    {
      v26 = DVARBOOL_cg_mlg_static_cameras_editing;
      if ( !DVARBOOL_cg_mlg_static_cameras_editing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_static_cameras_editing") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( !v26->current.enabled )
        v29.ps->speed = 0;
    }
    Profile_Begin(12);
    Pmove(&v29);
    Profile_EndInternal(NULL);
    PlayerTraceInfo->m_isUserMoveWorker = 0;
    _RBP->r.currentOrigin.v[0] = _RDI->ps.origin.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+34h]
      vmovss  dword ptr [rbp+134h], xmm0
      vmovss  xmm1, dword ptr [rdi+38h]
      vmovss  dword ptr [rbp+138h], xmm1
    }
    G_Door_SetOwnership(v29.ps);
    SV_UnlinkEntity(_RBP);
  }
  Profile_EndInternal(NULL);
  GPMove::~GPMove(&v29);
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
  __int64 v17; 
  __int64 v18; 
  ScriptableInstanceServerContext *v19; 
  unsigned int scriptableCollisionMain; 
  const Bounds *v21; 
  __int64 v22; 
  __int64 v23; 
  __int128 v24; 

  v4 = touchCount;
  _R13 = boundsToUse;
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 582, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 583, ASSERT_TYPE_ASSERT, "( boundsToUse )", (const char *)&queryFormat, "boundsToUse") )
    __debugbreak();
  if ( !touch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 584, ASSERT_TYPE_ASSERT, "( touch )", (const char *)&queryFormat, "touch") )
    __debugbreak();
  if ( (_DWORD)v4 )
  {
    v8 = ScriptContext_Server();
    if ( Scr_IsSystemActive(v8, 1u) )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@41200000
        vmovups xmm0, xmmword ptr [r13+0]
        vmovsd  xmm1, qword ptr [r13+10h]
        vmovups [rsp+98h+var_58], xmm0
        vmovsd  [rsp+98h+var_48], xmm1
        vshufps xmm0, xmm0, xmm0, 0FFh
        vaddss  xmm0, xmm0, xmm2
        vmovss  dword ptr [rsp+98h+var_58+0Ch], xmm0
        vaddss  xmm0, xmm1, xmm2
        vaddss  xmm2, xmm2, dword ptr [rsp+98h+var_48+4]
        vmovss  dword ptr [rsp+98h+var_48+4], xmm2
        vmovss  dword ptr [rsp+98h+var_48], xmm0
      }
      v17 = v4;
      do
      {
        v18 = *touch;
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v18 >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v23) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(v22) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
        }
        v19 = g_scriptableSv_instanceContexts;
        if ( g_scriptableSv_instanceContexts[v18].collisionContext.canTouch )
        {
          scriptableCollisionMain = g_scriptableSv_instanceContexts[v18].collisionContext.scriptableCollisionMain;
          if ( scriptableCollisionMain == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 611, ASSERT_TYPE_ASSERT, "( physInstId != 0xFFFFFFFF )", (const char *)&queryFormat, "physInstId != PHYSICSINSTANCEID_INVALID") )
            __debugbreak();
          if ( !v19[v18].collisionContext.canTouch || (v21 = (const Bounds *)&v24, !v19[v18].collisionContext.useLargerBounds) )
            v21 = _R13;
          if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, v21, scriptableCollisionMain, NULL) )
          {
            if ( !SV_ClientWorkersMP_AddScriptableTrigger(playerEnt->s.number, v18, v19[v18].collisionContext.touchPartId) )
              G_ActiveMP_ProcessScriptableTrigger(playerEnt, v18, v19[v18].collisionContext.touchPartId);
          }
        }
        ++touch;
        --v17;
      }
      while ( v17 );
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
  void *v4; 
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  PhysicsQuery_Collected<unsigned int> *collectedScriptables; 
  bool outPlayerLinked; 
  bool outPlayerPredicted; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  PhysicsQuery_Collected<unsigned int> v74; 
  Bounds bounds; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  Bounds rotatedBounds; 
  WorldUpReferenceFrame v79; 
  unsigned int v80[2048]; 
  unsigned __int16 touch[2048]; 
  char v84; 

  v4 = alloca(v1);
  __asm
  {
    vmovaps [rsp+3130h+var_30], xmm6
    vmovaps [rsp+3130h+var_40], xmm7
  }
  _RDI = ent;
  Profile_Begin(484);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 836, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(_RDI);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 839, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  if ( EntityPlayerStateConst->pm_type > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 840, ASSERT_TYPE_ASSERT, "( G_ActiveMP_TouchTriggers_IsSupportedMoveType( ps->pm_type ) )", (const char *)&queryFormat, "G_ActiveMP_TouchTriggers_IsSupportedMoveType( ps->pm_type )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@41a00000
    vmovsd  xmm1, qword ptr [rdi+128h]
    vmovups xmm0, xmmword ptr [rdi+118h]
    vmovups xmmword ptr [rsp+3130h+bounds.midPoint], xmm0
    vmovss  xmm4, dword ptr [rsp+3130h+bounds.midPoint]
    vmovss  xmm3, dword ptr [rsp+3130h+bounds.midPoint+4]
    vaddss  xmm6, xmm1, xmm2
    vmovsd  qword ptr [rsp+3130h+bounds.halfSize+4], xmm1
    vaddss  xmm5, xmm2, dword ptr [rsp+3130h+bounds.halfSize+8]
    vshufps xmm0, xmm0, xmm0, 0FFh
    vaddss  xmm7, xmm0, xmm2
    vmovss  xmm2, dword ptr [rsp+3130h+bounds.midPoint+8]
    vsubss  xmm0, xmm4, xmm7
    vsubss  xmm1, xmm3, xmm6
    vmovss  dword ptr [rbp+3030h+aabbMin], xmm0
    vmovss  dword ptr [rbp+3030h+aabbMin+4], xmm1
    vsubss  xmm0, xmm2, xmm5
    vaddss  xmm1, xmm4, xmm7
  }
  collectedEnts.countMax = 2048;
  collectedEnts.count = 0;
  collectedEnts.ids = touch;
  v74.count = 0;
  v74.ids = v80;
  v74.countMax = 2048;
  __asm
  {
    vmovss  dword ptr [rbp+3030h+aabbMin+8], xmm0
    vmovss  dword ptr [rbp+3030h+aabbMax], xmm1
    vaddss  xmm0, xmm3, xmm6
    vaddss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbp+3030h+aabbMax+4], xmm0
    vmovss  dword ptr [rsp+3130h+bounds.halfSize], xmm7
    vmovss  dword ptr [rsp+3130h+bounds.halfSize+4], xmm6
    vmovss  dword ptr [rsp+3130h+bounds.halfSize+8], xmm5
    vmovss  dword ptr [rbp+3030h+aabbMax+8], xmm1
  }
  PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 1078198280, &collectedEnts, &v74);
  if ( collectedEnts.count > 0x800 )
  {
    LODWORD(collectedScriptables) = collectedEnts.count;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 853, ASSERT_TYPE_ASSERT, "( collectEnts.count ) <= ( ( 2048 ) )", "collectEnts.count not in [0, MAX_GENTITIES]\n\t%u not in [0, %u]", collectedScriptables, 2048) )
      __debugbreak();
  }
  if ( WorldUpReferenceFrame::HasValidWorldUpInPs(EntityPlayerStateConst) )
  {
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v79, EntityPlayerStateConst, Handler);
    Bounds_Transform(&_RDI->r.box, &vec3_origin, &v79.m_axis, &rotatedBounds);
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+100h]
      vmovsd  xmm1, qword ptr [rdi+110h]
      vmovups xmmword ptr [rbp+3030h+rotatedBounds.midPoint], xmm0
      vmovsd  qword ptr [rbp+3030h+rotatedBounds.halfSize+4], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+3030h+rotatedBounds.midPoint]
    vmovss  xmm2, dword ptr [rbp+3030h+rotatedBounds.midPoint+4]
  }
  _RSI = &EntityPlayerStateConst->origin;
  __asm
  {
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  dword ptr [rsp+3130h+bounds.midPoint], xmm1
    vaddss  xmm0, xmm2, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rbp+3030h+rotatedBounds.midPoint+8]
    vmovss  dword ptr [rsp+3130h+bounds.midPoint+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmovss  xmm0, dword ptr [rbp+3030h+rotatedBounds.halfSize]
    vmovss  xmm1, dword ptr [rbp+3030h+rotatedBounds.halfSize+4]
    vmovss  dword ptr [rsp+3130h+bounds.halfSize], xmm0
    vmovss  xmm0, dword ptr [rbp+3030h+rotatedBounds.halfSize+8]
    vmovss  dword ptr [rsp+3130h+bounds.halfSize+8], xmm0
    vmovss  dword ptr [rsp+3130h+bounds.midPoint+8], xmm2
    vmovss  dword ptr [rsp+3130h+bounds.halfSize+4], xmm1
  }
  Bounds_ExpandToWidth(&bounds);
  _RBX = G_ActiveMP_GetPlayerVehicle(_RDI, &outPlayerLinked, &outPlayerPredicted);
  if ( !outPlayerLinked )
  {
    if ( collectedEnts.count )
      G_ActiveMP_TouchTriggers_Internal(_RDI, &bounds, touch, collectedEnts.count, 0);
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000
      vaddss  xmm1, xmm3, dword ptr [rsp+3130h+bounds.halfSize]
      vaddss  xmm0, xmm3, dword ptr [rsp+3130h+bounds.halfSize+4]
      vaddss  xmm2, xmm3, dword ptr [rsp+3130h+bounds.halfSize+8]
      vmovss  dword ptr [rsp+3130h+bounds.halfSize], xmm1
      vmovss  dword ptr [rsp+3130h+bounds.halfSize+4], xmm0
      vmovss  dword ptr [rsp+3130h+bounds.halfSize+8], xmm2
    }
    G_ActiveMP_TouchScriptableTriggers_Internal(_RDI, &bounds, v80, v74.count);
  }
  if ( _RBX )
  {
    __asm { vmovups xmm0, xmmword ptr [rbx+118h] }
    _R15 = DCONST_DVARFLT_g_vehicleTriggerBoxPad;
    __asm
    {
      vmovups xmmword ptr [rsp+3130h+bounds.midPoint], xmm0
      vmovsd  xmm1, qword ptr [rbx+128h]
      vmovsd  qword ptr [rsp+3130h+bounds.halfSize+4], xmm1
    }
    if ( !DCONST_DVARFLT_g_vehicleTriggerBoxPad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_vehicleTriggerBoxPad") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm
    {
      vmovss  xmm1, dword ptr [r15+28h]
      vaddss  xmm7, xmm1, dword ptr [rsp+3130h+bounds.halfSize]
      vaddss  xmm6, xmm1, dword ptr [rsp+3130h+bounds.halfSize+4]
      vaddss  xmm5, xmm1, dword ptr [rsp+3130h+bounds.halfSize+8]
      vmovss  xmm4, dword ptr [rsp+3130h+bounds.midPoint]
      vmovss  xmm3, dword ptr [rsp+3130h+bounds.midPoint+4]
      vmovss  xmm2, dword ptr [rsp+3130h+bounds.midPoint+8]
      vsubss  xmm0, xmm4, xmm7
      vsubss  xmm1, xmm3, xmm6
      vmovss  dword ptr [rbp+3030h+aabbMin], xmm0
      vmovss  dword ptr [rbp+3030h+aabbMin+4], xmm1
      vsubss  xmm0, xmm2, xmm5
      vaddss  xmm1, xmm7, xmm4
      vmovss  dword ptr [rbp+3030h+aabbMin+8], xmm0
      vmovss  dword ptr [rbp+3030h+aabbMax], xmm1
      vaddss  xmm0, xmm6, xmm3
      vaddss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rbp+3030h+aabbMax+4], xmm0
      vmovss  dword ptr [rbp+3030h+aabbMax+8], xmm1
      vmovss  dword ptr [rsp+3130h+bounds.halfSize], xmm7
      vmovss  dword ptr [rsp+3130h+bounds.halfSize+4], xmm6
      vmovss  dword ptr [rsp+3130h+bounds.halfSize+8], xmm5
    }
    PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 1078198280, &collectedEnts, NULL);
    if ( collectedEnts.count >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 894, ASSERT_TYPE_ASSERT, "(collectEnts.count < ( 2048 ))", (const char *)&queryFormat, "collectEnts.count < MAX_GENTITIES") )
      __debugbreak();
    if ( !outPlayerLinked )
    {
      _RSI = &EntityPlayerStateConst->vehicleState.origin;
      if ( !outPlayerPredicted )
        _RSI = &_RBX->r.currentOrigin;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vaddss  xmm1, xmm0, dword ptr [rbx+100h]
      vmovss  dword ptr [rsp+3130h+bounds.midPoint], xmm1
      vmovss  xmm2, dword ptr [rbx+104h]
      vaddss  xmm0, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+3130h+bounds.midPoint+4], xmm0
      vmovss  xmm1, dword ptr [rbx+108h]
      vaddss  xmm2, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+3130h+bounds.midPoint+8], xmm2
      vmovss  xmm0, dword ptr [rbx+10Ch]
      vmovss  dword ptr [rsp+3130h+bounds.halfSize], xmm0
      vmovss  xmm1, dword ptr [rbx+110h]
      vmovss  dword ptr [rsp+3130h+bounds.halfSize+4], xmm1
      vmovss  xmm0, dword ptr [rbx+114h]
      vmovss  dword ptr [rsp+3130h+bounds.halfSize+8], xmm0
    }
    Bounds_ExpandToWidth(&bounds);
    if ( collectedEnts.count )
      G_ActiveMP_TouchTriggers_Internal(_RDI, &bounds, touch, collectedEnts.count, 1);
  }
  Profile_EndInternal(NULL);
  _R11 = &v84;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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

void __fastcall G_ActiveMP_UpdateAttackerAccuracy(gentity_s *player, double _XMM1_8)
{
  int v3; 
  int v4; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  agent_t *agents; 
  const gentity_s *gentity; 
  AIAgentInterface *v8; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v10; 
  actor_s *actor; 
  __int64 v12; 
  EntHandle *v13; 
  int v14; 
  gclient_s *client; 
  const dvar_t *v16; 
  int integer; 
  int v18; 
  AIActorInterface v24; 
  AIAgentInterface v25; 
  AIAgentInterface *v26; 

  if ( SV_Loaded() && BG_AgentSystemEnabled() )
  {
    v3 = 0;
    v4 = 0;
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    agents = PersistentGlobalsMP->agents;
    if ( PersistentGlobalsMP->agentCount > 0 )
    {
      while ( agents->entityNum == 2047 || !G_IsEntityInUse(agents->entityNum) || !SV_Agent_IsScripted(agents->entityNum) )
      {
LABEL_37:
        ++v4;
        ++agents;
        if ( v4 >= PersistentGlobalsMP->agentCount )
          goto LABEL_38;
      }
      gentity = agents->gentity;
      AIActorInterface::AIActorInterface(&v24);
      AIAgentInterface::AIAgentInterface(&v25);
      v8 = NULL;
      v25.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v26 = NULL;
      if ( !gentity )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
          __debugbreak();
        v8 = v26;
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
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v25, ScriptedAgentInfo);
          v8 = &v25;
          v26 = &v25;
          v10 = &v25;
LABEL_27:
          v12 = v8->GetAI(v8);
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 169, ASSERT_TYPE_ASSERT, "(pInfo)", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          v13 = *(EntHandle **)(v12 + 8);
          if ( EntHandle::isDefined(v13 + 18) && EntHandle::ent(v13 + 18) == player && *(int *)(*(_QWORD *)v12 + 440i64) > 0 )
          {
            v14 = 250;
            if ( *(int *)(v12 + 176) > 250 )
              v14 = *(_DWORD *)(v12 + 176);
            if ( AICommonInterface::CanSeeSentient(v10, player->sentient, v14) )
              ++v3;
          }
          goto LABEL_37;
        }
        v8 = v26;
      }
      actor = gentity->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v24, gentity->actor);
        v8 = (AIAgentInterface *)&v24;
        v26 = (AIAgentInterface *)&v24;
      }
      v10 = v8;
      if ( !v8 )
        goto LABEL_37;
      goto LABEL_27;
    }
LABEL_38:
    client = player->client;
    if ( v3 > 1 )
    {
      client->attackerCount = v3;
      v16 = DVARINT_ai_accuracy_attackerCountMax;
      if ( !DVARINT_ai_accuracy_attackerCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracy_attackerCountMax") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      integer = v16->current.integer;
      if ( v3 < integer )
        integer = v3;
      v18 = integer - 1;
      if ( v18 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 193, ASSERT_TYPE_ASSERT, "(attackerCount > 0)", (const char *)&queryFormat, "attackerCount > 0") )
        __debugbreak();
      _RDI = DVARFLT_ai_accuracy_attackerCountDecrease;
      if ( !DVARFLT_ai_accuracy_attackerCountDecrease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracy_attackerCountDecrease") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h]; X }
      if ( v18 == 2 )
      {
        __asm { vmulss  xmm0, xmm0, xmm0 }
      }
      else
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ebx; Y
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      }
      _RAX = player->client;
      __asm { vmovss  dword ptr [rax+0B684h], xmm0 }
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
  GHandler *v25; 
  signed __int64 v26; 
  char *v27; 
  bool *isCustomizationAttachModel; 
  int v29; 
  char *v30; 
  signed __int64 v31; 
  signed __int64 v32; 
  scr_string_t *attachTagNames; 
  unsigned __int16 *attachModelNames; 
  unsigned int v35; 
  const char *v36; 
  char *v37; 
  int v38; 
  int v39; 
  const char *v40; 
  __int64 v41; 
  unsigned int v42; 
  int v43; 
  unsigned int Animset; 
  int result; 
  int v46; 
  signed __int64 v47; 
  __int64 v48; 
  signed __int64 v50; 
  __int64 v51; 
  characterInfo_t *inOutCharacterInfo; 
  unsigned int *p_attachModelIsOnBack; 
  Weapon r_heldWeapon; 
  Weapon r_turretWeapon; 
  Weapon r_accessoryWeapon; 
  Weapon r_executionWeapon; 
  Weapon r_stowedWeapon; 
  Weapon r_thrownWeapon; 

  _RDI = ent->client;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4556, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( _RDI->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4557, ASSERT_TYPE_ASSERT, "(client->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "client->sess.connected != CON_DISCONNECTED") )
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
  v46 = 0;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v8 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, model);
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && SV_TransientsMP_IsTransientModel(v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4581, ASSERT_TYPE_ASSERT, "(!SV_TransientsMP_IsTransientModel( modelName ))", "%s\n\tShould not be using transient models on the server", "!SV_TransientsMP_IsTransientModel( modelName )") )
    __debugbreak();
  _RDI->sess.cs.modelindex = ent->model;
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
      v14 = BG_Customization_IsFemaleCustomization(&_RDI->sess.cs.customization) && BG_Customization_IsCustomizationModel(CUSTOMIZATION_TYPE_BODY, v8);
      v6->isFemale = v14;
      v46 = 1;
      Core_strcpy(v6->model, 0x40ui64, v8);
      break;
    }
  }
  while ( v11 );
  _RDI->sess.cs.chargedWeaponInfo.weaponChargeAmount[0] = _RDI->ps.weapState[0].weaponChargeAmount;
  _RDI->sess.cs.chargedWeaponInfo.weaponChargeAmount[1] = _RDI->ps.weapState[1].weaponChargeAmount;
  v15 = BG_PlayerDualWielding(&_RDI->ps);
  _RDI->sess.cs.offhandShieldDeployed = 0;
  _RDI->sess.cs.dualWielding = v15 != 0;
  _RDI->sess.cs.isUsingWeaponAltMode = BG_UsingAlternate(&_RDI->ps);
  _RDI->sess.cs.usingNVG = BG_IsUsingNightVision(&_RDI->ps);
  _RDI->sess.cs.animLinkedToType = BG_GetLinkedToAnimType(&_RDI->ps);
  _RDI->sess.cs.isOnWall = BG_IsOnWallAnimFlagEnabled(&_RDI->ps);
  _RDI->sess.cs.isScriptedSceneAnim = BG_IsScriptedSceneAnimFlagEnabled(&_RDI->ps);
  _RDI->sess.cs.enableVehicleOccupancyAnimations = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->ps.otherFlags, ACTIVE, 0x1Bu);
  _RDI->sess.cs.carryObjectIndex = _RDI->ps.carryState.carryObjectIndex;
  _RDI->sess.cs.carryObjectFlags = _RDI->ps.carryState.flags;
  _RDI->sess.cs.isOnStairs = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->ps.pm_flags, ACTIVE, 8u);
  _RDI->sess.cs.isNearEnvironmentCollision = (_RDI->sess.cmd.buttons & 0x800000000i64) != 0;
  _RDI->sess.cs.skydiveAnimState = _RDI->ps.skydivePlayerState.animState;
  _RDI->sess.cs.execution = _RDI->ps.activeExecution;
  _RDI->sess.cs.executionStance = _RDI->ps.activeExecutionVictimStance;
  _RDI->sess.cs.executionStartTime = _RDI->ps.activeExecutionStartTime;
  _RDI->sess.cs.lastStandReviving = _RDI->ps.lastStandReviving;
  _RDI->sess.cs.lastStandSelfReviving = _RDI->ps.lastStandSelfReviving;
  _RDI->sess.cs.movingPlatform = _RDI->ps.movingPlatforms.m_movingPlatformEntity;
  EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(Instance, &_RDI->ps, &r_heldWeapon);
  if ( EquippedWeaponStateConst )
    LOBYTE(EquippedWeaponStateConst) = EquippedWeaponStateConst->hybridScope;
  _RDI->sess.cs.hybridScopeState = (char)EquippedWeaponStateConst;
  G_Door_UpdateClientInfo(_RDI);
  v17 = 0;
  isWeaponSmoking = _RDI->sess.cs.isWeaponSmoking;
  weaponShotCount = _RDI->sess.cs.weaponShotCount;
  p_weaponShotCount = &_RDI->ps.weapState[0].weaponShotCount;
  do
  {
    v21 = NULL;
    *weaponShotCount = *p_weaponShotCount;
    if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    {
      Handler = GHandler::getHandler();
      v21 = Handler->GetPlayerWeaponHeat(Handler, &_RDI->ps, &r_heldWeapon, (PlayerHandIndex)v17);
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
  *(_QWORD *)&_RDI->sess.cs.compressedAnimData.flags = 0i64;
  *(_QWORD *)&_RDI->sess.cs.compressedAnimData.distanceZ = 0i64;
  _RDI->sess.cs.compressedAnimData.endScriptAnimTableIndex = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->ps.pm_flags, ACTIVE, 5u) )
  {
    __asm { vmovups xmm0, xmmword ptr [rdi+3B4h] }
    endScriptAnimTableIndex = _RDI->ps.mantleState.compressedAnimData.endScriptAnimTableIndex;
    __asm { vmovups xmmword ptr [rdi+56E4h], xmm0 }
    _RDI->sess.cs.compressedAnimData.endScriptAnimTableIndex = endScriptAnimTableIndex;
  }
  _RDI->sess.cs.mantleSpeedAnimCond = _RDI->ps.mantleState.mantleSpeedAnimCond;
  v25 = GHandler::getHandler();
  BG_ContextMount_GetWorldmodelProperties(v25, &_RDI->ps, &_RDI->sess.cs.mount);
  _RDI->sess.cs.meleeChargeEnt = _RDI->ps.meleeChargeEnt;
  _RDI->sess.cs.meleeAnimDataPacked = BG_GetMeleeAnimConditionsPacked(&_RDI->ps);
  v6->meleeChargeEnt = _RDI->ps.meleeChargeEnt;
  v6->meleeAnimDataPacked = _RDI->sess.cs.meleeAnimDataPacked;
  G_ActiveMP_UpdateFootstepState(ent, v6);
  p_attachModelIsOnBack = &_RDI->sess.cs.attachModelIsOnBack;
  v26 = (char *)_RDI - (char *)ent;
  *p_attachModelIsOnBack = 0;
  v27 = inOutCharacterInfo->attachTagNames[0];
  v48 = 0i64;
  isCustomizationAttachModel = v6->isCustomizationAttachModel;
  v51 = 9i64;
  v29 = 1;
  v30 = inOutCharacterInfo->attachTagNames[0];
  v31 = v26 + 21328;
  v32 = v26 + 21364;
  v50 = v32;
  attachTagNames = ent->attachTagNames;
  attachModelNames = ent->attachModelNames;
  v47 = v31;
  do
  {
    isCustomizationAttachModel[696] = 1;
    *isCustomizationAttachModel = 0;
    if ( *attachModelNames )
    {
      v35 = *attachModelNames;
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v36 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v35);
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && SV_TransientsMP_IsTransientModel(v36) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4694, ASSERT_TYPE_ASSERT, "(!SV_TransientsMP_IsTransientModel( modelName ))", "%s\n\tShould not be using transient models on the server", "!SV_TransientsMP_IsTransientModel( modelName )") )
        __debugbreak();
      *(scr_string_t *)((char *)attachTagNames + v47) = *attachModelNames;
      v37 = v30 - 576;
      do
      {
        v38 = (unsigned __int8)v37[v36 - (v30 - 576)];
        v39 = (unsigned __int8)*v37 - v38;
        if ( v39 )
          break;
        ++v37;
      }
      while ( v38 );
      if ( v39 )
      {
        v46 = 1;
        Core_strcpy(v30 - 576, 0x40ui64, v36);
      }
      if ( !*attachTagNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4705, ASSERT_TYPE_ASSERT, "(ent->attachTagNames[i] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ent->attachTagNames[i] != NULL_SCR_STRING") )
        __debugbreak();
      v40 = SL_ConvertToString(*attachTagNames);
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      *(scr_string_t *)((char *)attachTagNames + v32) = (__int64)GConfigStrings::ms_gConfigStrings->GetClientTagIndex(GConfigStrings::ms_gConfigStrings, v40);
      if ( strcmp(v30, v40) )
      {
        v46 = 1;
        Core_strcpy(v30, 0x40ui64, v40);
      }
      if ( ent == (gentity_s *)-1448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v41 = v48 >> 5;
      if ( (v29 & ent->attachWeaponTagNames[v41 + 4]) != 0 )
      {
        if ( !p_attachModelIsOnBack && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        p_attachModelIsOnBack[v41] |= v29;
      }
      v32 = v50;
      v31 = v47;
    }
    else
    {
      *(v27 - 576) = 0;
      *v27 = 0;
      *(scr_string_t *)((char *)attachTagNames + v31) = 0;
      *(scr_string_t *)((char *)attachTagNames + v32) = 0;
    }
    ++v48;
    v30 += 64;
    v29 = __ROL4__(v29, 1);
    ++attachModelNames;
    ++attachTagNames;
    ++isCustomizationAttachModel;
    v27 += 64;
    --v51;
  }
  while ( v51 );
  v42 = ent->s.animInfo.animData & 1;
  if ( inOutCharacterInfo->usingAnimState == v42 )
  {
    v43 = v46;
  }
  else
  {
    v43 = 1;
    inOutCharacterInfo->usingAnimState = v42;
    inOutCharacterInfo->animTreeDirty = 1;
  }
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(&ent->s);
    v43 |= BG_PlayersASM_ResetAnimTree(Animset, G_Main_HunkAllocXAnimServer, MOVEMENT, inOutCharacterInfo);
  }
  result = G_GameInterface_ActiveMP_UpdateClientInfo(ent);
  if ( v43 || result )
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
  __int64 v9; 
  __int64 v10; 
  const dvar_t *v39; 
  const dvar_t *v40; 
  int integer; 
  entity_event_t updated; 
  bool v44; 
  FootstepMoveType_t v45; 
  bool canEmitFootsteps; 
  __int16 EntityIndex; 
  FootstepMoveType_t outMoveType; 
  float outStairsAscentRatio; 
  EquipmentMoveType_t outEquipmentType; 
  float outAmplitudeScale; 
  float outFrequencyScale; 
  __int64 v57; 
  GPMove v58; 
  void *retaddr; 

  _RAX = &retaddr;
  v57 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  GPMove::GPMove(&v58);
  _RSI = ent->client;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4491, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( _RSI->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4492, ASSERT_TYPE_ASSERT, "(client->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 4494, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v58.ps = &_RSI->ps;
  v58.localClientNum = LOCAL_CLIENT_INVALID;
  v58.ground = &_RSI->playerGround;
  v58.groundPersistent = NULL;
  _RSI->sess.cs.clothType = _RSI->ps.clothType;
  _RAX = &_RSI->sess.cmd;
  _RCX = &v58.cmd;
  v9 = 2i64;
  v10 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    --v10;
  }
  while ( v10 );
  _RCX->buttons = _RAX->buttons;
  _RAX = &_RSI->sess.oldcmd;
  _RCX = &v58.oldcmd;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    --v9;
  }
  while ( v9 );
  _RCX->buttons = _RAX->buttons;
  _RAX = v58.ps;
  __asm
  {
    vmovss  xmm2, dword ptr [rax+40h]
    vmovss  xmm0, dword ptr [rax+3Ch]
    vmovss  xmm3, dword ptr [rax+44h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vmovss  [rsp+498h+var_438.baseclass_0.speed], xmm6
  }
  _RSI->sess.cs.canEmitFootsteps = 0;
  if ( PM_ShouldMakeFootsteps(&v58) )
  {
    _RSI->sess.cs.canEmitFootsteps = 1;
    ci->lastCanEmitFootstepTime = level.time;
  }
  else
  {
    v39 = DCONST_DVARINT_g_canEmitFootstepTimeout;
    if ( !DCONST_DVARINT_g_canEmitFootstepTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_canEmitFootstepTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    if ( level.time - ci->lastCanEmitFootstepTime <= v39->current.integer )
      _RSI->sess.cs.canEmitFootsteps = 1;
  }
  v40 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  integer = v40->current.integer;
  if ( v58.cmd.commandTime - v58.oldcmd.commandTime < integer )
    integer = v58.cmd.commandTime - v58.oldcmd.commandTime;
  __asm { vmovaps xmm2, xmm6; speed }
  updated = PM_Footstep_UpdateMoveType(integer, &v58, *(const float *)&_XMM2, &_RSI->footstepWeight);
  v44 = PM_MoveTypesFromFootstepType(updated, &outMoveType, &outEquipmentType);
  v45 = FOOTSTEP_MOVE_TYPE_WALK;
  if ( v44 )
    v45 = outMoveType;
  _RSI->sess.cs.footstepMoveType = v45;
  __asm { vmovss  xmm6, dword ptr [rsi+0FC4Ch] }
  canEmitFootsteps = _RSI->sess.cs.canEmitFootsteps;
  EntityIndex = G_GetEntityIndex(ent);
  __asm { vmovaps xmm3, xmm6; moveTypeWeight }
  G_Footstep_DebugMoveType(EntityIndex, &ent->r.currentOrigin, canEmitFootsteps, *(const float *)&_XMM3, updated);
  PM_Slope_GetBobCycleScale(&v58, &outStairsAscentRatio, &outFrequencyScale, &outAmplitudeScale);
  __asm { vmovss  xmm1, [rsp+498h+outStairsAscentRatio]; stairsAscentRatio }
  _RSI->sess.cs.footstepActionType = PM_GetFootstepActionType(&v58, *(float *)&_XMM1);
  GPMove::~GPMove(&v58);
  __asm { vmovaps xmm6, [rsp+498h+var_38] }
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
  unsigned __int64 buttonsSinceLastFrame; 
  char v27; 
  __int64 v70; 
  const char *debugTaskName; 
  void (__fastcall *v72)(gentity_s *, GClientTaskQueue *); 
  int taskData[4]; 

  _RBX = client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2060, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( BG_IsLocationSelectorActive(Instance, &_RBX->ps) )
  {
    __asm
    {
      vmovss  xmm5, cs:__real@3b808081
      vmovss  xmm4, cs:__real@3f008081
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm5
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm3, xmm1, xmm4
      vmulss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbx+5DFCh], xmm3
      vmovss  xmm3, cs:__real@4334b4b5
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rbx+5E00h], xmm2
      vmovss  xmm2, cs:__real@3fb4b4b5
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    buttonsSinceLastFrame = _RBX->buttonsSinceLastFrame;
    __asm
    {
      vmulss  xmm1, xmm0, xmm2
      vaddss  xmm0, xmm1, xmm3
      vmovss  dword ptr [rbx+5E04h], xmm0
    }
    if ( (buttonsSinceLastFrame & 0x8000000000004000ui64) != 0 )
    {
      v27 = _RBX->ps.locationSelectionInfo & 0xE0;
      __asm
      {
        vmovaps [rsp+88h+var_28], xmm6
        vmovaps [rsp+88h+var_38], xmm7
        vxorps  xmm7, xmm7, xmm7
      }
      if ( v27 == (char)0x80 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm5
          vcvtsi2ss xmm2, xmm2, ecx
          vaddss  xmm2, xmm2, xmm1
          vmulss  xmm0, xmm2, cs:__real@3dcccccd
          vaddss  xmm6, xmm0, cs:__real@3d4d9a67
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm2, xmm0, xmm5
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, edx
          vaddss  xmm2, xmm2, xmm1
          vmulss  xmm0, xmm2, cs:__real@3dcccccd
          vaddss  xmm5, xmm0, cs:__real@3d4d9a67
        }
      }
      else
      {
        _EAX = ucmd->selectedAngle;
        __asm { vmovd   xmm0, eax }
        _EAX = ucmd->selectedLoc[0];
        __asm
        {
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm1, xmm0, xmm2
          vmovd   xmm0, eax
        }
        _EAX = ucmd->selectedLoc[1];
        __asm
        {
          vcvtdq2ps xmm0, xmm0
          vaddss  xmm7, xmm1, xmm3
          vmulss  xmm1, xmm0, xmm5
          vmovd   xmm0, eax
          vcvtdq2ps xmm0, xmm0
          vaddss  xmm6, xmm1, xmm4
          vmulss  xmm1, xmm0, xmm5
          vaddss  xmm5, xmm1, xmm4
        }
      }
      __asm
      {
        vmulss  xmm4, xmm6, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassMapWorldSize; level_locals_t level
        vmulss  xmm0, xmm4, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassNorth+4; level_locals_t level
        vaddss  xmm2, xmm0, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassMapUpperLeft; level_locals_t level
        vmulss  xmm6, xmm5, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassMapWorldSize+4; level_locals_t level
        vmulss  xmm1, xmm6, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassNorth; level_locals_t level
        vsubss  xmm0, xmm2, xmm1
        vmulss  xmm2, xmm4, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassNorth; level_locals_t level
        vmovss  xmm1, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassMapUpperLeft+4; level_locals_t level
        vmovss  [rsp+88h+taskData], xmm0
        vmulss  xmm0, xmm6, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassNorth+4; level_locals_t level
        vsubss  xmm3, xmm1, xmm2
        vsubss  xmm2, xmm3, xmm0
        vmovss  [rsp+88h+var_54], xmm2
      }
      *(double *)&_XMM0 = vectoyaw(&level.compassNorth);
      __asm { vaddss  xmm0, xmm0, xmm7; angle }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      v70 = _RBX->buttonsSinceLastFrame;
      debugTaskName = "LocationAltSelectionConfirm";
      if ( v70 >= 0 )
        debugTaskName = "LocationSelectionConfirm";
      v72 = G_ActiveMP_UpdateLocationAltSelectorConfirmCallback;
      if ( v70 >= 0 )
        v72 = G_ActiveMP_UpdateLocationSelectorConfirmCallback;
      __asm { vmovss  [rsp+88h+var_50], xmm0 }
      GClientTaskQueue::AddTaskInternal(taskQueue, v72, taskData, 0xCu, 4u, debugTaskName);
      __asm
      {
        vmovaps xmm7, [rsp+88h+var_38]
        vmovaps xmm6, [rsp+88h+var_28]
      }
    }
    else if ( (buttonsSinceLastFrame & 0x8000) != 0 )
    {
      GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_UpdateLocationSelectorCancelCallback, NULL, 0, 0, "LocationSelectionCancel");
    }
    _RBX->buttons &= 0x80000000004C0ui64;
    _RBX->latched_buttons &= 0x80000000004C0ui64;
    _RBX->buttonsSinceLastFrame &= 0x80000000004C0ui64;
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
  scrContext_t *v10; 
  scrContext_t *v12; 
  float value[4]; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2023, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !outputQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2024, ASSERT_TYPE_ASSERT, "( outputQueue )", (const char *)&queryFormat, "outputQueue") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  _RDI = GClientTaskQueue::GetParameterInternal(outputQueue, 0xCu, 4u);
  __asm
  {
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+68h+var_34], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+68h+var_30], xmm1
    vmovss  [rsp+68h+value], xmm0
  }
  v10 = ScriptContext_Server();
  __asm { vmovss  xmm1, dword ptr [rdi+8]; value }
  v12 = v10;
  Scr_AddFloat(v10, *(float *)&_XMM1);
  Scr_AddVector(v12, value);
  GScr_Notify(playerEnt, scrNotify, 2u);
}

/*
==============
G_ActiveMP_UpdatePlayerEntityAndCharacter
==============
*/
void G_ActiveMP_UpdatePlayerEntityAndCharacter(const int gameTime, characterInfo_t *ci, gentity_s *playerEnt)
{
  float v10; 
  float v11; 
  float v12; 
  int linkEnt; 
  GHandler *Handler; 
  float v21; 
  vec3_t outLinkAngles; 
  vec3_t outLinkPos; 

  _RBX = playerEnt;
  _RDI = ci;
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2165, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !_RBX->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2166, ASSERT_TYPE_ASSERT, "( playerEnt->client )", (const char *)&queryFormat, "playerEnt->client") )
    __debugbreak();
  _RSI = _RBX->client;
  SV_Profile_BeginEvent(SVPROF_CLIENT_ENTITY);
  G_Active_PlayerStateToEntityStateExtrapolate(&_RSI->ps, &_RBX->s, gameTime, 1);
  SV_Profile_EndEvent(SVPROF_CLIENT_ENTITY);
  __asm { vmovss  xmm0, dword ptr [rdi+0AD0h]; pitch }
  _RBX->s.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
  __asm { vmovss  xmm0, dword ptr [rdi+0AD4h]; pitch }
  _RBX->s.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
  G_ActiveMP_PlayerStateToCharacterInfo(&_RSI->ps, &_RBX->s, _RDI);
  _R14 = (unsigned int *)&_RBX->r.currentOrigin;
  if ( _RBX == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)_RBX + 123, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( _RBX->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
  {
    v10 = _RBX->s.lerp.pos.trBase.v[1];
    v11 = _RBX->s.lerp.pos.trBase.v[0];
    v12 = _RBX->s.lerp.pos.trBase.v[2];
    *(_QWORD *)outLinkAngles.v = &_RBX->r.currentOrigin;
    LODWORD(_RBX->r.currentOrigin.v[2]) = LODWORD(v10) ^ s_trbase_aab_Z ^ LODWORD(v12);
    LODWORD(_RBX->r.currentOrigin.v[1]) = LODWORD(v11) ^ LODWORD(v10) ^ s_trbase_aab_Y;
    *_R14 = LODWORD(v11) ^ ~s_trbase_aab_X;
    __asm { vmovss  xmm0, dword ptr [r14] }
    memset(&outLinkAngles, 0, 8ui64);
    __asm { vmovss  dword ptr [rsp+0A8h+outLinkAngles], xmm0 }
    if ( (LODWORD(outLinkAngles.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_35;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  dword ptr [rsp+0A8h+outLinkAngles], xmm0
    }
    if ( (LODWORD(outLinkAngles.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_35;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vmovss  dword ptr [rsp+0A8h+outLinkAngles], xmm0
    }
    if ( (LODWORD(outLinkAngles.v[0]) & 0x7F800000) == 2139095040 )
    {
LABEL_35:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    *_R14 = LODWORD(_RBX->s.lerp.pos.trBase.v[0]);
    _RBX->r.currentOrigin.v[1] = _RBX->s.lerp.pos.trBase.v[1];
    _RBX->r.currentOrigin.v[2] = _RBX->s.lerp.pos.trBase.v[2];
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi+0AA84h]
    vmovups xmmword ptr [rbx+100h], xmm0
    vmovsd  xmm1, qword ptr [rsi+0AA94h]
    vmovsd  qword ptr [rbx+110h], xmm1
  }
  SV_LinkEntity(_RBX);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->ps.otherFlags, ACTIVE, 0x1Bu) )
  {
    if ( _RSI->ps.linkEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2189, ASSERT_TYPE_ASSERT, "( client->ps.linkEnt ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "client->ps.linkEnt", "ENTITYNUM_NONE", 2047, 2047) )
      __debugbreak();
    linkEnt = _RSI->ps.linkEnt;
    Handler = GHandler::getHandler();
    if ( !BG_VehicleOccupancy_GetLinkTransform(Handler, linkEnt, &outLinkPos, &outLinkAngles) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2193, ASSERT_TYPE_ASSERT, "(BG_VehicleOccupancy_GetLinkTransform( GHandler::getHandler(), client->ps.linkEnt, linkPos, linkAngles ))", (const char *)&queryFormat, "BG_VehicleOccupancy_GetLinkTransform( GHandler::getHandler(), client->ps.linkEnt, linkPos, linkAngles )") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rsp+0A8h+outLinkAngles+4] }
    _RBX->r.currentAngles.v[0] = 0.0;
    _RBX->r.currentAngles.v[2] = 0.0;
    __asm { vmovss  dword ptr [rbx+140h], xmm0 }
  }
  else if ( !BG_IsTurretActive(&_RSI->ps) )
  {
    _RBX->r.currentAngles.v[0] = 0.0;
    _RBX->r.currentAngles.v[2] = 0.0;
    if ( (_RSI->ps.linkFlags.m_flags[0] & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->ps.otherFlags, ACTIVE, 1u) )
    {
      v21 = _RSI->ps.linkWeaponAngles.v[1];
    }
    else
    {
      if ( _RSI->ps.vehicleState.entity != 2047 )
        goto LABEL_32;
      v21 = _RSI->ps.viewangles.v[1];
    }
    _RBX->r.currentAngles.v[1] = v21;
  }
LABEL_32:
  *_R14 = LODWORD(_RSI->ps.origin.v[0]);
  _RBX->r.currentOrigin.v[1] = _RSI->ps.origin.v[1];
  _RBX->r.currentOrigin.v[2] = _RSI->ps.origin.v[2];
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
  unsigned int v4; 
  unsigned int cursorHintEntIndex; 
  gentity_s *v6; 
  GWeaponMap *Instance; 
  unsigned __int16 weaponIdx; 
  const dvar_t *v13; 
  int v14; 
  unsigned int v15; 
  __int64 v17; 
  EntHandle *droppedWeaponCue; 
  __int64 v21; 
  unsigned __int16 number; 
  __int64 v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned __int16 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int v41; 
  unsigned int *v42; 
  __int64 v44; 
  gentity_s *v45; 
  GWeaponMap *v46; 
  const Weapon *Weapon; 
  int v49; 
  const dvar_t *v51; 
  __int64 v54; 
  const char *v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  unsigned int _First[32]; 
  Weapon Buf1[24]; 

  _RBP = ps;
  v4 = clientNum;
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2852, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2853, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v4 >= level.maxclients )
  {
    LODWORD(v58) = level.maxclients;
    LODWORD(v56) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2804, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v56, v58) )
      __debugbreak();
  }
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2805, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RBP->cursorHint != HINT_WEAPON )
    goto LABEL_21;
  if ( _RBP->cursorHintClass )
    goto LABEL_21;
  cursorHintEntIndex = _RBP->cursorHintEntIndex;
  if ( cursorHintEntIndex == 2047 )
    goto LABEL_21;
  if ( cursorHintEntIndex >= 0x800 )
  {
    LODWORD(v58) = 2048;
    LODWORD(v56) = _RBP->cursorHintEntIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2809, ASSERT_TYPE_ASSERT, "(unsigned)( ps->cursorHintEntIndex ) < (unsigned)( ( 2048 ) )", "ps->cursorHintEntIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v56, v58) )
      __debugbreak();
  }
  if ( !G_IsEntityInUse(_RBP->cursorHintEntIndex) )
  {
LABEL_21:
    _RAX = &NULL_WEAPON;
  }
  else
  {
    v6 = &g_entities[_RBP->cursorHintEntIndex];
    Instance = GWeaponMap::GetInstance();
    _RAX = (Weapon *)BG_GetWeaponForEntity(Instance, &v6->s);
  }
  weaponIdx = _RAX->weaponIdx;
  if ( _RAX->weaponIdx )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rsp+6C8h+Buf1], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups [rsp+6C8h+var_5D8], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  [rsp+6C8h+var_5C8], xmm0
    }
    *(_DWORD *)&Buf1[0].weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  }
  v13 = DVARINT_g_speculativeWeaponLoadCount;
  v14 = weaponIdx != 0;
  if ( !DVARINT_g_speculativeWeaponLoadCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_speculativeWeaponLoadCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v15 = v14;
  if ( v14 < v13->current.integer )
  {
    _RBX = DVARFLT_g_speculativeWeaponLoadDistance;
    v17 = 0i64;
    __asm { vmovaps [rsp+6C8h+var_48], xmm6 }
    if ( !DVARFLT_g_speculativeWeaponLoadDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_speculativeWeaponLoadDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm6, xmm0, xmm0
    }
    droppedWeaponCue = level.droppedWeaponCue;
    v21 = 32i64;
    do
    {
      number = droppedWeaponCue->number;
      if ( droppedWeaponCue->number )
      {
        v23 = number;
        v24 = number - 1;
        if ( v24 >= 0x800 )
        {
          LODWORD(v58) = 2048;
          LODWORD(v56) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v56, v58) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v25 = v23 - 1;
        if ( g_entities[v25].r.isInUse != g_entityIsInUse[v25] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v25] )
        {
          LODWORD(v58) = droppedWeaponCue->number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v58) )
            __debugbreak();
        }
        v26 = droppedWeaponCue->number;
        if ( droppedWeaponCue->number )
        {
          if ( (unsigned int)v26 - 1 >= 0x7FF )
          {
            LODWORD(v58) = 2047;
            LODWORD(v56) = v26 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v56, v58) )
              __debugbreak();
          }
          v27 = droppedWeaponCue->number;
          if ( (unsigned int)(v27 - 1) >= 0x800 )
          {
            LODWORD(v58) = 2048;
            LODWORD(v56) = v27 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v56, v58) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v28 = v27 - 1;
          if ( g_entities[v28].r.isInUse != g_entityIsInUse[v28] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v28] )
          {
            LODWORD(v58) = droppedWeaponCue->number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v58) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+30h]
            vmovss  xmm1, dword ptr [rbp+34h]
            vsubss  xmm3, xmm0, dword ptr [rcx+rax-480h]
            vsubss  xmm2, xmm1, dword ptr [rcx+rax-47Ch]
            vmovss  xmm0, dword ptr [rbp+38h]
            vsubss  xmm4, xmm0, dword ptr [rcx+rax-478h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, xmm6
          }
          if ( !is_mul_ok(0x5B0ui64, droppedWeaponCue->number) )
          {
            _First[v17] = g_entities[droppedWeaponCue->number - 1].s.number;
            v17 = (unsigned int)(v17 + 1);
          }
        }
      }
      ++droppedWeaponCue;
      --v21;
    }
    while ( v21 );
    __asm { vmovaps xmm6, [rsp+6C8h+var_48] }
    v15 = v14;
    v4 = clientNum;
    if ( (_DWORD)v17 )
    {
      std::_Sort_unchecked<unsigned int *,CompareDroppedWeaponDistance>(_First, &_First[v17], (unsigned int)v17, (CompareDroppedWeaponDistance)_RBP);
      v41 = 0;
      v42 = _First;
      _RBP = &Buf1[v14];
      while ( 1 )
      {
        v44 = *v42;
        if ( (unsigned int)v44 >= 0x800 )
        {
          LODWORD(v58) = 2048;
          LODWORD(v56) = *v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2898, ASSERT_TYPE_ASSERT, "(unsigned)( droppedEntIndex ) < (unsigned)( ( 2048 ) )", "droppedEntIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v56, v58) )
            __debugbreak();
          LODWORD(v59) = 2048;
          LODWORD(v57) = v44;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v57, v59) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[(int)v44].r.isInUse != g_entityIsInUse[(int)v44] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[(int)v44] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 2899, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( droppedEntIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( droppedEntIndex )") )
          __debugbreak();
        v45 = &g_entities[v44];
        v46 = GWeaponMap::GetInstance();
        if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        Weapon = BgWeaponMap::GetWeapon(v46, v45->s.weaponHandle);
        _RDI = Weapon;
        if ( Weapon->weaponIdx && BG_WeaponHasStreamedModels(Weapon) )
        {
          v49 = 0;
          if ( v15 )
          {
            while ( memcmp_0(&Buf1[v49], _RDI, 0x3Cui64) )
            {
              if ( ++v49 >= v15 )
                goto LABEL_91;
            }
          }
          else
          {
LABEL_91:
            __asm { vmovups ymm0, ymmword ptr [rdi] }
            v51 = DVARINT_g_speculativeWeaponLoadCount;
            ++v15;
            __asm
            {
              vmovups ymmword ptr [rbp+0], ymm0
              vmovups xmm1, xmmword ptr [rdi+20h]
              vmovups xmmword ptr [rbp+20h], xmm1
              vmovsd  xmm0, qword ptr [rdi+30h]
              vmovsd  qword ptr [rbp+30h], xmm0
            }
            *(_DWORD *)&_RBP->weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
            ++_RBP;
            if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_speculativeWeaponLoadCount") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v51);
            if ( v15 == v51->current.integer )
            {
LABEL_96:
              v4 = clientNum;
              break;
            }
          }
        }
        ++v41;
        ++v42;
        if ( v41 >= (unsigned int)v17 )
          goto LABEL_96;
      }
    }
  }
  v54 = G_WeaponStreaming_SetPickupViewWeapons(v4, Buf1, v15);
  v55 = j_va("G_ActiveMP_UpdateSpeculativeWeaponStreaming expected %u stream requests, but could only complete %u.\n", v15, v54);
  G_ActiveMP_SpectatorClientEndFrame_ValidateStreaming(v4, v15, v54, v55);
}

/*
==============
G_ActiveMP_UpdateThirdPersonMode
==============
*/
void G_ActiveMP_UpdateThirdPersonMode(gclient_s *client, const vec3_t *viewAngles)
{
  const char *v15; 
  GWeaponMap *Instance; 
  int clientNum; 
  int v67; 
  int v80; 
  vec3_t end; 
  vec3_t start; 
  vec3_t outOrigin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  vec3_t vec; 
  Bounds bounds; 
  trace_t results; 
  char v155; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
  }
  _RBX = &client->ps;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1320, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1321, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
    __debugbreak();
  AnglesToAxis(viewAngles, &axis);
  G_Client_GetViewOrigin(_RBX, &outOrigin);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+1C0h+outOrigin]
    vmovss  xmm1, cs:__real@41200000
    vmovsd  qword ptr [rsp+1C0h+end], xmm0
    vmovups xmm0, cs:__xmm@41200000000000000000000000000000
    vmovups xmmword ptr [rbp+0C0h+bounds.midPoint], xmm0
    vmovss  dword ptr [rbp+0C0h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+0C0h+bounds.halfSize+8], xmm1
  }
  end.v[2] = outOrigin.v[2];
  if ( BG_IsTurretActive(_RBX) )
  {
    _RDI = DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds;
    if ( DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds )
      goto LABEL_14;
    v15 = "camera_thirdPersonOffsetTurretAds";
  }
  else
  {
    _RDI = DCONST_DVARVEC3_camera_thirdPersonOffsetAds;
    if ( DCONST_DVARVEC3_camera_thirdPersonOffsetAds )
      goto LABEL_14;
    v15 = "camera_thirdPersonOffsetAds";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v15) )
    __debugbreak();
LABEL_14:
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm7, dword ptr [rdi+30h]
    vmovss  xmm6, dword ptr [rdi+2Ch]
    vmovss  xmm11, dword ptr [rdi+28h]
  }
  Instance = GWeaponMap::GetInstance();
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  if ( BG_UsingSniperScope(Instance, _RBX) )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
    }
  }
  else
  {
    __asm { vucomiss xmm10, dword ptr [rbx+730h] }
    if ( (_RBX[1].weapCommon.ammoNotInClip[11].ammoType.weapon.attachmentVariationIndices[5] & 2) == 0 && (_RBX[1].weapCommon.ammoNotInClip[11].ammoType.weapon.weaponAttachments[10] & 2) != 0 )
    {
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 223, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      _RBX->otherFlags.m_flags[1] ^= 0x40u;
    }
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2214, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, GameModeFlagValues::ms_mpValue, 0x26u) )
    __asm { vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000 }
  _RDI = DCONST_DVARVEC3_camera_thirdPersonOffset;
  if ( !DCONST_DVARVEC3_camera_thirdPersonOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPersonOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vsubss  xmm0, xmm6, dword ptr [rdi+2Ch]
    vsubss  xmm2, xmm7, dword ptr [rdi+30h]
    vmovss  xmm9, dword ptr [rdi+28h]
    vmovss  xmm8, dword ptr [rbx+730h]
  }
  clientNum = _RBX->clientNum;
  __asm
  {
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm4, xmm1, dword ptr [rdi+2Ch]
    vmulss  xmm0, xmm2, xmm8
    vaddss  xmm5, xmm0, dword ptr [rdi+30h]
    vmulss  xmm0, xmm4, dword ptr [rbp+0C0h+axis+0Ch]
    vaddss  xmm3, xmm0, dword ptr [rsp+1C0h+end]
    vmulss  xmm2, xmm5, dword ptr [rbp+0C0h+axis+18h]
    vmulss  xmm0, xmm5, dword ptr [rbp+0C0h+axis+1Ch]
    vaddss  xmm1, xmm3, xmm2
    vmulss  xmm2, xmm4, dword ptr [rbp+0C0h+axis+10h]
    vaddss  xmm3, xmm2, dword ptr [rsp+1C0h+end+4]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm4, dword ptr [rbp+0C0h+axis+14h]
    vaddss  xmm3, xmm0, dword ptr [rsp+1C0h+end+8]
    vmovss  dword ptr [rsp+1C0h+end], xmm1
    vmulss  xmm1, xmm5, dword ptr [rbp+0C0h+axis+20h]
    vaddss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rsp+1C0h+end+8], xmm0
    vmovss  dword ptr [rsp+1C0h+end+4], xmm2
  }
  G_Main_TraceCapsule(&results, &outOrigin, &end, &bounds, clientNum, 33636369);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+end]
    vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+outOrigin]
    vmovss  xmm5, [rbp+0C0h+results.fraction]
    vmovss  xmm0, dword ptr [rsp+1C0h+end+4]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm7, xmm1, dword ptr [rsp+1C0h+outOrigin]
    vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+outOrigin+4]
    vmovss  xmm0, dword ptr [rsp+1C0h+end+8]
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+outOrigin+8]
    vaddss  xmm6, xmm2, dword ptr [rsp+1C0h+outOrigin+4]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm5, xmm2, dword ptr [rsp+1C0h+outOrigin+8]
    vunpcklps xmm0, xmm7, xmm6
    vmovsd  qword ptr [rsp+1C0h+end], xmm0
    vmovsd  qword ptr [rsp+1C0h+start], xmm0
    vsubss  xmm0, xmm11, xmm9
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm3, xmm1, xmm9
    vmulss  xmm0, xmm3, dword ptr [rbp+0C0h+axis]
    vaddss  xmm1, xmm0, xmm7
    vmulss  xmm0, xmm3, dword ptr [rbp+0C0h+axis+4]
    vmovss  dword ptr [rsp+1C0h+end], xmm1
    vaddss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm3, dword ptr [rbp+0C0h+axis+8]
    vmovss  dword ptr [rsp+1C0h+end+8], xmm5
    vmovss  dword ptr [rsp+1C0h+end+4], xmm1
    vaddss  xmm1, xmm0, xmm5
  }
  start.v[2] = end.v[2];
  v67 = _RBX->clientNum;
  __asm { vmovss  dword ptr [rsp+1C0h+end+8], xmm1 }
  G_Main_TraceCapsule(&results, &start, &end, &bounds, v67, 33636369);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+end]
    vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+start]
    vmovss  xmm5, [rbp+0C0h+results.fraction]
    vmovss  xmm0, dword ptr [rsp+1C0h+end+4]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm7, xmm1, dword ptr [rsp+1C0h+start]
    vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+start+4]
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rsp+1C0h+end], xmm7
    vaddss  xmm6, xmm2, dword ptr [rsp+1C0h+start+4]
    vmovss  xmm3, cs:__real@46000000
    vmovss  xmm0, dword ptr [rsp+1C0h+end+8]
    vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+start+8]
  }
  v80 = _RBX->clientNum;
  __asm
  {
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm5, xmm2, dword ptr [rsp+1C0h+start+8]
    vmulss  xmm1, xmm3, dword ptr [rbp+0C0h+axis]
    vaddss  xmm2, xmm1, xmm7
    vmulss  xmm1, xmm3, dword ptr [rbp+0C0h+axis+4]
    vmovss  dword ptr [rsp+1C0h+start], xmm2
    vaddss  xmm2, xmm1, xmm6
    vmulss  xmm1, xmm3, dword ptr [rbp+0C0h+axis+8]
    vmovss  dword ptr [rsp+1C0h+start+4], xmm2
    vaddss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rsp+1C0h+start+8], xmm2
    vmovss  dword ptr [rsp+1C0h+end+4], xmm6
    vmovss  dword ptr [rsp+1C0h+end+8], xmm5
  }
  G_Main_LocationalTrace(&results, &end, &start, v80, 41969969, NULL);
  __asm
  {
    vmovss  xmm6, [rbp+0C0h+results.fraction]
    vmovss  xmm0, dword ptr [rsp+1C0h+start]
    vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+end]
    vmovss  xmm0, dword ptr [rsp+1C0h+start+4]
    vmulss  xmm1, xmm1, xmm6
    vaddss  xmm7, xmm1, dword ptr [rsp+1C0h+end]
    vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+end+4]
    vmovss  xmm0, dword ptr [rsp+1C0h+start+8]
    vsubss  xmm4, xmm7, dword ptr [rsp+1C0h+outOrigin]
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+end+8]
    vaddss  xmm5, xmm2, dword ptr [rsp+1C0h+end+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsp+1C0h+end+8]
    vsubss  xmm6, xmm3, dword ptr [rsp+1C0h+outOrigin+8]
    vmulss  xmm0, xmm4, xmm4
    vmovss  dword ptr [rsp+1C0h+start+4], xmm5
    vsubss  xmm5, xmm5, dword ptr [rsp+1C0h+outOrigin+4]
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rsp+1C0h+start+8], xmm3
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm0
    vmulss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rbp+0C0h+vec], xmm0
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rbp+0C0h+vec+8], xmm0
    vmovss  dword ptr [rsp+1C0h+start], xmm7
    vmovss  dword ptr [rbp+0C0h+vec+4], xmm1
  }
  vectoangles(&vec, &angles);
  AnglesSubtract(&angles, viewAngles, &angles);
  __asm
  {
    vmovss  xmm2, cs:__real@41f00000; max
    vmovss  xmm1, cs:__real@c1f00000; min
    vmovss  xmm0, dword ptr [rsp+1C0h+angles]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@41f00000; max
    vmovss  xmm1, cs:__real@c1f00000; min
    vmovss  dword ptr [rsp+1C0h+angles], xmm0
    vmovss  xmm0, dword ptr [rsp+1C0h+angles+4]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+1C0h+angles]
    vaddss  xmm2, xmm1, dword ptr [r15]
    vmulss  xmm4, xmm2, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm3, xmm9, xmm2, 1
    vmovaps xmm8, xmm0
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, cs:__real@43b40000
    vmovss  dword ptr [rbx+5E4Ch], xmm0
    vaddss  xmm1, xmm8, dword ptr [r15+4]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm2
    vroundss xmm3, xmm9, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rbx+5E50h], xmm1
  }
  _R11 = &v155;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
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
  __int16 groundRefEnt; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v13; 
  int v19; 
  int v20; 
  int v21; 
  vec3_t viewAngles; 
  vec3_t angles; 
  vec3_t localGunAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  _RSI = viewValues;
  _RDI = client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1683, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm1, xmm0, dword ptr [rdi+1D8h]
    vmovss  xmm2, dword ptr [rsi+4]
    vaddss  xmm0, xmm2, dword ptr [rdi+1DCh]
    vmovss  dword ptr [rsp+130h+angles], xmm1
    vmovss  xmm1, dword ptr [rsi+8]
    vaddss  xmm2, xmm1, dword ptr [rdi+1E0h]
    vmovss  dword ptr [rsp+130h+angles+8], xmm2
    vmovss  dword ptr [rsp+130h+angles+4], xmm0
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1687, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF )") )
    __debugbreak();
  groundRefEnt = _RDI->ps.groundRefEnt;
  if ( groundRefEnt != 2047 )
  {
    AnglesToAxis(&g_entities[groundRefEnt].r.currentAngles, &axis);
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    AxisToAngles(&out, &angles);
  }
  Instance = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &_RDI->ps);
  v13 = BG_UsingAlternate(&_RDI->ps);
  BG_ApplyWeaponAnglesToShootingDirection(Instance, &_RDI->ps, CurrentWeaponForPlayer, v13, &_RSI->weapMoveAngles, (const vec3_t (*)[30])_RSI->weapMoveAnglesCategorized, &angles, &viewAngles, &localGunAngles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+viewAngles]
    vmovss  [rsp+130h+var_E0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_19;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+viewAngles+4]
    vmovss  [rsp+130h+var_E0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_19;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+viewAngles+8]
    vmovss  [rsp+130h+var_E0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
  {
LABEL_19:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1707, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gunAngles )[0] ) && !IS_NAN( ( gunAngles )[1] ) && !IS_NAN( ( gunAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( gunAngles )[0] ) && !IS_NAN( ( gunAngles )[1] ) && !IS_NAN( ( gunAngles )[2] )") )
      __debugbreak();
  }
  if ( BG_IsThirdPersonMode(Instance, &_RDI->ps) )
  {
    G_ActiveMP_UpdateThirdPersonMode(_RDI, &viewAngles);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+130h+viewAngles]
      vmovss  xmm1, dword ptr [rsp+130h+viewAngles+4]
      vmovss  dword ptr [rdi+5E4Ch], xmm0
      vmovss  dword ptr [rdi+5E50h], xmm1
    }
    G_ActiveMP_PrintGunAngles(_RDI, &_RDI->sess.cmd, _RSI, &angles, &localGunAngles, &viewAngles);
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
  int damageTime; 
  ViewMovementParams params; 

  _RBX = client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1525, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  params.ps = &_RBX->ps;
  params.weaponMap = GWeaponMap::GetInstance();
  Handler = GHandler::getHandler();
  serverTime = cmd->serverTime;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  [rsp+68h+params.updateTime], xmm1
  }
  params.handler = Handler;
  params.serverTime = serverTime;
  *(double *)&_XMM0 = BG_GetSpeed(&_RBX->ps, serverTime, Handler);
  damageTime = _RBX->damageTime;
  __asm { vmovss  [rsp+68h+params.xySpeed], xmm0 }
  if ( damageTime )
    params.damageTime = level.time - damageTime;
  else
    params.damageTime = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0B720h]
    vmovss  xmm1, dword ptr [rbx+0B71Ch]
    vmovss  [rsp+68h+params.damagePitch], xmm0
    vmovss  [rsp+68h+params.damageRoll], xmm1
  }
  BG_CalculateViewMovement_Angles(&params, viewMoveState, &outViewValues->viewMoveAngles);
}

/*
==============
G_ActiveMP_UpdateWeaponMovement
==============
*/
void G_ActiveMP_UpdateWeaponMovement(WeaponMovementState *const weapMoveState, gclient_s *const client, const usercmd_s *const cmd, const int msec, const int inputMsec, PlayerViewValues *outViewValues)
{
  int serverTime; 
  int damageTime; 
  int v23; 
  WeaponMovementParams params; 
  vec3_t outDuckedAnglesPivotOffset; 
  vec3_t outStandAnglesPivotOffset; 

  _RDI = client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1546, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  params.ps = &_RDI->ps;
  params.weaponMap = GWeaponMap::GetInstance();
  params.handler = GHandler::getHandler();
  _RAX = BG_GetViewmodelWeapon(params.weaponMap, &_RDI->ps);
  serverTime = cmd->serverTime;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+130h+params.weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+30h+params.weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbp+30h+params.weapon.attachmentVariationIndices+15h], xmm0
  }
  LODWORD(_RAX) = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rbp+30h+inputMsec]
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vcvtsi2ss xmm0, xmm0, r15d
    vmulss  xmm0, xmm0, cs:__real@3a83126f
    vmovss  [rsp+130h+params.updateTime], xmm0
    vmovss  [rsp+130h+params.inputDeltaTime], xmm2
  }
  *(_DWORD *)&params.weapon.weaponCamo = (_DWORD)_RAX;
  params.serverTime = serverTime;
  *(double *)&_XMM0 = BG_GetSpeed(&_RDI->ps, serverTime, params.handler);
  damageTime = _RDI->damageTime;
  __asm { vmovss  [rsp+130h+params.xySpeed], xmm0 }
  if ( damageTime )
    params.damageTime = level.time - damageTime;
  else
    params.damageTime = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0B720h]
    vmovss  xmm1, dword ptr [rdi+0B71Ch]
    vmovss  [rsp+130h+params.damagePitch], xmm0
    vmovss  [rsp+130h+params.damageRoll], xmm1
  }
  v23 = params.ps->shellshockTime + params.ps->shellshockDuration - level.time;
  *(_QWORD *)&params.shellShockFadeTime = 3000i64;
  params.shellShockDeltaTime = v23;
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
  const dvar_t *v13; 
  __int64 weaponIdx; 
  bool v15; 
  const char ***v16; 
  GWeaponMap *v17; 
  GWeaponMap *v22; 
  const Weapon *CurrentWeaponForPlayer; 
  GWeaponMap *v25; 
  GWeaponMap *v26; 
  char *debugTaskName; 
  __int64 v32; 

  _R15 = cmd;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1454, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1455, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_active_mp.cpp", 1458, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( !BG_IsWeaponValid(Instance, EntityPlayerStateConst, &_R15->weapon) )
  {
    if ( _R15->weapon.weaponIdx && ent->client && G_ClientMP_IsPlaying(ent) )
      GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_NotityWeaponSwitchInvalidCallback, &_R15->weapon, 0x3Cu, 2u, "WeaponSwitchInvalid");
    v8 = BG_HighPriorityWeapon_Get(Instance, EntityPlayerStateConst);
    _RSI = v8;
    if ( v8->weaponIdx && BG_IsWeaponValid(Instance, EntityPlayerStateConst, v8) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovups ymmword ptr [r15+24h], ymm0
        vmovups xmm1, xmmword ptr [rsi+20h]
        vmovups xmmword ptr [r15+44h], xmm1
        vmovsd  xmm0, qword ptr [rsi+30h]
        vmovsd  qword ptr [r15+54h], xmm0
      }
      *(_DWORD *)&_R15->weapon.weaponCamo = *(_DWORD *)&_RSI->weaponCamo;
      v13 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.enabled )
      {
        weaponIdx = _RSI->weaponIdx;
        if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
        {
          LODWORD(v32) = bg_lastParsedWeaponIndex;
          LODWORD(debugTaskName) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", debugTaskName, v32) )
            __debugbreak();
        }
        v15 = bg_weaponCompleteDefs[weaponIdx] == NULL;
        v16 = (const char ***)&bg_weaponCompleteDefs[weaponIdx];
        if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
          __debugbreak();
        Com_Printf(17, "HighPriorityDebug - G_ActiveMP_ValidateCommand: usercmd weap invalid, server had valid high prio weapon, replaced usercmd weap with %s\n", **v16);
      }
    }
    else
    {
      v17 = GWeaponMap::GetInstance();
      _RAX = BG_GetCurrentWeaponForPlayer(v17, EntityPlayerStateConst);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+24h], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [r15+44h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [r15+54h], xmm0
      }
      *(_DWORD *)&_R15->weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    }
    _R15->isAlternate = BG_UsingAlternate(EntityPlayerStateConst);
  }
  if ( BG_IsThrowingAxe(&_R15->weapon) )
  {
    v22 = GWeaponMap::GetInstance();
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v22, EntityPlayerStateConst);
    if ( memcmp_0(CurrentWeaponForPlayer, &_R15->weapon, 0x3Cui64) )
      _R15->isAlternate = BG_IsFauxFists(EntityPlayerStateConst, &_R15->weapon, 0);
  }
  _RDI = &_R15->offHand;
  v25 = GWeaponMap::GetInstance();
  if ( !BG_IsWeaponValid(v25, EntityPlayerStateConst, &_R15->offHand) )
  {
    if ( _RDI->weaponIdx && ent->client && G_ClientMP_IsPlaying(ent) )
      GClientTaskQueue::AddTaskInternal(taskQueue, G_ActiveMP_NotityWeaponSwitchInvalidCallback, _RDI, 0x3Cu, 2u, "WeaponSwitchInvalidOffhand");
    v26 = GWeaponMap::GetInstance();
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    _RAX = BgWeaponMap::GetWeapon(v26, EntityPlayerStateConst->weapCommon.offHandHandle);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rdi+30h], xmm0
    }
    *(_DWORD *)&_R15->offHand.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
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

void __fastcall G_Footstep_DebugMoveType(int entityNum, const vec3_t *origin, bool canEmit, double moveTypeWeight, const entity_event_t eventType)
{
  const dvar_t *v7; 
  const char *v12; 
  const dvar_t *v15; 
  bool v16; 
  const char *v20; 
  float fmt; 
  double v25; 
  vec3_t point; 
  char dest[256]; 

  __asm { vmovaps [rsp+1B8h+var_58], xmm7 }
  v7 = DCONST_DVARBOOL_snd_footstep_debug;
  _RSI = origin;
  __asm { vmovaps xmm7, xmm3 }
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v12 = "UNKNOWN";
    __asm { vmovaps [rsp+1B8h+var_48], xmm6 }
    switch ( eventType )
    {
      case EV_NONE:
        v12 = "NONE";
        break;
      case EV_FOOTSTEP_SUPERSPRINT:
        v12 = "SUPERSPRINT";
        break;
      case EV_FOOTSTEP_SPRINT:
        v12 = "SPRINT";
        break;
      case EV_FOOTSTEP_RUN:
        v12 = "RUN";
        break;
      case EV_FOOTSTEP_WALK:
        v12 = "WALK";
        break;
      case EV_FOOTSTEP_CREEP:
        v12 = "CREEP";
        break;
      case EV_FOOTSTEP_PRONE:
        v12 = "PRONE";
        break;
      default:
        break;
    }
    _RDI = DCONST_DVARFLT_snd_footstep_debug_fontsize;
    if ( !DCONST_DVARFLT_snd_footstep_debug_fontsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug_fontsize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    v15 = DVARBOOL_killswitch_footstep_player_moveblend_enabled;
    if ( !DVARBOOL_killswitch_footstep_player_moveblend_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_footstep_player_moveblend_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.enabled && Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED|0x80);
    __asm { vmovsd  xmm0, qword ptr [rsi] }
    point.v[2] = _RSI->v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+1B8h+point], xmm0
      vmovss  xmm0, dword ptr [rsp+1B8h+point+8]
      vaddss  xmm1, xmm0, cs:zOffset
      vmovss  dword ptr [rsp+1B8h+point+8], xmm1
    }
    v20 = "NO";
    if ( v16 )
    {
      __asm { vcvtss2sd xmm0, xmm7, xmm7 }
      if ( canEmit )
        v20 = "YES";
      __asm { vmovsd  [rsp+1B8h+var_190], xmm0 }
      Com_sprintf(dest, 0x100ui64, "%i: Emit %s | Step Wgt %.2f (%s)", (unsigned int)entityNum, v20, v25, v12);
    }
    else
    {
      if ( canEmit )
        v20 = "YES";
      Com_sprintf(dest, 0x100ui64, "%i: Emit %s | Step Typ %s", (unsigned int)entityNum, v20, v12);
    }
    __asm { vmovss  dword ptr [rsp+1B8h+fmt], xmm6 }
    G_DebugStarWithText(&point, &colorPurple, &colorPurple, dest, fmt);
    __asm { vmovaps xmm6, [rsp+1B8h+var_48] }
  }
  __asm { vmovaps xmm7, [rsp+1B8h+var_58] }
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

