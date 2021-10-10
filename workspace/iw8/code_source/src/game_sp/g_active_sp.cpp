/*
==============
G_ActiveSP_UpdatePlayerTriggers
==============
*/

void __fastcall G_ActiveSP_UpdatePlayerTriggers(gentity_s *ent)
{
  ?G_ActiveSP_UpdatePlayerTriggers@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveSP_HandleClientEvent
==============
*/

void __fastcall G_ActiveSP_HandleClientEvent(gentity_s *ent, playerState_s *ps, int event, unsigned int eventParm, const int serverTime)
{
  ?G_ActiveSP_HandleClientEvent@@YAXPEAUgentity_s@@PEAUplayerState_s@@HIH@Z(ent, ps, event, eventParm, serverTime);
}

/*
==============
G_ActiveSP_VehicleAnimationClientEndFrame
==============
*/

void __fastcall G_ActiveSP_VehicleAnimationClientEndFrame(gentity_s *ent)
{
  ?G_ActiveSP_VehicleAnimationClientEndFrame@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveSP_ClientThink
==============
*/

void __fastcall G_ActiveSP_ClientThink(int clientNum, bool initialCall)
{
  ?G_ActiveSP_ClientThink@@YAXH_N@Z(clientNum, initialCall);
}

/*
==============
G_ActiveSP_PlayerController
==============
*/

void __fastcall G_ActiveSP_PlayerController(const gentity_s *self, DObjPartBits *partBits)
{
  ?G_ActiveSP_PlayerController@@YAXPEBUgentity_s@@PEAUDObjPartBits@@@Z(self, partBits);
}

/*
==============
G_ActiveSP_ClientEndFrame
==============
*/

void __fastcall G_ActiveSP_ClientEndFrame(gentity_s *ent)
{
  ?G_ActiveSP_ClientEndFrame@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveSP_UpdatePlayers
==============
*/

void G_ActiveSP_UpdatePlayers(void)
{
  ?G_ActiveSP_UpdatePlayers@@YAXXZ();
}

/*
==============
G_ActiveSP_GetPlayerControl
==============
*/

clientControllers_t *__fastcall G_ActiveSP_GetPlayerControl(int clientnum)
{
  return ?G_ActiveSP_GetPlayerControl@@YAPEAUclientControllers_t@@H@Z(clientnum);
}

/*
==============
GClientSystemSP::UpdateFriendlyOverlay
==============
*/

void __fastcall GClientSystemSP::UpdateFriendlyOverlay(GClientSystemSP *this, gentity_s *playerEnt)
{
  ?UpdateFriendlyOverlay@GClientSystemSP@@UEBAXPEAUgentity_s@@@Z(this, playerEnt);
}

/*
==============
G_ActiveSP_HandlePmoveTasks
==============
*/

void __fastcall G_ActiveSP_HandlePmoveTasks(const GPMove *pm)
{
  ?G_ActiveSP_HandlePmoveTasks@@YAXAEBVGPMove@@@Z(pm);
}

/*
==============
G_ActiveSP_TouchTriggers
==============
*/

void __fastcall G_ActiveSP_TouchTriggers(gentity_s *ent)
{
  ?G_ActiveSP_TouchTriggers@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ActiveSP_TouchEnts
==============
*/

void __fastcall G_ActiveSP_TouchEnts(gentity_s *ent, int numtouch, const __int16 *touchents)
{
  ?G_ActiveSP_TouchEnts@@YAXPEAUgentity_s@@HQEBF@Z(ent, numtouch, touchents);
}

/*
==============
G_ActiveSP_ClientClaimNode
==============
*/
void G_ActiveSP_ClientClaimNode(gentity_s *ent)
{
  pathnode_t *v2; 
  bool IsPlayerZeroG; 
  float v4; 
  pathnode_t *pClaimedNode; 
  gentity_s *v6; 
  team_t eTeam; 
  unsigned int v8; 
  unsigned int v9; 
  bool v10; 
  int v11; 
  sentient_s *NodeOwner; 
  sentient_s *v13; 
  const gentity_s *v14; 
  __int64 (__fastcall ***v15)(_QWORD); 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  __int64 v18; 
  __int64 v19; 
  AIActorInterface v20; 
  AIAgentInterface v21; 
  __int64 (__fastcall ***v22)(_QWORD); 
  vec3_t pos; 
  vec3_t vOriginOut; 
  vec3_t v25; 

  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 831, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( !ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 832, ASSERT_TYPE_ASSERT, "(ent->sentient)", (const char *)&queryFormat, "ent->sentient") )
    __debugbreak();
  v2 = Sentient_NearestNode(ent->sentient, 1);
  Sentient_GetOrigin(ent->sentient, &vOriginOut);
  if ( v2 )
  {
    pathnode_t::GetPos(v2, &pos);
    IsPlayerZeroG = BG_IsPlayerZeroG(&ent->client->ps);
    v4 = vOriginOut.v[1] - pos.v[1];
    if ( IsPlayerZeroG )
    {
      if ( (float)((float)((float)(v4 * v4) + (float)((float)(vOriginOut.v[0] - pos.v[0]) * (float)(vOriginOut.v[0] - pos.v[0]))) + (float)((float)(vOriginOut.v[2] - pos.v[2]) * (float)(vOriginOut.v[2] - pos.v[2]))) > 2304.0 )
        v2 = NULL;
    }
    else if ( (float)((float)(v4 * v4) + (float)((float)(vOriginOut.v[0] - pos.v[0]) * (float)(vOriginOut.v[0] - pos.v[0]))) > 2304.0 )
    {
      v2 = NULL;
    }
  }
  pClaimedNode = ent->sentient->pClaimedNode;
  if ( v2 != pClaimedNode )
  {
    if ( pClaimedNode )
    {
      if ( EntHandle::isDefined(&ent->client->pLookatEnt) && (v6 = EntHandle::ent(&ent->client->pLookatEnt)) != NULL && v6->actor && !v6->sentient->pClaimedNode )
        Path_RelinquishNodeSoon(ent->sentient);
      else
        Path_RelinquishNodeNow(ent->sentient);
    }
    if ( v2 )
    {
      eTeam = ent->sentient->eTeam;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      {
        v8 = 2;
        if ( eTeam <= TEAM_TWO )
          v8 = eTeam - 1;
        v9 = v8;
        if ( v8 < 3 )
          goto LABEL_33;
        LODWORD(v19) = v8;
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 205, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (3) )", "result doesn't index MAX_NODE_TEAMS_SP\n\t%i not in [0, %i)", v19, 3);
      }
      else
      {
        v9 = 1;
        if ( eTeam <= TEAM_ONE )
          v9 = eTeam - 1;
        if ( v9 < 2 )
          goto LABEL_33;
        LODWORD(v19) = v9;
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 210, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (2) )", "result doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v19, 2);
      }
      if ( v10 )
        __debugbreak();
LABEL_33:
      v11 = 0;
      while ( 1 )
      {
        NodeOwner = Path_GetNodeOwner(v2, v11, v9);
        v13 = NodeOwner;
        if ( NodeOwner && NodeOwner != ent->sentient )
        {
          Sentient_GetOrigin(NodeOwner, &v25);
          pathnode_t::GetPos(v13->pClaimedNode, &pos);
          if ( (float)((float)((float)(pos.v[1] - v25.v[1]) * (float)(pos.v[1] - v25.v[1])) + (float)((float)(pos.v[0] - v25.v[0]) * (float)(pos.v[0] - v25.v[0]))) < 225.0 )
            return;
          v14 = v13->ent;
          AIActorInterface::AIActorInterface(&v20);
          AIAgentInterface::AIAgentInterface(&v21);
          v15 = NULL;
          v21.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
          v22 = NULL;
          if ( !v14 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
              __debugbreak();
            v15 = v22;
          }
          if ( v14->agent )
          {
            if ( SV_Agent_IsScripted(v14->s.number) )
            {
              ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v14);
              if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
                __debugbreak();
              if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
                __debugbreak();
              AINewAgentInterface::SetAgent((AINewAgentInterface *)&v21, ScriptedAgentInfo);
              v15 = (__int64 (__fastcall ***)(_QWORD))&v21;
              v22 = (__int64 (__fastcall ***)(_QWORD))&v21;
              goto LABEL_57;
            }
            v15 = v22;
          }
          actor = v14->actor;
          if ( actor )
          {
            if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
              __debugbreak();
            AIActorInterface::SetActor(&v20, v14->actor);
            v15 = (__int64 (__fastcall ***)(_QWORD))&v20;
            v22 = (__int64 (__fastcall ***)(_QWORD))&v20;
LABEL_57:
            v18 = (**v15)(v15);
            if ( (!*(_BYTE *)(v18 + 2478) || !*(_BYTE *)(v18 + 2477)) && (*(_DWORD *)(v18 + 2268) & 0x2000000) == 0 )
              return;
            goto LABEL_60;
          }
          if ( v15 )
            goto LABEL_57;
        }
LABEL_60:
        if ( ++v11 >= 3 )
        {
          Path_ForceClaimNode(v2, ent->sentient);
          return;
        }
      }
    }
  }
}

