/*
==============
SV_IsAgentScripted
==============
*/

int __fastcall SV_IsAgentScripted(const gentity_s *entity)
{
  return ?SV_IsAgentScripted@@YAHPEBUgentity_s@@@Z(entity);
}

/*
==============
SV_AgentEndFrame_VehicleAnimation
==============
*/

void __fastcall SV_AgentEndFrame_VehicleAnimation(gentity_s *ent)
{
  ?SV_AgentEndFrame_VehicleAnimation@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
SV_AgentUpdateInfo
==============
*/

int __fastcall SV_AgentUpdateInfo(gentity_s *entity)
{
  return ?SV_AgentUpdateInfo@@YAHPEAUgentity_s@@@Z(entity);
}

/*
==============
Agent_GetScriptedAgentInfo
==============
*/

ai_agent_t *__fastcall Agent_GetScriptedAgentInfo(const gentity_s *entity)
{
  return ?Agent_GetScriptedAgentInfo@@YAPEAUai_agent_t@@PEBUgentity_s@@@Z(entity);
}

/*
==============
SV_AgentUsabilityEnabled
==============
*/

int __fastcall SV_AgentUsabilityEnabled(gagent_s *agent)
{
  return ?SV_AgentUsabilityEnabled@@YAHPEAUgagent_s@@@Z(agent);
}

/*
==============
SV_UpdateAgents
==============
*/

void SV_UpdateAgents(void)
{
  ?SV_UpdateAgents@@YAXXZ();
}

/*
==============
Agent_HandleEvent
==============
*/

void __fastcall Agent_HandleEvent(gentity_s *ent, playerState_s *ps, int event, unsigned int eventParm, int serverTime)
{
  ?Agent_HandleEvent@@YAXPEAUgentity_s@@PEAUplayerState_s@@HIH@Z(ent, ps, event, eventParm, serverTime);
}

/*
==============
SV_AgentInitBotAI
==============
*/

void SV_AgentInitBotAI(void)
{
  ?SV_AgentInitBotAI@@YAXXZ();
}

/*
==============
SV_IsAgentEntity
==============
*/

int __fastcall SV_IsAgentEntity(const gentity_s *entity)
{
  return ?SV_IsAgentEntity@@YAHPEBUgentity_s@@@Z(entity);
}

/*
==============
SV_Agent_GetAllocationSize
==============
*/

unsigned int __fastcall SV_Agent_GetAllocationSize(int maxAgents)
{
  return ?SV_Agent_GetAllocationSize@@YAIH@Z(maxAgents);
}

/*
==============
Agent_SetStandardViewHeight
==============
*/

void __fastcall Agent_SetStandardViewHeight(gentity_s *ent)
{
  ?Agent_SetStandardViewHeight@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
SV_AgentGetVisiblePlayers
==============
*/

int __fastcall SV_AgentGetVisiblePlayers(gentity_s *agentEnt, const gentity_s **players, int maxCount)
{
  return ?SV_AgentGetVisiblePlayers@@YAHPEAUgentity_s@@PEAPEBU1@H@Z(agentEnt, players, maxCount);
}

/*
==============
SV_AgentEntityIsFrozen
==============
*/

int __fastcall SV_AgentEntityIsFrozen(gentity_s *entity)
{
  return ?SV_AgentEntityIsFrozen@@YAHPEAUgentity_s@@@Z(entity);
}

/*
==============
Agent_GetBotData
==============
*/

bot_data_t *__fastcall Agent_GetBotData(int agentIndex)
{
  return ?Agent_GetBotData@@YAPEAUbot_data_t@@H@Z(agentIndex);
}

/*
==============
SV_Agent_IsScripted
==============
*/

int __fastcall SV_Agent_IsScripted(int entityNum)
{
  return ?SV_Agent_IsScripted@@YAHH@Z(entityNum);
}

/*
==============
SV_AgentSetEntUsable
==============
*/

int __fastcall SV_AgentSetEntUsable(gentity_s *agentEnt, unsigned __int16 entnum)
{
  return ?SV_AgentSetEntUsable@@YAHPEAUgentity_s@@G@Z(agentEnt, entnum);
}

/*
==============
SV_AgentSetFireRecoil
==============
*/

void __fastcall SV_AgentSetFireRecoil(gentity_s *entity, const vec3_t *kickAVel)
{
  ?SV_AgentSetFireRecoil@@YAXPEAUgentity_s@@AEBTvec3_t@@@Z(entity, kickAVel);
}

/*
==============
SV_AgentSetEntUnusable
==============
*/

void __fastcall SV_AgentSetEntUnusable(gentity_s *agentEnt, unsigned __int16 entnum)
{
  ?SV_AgentSetEntUnusable@@YAXPEAUgentity_s@@G@Z(agentEnt, entnum);
}

/*
==============
SV_AgentSetLateralMoveStuck
==============
*/

void __fastcall SV_AgentSetLateralMoveStuck(gentity_s *entity, int stuck, int body)
{
  ?SV_AgentSetLateralMoveStuck@@YAXPEAUgentity_s@@HH@Z(entity, stuck, body);
}

/*
==============
SV_AgentInitAsScripted
==============
*/

void __fastcall SV_AgentInitAsScripted(gentity_s *entity)
{
  ?SV_AgentInitAsScripted@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
Agent_GetAICommonData
==============
*/

ai_common_t *__fastcall Agent_GetAICommonData(const gentity_s *entity)
{
  return ?Agent_GetAICommonData@@YAPEAUai_common_t@@PEBUgentity_s@@@Z(entity);
}

/*
==============
SV_AgentInitScriptable
==============
*/

void __fastcall SV_AgentInitScriptable(gentity_s *entity)
{
  ?SV_AgentInitScriptable@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
SV_AgentMP_AddAgent
==============
*/

gentity_s *__fastcall SV_AgentMP_AddAgent()
{
  return ?SV_AgentMP_AddAgent@@YAPEAUgentity_s@@XZ();
}

/*
==============
SV_AgentClientThink
==============
*/

void __fastcall SV_AgentClientThink(agent_t *agent, usercmd_s *cmd)
{
  ?SV_AgentClientThink@@YAXPEAUagent_t@@PEAUusercmd_s@@@Z(agent, cmd);
}

/*
==============
SV_ScrUpdateAgents
==============
*/

void SV_ScrUpdateAgents(void)
{
  ?SV_ScrUpdateAgents@@YAXXZ();
}

/*
==============
SV_AgentEndFrame
==============
*/

void __fastcall SV_AgentEndFrame(gentity_s *entity)
{
  ?SV_AgentEndFrame@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
SV_AgentSetAgentCount
==============
*/

void __fastcall SV_AgentSetAgentCount(const unsigned __int8 agentMaxCount)
{
  ?SV_AgentSetAgentCount@@YAXE@Z(agentMaxCount);
}

/*
==============
SV_IsAgent
==============
*/

int __fastcall SV_IsAgent(int clientNum)
{
  return ?SV_IsAgent@@YAHH@Z(clientNum);
}

/*
==============
SV_IsAgentBot
==============
*/

int __fastcall SV_IsAgentBot(int clientNum)
{
  return ?SV_IsAgentBot@@YAHH@Z(clientNum);
}

/*
==============
SV_AgentInitAsBot
==============
*/

void __fastcall SV_AgentInitAsBot(gentity_s *entity)
{
  ?SV_AgentInitAsBot@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
Agent_GetBotDataAndOnlyBotData
==============
*/

bot_data_t *__fastcall Agent_GetBotDataAndOnlyBotData(int agentIndex)
{
  return ?Agent_GetBotDataAndOnlyBotData@@YAPEAUbot_data_t@@H@Z(agentIndex);
}

/*
==============
Agent_Free
==============
*/

void __fastcall Agent_Free(gentity_s *agentEntity)
{
  ?Agent_Free@@YAXPEAUgentity_s@@@Z(agentEntity);
}

/*
==============
Agent_GetAIScriptedData
==============
*/

ai_scripted_t *__fastcall Agent_GetAIScriptedData(const gentity_s *entity)
{
  return ?Agent_GetAIScriptedData@@YAPEAUai_scripted_t@@PEBUgentity_s@@@Z(entity);
}

/*
==============
SV_AgentKilled
==============
*/

void __fastcall SV_AgentKilled(agent_t *agent)
{
  ?SV_AgentKilled@@YAXPEAUagent_t@@@Z(agent);
}

/*
==============
SV_Agent_AllocateMemory
==============
*/

void __fastcall SV_Agent_AllocateMemory(int maxAgents, HunkUser *hunkUser)
{
  ?SV_Agent_AllocateMemory@@YAXHPEAUHunkUser@@@Z(maxAgents, hunkUser);
}

/*
==============
SV_AgentShutdownAgentAI
==============
*/

void SV_AgentShutdownAgentAI(void)
{
  ?SV_AgentShutdownAgentAI@@YAXXZ();
}

/*
==============
SV_AgentEntityIsLookFrozen
==============
*/

bool __fastcall SV_AgentEntityIsLookFrozen(gentity_s *entity)
{
  return ?SV_AgentEntityIsLookFrozen@@YA_NPEAUgentity_s@@@Z(entity);
}

/*
==============
Agent_Events
==============
*/

void __fastcall Agent_Events(gentity_s *ent, int oldEventSequence)
{
  ?Agent_Events@@YAXPEAUgentity_s@@H@Z(ent, oldEventSequence);
}

/*
==============
Agent_GetScriptedAgentInfoByIndex
==============
*/

ai_agent_t *__fastcall Agent_GetScriptedAgentInfoByIndex(int agentIndex)
{
  return ?Agent_GetScriptedAgentInfoByIndex@@YAPEAUai_agent_t@@H@Z(agentIndex);
}

/*
==============
SV_Agent_FreeMemory
==============
*/

void SV_Agent_FreeMemory(void)
{
  ?SV_Agent_FreeMemory@@YAXXZ();
}

/*
==============
SV_AgentSetupAgentCount
==============
*/

unsigned __int8 __fastcall SV_AgentSetupAgentCount(const char *gameType)
{
  return ?SV_AgentSetupAgentCount@@YAEPEBD@Z(gameType);
}

/*
==============
SV_GetAgentControlledByPlayerNum
==============
*/

bool __fastcall SV_GetAgentControlledByPlayerNum(int entityNum, int *outControllingClientNum)
{
  return ?SV_GetAgentControlledByPlayerNum@@YA_NHPEAH@Z(entityNum, outControllingClientNum);
}

/*
==============
SV_AgentEndFrame_PostDObjAgentUpdate
==============
*/

void __fastcall SV_AgentEndFrame_PostDObjAgentUpdate(const characterInfo_t *ci, playerState_s *ps, agentState_s *as)
{
  ?SV_AgentEndFrame_PostDObjAgentUpdate@@YAXPEBUcharacterInfo_t@@PEAUplayerState_s@@PEAUagentState_s@@@Z(ci, ps, as);
}

/*
==============
SV_AgentMayUseEnt
==============
*/

bool __fastcall SV_AgentMayUseEnt(const gentity_s *agentEnt, unsigned __int16 entnum)
{
  return ?SV_AgentMayUseEnt@@YA_NPEBUgentity_s@@G@Z(agentEnt, entnum);
}

/*
==============
Agent_Spawn
==============
*/

void __fastcall Agent_Spawn(gentity_s *entity, const vec3_t *origin, const vec3_t *angles, const char *animClassName, const Bounds *bounds, unsigned int ownerNum, bool freezeControls, bool bLegacyAgent)
{
  ?Agent_Spawn@@YAXPEAUgentity_s@@AEBTvec3_t@@1PEBDPEBUBounds@@I_N4@Z(entity, origin, angles, animClassName, bounds, ownerNum, freezeControls, bLegacyAgent);
}

/*
==============
Agent_GetBotDataForEnt
==============
*/

bot_data_t *__fastcall Agent_GetBotDataForEnt(const gentity_s *agent)
{
  return ?Agent_GetBotDataForEnt@@YAPEAUbot_data_t@@PEBUgentity_s@@@Z(agent);
}

/*
==============
Agent_SetNonStandardViewHeight
==============
*/

void __fastcall Agent_SetNonStandardViewHeight(gentity_s *ent)
{
  ?Agent_SetNonStandardViewHeight@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
Agent_ApplyPMoveFlags
==============
*/
void Agent_ApplyPMoveFlags(const pmove_t *const pm, gentity_s *const ent)
{
  scrContext_t *v4; 
  GameScriptData *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 
  unsigned int v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1036, ASSERT_TYPE_ASSERT, "( pm != nullptr )", (const char *)&queryFormat, "pm != nullptr") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1037, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1038, ASSERT_TYPE_ASSERT, "( ent->agent != nullptr )", (const char *)&queryFormat, "ent->agent != nullptr") )
    __debugbreak();
  if ( (pm->m_flags & 0x20) != 0 )
  {
    v4 = ScriptContext_Server();
    if ( (_BYTE)GameScriptData::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_data_mp.h", 82, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
      __debugbreak();
    if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    v5 = GameScriptData::ms_gScriptData;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, pm->ps);
    v7 = BG_UsingAlternate(pm->ps);
    GScr_Weapon_AddParam(v4, CurrentWeaponForPlayer, v7);
    GScr_Weapon_AddParam(v4, &pm->prevWeapon, pm->prevAlternate);
    v8 = GScr_ExecEntThread(ent, v5[1].scriptable_touched, 2u);
    Scr_FreeThread(v4, v8);
  }
}

/*
==============
Agent_ClientThink
==============
*/
void Agent_ClientThink(gentity_s *entity, usercmd_s *cmd)
{
  gagent_s *agent; 
  int eventSequence; 
  usercmd_s *p_cmd; 
  __int64 v7; 
  __int64 v8; 
  usercmd_s *p_oldcmd; 
  usercmd_s *v10; 
  double v11; 
  double v12; 
  int clipmask; 
  gagent_s *v14; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v17; 
  __int64 v18; 
  __int64 v19; 
  double v20; 
  double v21; 
  vec3_t *p_currentOrigin; 
  float v23; 
  float v24; 
  gagent_s *v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  vec3_t *outNewAngles; 
  vec3_t *outShootingAnglesLocal; 
  __int64 v32[2]; 
  GPMove v33; 
  vec3_t v34; 
  Bounds v35; 
  vec3_t outViewAngles; 
  vec3_t outWeapAngles; 
  vec3_t outWeaponOrigin; 
  vec3_t v39; 
  char v40[96]; 
  vec3_t outWeapAnglesCategorized[30]; 

  v32[1] = -2i64;
  GPMove::GPMove(&v33);
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1073, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1074, ASSERT_TYPE_ASSERT, "(entity->agent)", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1075, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( cmd->serverTime > level.time )
    cmd->serverTime = level.time;
  agent = entity->agent;
  agent->playerState.speed = 190;
  v35 = playerBox;
  memset_0(v40, 0, sizeof(v40));
  if ( level.time > agent->playerState.shellshockTime + agent->playerState.shellshockDuration )
    agent->playerState.pm_flags.m_flags[0] &= ~0x200000u;
  eventSequence = agent->playerState.pe.eventSequence;
  v33.ps = &agent->playerState;
  p_cmd = &v33.cmd;
  v7 = 2i64;
  v8 = 2i64;
  do
  {
    *(__m256i *)&p_cmd->buttons = *(__m256i *)&cmd->buttons;
    *(__m256i *)(&p_cmd->angles.xy + 1) = *(__m256i *)(&cmd->angles.xy + 1);
    *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1] = *(__m256i *)&cmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&p_cmd->offHand.weaponIdx = *(_OWORD *)&cmd->offHand.weaponIdx;
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&cmd->offHand.weaponAttachments[2];
    cmd = (usercmd_s *)((char *)cmd + 128);
    --v8;
  }
  while ( v8 );
  p_cmd->buttons = cmd->buttons;
  p_oldcmd = &agent->oldcmd;
  v10 = &v33.oldcmd;
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
  v11 = BG_AnimationMP_UnpackPitch(entity->s.lerp.u.player.torsoPitchPacked);
  v33.fTorsoPitch = *(float *)&v11;
  v12 = BG_AnimationMP_UnpackPitch(entity->s.lerp.u.player.waistPitchPacked);
  v33.fWaistPitch = *(float *)&v12;
  v33.m_bgHandler = GHandler::getHandler();
  v33.localClientNum = LOCAL_CLIENT_INVALID;
  v33.bounds = &v35;
  v33.ground = (BgGroundState *)v40;
  v33.groundPersistent = &agent->playerGroundPersistent;
  G_Active_InitPmoveExternalSystems(&v33, entity->s.number, &agent->playerState, agent->movingPlatformHandle);
  clipmask = entity->clipmask;
  if ( v33.ps->pm_type >= 7 )
    clipmask &= 0xFDFFBFFF;
  v33.tracemask = clipmask;
  if ( (v33.m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1117, ASSERT_TYPE_ASSERT, "((pm.m_flags & PMF_MANTLE_STARTED) == 0)", (const char *)&queryFormat, "(pm.m_flags & PMF_MANTLE_STARTED) == 0") )
    __debugbreak();
  Profile_Begin(11);
  Pmove(&v33);
  Profile_EndInternal(NULL);
  Agent_ApplyPMoveFlags(&v33, entity);
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 959, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  v14 = entity->agent;
  Agent_UpdatePlayerView(v14, &v33.cmd, &outViewAngles, &outWeapAngles, (vec3_t (*)[30])outWeapAnglesCategorized, &outWeaponOrigin);
  Instance = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &v14->playerState);
  v17 = BG_UsingAlternate(&v14->playerState);
  BG_ApplyWeaponAnglesToShootingDirection(Instance, &v14->playerState, CurrentWeaponForPlayer, v17, &outWeapAngles, (const vec3_t (*)[30])outWeapAnglesCategorized, &outViewAngles, &v34, &v39);
  *(float *)v32 = v34.v[0];
  if ( (LODWORD(v34.v[0]) & 0x7F800000) == 2139095040 || (*(float *)v32 = v34.v[1], (LODWORD(v34.v[1]) & 0x7F800000) == 2139095040) || (*(float *)v32 = v34.v[2], (LODWORD(v34.v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 974, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gunAngles )[0] ) && !IS_NAN( ( gunAngles )[1] ) && !IS_NAN( ( gunAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( gunAngles )[0] ) && !IS_NAN( ( gunAngles )[1] ) && !IS_NAN( ( gunAngles )[2] )") )
      __debugbreak();
  }
  v14->gunPitch = v34.v[0];
  v14->gunYaw = v34.v[1];
  if ( agent->playerState.pe.eventSequence != eventSequence )
    entity->r.eventTime = level.time;
  G_Active_PlayerStateToEntityStateExtrapolate(&agent->playerState, &entity->s, v33.cmd.serverTime, 1);
  entity->s.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(v33.fTorsoPitch);
  entity->s.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(v33.fWaistPitch);
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)entity->s.number);
  v19 = v18;
  if ( (!v18 || !*(_DWORD *)(v18 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1140, ASSERT_TYPE_ASSERT, "(ci && ci->infoValid)", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  v20 = BG_AnimationMP_QuantizePitch(v33.fTorsoPitch);
  *(float *)(v19 + 2768) = *(float *)&v20;
  v21 = BG_AnimationMP_QuantizePitch(v33.fWaistPitch);
  *(float *)(v19 + 2772) = *(float *)&v21;
  p_currentOrigin = &entity->r.currentOrigin;
  if ( entity == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( entity->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
  {
    v32[0] = (__int64)&entity->r.currentOrigin;
    v23 = entity->s.lerp.pos.trBase.v[0];
    v24 = entity->s.lerp.pos.trBase.v[1];
    LODWORD(entity->r.currentOrigin.v[2]) = LODWORD(v24) ^ LODWORD(entity->s.lerp.pos.trBase.v[2]) ^ s_trbase_aab_Z;
    LODWORD(entity->r.currentOrigin.v[1]) = LODWORD(v23) ^ LODWORD(v24) ^ s_trbase_aab_Y;
    LODWORD(p_currentOrigin->v[0]) = LODWORD(v23) ^ ~s_trbase_aab_X;
    memset(v32, 0, 8ui64);
    *(float *)v32 = p_currentOrigin->v[0];
    if ( (v32[0] & 0x7F800000) == 2139095040 || (*(float *)v32 = entity->r.currentOrigin.v[1], (v32[0] & 0x7F800000) == 2139095040) || (*(float *)v32 = entity->r.currentOrigin.v[2], (v32[0] & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    p_currentOrigin->v[0] = entity->s.lerp.pos.trBase.v[0];
    entity->r.currentOrigin.v[1] = entity->s.lerp.pos.trBase.v[1];
    entity->r.currentOrigin.v[2] = entity->s.lerp.pos.trBase.v[2];
  }
  entity->r.box = v35;
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 853, ASSERT_TYPE_ASSERT, "( ent->agent )", (const char *)&queryFormat, "ent->agent") )
    __debugbreak();
  v25 = entity->agent;
  v26 = v25->playerState.pe.eventSequence;
  v27 = v26 - 4;
  if ( eventSequence >= v26 - 4 )
    v27 = eventSequence;
  if ( v26 != (unsigned __int16)v26 )
  {
    LODWORD(outShootingAnglesLocal) = (unsigned __int16)v26;
    LODWORD(outNewAngles) = v25->playerState.pe.eventSequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1814, ASSERT_TYPE_ASSERT, "( eventSeq ) == ( BG_ExtractHighLodEventSeq( eventSeq ) )", "%s == %s\n\t%i, %i", "eventSeq", "BG_ExtractHighLodEventSeq( eventSeq )", outNewAngles, outShootingAnglesLocal) )
      __debugbreak();
  }
  if ( v27 != (unsigned __int16)v27 )
  {
    LODWORD(outShootingAnglesLocal) = (unsigned __int16)v27;
    LODWORD(outNewAngles) = v27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1815, ASSERT_TYPE_ASSERT, "( oldEventSeq ) == ( BG_ExtractHighLodEventSeq( oldEventSeq ) )", "%s == %s\n\t%i, %i", "oldEventSeq", "BG_ExtractHighLodEventSeq( oldEventSeq )", outNewAngles, outShootingAnglesLocal) )
      __debugbreak();
  }
  v28 = v26 + 64;
  v29 = v27 - 256;
  if ( v27 <= v28 )
    v29 = v27;
  for ( ; v29 < v25->playerState.pe.eventSequence; ++v29 )
    Agent_HandleEvent(entity, &v25->playerState, v25->playerState.pe.events[v29 & 3].eventType, v25->playerState.pe.events[v29 & 3].eventParm, v25->lastServerTime);
  SV_LinkEntity(entity);
  G_ActiveMP_TouchEnts(entity, v33.numtouch, v33.touchents, v33.toucherflags);
  p_currentOrigin->v[0] = agent->playerState.origin.v[0];
  entity->r.currentOrigin.v[1] = agent->playerState.origin.v[1];
  entity->r.currentOrigin.v[2] = agent->playerState.origin.v[2];
  *(_QWORD *)entity->r.currentAngles.v = 0i64;
  entity->r.currentAngles.v[2] = 0.0;
  entity->r.currentAngles.v[1] = agent->playerState.viewangles.v[1];
  GPMove::~GPMove(&v33);
}

/*
==============
Agent_DamageFeedback
==============
*/
void Agent_DamageFeedback(gentity_s *entity)
{
  gagent_s *agent; 
  int maxHealth; 
  int damageBlood; 
  int damageRicochet; 
  int v5; 
  int damageArmor; 
  int v8; 
  __int128 v9; 
  __int128 v14; 
  __int128 v18; 
  float v20; 
  float v21; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  float viewKickScale; 
  float viewKickMin; 
  float viewKickMax; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  agent = entity->agent;
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 426, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  if ( agent->playerState.pm_type < 7 )
  {
    if ( level.time - agent->damageTime > 500 )
      agent->playerState.damageCount = 0;
    maxHealth = agent->maxHealth;
    if ( maxHealth > 0 )
    {
      damageBlood = agent->damageBlood;
      if ( damageBlood > 0 || (damageBlood = agent->damageStun, damageBlood > 0) )
      {
        damageRicochet = agent->damageRicochet;
        v5 = 0;
        if ( damageRicochet > 0 && damageRicochet == damageBlood )
          v5 = 3;
        damageArmor = agent->damageArmor;
        if ( damageArmor > 0 && damageArmor == damageBlood )
          v5 = 4;
        _XMM7 = LODWORD(FLOAT_255_0);
        v8 = I_clamp(100 * damageBlood / maxHealth, 1, 127);
        v9 = 0i64;
        *(float *)&v9 = (float)v8;
        _XMM6 = v9;
        *(float *)&v9 = *(float *)&v9 + agent->playerState.weapCommon.aimSpreadScale;
        _XMM1 = v9;
        __asm
        {
          vcmpltss xmm0, xmm7, xmm1
          vblendvps xmm1, xmm1, xmm7, xmm0
        }
        v14 = _XMM6;
        *(float *)&v14 = *(float *)&_XMM6 + *(float *)&_XMM1;
        _XMM2 = v14;
        __asm
        {
          vcmpltss xmm0, xmm7, xmm2
          vblendvps xmm0, xmm2, xmm7, xmm0
        }
        agent->playerState.weapCommon.aimSpreadScale = *(float *)&_XMM0;
        BG_GetDamageViewKickScaleValues(&agent->playerState, &agent->cmd, &viewKickScale, &viewKickMin, &viewKickMax);
        v18 = _XMM6;
        *(float *)&v18 = *(float *)&_XMM6 * viewKickScale;
        _XMM0 = v18;
        *(float *)&_XMM6 = viewKickMin;
        if ( *(float *)&v18 >= viewKickMin )
          __asm { vminss  xmm6, xmm0, [rsp+0D8h+viewKickMax] }
        v20 = agent->playerState.viewKickScale;
        if ( v20 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 477, ASSERT_TYPE_ASSERT, "( agent->playerState.viewKickScale ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "agent->playerState.viewKickScale", "0.0f", v20, 0.0) )
          __debugbreak();
        v21 = *(float *)&_XMM6 * agent->playerState.viewKickScale;
        if ( agent->damageFromWorld )
        {
          agent->damagePitch = COERCE_FLOAT(LODWORD(v21) ^ _xmm);
          agent->damageRoll = 0.0;
          v22 = -1;
          agent->playerState.damagePitch = -1;
          agent->damageFromWorld = 0;
        }
        else
        {
          vectoangles(&agent->damageFrom, &angles);
          AnglesToAxis(&agent->playerState.viewangles, &axis);
          agent->damageRoll = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(axis.m[1].v[1] * agent->damageFrom.v[1]) + (float)(axis.m[1].v[0] * agent->damageFrom.v[0])) + (float)(axis.m[1].v[2] * agent->damageFrom.v[2])) * v21) ^ _xmm);
          agent->damagePitch = (float)((float)((float)(axis.m[0].v[1] * agent->damageFrom.v[1]) + (float)(axis.m[0].v[0] * agent->damageFrom.v[0])) + (float)(axis.m[0].v[2] * agent->damageFrom.v[2])) * v21;
          agent->playerState.damagePitch = truncate_cast<unsigned char,int>((int)(float)((float)(0.0027777778 * angles.v[0]) * 255.0));
          v22 = truncate_cast<unsigned char,int>((int)(float)((float)(0.0027777778 * angles.v[1]) * 255.0));
        }
        agent->playerState.damageYaw = v22;
        ++agent->playerState.damageEvent;
        agent->damageTime = level.time - 20;
        v23 = truncate_cast<unsigned char,int>(v8);
        agent->playerState.damageType = v5;
        *(_QWORD *)&agent->damageBlood = 0i64;
        *(_QWORD *)&agent->damageRicochet = 0i64;
        agent->playerState.damageCount = v23;
      }
    }
  }
}

/*
==============
Agent_Events
==============
*/
void Agent_Events(gentity_s *ent, int oldEventSequence)
{
  gagent_s *agent; 
  int eventSequence; 
  int v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 852, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 853, ASSERT_TYPE_ASSERT, "( ent->agent )", (const char *)&queryFormat, "ent->agent") )
    __debugbreak();
  agent = ent->agent;
  eventSequence = agent->playerState.pe.eventSequence;
  if ( oldEventSequence < eventSequence - 4 )
    oldEventSequence = eventSequence - 4;
  if ( eventSequence != (unsigned __int16)eventSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1814, ASSERT_TYPE_ASSERT, "( eventSeq ) == ( BG_ExtractHighLodEventSeq( eventSeq ) )", "%s == %s\n\t%i, %i", "eventSeq", "BG_ExtractHighLodEventSeq( eventSeq )", agent->playerState.pe.eventSequence, (unsigned __int16)eventSequence) )
    __debugbreak();
  if ( oldEventSequence != (unsigned __int16)oldEventSequence )
  {
    LODWORD(v9) = (unsigned __int16)oldEventSequence;
    LODWORD(v8) = oldEventSequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1815, ASSERT_TYPE_ASSERT, "( oldEventSeq ) == ( BG_ExtractHighLodEventSeq( oldEventSeq ) )", "%s == %s\n\t%i, %i", "oldEventSeq", "BG_ExtractHighLodEventSeq( oldEventSeq )", v8, v9) )
      __debugbreak();
  }
  v6 = eventSequence + 64;
  v7 = oldEventSequence - 256;
  if ( oldEventSequence <= v6 )
    v7 = oldEventSequence;
  for ( ; v7 < agent->playerState.pe.eventSequence; ++v7 )
    Agent_HandleEvent(ent, &agent->playerState, agent->playerState.pe.events[v7 & 3].eventType, agent->playerState.pe.events[v7 & 3].eventParm, agent->lastServerTime);
}

