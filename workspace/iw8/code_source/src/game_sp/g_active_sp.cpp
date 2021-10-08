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
  pathnode_t *v3; 
  bool IsPlayerZeroG; 
  pathnode_t *pClaimedNode; 
  gentity_s *v21; 
  team_t eTeam; 
  unsigned int v23; 
  unsigned int v24; 
  bool v25; 
  int i; 
  sentient_s *NodeOwner; 
  sentient_s *v29; 
  char v37; 
  const gentity_s *v38; 
  __int64 (__fastcall ***v39)(_QWORD); 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  __int64 v42; 
  __int64 v44; 
  AIActorInterface v45; 
  AIAgentInterface v46; 
  __int64 (__fastcall ***v47)(_QWORD); 
  vec3_t pos; 
  vec3_t vOriginOut; 
  vec3_t v50; 

  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 831, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( !ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 832, ASSERT_TYPE_ASSERT, "(ent->sentient)", (const char *)&queryFormat, "ent->sentient") )
    __debugbreak();
  v3 = Sentient_NearestNode(ent->sentient, 1);
  Sentient_GetOrigin(ent->sentient, &vOriginOut);
  if ( v3 )
  {
    pathnode_t::GetPos(v3, &pos);
    IsPlayerZeroG = BG_IsPlayerZeroG(&ent->client->ps);
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+57h+vOriginOut+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+57h+pos+4]
      vmovss  xmm0, dword ptr [rbp+57h+vOriginOut]
    }
    if ( IsPlayerZeroG )
    {
      __asm
      {
        vsubss  xmm3, xmm0, dword ptr [rbp+57h+pos]
        vmovss  xmm0, dword ptr [rbp+57h+vOriginOut+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+57h+pos+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@45100000
      }
      v3 = NULL;
    }
    else
    {
      __asm
      {
        vsubss  xmm4, xmm0, dword ptr [rbp+57h+pos]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm3, xmm2, xmm2
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, cs:__real@45100000
      }
    }
  }
  pClaimedNode = ent->sentient->pClaimedNode;
  if ( v3 == pClaimedNode )
    return;
  if ( pClaimedNode )
  {
    if ( EntHandle::isDefined(&ent->client->pLookatEnt) && (v21 = EntHandle::ent(&ent->client->pLookatEnt)) != NULL && v21->actor && !v21->sentient->pClaimedNode )
      Path_RelinquishNodeSoon(ent->sentient);
    else
      Path_RelinquishNodeNow(ent->sentient);
  }
  if ( !v3 )
    return;
  eTeam = ent->sentient->eTeam;
  __asm { vmovaps [rsp+100h+var_30], xmm6 }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v23 = 2;
    if ( eTeam <= TEAM_TWO )
      v23 = eTeam - 1;
    v24 = v23;
    if ( v23 < 3 )
      goto LABEL_31;
    LODWORD(v44) = v23;
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 205, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (3) )", "result doesn't index MAX_NODE_TEAMS_SP\n\t%i not in [0, %i)", v44, 3);
  }
  else
  {
    v24 = 1;
    if ( eTeam <= TEAM_ONE )
      v24 = eTeam - 1;
    if ( v24 < 2 )
      goto LABEL_31;
    LODWORD(v44) = v24;
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 210, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (2) )", "result doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v44, 2);
  }
  if ( v25 )
    __debugbreak();
LABEL_31:
  __asm { vmovss  xmm6, cs:__real@43610000 }
  for ( i = 0; i < 3; ++i )
  {
    NodeOwner = Path_GetNodeOwner(v3, i, v24);
    v29 = NodeOwner;
    if ( !NodeOwner || NodeOwner == ent->sentient )
      continue;
    Sentient_GetOrigin(NodeOwner, &v50);
    pathnode_t::GetPos(v29->pClaimedNode, &pos);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+pos]
      vmovss  xmm1, dword ptr [rbp+57h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+57h+var_50+4]
      vsubss  xmm4, xmm0, dword ptr [rbp+57h+var_50]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, xmm6
    }
    if ( v37 )
      goto LABEL_60;
    v38 = v29->ent;
    AIActorInterface::AIActorInterface(&v45);
    AIAgentInterface::AIAgentInterface(&v46);
    v39 = NULL;
    v46.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v47 = NULL;
    if ( !v38 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      v39 = v47;
    }
    if ( !v38->agent )
      goto LABEL_49;
    if ( !SV_Agent_IsScripted(v38->s.number) )
    {
      v39 = v47;
LABEL_49:
      actor = v38->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v45, v38->actor);
        v39 = (__int64 (__fastcall ***)(_QWORD))&v45;
        v47 = (__int64 (__fastcall ***)(_QWORD))&v45;
      }
      else if ( !v39 )
      {
        continue;
      }
      goto LABEL_55;
    }
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v38);
    if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
      __debugbreak();
    if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
      __debugbreak();
    AINewAgentInterface::SetAgent((AINewAgentInterface *)&v46, ScriptedAgentInfo);
    v39 = (__int64 (__fastcall ***)(_QWORD))&v46;
    v47 = (__int64 (__fastcall ***)(_QWORD))&v46;
LABEL_55:
    v42 = (**v39)(v39);
    if ( (!*(_BYTE *)(v42 + 2478) || !*(_BYTE *)(v42 + 2477)) && (*(_DWORD *)(v42 + 2268) & 0x2000000) == 0 )
      goto LABEL_60;
  }
  Path_ForceClaimNode(v3, ent->sentient);
LABEL_60:
  __asm { vmovaps xmm6, [rsp+100h+var_30] }
}