/*
==============
G_ActiveSP_ClientEndFrame
==============
*/
void G_ActiveSP_ClientEndFrame(gentity_s *ent)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  gclient_s *client; 
  gclient_s *v6; 
  int v7; 
  gclient_s *v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  int pm_type; 
  HudData v17; 
  int loopSound; 
  int lastServerTime; 
  unsigned int number; 
  characterInfo_t *v21; 
  GMovingPlatforms *v22; 
  unsigned int v23; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  DObj *ServerDObjForEnt; 
  GCombat *v27; 
  unsigned int entity; 
  vec3_t *movingPlatformOrigin; 
  vec3_t *movingPlatformAngles; 
  vec3_t outAngles; 
  vec3_t outOrigin; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 

  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1537, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( (client->flags & 3) == 0 && !client->mpviewer )
  {
    G_UpdateGroundTilt(client);
    v6 = ent->client;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1435, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
      __debugbreak();
    if ( v6->groundEntChanged || ent->c.item[0].weapon.attachmentVariationIndices[19] )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v6->ps.otherFlags, ACTIVE, 9u);
    else
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&v6->ps.otherFlags, ACTIVE, 9u);
    ent->c.item[0].weapon.attachmentVariationIndices[19] = 0;
    v6->groundEntChanged = 0;
    if ( ent->tagInfo )
    {
      if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&client->ps.linkFlags, ACTIVE, 2u) )
      {
        v7 = 1;
        if ( client->ps.stats[0] <= 0 )
          v7 = 8;
        client->ps.pm_type = v7;
      }
      G_SetFixedLinkPlayer(ent);
      v8 = ent->client;
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1502, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
        __debugbreak();
      if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
        __debugbreak();
      if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&v8->ps.linkFlags, ACTIVE, 8u) )
      {
        v9 = ent->r.currentOrigin.v[0];
        v10 = ent->r.currentOrigin.v[1];
        v35 = v1;
        v11 = v9 - v8->ps.origin.v[0];
        v12 = ent->r.currentOrigin.v[2];
        v34 = v2;
        v13 = v10 - v8->ps.origin.v[1];
        v33 = v3;
        v14 = v12 - v8->ps.origin.v[2];
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        v15 = 1000.0 / (float)level.frameDuration;
        v8->ps.velocity.v[0] = v11 * v15;
        v8->ps.velocity.v[2] = v14 * v15;
        v8->ps.velocity.v[1] = v13 * v15;
      }
      v8->ps.origin.v[0] = ent->r.currentOrigin.v[0];
      v8->ps.origin.v[1] = ent->r.currentOrigin.v[1];
      v8->ps.origin.v[2] = ent->r.currentOrigin.v[2];
    }
    else
    {
      pm_type = client->ps.pm_type;
      client->prevLinkAnglesSet = 0;
      if ( pm_type == 1 || pm_type == 8 )
        client->ps.pm_type = pm_type - 1;
    }
  }
  if ( client->ps.serverTime && level.time > 500 )
  {
    G_PlayerUseSP_UpdateLookAtEntity(ent);
    G_PlayerUse_UpdateCursorHints(ent);
  }
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1519, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  G_Active_PlayerOrAgent_VehicleAnimationEndFrame(&ent->client->ps);
  G_PlayerUseSP_UpdateAttackerAccuracy(ent);
  G_Objectives_Update(ent);
  G_HeadIcons_Update(ent);
  G_TargetMarkerGroups_Update(ent);
  v17.0 = ($D69577AC11C1636F320D0973E2FBC7CA)client->sess.hudData;
  client->ps.hudData = v17;
  ent->s.hudData = v17;
  G_ActiveSP_DamageFeedback(ent);
  client->ps.moveSpeedScaleMultiplier = MSG_PackUnsignedFloat(client->sess.moveSpeedScaleMultiplier, 5.0, 0xCu);
  client->ps.stats[0] = ent->health;
  loopSound = ent->s.loopSound;
  if ( (unsigned int)(loopSound + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)loopSound, "signed", ent->s.loopSound) )
    __debugbreak();
  lastServerTime = client->lastServerTime;
  client->ps.loopSound = loopSound;
  G_Active_PlayerStateToEntityStateExtrapolate(&client->ps, &ent->s, lastServerTime, 1);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    number = ent->s.number;
    if ( ent->s.number )
    {
      LODWORD(movingPlatformAngles) = 1;
      LODWORD(movingPlatformOrigin) = ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1623, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 1 )", "clientNum doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", movingPlatformOrigin, movingPlatformAngles) )
        __debugbreak();
    }
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v21 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, number);
    if ( !v21->infoValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1627, ASSERT_TYPE_ASSERT, "(ci->infoValid)", (const char *)&queryFormat, "ci->infoValid") )
      __debugbreak();
    G_ActiveSP_PlayerStateToCharacterInfo(client, v21);
    Profile_Begin(363);
    if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    v22 = GMovingPlatforms::ms_instance;
    if ( !client->movingPlatformHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
      __debugbreak();
    v23 = client->movingPlatformHandle.m_objIndex - 1;
    if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( v23 >= 0xF8 )
    {
      LODWORD(movingPlatformAngles) = 248;
      LODWORD(movingPlatformOrigin) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", movingPlatformOrigin, movingPlatformAngles) )
        __debugbreak();
    }
    BGMovingPlatformClient::GetPlatformOriginAndAngles(&v22->m_moverClientArray[v23], &client->ps, &outOrigin, &outAngles);
    Instance = GWeaponMap::GetInstance();
    Handler = GHandler::getHandler();
    BG_PlayerAnimation(Handler, Instance, &ent->s, v21, &ent->r.currentOrigin, &outOrigin, &outAngles);
    Profile_EndInternal(NULL);
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    if ( ServerDObjForEnt )
      ServerDObjForEnt->flags |= 1u;
  }
  else
  {
    v21 = NULL;
  }
  if ( BG_IsTurretActive(&client->ps) )
  {
    if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
      __debugbreak();
    v27 = GCombat::ms_gCombatSystem;
    GCombat::SetQueuedDamageEnabled(GCombat::ms_gCombatSystem, 1);
    if ( client->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1655, ASSERT_TYPE_ASSERT, "(client->ps.viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "client->ps.viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    G_TurretSP_ThinkClient(&level.gentities[client->ps.viewlocked_entNum]);
    GCombat::SetQueuedDamageEnabled(v27, 0);
    GCombat::ProcessQueuedDamages(v27);
    G_Bullet_ProcessDeferredNotifyActors();
    GCombat::ProcessQueuedClientDeaths(v27);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1666, ASSERT_TYPE_ASSERT, "(ci != 0)", (const char *)&queryFormat, "ci != NULL") )
      __debugbreak();
    BG_Player_DoControllersInternal(&ent->s, v21, &v21->control);
  }
  G_ActiveSP_UpdateViewLinkedEntity(ent);
  entity = client->ps.vehicleState.entity;
  if ( entity != 2047 )
  {
    G_Vehicle_UpdateVehicleControlledEntity(ent, entity);
    G_Vehicle_UpdateVehicleControlledWeapon(ent);
  }
  G_Omnvar_UpdatePmoveValues(ent->client);
  G_EntityMarks_ProcessEntityMarks(ent->s.number);
  G_EntityMarks_NotifyEntityMarks(ent->s.number);
  Sentient_UpdateNavObstacles(ent->sentient);
  G_Antilag_UpdateClosestEntities(ent->s.number);
  client->buttonsSinceLastFrame = 0i64;
}

/*
==============
G_ActiveSP_ClientThink
==============
*/
void G_ActiveSP_ClientThink(int clientNum, bool initialCall)
{
  __int64 v4; 
  gentity_s *v5; 
  gclient_s *client; 
  usercmd_s *p_oldcmd; 
  usercmd_s *p_cmd; 
  __int128 v9; 

  v4 = 2i64;
  v5 = &g_entities[clientNum];
  client = v5->client;
  p_oldcmd = &client->sess.oldcmd;
  p_cmd = &client->sess.cmd;
  do
  {
    p_oldcmd = (usercmd_s *)((char *)p_oldcmd + 128);
    v9 = *(_OWORD *)&p_cmd->buttons;
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    *(_OWORD *)&p_oldcmd[-1].offHand.attachmentVariationIndices[13] = v9;
    *(_OWORD *)&p_oldcmd[-1].offHand.weaponCamo = *(_OWORD *)&p_cmd[-1].offHand.weaponCamo;
    *(_OWORD *)p_oldcmd[-1].remoteControlMove = *(_OWORD *)p_cmd[-1].remoteControlMove;
    *(_OWORD *)p_oldcmd[-1].vehAngles = *(_OWORD *)p_cmd[-1].vehAngles;
    *(_OWORD *)&p_oldcmd[-1].vehOrgZ = *(_OWORD *)&p_cmd[-1].vehOrgZ;
    *(_OWORD *)&p_oldcmd[-1].gunYOfs = *(_OWORD *)&p_cmd[-1].gunYOfs;
    *(_OWORD *)p_oldcmd[-1].sightedClientsMask.data = *(_OWORD *)p_cmd[-1].sightedClientsMask.data;
    *(_OWORD *)&p_oldcmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4];
    --v4;
  }
  while ( v4 );
  p_oldcmd->buttons = p_cmd->buttons;
  SV_Game_GetUsercmd(clientNum, &v5->client->sess.cmd);
  G_Active_SetLastServerTime(clientNum, v5->client->sess.cmd.serverTime);
  G_ActiveSP_ClientThinkInternal(v5, initialCall);
}