/*
==============
Agent_Free
==============
*/
void Agent_Free(gentity_s *agentEntity)
{
  unsigned int EntityIndex; 
  unsigned int AgentIndexFromEntityIndex; 
  __int64 v4; 
  const DObj *ServerDObjForEnt; 
  DObj *v6; 
  Ai_Asm *v7; 
  bot_data_t *BotDataAndOnlyBotData; 
  bot_data_t *v9; 
  scrContext_t *v10; 
  XAnimTree *v11; 
  unsigned int runtimeInstanceCount; 
  __int64 v13; 
  __int64 v14; 

  EntityIndex = G_GetEntityIndex(agentEntity);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( EntityIndex >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v13) = EntityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1497, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "entityNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v13, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(EntityIndex);
  if ( AgentIndexFromEntityIndex >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
  {
    LODWORD(v14) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
    LODWORD(v13) = AgentIndexFromEntityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1500, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, EntityIndex);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1504, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
    __debugbreak();
  while ( agentEntity->tagChildren )
  {
    GScr_Notify(agentEntity->tagChildren, scr_const.invalid_parent, 0);
    G_EntUnlink(agentEntity->tagChildren);
  }
  if ( agentEntity->hasSpawnInfluencePoint )
    G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity(agentEntity->influencePointIndex, agentEntity);
  ServerDObjForEnt = Com_GetServerDObjForEnt(agentEntity);
  v6 = (DObj *)ServerDObjForEnt;
  if ( ServerDObjForEnt && ServerDObjForEnt->tree )
  {
    XAnimClearTree(ServerDObjForEnt);
    DObjSetTree(v6, NULL);
  }
  Com_SafeServerDObjFree(EntityIndex);
  if ( !SV_IsAgent(EntityIndex) || SV_Agent_IsScripted(EntityIndex) )
  {
    v7 = Ai_Asm::Singleton();
    Ai_Asm::FreeInstance(v7, NULL, EntityIndex);
  }
  BotDataAndOnlyBotData = Agent_GetBotDataAndOnlyBotData(AgentIndexFromEntityIndex);
  v9 = BotDataAndOnlyBotData;
  if ( BotDataAndOnlyBotData->bIsScriptedAgent )
  {
    ScrAgent_CleanupAgentInfo(BotDataAndOnlyBotData, agentEntity);
    G_SaveMP_ScrFreeAgentFields((ai_agent_t *)&v9->8);
    v10 = ScriptContext_Server();
    Scr_ClearEntityNum(v10, EntityIndex, ENTITY_CLASS_GENTITY);
    Scr_ClearBlackboard(EntityIndex);
  }
  v11 = *(XAnimTree **)(v4 + 2040);
  if ( v11 )
  {
    Com_XAnimFreeSmallTree(v11);
    *(_QWORD *)(v4 + 2040) = 0i64;
  }
  AI_BT_FreeTreeInstance(EntityIndex);
  EntHandleDissociate(agentEntity);
  Scr_SetString(&agentEntity->classname, (scr_string_t)0);
  Scr_SetString(&agentEntity->script_classname, (scr_string_t)0);
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( ScriptableSv_GetScriptableIndexForEntity(agentEntity) < runtimeInstanceCount )
    ScriptableSv_UnlinkReservedScriptableEntity(agentEntity);
  G_ClearDialogQueue(agentEntity);
  agentEntity->agent->flags = 0;
  UsableHandle::setEnt(&agentEntity->agent->useHoldEntity, NULL);
  UsableHandle::setEnt(&agentEntity->agent->lastHoldEntity, NULL);
  Scr_SetString(&agentEntity->agent->attachShieldTagName, (scr_string_t)0);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&agentEntity->agent->playerState.eFlags, ACTIVE, 0x10u);
  agentEntity->r.svFlags &= 0xF5u;
  agentEntity->r.svFlags |= 1u;
  agentEntity->s.eType = ET_INVISIBLE;
  SV_LinkEntity(agentEntity);
  G_PhysicsCharacterProxy_RemoveCharacter(agentEntity);
}

/*
==============
Agent_GetAICommonData
==============
*/
$3396140AF3A78F7FCD1D73807E505015 *Agent_GetAICommonData(const gentity_s *entity)
{
  __int64 AgentIndexFromEntityIndex; 
  __int64 v4; 
  int agentCount; 

  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 163, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(entity->s.number);
  if ( SV_Agent_IsScripted(entity->s.number) )
    return ($3396140AF3A78F7FCD1D73807E505015 *)Agent_GetScriptedAgentInfoByIndex(AgentIndexFromEntityIndex);
  if ( (unsigned int)AgentIndexFromEntityIndex >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
  {
    agentCount = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
    LODWORD(v4) = AgentIndexFromEntityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 173, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v4, agentCount) )
      __debugbreak();
  }
  return &s_agent_data[AgentIndexFromEntityIndex].8;
}

/*
==============
Agent_GetAIScriptedData
==============
*/
ai_agent_t *Agent_GetAIScriptedData(const gentity_s *entity)
{
  int AgentIndexFromEntityIndex; 

  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 155, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  if ( !SV_Agent_IsScripted(entity->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 156, ASSERT_TYPE_ASSERT, "( SV_Agent_IsScripted( entity->s.number ) )", (const char *)&queryFormat, "SV_Agent_IsScripted( entity->s.number )") )
    __debugbreak();
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(entity->s.number);
  return Agent_GetScriptedAgentInfoByIndex(AgentIndexFromEntityIndex);
}

/*
==============
Agent_GetBotData
==============
*/
bot_data_t *Agent_GetBotData(int agentIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int agentCount; 

  v1 = agentIndex;
  if ( (unsigned int)agentIndex >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
  {
    agentCount = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v4, agentCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)v1 >= ComCharacterLimits::ms_gameData.m_agentCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v5) = ComCharacterLimits::ms_gameData.m_agentCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( SV_Agent_IsScripted(v1 + ComCharacterLimits::ms_gameData.m_clientCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 106, ASSERT_TYPE_ASSERT, "( !SV_Agent_IsScripted( ComCharacterLimits::GetEntityIndexFromAgentIndex( agentIndex ) ) )", (const char *)&queryFormat, "!SV_Agent_IsScripted( ComCharacterLimits::GetEntityIndexFromAgentIndex( agentIndex ) )") )
    __debugbreak();
  return &s_agent_data[v1];
}

/*
==============
Agent_GetBotDataAndOnlyBotData
==============
*/
bot_data_t *Agent_GetBotDataAndOnlyBotData(int agentIndex)
{
  __int64 v1; 
  int v3; 
  int agentCount; 

  v1 = agentIndex;
  if ( (unsigned int)agentIndex >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
  {
    agentCount = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v3, agentCount) )
      __debugbreak();
  }
  return &s_agent_data[v1];
}

/*
==============
Agent_GetBotDataForEnt
==============
*/
bot_data_t *Agent_GetBotDataForEnt(const gentity_s *agent)
{
  int AgentIndexFromEntityIndex; 

  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 114, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(agent->s.number);
  return Agent_GetBotData(AgentIndexFromEntityIndex);
}

/*
==============
Agent_GetIndex
==============
*/
__int64 Agent_GetIndex(const agent_t *agent)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  __int64 v3; 
  unsigned int agentCount; 
  __int64 v5; 
  int v7; 
  unsigned int v8; 

  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v3 = (unsigned __int128)(((char *)agent - (char *)PersistentGlobalsMP->agents) * (__int128)0xEA0EA0EA0EA0EA1i64) >> 64;
  agentCount = PersistentGlobalsMP->agentCount;
  v5 = ((unsigned __int64)v3 >> 63) + (v3 >> 4);
  if ( (unsigned int)v5 >= agentCount )
  {
    v8 = agentCount;
    v7 = ((unsigned __int64)v3 >> 63) + (v3 >> 4);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 202, ASSERT_TYPE_SANITY, "(unsigned)( agentIndex ) < (unsigned)( svPers->agentCount )", "agentIndex doesn't index svPers->agentCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned int)v5;
}

/*
==============
Agent_GetScriptedAgentInfo
==============
*/
ai_agent_t *Agent_GetScriptedAgentInfo(const gentity_s *entity)
{
  int AgentIndexFromEntityIndex; 

  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 188, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  if ( !SV_Agent_IsScripted(entity->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 189, ASSERT_TYPE_ASSERT, "( SV_Agent_IsScripted( entity->s.number ) )", (const char *)&queryFormat, "SV_Agent_IsScripted( entity->s.number )") )
    __debugbreak();
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(entity->s.number);
  return Agent_GetScriptedAgentInfoByIndex(AgentIndexFromEntityIndex);
}