/*
==============
G_ActiveSP_ClientEndFrame
==============
*/
void G_ActiveSP_ClientEndFrame(gentity_s *ent)
{
  gclient_s *client; 
  int v7; 
  int pm_type; 
  HudData v26; 
  int loopSound; 
  int lastServerTime; 
  unsigned int number; 
  characterInfo_t *v32; 
  GMovingPlatforms *v33; 
  unsigned int v34; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  DObj *ServerDObjForEnt; 
  GCombat *v38; 
  unsigned int entity; 
  vec3_t *movingPlatformOrigin; 
  vec3_t *movingPlatformAngles; 
  vec3_t outAngles; 
  vec3_t outOrigin; 

  _RSI = ent->client;
  _RDI = ent;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1537, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( (_RSI->flags & 3) == 0 && !_RSI->mpviewer )
  {
    G_UpdateGroundTilt(_RSI);
    client = _RDI->client;
    if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1435, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
      __debugbreak();
    if ( client->groundEntChanged || _RDI->c.item[0].weapon.attachmentVariationIndices[19] )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, ACTIVE, 9u);
    else
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, ACTIVE, 9u);
    _RDI->c.item[0].weapon.attachmentVariationIndices[19] = 0;
    client->groundEntChanged = 0;
    if ( _RDI->tagInfo )
    {
      if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RSI->ps.linkFlags, ACTIVE, 2u) )
      {
        v7 = 1;
        if ( _RSI->ps.stats[0] <= 0 )
          v7 = 8;
        _RSI->ps.pm_type = v7;
      }
      G_SetFixedLinkPlayer(_RDI);
      _RBX = (GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32> *)_RDI->client;
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1502, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
        __debugbreak();
      if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
        __debugbreak();
      if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(_RBX + 9, ACTIVE, 8u) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+130h]
          vmovss  xmm1, dword ptr [rdi+134h]
          vmovaps [rsp+0C8h+var_28], xmm6
          vsubss  xmm6, xmm0, dword ptr [rbx+30h]
          vmovss  xmm0, dword ptr [rdi+138h]
          vmovaps [rsp+0C8h+var_38], xmm7
          vsubss  xmm7, xmm1, dword ptr [rbx+34h]
          vmovaps [rsp+0C8h+var_48], xmm8
          vsubss  xmm8, xmm0, dword ptr [rbx+38h]
        }
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, cs:__real@447a0000
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
          vdivss  xmm2, xmm0, xmm1
          vmulss  xmm1, xmm6, xmm2
          vmovaps xmm6, [rsp+0C8h+var_28]
          vmulss  xmm0, xmm7, xmm2
          vmovaps xmm7, [rsp+0C8h+var_38]
          vmovss  dword ptr [rbx+3Ch], xmm1
          vmulss  xmm1, xmm8, xmm2
          vmovaps xmm8, [rsp+0C8h+var_48]
          vmovss  dword ptr [rbx+44h], xmm1
          vmovss  dword ptr [rbx+40h], xmm0
        }
      }
      _RBX[12].m_flags[0] = (unsigned int)LODWORD(_RDI->r.currentOrigin.v[0]);
      _RBX[13].m_flags[0] = (unsigned int)LODWORD(_RDI->r.currentOrigin.y);
      _RBX[14].m_flags[0] = (unsigned int)LODWORD(_RDI->r.currentOrigin.z);
    }
    else
    {
      pm_type = _RSI->ps.pm_type;
      _RSI->prevLinkAnglesSet = 0;
      if ( pm_type == 1 || pm_type == 8 )
        _RSI->ps.pm_type = pm_type - 1;
    }
  }
  if ( _RSI->ps.serverTime && level.time > 500 )
  {
    G_PlayerUseSP_UpdateLookAtEntity(_RDI);
    G_PlayerUse_UpdateCursorHints(_RDI);
  }
  if ( !_RDI->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1519, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  G_Active_PlayerOrAgent_VehicleAnimationEndFrame(&_RDI->client->ps);
  G_PlayerUseSP_UpdateAttackerAccuracy(_RDI);
  G_Objectives_Update(_RDI);
  G_HeadIcons_Update(_RDI);
  G_TargetMarkerGroups_Update(_RDI);
  v26.0 = ($D69577AC11C1636F320D0973E2FBC7CA)_RSI->sess.hudData;
  _RSI->ps.hudData = v26;
  _RDI->s.hudData = v26;
  G_ActiveSP_DamageFeedback(_RDI);
  __asm
  {
    vmovss  xmm1, cs:__real@40a00000; maxAbsValueSize
    vmovss  xmm0, dword ptr [rsi+55C4h]; value
  }
  _RSI->ps.moveSpeedScaleMultiplier = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xCu);
  _RSI->ps.stats[0] = _RDI->health;
  loopSound = _RDI->s.loopSound;
  if ( (unsigned int)(loopSound + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)loopSound, "signed", _RDI->s.loopSound) )
    __debugbreak();
  lastServerTime = _RSI->lastServerTime;
  _RSI->ps.loopSound = loopSound;
  G_Active_PlayerStateToEntityStateExtrapolate(&_RSI->ps, &_RDI->s, lastServerTime, 1);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    number = _RDI->s.number;
    if ( _RDI->s.number )
    {
      LODWORD(movingPlatformAngles) = 1;
      LODWORD(movingPlatformOrigin) = _RDI->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1623, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 1 )", "clientNum doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", movingPlatformOrigin, movingPlatformAngles) )
        __debugbreak();
    }
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v32 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, number);
    if ( !v32->infoValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1627, ASSERT_TYPE_ASSERT, "(ci->infoValid)", (const char *)&queryFormat, "ci->infoValid") )
      __debugbreak();
    G_ActiveSP_PlayerStateToCharacterInfo(_RSI, v32);
    Profile_Begin(363);
    if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    v33 = GMovingPlatforms::ms_instance;
    if ( !_RSI->movingPlatformHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
      __debugbreak();
    v34 = _RSI->movingPlatformHandle.m_objIndex - 1;
    if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( v34 >= 0xF8 )
    {
      LODWORD(movingPlatformAngles) = 248;
      LODWORD(movingPlatformOrigin) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", movingPlatformOrigin, movingPlatformAngles) )
        __debugbreak();
    }
    BGMovingPlatformClient::GetPlatformOriginAndAngles(&v33->m_moverClientArray[v34], &_RSI->ps, &outOrigin, &outAngles);
    Instance = GWeaponMap::GetInstance();
    Handler = GHandler::getHandler();
    BG_PlayerAnimation(Handler, Instance, &_RDI->s, v32, &_RDI->r.currentOrigin, &outOrigin, &outAngles);
    Profile_EndInternal(NULL);
    ServerDObjForEnt = Com_GetServerDObjForEnt(_RDI);
    if ( ServerDObjForEnt )
      ServerDObjForEnt->flags |= 1u;
  }
  else
  {
    v32 = NULL;
  }
  if ( BG_IsTurretActive(&_RSI->ps) )
  {
    if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
      __debugbreak();
    v38 = GCombat::ms_gCombatSystem;
    GCombat::SetQueuedDamageEnabled(GCombat::ms_gCombatSystem, 1);
    if ( _RSI->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1655, ASSERT_TYPE_ASSERT, "(client->ps.viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "client->ps.viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    G_TurretSP_ThinkClient(&level.gentities[_RSI->ps.viewlocked_entNum]);
    GCombat::SetQueuedDamageEnabled(v38, 0);
    GCombat::ProcessQueuedDamages(v38);
    G_Bullet_ProcessDeferredNotifyActors();
    GCombat::ProcessQueuedClientDeaths(v38);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1666, ASSERT_TYPE_ASSERT, "(ci != 0)", (const char *)&queryFormat, "ci != NULL") )
      __debugbreak();
    BG_Player_DoControllersInternal(&_RDI->s, v32, &v32->control);
  }
  G_ActiveSP_UpdateViewLinkedEntity(_RDI);
  entity = _RSI->ps.vehicleState.entity;
  if ( entity != 2047 )
  {
    G_Vehicle_UpdateVehicleControlledEntity(_RDI, entity);
    G_Vehicle_UpdateVehicleControlledWeapon(_RDI);
  }
  G_Omnvar_UpdatePmoveValues(_RDI->client);
  G_EntityMarks_ProcessEntityMarks(_RDI->s.number);
  G_EntityMarks_NotifyEntityMarks(_RDI->s.number);
  Sentient_UpdateNavObstacles(_RDI->sentient);
  G_Antilag_UpdateClosestEntities(_RDI->s.number);
  _RSI->buttonsSinceLastFrame = 0i64;
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

  v4 = 2i64;
  v5 = &g_entities[clientNum];
  client = v5->client;
  _R8 = &client->sess.oldcmd;
  _RAX = &client->sess.cmd;
  do
  {
    _R8 = (usercmd_s *)((char *)_R8 + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [r8-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [r8-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [r8-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [r8-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [r8-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [r8-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [r8-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [r8-10h], xmm1
    }
    --v4;
  }
  while ( v4 );
  _R8->buttons = _RAX->buttons;
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
  void *v5; 
  __int64 v8; 
  __int64 number; 
  GPlayerEventsSP *v10; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int flags; 
  int v16; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v18; 
  __int64 v19; 
  const dvar_t *v26; 
  int eventSequence; 
  const dvar_t *v30; 
  bool v31; 
  __int64 v41; 
  __int64 v52; 
  float v71; 
  float v72; 
  GPredictedEntitySystem *v80; 
  GWeaponMap *Instance; 
  int time; 
  unsigned __int64 UseButtonMask; 
  unsigned __int64 v89; 
  unsigned __int64 v90; 
  GWeaponMap *v91; 
  unsigned __int64 buttonsSinceLastFrame; 
  scrContext_t *v112; 
  unsigned int v113; 
  scr_string_t confirm_location; 
  int v115; 
  unsigned int entity; 
  char *fmt; 
  __int64 v121; 
  __int64 v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  int outRemoteEntNum; 
  int msec; 
  GPlayerEventsSP *v131; 
  __int64 v132; 
  GPMove v133; 
  GStaticSP *p_currentOrigin; 
  GClientTaskQueue outTaskQueue; 
  char v139; 

  v5 = alloca(v2);
  v132 = -2i64;
  __asm
  {
    vmovaps [rsp+1610h+var_40], xmm6
    vmovaps [rsp+1610h+var_50], xmm7
  }
  _RSI = ent;
  GPMove::GPMove(&v133);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 922, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _RBX = _RSI->client;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v8 = *(_QWORD *)&GStatic::ms_gameStatics;
  p_currentOrigin = *(GStaticSP **)&GStatic::ms_gameStatics;
  number = _RSI->s.number;
  if ( _RSI->s.number )
  {
    LODWORD(v121) = _RSI->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.h", 98, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (1) )", "entityIndex doesn't index MAX_CHARACTERS_SP\n\t%i not in [0, %i)", v121, 1) )
      __debugbreak();
  }
  v10 = (GPlayerEventsSP *)(216 * number + v8 + 34352);
  v131 = v10;
  if ( _RBX->sess.connected != CON_CONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 928, ASSERT_TYPE_ASSERT, "( client->sess.connected == CON_CONNECTED )", (const char *)&queryFormat, "client->sess.connected == CON_CONNECTED") )
    __debugbreak();
  _R12 = (__int64)&_RSI->client->sess.cmd;
  if ( _RSI->client == (gclient_s *)-21424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  msec = *(_DWORD *)(_R12 + 16) - _RBX->ps.commandTime;
  v10->m_eventsEnabled = 1;
  v12 = _RBX->ps.pm_flags.m_flags[0];
  if ( (_RBX->flags & 4) != 0 )
    v13 = v12 | 0x10000;
  else
    v13 = v12 & 0xFFFEFFFF;
  _RBX->ps.pm_flags.m_flags[0] = v13;
  if ( (_RBX->flags & 0x400) != 0 )
    v14 = v13 | 0x20000;
  else
    v14 = v13 & 0xFFFDFFFF;
  _RBX->ps.pm_flags.m_flags[0] = v14;
  flags = _RBX->flags;
  if ( (flags & 1) != 0 )
  {
    _RBX->ps.pm_type = 2;
  }
  else if ( (flags & 2) != 0 )
  {
    _RBX->ps.pm_type = 3;
  }
  else if ( _RBX->mpviewer )
  {
    _RBX->ps.pm_type = 4;
  }
  else if ( _RBX->ps.stats[0] > 0 )
  {
    _RBX->ps.pm_type = _RSI->tagInfo && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RBX->ps.linkFlags, ACTIVE, 2u);
  }
  else
  {
    if ( !_RSI->tagInfo || (v31 = !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RBX->ps.linkFlags, ACTIVE, 2u), v16 = 8, !v31) )
      v16 = 7;
    _RBX->ps.pm_type = v16;
  }
  p_otherFlags = &_RBX->ps.otherFlags;
  if ( _RBX->lastStand )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 0xBu);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0xBu);
  G_PlayerUse_UpdateCursorControlLock(_RSI);
  v18 = &_RBX->ps.otherFlags;
  if ( (_RBX->flags & 2) != 0 )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(v18, ACTIVE, 0x1Fu);
  else
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(v18, ACTIVE, 0x1Fu);
  v19 = (unsigned int)_RBX->flags;
  if ( (v19 & 0x10) == 0 )
    goto LABEL_48;
  if ( (v19 & 2) == 0 || _RBX->ps.pm_type != 3 )
  {
    Com_PrintWarning(15, "Expected (pm_type == PM_UFO) and (client->flags & CL_FLAG_UFO), instead got pm_type==(%d) and flags==(%d). resetting ufo_viewmodel\n", (unsigned int)_RBX->ps.pm_type, v19);
    _RBX->flags &= ~0x10u;
LABEL_48:
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&_RBX->ps.otherFlags, ACTIVE, 0x20u);
    goto LABEL_49;
  }
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&_RBX->ps.otherFlags, ACTIVE, 0x20u);
LABEL_49:
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1023, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED )") )
    __debugbreak();
  _RDI = DVARFLT_bg_gravity;
  if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm2, 1
    vcvttss2si ecx, xmm1; val
  }
  _RBX->ps.gravity = truncate_cast<unsigned short,int>(_ECX);
  v26 = DVARINT_g_speed;
  if ( !DVARINT_g_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  _RBX->ps.speed = truncate_cast<unsigned short,int>(v26->current.integer);
  G_Deploy_Clear(&_RBX->ps);
  eventSequence = _RBX->ps.pe.eventSequence;
  outRemoteEntNum = eventSequence;
  __asm
  {
    vmovss  xmm6, cs:__real@3b808081
    vmulss  xmm0, xmm6, dword ptr [rbx+744h]
    vmovss  dword ptr [rbx+5E9Ch], xmm0
  }
  v30 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
  if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v31 = !v30->current.enabled;
  if ( v30->current.enabled )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+744h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rbx+5E9Ch]
      vcvtss2sd xmm2, xmm2, xmm2
    }
    LODWORD(v121) = *(_DWORD *)(_R12 + 12);
    LODWORD(fmt) = level.time;
    __asm
    {
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_Printf(17, "S: G_ActiveSP_ClientThinkInternal: client->currentAimSpreadScale: %.5f Aim spread scale: %.5f Server Time: %d Next cmd time: %d\n", *(double *)&_XMM2, *(double *)&_XMM3, fmt, v121);
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm7, dword ptr [rbx+5E54h]
  }
  if ( !v31 )
    goto LABEL_144;
  __asm { vucomiss xmm7, dword ptr [rbx+5E58h] }
  if ( !v31 )
    goto LABEL_144;
  __asm { vucomiss xmm7, dword ptr [rbx+5E5Ch] }
  if ( !v31 )
  {
LABEL_144:
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1047, ASSERT_TYPE_ASSERT, "( !Vec3NotZero( client->extrapolatedData.offset ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::USE_EXTRAPOLATED_PS_ORIGIN_IN_SERVER ) )", (const char *)&queryFormat, "!Vec3NotZero( client->extrapolatedData.offset ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::USE_EXTRAPOLATED_PS_ORIGIN_IN_SERVER )") )
      __debugbreak();
  }
  v133.ps = &_RBX->ps;
  G_Active_InitPmoveExternalSystems(&v133, _RSI->s.number, &_RBX->ps, _RBX->movingPlatformHandle);
  _RAX = (unsigned __int64 *)_R12;
  _RCX = &v133.cmd;
  v41 = 2i64;
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
    --v41;
  }
  while ( v41 );
  _RCX->buttons = *_RAX;
  _RAX = &_RBX->sess.oldcmd.buttons;
  _RCX = &v133.oldcmd;
  v52 = 2i64;
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
    --v52;
  }
  while ( v52 );
  _RCX->buttons = *_RAX;
  if ( v133.ps->pm_type < 7 )
    v133.tracemask = _RSI->clipmask;
  else
    v133.tracemask = 65553;
  v133.m_bgHandler = GHandler::getHandler();
  v133.localClientNum = LOCAL_CLIENT_INVALID;
  _R15 = &_RBX->playerBox;
  v133.bounds = &_RBX->playerBox;
  v133.ground = &_RBX->playerGround;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(_RSI->s.lerp.u.player.torsoPitchPacked);
    __asm { vmovss  [rbp+1510h+var_15B0.baseclass_0.fTorsoPitch], xmm0 }
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(_RSI->s.lerp.u.player.waistPitchPacked);
    __asm { vmovss  [rbp+1510h+var_15B0.baseclass_0.fWaistPitch], xmm0 }
  }
  v133.initialCall = initialCall;
  Profile_Begin(11);
  Pmove(&v133);
  Profile_EndInternal(NULL);
  if ( _RSI->client->ps.pe.eventSequence != eventSequence )
    _RSI->r.eventTime = level.time;
  G_Active_ApplyPMoveFlags(&v133, _RSI);
  v131->m_eventsEnabled = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+0CCh]
    vmovss  [rsp+1610h+var_15D0], xmm0
  }
  if ( (v123 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1101, ASSERT_TYPE_SANITY, "( !IS_NAN( ucmd->gunPitch ) )", (const char *)&queryFormat, "!IS_NAN( ucmd->gunPitch )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r12+0D0h]
    vmovss  [rsp+1610h+var_15D0], xmm0
  }
  if ( (v124 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1102, ASSERT_TYPE_SANITY, "( !IS_NAN( ucmd->gunYaw ) )", (const char *)&queryFormat, "!IS_NAN( ucmd->gunYaw )") )
    __debugbreak();
  _RBX->fGunPitch = *(float *)(_R12 + 204);
  _RBX->fGunYaw = *(float *)(_R12 + 208);
  _RBX->fGunXOfs = *(float *)(_R12 + 212);
  _RBX->fGunYOfs = *(float *)(_R12 + 216);
  _RBX->fGunZOfs = *(float *)(_R12 + 220);
  G_Active_PlayerStateToEntityStateExtrapolate(&_RSI->client->ps, &_RSI->s, v133.cmd.serverTime, 1);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( _RSI->s.number )
    {
      LODWORD(v122) = 1;
      LODWORD(v121) = _RSI->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1115, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.number ) < (unsigned)( 1 )", "ent->s.number doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", v121, v122) )
        __debugbreak();
    }
    _RDI = GStaticSP::GetCharacterInfo(p_currentOrigin, _RSI->s.number);
    __asm { vmovss  xmm0, [rbp+1510h+var_15B0.baseclass_0.fTorsoPitch]; pitch }
    _RSI->s.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
    __asm { vmovss  xmm0, [rbp+1510h+var_15B0.baseclass_0.fWaistPitch]; pitch }
    _RSI->s.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
    __asm { vmovss  xmm0, [rbp+1510h+var_15B0.baseclass_0.fTorsoPitch]; pitch }
    *(double *)&_XMM0 = BG_AnimationMP_QuantizePitch(*(float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rdi+0AD0h], xmm0
      vmovss  xmm0, [rbp+1510h+var_15B0.baseclass_0.fWaistPitch]; pitch
    }
    *(double *)&_XMM0 = BG_AnimationMP_QuantizePitch(*(float *)&_XMM0);
    __asm { vmovss  dword ptr [rdi+0AD4h], xmm0 }
  }
  _R14 = (unsigned int *)&_RSI->r.currentOrigin;
  _RDI = &_RSI->s.lerp.pos;
  if ( _RSI == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
  {
    p_currentOrigin = (GStaticSP *)&_RSI->r.currentOrigin;
    v71 = _RSI->s.lerp.pos.trBase.v[0];
    v72 = _RSI->s.lerp.pos.trBase.v[1];
    LODWORD(_RSI->r.currentOrigin.v[2]) = s_trbase_aab_Z ^ LODWORD(v72) ^ LODWORD(_RSI->s.lerp.pos.trBase.v[2]);
    LODWORD(_RSI->r.currentOrigin.v[1]) = s_trbase_aab_Y ^ LODWORD(v71) ^ LODWORD(v72);
    *_R14 = LODWORD(v71) ^ ~s_trbase_aab_X;
    memset(&p_currentOrigin, 0, sizeof(p_currentOrigin));
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  [rsp+1610h+var_15D0], xmm0
    }
    if ( (v125 & 0x7F800000) == 2139095040 )
      goto LABEL_145;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  [rsp+1610h+var_15D0], xmm0
    }
    if ( (v126 & 0x7F800000) == 2139095040 )
      goto LABEL_145;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vmovss  [rsp+1610h+var_15D0], xmm0
    }
    if ( (v127 & 0x7F800000) == 2139095040 )
    {
LABEL_145:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    *_R14 = LODWORD(_RSI->s.lerp.pos.trBase.v[0]);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+10h]
      vmovss  dword ptr [r14+4], xmm0
      vmovss  xmm1, dword ptr [rdi+14h]
      vmovss  dword ptr [r14+8], xmm1
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rsi+100h], xmm0
    vmovsd  xmm1, qword ptr [r15+10h]
    vmovsd  qword ptr [rsi+110h], xmm1
  }
  if ( !GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 39, ASSERT_TYPE_ASSERT, "( ms_gSystem )", (const char *)&queryFormat, "ms_gSystem") )
    __debugbreak();
  v80 = GPredictedEntitySystem::ms_gSystem;
  if ( !GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1133, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  BgPredictedEntitySystem::ResetPredictionKeys(v80);
  Instance = GWeaponMap::GetInstance();
  GPlayerEventsSP::HandleEvents(v131, Instance, _RSI);
  SV_LinkEntity(_RSI);
  _RCX = _RSI->client;
  *_R14 = LODWORD(_RCX->ps.origin.v[0]);
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+34h]
    vmovss  dword ptr [r14+4], xmm0
    vmovss  xmm1, dword ptr [rcx+38h]
    vmovss  dword ptr [r14+8], xmm1
  }
  if ( !BG_IsTurretActive(&_RBX->ps) )
  {
    *(_QWORD *)_RSI->r.currentAngles.v = 0i64;
    _RSI->r.currentAngles.v[2] = 0.0;
    if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RSI->client->ps.linkFlags, ACTIVE, 2u) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->client->ps.otherFlags, ACTIVE, 1u) )
    {
      _RAX = _RSI->client;
      __asm { vmovss  xmm0, dword ptr [rax+290h] }
    }
    else
    {
      _RAX = _RSI->client;
      __asm { vmovss  xmm0, dword ptr [rax+1DCh] }
    }
    __asm { vmovss  dword ptr [rsi+140h], xmm0 }
  }
  G_ActiveSP_TouchEnts(_RSI, v133.numtouch, v133.touchents);
  time = level.time;
  if ( level.time >= _RBX->lastTouchTime + 500 )
  {
    _RBX->inControlTime = level.time;
    time = level.time;
  }
  if ( _RSI->client->ps.pe.eventSequence != outRemoteEntNum )
    _RSI->r.eventTime = time;
  _RBX->oldbuttons = _RBX->buttons;
  UseButtonMask = G_PlayerUse_GetUseButtonMask(&_RBX->ps);
  if ( !_RBX->useButtonDone )
    _RBX->oldbuttons &= ~UseButtonMask;
  v89 = *(_QWORD *)_R12;
  _RBX->buttons = *(_QWORD *)_R12;
  if ( (v89 & UseButtonMask) == 0 )
    _RBX->useButtonDone = 0;
  v90 = v89 & ~_RBX->oldbuttons;
  _RBX->latched_buttons = v90;
  _RBX->buttonsSinceLastFrame |= v90;
  G_Active_ClientThinkUpdateStateFlags(_RBX, (const usercmd_s *)_R12);
  v91 = GWeaponMap::GetInstance();
  if ( BG_IsLocationSelectorActive(v91, &_RBX->ps) )
  {
    buttonsSinceLastFrame = _RBX->buttonsSinceLastFrame;
    if ( (buttonsSinceLastFrame & 0x4000) != 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm3, xmm1, cs:__real@3f008081
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm2, xmm1, cs:__real@3f008081
        vmulss  xmm4, xmm3, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassMapWorldSize; level_locals_t level
        vmulss  xmm6, xmm2, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassMapWorldSize+4; level_locals_t level
        vmulss  xmm0, xmm4, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassNorth+4; level_locals_t level
        vaddss  xmm2, xmm0, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassMapUpperLeft; level_locals_t level
        vmulss  xmm1, xmm6, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassNorth; level_locals_t level
        vsubss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rbp+1510h+var_11C0], xmm0
        vmulss  xmm2, xmm4, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassNorth; level_locals_t level
        vmovss  xmm1, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassMapUpperLeft+4; level_locals_t level
        vsubss  xmm3, xmm1, xmm2
        vmulss  xmm0, xmm6, dword ptr cs:?level@@3Ulevel_locals_t@@A.compassNorth+4; level_locals_t level
        vsubss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rbp+1510h+var_11C0+4], xmm2
        vmovss  [rbp+1510h+var_11B8], xmm7
      }
      v112 = ScriptContext_Server();
      Scr_AddVector(v112, (const float *)&p_currentOrigin);
      v113 = 1;
      confirm_location = scr_const.confirm_location;
    }
    else
    {
      if ( (buttonsSinceLastFrame & 0x8000) == 0 )
      {
LABEL_127:
        _RBX->buttons &= 0x80000000004C0ui64;
        _RBX->latched_buttons &= 0x80000000004C0ui64;
        _RBX->buttonsSinceLastFrame &= 0x80000000004C0ui64;
        goto LABEL_128;
      }
      v113 = 0;
      confirm_location = scr_const.cancel_location;
    }
    GScr_Notify(_RSI, confirm_location, v113);
    goto LABEL_127;
  }