/*
==============
G_ActiveSP_ClientThinkInternal
==============
*/
void G_ActiveSP_ClientThinkInternal(gentity_s *ent, bool initialCall)
{
  signed __int64 v2; 
  void *v3; 
  gclient_s *client; 
  __int64 v6; 
  __int64 number; 
  GPlayerEventsSP *v8; 
  usercmd_s *p_cmd; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int flags; 
  bool v14; 
  int v15; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v17; 
  __int64 v18; 
  const dvar_t *v19; 
  const dvar_t *v22; 
  int eventSequence; 
  const dvar_t *v24; 
  usercmd_s *v25; 
  usercmd_s *v26; 
  __int64 v27; 
  usercmd_s *p_oldcmd; 
  usercmd_s *v29; 
  __int64 v30; 
  double v31; 
  double v32; 
  characterInfo_t *CharacterInfo; 
  double v34; 
  double v35; 
  vec3_t *p_currentOrigin; 
  float v37; 
  float v38; 
  GPredictedEntitySystem *v39; 
  GWeaponMap *Instance; 
  gclient_s *v41; 
  float v42; 
  int time; 
  unsigned __int64 UseButtonMask; 
  unsigned __int64 buttons; 
  unsigned __int64 v46; 
  GWeaponMap *v47; 
  unsigned __int64 buttonsSinceLastFrame; 
  float v49; 
  float v50; 
  scrContext_t *v51; 
  unsigned int v52; 
  scr_string_t confirm_location; 
  int v54; 
  unsigned int entity; 
  char *fmt; 
  __int64 v57; 
  __int64 v58; 
  int outRemoteEntNum; 
  int msec; 
  GPlayerEventsSP *v62; 
  __int64 v63; 
  GPMove v64; 
  GStaticSP *v65; 
  float v66; 
  GClientTaskQueue outTaskQueue; 

  v3 = alloca(v2);
  v63 = -2i64;
  GPMove::GPMove(&v64);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 922, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v6 = *(_QWORD *)&GStatic::ms_gameStatics;
  v65 = *(GStaticSP **)&GStatic::ms_gameStatics;
  number = ent->s.number;
  if ( ent->s.number )
  {
    LODWORD(v57) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.h", 98, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (1) )", "entityIndex doesn't index MAX_CHARACTERS_SP\n\t%i not in [0, %i)", v57, 1) )
      __debugbreak();
  }
  v8 = (GPlayerEventsSP *)(216 * number + v6 + 34352);
  v62 = v8;
  if ( client->sess.connected != CON_CONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 928, ASSERT_TYPE_ASSERT, "( client->sess.connected == CON_CONNECTED )", (const char *)&queryFormat, "client->sess.connected == CON_CONNECTED") )
    __debugbreak();
  p_cmd = &ent->client->sess.cmd;
  if ( ent->client == (gclient_s *)-21424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  msec = p_cmd->commandTime - client->ps.commandTime;
  v8->m_eventsEnabled = 1;
  v10 = client->ps.pm_flags.m_flags[0];
  if ( (client->flags & 4) != 0 )
    v11 = v10 | 0x10000;
  else
    v11 = v10 & 0xFFFEFFFF;
  client->ps.pm_flags.m_flags[0] = v11;
  if ( (client->flags & 0x400) != 0 )
    v12 = v11 | 0x20000;
  else
    v12 = v11 & 0xFFFDFFFF;
  client->ps.pm_flags.m_flags[0] = v12;
  flags = client->flags;
  if ( (flags & 1) != 0 )
  {
    client->ps.pm_type = 2;
  }
  else if ( (flags & 2) != 0 )
  {
    client->ps.pm_type = 3;
  }
  else if ( client->mpviewer )
  {
    client->ps.pm_type = 4;
  }
  else if ( client->ps.stats[0] > 0 )
  {
    client->ps.pm_type = ent->tagInfo && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&client->ps.linkFlags, ACTIVE, 2u);
  }
  else
  {
    if ( !ent->tagInfo || (v14 = !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&client->ps.linkFlags, ACTIVE, 2u), v15 = 8, !v14) )
      v15 = 7;
    client->ps.pm_type = v15;
  }
  p_otherFlags = &client->ps.otherFlags;
  if ( client->lastStand )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 0xBu);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0xBu);
  G_PlayerUse_UpdateCursorControlLock(ent);
  v17 = &client->ps.otherFlags;
  if ( (client->flags & 2) != 0 )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(v17, ACTIVE, 0x1Fu);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(v17, ACTIVE, 0x1Fu);
  v18 = (unsigned int)client->flags;
  if ( (v18 & 0x10) == 0 )
    goto LABEL_48;
  if ( (v18 & 2) == 0 || client->ps.pm_type != 3 )
  {
    Com_PrintWarning(15, "Expected (pm_type == PM_UFO) and (client->flags & CL_FLAG_UFO), instead got pm_type==(%d) and flags==(%d). resetting ufo_viewmodel\n", (unsigned int)client->ps.pm_type, v18);
    client->flags &= ~0x10u;
LABEL_48:
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 0x20u);
    goto LABEL_49;
  }
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 0x20u);
LABEL_49:
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1023, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED )") )
    __debugbreak();
  v19 = DVARFLT_bg_gravity;
  if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm2, 1 }
  client->ps.gravity = truncate_cast<unsigned short,int>((int)*(float *)&_XMM1);
  v22 = DVARINT_g_speed;
  if ( !DVARINT_g_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  client->ps.speed = truncate_cast<unsigned short,int>(v22->current.integer);
  G_Deploy_Clear(&client->ps);
  eventSequence = client->ps.pe.eventSequence;
  outRemoteEntNum = eventSequence;
  client->currentAimSpreadScale = 0.0039215689 * client->ps.weapCommon.aimSpreadScale;
  v24 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
  if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.enabled )
  {
    LODWORD(v57) = p_cmd->serverTime;
    LODWORD(fmt) = level.time;
    Com_Printf(17, "S: G_ActiveSP_ClientThinkInternal: client->currentAimSpreadScale: %.5f Aim spread scale: %.5f Server Time: %d Next cmd time: %d\n", client->currentAimSpreadScale, client->ps.weapCommon.aimSpreadScale, fmt, v57);
  }
  if ( (client->extrapolatedData.offset.v[0] != 0.0 || client->extrapolatedData.offset.v[1] != 0.0 || client->extrapolatedData.offset.v[2] != 0.0) && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1047, ASSERT_TYPE_ASSERT, "( !Vec3NotZero( client->extrapolatedData.offset ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::USE_EXTRAPOLATED_PS_ORIGIN_IN_SERVER ) )", (const char *)&queryFormat, "!Vec3NotZero( client->extrapolatedData.offset ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::USE_EXTRAPOLATED_PS_ORIGIN_IN_SERVER )") )
    __debugbreak();
  v64.ps = &client->ps;
  G_Active_InitPmoveExternalSystems(&v64, ent->s.number, &client->ps, client->movingPlatformHandle);
  v25 = p_cmd;
  v26 = &v64.cmd;
  v27 = 2i64;
  do
  {
    *(_OWORD *)&v26->buttons = *(_OWORD *)&v25->buttons;
    *(_OWORD *)&v26->commandTime = *(_OWORD *)&v25->commandTime;
    *(_OWORD *)(&v26->angles.xy + 1) = *(_OWORD *)(&v25->angles.xy + 1);
    *(_OWORD *)&v26->weapon.weaponOthers = *(_OWORD *)&v25->weapon.weaponOthers;
    *(_OWORD *)&v26->weapon.attachmentVariationIndices[1] = *(_OWORD *)&v25->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v26->weapon.attachmentVariationIndices[17] = *(_OWORD *)&v25->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v26->offHand.weaponIdx = *(_OWORD *)&v25->offHand.weaponIdx;
    v26 = (usercmd_s *)((char *)v26 + 128);
    *(_OWORD *)&v26[-1].sightedClientsMask.data[4] = *(_OWORD *)&v25->offHand.weaponAttachments[2];
    v25 = (usercmd_s *)((char *)v25 + 128);
    --v27;
  }
  while ( v27 );
  v26->buttons = v25->buttons;
  p_oldcmd = &client->sess.oldcmd;
  v29 = &v64.oldcmd;
  v30 = 2i64;
  do
  {
    *(_OWORD *)&v29->buttons = *(_OWORD *)&p_oldcmd->buttons;
    *(_OWORD *)&v29->commandTime = *(_OWORD *)&p_oldcmd->commandTime;
    *(_OWORD *)(&v29->angles.xy + 1) = *(_OWORD *)(&p_oldcmd->angles.xy + 1);
    *(_OWORD *)&v29->weapon.weaponOthers = *(_OWORD *)&p_oldcmd->weapon.weaponOthers;
    *(_OWORD *)&v29->weapon.attachmentVariationIndices[1] = *(_OWORD *)&p_oldcmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v29->weapon.attachmentVariationIndices[17] = *(_OWORD *)&p_oldcmd->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v29->offHand.weaponIdx = *(_OWORD *)&p_oldcmd->offHand.weaponIdx;
    v29 = (usercmd_s *)((char *)v29 + 128);
    *(_OWORD *)&v29[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_oldcmd->offHand.weaponAttachments[2];
    p_oldcmd = (usercmd_s *)((char *)p_oldcmd + 128);
    --v30;
  }
  while ( v30 );
  v29->buttons = p_oldcmd->buttons;
  if ( v64.ps->pm_type < 7 )
    v64.tracemask = ent->clipmask;
  else
    v64.tracemask = 65553;
  v64.m_bgHandler = GHandler::getHandler();
  v64.localClientNum = LOCAL_CLIENT_INVALID;
  v64.bounds = &client->playerBox;
  v64.ground = &client->playerGround;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    v31 = BG_AnimationMP_UnpackPitch(ent->s.lerp.u.player.torsoPitchPacked);
    v64.fTorsoPitch = *(float *)&v31;
    v32 = BG_AnimationMP_UnpackPitch(ent->s.lerp.u.player.waistPitchPacked);
    v64.fWaistPitch = *(float *)&v32;
  }
  v64.initialCall = initialCall;
  Profile_Begin(11);
  Pmove(&v64);
  Profile_EndInternal(NULL);
  if ( ent->client->ps.pe.eventSequence != eventSequence )
    ent->r.eventTime = level.time;
  G_Active_ApplyPMoveFlags(&v64, ent);
  v62->m_eventsEnabled = 0;
  if ( (LODWORD(p_cmd->gunPitch) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1101, ASSERT_TYPE_SANITY, "( !IS_NAN( ucmd->gunPitch ) )", (const char *)&queryFormat, "!IS_NAN( ucmd->gunPitch )") )
    __debugbreak();
  if ( (LODWORD(p_cmd->gunYaw) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1102, ASSERT_TYPE_SANITY, "( !IS_NAN( ucmd->gunYaw ) )", (const char *)&queryFormat, "!IS_NAN( ucmd->gunYaw )") )
    __debugbreak();
  client->fGunPitch = p_cmd->gunPitch;
  client->fGunYaw = p_cmd->gunYaw;
  client->fGunXOfs = p_cmd->gunXOfs;
  client->fGunYOfs = p_cmd->gunYOfs;
  client->fGunZOfs = p_cmd->gunZOfs;
  G_Active_PlayerStateToEntityStateExtrapolate(&ent->client->ps, &ent->s, v64.cmd.serverTime, 1);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( ent->s.number )
    {
      LODWORD(v58) = 1;
      LODWORD(v57) = ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1115, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.number ) < (unsigned)( 1 )", "ent->s.number doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", v57, v58) )
        __debugbreak();
    }
    CharacterInfo = GStaticSP::GetCharacterInfo(v65, ent->s.number);
    ent->s.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(v64.fTorsoPitch);
    ent->s.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(v64.fWaistPitch);
    v34 = BG_AnimationMP_QuantizePitch(v64.fTorsoPitch);
    CharacterInfo->fTorsoPitch = *(float *)&v34;
    v35 = BG_AnimationMP_QuantizePitch(v64.fWaistPitch);
    CharacterInfo->fWaistPitch = *(float *)&v35;
  }
  p_currentOrigin = &ent->r.currentOrigin;
  if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( ent->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
  {
    v65 = (GStaticSP *)&ent->r.currentOrigin;
    v37 = ent->s.lerp.pos.trBase.v[0];
    v38 = ent->s.lerp.pos.trBase.v[1];
    LODWORD(ent->r.currentOrigin.v[2]) = s_trbase_aab_Z ^ LODWORD(v38) ^ LODWORD(ent->s.lerp.pos.trBase.v[2]);
    LODWORD(ent->r.currentOrigin.v[1]) = s_trbase_aab_Y ^ LODWORD(v37) ^ LODWORD(v38);
    LODWORD(p_currentOrigin->v[0]) = LODWORD(v37) ^ ~s_trbase_aab_X;
    memset(&v65, 0, sizeof(v65));
    if ( ((LODWORD(p_currentOrigin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ent->r.currentOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ent->r.currentOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
      __debugbreak();
  }
  else
  {
    p_currentOrigin->v[0] = ent->s.lerp.pos.trBase.v[0];
    ent->r.currentOrigin.v[1] = ent->s.lerp.pos.trBase.v[1];
    ent->r.currentOrigin.v[2] = ent->s.lerp.pos.trBase.v[2];
  }
  *(_OWORD *)ent->r.box.midPoint.v = *(_OWORD *)client->playerBox.midPoint.v;
  *(double *)&ent->r.box.halfSize.y = *(double *)&client->playerBox.halfSize.y;
  if ( !GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 39, ASSERT_TYPE_ASSERT, "( ms_gSystem )", (const char *)&queryFormat, "ms_gSystem") )
    __debugbreak();
  v39 = GPredictedEntitySystem::ms_gSystem;
  if ( !GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1133, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  BgPredictedEntitySystem::ResetPredictionKeys(v39);
  Instance = GWeaponMap::GetInstance();
  GPlayerEventsSP::HandleEvents(v62, Instance, ent);
  SV_LinkEntity(ent);
  v41 = ent->client;
  p_currentOrigin->v[0] = v41->ps.origin.v[0];
  ent->r.currentOrigin.v[1] = v41->ps.origin.v[1];
  ent->r.currentOrigin.v[2] = v41->ps.origin.v[2];
  if ( !BG_IsTurretActive(&client->ps) )
  {
    *(_QWORD *)ent->r.currentAngles.v = 0i64;
    ent->r.currentAngles.v[2] = 0.0;
    if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ent->client->ps.linkFlags, ACTIVE, 2u) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ent->client->ps.otherFlags, ACTIVE, 1u) )
      v42 = ent->client->ps.linkWeaponAngles.v[1];
    else
      v42 = ent->client->ps.viewangles.v[1];
    ent->r.currentAngles.v[1] = v42;
  }
  G_ActiveSP_TouchEnts(ent, v64.numtouch, v64.touchents);
  time = level.time;
  if ( level.time >= client->lastTouchTime + 500 )
  {
    client->inControlTime = level.time;
    time = level.time;
  }
  if ( ent->client->ps.pe.eventSequence != outRemoteEntNum )
    ent->r.eventTime = time;
  client->oldbuttons = client->buttons;
  UseButtonMask = G_PlayerUse_GetUseButtonMask(&client->ps);
  if ( !client->useButtonDone )
    client->oldbuttons &= ~UseButtonMask;
  buttons = p_cmd->buttons;
  client->buttons = p_cmd->buttons;
  if ( (buttons & UseButtonMask) == 0 )
    client->useButtonDone = 0;
  v46 = buttons & ~client->oldbuttons;
  client->latched_buttons = v46;
  client->buttonsSinceLastFrame |= v46;
  G_Active_ClientThinkUpdateStateFlags(client, p_cmd);
  v47 = GWeaponMap::GetInstance();
  if ( BG_IsLocationSelectorActive(v47, &client->ps) )
  {
    buttonsSinceLastFrame = client->buttonsSinceLastFrame;
    if ( (buttonsSinceLastFrame & 0x4000) != 0 )
    {
      v49 = (float)((float)p_cmd->selectedLoc[0] * 0.0039215689) + 0.50196081;
      v50 = (float)((float)((float)p_cmd->selectedLoc[1] * 0.0039215689) + 0.50196081) * level.compassMapWorldSize.v[1];
      *(float *)&v65 = (float)((float)((float)(v49 * level.compassMapWorldSize.v[0]) * level.compassNorth.v[1]) + level.compassMapUpperLeft.v[0]) - (float)(v50 * level.compassNorth.v[0]);
      *((float *)&v65 + 1) = (float)(level.compassMapUpperLeft.v[1] - (float)((float)(v49 * level.compassMapWorldSize.v[0]) * level.compassNorth.v[0])) - (float)(v50 * level.compassNorth.v[1]);
      v66 = 0.0;
      v51 = ScriptContext_Server();
      Scr_AddVector(v51, (const float *)&v65);
      v52 = 1;
      confirm_location = scr_const.confirm_location;
    }
    else
    {
      if ( (buttonsSinceLastFrame & 0x8000) == 0 )
      {
LABEL_127:
        client->buttons &= 0x80000000004C0ui64;
        client->latched_buttons &= 0x80000000004C0ui64;
        client->buttonsSinceLastFrame &= 0x80000000004C0ui64;
        goto LABEL_128;
      }
      v52 = 0;
      confirm_location = scr_const.cancel_location;
    }
    GScr_Notify(ent, confirm_location, v52);
    goto LABEL_127;
  }
LABEL_128:
  GClientTaskQueue::Init(&outTaskQueue, ent->s.number);
  G_PlayerUse_UpdateActivate(&outTaskQueue, ent);
  GClientTaskQueue::ExecuteTasks(&outTaskQueue);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 1u) && client->ps.remoteEyesEnt != 2047 )
  {
    v54 = msec;
    if ( G_Active_RemoteControlledEntityShouldUpdateAngles(ent, msec, &outRemoteEntNum) )
      G_Active_RemoteControlledEntityUpdateAngles(ent, p_cmd->remoteControlAngles, v54, outRemoteEntNum);
  }
  entity = client->ps.vehicleState.entity;
  if ( entity != 2047 )
    G_Vehicle_UpdateVehicleControlledEntity(ent, entity);
  if ( client->ps.shellshockTime + client->ps.shellshockDuration < level.time )
    client->ps.pm_flags.m_flags[0] &= ~0x200000u;
  if ( (v64.m_flags & 4) != 0 )
    G_Glass_DestroyPiece(v64.glassBreakIndex, &v64.glassBreakPos, &v64.glassBreakDir);
  if ( client->ps.pm_type >= 7 && level.allowRespawn )
    G_ClientSP_Respawn();
  GPMove::~GPMove(&v64);
}