/*
==============
Agent_GetScriptedAgentInfoByIndex
==============
*/
$3396140AF3A78F7FCD1D73807E505015 *Agent_GetScriptedAgentInfoByIndex(int agentIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int agentCount; 

  v1 = agentIndex;
  if ( (unsigned int)agentIndex >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
  {
    agentCount = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 144, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v4, agentCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)v1 >= ComCharacterLimits::ms_gameData.m_agentCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v5) = ComCharacterLimits::ms_gameData.m_agentCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( !SV_Agent_IsScripted(v1 + ComCharacterLimits::ms_gameData.m_clientCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 146, ASSERT_TYPE_ASSERT, "( SV_Agent_IsScripted( ComCharacterLimits::GetEntityIndexFromAgentIndex( agentIndex ) ) )", (const char *)&queryFormat, "SV_Agent_IsScripted( ComCharacterLimits::GetEntityIndexFromAgentIndex( agentIndex ) )") )
    __debugbreak();
  return &s_agent_data[v1].8;
}

/*
==============
Agent_HandleEvent
==============
*/
void Agent_HandleEvent(gentity_s *ent, playerState_s *ps, int event, unsigned int eventParm, int serverTime)
{
  __int64 v6; 
  GWeaponMap *Instance; 
  scrContext_t *v10; 
  const char *EventTypeName; 
  bool v12; 
  bool v13; 
  const Weapon *Weapon; 
  void (__fastcall *die)(gentity_s *, const gentity_s *, gentity_s *, const int, const int, const int, const Weapon *, bool, const vec3_t *, const hitLocation_t, int); 
  __int16 throwbackGrenadeOwner; 
  unsigned int v17; 
  float v18; 
  float v19; 
  float v20; 
  sentient_s *sentient; 
  bool v22; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v24; 
  bitarray<224> *p_result; 
  ai_event_t v26; 
  GExtraDamageParams extraParams; 
  unsigned int damage; 
  unsigned int surfType; 
  unsigned int viewDip; 
  unsigned int weaponRattleType; 
  unsigned int clothType; 
  Weapon r_offHandWeapon; 
  vec3_t outParams; 
  bitarray<224> result; 
  GGlassBreakParms params; 

  v6 = (int)eventParm;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 523, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 524, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  v10 = ScriptContext_Server();
  EventTypeName = BG_GetEventTypeName(event);
  Sys_ProfBeginNamedEvent(0xFFu, EventTypeName);
  if ( !G_GameInterface_Agent_HandleEvent(ent, ps, event, v6, serverTime) )
  {
    switch ( event )
    {
      case 18:
        if ( !BG_IsCharacterEntity(&ent->s) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 631, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &ent->s )") )
          __debugbreak();
        GScr_Notify(ent, scr_const.empty_offhand, 0);
        break;
      case 20:
        if ( !BG_IsCharacterEntity(&ent->s) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 650, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &ent->s )") )
          __debugbreak();
        GScr_Notify(ent, scr_const.offhand_end, 0);
        break;
      case 28:
        if ( !BG_IsCharacterEntity(&ent->s) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 636, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &ent->s )") )
          __debugbreak();
        GScr_Notify(ent, scr_const.reload_start, 0);
        break;
      case 29:
        if ( !BG_IsCharacterEntity(&ent->s) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 655, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &ent->s )") )
          __debugbreak();
        GScr_Notify(ent, scr_const.reload, 0);
        break;
      case 30:
        if ( !BG_IsCharacterEntity(&ent->s) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 643, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &ent->s )") )
          __debugbreak();
        G_Active_SetupGestureStopParams(ps, serverTime, v6, (GGestureStopParms *const)&outParams);
        G_Active_GestureStopEvent((const GGestureStopParms *const)&outParams, ent);
        break;
      case 35:
      case 36:
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        v12 = BG_UsingAlternate(ps);
        GScr_Weapon_AddParam(v10, &r_offHandWeapon, v12);
        GScr_Notify(ent, scr_const.weapon_switch_started, 1u);
        break;
      case 37:
      case 77:
        GScr_Weapon_AddParam(v10, &r_offHandWeapon, 0);
        GScr_Notify(ent, scr_const.grenade_pullback, 1u);
        break;
      case 40:
      case 42:
      case 43:
      case 44:
      case 48:
      case 49:
      case 50:
      case 51:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 82:
      case 210:
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
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 89:
      case 90:
      case 91:
        G_Weapon_Fire(ent, serverTime, (const entity_event_t)event, v6);
        break;
      case 73:
        if ( !Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 595, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTED_MELEE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTED_MELEE )") )
          __debugbreak();
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
        Weapon = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        *(__m256i *)&r_offHandWeapon.weaponIdx = *(__m256i *)&Weapon->weaponIdx;
        *(_OWORD *)&r_offHandWeapon.attachmentVariationIndices[5] = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
        *(_QWORD *)&r_offHandWeapon.attachmentVariationIndices[21] = *(_QWORD *)&Weapon->attachmentVariationIndices[21];
        LODWORD(Weapon) = *(_DWORD *)&Weapon->weaponCamo;
        ent->health = 0;
        ps->stats[0] = 0;
        *(_DWORD *)&r_offHandWeapon.weaponCamo = (_DWORD)Weapon;
        if ( BG_IsCharacterEntity(&ent->s) )
        {
          die = G_Main_GetEntHandlerList(ent)->die;
          if ( die )
          {
            throwbackGrenadeOwner = ps->throwbackGrenadeOwner;
            if ( throwbackGrenadeOwner == 2047 )
              die(ent, ent, ent, 100000, 0, 14, &r_offHandWeapon, 0, NULL, HITLOC_NONE, 0);
            else
              die(ent, &g_entities[throwbackGrenadeOwner], &g_entities[throwbackGrenadeOwner], 100000, 0, 4, &r_offHandWeapon, 0, NULL, HITLOC_NONE, 0);
          }
        }
        break;
      case 136:
        if ( !BG_IsCharacterEntity(&ent->s) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 660, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &ent->s )") )
          __debugbreak();
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        G_Active_NotifyDetonate(ent, &r_offHandWeapon);
        break;
      case 209:
        G_Active_Glass_SetupBreakParams(ps, ent, &params);
        G_Active_Glass_PlayerBreakEvent(&params, ent);
        break;
      case 226:
        r_offHandWeapon = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)v6);
        v13 = BG_UsingAlternate(ps);
        GScr_Weapon_AddParam(v10, &r_offHandWeapon, v13);
        GScr_Notify(ent, scr_const.weapon_switch_canceled, 1u);
        break;
      default:
        v17 = 0;
        if ( BG_IsPainLandingEvent(event) && BG_IsCharacterEntity(&ent->s) )
        {
          if ( (unsigned int)v6 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v6, "unsigned", (unsigned int)v6) )
            __debugbreak();
          BG_UnpackHardLandingEventParm(v6, &damage, (int *)&outParams, &clothType, &weaponRattleType, &viewDip, &surfType);
          v18 = (float)damage;
          v19 = v18 * 0.0099999998;
          if ( (float)(v18 * 0.0099999998) > 0.0 )
          {
            memset(&r_offHandWeapon, 0, 48);
            *(double *)&r_offHandWeapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
            v20 = (float)ps->stats[2];
            *(_DWORD *)&r_offHandWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
            extraParams = 0;
            G_CombatMP_Damage(ent, NULL, NULL, NULL, NULL, (int)(float)(v20 * v19), 0, 13, &r_offHandWeapon, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
          }
        }
        if ( (unsigned int)(event - 171) <= 2 || event == 180 || BG_IsLandingEvent(event) || BG_IsPainLandingEvent(event) )
        {
          sentient = ent->sentient;
          if ( sentient )
          {
            if ( level.teammode == TEAMMODE_FFA )
            {
              v22 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
              if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
                AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
              else
                AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
              *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
              *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
              v24 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
              if ( v22 )
                result.array[0] &= ~0x8000000u;
              result.array[6] = v24 & 0xFF9FFFFF;
            }
            else
            {
              Com_Teams_GetEnemyTeamFlags(&result, sentient->eTeam);
            }
            p_result = &result;
            while ( !p_result->array[0] )
            {
              ++v17;
              p_result = (bitarray<224> *)((char *)p_result + 4);
              if ( v17 >= 7 )
                goto $LN88_3;
            }
            Sentient_GetOrigin(ent->sentient, &outParams);
            if ( event == 173 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x19u) )
            {
              v26 = AI_EV_FOOTSTEP_WALK;
            }
            else
            {
              v26 = AI_EV_FOOTSTEP;
              if ( event == 171 )
                v26 = AI_EV_FOOTSTEP_SPRINT;
            }
            Actor_BroadcastPointEvent(ent, v26, &result, &outParams);
          }
        }
        break;
    }
  }
$LN88_3:
  Sys_ProfEndNamedEvent();
}

/*
==============
Agent_SetNonStandardViewHeight
==============
*/
void Agent_SetNonStandardViewHeight(gentity_s *ent)
{
  playerState_s *EntityPlayerState; 
  const DObj *ServerDObjForEnt; 
  int v4; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex[3]; 
  DObjAnimMat outMat; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1006, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1014, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1017, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_27(ServerDObjForEnt, scr_const.tag_eye, inOutIndex, modelIndex) )
  {
    DObjGetBasePoseMatrix(ServerDObjForEnt, inOutIndex[0], &outMat);
    v4 = (int)outMat.trans.v[2];
    EntityPlayerState->viewHeightCurrent = (float)(int)outMat.trans.v[2];
    EntityPlayerState->viewHeightTarget = v4;
  }
  else
  {
    Agent_SetStandardViewHeight(ent);
  }
}