LABEL_128:
  GClientTaskQueue::Init(&outTaskQueue, _RSI->s.number);
  G_PlayerUse_UpdateActivate(&outTaskQueue, _RSI);
  GClientTaskQueue::ExecuteTasks(&outTaskQueue);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->ps.otherFlags, ACTIVE, 1u) && _RBX->ps.remoteEyesEnt != 2047 )
  {
    v115 = msec;
    if ( G_Active_RemoteControlledEntityShouldUpdateAngles(_RSI, msec, &outRemoteEntNum) )
      G_Active_RemoteControlledEntityUpdateAngles(_RSI, (const char *)(_R12 + 166), v115, outRemoteEntNum);
  }
  entity = _RBX->ps.vehicleState.entity;
  if ( entity != 2047 )
    G_Vehicle_UpdateVehicleControlledEntity(_RSI, entity);
  if ( _RBX->ps.shellshockTime + _RBX->ps.shellshockDuration < level.time )
    _RBX->ps.pm_flags.m_flags[0] &= ~0x200000u;
  if ( (v133.m_flags & 4) != 0 )
    G_Glass_DestroyPiece(v133.glassBreakIndex, &v133.glassBreakPos, &v133.glassBreakDir);
  if ( _RBX->ps.pm_type >= 7 && level.allowRespawn )
    G_ClientSP_Respawn();
  GPMove::~GPMove(&v133);
  _R11 = &v139;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