/*
==============
G_ActiveSP_DamageFeedback
==============
*/
void G_ActiveSP_DamageFeedback(gentity_s *player)
{
  gclient_s *client; 
  const dvar_t *v3; 
  unsigned __int8 damageEvent; 
  unsigned __int8 v5; 
  int damage_ricochet; 
  int v7; 
  int damage_blood; 
  int damage_armor; 
  int entity; 
  const VehicleDef *VehicleDef; 
  GHandler *Handler; 
  int maxHealth; 
  int v14; 
  bool v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v23; 
  unsigned __int8 v26; 
  int val; 
  vec3_t outOrigin; 
  vec3_t outForward; 
  vec3_t angles; 

  client = player->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 75, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  v3 = DCONST_DVARBOOL_player_debugHealth;
  if ( !DCONST_DVARBOOL_player_debugHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_debugHealth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && client->invulnerableActivated && level.time < client->invulnerableExpireTime )
  {
    G_Client_GetViewDirection(player, &outForward, NULL, NULL);
    G_Client_GetViewOrigin(&client->ps, &outOrigin);
    outOrigin.v[0] = (float)(30.0 * outForward.v[0]) + outOrigin.v[0];
    outOrigin.v[1] = (float)(30.0 * outForward.v[1]) + outOrigin.v[1];
    outOrigin.v[2] = (float)(30.0 * outForward.v[2]) + outOrigin.v[2];
    G_DebugCircle(&outOrigin, 10.0, &colorYellow, 0, 0, 0);
  }
  if ( client->damage_clear_indicators )
  {
    damageEvent = client->ps.damageEvent;
    if ( damageEvent == 0xFF )
      v5 = 0;
    else
      v5 = damageEvent + 1;
    client->ps.damageEvent = v5;
    client->ps.damageCount = 0;
    client->ps.damageType = 6;
    client->ps.damageModFlags = 0;
    *(_QWORD *)&client->damage_mod_flags = 0i64;
    *(_QWORD *)&client->damage_stun = 0i64;
    *(_QWORD *)&client->damage_armor = 0i64;
    client->damage_clear_indicators = 0;
  }
  else
  {
    damage_ricochet = client->damage_ricochet;
    v7 = 0;
    damage_blood = client->damage_blood;
    client->ps.damageCount = 0;
    if ( damage_ricochet > 0 && damage_ricochet == damage_blood )
      v7 = 3;
    damage_armor = client->damage_armor;
    if ( damage_armor > 0 && damage_armor == damage_blood )
      v7 = 4;
    if ( damage_blood <= 0 && client->damage_kick > 0 )
    {
      v7 = 5;
      damage_blood = client->damage_kick;
    }
    if ( damage_blood > 255 )
      damage_blood = 255;
    if ( damage_blood > 0 )
    {
      entity = client->ps.vehicleState.entity;
      VehicleDef = NULL;
      if ( entity && entity != 2047 )
      {
        Handler = GHandler::getHandler();
        VehicleDef = BG_GetVehicleDef(&client->ps, Handler);
      }
      if ( (VehicleDef != NULL) == client->damage_vehicle )
      {
        maxHealth = client->sess.maxHealth;
        if ( VehicleDef )
          maxHealth = VehicleDef->health;
        if ( maxHealth > 0 )
        {
          v14 = 100 * damage_blood / maxHealth;
          val = v14;
          if ( v14 > 127 )
          {
            v14 = 127;
            val = 127;
          }
          _XMM7 = LODWORD(FLOAT_255_0);
          if ( VehicleDef )
            goto LABEL_46;
          v16 = client->ps.pm_type < 7;
          v18 = 0i64;
          *(float *)&v18 = (float)v14;
          v17 = v18;
          *(float *)&v18 = *(float *)&v18 + client->ps.weapCommon.aimSpreadScale;
          _XMM1 = v18;
          __asm
          {
            vcmpltss xmm0, xmm7, xmm1
            vblendvps xmm1, xmm1, xmm7, xmm0
          }
          v23 = v17;
          *(float *)&v23 = *(float *)&v17 + *(float *)&_XMM1;
          _XMM2 = v23;
          __asm
          {
            vcmpltss xmm0, xmm7, xmm2
            vblendvps xmm0, xmm2, xmm7, xmm0
          }
          client->ps.weapCommon.aimSpreadScale = *(float *)&_XMM0;
          if ( v16 )
          {
LABEL_46:
            if ( client->damage_fromWorld )
            {
              client->ps.damagePitch = -1;
              v26 = -1;
              client->damage_fromWorld = 0;
            }
            else
            {
              vectoangles(&client->damage_from, &angles);
              client->ps.damagePitch = truncate_cast<unsigned char,int>((int)(float)((float)(angles.v[0] * 0.0027777778) * 255.0));
              v26 = truncate_cast<unsigned char,int>((int)(float)((float)(angles.v[1] * 0.0027777778) * 255.0));
            }
            client->ps.damageYaw = v26;
            ++client->ps.damageEvent;
            client->ps.damageCount = truncate_cast<unsigned char,int>(val);
            client->ps.damageModFlags = client->damage_mod_flags;
            *(_QWORD *)&client->damage_mod_flags = 0i64;
            client->ps.damageType = v7;
            *(_QWORD *)&client->damage_stun = 0i64;
            *(_QWORD *)&client->damage_armor = 0i64;
          }
        }
      }
      else
      {
        *(_QWORD *)&client->damage_mod_flags = 0i64;
        *(_QWORD *)&client->damage_stun = 0i64;
        *(_QWORD *)&client->damage_armor = 0i64;
      }
    }
  }
}