/*
==============
Agent_SetStandardViewHeight
==============
*/
void Agent_SetStandardViewHeight(gentity_s *ent)
{
  playerState_s *EntityPlayerState; 
  const SuitDef *SuitDef; 
  int viewheight_stand; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 986, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 991, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(EntityPlayerState->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 994, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  viewheight_stand = SuitDef->viewheight_stand;
  EntityPlayerState->viewHeightCurrent = (float)viewheight_stand;
  EntityPlayerState->viewHeightTarget = viewheight_stand;
}

/*
==============
Agent_Spawn
==============
*/
void Agent_Spawn(gentity_s *entity, const vec3_t *origin, const vec3_t *angles, const char *animClassName, const Bounds *bounds, unsigned int ownerNum, bool freezeControls, bool bLegacyAgent)
{
  gagent_s *agent; 
  signed __int64 v10; 
  unsigned int v11; 
  int v12; 
  unsigned __int16 model; 
  __int128 v14; 
  double v15; 
  __int128 v16; 
  GWeaponMap *Instance; 
  GWeaponMap *v18; 
  GHandler *Handler; 
  EdgeQueryCache *v20; 
  GAntiLagMP *AntiLagMP; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  char *v26; 
  scr_string_t String; 
  unsigned int v28; 
  const Bounds *v29; 
  int v30; 
  int v31; 
  GWeaponMap *v32; 
  GHandler *v33; 
  SvPersistentGlobalsMP *v34; 
  usercmd_s *p_lastUsercmd; 
  usercmd_s *p_cmd; 
  __int64 v37; 
  unsigned int v38; 
  unsigned __int16 *v39; 
  vec3_t *v40; 
  int v41; 
  int commandTime; 
  int v43; 
  const DObj *ServerDObjForEnt; 
  const ScriptableDef *ScriptableDef; 
  unsigned int runtimeInstanceCount; 
  int number; 
  __int64 AgentIndexFromEntityIndex; 
  bot_data_t *v49; 
  playerState_s *EntityPlayerState; 
  const DObj *v51; 
  int v52; 
  ai_agent_t *ScriptedAgentInfo; 
  ai_agent_t *v54; 
  AIScriptedInterface *v55; 
  __int64 v56; 
  bot_data_t *v57; 
  gagent_s *v58; 
  __int64 v59; 
  __int64 v60; 
  __int16 inOutIndex[2]; 
  unsigned int outIndex; 
  int modelIndex; 
  char *name; 
  int pOutStartEntry[2]; 
  unsigned int v66; 
  int lastServerTime; 
  unsigned __int64 v68; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  vec3_t *origina; 
  vec3_t *angle; 
  AIAgentInterface v72; 
  AIScriptedInterface *v73; 
  __int64 v74; 
  int v75; 
  __int64 v76; 
  __m256i v77; 
  __m256i v78; 
  DObjAnimMat outMat; 

  v74 = -2i64;
  name = (char *)animClassName;
  angle = (vec3_t *)angles;
  origina = (vec3_t *)origin;
  v75 = 48;
  v76 = 0i64;
  SV_Profile_BeginEvent(SVPROF_AI_SPAWNING);
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1204, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1205, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  if ( !entity->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1206, ASSERT_TYPE_ASSERT, "( entity->sentient != 0 )", (const char *)&queryFormat, "entity->sentient != NULL") )
    __debugbreak();
  agent = entity->agent;
  v10 = agent - level.agents;
  inOutIndex[0] = G_GetEntityIndex(entity);
  v11 = inOutIndex[0];
  if ( (unsigned int)inOutIndex[0] >= 0x800 )
  {
    LODWORD(v59) = inOutIndex[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v59, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[inOutIndex[0]].r.isInUse != g_entityIsInUse[inOutIndex[0]] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[inOutIndex[0]] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1211, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entityNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entityNum )") )
    __debugbreak();
  G_EntUnlink(entity);
  if ( entity->r.isLinked )
    SV_UnlinkEntity(entity);
  lastServerTime = agent->lastServerTime;
  modelIndex = agent->playerState.stats[3];
  *(_QWORD *)pOutStartEntry = entity->sentient;
  if ( agent == (gagent_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 280, ASSERT_TYPE_ASSERT, "(sourceFlags)", (const char *)&queryFormat, "sourceFlags") )
    __debugbreak();
  v12 = agent->playerState.eFlags.m_flags[0] & 4;
  model = entity->model;
  v77 = *(__m256i *)entity->attachModelNames;
  v14 = *(_OWORD *)&entity->attachModelNames[16];
  v15 = *(double *)&entity->attachModelNames[24];
  v78 = *(__m256i *)entity->attachTagNames;
  v72 = *(AIAgentInterface *)&entity->attachTagNames[8];
  outMat = *(DObjAnimMat *)&entity->attachTagNames[16];
  v16 = *(_OWORD *)&entity->attachTagNames[24];
  v66 = agent->agentState.name;
  if ( entity->tagChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1243, ASSERT_TYPE_ASSERT, "( entity->tagChildren == 0 )", (const char *)&queryFormat, "entity->tagChildren == NULL") )
    __debugbreak();
  G_Utils_ClearEntity(entity);
  g_entityIsInUse[inOutIndex[0]] = 0;
  Instance = GWeaponMap::GetInstance();
  BG_ClearPlayerWeapons(Instance, &agent->playerState);
  v18 = GWeaponMap::GetInstance();
  BG_ClearAgentWeapons(v18, &agent->agentState);
  G_Vehicle_ClearPlayerVehicles(v11, &agent->playerState);
  Handler = GHandler::getHandler();
  v20 = Handler->GetEdgeQueryCache(Handler, v11);
  memset_0(v20, 0, sizeof(EdgeQueryCache));
  memset_0(agent, 0, sizeof(gagent_s));
  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  GAntiLagMP::ClearCharacterHistory(AntiLagMP, v11);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v68 = 280i64 * (int)v10;
  SV_AgentEnterWorld(&PersistentGlobalsMP->agents[v68 / 0x118]);
  SV_AgentInit(&PersistentGlobalsMP->agents[v68 / 0x118]);
  entity->sentient = *(sentient_s **)pOutStartEntry;
  entity->model = model;
  *(__m256i *)entity->attachModelNames = v77;
  *(_OWORD *)&entity->attachModelNames[16] = v14;
  *(double *)&entity->attachModelNames[24] = v15;
  *(__m256i *)entity->attachTagNames = v78;
  *(AIAgentInterface *)&entity->attachTagNames[8] = v72;
  *(DObjAnimMat *)&entity->attachTagNames[16] = outMat;
  *(_OWORD *)&entity->attachTagNames[24] = v16;
  if ( ownerNum != 2047 )
  {
    if ( ownerNum >= 0x800 )
    {
      LODWORD(v60) = 2048;
      LODWORD(v59) = ownerNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v59, v60) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[ownerNum].r.isInUse != g_entityIsInUse[ownerNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[ownerNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1270, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ownerNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( ownerNum )") )
      __debugbreak();
    EntHandle::setEnt(&entity->r.ownerNum, &g_entities[ownerNum]);
    entity->s.otherEntityNum = truncate_cast<short,unsigned int>(ownerNum);
  }
  entity->s.groundEntityNum = 2047;
  entity->clipmask = 33636369;
  entity->s.surfType = 7;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v22 = *(_QWORD *)&GStatic::ms_gameStatics;
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 16i64))(*(_QWORD *)&GStatic::ms_gameStatics);
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 224i64))(v22, (unsigned int)inOutIndex[0]);
  v25 = v24;
  if ( (!v24 || *(_QWORD *)(v24 + 2040)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1284, ASSERT_TYPE_ASSERT, "( characterInfo && characterInfo->pXAnimTree == 0 )", (const char *)&queryFormat, "characterInfo && characterInfo->pXAnimTree == NULL") )
    __debugbreak();
  v26 = name;
  if ( name )
  {
    if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_ANIMSET, name, &outIndex) )
    {
      if ( outIndex >= 0x40 )
      {
        LODWORD(v60) = 64;
        LODWORD(v59) = outIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1292, ASSERT_TYPE_ASSERT, "(unsigned)( animClassIndex ) < (unsigned)( (1 << 6) )", "animClassIndex doesn't index MAX_ANIM_CLASS_COUNT\n\t%i not in [0, %i)", v59, v60) )
          __debugbreak();
      }
      if ( !*(_QWORD *)(v23 + 8i64 * outIndex + 17992) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1293, ASSERT_TYPE_ASSERT, "( bgameAnim->animClassTrees[ animClassIndex ].anims )", (const char *)&queryFormat, "bgameAnim->animClassTrees[ animClassIndex ].anims") )
        __debugbreak();
      *(_QWORD *)(v25 + 2040) = Com_XAnimCreateSmallTree(*(XAnim_s **)(v23 + 8i64 * outIndex + 17992), MOVEMENT);
      *(_DWORD *)(v25 + 2568) = 1;
      *(_WORD *)(v25 + 14786) = 0;
      entity->s.animInfo.animData = (entity->s.animInfo.animData | 1) ^ ((entity->s.animInfo.animData | 1) ^ (outIndex << 18)) & 0xFC0000;
      String = SL_FindString(v26);
      BG_Animset_GetStartStateAndEntry(String, (int *)&name, pOutStartEntry);
      v28 = entity->s.animInfo.animData ^ (entity->s.animInfo.animData ^ (2 * (_DWORD)name)) & 0x7FE;
      entity->s.animInfo.animData = v28 ^ (v28 ^ (pOutStartEntry[0] << 11)) & 0x3F800;
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440C18B0, 1072i64, v26);
    }
  }
  else
  {
    if ( !*(_QWORD *)(v23 + 17712) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1316, ASSERT_TYPE_ASSERT, "( bgameAnim->generic_human.tree.anims )", (const char *)&queryFormat, "bgameAnim->generic_human.tree.anims") )
      __debugbreak();
    *(_QWORD *)(v25 + 2040) = Com_XAnimCreateSmallTree(*(XAnim_s **)(v23 + 17712), MOVEMENT);
    *(_DWORD *)(v25 + 2568) = 0;
    if ( PlayerASM_IsEnabled() )
      entity->s.animInfo.animData &= 0x80000000;
    else
      entity->s.animInfo.animData &= 0xFE000000;
  }
  memset_0((void *)(v25 + 2812), 0, 0x78ui64);
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, entity, 0);
  SV_LinkEntity(entity);
  Scr_SetString(&entity->classname, scr_const.agent);
  Scr_SetString(&entity->script_classname, scr_const.agent);
  entity->handler = 0;
  entity->flags = 0i64;
  entity->flags.m_flags[0] |= 0x200u;
  if ( freezeControls )
    entity->agent->flags |= 4u;
  v29 = bounds;
  if ( !bounds )
    v29 = BG_Suit_GetBounds(agent->playerState.suitIndex, PM_EFF_STANCE_DEFAULT);
  *(_OWORD *)entity->r.box.midPoint.v = *(_OWORD *)v29->midPoint.v;
  *(double *)&entity->r.box.halfSize.y = *(double *)&v29->halfSize.y;
  agent->agentState.name = v66;
  Com_sprintf(agent->agentGuid, 8ui64, "agent%i", (unsigned int)v10);
  agent->flags |= 1u;
  agent->lastServerTime = lastServerTime;
  agent->agentState.team = TEAM_SPECTATOR;
  v30 = inOutIndex[0];
  agent->agentState.entityNum = inOutIndex[0];
  v31 = v30;
  agent->playerState.clientNum = v30;
  agent->playerState.eFlags.m_flags[0] = v12;
  agent->playerState.corpseIndex = 15;
  BG_SetSpeedScaleMultiplier(&agent->playerState, 1.0);
  BG_InitPlayerstateVehicle(&agent->playerState);
  agent->playerState.stats[3] = modelIndex + 1;
  agent->playerState.viewlocked_entNum = 2047;
  agent->playerState.linkEnt = 2047;
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1378, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF )") )
    __debugbreak();
  agent->playerState.groundRefEnt = 2047;
  agent->playerState.viewHeightLerpTime = 0;
  *(_QWORD *)&agent->playerState.weapCommon.spreadOverride = 0i64;
  agent->playerState.weapCommon.adsStartTime = 0;
  agent->playerState.weapCommon.fAimSpreadMovementScale = 1.0;
  agent->playerState.throwbackGrenadeTimeLeft = 0;
  agent->playerState.throwbackGrenadeOwner = 2047;
  v32 = GWeaponMap::GetInstance();
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 776, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v32->SetWeapon(v32, &agent->playerState.throwbackWeaponHandle, &NULL_WEAPON);
  agent->playerState.grenadeCookScale = MSG_PackSignedFloat(1.0, 5.0, 0xCu);
  v33 = GHandler::getHandler();
  BGMovingPlatformPS::Init(&agent->playerState.movingPlatforms, &agent->playerState, v33);
  agent->playerState.eFlags.m_flags[0] ^= 4u;
  agent->playerState.viewKickScale = 1.0;
  agent->playerState.viewmodelIndex = 0;
  v34 = PersistentGlobalsMP;
  if ( (unsigned int)v10 >= PersistentGlobalsMP->agentCount )
  {
    LODWORD(v60) = PersistentGlobalsMP->agentCount;
    LODWORD(v59) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1405, ASSERT_TYPE_ASSERT, "(unsigned)( agentNum ) < (unsigned)( svPers->agentCount )", "agentNum doesn't index svPers->agentCount\n\t%i not in [0, %i)", v59, v60) )
      __debugbreak();
  }
  p_lastUsercmd = &v34->agents[v68 / 0x118].lastUsercmd;
  p_cmd = &agent->cmd;
  v37 = 2i64;
  do
  {
    *(_OWORD *)&p_cmd->buttons = *(_OWORD *)&p_lastUsercmd->buttons;
    *(_OWORD *)&p_cmd->commandTime = *(_OWORD *)&p_lastUsercmd->commandTime;
    *(_OWORD *)(&p_cmd->angles.xy + 1) = *(_OWORD *)(&p_lastUsercmd->angles.xy + 1);
    *(_OWORD *)&p_cmd->weapon.weaponOthers = *(_OWORD *)&p_lastUsercmd->weapon.weaponOthers;
    *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[1] = *(_OWORD *)&p_lastUsercmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[17] = *(_OWORD *)&p_lastUsercmd->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&p_cmd->offHand.weaponIdx = *(_OWORD *)&p_lastUsercmd->offHand.weaponIdx;
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_lastUsercmd->offHand.weaponAttachments[2];
    p_lastUsercmd = (usercmd_s *)((char *)p_lastUsercmd + 128);
    --v37;
  }
  while ( v37 );
  p_cmd->buttons = p_lastUsercmd->buttons;
  agent->cmd.buttons &= 0xFFFFFFFFFFFFFF3Fui64;
  v38 = 0;
  v39 = &agent->useEntsEnabled[1];
  do
  {
    *(_DWORD *)(v39 - 1) = 134154239;
    v38 += 2;
    v39 += 2;
  }
  while ( v38 < 2 );
  v40 = origina;
  G_SetOrigin(entity, origina, 1, 1);
  agent->playerState.origin = *v40;
  G_ClientMP_SetClientViewAngles(entity, angle);
  agent->cmd.serverTime = level.time;
  v41 = level.time - 100;
  agent->playerState.serverTime = level.time - 100;
  agent->playerState.serverTimeInterpolated = v41;
  commandTime = 100;
  if ( agent->cmd.commandTime > 100 )
    commandTime = agent->cmd.commandTime;
  agent->cmd.commandTime = commandTime;
  agent->playerState.commandTime = commandTime - 100;
  agent->playerState.commandTimeInterpolated = commandTime - 100;
  v43 = agent->cmd.commandTime - 100;
  agent->playerState.inputTime = v43;
  agent->playerState.inputTimeInterpolated = v43;
  if ( !entity->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1436, ASSERT_TYPE_ASSERT, "(entity->sentient != nullptr)", (const char *)&queryFormat, "entity->sentient != nullptr") )
    __debugbreak();
  entity->sentient->lastSpawnTime = level.time;
  G_Execution_Clear(entity);
  if ( entity->health <= 0 )
    entity->health = 1;
  SV_AgentEndFrame(entity);
  if ( entity->s.eType == ET_AGENT )
    G_PhysicsCharacterProxy_AddCharacter(entity);
  if ( (*(_BYTE *)&entity->s.animInfo.selectAnim & 1) != 0 && (ServerDObjForEnt = Com_GetServerDObjForEnt(entity), (ScriptableDef = ScriptableBg_GetScriptableDef(entity->s.eType, ServerDObjForEnt)) != NULL) )
  {
    ScriptableSv_LinkReservedScriptableEntity(entity, ScriptableDef, 0xFFFFFFFF);
  }
  else
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( ScriptableSv_GetScriptableIndexForEntity(entity) < runtimeInstanceCount )
      ScriptableSv_UnlinkReservedScriptableEntity(entity);
  }
  number = entity->s.number;
  if ( *(_DWORD *)(v25 + 2568) )
  {
    AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(number);
    if ( (unsigned int)AgentIndexFromEntityIndex >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
    {
      LODWORD(v60) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
      LODWORD(v59) = AgentIndexFromEntityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v59, v60) )
        __debugbreak();
    }
    v49 = &s_agent_data[AgentIndexFromEntityIndex];
    Bot_CleanupBotInfo(v49);
    ScrAgent_ResetAgentInfo(v49, entity);
    EntityPlayerState = G_GetEntityPlayerState(entity);
    if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1014, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v51 = Com_GetServerDObjForEnt(entity);
    if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1017, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
      __debugbreak();
    LOBYTE(inOutIndex[0]) = -2;
    if ( DObjGetBoneIndexInternal_27(v51, scr_const.tag_eye, (unsigned __int8 *)inOutIndex, &modelIndex) )
    {
      DObjGetBasePoseMatrix(v51, LOBYTE(inOutIndex[0]), &outMat);
      v52 = (int)outMat.trans.v[2];
      EntityPlayerState->viewHeightTarget = (int)outMat.trans.v[2];
      EntityPlayerState->viewHeightCurrent = (float)v52;
    }
    else
    {
      Agent_SetStandardViewHeight(entity);
    }
    entity->clipmask = 33685521;
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(entity);
    if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1462, ASSERT_TYPE_ASSERT, "(pInfo)", (const char *)&queryFormat, "pInfo") )
      __debugbreak();
    ScriptedAgentInfo->bLegacyAgent = bLegacyAgent;
    AIAgentInterface::AIAgentInterface(&v72);
    v72.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v73 = NULL;
    if ( SV_IsAgentScripted(entity) )
    {
      v54 = AIAgentInterface::GetScriptedAgentInfo(entity);
      if ( v54 )
      {
        v73 = &v72;
        AINewAgentInterface::SetAgent((AINewAgentInterface *)&v72, v54);
      }
    }
    v55 = v73;
    if ( !v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1464, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    v55->SetDefaults(v55);
    AIScriptedInterface::SetDefaultState(v55);
    v55->OnSpawned(v55);
    v55->Think(v55);
  }
  else
  {
    v56 = ComCharacterLimits::GetAgentIndexFromEntityIndex(number);
    if ( (unsigned int)v56 >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
    {
      LODWORD(v60) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
      LODWORD(v59) = v56;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v59, v60) )
        __debugbreak();
    }
    v57 = &s_agent_data[v56];
    ScrAgent_CleanupAgentInfo(v57, entity);
    Bot_ResetBotInfo(v57, entity);
    Bot_ResetLife(v57);
    Agent_SetStandardViewHeight(entity);
    entity->clipmask = 33636369;
    v58 = entity->agent;
    if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
    {
      *(_QWORD *)&v58->playerState.animState.animSet = 0i64;
      *(_QWORD *)&v58->playerState.animState.slot[0].packedAnim = 0i64;
      v58->playerState.animState.slot[1].packedAnim = 0;
      v58->playerState.animState.animSet = BG_PlayerASM_GetAnimsetIndexBySuit(v58->playerState.suitIndex);
    }
    Agent_ClientThink(entity, &agent->cmd);
  }
  GAntiLagMP::InvalidateArchivedCharacterPositions(v31);
  if ( agent->playerState.viewHeightCurrent <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1480, ASSERT_TYPE_SANITY, "( agent->playerState.viewHeightCurrent > 0 )", (const char *)&queryFormat, "agent->playerState.viewHeightCurrent > 0") )
    __debugbreak();
  if ( agent->playerState.viewHeightTarget <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1481, ASSERT_TYPE_SANITY, "( agent->playerState.viewHeightTarget > 0 )", (const char *)&queryFormat, "agent->playerState.viewHeightTarget > 0") )
    __debugbreak();
  SV_Profile_EndEvent(SVPROF_AI_SPAWNING);
}

/*
==============
Agent_UpdatePlayerView
==============
*/
void Agent_UpdatePlayerView(gagent_s *const agent, usercmd_s *const cmd, vec3_t *outViewAngles, vec3_t *outWeapAngles, vec3_t (*outWeapAnglesCategorized)[30], vec3_t *outWeaponOrigin)
{
  const dvar_t *v9; 
  int integer; 
  const dvar_t *v11; 
  int v12; 
  int v13; 
  double Speed; 
  int damageTime; 
  float damageRoll; 
  const Weapon *ViewmodelWeapon; 
  double v18; 
  int v19; 
  float v20; 
  vec3_t *outDuckedAnglesPivotOffset; 
  vec3_t *outCombinedAngles; 
  vec3_t *outAngles; 
  float outMovementTiltOffset; 
  vec3_t *outOrigin; 
  ViewMovementParams params; 
  WeaponMovementParams v27; 
  vec3_t v28; 
  vec3_t outStandAnglesPivotOffset; 

  outOrigin = outWeaponOrigin;
  outAngles = outViewAngles;
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 928, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  v9 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v11 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( cmd->commandTime - agent->playerViewState.commandTime < integer )
    integer = cmd->commandTime - agent->playerViewState.commandTime;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.integer;
  v13 = cmd->inputTime - agent->playerViewState.inputTime;
  if ( v12 < 0 )
  {
    LODWORD(outCombinedAngles) = v12;
    LODWORD(outDuckedAnglesPivotOffset) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", outDuckedAnglesPivotOffset, outCombinedAngles) )
      __debugbreak();
  }
  if ( v12 < v13 )
    v13 = v12;
  if ( v13 < 0 )
    v13 = 0;
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 876, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  params.ps = &agent->playerState;
  params.weaponMap = GWeaponMap::GetInstance();
  params.updateTime = (float)integer * 0.001;
  params.handler = GHandler::getHandler();
  params.serverTime = level.time;
  Speed = BG_GetSpeed(&agent->playerState, level.time, params.handler);
  damageTime = agent->damageTime;
  params.xySpeed = *(float *)&Speed;
  if ( damageTime )
    params.damageTime = level.time - damageTime;
  else
    params.damageTime = 0;
  damageRoll = agent->damageRoll;
  params.damagePitch = agent->damagePitch;
  params.damageRoll = damageRoll;
  BG_CalculateViewMovement_Angles(&params, &agent->playerViewState.viewMoveState, outAngles);
  v27.ps = &agent->playerState;
  v27.weaponMap = GWeaponMap::GetInstance();
  v27.handler = GHandler::getHandler();
  ViewmodelWeapon = BG_GetViewmodelWeapon(v27.weaponMap, v27.ps);
  *(__m256i *)&v27.weapon.weaponIdx = *(__m256i *)&ViewmodelWeapon->weaponIdx;
  *(_OWORD *)&v27.weapon.attachmentVariationIndices[5] = *(_OWORD *)&ViewmodelWeapon->attachmentVariationIndices[5];
  *(_QWORD *)&v27.weapon.attachmentVariationIndices[21] = *(_QWORD *)&ViewmodelWeapon->attachmentVariationIndices[21];
  LODWORD(ViewmodelWeapon) = *(_DWORD *)&ViewmodelWeapon->weaponCamo;
  v27.inputDeltaTime = (float)v13 * 0.001;
  v27.updateTime = (float)integer * 0.001;
  *(_DWORD *)&v27.weapon.weaponCamo = (_DWORD)ViewmodelWeapon;
  v27.serverTime = level.time;
  v18 = BG_GetSpeed(v27.ps, level.time, v27.handler);
  v19 = agent->damageTime;
  v27.xySpeed = *(float *)&v18;
  if ( v19 )
    v27.damageTime = level.time - v19;
  else
    v27.damageTime = 0;
  v20 = agent->damageRoll;
  v27.damagePitch = agent->damagePitch;
  v27.damageRoll = v20;
  v27.shellShockDeltaTime = v27.ps->shellshockTime + v27.ps->shellshockDuration - level.time;
  *(_QWORD *)&v27.shellShockFadeTime = 3000i64;
  BG_CalculateWeaponMovement(&v27, &agent->playerViewState.weapMoveState, (float *)&outAngles, &outMovementTiltOffset, &outStandAnglesPivotOffset, &v28, outWeapAngles, outWeapAnglesCategorized, outOrigin);
  agent->playerViewState.commandTime = cmd->commandTime;
  agent->playerViewState.inputTime = cmd->inputTime;
}