G_ActiveSP_DamageFeedback
==============
*/

void __fastcall G_ActiveSP_DamageFeedback(gentity_s *player, __int64 a2, double _XMM2_8)
{
  const dvar_t *v6; 
  unsigned __int8 damageEvent; 
  unsigned __int8 v15; 
  int damage_ricochet; 
  int v17; 
  int damage_blood; 
  int damage_armor; 
  int entity; 
  const VehicleDef *VehicleDef; 
  GHandler *Handler; 
  int maxHealth; 
  bool v25; 
  unsigned __int8 v34; 
  int val; 
  vec3_t outOrigin; 
  vec3_t outForward; 
  vec3_t angles; 

  _RBX = player->client;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 75, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_player_debugHealth;
  if ( !DCONST_DVARBOOL_player_debugHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_debugHealth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && _RBX->invulnerableActivated && level.time < _RBX->invulnerableExpireTime )
  {
    G_Client_GetViewDirection(player, &outForward, NULL, NULL);
    G_Client_GetViewOrigin(&_RBX->ps, &outOrigin);
    __asm
    {
      vmovss  xmm4, cs:__real@41f00000
      vmulss  xmm3, xmm4, dword ptr [rsp+98h+outForward+4]
      vmulss  xmm2, xmm4, dword ptr [rsp+98h+outForward]
      vaddss  xmm2, xmm2, dword ptr [rsp+98h+outOrigin]
      vmovss  xmm1, cs:__real@41200000; radius
      vmovss  dword ptr [rsp+98h+outOrigin], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+98h+outOrigin+4]
      vmulss  xmm3, xmm4, dword ptr [rsp+98h+outForward+8]
      vmovss  dword ptr [rsp+98h+outOrigin+4], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+98h+outOrigin+8]
      vmovss  dword ptr [rsp+98h+outOrigin+8], xmm2
    }
    G_DebugCircle(&outOrigin, *(float *)&_XMM1, &colorYellow, 0, 0, 0);
  }
  if ( _RBX->damage_clear_indicators )
  {
    damageEvent = _RBX->ps.damageEvent;
    if ( damageEvent == 0xFF )
      v15 = 0;
    else
      v15 = damageEvent + 1;
    _RBX->ps.damageEvent = v15;
    _RBX->ps.damageCount = 0;
    _RBX->ps.damageType = 6;
    _RBX->ps.damageModFlags = 0;
    *(_QWORD *)&_RBX->damage_mod_flags = 0i64;
    *(_QWORD *)&_RBX->damage_stun = 0i64;
    *(_QWORD *)&_RBX->damage_armor = 0i64;
    _RBX->damage_clear_indicators = 0;
  }
  else
  {
    damage_ricochet = _RBX->damage_ricochet;
    v17 = 0;
    damage_blood = _RBX->damage_blood;
    _RBX->ps.damageCount = 0;
    if ( damage_ricochet > 0 && damage_ricochet == damage_blood )
      v17 = 3;
    damage_armor = _RBX->damage_armor;
    if ( damage_armor > 0 && damage_armor == damage_blood )
      v17 = 4;
    if ( damage_blood <= 0 && _RBX->damage_kick > 0 )
    {
      v17 = 5;
      damage_blood = _RBX->damage_kick;
    }
    if ( damage_blood > 255 )
      damage_blood = 255;
    if ( damage_blood > 0 )
    {
      entity = _RBX->ps.vehicleState.entity;
      VehicleDef = NULL;
      if ( entity && entity != 2047 )
      {
        Handler = GHandler::getHandler();
        VehicleDef = BG_GetVehicleDef(&_RBX->ps, Handler);
      }
      if ( (VehicleDef != NULL) == _RBX->damage_vehicle )
      {
        maxHealth = _RBX->sess.maxHealth;
        if ( VehicleDef )
          maxHealth = VehicleDef->health;
        if ( maxHealth > 0 )
        {
          __asm { vmovaps [rsp+98h+var_18], xmm7 }
          val = 100 * damage_blood / maxHealth;
          if ( val > 127 )
            val = 127;
          __asm { vmovss  xmm7, cs:__real@437f0000 }
          if ( VehicleDef )
            goto LABEL_47;
          v25 = _RBX->ps.pm_type < 7;
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, eax
            vaddss  xmm1, xmm2, dword ptr [rbx+744h]
            vcmpltss xmm0, xmm7, xmm1
            vblendvps xmm1, xmm1, xmm7, xmm0
            vaddss  xmm2, xmm2, xmm1
            vcmpltss xmm0, xmm7, xmm2
            vblendvps xmm0, xmm2, xmm7, xmm0
            vmovss  dword ptr [rbx+744h], xmm0
          }
          if ( v25 )
          {
LABEL_47:
            if ( _RBX->damage_fromWorld )
            {
              _RBX->ps.damagePitch = -1;
              v34 = -1;
              _RBX->damage_fromWorld = 0;
            }
            else
            {
              vectoangles(&_RBX->damage_from, &angles);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+98h+angles]
                vmulss  xmm1, xmm0, cs:__real@3b360b61
                vmulss  xmm2, xmm1, xmm7
                vcvttss2si ecx, xmm2; val
              }
              _RBX->ps.damagePitch = truncate_cast<unsigned char,int>(_ECX);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+98h+angles+4]
                vmulss  xmm1, xmm0, cs:__real@3b360b61
                vmulss  xmm2, xmm1, xmm7
                vcvttss2si ecx, xmm2; val
              }
              v34 = truncate_cast<unsigned char,int>(_ECX);
            }
            _RBX->ps.damageYaw = v34;
            ++_RBX->ps.damageEvent;
            _RBX->ps.damageCount = truncate_cast<unsigned char,int>(val);
            _RBX->ps.damageModFlags = _RBX->damage_mod_flags;
            *(_QWORD *)&_RBX->damage_mod_flags = 0i64;
            _RBX->ps.damageType = v17;
            *(_QWORD *)&_RBX->damage_stun = 0i64;
            *(_QWORD *)&_RBX->damage_armor = 0i64;
          }
          __asm { vmovaps xmm7, [rsp+98h+var_18] }
        }
      }
      else
      {
        *(_QWORD *)&_RBX->damage_mod_flags = 0i64;
        *(_QWORD *)&_RBX->damage_stun = 0i64;
        *(_QWORD *)&_RBX->damage_armor = 0i64;
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
  __int64 v8; 
  GWeaponMap *Instance; 
  int v12; 
  char v17; 
  sentient_s *sentient; 
  bool v55; 
  unsigned int v59; 
  bitarray<224> *i; 
  ai_event_t v61; 
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

  v8 = (int)eventParm;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 489, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  *(_QWORD *)psa.v = ent->client;
  Instance = GWeaponMap::GetInstance();
  if ( !G_GameInterface_ActiveSP_HandleClientEvent(ent, ps, event, v8, serverTime) )
  {
    v12 = 0;
    if ( BG_IsPainLandingEvent(event) )
    {
      if ( ent->s.eType != ET_PLAYER || BG_IsPlayerZeroG(*(const playerState_s **)psa.v) )
        return;
      if ( (unsigned int)v8 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v8, "unsigned", (unsigned int)v8) )
        __debugbreak();
      BG_UnpackHardLandingEventParm(v8, &damage, &isSoftLanding, (unsigned int *)&clothType, &weaponRattleType, &viewDip, &surfType);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm2, xmm0, cs:__real@3c23d70a
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm2, xmm1
      }
      if ( !v17 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+260h]
          vmulss  xmm1, xmm0, xmm2
          vcvttss2si eax, xmm1
        }
        extraParams = 0;
        G_CombatSP_Damage(ent, NULL, NULL, NULL, NULL, _EAX, 0, 13, &NULL_WEAPON, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
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
        G_Active_SetupGestureStopParams(*(const playerState_s *const *)psa.v, serverTime, v8, &clothType);
        G_Active_GestureStopEvent(&clothType, ent);
        break;
      case 35:
        _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v8);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0D0h+r_offHandWeapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_offHandWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        G_Active_NotifyWeaponSwitchStarted(ent, &r_offHandWeapon);
        break;
      case 37:
      case 77:
        if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 580, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v8);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0D0h+r_offHandWeapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_offHandWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
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
        G_Weapon_Fire(ent, serverTime, (const entity_event_t)event, v8);
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
        _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v8);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0D0h+r_offHandWeapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_offHandWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        G_Weapon_UseOffHand(ent, &r_offHandWeapon, serverTime);
        break;
      case 80:
        _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v8);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0D0h+r_offHandWeapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_offHandWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        G_Active_AttemptLiveGrenadePickup(ent, ps, &r_offHandWeapon);
        break;
      case 81:
        _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v8);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0D0h+r_offHandWeapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_offHandWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
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
          _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v8);
          extraParams = 0;
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+0D0h+r_offHandWeapon.weaponIdx], ymm0
            vmovups xmm1, xmmword ptr [rax+20h]
            vmovups xmmword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+5], xmm1
            vmovsd  xmm0, qword ptr [rax+30h]
            vmovsd  qword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+15h], xmm0
          }
          *(_DWORD *)&r_offHandWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
          G_CombatSP_Damage(ent, ent, ent, NULL, NULL, 100000, 5, 14, &r_offHandWeapon, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
        }
        break;
      case 136:
        if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 659, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v8);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0D0h+r_offHandWeapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_offHandWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        G_Active_NotifyDetonate(ent, &r_offHandWeapon);
        break;
      case 209:
        G_Active_Glass_SetupBreakParams(ps, ent, &outParams);
        G_Active_Glass_PlayerBreakEvent(&outParams, ent);
        break;
      case 226:
        _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v8);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0D0h+r_offHandWeapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbp+0D0h+r_offHandWeapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_offHandWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
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
              v55 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
              if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
                _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
              else
                _RAX = Com_TeamsMP_GetAllTeamFlags();
              __asm
              {
                vmovups xmm0, xmmword ptr [rax]
                vmovups xmmword ptr [rbp+0D0h+result.array], xmm0
                vmovsd  xmm1, qword ptr [rax+10h]
                vmovsd  qword ptr [rbp+0D0h+result.array+10h], xmm1
              }
              v59 = _RAX->array[6] & 0xFFEFFFFF;
              if ( v55 )
                result.array[0] &= ~0x8000000u;
              result.array[6] = v59 & 0xFF9FFFFF;
            }
            else
            {
              Com_Teams_GetEnemyTeamFlags(&result, sentient->eTeam);
            }
            for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
            {
              if ( (unsigned int)++v12 >= 7 )
                return;
            }
            Sentient_GetOrigin(ent->sentient, &psa);
            if ( event == 171 || BG_IsPainLandingEvent(event) )
            {
              v61 = AI_EV_FOOTSTEP_SPRINT;
            }
            else if ( (unsigned int)(event - 173) <= 1 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ent->client->ps.pm_flags, ACTIVE, 1u) || (ent->client->sess.cmd.buttons & 0x200) != 0 )
            {
              v61 = AI_EV_FOOTSTEP_WALK;
            }
            else
            {
              v61 = AI_EV_FOOTSTEP;
            }
            if ( ent->sentient->neutralSenses )
              result.array[0] |= 0x8000000u;
            Actor_BroadcastPointEvent(ent, v61, &result, &psa);
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

  _RSI = ci;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1289, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  *(double *)&_XMM0 = BG_MovementDirToDegrees(client->ps.movementDir);
  __asm { vmovss  dword ptr [rsi+8BCh], xmm0 }
  _RSI->playerAngles.v[0] = client->ps.viewangles.v[0];
  _RSI->playerAngles.v[1] = client->ps.viewangles.v[1];
  _RSI->playerAngles.v[2] = client->ps.viewangles.v[2];
  _RSI->useShadowAnims = 0;
  _RSI->playerASMAnim.animSet = BG_GetSuitAnimIndexFromPlayerState(&client->ps);
  v5 = BG_IsPlayerZeroG(&client->ps) && !BG_IsPlayerZeroGWalking(&client->ps);
  _RSI->zeroGravity = v5;
  if ( PlayerASM_IsEnabled() )
  {
    BG_PlayerASM_CopyAnimDataToCharacterInfo(&client->ps, _RSI);
  }
  else
  {
    _RSI->playerAnim.legsAnim = client->ps.legsAnim;
    _RSI->playerAnim.torsoAnim = client->ps.torsoAnim;
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
  enableVehicleOccupancyAnimations = _RSI->enableVehicleOccupancyAnimations;
  _RSI->dualWielding = v7;
  _RSI->offhandShieldDeployed = 0;
  *(_QWORD *)&_RSI->isOnWall = 0i64;
  _RSI->animLinkedToType = ANIM_LINKEDTO_NONE;
  v10 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0x1Bu);
  _RSI->enableVehicleOccupancyAnimations = v10;
  if ( enableVehicleOccupancyAnimations != v10 )
    _RSI->dobjDirty = 1;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(Instance, client->ps.weapCommon.weaponHandle);
  v13 = GWeaponMap::GetInstance();
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v16 = Weapon->weaponIdx && ((EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v13, &client->ps, Weapon), EquippedWeaponIndex < 0) ? (v15 = NULL) : (v15 = &client->ps.weapEquippedData[EquippedWeaponIndex]), v15) && v15->hybridScope;
  _RSI->hybridScopeState = v16;
  _RSI->usingNVG = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 7u);
  _RSI->suitIndex = client->ps.suitIndex;
  carryObjectIndex = client->ps.carryState.carryObjectIndex;
  if ( _RSI->carryObjectIndex != carryObjectIndex )
  {
    _RSI->dobjDirty = 1;
    carryObjectIndex = client->ps.carryState.carryObjectIndex;
  }
  _RSI->carryObjectIndex = carryObjectIndex;
  _RSI->carryObjectFlags = client->ps.carryState.flags;
  v18 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 8u);
  skydiveAnimState = _RSI->skydiveAnimState;
  _RSI->isOnStairs = v18;
  _RSI->isNearEnvironmentCollision = 0;
  v20 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)client->ps.skydivePlayerState.animState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v20 )
    _RSI->dobjDirty = 1;
  _RSI->skydiveAnimState = client->ps.skydivePlayerState.animState;
  Handler = GHandler::getHandler();
  BG_ContextMount_GetWorldmodelProperties(Handler, &client->ps, &_RSI->mount);
  _RSI->animData.flags = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 5u) )
    Mantle_UnpackAnimData(&client->ps.mantleState.compressedAnimData, &_RSI->animData);
  _RSI->mantleSpeedAnimCond = client->ps.mantleState.mantleSpeedAnimCond;
  linkEnt = client->ps.linkEnt;
  if ( linkEnt != 2047 )
    v6 = linkEnt + 1;
  _RSI->linkedEntNum = v6;
  G_GameInterface_ActiveSP_PlayerStateToCharacterInfo(&client->ps, _RSI);
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
  team_t eTeam; 
  int v5; 
  sentient_s *sentient; 
  char v23; 
  bool v35; 
  bool v37; 
  const GEntityHandlerList *EntHandlerList; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  int v47; 
  gentity_s *v48; 
  gclient_s *client; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  int v51; 
  scr_string_t *enabledTriggerTypes; 
  const GEntityHandlerList *v53; 
  bool v54; 
  unsigned int v55; 
  const VehicleDef *ServerDef; 
  unsigned int v57; 
  const playerState_s *p_ps; 
  const scrContext_t *v59; 
  void (__fastcall *touch)(gentity_s *, gentity_s *, int); 
  void (__fastcall *v61)(gentity_s *, gentity_s *, int); 
  const GEntityHandlerList *v62; 
  int v63; 
  team_t v64; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  GMovingPlatforms *v66; 
  GTrajectory v67; 
  Bounds bounds; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t position; 
  vec4_t orientation; 
  __int16 v73[2048]; 

  _RDI = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 324, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Profile_Begin(484);
  eTeam = TEAM_ZERO;
  v64 = TEAM_ZERO;
  if ( _RDI->vehicle )
  {
    v5 = 8;
  }
  else
  {
    sentient = _RDI->sentient;
    if ( sentient )
    {
      if ( _RDI->client )
      {
        v5 = 0x40000000;
      }
      else
      {
        eTeam = sentient->eTeam;
        v64 = eTeam;
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
  __asm
  {
    vmovss  xmm1, cs:__real@41a00000
    vmovsd  xmm2, qword ptr [rdi+128h]
    vmovaps [rsp+1120h+var_30], xmm6
    vaddss  xmm6, xmm2, xmm1
    vmovsd  qword ptr [rbp+1020h+bounds.halfSize+4], xmm2
  }
  collectedEnts.ids = (unsigned __int16 *)v73;
  __asm
  {
    vmovaps [rsp+1120h+var_40], xmm7
    vmovups xmm7, xmmword ptr [rdi+118h]
    vshufps xmm0, xmm7, xmm7, 0FFh
    vaddss  xmm5, xmm0, xmm1
    vshufps xmm3, xmm7, xmm7, 55h ; 'U'
    vmovups xmmword ptr [rsp+1120h+bounds.midPoint], xmm7
    vmovss  dword ptr [rbp+1020h+bounds.halfSize], xmm0
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vaddss  xmm4, xmm0, xmm1
    vsubss  xmm0, xmm7, xmm5
    vmovss  dword ptr [rbp+1020h+aabbMin], xmm0
    vsubss  xmm0, xmm3, xmm6
    vshufps xmm2, xmm7, xmm7, 0AAh ; 'ª'
    vmovss  dword ptr [rbp+1020h+aabbMin+4], xmm0
    vsubss  xmm0, xmm2, xmm4
    vaddss  xmm1, xmm5, xmm7
    vmovss  dword ptr [rbp+1020h+aabbMin+8], xmm0
    vmovss  dword ptr [rbp+1020h+aabbMax], xmm1
    vaddss  xmm0, xmm6, xmm3
    vaddss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rbp+1020h+aabbMax+4], xmm0
    vmovss  dword ptr [rbp+1020h+aabbMax+8], xmm1
  }
  collectedEnts.count = 0;
  collectedEnts.countMax = 2048;
  PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, v5, &collectedEnts, NULL);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+100h]
    vaddss  xmm1, xmm0, dword ptr [rdi+130h]
    vmovss  xmm2, dword ptr [rdi+104h]
    vaddss  xmm0, xmm2, dword ptr [rdi+134h]
    vmovss  xmm3, dword ptr [rdi+10Ch]
    vmovaps xmm7, [rsp+1120h+var_40]
    vmovss  dword ptr [rsp+1120h+bounds.midPoint], xmm1
    vmovss  xmm1, dword ptr [rdi+108h]
    vaddss  xmm2, xmm1, dword ptr [rdi+138h]
    vmovss  xmm1, dword ptr [rdi+114h]
    vmovss  dword ptr [rsp+1120h+bounds.midPoint+4], xmm0
    vmovss  xmm0, dword ptr [rdi+110h]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm3, xmm6
    vmovss  dword ptr [rbp+1020h+bounds.halfSize+8], xmm1
    vmovss  dword ptr [rbp+1020h+bounds.midPoint+8], xmm2
    vmovss  dword ptr [rbp+1020h+bounds.halfSize], xmm3
    vmovss  dword ptr [rbp+1020h+bounds.halfSize+4], xmm0
  }
  if ( v23 )
  {
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 824, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f");
    v23 = 0;
    if ( v35 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1020h+bounds.halfSize+4]
    vcomiss xmm0, xmm6
  }
  if ( v23 )
  {
    v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 825, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f");
    v23 = 0;
    if ( v37 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1020h+bounds.halfSize+8]
    vcomiss xmm0, xmm6
    vmovaps xmm6, [rsp+1120h+var_30]
  }
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 826, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1020h+bounds.halfSize+4]
    vmaxss  xmm1, xmm0, dword ptr [rbp+1020h+bounds.halfSize]
    vmovss  xmm0, dword ptr [rbp+1020h+bounds.halfSize+8]
    vmovss  dword ptr [rbp+1020h+bounds.halfSize], xmm1
    vmovss  dword ptr [rbp+1020h+bounds.halfSize+4], xmm1
    vmaxss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rbp+1020h+bounds.halfSize+8], xmm1
  }
  EntHandlerList = G_Main_GetEntHandlerList(_RDI);
  v62 = EntHandlerList;
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v66 = GMovingPlatforms::ms_instance;
  if ( _RDI->vehicle && _RDI->s.eType == ET_VEHICLE && (Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RDI), Instance != -1) )
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, Instance, 0);
  else
    RigidBodyID = 0xFFFFFF;
  v47 = 0;
  if ( collectedEnts.count )
  {
    while ( 1 )
    {
      v48 = &g_entities[(unsigned __int16)v73[v47]];
      if ( v48->s.eType == ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 387, ASSERT_TYPE_ASSERT, "( hit->s.eType != ET_MISSILE )", (const char *)&queryFormat, "hit->s.eType != ET_MISSILE") )
        __debugbreak();
      client = _RDI->client;
      if ( client )
      {
        p_otherFlags = &client->ps.otherFlags;
        if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
          __debugbreak();
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Au) )
        {
          v51 = 0;
          if ( level.numEnabledTriggerTypes <= 0 )
          {
LABEL_42:
            EntHandlerList = v62;
            goto LABEL_65;
          }
          enabledTriggerTypes = level.enabledTriggerTypes;
          while ( *enabledTriggerTypes != v48->classname )
          {
            ++v51;
            ++enabledTriggerTypes;
            if ( v51 >= level.numEnabledTriggerTypes )
              goto LABEL_42;
          }
        }
        EntHandlerList = v62;
      }
      v53 = G_Main_GetEntHandlerList(v48);
      if ( !v53->touch && !EntHandlerList->touch || G_IsTriggerModelType(v48) && (v48->c.trigger.flags & 2) != 0 && !G_Trigger_IsTeamTrigger(v48, eTeam) )
        goto LABEL_65;
      v63 = 0;
      if ( v48->s.eType == ET_ITEM || (v48->flags.m_flags[0] & 0x2000000) != 0 )
        break;
      if ( v66->HandleTrigger(v66, _RDI, v48, &bounds, &v63) )
      {
        v54 = v63 == 0;
LABEL_71:
        if ( !v54 )
          goto LABEL_72;
        goto LABEL_65;
      }
      v55 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v48);
      if ( Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) && (ServerDef = G_Vehicle_GetServerDef(_RDI->vehicle->defIndex), v55 != -1) && ServerDef->accurateShapeOverlap && (v57 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v55, 0), Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, v57)) )
      {
        if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 301, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( worldId, vehBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( worldId, vehBodyId )") )
          __debugbreak();
        if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, v57) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 302, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( worldId, hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( worldId, hitBodyId )") )
          __debugbreak();
        Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation);
        if ( PhysicsVehicle_Overlap_Shapes(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation, v57) )
        {
LABEL_72:
          v59 = ScriptContext_Server();
          if ( Scr_IsSystemActive(v59, 1u) )
          {
            GScr_AddEntity(_RDI);
            GScr_Notify(v48, scr_const.touch, 1u);
            GScr_AddEntity(v48);
            GScr_Notify(_RDI, scr_const.touch, 1u);
          }
          touch = v53->touch;
          if ( touch )
            touch(v48, _RDI, 1);
          EntHandlerList = v62;
          if ( _RDI->actor )
          {
            v61 = v62->touch;
            if ( v61 )
              v61(_RDI, v48, 1);
          }
          goto LABEL_65;
        }
      }
      else if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, v55, v48) )
      {
        goto LABEL_72;
      }
      EntHandlerList = v62;