/*
==============
G_ActiveSP_GetPlayerControl
==============
*/
clientControllers_t *G_ActiveSP_GetPlayerControl(int clientnum)
{
  __int64 v2; 
  __int64 v3; 
  int v6; 

  if ( clientnum )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1418, ASSERT_TYPE_ASSERT, "(unsigned)( clientnum ) < (unsigned)( 1 )", "clientnum doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", clientnum, v6) )
      __debugbreak();
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientnum);
  v3 = v2;
  if ( *(_DWORD *)(v2 + 4) )
    return (clientControllers_t *)(v2 + 2812);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1422, ASSERT_TYPE_ASSERT, "(ci->infoValid)", (const char *)&queryFormat, "ci->infoValid") )
    __debugbreak();
  return (clientControllers_t *)(v3 + 2812);
}

/*
==============
G_ActiveSP_HandleClientEvent
==============
*/
void G_ActiveSP_HandleClientEvent(gentity_s *ent, playerState_s *ps, int event, unsigned int eventParm, const int serverTime)
{
  __int64 v6; 
  GWeaponMap *Instance; 
  int v10; 
  float v11; 
  float v12; 
  Weapon *Weapon; 
  sentient_s *sentient; 
  bool v15; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v17; 
  bitarray<224> *i; 
  ai_event_t v19; 
  GExtraDamageParams extraParams; 
  unsigned int damage; 
  GGestureStopParms clothType; 
  unsigned int surfType; 
  unsigned int viewDip; 
  unsigned int weaponRattleType; 
  int isSoftLanding; 
  Weapon r_offHandWeapon; 
  vec3_t psa; 
  bitarray<224> result; 
  GGlassBreakParms outParams; 

  v6 = (int)eventParm;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 489, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  *(_QWORD *)psa.v = ent->client;
  Instance = GWeaponMap::GetInstance();
  if ( !G_GameInterface_ActiveSP_HandleClientEvent(ent, ps, event, v6, serverTime) )
  {
    v10 = 0;
    if ( BG_IsPainLandingEvent(event) )
    {
      if ( ent->s.eType != ET_PLAYER || BG_IsPlayerZeroG(*(const playerState_s **)psa.v) )
        return;
      if ( (unsigned int)v6 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v6, "unsigned", (unsigned int)v6) )
        __debugbreak();
      BG_UnpackHardLandingEventParm(v6, &damage, &isSoftLanding, (unsigned int *)&clothType, &weaponRattleType, &viewDip, &surfType);
      v11 = (float)damage;
      if ( (float)(v11 * 0.0099999998) != 0.0 )
      {
        v12 = (float)*(int *)(*(_QWORD *)psa.v + 608i64) * (float)(v11 * 0.0099999998);
        extraParams = 0;
        G_CombatSP_Damage(ent, NULL, NULL, NULL, NULL, (int)v12, 0, 13, &NULL_WEAPON, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
      }
    }
    switch ( event )
    {
      case 1:
      case 82:
      case 210:
        return;
      case 20:
        if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 617, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        GScr_Notify(ent, scr_const.offhand_end, 0);
        break;
      case 22:
        if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 622, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        GScr_Notify(ent, scr_const.overcooked, 0);
        break;
      case 28:
        if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 612, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        GScr_Notify(ent, scr_const.reload_start, 0);
        break;
      case 29:
        if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 635, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        GScr_Notify(ent, scr_const.reload, 0);
        break;
      case 30:
        G_Active_SetupGestureStopParams(*(const playerState_s *const *)psa.v, serverTime, v6, &clothType);
        G_Active_GestureStopEvent(&clothType, ent);
        break;
      case 35:
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        G_Active_NotifyWeaponSwitchStarted(ent, &r_offHandWeapon);
        break;
      case 37:
      case 77:
        if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 580, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        G_Active_NotifyOffHandPullback(ent, &r_offHandWeapon);
        break;
      case 40:
      case 42:
      case 43:
      case 44:
      case 48:
      case 49:
      case 50:
      case 51:
      case 90:
      case 91:
        G_Weapon_Fire(ent, serverTime, (const entity_event_t)event, v6);
        break;
      case 53:
        if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 546, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        GScr_Notify(ent, scr_const.dry_fired, 0);
        break;
      case 56:
        G_Active_NotifySkydiveBeginFreefall(ent);
        break;
      case 57:
        G_Active_NotifySkydiveDeployParachute(ent);
        break;
      case 58:
        G_Active_NotifySkydiveTouch(ent);
        break;
      case 59:
        G_Active_NotifySkydiveEnd(ent);
        break;
      case 73:
        G_Weapon_FireScriptedMelee(ent);
        break;
      case 74:
        G_Weapon_FireMelee(ent, serverTime);
        break;
      case 75:
        G_Weapon_StartSwipeMelee(ent);
        break;
      case 76:
        G_Weapon_StartChargeMelee(ent);
        break;
      case 79:
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        G_Weapon_UseOffHand(ent, &r_offHandWeapon, serverTime);
        break;
      case 80:
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        G_Active_AttemptLiveGrenadePickup(ent, ps, &r_offHandWeapon);
        break;
      case 81:
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        G_Active_AttemptLiveGrenadePickup(ent, ps, &r_offHandWeapon);
        G_Active_NotifyOffHandPullback(ent, &r_offHandWeapon);
        break;
      case 85:
        G_Execution_Cancel(ent);
        break;
      case 86:
        G_Weapon_FireTurretEnd(ent);
        break;
      case 87:
        G_Weapon_FireTurret(ent, serverTime);
        break;
      case 135:
        if ( ent->client && (ent->flags.m_flags[0] & 3) == 0 )
        {
          Weapon = (Weapon *)BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
          extraParams = 0;
          r_offHandWeapon = *Weapon;
          G_CombatSP_Damage(ent, ent, ent, NULL, NULL, 100000, 5, 14, &r_offHandWeapon, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
        }
        break;
      case 136:
        if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 659, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        G_Active_NotifyDetonate(ent, &r_offHandWeapon);
        break;
      case 209:
        G_Active_Glass_SetupBreakParams(ps, ent, &outParams);
        G_Active_Glass_PlayerBreakEvent(&outParams, ent);
        break;
      case 226:
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        G_Active_NotifyWeaponSwitchCanceled(ent, &r_offHandWeapon);
        break;
      default:
        if ( (unsigned int)(event - 171) <= 3 || event == 180 || BG_IsLandingEvent(event) || BG_IsPainLandingEvent(event) )
        {
          sentient = ent->sentient;
          if ( sentient )
          {
            if ( level.teammode == TEAMMODE_FFA )
            {
              v15 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
              if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
                AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
              else
                AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
              *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
              *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
              v17 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
              if ( v15 )
                result.array[0] &= ~0x8000000u;
              result.array[6] = v17 & 0xFF9FFFFF;
            }
            else
            {
              Com_Teams_GetEnemyTeamFlags(&result, sentient->eTeam);
            }
            for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
            {
              if ( (unsigned int)++v10 >= 7 )
                return;
            }
            Sentient_GetOrigin(ent->sentient, &psa);
            if ( event == 171 || BG_IsPainLandingEvent(event) )
            {
              v19 = AI_EV_FOOTSTEP_SPRINT;
            }
            else if ( (unsigned int)(event - 173) <= 1 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ent->client->ps.pm_flags, ACTIVE, 1u) || (ent->client->sess.cmd.buttons & 0x200) != 0 )
            {
              v19 = AI_EV_FOOTSTEP_WALK;
            }
            else
            {
              v19 = AI_EV_FOOTSTEP;
            }
            if ( ent->sentient->neutralSenses )
              result.array[0] |= 0x8000000u;
            Actor_BroadcastPointEvent(ent, v19, &result, &psa);
          }
        }
        break;
    }
  }
}