/*
==============
G_ActiveMP_UpdateAgentFootstepState
==============
*/
void G_ActiveMP_UpdateAgentFootstepState(gentity_s *entity, characterInfo_t *ci)
{
  gagent_s *agent; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v6; 
  __int64 v7; 
  usercmd_s *p_cmd; 
  usercmd_s *v9; 
  __int64 v10; 
  __int64 v11; 
  usercmd_s *p_oldcmd; 
  usercmd_s *v13; 
  float v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  int integer; 
  entity_event_t updated; 
  bool v19; 
  FootstepMoveType_t v20; 
  FootstepMoveType_t outMoveType; 
  float outStairsAscentRatio; 
  EquipmentMoveType_t outEquipmentType; 
  float outAmplitudeScale; 
  float outFrequencyScale[2]; 
  AIAgentInterface v26; 
  AIAgentInterface *v27; 
  __int64 v28; 
  GPMove v29; 
  char v30[28]; 
  int v31; 

  v28 = -2i64;
  GPMove::GPMove(&v29);
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2205, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2206, ASSERT_TYPE_ASSERT, "(entity->agent)", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  agent = entity->agent;
  if ( agent->agentState.entityNum != entity->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2209, ASSERT_TYPE_ASSERT, "(agent->agentState.entityNum == entity->s.number)", (const char *)&queryFormat, "agent->agentState.entityNum == entity->s.number") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2211, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v29.ps = &agent->playerState;
  AIAgentInterface::AIAgentInterface(&v26);
  v26.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v27 = NULL;
  if ( SV_IsAgentScripted(entity) )
  {
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(entity);
    if ( ScriptedAgentInfo )
    {
      v27 = &v26;
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v26, ScriptedAgentInfo);
    }
  }
  v6 = v27;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2215, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v7 = v6->GetAI(v6);
  v29.localClientNum = LOCAL_CLIENT_INVALID;
  memset_0(v30, 0, 0x60ui64);
  v29.ground = (BgGroundState *)v30;
  v31 = (*(_BYTE *)(v7 + 2132) & 0x3F) << 19;
  agent->agentState.clothType = agent->playerState.clothType;
  p_cmd = &agent->cmd;
  v9 = &v29.cmd;
  v10 = 2i64;
  v11 = 2i64;
  do
  {
    *(_OWORD *)&v9->buttons = *(_OWORD *)&p_cmd->buttons;
    *(_OWORD *)&v9->commandTime = *(_OWORD *)&p_cmd->commandTime;
    *(_OWORD *)(&v9->angles.xy + 1) = *(_OWORD *)(&p_cmd->angles.xy + 1);
    *(_OWORD *)&v9->weapon.weaponOthers = *(_OWORD *)&p_cmd->weapon.weaponOthers;
    *(_OWORD *)&v9->weapon.attachmentVariationIndices[1] = *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v9->weapon.attachmentVariationIndices[17] = *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v9->offHand.weaponIdx = *(_OWORD *)&p_cmd->offHand.weaponIdx;
    v9 = (usercmd_s *)((char *)v9 + 128);
    *(_OWORD *)&v9[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd->offHand.weaponAttachments[2];
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    --v11;
  }
  while ( v11 );
  v9->buttons = p_cmd->buttons;
  p_oldcmd = &agent->oldcmd;
  v13 = &v29.oldcmd;
  do
  {
    *(_OWORD *)&v13->buttons = *(_OWORD *)&p_oldcmd->buttons;
    *(_OWORD *)&v13->commandTime = *(_OWORD *)&p_oldcmd->commandTime;
    *(_OWORD *)(&v13->angles.xy + 1) = *(_OWORD *)(&p_oldcmd->angles.xy + 1);
    *(_OWORD *)&v13->weapon.weaponOthers = *(_OWORD *)&p_oldcmd->weapon.weaponOthers;
    *(_OWORD *)&v13->weapon.attachmentVariationIndices[1] = *(_OWORD *)&p_oldcmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v13->weapon.attachmentVariationIndices[17] = *(_OWORD *)&p_oldcmd->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v13->offHand.weaponIdx = *(_OWORD *)&p_oldcmd->offHand.weaponIdx;
    v13 = (usercmd_s *)((char *)v13 + 128);
    *(_OWORD *)&v13[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_oldcmd->offHand.weaponAttachments[2];
    p_oldcmd = (usercmd_s *)((char *)p_oldcmd + 128);
    --v10;
  }
  while ( v10 );
  v13->buttons = p_oldcmd->buttons;
  v14 = fsqrt((float)((float)(v29.ps->velocity.v[0] * v29.ps->velocity.v[0]) + (float)(v29.ps->velocity.v[1] * v29.ps->velocity.v[1])) + (float)(v29.ps->velocity.v[2] * v29.ps->velocity.v[2]));
  v29.speed = v14;
  agent->agentState.canEmitFootsteps = 0;
  if ( PM_ShouldMakeFootsteps(&v29) )
  {
    agent->agentState.canEmitFootsteps = 1;
    ci->lastCanEmitFootstepTime = level.time;
  }
  else
  {
    v15 = DCONST_DVARINT_g_canEmitFootstepTimeout;
    if ( !DCONST_DVARINT_g_canEmitFootstepTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_canEmitFootstepTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( level.time - ci->lastCanEmitFootstepTime <= v15->current.integer )
      agent->agentState.canEmitFootsteps = 1;
  }
  v16 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  integer = v16->current.integer;
  if ( v29.cmd.commandTime - v29.oldcmd.commandTime < integer )
    integer = v29.cmd.commandTime - v29.oldcmd.commandTime;
  updated = PM_Footstep_UpdateMoveType(integer, &v29, v14, &agent->footstepWeight);
  v19 = PM_MoveTypesFromFootstepType(updated, &outMoveType, &outEquipmentType);
  v20 = FOOTSTEP_MOVE_TYPE_WALK;
  if ( v19 )
    v20 = outMoveType;
  agent->agentState.footstepMoveType = v20;
  PM_Slope_GetBobCycleScale(&v29, &outStairsAscentRatio, outFrequencyScale, &outAmplitudeScale);
  agent->agentState.footstepActionType = PM_GetFootstepActionType(&v29, outStairsAscentRatio);
  GPMove::~GPMove(&v29);
}

/*
==============
SV_AgentClientThink
==============
*/
void SV_AgentClientThink(agent_t *agent, usercmd_s *cmd)
{
  int Index; 
  gagent_s *v5; 
  gentity_s *v6; 
  const playerState_s *EntityPlayerStateConst; 
  unsigned __int64 UseButtonMask; 
  unsigned __int64 buttons; 
  usercmd_s *p_cmd; 
  __int64 v11; 
  usercmd_s *v12; 
  usercmd_s *p_oldcmd; 
  __int64 v14; 
  __m256i v15; 
  __int128 v16; 
  usercmd_s *v17; 
  __int128 v18; 
  int serverTime; 

  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2116, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2117, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2119, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tNot thread safe in a worker context", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  Index = Agent_GetIndex(agent);
  v5 = &level.agents[Index];
  v6 = &g_entities[ComCharacterLimits::GetEntityIndexFromAgentIndex(Index)];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2892, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  if ( (v5->flags & 8) != 0 )
  {
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2088, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
      __debugbreak();
    if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2090, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    v5->oldbuttons = v5->buttons;
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(v6);
    UseButtonMask = G_PlayerUse_GetUseButtonMask(EntityPlayerStateConst);
    if ( !v5->useButtonDone )
      v5->oldbuttons &= ~UseButtonMask;
    buttons = cmd->buttons;
    v5->buttons = cmd->buttons;
    if ( (buttons & UseButtonMask) == 0 )
      v5->useButtonDone = 0;
    v5->latched_buttons = buttons & ~v5->oldbuttons;
  }
  if ( level.time - cmd->serverTime > 1000 )
    cmd->serverTime = level.time - 1000;
  p_cmd = &v5->cmd;
  v11 = 2i64;
  v12 = &v5->cmd;
  p_oldcmd = &v5->oldcmd;
  v14 = 2i64;
  do
  {
    p_oldcmd = (usercmd_s *)((char *)p_oldcmd + 128);
    v15 = *(__m256i *)&v12->buttons;
    v16 = *(_OWORD *)&v12->offHand.weaponAttachments[2];
    v12 = (usercmd_s *)((char *)v12 + 128);
    *(__m256i *)&p_oldcmd[-1].offHand.attachmentVariationIndices[13] = v15;
    *(__m256i *)p_oldcmd[-1].remoteControlMove = *(__m256i *)v12[-1].remoteControlMove;
    *(__m256i *)&p_oldcmd[-1].vehOrgZ = *(__m256i *)&v12[-1].vehOrgZ;
    *(_OWORD *)p_oldcmd[-1].sightedClientsMask.data = *(_OWORD *)v12[-1].sightedClientsMask.data;
    *(_OWORD *)&p_oldcmd[-1].sightedClientsMask.data[4] = v16;
    --v14;
  }
  while ( v14 );
  p_oldcmd->buttons = v12->buttons;
  v17 = cmd;
  do
  {
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    v18 = *(_OWORD *)&v17->buttons;
    v17 = (usercmd_s *)((char *)v17 + 128);
    *(_OWORD *)&p_cmd[-1].offHand.attachmentVariationIndices[13] = v18;
    *(_OWORD *)&p_cmd[-1].offHand.weaponCamo = *(_OWORD *)&v17[-1].offHand.weaponCamo;
    *(_OWORD *)p_cmd[-1].remoteControlMove = *(_OWORD *)v17[-1].remoteControlMove;
    *(_OWORD *)p_cmd[-1].vehAngles = *(_OWORD *)v17[-1].vehAngles;
    *(_OWORD *)&p_cmd[-1].vehOrgZ = *(_OWORD *)&v17[-1].vehOrgZ;
    *(_OWORD *)&p_cmd[-1].gunYOfs = *(_OWORD *)&v17[-1].gunYOfs;
    *(_OWORD *)p_cmd[-1].sightedClientsMask.data = *(_OWORD *)v17[-1].sightedClientsMask.data;
    *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v17[-1].sightedClientsMask.data[4];
    --v11;
  }
  while ( v11 );
  p_cmd->buttons = v17->buttons;
  serverTime = cmd->serverTime;
  if ( serverTime > v5->lastServerTime || level.time < serverTime )
    v5->lastServerTime = serverTime;
  Agent_ClientThink(v6, cmd);
}

/*
==============
SV_AgentEndFrame
==============
*/
void SV_AgentEndFrame(gentity_s *entity)
{
  gagent_s *agent; 
  GHandler *Handler; 
  int updated; 
  int IsAgentScripted; 
  int health; 
  int pm_type; 
  __int64 flags; 
  int IsFrozen; 
  unsigned int v10; 
  bool IsLookFrozen; 
  unsigned int v12; 
  __int64 team; 
  bool v14; 
  bool v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  DObj *ServerDObjForEnt; 
  int v21; 
  GWeaponMap *Instance; 
  GMovingPlatforms *v23; 
  unsigned int v24; 
  GWeaponMap *v25; 
  GHandler *v26; 
  GWeaponMap *v27; 
  const BgAnimStatic *v28; 
  __int64 attachIgnoreCollision; 
  __int64 attachIgnoreCollisiona; 
  vec3_t *movingPlatformAngles; 
  vec3_t outAngles; 
  vec3_t outOrigin; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2535, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2536, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  agent = entity->agent;
  Handler = GHandler::getHandler();
  Handler->PlayerWeaponHeatIterate(Handler, &agent->playerState, BG_Heat_UpdateFlags);
  Profile_Begin(352);
  updated = SV_AgentUpdateInfo(entity);
  Profile_EndInternal(NULL);
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2494, ASSERT_TYPE_ASSERT, "( ent->agent )", (const char *)&queryFormat, "ent->agent") )
    __debugbreak();
  G_Active_PlayerOrAgent_VehicleAnimationEndFrame(&entity->agent->playerState);
  IsAgentScripted = SV_IsAgentScripted(entity);
  health = entity->health;
  if ( IsAgentScripted )
  {
    if ( health <= 0 )
    {
      if ( (agent->flags & 1) != 0 )
      {
        Com_Printf(18, "Agent with health <= 0 is still alive! ent(%d) Health(%d)\n", (unsigned int)entity->s.number, (unsigned int)health);
        health = entity->health;
      }
      if ( health == -999 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2564, ASSERT_TYPE_ASSERT, "(entity->health != -999)", (const char *)&queryFormat, "entity->health != -999") )
        __debugbreak();
      if ( (agent->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2565, ASSERT_TYPE_ASSERT, "(!( agent->flags & AGENT_ALIVE ))", (const char *)&queryFormat, "!( agent->flags & AGENT_ALIVE )") )
        __debugbreak();
    }
    else
    {
      entity->handler = 27;
    }
  }
  else
  {
    entity->handler = (health <= 0) + 27;
  }
  if ( (agent->flags & 1) == 0 )
  {
    *(_QWORD *)&agent->gunPitch = 0i64;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&agent->playerState.eFlags, ACTIVE, 0x10u);
    entity->r.svFlags = entity->r.svFlags & 0xFC | 1;
    entity->s.eType = ET_INVISIBLE;
    SV_LinkEntity(entity);
    return;
  }
  entity->r.svFlags = entity->r.svFlags & 0xFC | 2;
  SV_LinkEntity(entity);
  if ( !entity->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2594, ASSERT_TYPE_ASSERT, "( entity->sentient )", (const char *)&queryFormat, "entity->sentient") )
    __debugbreak();
  agent->agentState.team = entity->sentient->eTeam;
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2597, ASSERT_TYPE_ASSERT, "( !Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED ) )", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED )") )
    __debugbreak();
  agent->playerState.deltaTime = 0;
  agent->playerState.gravity = 800;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&agent->playerState.eFlags, ACTIVE, 0x10u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0x29u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0x23u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0x24u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0xBu);
  if ( (agent->flags & 0x40) != 0 )
  {
    agent->playerState.pm_type = 3;
  }
  else if ( entity->tagInfo )
  {
    if ( (agent->playerState.linkFlags.m_flags[0] & 4) != 0 )
    {
      pm_type = agent->playerState.pm_type;
      if ( pm_type != 1 && pm_type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2618, ASSERT_TYPE_ASSERT, "( agent->playerState.pm_type == PM_NORMAL_LINKED || agent->playerState.pm_type == PM_DEAD_LINKED )", (const char *)&queryFormat, "agent->playerState.pm_type == PM_NORMAL_LINKED || agent->playerState.pm_type == PM_DEAD_LINKED") )
        __debugbreak();
    }
    else
    {
      agent->playerState.pm_type = 1;
    }
    G_GeneralLink(entity);
    agent->playerState.origin.v[0] = entity->r.currentOrigin.v[0];
    agent->playerState.origin.v[1] = entity->r.currentOrigin.v[1];
    agent->playerState.origin.v[2] = entity->r.currentOrigin.v[2];
  }
  else
  {
    agent->playerState.pm_type = 0;
  }
  flags = (unsigned int)agent->flags;
  if ( (flags & 0x80u) == 0i64 )
    goto LABEL_55;
  if ( (flags & 0x40) == 0 || agent->playerState.pm_type != 3 )
  {
    Com_PrintWarning(15, "Expected (pm_type == PM_UFO) and (agent->flags & AGENT_UFO), instead got pm_type==(%d) and flags==(%d). resetting ufo_viewmodel\n", (unsigned int)agent->playerState.pm_type, flags);
    agent->flags &= ~0x80u;
LABEL_55:
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0x20u);
    goto LABEL_56;
  }
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0x20u);
LABEL_56:
  if ( SV_AgentUsabilityEnabled(agent) )
  {
    Profile_Begin(359);
    G_PlayerUse_UpdateCursorHints(entity);
    Profile_EndInternal(NULL);
  }
  else
  {
    agent->playerState.cursorHint = HINT_NONE;
  }
  agent->playerState.stats[0] = entity->health;
  agent->playerState.loopSound = truncate_cast<short,int>(entity->s.loopSound);
  IsFrozen = SV_AgentEntityIsFrozen(entity);
  v10 = agent->playerState.pm_flags.m_flags[0] & 0xFFFEFFFF;
  if ( IsFrozen )
    v10 = agent->playerState.pm_flags.m_flags[0] | 0x10000;
  agent->playerState.pm_flags.m_flags[0] = v10;
  IsLookFrozen = SV_AgentEntityIsLookFrozen(entity);
  v12 = agent->playerState.pm_flags.m_flags[0] & 0xFFFDFFFF;
  if ( IsLookFrozen )
    v12 = agent->playerState.pm_flags.m_flags[0] | 0x20000;
  agent->playerState.pm_flags.m_flags[0] = v12;
  if ( agent->agentState.team >= (unsigned int)TEAM_MP_NUM_TEAMS )
  {
    LODWORD(attachIgnoreCollision) = agent->agentState.team;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2679, ASSERT_TYPE_ASSERT, "(unsigned)( agent->agentState.team ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "agent->agentState.team doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", attachIgnoreCollision, 203) )
      __debugbreak();
  }
  team = agent->agentState.team;
  v14 = level.teamHasRadar[team] || agent->hasRadar;
  agent->playerState.radarEnabled = v14;
  v15 = level.teamRadarBlocked[team] || agent->isRadarBlocked;
  agent->playerState.radarBlocked = v15;
  v16 = agent->radarStrength + level.teamRadarStrength[team];
  if ( (unsigned int)(v16 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)v16, "signed", v16) )
    __debugbreak();
  agent->playerState.radarStrength = v16;
  *(_QWORD *)agent->playerState.sightedEnemyPlayersMask.array = 0i64;
  *(_QWORD *)&agent->playerState.sightedEnemyPlayersMask.array[2] = 0i64;
  *(_QWORD *)&agent->playerState.sightedEnemyPlayersMask.array[4] = 0i64;
  agent->playerState.sightedEnemyPlayersMask.array[6] = 0;
  agent->currentAimSpreadScale = agent->playerState.weapCommon.aimSpreadScale * 0.0039215689;
  *(_WORD *)&agent->playerState.radarShowEnemyDirection = 0;
  Agent_DamageFeedback(entity);
  Profile_Begin(360);
  G_Active_PlayerStateToEntityStateExtrapolate(&agent->playerState, &entity->s, agent->lastServerTime, 1);
  Profile_EndInternal(NULL);
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v17 = *(_QWORD *)&GStatic::ms_gameStatics;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)entity->s.number);
  v19 = v18;
  if ( (!v18 || !*(_DWORD *)(v18 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2713, ASSERT_TYPE_ASSERT, "(ci && ci->infoValid)", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  G_ActiveMP_PlayerStateToCharacterInfo(&agent->playerState, &entity->s, (characterInfo_t *)v19);
  G_ActiveMP_VehicleOccupancyUpdate(entity, (characterInfo_t *)v19);
  if ( agent == (gagent_s *)-21412i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2483, ASSERT_TYPE_ASSERT, "( agentState )", (const char *)&queryFormat, "agentState") )
    __debugbreak();
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2484, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
    __debugbreak();
  *(_DWORD *)(v19 + 20) = agent->agentState.modelindex;
  *(__m256i *)(v19 + 24) = *(__m256i *)agent->agentState.attachModelIndex;
  *(_DWORD *)(v19 + 56) = agent->agentState.attachModelIndex[8];
  if ( updated )
    G_Utils_DObjSafeFree(entity);
  ServerDObjForEnt = Com_GetServerDObjForEnt(entity);
  Profile_Begin(364);
  v21 = entity->attachIgnoreCollision;
  Instance = GWeaponMap::GetInstance();
  BG_AnimationMP_UpdatePlayerDObj(LOCAL_CLIENT_INVALID, ServerDObjForEnt, Instance, &entity->s, (characterInfo_t *)v19, v21);
  Profile_EndInternal(NULL);
  SV_AgentEndFrame_PostDObjAgentUpdate((const characterInfo_t *)v19, &agent->playerState, &agent->agentState);
  if ( *(_DWORD *)(v19 + 2568) )
  {
    BG_AnimationState_Update(&entity->s, (characterInfo_t *)v19, 0);
  }
  else
  {
    Profile_Begin(363);
    if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    v23 = GMovingPlatforms::ms_instance;
    if ( !agent->movingPlatformHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
      __debugbreak();
    v24 = agent->movingPlatformHandle.m_objIndex - 1;
    if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( v24 >= 0xF8 )
    {
      LODWORD(movingPlatformAngles) = 248;
      LODWORD(attachIgnoreCollisiona) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", attachIgnoreCollisiona, movingPlatformAngles) )
        __debugbreak();
    }
    BGMovingPlatformClient::GetPlatformOriginAndAngles(&v23->m_moverClientArray[v24], &agent->playerState, &outOrigin, &outAngles);
    v25 = GWeaponMap::GetInstance();
    v26 = GHandler::getHandler();
    BG_PlayerAnimation(v26, v25, &entity->s, (characterInfo_t *)v19, &entity->r.currentOrigin, &outOrigin, &outAngles);
    Profile_EndInternal(NULL);
    v27 = GWeaponMap::GetInstance();
    v28 = (const BgAnimStatic *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
    BG_UpdateSecondaryWeaponVisibilities(v28, v27, &entity->s, (characterInfo_t *)v19);
  }
  G_Execution_Update(entity);
}

/*
==============
SV_AgentEndFrame_PostDObjAgentUpdate
==============
*/
void SV_AgentEndFrame_PostDObjAgentUpdate(const characterInfo_t *ci, playerState_s *ps, agentState_s *as)
{
  GWeaponMap *Instance; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2504, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2505, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !as && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2506, ASSERT_TYPE_ASSERT, "( as )", (const char *)&queryFormat, "as") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 794, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 795, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance->SetWeapon(Instance, &ps->serverDobjHeldWeapon, &ci->dobjHeldWeapon);
  GWeaponMap::SetWeapon(Instance, &as->serverDobjHeldWeapon, &ci->dobjHeldWeapon);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 813, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance->SetWeapon(Instance, &ps->serverDobjTurretWeapon, &ci->dobjTurretWeapon);
  GWeaponMap::SetWeapon(Instance, &as->serverDobjTurretWeapon, &ci->dobjTurretWeapon);
  ps->serverDobjHideWeapon = ci->hideWeapon;
  as->serverDobjHideWeapon = ci->hideWeapon;
  ps->serverDobjStowHeldWeapon = ci->stowHeldWeapon;
  as->serverDobjStowHeldWeapon = ci->stowHeldWeapon;
}

/*
==============
SV_AgentEndFrame_VehicleAnimation
==============
*/
void SV_AgentEndFrame_VehicleAnimation(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2493, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2494, ASSERT_TYPE_ASSERT, "( ent->agent )", (const char *)&queryFormat, "ent->agent") )
    __debugbreak();
  G_Active_PlayerOrAgent_VehicleAnimationEndFrame(&ent->agent->playerState);
}