LABEL_65:
      eTeam = v64;
      if ( ++v47 >= collectedEnts.count )
        goto LABEL_66;
    }
    GTrajectory::GTrajectory(&v67, v48);
    p_ps = &_RDI->client->ps;
    if ( !p_ps )
      goto LABEL_65;
    v54 = BG_PlayerTouchesItem(p_ps, &v48->s, level.time, &v67) == 0;
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
  __int64 v2; 
  bool IsPlayerZeroG; 
  const dvar_t *v20; 
  bool v25; 
  const dvar_t *v26; 
  gclient_s *client; 
  __int64 v28; 

  _RBX = ent;
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = _RBX - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v28) = _RBX - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, 2048) )
      __debugbreak();
  }
  if ( G_IsEntityInUse((__int16)v2) )
  {
    if ( !_RBX->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1744, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    IsPlayerZeroG = BG_IsPlayerZeroG(&_RBX->client->ps);
    _RCX = _RBX->sentient;
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+28h]
      vsubss  xmm2, xmm1, dword ptr [rbx+134h]
      vmovss  xmm0, dword ptr [rcx+24h]
    }
    if ( IsPlayerZeroG )
    {
      __asm
      {
        vsubss  xmm3, xmm0, dword ptr [rbx+130h]
        vmovss  xmm0, dword ptr [rcx+2Ch]
        vsubss  xmm4, xmm0, dword ptr [rbx+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@3c23d70a
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm4, xmm0, dword ptr [rbx+130h]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm3, xmm2, xmm2
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, cs:__real@3c23d70a
      }
    }
    _RBX->client->playerMoved = 1;
    v20 = DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates;
    if ( !DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_DisablePlayerNearestDataUpdates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( !v20->current.enabled )
    {
      _RCX = _RBX->sentient;
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+130h]
        vucomiss xmm1, dword ptr [rcx+24h]
      }
      if ( v20->current.enabled )
        goto LABEL_22;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+28h]
        vucomiss xmm0, dword ptr [rbx+134h]
      }
      if ( v20->current.enabled )
        goto LABEL_22;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+2Ch]
        vucomiss xmm0, dword ptr [rbx+138h]
      }
      if ( v20->current.enabled )