/*
==============
G_ActiveSP_HandlePmoveTasks
==============
*/
void G_ActiveSP_HandlePmoveTasks(const GPMove *pm)
{
  if ( (pm->m_flags & 4) != 0 )
    G_Glass_DestroyPiece(pm->glassBreakIndex, &pm->glassBreakPos, &pm->glassBreakDir);
}

/*
==============
G_ActiveSP_PlayerController
==============
*/
void G_ActiveSP_PlayerController(const gentity_s *self, DObjPartBits *partBits)
{
  __int64 v4; 
  const DObj *ServerDObjForEnt; 
  unsigned __int8 *tag; 
  scr_string_t **v7; 
  __int64 v8; 
  unsigned __int8 *v9; 
  scr_string_t *v10; 
  int modelIndex; 
  CEntPlayerInfo player; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( self->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1396, ASSERT_TYPE_ASSERT, "(unsigned)( self->s.number ) < (unsigned)( 1 )", "self->s.number doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", self->s.number, 1) )
      __debugbreak();
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)self->s.number);
    if ( !*(_DWORD *)(v4 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1399, ASSERT_TYPE_ASSERT, "(ci->infoValid)", (const char *)&queryFormat, "ci->infoValid") )
      __debugbreak();
    ServerDObjForEnt = Com_GetServerDObjForEnt(self);
    tag = player.tag;
    v7 = controller_names;
    v8 = 4i64;
    v9 = player.tag;
    do
    {
      v10 = *v7;
      *tag = -2;
      DObjGetBoneIndexInternal_85(ServerDObjForEnt, *v10, v9++, &modelIndex);
      ++tag;
      ++v7;
      --v8;
    }
    while ( v8 );
    player.control = (clientControllers_t *)(v4 + 2812);
    BG_Pose_DoPlayerControllers(&player, ServerDObjForEnt, partBits);
  }
}

/*
==============
G_ActiveSP_PlayerStateToCharacterInfo
==============
*/
void G_ActiveSP_PlayerStateToCharacterInfo(gclient_s *const client, characterInfo_t *ci)
{
  double v4; 
  bool v5; 
  int v6; 
  int v7; 
  bool v8; 
  int enableVehicleOccupancyAnimations; 
  int v10; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  GWeaponMap *v13; 
  int EquippedWeaponIndex; 
  PlayerEquippedWeaponState *v15; 
  int v16; 
  unsigned int carryObjectIndex; 
  bool v18; 
  animScriptParachuteState_t skydiveAnimState; 
  bool v20; 
  GHandler *Handler; 
  __int16 linkEnt; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1289, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v4 = BG_MovementDirToDegrees(client->ps.movementDir);
  ci->lerpMoveDir = *(float *)&v4;
  ci->playerAngles.v[0] = client->ps.viewangles.v[0];
  ci->playerAngles.v[1] = client->ps.viewangles.v[1];
  ci->playerAngles.v[2] = client->ps.viewangles.v[2];
  ci->useShadowAnims = 0;
  ci->playerASMAnim.animSet = BG_GetSuitAnimIndexFromPlayerState(&client->ps);
  v5 = BG_IsPlayerZeroG(&client->ps) && !BG_IsPlayerZeroGWalking(&client->ps);
  ci->zeroGravity = v5;
  if ( PlayerASM_IsEnabled() )
  {
    BG_PlayerASM_CopyAnimDataToCharacterInfo(&client->ps, ci);
  }
  else
  {
    ci->playerAnim.legsAnim = client->ps.legsAnim;
    ci->playerAnim.torsoAnim = client->ps.torsoAnim;
  }
  if ( BG_Skydive_IsSkydiving(&client->ps) )
  {
    v6 = 0;
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v8 = !BG_Ladder_IsDualWieldingAllowed(&client->ps);
    v7 = 0;
    if ( !v8 )
      LOBYTE(v7) = client->ps.weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
  }
  enableVehicleOccupancyAnimations = ci->enableVehicleOccupancyAnimations;
  ci->dualWielding = v7;
  ci->offhandShieldDeployed = 0;
  *(_QWORD *)&ci->isOnWall = 0i64;
  ci->animLinkedToType = ANIM_LINKEDTO_NONE;
  v10 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0x1Bu);
  ci->enableVehicleOccupancyAnimations = v10;
  if ( enableVehicleOccupancyAnimations != v10 )
    ci->dobjDirty = 1;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(Instance, client->ps.weapCommon.weaponHandle);
  v13 = GWeaponMap::GetInstance();
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v16 = Weapon->weaponIdx && ((EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v13, &client->ps, Weapon), EquippedWeaponIndex < 0) ? (v15 = NULL) : (v15 = &client->ps.weapEquippedData[EquippedWeaponIndex]), v15) && v15->hybridScope;
  ci->hybridScopeState = v16;
  ci->usingNVG = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 7u);
  ci->suitIndex = client->ps.suitIndex;
  carryObjectIndex = client->ps.carryState.carryObjectIndex;
  if ( ci->carryObjectIndex != carryObjectIndex )
  {
    ci->dobjDirty = 1;
    carryObjectIndex = client->ps.carryState.carryObjectIndex;
  }
  ci->carryObjectIndex = carryObjectIndex;
  ci->carryObjectFlags = client->ps.carryState.flags;
  v18 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 8u);
  skydiveAnimState = ci->skydiveAnimState;
  ci->isOnStairs = v18;
  ci->isNearEnvironmentCollision = 0;
  v20 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)client->ps.skydivePlayerState.animState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v20 )
    ci->dobjDirty = 1;
  ci->skydiveAnimState = client->ps.skydivePlayerState.animState;
  Handler = GHandler::getHandler();
  BG_ContextMount_GetWorldmodelProperties(Handler, &client->ps, &ci->mount);
  ci->animData.flags = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 5u) )
    Mantle_UnpackAnimData(&client->ps.mantleState.compressedAnimData, &ci->animData);
  ci->mantleSpeedAnimCond = client->ps.mantleState.mantleSpeedAnimCond;
  linkEnt = client->ps.linkEnt;
  if ( linkEnt != 2047 )
    v6 = linkEnt + 1;
  ci->linkedEntNum = v6;
  G_GameInterface_ActiveSP_PlayerStateToCharacterInfo(&client->ps, ci);
}

/*
==============
G_ActiveSP_TouchEnts
==============
*/
void G_ActiveSP_TouchEnts(gentity_s *ent, int numtouch, const __int16 *touchents)
{
  __int64 v4; 
  int v5; 
  const gentity_s *TouchSource; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  __int64 i; 
  __int64 v11; 
  const gentity_s *v12; 
  const scrContext_t *v13; 
  void (__fastcall *touch)(gentity_s *, gentity_s *, int); 
  void (__fastcall *v15)(gentity_s *, gentity_s *, int); 
  __int64 v16; 
  __int64 v17; 

  v4 = numtouch;
  v5 = 0;
  TouchSource = G_Utils_GetTouchSource(ent);
  v7 = v4;
  if ( (int)v4 > 0 )
  {
    v8 = 0i64;
    do
    {
      v9 = 0;
      for ( i = 0i64; i < v8; ++i )
      {
        if ( touchents[i] == touchents[v8] )
          break;
        ++v9;
      }
      if ( v9 == v5 )
      {
        v11 = touchents[v8];
        if ( (unsigned int)v11 >= 0x800 )
        {
          LODWORD(v17) = 2048;
          LODWORD(v16) = touchents[v8];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v11] )
        {
          v12 = &g_entities[touchents[v8]];
          v13 = ScriptContext_Server();
          if ( Scr_IsSystemActive(v13, 1u) )
          {
            GScr_AddEntity(v12);
            GScr_Notify(TouchSource, scr_const.touch, 1u);
            GScr_AddEntity(TouchSource);
            GScr_Notify(v12, scr_const.touch, 1u);
          }
          touch = G_Main_GetEntHandlerList(TouchSource)->touch;
          if ( touch )
            touch((gentity_s *)TouchSource, (gentity_s *)v12, 1);
          v15 = G_Main_GetEntHandlerList(v12)->touch;
          if ( v15 )
            v15((gentity_s *)v12, (gentity_s *)TouchSource, 1);
        }
      }
      ++v5;
      ++v8;
    }
    while ( v8 < v7 );
  }
}