/*
==============
SV_AgentEnterWorld
==============
*/
void SV_AgentEnterWorld(agent_t *agent)
{
  int Index; 
  unsigned int v3; 
  gentity_s *v4; 
  __int64 v5; 

  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 398, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  Index = Agent_GetIndex(agent);
  agent->entityNum = ComCharacterLimits::GetEntityIndexFromAgentIndex(Index);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > agent->entityNum )
    goto LABEL_23;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( agent->entityNum > (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
  {
LABEL_23:
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v3 = ComCharacterLimits::ms_gameData.m_characterCount - 1;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v5) = agent->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 402, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentEntityIndexOffset() ) <= ( agent->entityNum ) && ( agent->entityNum ) <= ( ComCharacterLimits::GetCharacterMaxCount() - 1 )", "agent->entityNum not in [ComCharacterLimits::GetAgentEntityIndexOffset(), ComCharacterLimits::GetCharacterMaxCount() - 1]\n\t%i not in [%i, %i]", v5, ComCharacterLimits::ms_gameData.m_clientCount, v3) )
      __debugbreak();
  }
  memset_0(&agent->lastUsercmd, 0, sizeof(agent->lastUsercmd));
  v4 = SV_GentityNum(agent->entityNum);
  v4->s.number = truncate_cast<short,int>(agent->entityNum);
  agent->gentity = v4;
}

/*
==============
SV_AgentEntityIsFrozen
==============
*/
__int64 SV_AgentEntityIsFrozen(gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2868, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2869, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  return ((unsigned int)entity->agent->flags >> 2) & 1;
}

/*
==============
SV_AgentEntityIsLookFrozen
==============
*/
bool SV_AgentEntityIsLookFrozen(gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2880, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2881, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  return BYTE1(entity->agent->flags) & 1;
}

/*
==============
SV_AgentGetVisiblePlayers
==============
*/
__int64 SV_AgentGetVisiblePlayers(gentity_s *agentEnt, const gentity_s **players, int maxCount)
{
  __int64 v3; 
  unsigned int v6; 
  int AgentIndexFromEntityIndex; 
  bot_data_t *v8; 
  int v9; 
  signed int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  gentity_s *v14; 
  const sentient_s *sentient; 
  sentient_info_t *SentientInfo; 
  bool v17; 
  __int64 v19; 
  bot_data_t *BotData; 

  v3 = maxCount;
  if ( !players && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2977, ASSERT_TYPE_ASSERT, "( players )", (const char *)&queryFormat, "players") )
    __debugbreak();
  if ( !agentEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2978, ASSERT_TYPE_ASSERT, "( agentEnt )", (const char *)&queryFormat, "agentEnt") )
    __debugbreak();
  if ( !agentEnt->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2979, ASSERT_TYPE_ASSERT, "( agentEnt->agent )", (const char *)&queryFormat, "agentEnt->agent") )
    __debugbreak();
  v6 = 0;
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(agentEnt->s.number);
  BotData = Agent_GetBotData(AgentIndexFromEntityIndex);
  v8 = BotData;
  if ( !BotData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2983, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  v9 = SvClient::ms_clientCount;
  if ( (int)SvClient::ms_clientCount > 2048 )
  {
    LODWORD(v19) = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2985, ASSERT_TYPE_ASSERT, "( SvClient::GetClientCount() ) <= ( ( 2048 ) )", "SvClient::GetClientCount() <= MAX_GENTITIES\n\t%i, %i", v19, 2048) )
      __debugbreak();
    v9 = SvClient::ms_clientCount;
  }
  v10 = 0;
  if ( v9 <= 0 )
    return 0i64;
  v11 = v3;
  v12 = 0i64;
  v13 = 0i64;
  do
  {
    if ( v12 >= v11 )
      break;
    v14 = &level.gentities[v13];
    if ( Bot_IsCharacterActive(&level.gentities[v13]) )
    {
      if ( v14->client )
      {
        sentient = v14->sentient;
        if ( sentient )
        {
          SentientInfo = Sentient_GetSentientInfo(v8->botInfo.sentient, sentient);
          if ( !SentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 3004, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          v17 = !SentientInfo->VisCache.bVisible;
          v8 = BotData;
          if ( !v17 )
          {
            ++v6;
            players[v12++] = v14;
          }
        }
      }
    }
    ++v10;
    ++v13;
  }
  while ( v10 < (int)SvClient::ms_clientCount );
  return v6;
}

/*
==============
SV_AgentInit
==============
*/
void SV_AgentInit(agent_t *agent)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int entityNum; 
  __int64 v4; 
  unsigned int v5; 
  gentity_s *v6; 
  __int64 v7; 
  __int64 v8; 
  bool v9; 
  GAntiLagMP *AntiLagMP; 
  playerState_s *p_playerState; 
  __int64 v12; 
  __int64 v13; 
  int agentCount; 

  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 276, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  if ( !agent->gentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 277, ASSERT_TYPE_ASSERT, "( agent->gentity )", (const char *)&queryFormat, "agent->gentity") )
    __debugbreak();
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  entityNum = agent->entityNum;
  v4 = agent - PersistentGlobalsMP->agents;
  if ( (unsigned int)v4 >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
  {
    agentCount = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 286, ASSERT_TYPE_ASSERT, "(unsigned)( agentNum ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentNum doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v12, agentCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > entityNum )
    goto LABEL_43;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entityNum > (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
  {
LABEL_43:
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v5 = ComCharacterLimits::ms_gameData.m_characterCount - 1;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v13) = ComCharacterLimits::ms_gameData.m_clientCount;
    LODWORD(v12) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 287, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentEntityIndexOffset() ) <= ( agentEntityNum ) && ( agentEntityNum ) <= ( ComCharacterLimits::GetCharacterMaxCount() - 1 )", "agentEntityNum not in [ComCharacterLimits::GetAgentEntityIndexOffset(), ComCharacterLimits::GetCharacterMaxCount() - 1]\n\t%i not in [%i, %i]", v12, v13, v5) )
      __debugbreak();
  }
  v6 = &g_entities[agent->entityNum];
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)entityNum);
  if ( *(_QWORD *)(v7 + 2040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 297, ASSERT_TYPE_ASSERT, "(agentInfo->pXAnimTree == 0)", (const char *)&queryFormat, "agentInfo->pXAnimTree == NULL") )
    __debugbreak();
  memset_0((void *)(v7 + 16), 0, 0x39B8ui64);
  *(_DWORD *)v7 = entityNum;
  *(_DWORD *)(v7 + 12) = 201;
  *(_DWORD *)(v7 + 4) = 1;
  *(_DWORD *)(v7 + 8) = 1;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->InitGentity(GUtils::ms_gUtils, v6);
  v8 = (int)v4;
  v6->handler = 0;
  v9 = &level.agents[v8] == NULL;
  v6->agent = &level.agents[v8];
  v6->s.clientNum = entityNum;
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 311, ASSERT_TYPE_ASSERT, "( agentEntity->agent )", (const char *)&queryFormat, "agentEntity->agent") )
    __debugbreak();
  memset_0(v6->agent, 0, sizeof(gagent_s));
  GMovingPlatforms::InitClient(v6, &v6->agent->movingPlatformHandle);
  GPlayerTraceInfo::Init(v6);
  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  GAntiLagMP::ClearCharacterHistory(AntiLagMP, entityNum);
  EntHandle::setEnt(&v6->r.ownerNum, NULL);
  p_playerState = &v6->agent->playerState;
  v6->s.otherEntityNum = 2047;
  BG_InitPlayerState(p_playerState);
  v6->agent->agentState.entityNum = truncate_cast<short,int>(entityNum);
  v6->agent->agentState.team = TEAM_SPECTATOR;
  v6->agent->agentState.name = 0;
  v6->agent->playerState.clientNum = entityNum;
  v6->agent->playerState.viewmodelIndex = 0;
  v6->agent->playerState.corpseIndex = 15;
  BG_SetSpeedScaleMultiplier(&v6->agent->playerState, 1.0);
  BG_InitPlayerstateVehicle(&v6->agent->playerState);
  if ( !agent->gentity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 335, ASSERT_TYPE_SANITY, "( agent->gentity->agent )", (const char *)&queryFormat, "agent->gentity->agent") )
    __debugbreak();
}

/*
==============
SV_AgentInitAsBot
==============
*/
void SV_AgentInitAsBot(gentity_s *entity)
{
  int AgentIndexFromEntityIndex; 
  bot_data_t *BotDataAndOnlyBotData; 

  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(entity->s.number);
  BotDataAndOnlyBotData = Agent_GetBotDataAndOnlyBotData(AgentIndexFromEntityIndex);
  ScrAgent_CleanupAgentInfo(BotDataAndOnlyBotData, entity);
  Bot_ResetBotInfo(BotDataAndOnlyBotData, entity);
  Bot_ResetLife(BotDataAndOnlyBotData);
  Agent_SetStandardViewHeight(entity);
  entity->clipmask = 33636369;
}

/*
==============
SV_AgentInitAsScripted
==============
*/
void SV_AgentInitAsScripted(gentity_s *entity)
{
  int AgentIndexFromEntityIndex; 
  bot_data_t *BotDataAndOnlyBotData; 
  playerState_s *EntityPlayerState; 
  const DObj *ServerDObjForEnt; 
  int v6; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex[3]; 
  DObjAnimMat outMat; 

  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(entity->s.number);
  BotDataAndOnlyBotData = Agent_GetBotDataAndOnlyBotData(AgentIndexFromEntityIndex);
  Bot_CleanupBotInfo(BotDataAndOnlyBotData);
  ScrAgent_ResetAgentInfo(BotDataAndOnlyBotData, entity);
  EntityPlayerState = G_GetEntityPlayerState(entity);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1014, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(entity);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1017, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_27(ServerDObjForEnt, scr_const.tag_eye, inOutIndex, modelIndex) )
  {
    DObjGetBasePoseMatrix(ServerDObjForEnt, inOutIndex[0], &outMat);
    v6 = (int)outMat.trans.v[2];
    EntityPlayerState->viewHeightCurrent = (float)(int)outMat.trans.v[2];
    EntityPlayerState->viewHeightTarget = v6;
  }
  else
  {
    Agent_SetStandardViewHeight(entity);
  }
  entity->clipmask = 33685521;
}

/*
==============
SV_AgentInitBotAI
==============
*/
void SV_AgentInitBotAI(void)
{
  unsigned int v0; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  bot_data_t *v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  XAnimTree *v9; 
  __int64 v10; 
  __int64 v11; 
  bot_mem_t *p_botMemory; 

  v0 = 0;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( PersistentGlobalsMP->agentCount > 0 )
  {
    v2 = 0i64;
    v3 = 0i64;
    v4 = 0i64;
    do
    {
      PersistentGlobalsMP->agents[v4].entityNum = 2047;
      level.agents[v2].flags = 0;
      if ( v0 >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
      {
        LODWORD(v11) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
        LODWORD(v10) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      v5 = &s_agent_data[v3];
      p_botMemory = &s_agent_data[v3].botMatchData.botMemory;
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      v6 = *(_QWORD *)&GStatic::ms_gameStatics;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v0 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v11) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(v10) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v7 = v0 + ComCharacterLimits::ms_gameData.m_clientCount;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 224i64))(v6, v0 + ComCharacterLimits::ms_gameData.m_clientCount);
      v9 = *(XAnimTree **)(v8 + 2040);
      if ( v9 )
      {
        Com_XAnimFreeSmallTree(v9);
        *(_QWORD *)(v8 + 2040) = 0i64;
      }
      if ( v5->bIsScriptedAgent )
      {
        if ( v7 >= 0x800 )
        {
          LODWORD(v11) = 2048;
          LODWORD(v10) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1786, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( 2048 ) )", "characterIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        ScrAgent_CleanupAgentInfo(v5, &g_entities[v7]);
      }
      else if ( Bot_HasNavigator(&v5->botInfo) )
      {
        Bot_PathClear(&v5->botInfo);
      }
      memset_0(p_botMemory, 0, sizeof(bot_mem_t));
      ++v0;
      ++v4;
      ++v2;
      ++v3;
    }
    while ( (signed int)v0 < PersistentGlobalsMP->agentCount );
  }
}

/*
==============
SV_AgentInitScriptable
==============
*/
void SV_AgentInitScriptable(gentity_s *entity)
{
  const DObj *ServerDObjForEnt; 
  const ScriptableDef *ScriptableDef; 
  unsigned int runtimeInstanceCount; 

  if ( (*(_BYTE *)&entity->s.animInfo.selectAnim & 1) != 0 && (ServerDObjForEnt = Com_GetServerDObjForEnt(entity), (ScriptableDef = ScriptableBg_GetScriptableDef(entity->s.eType, ServerDObjForEnt)) != NULL) )
  {
    ScriptableSv_LinkReservedScriptableEntity(entity, ScriptableDef, 0xFFFFFFFF);
  }
  else
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( ScriptableSv_GetScriptableIndexForEntity(entity) < runtimeInstanceCount )
      ScriptableSv_UnlinkReservedScriptableEntity(entity);
  }
}

/*
==============
SV_AgentKilled
==============
*/
void SV_AgentKilled(agent_t *agent)
{
  int Index; 
  bot_data_t *BotData; 

  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2153, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  if ( !agent->gentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2154, ASSERT_TYPE_ASSERT, "( agent->gentity )", (const char *)&queryFormat, "agent->gentity") )
    __debugbreak();
  if ( !agent->gentity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2155, ASSERT_TYPE_ASSERT, "( agent->gentity->agent )", (const char *)&queryFormat, "agent->gentity->agent") )
    __debugbreak();
  if ( !agent->gentity->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2156, ASSERT_TYPE_ASSERT, "( agent->gentity->sentient )", (const char *)&queryFormat, "agent->gentity->sentient") )
    __debugbreak();
  Index = Agent_GetIndex(agent);
  agent->gentity->agent->flags &= ~1u;
  agent->gentity->agent->flags |= 2u;
  Actor_BroadcastTeamEvent(agent->gentity->sentient, AI_EV_DEATH);
  Sentient_Dissociate(agent->gentity->sentient);
  Agent_Free(agent->gentity);
  if ( !SV_Agent_IsScripted(agent->entityNum) )
  {
    BotData = Agent_GetBotData(Index);
    if ( !BotData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2176, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
      __debugbreak();
    Bot_ResetLife(BotData);
  }
}

/*
==============
SV_AgentMP_AddAgent
==============
*/
gentity_s *SV_AgentMP_AddAgent()
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  unsigned int v1; 
  __int64 agentCount; 
  __int64 v3; 
  agent_t *i; 
  int entityNum; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  gentity_s *v11; 
  bot_data_t *v12; 
  sentient_s *v13; 
  __int64 AgentIndexFromEntityIndex; 
  bot_data_t *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v1 = 0;
  agentCount = PersistentGlobalsMP->agentCount;
  if ( (int)agentCount <= 0 )
    return 0i64;
  v3 = 0i64;
  for ( i = PersistentGlobalsMP->agents; i->entityNum != 2047; ++i )
  {
    ++v1;
    if ( ++v3 >= agentCount )
      return 0i64;
  }
  SV_AgentEnterWorld(i);
  entityNum = i->entityNum;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entityNum < (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) >= ( ComCharacterLimits::GetAgentEntityIndexOffset() )", "%s >= %s\n\t%i, %i", "entityIndex", "ComCharacterLimits::GetAgentEntityIndexOffset()", entityNum, ComCharacterLimits::ms_gameData.m_clientCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v7 = entityNum - ComCharacterLimits::ms_gameData.m_clientCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v7 >= ComCharacterLimits::ms_gameData.m_agentCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v17) = ComCharacterLimits::ms_gameData.m_agentCount;
    LODWORD(v16) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v8 = PersistentGlobalsMP->agentCount;
  if ( v7 >= v8 )
  {
    v9 = i->entityNum;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v9 < (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v19) = ComCharacterLimits::ms_gameData.m_clientCount;
      LODWORD(v18) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) >= ( ComCharacterLimits::GetAgentEntityIndexOffset() )", "%s >= %s\n\t%i, %i", "entityIndex", "ComCharacterLimits::GetAgentEntityIndexOffset()", v18, v19) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v10 = v9 - ComCharacterLimits::ms_gameData.m_clientCount;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v10 >= ComCharacterLimits::ms_gameData.m_agentCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v17) = ComCharacterLimits::ms_gameData.m_agentCount;
      LODWORD(v16) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    LODWORD(v17) = v8;
    LODWORD(v16) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1863, ASSERT_TYPE_ASSERT, "(unsigned)( ComCharacterLimits::GetAgentIndexFromEntityIndex( agent->entityNum ) ) < (unsigned)( svPers->agentCount )", "ComCharacterLimits::GetAgentIndexFromEntityIndex( agent->entityNum ) doesn't index svPers->agentCount\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v11 = SV_GentityNum(i->entityNum);
  SV_AgentInit(i);
  if ( v1 >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
  {
    LODWORD(v17) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
    LODWORD(v16) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v12 = &s_agent_data[v1];
  Bot_MakeBotData(v12);
  Bot_SetBotPersistentMatchData(v12, 1);
  if ( v11->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 347, ASSERT_TYPE_ASSERT, "( agentEntity->sentient == 0 )", (const char *)&queryFormat, "agentEntity->sentient == NULL") )
    __debugbreak();
  v13 = Sentient_Alloc(ST_PLAYER);
  if ( !v13 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440C1460, 1071i64);
  v11->sentient = v13;
  Sentient_Init(v13, v11, TEAM_ZERO);
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(v11->s.number);
  if ( (unsigned int)AgentIndexFromEntityIndex >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
  {
    LODWORD(v17) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
    LODWORD(v16) = AgentIndexFromEntityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v15 = &s_agent_data[AgentIndexFromEntityIndex];
  ScrAgent_CleanupAgentInfo(v15, v11);
  Bot_ResetBotInfo(v15, v11);
  Bot_ResetLife(v15);
  Agent_SetStandardViewHeight(v11);
  v11->clipmask = 33636369;
  Scr_AgentAdded(v11);
  return v11;
}

/*
==============
SV_AgentMayUseEnt
==============
*/
char SV_AgentMayUseEnt(const gentity_s *agentEnt, unsigned __int16 entnum)
{
  int v4; 
  unsigned __int16 *i; 
  __int64 v7; 

  if ( !agentEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2955, ASSERT_TYPE_ASSERT, "( agentEnt )", (const char *)&queryFormat, "agentEnt") )
    __debugbreak();
  if ( !agentEnt->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2956, ASSERT_TYPE_ASSERT, "( agentEnt->agent )", (const char *)&queryFormat, "agentEnt->agent") )
    __debugbreak();
  if ( entnum >= 0x800u )
  {
    LODWORD(v7) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2957, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
      __debugbreak();
  }
  v4 = 0;
  for ( i = agentEnt->agent->useEntsEnabled; *i != entnum; ++i )
  {
    if ( (unsigned int)++v4 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
SV_AgentSetAgentCount
==============
*/
void SV_AgentSetAgentCount(const unsigned __int8 agentMaxCount)
{
  GameStateInfo *v2; 

  v2 = GameStateInfo_Get();
  if ( v2 )
  {
    v2->agentMaxCount = agentMaxCount;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1743, ASSERT_TYPE_ASSERT, "( gInfo )", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    MEMORY[0x44EA] = agentMaxCount;
  }
}

/*
==============
SV_AgentSetEntUnusable
==============
*/
void SV_AgentSetEntUnusable(gentity_s *agentEnt, unsigned __int16 entnum)
{
  unsigned int v4; 
  __int64 v5; 
  gagent_s *agent; 
  gagent_s *v7; 
  __int64 v8; 

  if ( !agentEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2900, ASSERT_TYPE_ASSERT, "( agentEnt )", (const char *)&queryFormat, "agentEnt") )
    __debugbreak();
  if ( !agentEnt->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2901, ASSERT_TYPE_ASSERT, "( agentEnt->agent )", (const char *)&queryFormat, "agentEnt->agent") )
    __debugbreak();
  if ( entnum >= 0x800u )
  {
    LODWORD(v8) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2902, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
      __debugbreak();
  }
  v4 = 0;
  v5 = 53682i64;
  do
  {
    agent = agentEnt->agent;
    if ( *(_WORD *)((char *)agent + v5 - 2) == entnum )
      *(_WORD *)((char *)agent + v5 - 2) = 2047;
    v7 = agentEnt->agent;
    if ( *(_WORD *)((char *)&v7->playerState.commandTime + v5) == entnum )
      *(_WORD *)((char *)&v7->playerState.commandTime + v5) = 2047;
    v4 += 2;
    v5 += 4i64;
  }
  while ( v4 < 2 );
}

/*
==============
SV_AgentSetEntUsable
==============
*/
__int64 SV_AgentSetEntUsable(gentity_s *agentEnt, unsigned __int16 entnum)
{
  unsigned int v4; 
  __int64 v5; 
  int v6; 
  unsigned __int16 v7; 
  __int64 v8; 
  __int64 result; 
  __int64 v10; 
  __int64 v11; 

  if ( !agentEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2916, ASSERT_TYPE_ASSERT, "( agentEnt )", (const char *)&queryFormat, "agentEnt") )
    __debugbreak();
  if ( !agentEnt->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2917, ASSERT_TYPE_ASSERT, "( agentEnt->agent )", (const char *)&queryFormat, "agentEnt->agent") )
    __debugbreak();
  if ( entnum >= 0x800u )
  {
    LODWORD(v10) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2918, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
      __debugbreak();
  }
  v4 = 2;
  v5 = 53682i64;
  v6 = 1;
  while ( 1 )
  {
    v7 = *(_WORD *)((char *)&agentEnt->agent->playerState.commandTime + v5);
    if ( v7 == entnum )
      break;
    if ( v7 == 2047 )
    {
      v4 = v6;
    }
    else
    {
      if ( v7 >= 0x800u )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2937, ASSERT_TYPE_ASSERT, "(unsigned)( agentEnt->agent->useEntsEnabled[i] ) < (unsigned)( ( 2048 ) )", "agentEnt->agent->useEntsEnabled[i] doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      v8 = *(unsigned __int16 *)((char *)&agentEnt->agent->playerState.commandTime + v5);
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = *(unsigned __int16 *)((char *)&agentEnt->agent->playerState.commandTime + v5);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v8] )
        v4 = v6;
    }
    v5 -= 2i64;
    if ( --v6 < 0 )
      goto LABEL_31;
  }
  v4 = v6;