LABEL_22:
        v25 = 1;
      else
        v25 = 0;
      __asm { vmovss  dword ptr [rcx+24h], xmm1 }
      _RCX->oldOrigin.v[1] = _RBX->r.currentOrigin.v[1];
      _RCX->oldOrigin.v[2] = _RBX->r.currentOrigin.v[2];
      Sentient_CheckAndUpdateNearestData(_RBX->sentient, v25);
    }
    G_ActiveSP_ClientClaimNode(_RBX);
    Sentient_BanNearNodes(_RBX->sentient, 1);
    v26 = DVARBOOL_ufoHitsTriggers;
    if ( !DVARBOOL_ufoHitsTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ufoHitsTriggers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.enabled || (_RBX->client->flags & 3) == 0 )
    {
      client = _RBX->client;
      if ( client->ps.pm_type < 7 && !client->mpviewer )
        G_ActiveSP_TouchTriggers(_RBX);
    }
  }
}

/*
==============
G_ActiveSP_UpdatePlayers
==============
*/

void __fastcall G_ActiveSP_UpdatePlayers(double _XMM0_8)
{
  int commandTime; 
  gentity_s *v2; 
  gclient_s *client; 
  scrContext_t *v4; 

  commandTime = 0;
  v2 = NULL;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tThis is intended to replace a singleplayer-only feature", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( (int)SvClient::ms_clientCount > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 91, ASSERT_TYPE_ASSERT, "(SvClient::GetClientCount() <= 1)", "%s\n\tShould not use this function when more than one client is possible.", "SvClient::GetClientCount() <= 1") )
    __debugbreak();
  if ( G_IsEntityInUse(0) )
  {
    v2 = g_entities;
    if ( !g_entities->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1704, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client") )
      __debugbreak();
    commandTime = v2->client->ps.commandTime;
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
  if ( v2 )
  {
    client = v2->client;
    if ( client )
    {
      if ( SLOBYTE(client->flags) < 0 )
      {
        if ( client->ps.commandTime - commandTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_active_sp.cpp", 1731, ASSERT_TYPE_ASSERT, "(commandTime >= 0)", (const char *)&queryFormat, "commandTime >= 0") )
          __debugbreak();
        v4 = ScriptContext_Server();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vmulss  xmm1, xmm0, cs:__real@3a83126f; value
        }
        Scr_AddFloat(v4, *(float *)&_XMM1);
        GScr_Notify(v2, scr_const.on_player_update, 1u);
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
  gentity_s *v13; 
  vec3_t outAngles; 
  vec3_t outOrigin; 
  tmat43_t<vec3_t> outTagMat; 
  WorldUpReferenceFrame v17; 

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
      _RAX = ent->client;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+30h]
        vmovss  dword ptr [rsp+0C8h+outTagMat+24h], xmm0
        vmovss  xmm1, dword ptr [rax+34h]
        vmovss  dword ptr [rsp+0C8h+outTagMat+28h], xmm1
        vmovss  xmm0, dword ptr [rax+38h]
        vmovss  dword ptr [rsp+0C8h+outTagMat+2Ch], xmm0
      }
      Handler = GHandler::getHandler();
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v17, &client->ps, Handler);
      _RAX = ent->client;
      __asm { vmovss  xmm1, dword ptr [rax+1E8h]; height }
      WorldUpReferenceFrame::AddUpContribution(&v17, *(float *)&_XMM1, &outTagMat.m[3]);
    }
    BG_UpdateViewLinkedModelTransform(&client->ps.viewLinkedEntityData[i], &outTagMat, &outOrigin, &outAngles);
    v13 = &g_entities[client->ps.viewLinkedEntityData[i].linkedEnt];
    G_SetOriginAndAngle(v13, &outOrigin, &outAngles, 1, 1);
    if ( v13->r.isLinked )
      SV_LinkEntity(v13);
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