/*
==============
G_ActiveSP_TouchTriggers
==============
*/
void G_ActiveSP_TouchTriggers(gentity_s *ent)
{
  __int128 v1; 
  __int128 v2; 
  team_t eTeam; 
  int v5; 
  sentient_s *sentient; 
  __m128 v7; 
  float v8; 
  __m128 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  const GEntityHandlerList *EntHandlerList; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  int v26; 
  gentity_s *v27; 
  gclient_s *client; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  int v30; 
  scr_string_t *enabledTriggerTypes; 
  const GEntityHandlerList *v32; 
  bool v33; 
  unsigned int v34; 
  const VehicleDef *ServerDef; 
  unsigned int v36; 
  gclient_s *v37; 
  const scrContext_t *v38; 
  void (__fastcall *touch)(gentity_s *, gentity_s *, int); 
  void (__fastcall *v40)(gentity_s *, gentity_s *, int); 
  const GEntityHandlerList *v41; 
  int v42; 
  team_t v43; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  GMovingPlatforms *v45; 
  GTrajectory v46; 
  Bounds bounds; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t position; 
  vec4_t orientation; 
  __int16 v52[2048]; 
  __int128 v53; 
  __int128 v54; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 324, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Profile_Begin(484);
  eTeam = TEAM_ZERO;
  v43 = TEAM_ZERO;
  if ( ent->vehicle )
  {
    v5 = 8;
  }
  else
  {
    sentient = ent->sentient;
    if ( sentient )
    {
      if ( ent->client )
      {
        v5 = 0x40000000;
      }
      else
      {
        eTeam = sentient->eTeam;
        v43 = eTeam;
        if ( (unsigned int)(eTeam - 1) > 3 )
          goto LABEL_66;
        v5 = 0x40000;
      }
    }
    else
    {
      v5 = 0x400000;
    }
  }
  v7 = (__m128)*(unsigned __int64 *)&ent->r.absBox.halfSize.y;
  v54 = v1;
  v8 = v7.m128_f32[0] + 20.0;
  *(double *)&bounds.halfSize.y = *(double *)v7.m128_u64;
  collectedEnts.ids = (unsigned __int16 *)v52;
  v53 = v2;
  v9 = *(__m128 *)ent->r.absBox.midPoint.v;
  v10 = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  v11 = v10 + 20.0;
  v12 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  *(__m128 *)bounds.midPoint.v = v9;
  bounds.halfSize.v[0] = v10;
  v13 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  aabbMin.v[0] = v9.m128_f32[0] - v11;
  v7.m128_f32[0] = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  aabbMin.v[1] = v12 - v8;
  aabbMin.v[2] = v7.m128_f32[0] - (float)(v13 + 20.0);
  aabbMax.v[0] = v11 + v9.m128_f32[0];
  aabbMax.v[1] = v8 + v12;
  aabbMax.v[2] = (float)(v13 + 20.0) + v7.m128_f32[0];
  collectedEnts.count = 0;
  collectedEnts.countMax = 2048;
  PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, v5, &collectedEnts, NULL);
  v14 = ent->r.box.midPoint.v[1] + ent->r.currentOrigin.v[1];
  v15 = ent->r.box.halfSize.v[0];
  bounds.midPoint.v[0] = ent->r.box.midPoint.v[0] + ent->r.currentOrigin.v[0];
  v16 = ent->r.box.midPoint.v[2] + ent->r.currentOrigin.v[2];
  v17 = ent->r.box.halfSize.v[2];
  bounds.midPoint.v[1] = v14;
  v18 = ent->r.box.halfSize.v[1];
  bounds.halfSize.v[2] = v17;
  bounds.midPoint.v[2] = v16;
  bounds.halfSize.v[0] = v15;
  bounds.halfSize.v[1] = v18;
  if ( v15 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 824, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f") )
    __debugbreak();
  if ( bounds.halfSize.v[1] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 825, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f") )
    __debugbreak();
  if ( bounds.halfSize.v[2] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 826, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
    __debugbreak();
  _XMM0 = LODWORD(bounds.halfSize.v[1]);
  __asm { vmaxss  xmm1, xmm0, dword ptr [rbp+1020h+bounds.halfSize] }
  _XMM0 = LODWORD(bounds.halfSize.v[2]);
  bounds.halfSize.v[0] = *(float *)&_XMM1;
  bounds.halfSize.v[1] = *(float *)&_XMM1;
  __asm { vmaxss  xmm1, xmm0, xmm1 }
  bounds.halfSize.v[2] = *(float *)&_XMM1;
  EntHandlerList = G_Main_GetEntHandlerList(ent);
  v41 = EntHandlerList;
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v45 = GMovingPlatforms::ms_instance;
  if ( ent->vehicle && ent->s.eType == ET_VEHICLE && (Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, ent), Instance != -1) )
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, Instance, 0);
  else
    RigidBodyID = 0xFFFFFF;
  v26 = 0;
  if ( collectedEnts.count )
  {
    while ( 1 )
    {
      v27 = &g_entities[(unsigned __int16)v52[v26]];
      if ( v27->s.eType == ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 387, ASSERT_TYPE_ASSERT, "( hit->s.eType != ET_MISSILE )", (const char *)&queryFormat, "hit->s.eType != ET_MISSILE") )
        __debugbreak();
      client = ent->client;
      if ( client )
      {
        p_otherFlags = &client->ps.otherFlags;
        if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
          __debugbreak();
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Au) )
        {
          v30 = 0;
          if ( level.numEnabledTriggerTypes <= 0 )
          {
LABEL_42:
            EntHandlerList = v41;
            goto LABEL_65;
          }
          enabledTriggerTypes = level.enabledTriggerTypes;
          while ( *enabledTriggerTypes != v27->classname )
          {
            ++v30;
            ++enabledTriggerTypes;
            if ( v30 >= level.numEnabledTriggerTypes )
              goto LABEL_42;
          }
        }
        EntHandlerList = v41;
      }
      v32 = G_Main_GetEntHandlerList(v27);
      if ( !v32->touch && !EntHandlerList->touch || G_IsTriggerModelType(v27) && (v27->c.trigger.flags & 2) != 0 && !G_Trigger_IsTeamTrigger(v27, eTeam) )
        goto LABEL_65;
      v42 = 0;
      if ( v27->s.eType == ET_ITEM || (v27->flags.m_flags[0] & 0x2000000) != 0 )
        break;
      if ( v45->HandleTrigger(v45, ent, v27, &bounds, &v42) )
      {
        v33 = v42 == 0;
LABEL_71:
        if ( !v33 )
          goto LABEL_72;
        goto LABEL_65;
      }
      v34 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v27);
      if ( Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) && (ServerDef = G_Vehicle_GetServerDef(ent->vehicle->defIndex), v34 != -1) && ServerDef->accurateShapeOverlap && (v36 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v34, 0), Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, v36)) )
      {
        if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 301, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( worldId, vehBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( worldId, vehBodyId )") )
          __debugbreak();
        if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, v36) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 302, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( worldId, hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( worldId, hitBodyId )") )
          __debugbreak();
        Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation);
        if ( PhysicsVehicle_Overlap_Shapes(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation, v36) )
        {
LABEL_72:
          v38 = ScriptContext_Server();
          if ( Scr_IsSystemActive(v38, 1u) )
          {
            GScr_AddEntity(ent);
            GScr_Notify(v27, scr_const.touch, 1u);
            GScr_AddEntity(v27);
            GScr_Notify(ent, scr_const.touch, 1u);
          }
          touch = v32->touch;
          if ( touch )
            touch(v27, ent, 1);
          EntHandlerList = v41;
          if ( ent->actor )
          {
            v40 = v41->touch;
            if ( v40 )
              v40(ent, v27, 1);
          }
          goto LABEL_65;
        }
      }
      else if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, v34, v27) )
      {
        goto LABEL_72;
      }
      EntHandlerList = v41;
LABEL_65:
      eTeam = v43;
      if ( ++v26 >= collectedEnts.count )
        goto LABEL_66;
    }
    GTrajectory::GTrajectory(&v46, v27);
    v37 = ent->client;
    if ( !v37 )
      goto LABEL_65;
    v33 = BG_PlayerTouchesItem(&v37->ps, &v27->s, level.time, &v46) == 0;
    goto LABEL_71;
  }
LABEL_66:
  Profile_EndInternal(NULL);
}

/*
==============
G_ActiveSP_UpdatePlayerTriggers
==============
*/
void G_ActiveSP_UpdatePlayerTriggers(gentity_s *ent)
{
  signed __int64 v2; 
  bool IsPlayerZeroG; 
  sentient_s *sentient; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  sentient_s *v10; 
  float v11; 
  bool v12; 
  const dvar_t *v13; 
  gclient_s *client; 
  __int64 v15; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = ent - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v15) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, 2048) )
      __debugbreak();
  }
  if ( G_IsEntityInUse((__int16)v2) )
  {
    if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1744, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    IsPlayerZeroG = BG_IsPlayerZeroG(&ent->client->ps);
    sentient = ent->sentient;
    v5 = sentient->oldOrigin.v[1] - ent->r.currentOrigin.v[1];
    v6 = sentient->oldOrigin.v[0];
    if ( IsPlayerZeroG )
    {
      v7 = sentient->oldOrigin.v[2] - ent->r.currentOrigin.v[2];
      v8 = (float)((float)(v5 * v5) + (float)((float)(v6 - ent->r.currentOrigin.v[0]) * (float)(v6 - ent->r.currentOrigin.v[0]))) + (float)(v7 * v7);
    }
    else
    {
      v8 = (float)(v5 * v5) + (float)((float)(v6 - ent->r.currentOrigin.v[0]) * (float)(v6 - ent->r.currentOrigin.v[0]));
    }
    ent->client->playerMoved = v8 >= 0.0099999998;
    v9 = DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates;
    if ( !DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_DisablePlayerNearestDataUpdates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( !v9->current.enabled )
    {
      v10 = ent->sentient;
      v11 = ent->r.currentOrigin.v[0];
      v12 = v11 != v10->oldOrigin.v[0] || v10->oldOrigin.v[1] != ent->r.currentOrigin.v[1] || v10->oldOrigin.v[2] != ent->r.currentOrigin.v[2];
      v10->oldOrigin.v[0] = v11;
      v10->oldOrigin.v[1] = ent->r.currentOrigin.v[1];
      v10->oldOrigin.v[2] = ent->r.currentOrigin.v[2];
      Sentient_CheckAndUpdateNearestData(ent->sentient, v12);
    }
    G_ActiveSP_ClientClaimNode(ent);
    Sentient_BanNearNodes(ent->sentient, 1);
    v13 = DVARBOOL_ufoHitsTriggers;
    if ( !DVARBOOL_ufoHitsTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ufoHitsTriggers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled || (ent->client->flags & 3) == 0 )
    {
      client = ent->client;
      if ( client->ps.pm_type < 7 && !client->mpviewer )
        G_ActiveSP_TouchTriggers(ent);
    }
  }
}