LABEL_31:
  if ( v4 >= 2 )
    return 0i64;
  result = 1i64;
  agentEnt->agent->useEntsEnabled[v4] = entnum;
  return result;
}

/*
==============
SV_AgentSetFireRecoil
==============
*/
void SV_AgentSetFireRecoil(gentity_s *entity, const vec3_t *kickAVel)
{
  unsigned int maxagents; 
  signed __int64 v5; 
  __int64 v6; 
  bot_data_t *BotData; 
  __int64 v8; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2823, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2824, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  maxagents = level.maxagents;
  if ( !level.maxagents )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2825, ASSERT_TYPE_ASSERT, "( level.maxagents )", (const char *)&queryFormat, "level.maxagents") )
      __debugbreak();
    maxagents = level.maxagents;
  }
  v5 = (char *)entity->agent - (char *)level.agents;
  v6 = v5 / 55952;
  if ( (unsigned int)(v5 / 55952) >= maxagents )
  {
    LODWORD(v8) = v5 / 55952;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2828, ASSERT_TYPE_ASSERT, "(unsigned)( agentNum ) < (unsigned)( level.maxagents )", "agentNum doesn't index level.maxagents\n\t%i not in [0, %i)", v8, maxagents) )
      __debugbreak();
  }
  BotData = Agent_GetBotData(v6);
  if ( BotData->botInfo.ent->health > 0 )
  {
    BotData->botInfo.kickAVel.v[0] = kickAVel->v[0];
    BotData->botInfo.kickAVel.v[1] = kickAVel->v[1];
    BotData->botInfo.kickAVel.v[2] = kickAVel->v[2];
  }
}

/*
==============
SV_AgentSetLateralMoveStuck
==============
*/
void SV_AgentSetLateralMoveStuck(gentity_s *entity, int stuck, int body)
{
  unsigned __int64 v6; 
  bot_data_t *BotData; 
  int flags; 
  int v9; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2849, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2850, ASSERT_TYPE_ASSERT, "( entity->agent )", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  v6 = (__int64)((char *)entity->agent - (char *)level.agents + ((unsigned __int128)(((char *)entity->agent - (char *)level.agents) * (__int128)(__int64)0x95ECD1F424046471ui64) >> 64)) >> 15;
  BotData = Agent_GetBotData(v6 + (v6 >> 63));
  if ( stuck )
  {
    flags = BotData->botInfo.flags;
    if ( body )
      v9 = flags | 0x40;
    else
      v9 = flags | 0x20;
    BotData->botInfo.flags = v9;
  }
}

/*
==============
SV_AgentSetupAgentCount
==============
*/
__int64 SV_AgentSetupAgentCount(const char *gameType)
{
  const dvar_t *VarByName; 
  _BYTE *integer64; 
  const char *string; 
  int v4; 
  int v5; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 
  GameStateInfo *v8; 
  char dest[256]; 

  Com_sprintf(dest, 0xFFui64, "scr_%s_maxagents", gameType);
  VarByName = Dvar_FindVarByName(dest);
  if ( !VarByName || (integer64 = (_BYTE *)VarByName->current.integer64) == NULL || !*integer64 )
    VarByName = Dvar_FindVarByName("scr_default_maxagents");
  if ( VarByName && (string = VarByName->current.string) != NULL && *string )
  {
    v4 = atoi(string);
    v5 = (unsigned __int8)v4;
    v6 = v4;
    if ( (unsigned __int8)v4 != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1727, ASSERT_TYPE_ASSERT, "( static_cast<int>( agentCount ) == iLimit )", (const char *)&queryFormat, "static_cast<int>( agentCount ) == iLimit") )
      __debugbreak();
    if ( v6 > 0x30u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1728, ASSERT_TYPE_ASSERT, "( agentCount <= 48 )", (const char *)&queryFormat, "agentCount <= MAX_AGENTS_MP") )
      __debugbreak();
    v7 = I_clamp(v5, 0, 48);
  }
  else
  {
    v7 = 0;
  }
  v8 = GameStateInfo_Get();
  if ( v8 )
  {
    v8->agentMaxCount = v7;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1743, ASSERT_TYPE_ASSERT, "( gInfo )", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    MEMORY[0x44EA] = v7;
  }
  return v7;
}

/*
==============
SV_AgentShutdownAgentAI
==============
*/
void SV_AgentShutdownAgentAI(void)
{
  int v0; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  __int64 v2; 
  __int64 v3; 
  bot_data_t *v4; 
  __int64 v5; 
  __int64 v6; 

  v0 = 0;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( PersistentGlobalsMP->agentCount > 0 )
  {
    v2 = 0i64;
    v3 = 0i64;
    do
    {
      if ( PersistentGlobalsMP->agents[v2].entityNum != 2047 )
      {
        if ( (unsigned int)v0 >= SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount )
        {
          LODWORD(v6) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
          LODWORD(v5) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( SvPersistentGlobalsMP::GetAgentCount() )", "agentIndex doesn't index SvPersistentGlobalsMP::GetAgentCount()\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        v4 = &s_agent_data[v3];
        if ( !&s_agent_data[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1817, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
          __debugbreak();
        if ( v4->bIsScriptedAgent )
        {
          ScrAgent_CleanupAgentInfo(v4, &g_entities[PersistentGlobalsMP->agents[v2].entityNum]);
          G_SaveMP_ScrFreeAgentFields((ai_agent_t *)&v4->8);
        }
        else if ( Bot_HasNavigator(&v4->botInfo) )
        {
          Bot_PathClear(&v4->botInfo);
        }
        if ( Bot_HasNavigator(&v4->botInfo) )
          Bot_FreeNavigator(&v4->botInfo);
        memset_0(&v4->botDebugData, 0, sizeof(v4->botDebugData));
      }
      ++v0;
      ++v3;
      ++v2;
    }
    while ( v0 < PersistentGlobalsMP->agentCount );
  }
}

/*
==============
SV_AgentThink
==============
*/
void SV_AgentThink(agent_t *agent, usercmd_s *cmd)
{
  int Index; 
  bot_data_t *BotData; 
  const playerState_s *playerState; 
  usercmd_s *v7; 
  scr_string_t *p_m_CoverState; 
  __int64 v9; 
  __int128 v10; 
  const dvar_t *v11; 
  gentity_s *ent; 
  const dvar_t *v13; 
  gentity_s *v14; 
  const dvar_t *v15; 
  sentient_s *sentient; 
  team_t eTeam; 
  unsigned __int64 buttons; 
  const Weapon *ViewmodelWeapon; 
  int health; 
  bool v21; 
  usercmd_s *lastUserCmd; 
  GClientTaskQueue outTaskQueue; 

  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1894, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1895, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Index = Agent_GetIndex(agent);
  BotData = Agent_GetBotData(Index);
  playerState = BotData->botInfo.playerState;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1902, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BotData->botInfo.ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1904, ASSERT_TYPE_ASSERT, "( botInfo->ent )", (const char *)&queryFormat, "botInfo->ent") )
    __debugbreak();
  Bot_InitializeCmdTime(cmd);
  if ( BotData->botInfo.ent )
  {
    if ( !BotData->botInfo.lastUserCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1917, ASSERT_TYPE_ASSERT, "( botInfo->lastUserCmd )", (const char *)&queryFormat, "botInfo->lastUserCmd") )
      __debugbreak();
    v7 = cmd;
    p_m_CoverState = &BotData->scriptedAgentInfo.blackboard.m_CoverState;
    v9 = 2i64;
    do
    {
      v7 = (usercmd_s *)((char *)v7 + 128);
      v10 = *(_OWORD *)p_m_CoverState;
      p_m_CoverState += 32;
      *(_OWORD *)&v7[-1].offHand.attachmentVariationIndices[13] = v10;
      *(_OWORD *)&v7[-1].offHand.weaponCamo = *((_OWORD *)p_m_CoverState - 7);
      *(_OWORD *)v7[-1].remoteControlMove = *((_OWORD *)p_m_CoverState - 6);
      *(_OWORD *)v7[-1].vehAngles = *((_OWORD *)p_m_CoverState - 5);
      *(_OWORD *)&v7[-1].vehOrgZ = *((_OWORD *)p_m_CoverState - 4);
      *(_OWORD *)&v7[-1].gunYOfs = *((_OWORD *)p_m_CoverState - 3);
      *(_OWORD *)v7[-1].sightedClientsMask.data = *((_OWORD *)p_m_CoverState - 2);
      *(_OWORD *)&v7[-1].sightedClientsMask.data[4] = *((_OWORD *)p_m_CoverState - 1);
      --v9;
    }
    while ( v9 );
    v7->buttons = *(_QWORD *)p_m_CoverState;
    cmd->buttons = 0i64;
    Bot_ThinkRoundRobin(BotData);
    Bot_UpdateDebugErrorLocations(BotData);
    Bot_DrawDebugErrorLocations(BotData);
    v11 = DVARBOOL_bot_GodMode;
    if ( !DVARBOOL_bot_GodMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_GodMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    ent = BotData->botInfo.ent;
    if ( v11->current.enabled )
      ent->flags.m_flags[0] |= 1u;
    else
      ent->flags.m_flags[0] &= ~1u;
    v13 = DVARBOOL_bot_DemiGodMode;
    if ( !DVARBOOL_bot_DemiGodMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_DemiGodMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = BotData->botInfo.ent;
    if ( v13->current.enabled )
      v14->flags.m_flags[0] |= 2u;
    else
      v14->flags.m_flags[0] &= ~2u;
    v15 = DVARBOOL_bot_DisableAllAI;
    if ( !DVARBOOL_bot_DisableAllAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_DisableAllAI") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled || (BotData->botInfo.scriptFlags & 0x400000) != 0 )
    {
      memset_0(cmd, 0, sizeof(usercmd_s));
      Bot_Weap_ClearCmd(cmd, BotData->botInfo.playerState);
      lastUserCmd = BotData->botInfo.lastUserCmd;
      *(double *)cmd->angles.v = *(double *)lastUserCmd->angles.v;
      cmd->angles.v[2] = lastUserCmd->angles.v[2];
      Bot_FinalizeCmdTime(cmd);
      return;
    }
    Bot_FinalizeCmdTime(cmd);
    Bot_UpdateNavigator(&BotData->botInfo);
    if ( SV_BotControllingRemoteMissile(BotData->botInfo.ent) )
      cmd->buttons |= 0x40000ui64;
    sentient = BotData->botInfo.ent->sentient;
    if ( !sentient || (eTeam = sentient->eTeam) == TEAM_ZERO || eTeam == TEAM_SPECTATOR || sv_paused->current.integer || Com_MP_GetIsLocalServerPaused() )
    {
      Bot_SetFrozenCmd(BotData, cmd);
      return;
    }
    if ( SV_AgentEntityIsFrozen(BotData->botInfo.ent) )
    {
      buttons = BotData->botInfo.lastUserCmd->buttons;
      if ( (buttons & 0x80u) != 0i64 )
      {
        cmd->buttons |= 0x80ui64;
        buttons = BotData->botInfo.lastUserCmd->buttons;
      }
      if ( (buttons & 0x40) != 0 )
      {
        cmd->buttons |= 0x40ui64;
        buttons = BotData->botInfo.lastUserCmd->buttons;
      }
      if ( (buttons & 8) != 0 )
        cmd->buttons |= 8ui64;
      Bot_DrawDebug(BotData);
      Bot_SetFrozenCmd(BotData, cmd);
      ViewmodelWeapon = Bot_Weap_GetViewmodelWeapon(playerState);
      if ( Bot_Weap_IsNone(ViewmodelWeapon) )
        Bot_Weap_Update(BotData, cmd);
      if ( !SV_AgentEntityIsLookFrozen(BotData->botInfo.ent) )
        Bot_UpdateDirection(BotData, cmd);
      return;
    }
    health = BotData->botInfo.ent->health;
    v21 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&playerState->pm_flags, ACTIVE, 0xFu);
    if ( health <= 0 || v21 )
    {
      Sentient_InvalidateNearestNode(BotData->botInfo.sentient);
      Sentient_InvalidateNearestTacPoint(BotData->botInfo.sentient);
LABEL_69:
      Bot_Weap_ClearCmd(cmd, BotData->botInfo.playerState);
      return;
    }
    if ( !Sentient_NearestNode(BotData->botInfo.ent->sentient) )
    {
      Bot_UpdateStrafe(BotData);
      Bot_UpdateMove_OffPathGrid(BotData, cmd);
      if ( BG_IsScriptedSceneAnimFlagEnabled(playerState) )
      {
        Bot_Weap_Update(BotData, cmd);
        return;
      }
      goto LABEL_69;
    }
    BotData->botDebugData.flags &= ~2u;
    Bot_UpdateRadar(BotData);
    Bot_UpdateXRayVision(BotData);
    Bot_UpdateSight(BotData, cmd);
    Bot_UpdateThreat(BotData);
    Bot_UpdateEnemyTrack(BotData);
    Bot_UpdateDistToEnemy(BotData);
    Bot_UpdateRiotShieldDesired(BotData);
    Bot_Weap_Update(BotData, cmd);
    Bot_UpdateMovement(BotData, cmd);
    Bot_UpdateDoors(BotData);
    Bot_UpdateAimDownSightsDesire(BotData, cmd);
    Bot_UpdateCombat(BotData, cmd);
    Bot_UpdateReload(BotData, cmd);
    Bot_UpdateAimDownSights(BotData, cmd);
    Bot_UpdateScriptedButtons(BotData, cmd);
    GClientTaskQueue::Init(&outTaskQueue, BotData->botInfo.ent->s.number);
    if ( SV_AgentUsabilityEnabled(BotData->botInfo.ent->agent) )
      G_PlayerUse_UpdateActivate(&outTaskQueue, BotData->botInfo.ent);
    G_Execution_Check(&outTaskQueue, BotData->botInfo.lastUserCmd, cmd, BotData->botInfo.ent);
    GClientTaskQueue::ExecuteTasks(&outTaskQueue);
    Bot_DrawDebug(BotData);
    Bot_UpdateScreenTargets(BotData);
    Bot_UpdateMeleeCharge(BotData, cmd);
    Bot_UpdateHybridToggle(BotData, cmd);
    Bot_UpdateCLFinishMoveButtons(BotData, cmd);
    if ( Bot_IsFiringWeapon(BotData, cmd) )
      BotData->botInfo.lastAudioDistraction = level.time;
    if ( memcmp_0(&cmd->weapon, &BotData->botInfo.lastUserCmd->weapon, 0x3Cui64) )
      BotData->botInfo.weaponFireWaitArcCos = 0.0;
    BotData->botInfo.flags &= 0xFFFFFF9F;
    if ( (LOBYTE(BotData->scriptedAgentInfo.blackboard.m_ShootParams.m_Pos.v[0]) & 8) != 0 )
      Bot_PathClear(&BotData->botInfo);
    Bot_UpdateClientMessageNotifies(BotData, cmd);
  }
}

/*
==============
SV_AgentUpdateInfo
==============
*/
int SV_AgentUpdateInfo(gentity_s *entity)
{
  gagent_s *agent; 
  unsigned int v3; 
  GWeaponMap *Instance; 
  __int64 v5; 
  characterInfo_t *v6; 
  unsigned int model; 
  const char *v8; 
  char *v9; 
  int v10; 
  int v11; 
  BOOL v12; 
  int EquippedWeaponIndex; 
  __int64 v14; 
  bool v15; 
  bool *isWeaponSmoking; 
  int v17; 
  int *weaponShotCount; 
  unsigned int *p_weaponShotCount; 
  GHandler *Handler; 
  const WeaponHeat *v21; 
  signed __int64 v22; 
  char *v23; 
  bool *dobjAttachModelLoaded; 
  char *v25; 
  scr_string_t *attachTagNames; 
  __int64 v27; 
  unsigned __int16 *attachModelNames; 
  signed __int64 v29; 
  signed __int64 v30; 
  unsigned int v31; 
  const char *v32; 
  char *v33; 
  int v34; 
  int v35; 
  const char *v36; 
  unsigned int v37; 
  int v38; 
  unsigned int Animset; 
  int result; 
  Weapon *r_stowedWeapon; 
  int v42; 
  signed __int64 v43; 
  signed __int64 v44; 
  characterInfo_t *inOutCharacterInfo; 
  Weapon r_heldWeapon; 
  Weapon r_turretWeapon; 
  Weapon r_accessoryWeapon; 
  Weapon r_executionWeapon; 
  Weapon v51; 
  Weapon r_thrownWeapon; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2275, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2276, ASSERT_TYPE_ASSERT, "(entity->agent)", (const char *)&queryFormat, "entity->agent") )
    __debugbreak();
  agent = entity->agent;
  if ( agent->agentState.entityNum != entity->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2279, ASSERT_TYPE_ASSERT, "(agent->agentState.entityNum == entity->s.number)", (const char *)&queryFormat, "agent->agentState.entityNum == entity->s.number") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > agent->agentState.entityNum )
    goto LABEL_94;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( agent->agentState.entityNum > (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
  {
LABEL_94:
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v3 = ComCharacterLimits::ms_gameData.m_characterCount - 1;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(r_stowedWeapon) = agent->agentState.entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2280, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentEntityIndexOffset() ) <= ( agent->agentState.entityNum ) && ( agent->agentState.entityNum ) <= ( ComCharacterLimits::GetCharacterMaxCount() - 1 )", "agent->agentState.entityNum not in [ComCharacterLimits::GetAgentEntityIndexOffset(), ComCharacterLimits::GetCharacterMaxCount() - 1]\n\t%i not in [%i, %i]", r_stowedWeapon, ComCharacterLimits::ms_gameData.m_clientCount, v3) )
      __debugbreak();
  }
  Instance = GWeaponMap::GetInstance();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)agent->agentState.entityNum);
  inOutCharacterInfo = (characterInfo_t *)v5;
  v6 = (characterInfo_t *)v5;
  if ( (!v5 || !*(_DWORD *)(v5 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2286, ASSERT_TYPE_ASSERT, "(ci && ci->infoValid)", (const char *)&queryFormat, "ci && ci->infoValid") )
    __debugbreak();
  BG_GetCharacterWeapons(Instance, &entity->s, v6, &r_heldWeapon, &r_thrownWeapon, &v51, &r_executionWeapon, &r_accessoryWeapon, &r_turretWeapon);
  v42 = 0;
  model = entity->model;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v8 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, model);
  v6->dobjModelLoaded = 1;
  agent->agentState.modelindex = entity->model;
  v9 = v6->model;
  do
  {
    v10 = (unsigned __int8)v9[v8 - v6->model];
    v11 = (unsigned __int8)*v9 - v10;
    if ( v11 )
      break;
    ++v9;
  }
  while ( v10 );
  if ( v11 )
  {
    v42 = 1;
    Core_strcpy(v6->model, 0x40ui64, v8);
  }
  v6->isFemale = 0;
  agent->agentState.suitIndex = agent->playerState.suitIndex;
  if ( BG_Skydive_IsSkydiving(&agent->playerState) )
    v12 = 0;
  else
    v12 = BG_Ladder_IsDualWieldingAllowed(&agent->playerState) && agent->playerState.weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
  agent->agentState.dualWielding = v12;
  agent->agentState.offhandShieldDeployed = 0;
  agent->agentState.isUsingWeaponAltMode = BG_UsingAlternate(&agent->playerState);
  agent->agentState.animLinkedToType = BG_GetLinkedToAnimType(&agent->playerState);
  agent->agentState.isOnWall = BG_IsOnWallAnimFlagEnabled(&agent->playerState);
  agent->agentState.isScriptedSceneAnim = BG_IsScriptedSceneAnimFlagEnabled(&agent->playerState);
  agent->agentState.enableVehicleOccupancyAnimations = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0x1Bu);
  agent->agentState.carryObjectIndex = agent->playerState.carryState.carryObjectIndex;
  agent->agentState.carryObjectFlags = agent->playerState.carryState.flags;
  agent->agentState.isOnStairs = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&agent->playerState.pm_flags, ACTIVE, 8u);
  agent->agentState.skydiveAnimState = agent->playerState.skydivePlayerState.animState;
  agent->agentState.execution = agent->playerState.activeExecution;
  agent->agentState.executionStance = agent->playerState.activeExecutionVictimStance;
  agent->agentState.executionStartTime = agent->playerState.activeExecutionStartTime;
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v15 = r_heldWeapon.weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, &agent->playerState, &r_heldWeapon), EquippedWeaponIndex >= 0) && (v14 = EquippedWeaponIndex, (gagent_s *)((char *)agent + v14 * 16) != (gagent_s *)-1540i64) && agent->playerState.weapEquippedData[v14].hybridScope;
  agent->agentState.hybridScopeState = v15;
  isWeaponSmoking = agent->agentState.isWeaponSmoking;
  v17 = 0;
  weaponShotCount = agent->agentState.weaponShotCount;
  p_weaponShotCount = &agent->playerState.weapState[0].weaponShotCount;
  do
  {
    *weaponShotCount = *p_weaponShotCount;
    Handler = GHandler::getHandler();
    v21 = Handler->GetPlayerWeaponHeat(Handler, &agent->playerState, &r_heldWeapon, (PlayerHandIndex)v17++);
    *isWeaponSmoking = BG_Heat_GetIsSmoking(v21, &r_heldWeapon);
    ++weaponShotCount;
    p_weaponShotCount += 20;
    ++isWeaponSmoking;
  }
  while ( v17 < 2 );
  agent->agentState.chargedWeaponInfo.weaponChargeAmount[0] = agent->playerState.weapState[0].weaponChargeAmount;
  agent->agentState.chargedWeaponInfo.weaponChargeAmount[1] = agent->playerState.weapState[1].weaponChargeAmount;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2349, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  *(_QWORD *)&agent->agentState.compressedAnimData.flags = 0i64;
  *(_QWORD *)&agent->agentState.compressedAnimData.distanceZ = 0i64;
  agent->agentState.compressedAnimData.endScriptAnimTableIndex = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&agent->playerState.pm_flags, ACTIVE, 5u) )
  {
    *(_OWORD *)&agent->agentState.compressedAnimData.flags = *(_OWORD *)&agent->playerState.mantleState.compressedAnimData.flags;
    agent->agentState.compressedAnimData.endScriptAnimTableIndex = agent->playerState.mantleState.compressedAnimData.endScriptAnimTableIndex;
  }
  agent->agentState.meleeChargeEnt = agent->playerState.meleeChargeEnt;
  agent->agentState.meleeAnimDataPacked = BG_GetMeleeAnimConditionsPacked(&agent->playerState);
  v6->meleeChargeEnt = agent->playerState.meleeChargeEnt;
  v6->meleeAnimDataPacked = agent->agentState.meleeAnimDataPacked;
  agent->agentState.mantleSpeedAnimCond = agent->playerState.mantleState.mantleSpeedAnimCond;
  if ( SV_IsAgentScripted(entity) )
    G_ActiveMP_UpdateAgentFootstepState(entity, v6);
  v22 = (char *)agent - (char *)entity;
  v23 = v6->attachTagNames[0];
  dobjAttachModelLoaded = v6->dobjAttachModelLoaded;
  v25 = v6->attachTagNames[0];
  attachTagNames = entity->attachTagNames;
  v27 = 9i64;
  attachModelNames = entity->attachModelNames;
  v29 = v22 + 20676;
  v30 = v22 + 20712;
  v44 = v22 + 20676;
  v43 = v22 + 20712;
  do
  {
    *dobjAttachModelLoaded = 1;
    if ( *attachModelNames )
    {
      v31 = *attachModelNames;
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v32 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v31);
      *(scr_string_t *)((char *)attachTagNames + v44) = *attachModelNames;
      v33 = v25 - 576;
      do
      {
        v34 = (unsigned __int8)v33[v32 - (v25 - 576)];
        v35 = (unsigned __int8)*v33 - v34;
        if ( v35 )
          break;
        ++v33;
      }
      while ( v34 );
      if ( v35 )
      {
        v42 = 1;
        Core_strcpy(v25 - 576, 0x40ui64, v32);
      }
      if ( !*attachTagNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2395, ASSERT_TYPE_ASSERT, "(entity->attachTagNames[modelNum] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "entity->attachTagNames[modelNum] != NULL_SCR_STRING") )
        __debugbreak();
      v36 = SL_ConvertToString(*attachTagNames);
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      *(scr_string_t *)((char *)attachTagNames + v43) = (__int64)GConfigStrings::ms_gConfigStrings->GetClientTagIndex(GConfigStrings::ms_gConfigStrings, v36);
      if ( strcmp(v25, v36) )
      {
        v42 = 1;
        Core_strcpy(v25, 0x40ui64, v36);
      }
      v29 = v44;
      v30 = v43;
    }
    else
    {
      *(v23 - 576) = 0;
      *v23 = 0;
      *(scr_string_t *)((char *)attachTagNames + v29) = 0;
      *(scr_string_t *)((char *)attachTagNames + v30) = 0;
    }
    v25 += 64;
    ++attachModelNames;
    ++attachTagNames;
    ++dobjAttachModelLoaded;
    v23 += 64;
    --v27;
  }
  while ( v27 );
  v37 = entity->s.animInfo.animData & 1;
  if ( inOutCharacterInfo->usingAnimState == v37 )
  {
    v38 = v42;
  }
  else
  {
    v38 = 1;
    inOutCharacterInfo->usingAnimState = v37;
    inOutCharacterInfo->animTreeDirty = 1;
  }
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(&entity->s);
    v38 |= BG_PlayersASM_ResetSmallAnimTree(Animset, MOVEMENT, inOutCharacterInfo);
  }
  result = G_GameInterface_AgentUpdateInfo(entity);
  if ( v38 || result )
    return 1;
  return result;
}