/*
==============
G_ActiveSP_UpdatePlayers
==============
*/
void G_ActiveSP_UpdatePlayers(void)
{
  int commandTime; 
  gentity_s *v1; 
  gclient_s *client; 
  int v3; 
  scrContext_t *v4; 

  commandTime = 0;
  v1 = NULL;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tThis is intended to replace a singleplayer-only feature", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( (int)SvClient::ms_clientCount > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 91, ASSERT_TYPE_ASSERT, "(SvClient::GetClientCount() <= 1)", "%s\n\tShould not use this function when more than one client is possible.", "SvClient::GetClientCount() <= 1") )
    __debugbreak();
  if ( G_IsEntityInUse(0) )
  {
    v1 = g_entities;
    if ( !g_entities->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1704, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client") )
      __debugbreak();
    commandTime = v1->client->ps.commandTime;
  }
  if ( SV_IsDemoPlaying() )
  {
    SV_DemoSP_ReadPacket(level.framePos);
  }
  else if ( G_IsEntityInUse(0) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
      __debugbreak();
    if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
      __debugbreak();
    CL_InputSP_WritePacket(LOCAL_CLIENT_0);
  }
  ++level.framePos;
  if ( v1 )
  {
    client = v1->client;
    if ( client )
    {
      if ( SLOBYTE(client->flags) < 0 )
      {
        v3 = client->ps.commandTime - commandTime;
        if ( v3 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1731, ASSERT_TYPE_ASSERT, "(commandTime >= 0)", (const char *)&queryFormat, "commandTime >= 0") )
          __debugbreak();
        v4 = ScriptContext_Server();
        Scr_AddFloat(v4, (float)v3 * 0.001);
        GScr_Notify(v1, scr_const.on_player_update, 1u);
      }
    }
  }
}

/*
==============
G_ActiveSP_UpdateViewLinkedEntity
==============
*/
void G_ActiveSP_UpdateViewLinkedEntity(const gentity_s *ent)
{
  gclient_s *client; 
  unsigned __int16 i; 
  int WorldTagMatrix; 
  scr_string_t linkedTag; 
  GHandler *Handler; 
  gentity_s *v7; 
  vec3_t outAngles; 
  vec3_t outOrigin; 
  tmat43_t<vec3_t> outTagMat; 
  WorldUpReferenceFrame v11; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ActiveSP_UpdateViewLinkedEntity");
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1459, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1460, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  client = ent->client;
  for ( i = 0; i < client->ps.numViewLinkedEnts; ++i )
  {
    WorldTagMatrix = 0;
    if ( ent->model )
    {
      linkedTag = client->ps.viewLinkedEntityData[i].linkedTag;
      if ( linkedTag != scr_const.tag_origin )
        WorldTagMatrix = G_Utils_DObjGetWorldTagMatrix(ent, linkedTag, &outTagMat);
    }
    if ( !WorldTagMatrix )
    {
      AnglesToAxis(&ent->client->ps.viewangles, (tmat33_t<vec3_t> *)&outTagMat);
      outTagMat.m[3] = ent->client->ps.origin;
      Handler = GHandler::getHandler();
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v11, &client->ps, Handler);
      WorldUpReferenceFrame::AddUpContribution(&v11, ent->client->ps.viewHeightCurrent, &outTagMat.m[3]);
    }
    BG_UpdateViewLinkedModelTransform(&client->ps.viewLinkedEntityData[i], &outTagMat, &outOrigin, &outAngles);
    v7 = &g_entities[client->ps.viewLinkedEntityData[i].linkedEnt];
    G_SetOriginAndAngle(v7, &outOrigin, &outAngles, 1, 1);
    if ( v7->r.isLinked )
      SV_LinkEntity(v7);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ActiveSP_VehicleAnimationClientEndFrame
==============
*/
void G_ActiveSP_VehicleAnimationClientEndFrame(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1518, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1519, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  G_Active_PlayerOrAgent_VehicleAnimationEndFrame(&ent->client->ps);
}

/*
==============
GClientSystemSP::UpdateFriendlyOverlay
==============
*/
void GClientSystemSP::UpdateFriendlyOverlay(GClientSystemSP *this, gentity_s *playerEnt)
{
  unsigned int v3; 
  gentity_s *v4; 
  actor_s *actor; 
  scr_string_t properName; 
  const char *v7; 
  const ObfuscateErrorText *v8; 
  const char *v9; 
  const scrContext_t *v10; 
  const Weapon *Weapon; 
  unsigned int weaponIdx; 
  bool v13; 
  WeaponDef **v14; 
  const char *v15; 
  unsigned int v16; 
  scr_string_t callsign; 
  const char *v18; 
  const char *v19; 
  unsigned int v20; 
  scr_string_t lookAtText0; 
  const char *v22; 
  const char *v23; 
  scr_string_t lookAtText1; 
  const char *v25; 
  const char *v26; 
  scr_string_t v27; 
  const char *v28; 
  const char *v29; 
  unsigned int v30; 
  const char *v31; 
  unsigned int v32; 
  __int64 v33; 
  __int64 v34; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1789, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !playerEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1790, ASSERT_TYPE_ASSERT, "( playerEnt->client )", (const char *)&queryFormat, "playerEnt->client") )
    __debugbreak();
  if ( (unsigned int)playerEnt->s.number >= level.maxclients )
  {
    LODWORD(v33) = playerEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1792, ASSERT_TYPE_ASSERT, "(unsigned)( playerEnt->s.number ) < (unsigned)( level.maxclients )", "playerEnt->s.number doesn't index level.maxclients\n\t%i not in [0, %i)", v33, level.maxclients) )
      __debugbreak();
  }
  v3 = BG_ConfigStrings_ConfigStringOffset(0x1813u, 3 * playerEnt->s.number);
  if ( !EntHandle::isDefined(&playerEnt->client->pLookatEnt) )
    goto LABEL_38;
  v4 = EntHandle::ent(&playerEnt->client->pLookatEnt);
  actor = v4->actor;
  if ( !actor || (properName = actor->properName) == 0 )
  {
    if ( v4->s.eType == ET_VEHICLE )
    {
      if ( !v4->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1828, ASSERT_TYPE_ASSERT, "(traceEnt->vehicle)", (const char *)&queryFormat, "traceEnt->vehicle") )
        __debugbreak();
      lookAtText0 = v4->vehicle->lookAtText0;
      if ( lookAtText0 )
      {
        v22 = SL_ConvertToString(lookAtText0);
        v23 = j_va((const char *)&stru_143FB69FC, v22);
        SV_SetConfigstring(v3, v23);
        lookAtText1 = v4->vehicle->lookAtText1;
        if ( lookAtText1 )
        {
LABEL_32:
          v25 = SL_ConvertToString(lookAtText1);
LABEL_37:
          v30 = BG_ConfigStrings_ConfigStringOffset(v3, 1);
          SV_SetConfigstring(v30, v25);
          v31 = j_va((const char *)&queryFormat, "none");
          v32 = BG_ConfigStrings_ConfigStringOffset(v3, 2);
          SV_SetConfigstring(v32, v31);
          return;
        }
LABEL_36:
        v25 = "none";
        goto LABEL_37;
      }
      v26 = "none";
LABEL_39:
      SV_SetConfigstring(v3, v26);
      return;
    }
    v27 = v4->lookAtText0;
    if ( v27 )
    {
      v28 = SL_ConvertToString(v27);
      v29 = j_va((const char *)&stru_143FB69FC, v28);
      SV_SetConfigstring(v3, v29);
      lookAtText1 = v4->lookAtText1;
      if ( lookAtText1 )
        goto LABEL_32;
      goto LABEL_36;
    }
LABEL_38:
    v26 = j_va((const char *)&queryFormat, "none");
    goto LABEL_39;
  }
  v7 = SL_ConvertToString(properName);
  v8 = &stru_143FB69FC;
  v9 = j_va((const char *)&stru_143FB69FC, v7);
  SV_SetConfigstring(v3, v9);
  if ( !playerEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1807, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client") )
    __debugbreak();
  v10 = ScriptContext_Server();
  Weapon = GScr_Weapon_GetWeapon(v10, (const scr_weapon_t)v4->actor->currentWeapon);
  GScr_Weapon_IsAlternate(v10, (const scr_weapon_t)v4->actor->currentWeapon);
  weaponIdx = Weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v34) = bg_lastParsedWeaponIndex;
    LODWORD(v33) = weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v33, v34) )
      __debugbreak();
  }
  v13 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
  v14 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v15 = j_va((const char *)&queryFormat, (*v14)->szOverlayName);
  v16 = BG_ConfigStrings_ConfigStringOffset(v3, 1);
  SV_SetConfigstring(v16, v15);
  callsign = v4->actor->callsign;
  if ( callsign )
  {
    v18 = SL_ConvertToString(callsign);
  }
  else
  {
    v8 = &queryFormat;
    v18 = "none";
  }
  v19 = j_va((const char *)v8, v18);
  v20 = BG_ConfigStrings_ConfigStringOffset(v3, 2);
  SV_SetConfigstring(v20, v19);
}