/*
==============
SV_AgentUsabilityEnabled
==============
*/
__int64 SV_AgentUsabilityEnabled(gagent_s *agent)
{
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2892, ASSERT_TYPE_ASSERT, "( agent )", (const char *)&queryFormat, "agent") )
    __debugbreak();
  return ((unsigned int)agent->flags >> 3) & 1;
}

/*
==============
SV_Agent_AllocateMemory
==============
*/
void SV_Agent_AllocateMemory(int maxAgents, HunkUser *hunkUser)
{
  __int64 v2; 
  unsigned int v3; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  char *v6; 
  sentient_info_t **p_sentientInfo; 
  __int64 v8; 

  v2 = maxAgents;
  v3 = 0;
  if ( (unsigned int)maxAgents > 0x30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 227, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxAgents ) && ( maxAgents ) <= ( 48 )", "maxAgents not in [0, MAX_AGENTS_MP]\n\t%i not in [%i, %i]", maxAgents, 0i64, 48) )
    __debugbreak();
  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 228, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( PersistentGlobalsMP->agents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 231, ASSERT_TYPE_ASSERT, "( svPers->agents == 0 )", (const char *)&queryFormat, "svPers->agents == NULL") )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
    s_agent_data = (bot_data_t *)Mem_HunkUser_AllocInternal(hunkUser, 131056 * v2, 0x80ui64, "SV_Agent_AllocateMemory");
    memset_0(s_agent_data, 0, 131056 * v2);
    v6 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 17408 * v2, 0x80ui64, "SV_Agent_AllocateMemory");
    memset_0(v6, 0, 17408 * v2);
    if ( (_DWORD)v2 )
    {
      p_sentientInfo = &s_agent_data->botInfo.sentientInfo;
      do
      {
        v8 = 272 * v3;
        p_sentientInfo += 16382;
        ++v3;
        *(p_sentientInfo - 16382) = (sentient_info_t *)&v6[64 * v8];
      }
      while ( v3 < (unsigned int)v2 );
    }
    PersistentGlobalsMP->agents = (agent_t *)Mem_HunkUser_AllocInternal(hunkUser, 280 * v2, 0x80ui64, "SV_Agent_AllocateMemory");
  }
  PersistentGlobalsMP->agentCount = v2;
}

/*
==============
SV_Agent_FreeMemory
==============
*/
void SV_Agent_FreeMemory(void)
{
  s_agent_data = NULL;
}

/*
==============
SV_Agent_GetAllocationSize
==============
*/
__int64 SV_Agent_GetAllocationSize(int maxAgents)
{
  return 17408 * maxAgents + ((131056 * maxAgents + 127) & 0xFFFFFF80) + ((280 * maxAgents + 127) & 0xFFFFFF80);
}

/*
==============
SV_Agent_IsScripted
==============
*/
__int64 SV_Agent_IsScripted(int entityNum)
{
  __int64 v1; 
  gentity_s *v2; 
  int AgentIndexFromEntityIndex; 
  __int64 v5; 

  v1 = entityNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 92, ASSERT_TYPE_ASSERT, "( G_Agent_SystemActive() )", (const char *)&queryFormat, "G_Agent_SystemActive()") )
    __debugbreak();
  v2 = &g_entities[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1602, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !v2->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 93, ASSERT_TYPE_ASSERT, "( SV_IsAgent( entityNum ) )", (const char *)&queryFormat, "SV_IsAgent( entityNum )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x800 )
  {
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 94, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, 2048) )
      __debugbreak();
  }
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(v1);
  return (unsigned int)Agent_GetBotDataAndOnlyBotData(AgentIndexFromEntityIndex)->bIsScriptedAgent;
}

/*
==============
SV_GetAgentControlledByPlayerNum
==============
*/
bool SV_GetAgentControlledByPlayerNum(int entityNum, int *outControllingClientNum)
{
  if ( outControllingClientNum )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    *outControllingClientNum = ComCharacterLimits::ms_gameData.m_characterCount;
  }
  return 0;
}

/*
==============
SV_IsAgent
==============
*/
_BOOL8 SV_IsAgent(int clientNum)
{
  gentity_s *v1; 

  v1 = &g_entities[clientNum];
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1602, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return v1->agent != NULL;
}

/*
==============
SV_IsAgentBot
==============
*/
int SV_IsAgentBot(int clientNum)
{
  int result; 

  result = SV_IsAgent(clientNum);
  if ( result )
    return SV_Agent_IsScripted(clientNum) == 0;
  return result;
}

/*
==============
SV_IsAgentEntity
==============
*/
_BOOL8 SV_IsAgentEntity(const gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1602, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return entity->agent != NULL;
}

/*
==============
SV_IsAgentScripted
==============
*/
int SV_IsAgentScripted(const gentity_s *entity)
{
  if ( !entity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2470, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 1602, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
      __debugbreak();
  }
  if ( entity->agent )
    return SV_Agent_IsScripted(entity->s.number);
  else
    return 0;
}

/*
==============
SV_ScrUpdateAgents
==============
*/
void SV_ScrUpdateAgents(void)
{
  GStatic *GameStatics; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int v2; 
  agent_t *i; 
  __int64 v4; 
  const gentity_s *gentity; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v7; 
  AIAgentInterface v8; 
  AIAgentInterface *v9; 

  if ( SV_Loaded() && BG_AgentSystemEnabled() )
  {
    GameStatics = GStatic::GetGameStatics();
    Profile_Begin(291);
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v2 = 0;
    for ( i = PersistentGlobalsMP->agents; v2 < PersistentGlobalsMP->agentCount; ++i )
    {
      if ( i->entityNum != 2047 && Bot_IsCharacterActive(i->gentity) )
      {
        v4 = (__int64)GameStatics->GetCharacterInfo(GameStatics, i->entityNum);
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2452, ASSERT_TYPE_ASSERT, "( characterInfo )", (const char *)&queryFormat, "characterInfo") )
          __debugbreak();
        if ( *(_DWORD *)(v4 + 2568) )
        {
          gentity = i->gentity;
          AIAgentInterface::AIAgentInterface(&v8);
          v8.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
          v9 = NULL;
          if ( SV_IsAgentScripted(gentity) )
          {
            ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(gentity);
            if ( ScriptedAgentInfo )
            {
              v9 = &v8;
              AINewAgentInterface::SetAgent((AINewAgentInterface *)&v8, ScriptedAgentInfo);
            }
          }
          v7 = v9;
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2456, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
            __debugbreak();
          v7->Think(v7);
        }
      }
      ++v2;
    }
    Profile_EndInternal(NULL);
  }
}

/*
==============
SV_UpdateAgents
==============
*/
void SV_UpdateAgents(void)
{
  __int64 v0; 
  const void *v1; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  __int64 v3; 
  int v4; 
  agent_t *i; 
  __int64 v6; 
  __int64 v7; 
  usercmd_s cmd; 

  if ( !BG_AgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2761, ASSERT_TYPE_ASSERT, "( BG_AgentSystemEnabled() )", (const char *)&queryFormat, "BG_AgentSystemEnabled()") )
    __debugbreak();
  if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2762, ASSERT_TYPE_ASSERT, "( SV_Loaded() )", (const char *)&queryFormat, "SV_Loaded()") )
    __debugbreak();
  Profile_Begin(406);
  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 103, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 104, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to set the active bgs to the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v0 = tls_index;
  v1 = *(const void **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
  if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 105, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == 0 )", v1) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 272i64) = *(_QWORD *)&GStatic::ms_gameStatics;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v3 = *(_QWORD *)&GStatic::ms_gameStatics;
  v4 = 0;
  for ( i = PersistentGlobalsMP->agents; v4 < PersistentGlobalsMP->agentCount; ++i )
  {
    if ( i->entityNum != 2047 && Bot_IsCharacterActive(i->gentity) )
    {
      if ( !i->gentity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2784, ASSERT_TYPE_ASSERT, "( gagent )", (const char *)&queryFormat, "gagent") )
        __debugbreak();
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 224i64))(v3, (unsigned int)i->entityNum);
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_mp.cpp", 2792, ASSERT_TYPE_ASSERT, "( characterInfo )", (const char *)&queryFormat, "characterInfo") )
        __debugbreak();
      if ( !*(_DWORD *)(v6 + 2568) )
      {
        SV_AgentThink(i, &cmd);
        Bot_CyclePathTurn(i->entityNum);
        SV_BotIncrementActiveBotCount();
        SV_AgentClientThink(i, &cmd);
      }
    }
    ++v4;
  }
  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 113, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 114, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to clear the active bgs from the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v7 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
  if ( *(_QWORD *)(v7 + 272) != *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 115, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_gameStatics ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == ms_gameStatics )", *(const void **)(v7 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 272i64) = 0i64;
  Profile_EndInternal(NULL);
}

