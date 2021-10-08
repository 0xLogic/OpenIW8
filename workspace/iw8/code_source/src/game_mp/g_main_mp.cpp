/*
==============
G_MainMP_InitGame
==============
*/

void __fastcall G_MainMP_InitGame(const SvServerInitSettings *initSettings, int levelTime, int frameDuration, unsigned int randomSeed)
{
  ?G_MainMP_InitGame@@YAXPEBUSvServerInitSettings@@HHI@Z(initSettings, levelTime, frameDuration, randomSeed);
}

/*
==============
G_MainMP_DoesGameStateAllowServerPause
==============
*/

int __fastcall G_MainMP_DoesGameStateAllowServerPause()
{
  return ?G_MainMP_DoesGameStateAllowServerPause@@YAHXZ();
}

/*
==============
G_MainMP_ClearClientArchiveTime
==============
*/

void __fastcall G_MainMP_ClearClientArchiveTime(int clientNum)
{
  ?G_MainMP_ClearClientArchiveTime@@YAXH@Z(clientNum);
}

/*
==============
G_MainMP_GetClientState
==============
*/

clientState_t *__fastcall G_MainMP_GetClientState(int clientNum)
{
  return ?G_MainMP_GetClientState@@YAPEAUclientState_t@@H@Z(clientNum);
}

/*
==============
G_MainMP_FreeAllAgentCorpses
==============
*/

void G_MainMP_FreeAllAgentCorpses(void)
{
  ?G_MainMP_FreeAllAgentCorpses@@YAXXZ();
}

/*
==============
G_MainMP_RegisterGametypeDvars
==============
*/

void __fastcall G_MainMP_RegisterGametypeDvars(const char *gameType)
{
  ?G_MainMP_RegisterGametypeDvars@@YAXPEBD@Z(gameType);
}

/*
==============
G_MainMP_PostDebuggerUpdate
==============
*/

void G_MainMP_PostDebuggerUpdate(void)
{
  ?G_MainMP_PostDebuggerUpdate@@YAXXZ();
}

/*
==============
G_MainMP_AllocateGameMemory
==============
*/

void __fastcall G_MainMP_AllocateGameMemory(HunkUser *hunkUser, const unsigned int maxClients, const unsigned int maxAgents, const bool allocateAiSystems)
{
  ?G_MainMP_AllocateGameMemory@@YAXPEAUHunkUser@@II_N@Z(hunkUser, maxClients, maxAgents, allocateAiSystems);
}

/*
==============
G_MainMP_DeregisterGameModeDvars
==============
*/

void G_MainMP_DeregisterGameModeDvars(void)
{
  ?G_MainMP_DeregisterGameModeDvars@@YAXXZ();
}

/*
==============
G_MainMP_LogPrintf
==============
*/

void G_MainMP_LogPrintf(const char *fmt, ...)
{
  ?G_MainMP_LogPrintf@@YAXPEBDZZ(fmt);
}

/*
==============
G_MainMP_SetSavePersist
==============
*/

void __fastcall G_MainMP_SetSavePersist(int savepersist)
{
  ?G_MainMP_SetSavePersist@@YAXH@Z(savepersist);
}

/*
==============
G_MainMP_ShutdownGame
==============
*/

void __fastcall G_MainMP_ShutdownGame(bool fullClear)
{
  ?G_MainMP_ShutdownGame@@YAX_N@Z(fullClear);
}

/*
==============
G_MainMP_ClearClientCorpseCache
==============
*/

void __fastcall G_MainMP_ClearClientCorpseCache(int clientNum)
{
  ?G_MainMP_ClearClientCorpseCache@@YAXH@Z(clientNum);
}

/*
==============
G_MainMP_GetImpulseFieldEntityCount
==============
*/

int __fastcall G_MainMP_GetImpulseFieldEntityCount(const LocalClientNum_t localClientNum)
{
  return ?G_MainMP_GetImpulseFieldEntityCount@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
G_MainMP_GetAgentState
==============
*/

agentState_s *__fastcall G_MainMP_GetAgentState(int agentNum)
{
  return ?G_MainMP_GetAgentState@@YAPEAUagentState_s@@H@Z(agentNum);
}

/*
==============
G_MainMP_PreDebuggerUpdate
==============
*/

void G_MainMP_PreDebuggerUpdate(void)
{
  ?G_MainMP_PreDebuggerUpdate@@YAXXZ();
}

/*
==============
G_MainMP_GetGameMemoryAllocationSize
==============
*/

unsigned int __fastcall G_MainMP_GetGameMemoryAllocationSize(const unsigned int maxClients, const unsigned int maxAgents, const bool allocateAiSystems)
{
  return ?G_MainMP_GetGameMemoryAllocationSize@@YAIII_N@Z(maxClients, maxAgents, allocateAiSystems);
}

/*
==============
G_MainMP_GetEntIndexByImpulseFieldIndex
==============
*/

int __fastcall G_MainMP_GetEntIndexByImpulseFieldIndex(const LocalClientNum_t localClientNum, int impulseFieldIndex)
{
  return ?G_MainMP_GetEntIndexByImpulseFieldIndex@@YAHW4LocalClientNum_t@@H@Z(localClientNum, impulseFieldIndex);
}

/*
==============
G_MainMP_RegisterGameModeDvars
==============
*/

void G_MainMP_RegisterGameModeDvars(void)
{
  ?G_MainMP_RegisterGameModeDvars@@YAXXZ();
}

/*
==============
G_MainMP_GetClientArchiveTime
==============
*/

int __fastcall G_MainMP_GetClientArchiveTime(int clientNum)
{
  return ?G_MainMP_GetClientArchiveTime@@YAHH@Z(clientNum);
}

/*
==============
G_MainMP_GetSavePersist
==============
*/

int __fastcall G_MainMP_GetSavePersist()
{
  return ?G_MainMP_GetSavePersist@@YAHXZ();
}

/*
==============
GameScriptDataMP::~GameScriptDataMP
==============
*/

void __fastcall GameScriptDataMP::~GameScriptDataMP(GameScriptDataMP *this)
{
  ??1GameScriptDataMP@@QEAA@XZ(this);
}

/*
==============
G_MainMP_GetPlayerState
==============
*/

playerState_s *__fastcall G_MainMP_GetPlayerState(int clientNum)
{
  return ?G_MainMP_GetPlayerState@@YAPEAUplayerState_s@@H@Z(clientNum);
}

/*
==============
G_MainMP_GetClientScore
==============
*/

int __fastcall G_MainMP_GetClientScore(int clientNum)
{
  return ?G_MainMP_GetClientScore@@YAHH@Z(clientNum);
}

/*
==============
G_MainMP_RunClientEndFrame
==============
*/

void G_MainMP_RunClientEndFrame(void)
{
  ?G_MainMP_RunClientEndFrame@@YAXXZ();
}

/*
==============
G_MainMP_GetDebugInfoForAnimScriptOverlay
==============
*/

bool __fastcall G_MainMP_GetDebugInfoForAnimScriptOverlay(int handle, const characterInfo_t **ci, const playerState_s **ps)
{
  return ?G_MainMP_GetDebugInfoForAnimScriptOverlay@@YA_NHPEAPEBUcharacterInfo_t@@PEAPEBUplayerState_s@@@Z(handle, ci, ps);
}

/*
==============
G_MainMP_PreFrame
==============
*/

void G_MainMP_PreFrame(void)
{
  ?G_MainMP_PreFrame@@YAXXZ();
}

/*
==============
G_MainMP_ProcessUserMoveOutput
==============
*/

void G_MainMP_ProcessUserMoveOutput(void)
{
  ?G_MainMP_ProcessUserMoveOutput@@YAXXZ();
}

/*
==============
G_MainMP_FreeEntities
==============
*/

void G_MainMP_FreeEntities(void)
{
  ?G_MainMP_FreeEntities@@YAXXZ();
}

/*
==============
G_MainMP_GetClientDeaths
==============
*/

int __fastcall G_MainMP_GetClientDeaths(int clientNum)
{
  return ?G_MainMP_GetClientDeaths@@YAHH@Z(clientNum);
}

/*
==============
G_MainMP_ClearImpulseFieldEntities
==============
*/

void G_MainMP_ClearImpulseFieldEntities(void)
{
  ?G_MainMP_ClearImpulseFieldEntities@@YAXXZ();
}

/*
==============
G_MainMP_RunFrame
==============
*/

void __fastcall G_MainMP_RunFrame(int levelTime)
{
  ?G_MainMP_RunFrame@@YAXH@Z(levelTime);
}

/*
==============
G_MainMP_AddImpulseFieldEntity
==============
*/

void __fastcall G_MainMP_AddImpulseFieldEntity(int entIndex)
{
  ?G_MainMP_AddImpulseFieldEntity@@YAXH@Z(entIndex);
}

/*
==============
G_MainMP_ClearLowHunk
==============
*/

void G_MainMP_ClearLowHunk(void)
{
  ?G_MainMP_ClearLowHunk@@YAXXZ();
}

/*
==============
G_MainMP_ExitLevel
==============
*/

void G_MainMP_ExitLevel(void)
{
  ?G_MainMP_ExitLevel@@YAXXZ();
}

/*
==============
G_MainMP_CalculateRanks
==============
*/

void G_MainMP_CalculateRanks(void)
{
  ?G_MainMP_CalculateRanks@@YAXXZ();
}

/*
==============
G_MainMP_IsClientArchivePOTG
==============
*/

bool __fastcall G_MainMP_IsClientArchivePOTG(int clientNum)
{
  return ?G_MainMP_IsClientArchivePOTG@@YA_NH@Z(clientNum);
}

/*
==============
G_MainMP_FreeAllPlayerCorpses
==============
*/

void __fastcall G_MainMP_FreeAllPlayerCorpses(bool clearClientCorpses)
{
  ?G_MainMP_FreeAllPlayerCorpses@@YAX_N@Z(clearClientCorpses);
}

/*
==============
G_MainMP_IsCorpseExpired
==============
*/

bool __fastcall G_MainMP_IsCorpseExpired(const gentity_s *ent)
{
  return ?G_MainMP_IsCorpseExpired@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_MainMP_ShutdownGameMemory
==============
*/

void G_MainMP_ShutdownGameMemory(void)
{
  ?G_MainMP_ShutdownGameMemory@@YAXXZ();
}

/*
==============
GameScriptDataMP::~GameScriptDataMP
==============
*/
void GameScriptDataMP::~GameScriptDataMP(GameScriptDataMP *this)
{
  unsigned int v2; 
  unsigned int v3; 
  GCorpseInfoMP *playerCorpseInfo; 
  GCorpseInfoMP *agentCorpseInfo; 

  v2 = 0;
  v3 = 0;
  playerCorpseInfo = this->playerCorpseInfo;
  do
  {
    if ( playerCorpseInfo->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 4140, ASSERT_TYPE_ASSERT, "(this->playerCorpseInfo[corpseIndex].tree == 0)", "%s\n\tLeaked player corpse xanim memory", "this->playerCorpseInfo[corpseIndex].tree == NULL") )
      __debugbreak();
    ++v3;
    ++playerCorpseInfo;
  }
  while ( v3 < 8 );
  agentCorpseInfo = this->agentCorpseInfo;
  do
  {
    if ( agentCorpseInfo->tree )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 4145, ASSERT_TYPE_ASSERT, "(this->agentCorpseInfo[corpseIndex].tree == 0)", "%s\n\tLeaked agent corpse xanim memory", "this->agentCorpseInfo[corpseIndex].tree == NULL") )
        __debugbreak();
    }
    ++v2;
    ++agentCorpseInfo;
  }
  while ( v2 < 8 );
}

/*
==============
G_MainMP_AddImpulseFieldEntity
==============
*/
void G_MainMP_AddImpulseFieldEntity(int entIndex)
{
  int v1; 

  v1 = s_impulseFieldEntityCount;
  s_impulseFieldEntities[s_impulseFieldEntityCount] = entIndex;
  s_impulseFieldEntityCount = v1 + 1;
}

/*
==============
G_MainMP_AgentDoPerFrameNotifies
==============
*/
void G_MainMP_AgentDoPerFrameNotifies(gentity_s *ent)
{
  gagent_s *agent; 
  GWeaponMap *Instance; 
  unsigned int v4; 
  const Weapon *Weapon; 
  int v7; 
  char v8; 
  char v10; 
  int v11; 
  scrContext_t *v12; 
  unsigned int lastStateFlags; 
  int weaponState; 
  int v18; 
  scr_string_t end_firing; 
  scr_string_t begin_firing; 
  BOOL v21; 
  scr_string_t end_firing_left; 
  scr_string_t begin_firing_left; 
  int v24; 
  scr_string_t night_vision_off; 
  scr_string_t night_vision_on; 
  int v27; 
  bool IsUsingNightVision; 
  scr_string_t sprint_end; 
  scr_string_t sprint_begin; 
  int v31; 
  bool IsSprinting; 
  char v33; 
  bool v34; 
  scr_string_t sprint_slide_end; 
  bool v36; 
  scr_string_t sprint_slide_begin; 
  bool v38; 
  scr_string_t mantle_end; 
  bool v40; 
  scr_string_t mantle_start; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  bool value; 
  char v50; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2426, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  agent = ent->agent;
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2430, ASSERT_TYPE_ASSERT, "(agent)", (const char *)&queryFormat, "agent") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  value = 0;
  v4 = 0;
  _R13 = BG_GetCurrentWeaponForPlayer(Instance, &agent->playerState);
  do
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, agent->playerState.weaponsEquipped[v4]);
    if ( !memcmp_0(_R13, Weapon, 0x3Cui64) )
      break;
    ++v4;
  }
  while ( v4 < 0xF );
  v7 = 0;
  v8 = _R13->weaponIdx && v4 != 15 && BG_HasUnderbarrelAmmo(_R13) && agent->playerState.weapEquippedData[v4].inAltMode;
  _RDI = &agent->ns;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v10 = agent->ns.lastStateFlags & 1;
  if ( memcmp_0(_R13, &agent->ns, 0x3Cui64) || (v11 = 0, v8 != v10) )
    v11 = 1;
  if ( !memcmp_0(_R13, &agent->ns, 0x3Cui64) && v8 != v10 )
    v7 = 1;
  if ( v11 )
  {
    v12 = ScriptContext_Server();
    Scr_AddBool(v12, v7);
    GScr_Weapon_AddParam(v12, _R13, v8);
    GScr_Notify(ent, scr_const.weapon_change, 2u);
    __asm
    {
      vmovups ymm0, ymmword ptr [r13+0]
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm1, xmmword ptr [r13+20h]
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovsd  xmm0, qword ptr [r13+30h]
      vmovsd  qword ptr [rdi+30h], xmm0
    }
    *(_DWORD *)&agent->ns.lastWeapon.weaponCamo = *(_DWORD *)&_R13->weaponCamo;
    if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
      __debugbreak();
    lastStateFlags = agent->ns.lastStateFlags;
    if ( v8 )
      agent->ns.lastStateFlags = lastStateFlags | 1;
    else
      agent->ns.lastStateFlags = lastStateFlags & 0xFFFFFFFE;
  }
  weaponState = agent->playerState.weapState[0].weaponState;
  v18 = agent->playerState.weapState[1].weaponState;
  end_firing = scr_const.end_firing;
  begin_firing = scr_const.begin_firing;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v21 = weaponState == 16 && agent->playerState.pm_type < 7;
  if ( v21 == ((agent->ns.lastStateFlags >> 1) & 1) )
  {
    LOBYTE(v21) = (agent->ns.lastStateFlags & 2) != 0;
  }
  else
  {
    if ( v21 )
      end_firing = begin_firing;
    GScr_Notify(ent, end_firing, 0);
  }
  end_firing_left = scr_const.end_firing_left;
  begin_firing_left = scr_const.begin_firing_left;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  if ( v18 == 16 && agent->playerState.pm_type < 7 )
  {
    v24 = 1;
    value = 1;
  }
  else
  {
    v24 = 0;
  }
  if ( v24 == ((agent->ns.lastStateFlags >> 2) & 1) )
  {
    value = (agent->ns.lastStateFlags & 4) != 0;
  }
  else
  {
    if ( v24 )
      end_firing_left = begin_firing_left;
    GScr_Notify(ent, end_firing_left, 0);
  }
  night_vision_off = scr_const.night_vision_off;
  night_vision_on = scr_const.night_vision_on;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v27 = (agent->ns.lastStateFlags >> 3) & 1;
  IsUsingNightVision = BG_IsUsingNightVision(&agent->playerState);
  v50 = IsUsingNightVision;
  if ( IsUsingNightVision == v27 )
  {
    v50 = v27;
  }
  else
  {
    if ( IsUsingNightVision )
      night_vision_off = night_vision_on;
    GScr_Notify(ent, night_vision_off, 0);
  }
  sprint_end = scr_const.sprint_end;
  sprint_begin = scr_const.sprint_begin;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v31 = (agent->ns.lastStateFlags >> 4) & 1;
  IsSprinting = PM_IsSprinting(&agent->playerState);
  v33 = IsSprinting;
  if ( IsSprinting == v31 )
  {
    v33 = v31;
  }
  else
  {
    if ( IsSprinting )
      sprint_end = sprint_begin;
    GScr_Notify(ent, sprint_end, 0);
  }
  v34 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&agent->playerState.pm_flags, ACTIVE, 0x1Du);
  sprint_slide_end = scr_const.sprint_slide_end;
  v36 = v34;
  sprint_slide_begin = scr_const.sprint_slide_begin;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  if ( v36 == ((agent->ns.lastStateFlags >> 5) & 1) )
  {
    v36 = (agent->ns.lastStateFlags & 0x20) != 0;
  }
  else
  {
    if ( v36 )
      sprint_slide_end = sprint_slide_begin;
    GScr_Notify(ent, sprint_slide_end, 0);
  }
  v38 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&agent->playerState.pm_flags, ACTIVE, 5u);
  mantle_end = scr_const.mantle_end;
  v40 = v38;
  mantle_start = scr_const.mantle_start;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  if ( v40 == ((agent->ns.lastStateFlags >> 9) & 1) )
  {
    v40 = (agent->ns.lastStateFlags & 0x200) != 0;
  }
  else
  {
    if ( v40 )
      mantle_end = mantle_start;
    GScr_Notify(ent, mantle_end, 0);
  }
  *(_QWORD *)agent->ns.previouslyEnergyDepleted = 0i64;
  *(_QWORD *)agent->ns.previouslyEnergyFilled = 0i64;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v42 = agent->ns.lastStateFlags | 2;
  if ( !v21 )
    v42 = agent->ns.lastStateFlags & 0xFFFFFFFD;
  agent->ns.lastStateFlags = v42;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v43 = agent->ns.lastStateFlags | 4;
  if ( !value )
    v43 = agent->ns.lastStateFlags & 0xFFFFFFFB;
  agent->ns.lastStateFlags = v43;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v44 = agent->ns.lastStateFlags | 8;
  if ( !v50 )
    v44 = agent->ns.lastStateFlags & 0xFFFFFFF7;
  agent->ns.lastStateFlags = v44;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v45 = agent->ns.lastStateFlags | 0x10;
  if ( !v33 )
    v45 = agent->ns.lastStateFlags & 0xFFFFFFEF;
  agent->ns.lastStateFlags = v45;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v46 = agent->ns.lastStateFlags | 0x20;
  if ( !v36 )
    v46 = agent->ns.lastStateFlags & 0xFFFFFFDF;
  agent->ns.lastStateFlags = v46;
  if ( agent == (gagent_s *)-53684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v47 = agent->ns.lastStateFlags | 0x200;
  if ( !v40 )
    v47 = agent->ns.lastStateFlags & 0xFFFFFDFF;
  agent->ns.lastStateFlags = v47;
}

/*
==============
G_MainMP_AllocateGameMemory
==============
*/
void G_MainMP_AllocateGameMemory(HunkUser *hunkUser, const unsigned int maxClients, const unsigned int maxAgents, const bool allocateAiSystems)
{
  __int64 v4; 
  unsigned int v6; 
  GStaticMP *v7; 
  characterInfo_t *v8; 
  GPlayerEventsMP *v9; 
  GPlayerEventsMP *v10; 
  GPlayerEventsMP *v11; 
  __int64 v12; 
  __int64 v13; 
  GameScriptData *v14; 
  GAntiLagMP *v15; 
  GAntiLag *v16; 
  GAntiLagMP *AntiLagMP; 
  char *v18; 
  int v19; 
  char *v20; 
  AntilagDebugCharacterInfo **v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  char *v25; 
  unsigned int v26; 
  GTurret **v27; 
  GTurret *v28; 
  GMovingPlatformsMP *v29; 
  GMovingPlatforms *v30; 
  GConfigStrings *v31; 
  GBullet *v32; 
  GClientSystem *v33; 
  gclient_s *v34; 
  GCombatMP *v35; 
  GCombat *v36; 
  GItems *v37; 
  GBallistics *v38; 
  GMissileMP *v39; 
  GMissile *v40; 
  GUtilsMP *v41; 
  GUtils *v42; 
  GWeapon *v43; 
  GVehicles *v44; 
  GSave *v45; 
  GSaveMemory *v46; 
  GScript *v47; 
  GTargetAssistMP *v48; 
  GTargetAssist *v49; 
  GPredictedEntitySystem *v50; 
  unsigned __int64 FreeReserveAmount; 
  __int64 v52; 
  __int64 v53; 
  int v54; 
  int v55; 

  v4 = maxClients;
  v6 = maxClients + maxAgents;
  ProfLoad_Begin("GStaticMP::AllocateMemory");
  if ( (_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 98, ASSERT_TYPE_ASSERT, "( ms_gameStatics == 0 )", (const char *)&queryFormat, "ms_gameStatics == NULL") )
    __debugbreak();
  if ( v6 - 1 > 0xF7 )
  {
    v55 = 248;
    v54 = 1;
    LODWORD(v52) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 99, ASSERT_TYPE_ASSERT, "( 1 ) <= ( maxCharacters ) && ( maxCharacters ) <= ( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "maxCharacters not in [1, MAX_CHARACTERS_STATIC]\n\t%i not in [%i, %i]", v52, v54, v55) )
      __debugbreak();
  }
  v7 = (GStaticMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x4C80ui64, 8ui64, "GStaticMP::AllocateMemoryMP");
  v8 = (characterInfo_t *)Mem_HunkUser_AllocInternal(hunkUser, 14792 * v6, 8ui64, "GStaticMP::AllocateMemoryMP");
  v9 = (GPlayerEventsMP *)Mem_HunkUser_AllocInternal(hunkUser, (unsigned int)(232 * v4), 8ui64, "GStaticMP::AllocateMemoryMP");
  v10 = v9;
  if ( (int)v4 > 0 )
  {
    v11 = v9;
    v12 = v4;
    do
    {
      GPlayerEventsMP::GPlayerEventsMP(v11++);
      --v12;
    }
    while ( v12 );
  }
  GStaticMP::GStaticMP(v7, v8, v10, v6, v4);
  *(_QWORD *)&GStatic::ms_gameStatics = v13;
  LOBYTE(GStatic::ms_allocatedType) = 2;
  ProfLoad_End();
  if ( (_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 103, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 104, ASSERT_TYPE_ASSERT, "( ms_gScriptData == 0 )", (const char *)&queryFormat, "ms_gScriptData == NULL") )
    __debugbreak();
  v14 = (GameScriptData *)Mem_HunkUser_AllocInternal(hunkUser, 0x3A0B8ui64, 8ui64, "GameScriptData::AllocateGameScriptDataMemoryCommon");
  memset_0(&v14[1].ai_asm_getgenerichandler, 0, 0x3A03Cui64);
  *(_QWORD *)&v14->levelscript = 0i64;
  *(_QWORD *)&v14->initstructs = 0i64;
  *(_QWORD *)&v14->bt_getfunction = 0i64;
  *(_QWORD *)&v14->scriptable_postinit = 0i64;
  *(_QWORD *)&v14->riotshield_damaged = 0i64;
  *(_QWORD *)&v14->scriptable_notify_callback = 0i64;
  *(_QWORD *)&v14->ai_asm_getfunction = 0i64;
  *(_QWORD *)&v14->ai_asm_getgenerichandler = 0i64;
  *(_QWORD *)&v14->lui_callback = 0i64;
  *(_QWORD *)&v14[1].delete_ = 0i64;
  *(_QWORD *)&v14[1].createstruct = 0i64;
  *(_QWORD *)&v14[1].scriptable_init = 0i64;
  *(_QWORD *)&v14[1].scriptable_used = 0i64;
  *(_QWORD *)&v14[1].scriptable_touched = 0i64;
  *(_QWORD *)&v14[1].projectile_speed = 0i64;
  *(_QWORD *)&v14[1].ai_asm_getparams = 0i64;
  *(_QWORD *)&v14[1].entity_used = 0i64;
  *(_QWORD *)&v14[2].levelscript = 0i64;
  *(_QWORD *)&v14[2].initstructs = 0i64;
  *(_QWORD *)&v14[2].bt_getfunction = 0i64;
  *(_QWORD *)&v14[2].scriptable_postinit = 0i64;
  *(_QWORD *)&v14[2].riotshield_damaged = 0i64;
  *(_QWORD *)&v14[2].scriptable_notify_callback = 0i64;
  GameScriptData::ms_gScriptData = v14;
  LOBYTE(GameScriptData::ms_allocatedType) = 2;
  ProfLoad_Begin("AllocateAntiLagMemoryMP");
  if ( BYTE1(GameScriptData::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 227, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 228, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData == 0 )", (const char *)&queryFormat, "ms_gAntiLagData == NULL") )
    __debugbreak();
  v15 = (GAntiLagMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x433078ui64, 8ui64, "GAntiLag::AllocateAntiLagMemoryCommon");
  GAntiLagMP::GAntiLagMP(v15);
  GAntiLag::ms_gAntiLagData = v16;
  BYTE1(GameScriptData::ms_allocatedType) = 2;
  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  v18 = (char *)Mem_HunkUser_AllocInternal(hunkUser, (int)(32304 * v6), 4ui64, "GAntiLagMP::AllocateAntiLagMemoryMP");
  v19 = 2 * v6;
  v20 = v18;
  v21 = &AntiLagMP->m_antilagDebugCharacters[1];
  v22 = 0;
  do
  {
    v21 += 3;
    v22 += 3;
    *(v21 - 4) = (AntilagDebugCharacterInfo *)&v20[10768 * (-2 * v6 + v19)];
    v23 = 10768i64 * (int)(v19 - v6);
    v24 = v19;
    v19 += 3 * v6;
    *(v21 - 3) = (AntilagDebugCharacterInfo *)&v20[v23];
    *(v21 - 2) = (AntilagDebugCharacterInfo *)&v20[10768 * v24];
  }
  while ( v22 < 3 );
  AntiLagMP->m_antilagDebugCharacterCount = v6;
  ProfLoad_End();
  if ( (_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 248, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  v25 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 0x8000ui64, 8ui64, "GTurret::AllocateMemory");
  memset_0(v25, 0, 0x8000ui64);
  v26 = 0;
  v27 = GTurret::ms_turretArray;
  do
  {
    if ( *v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 256, ASSERT_TYPE_ASSERT, "( !ms_turretArray[turretIndex] )", (const char *)&queryFormat, "!ms_turretArray[turretIndex]") )
      __debugbreak();
    v28 = (GTurret *)&v25[v26];
    memset_0(&v28->m_inuse, 0, 0xF8ui64);
    v26 += 256;
    v28->__vftable = (GTurret_vtbl *)&GTurretMP::`vftable';
    *v27++ = v28;
  }
  while ( v26 < 0x8000 );
  LOBYTE(GTurret::ms_allocatedType) = 2;
  if ( GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 225, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v29 = (GMovingPlatformsMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x5550ui64, 8ui64, "GMovingPlatforms::AllocateMemory");
  memset_0(v29, 0, sizeof(GMovingPlatformsMP));
  GMovingPlatformsMP::GMovingPlatformsMP(v29);
  GMovingPlatforms::ms_instance = v30;
  if ( v6 > 0xF8 )
  {
    LODWORD(v53) = 248;
    LODWORD(v52) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 231, ASSERT_TYPE_ASSERT, "( moverClientCount ) <= ( ( sizeof( *array_counter( ms_instance->m_moverClientArray ) ) + 0 ) )", "moverClientCount <= ARRAY_COUNT( ms_instance->m_moverClientArray )\n\t%i, %i", v52, v53) )
      __debugbreak();
  }
  GMovingPlatforms::ms_instance->m_moverClientCount = v6;
  LOBYTE(GMovingPlatforms::ms_allocatedType) = 2;
  if ( (_BYTE)GConfigStrings::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 89, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 90, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings == 0 )", (const char *)&queryFormat, "ms_gConfigStrings == NULL") )
    __debugbreak();
  v31 = (GConfigStrings *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GConfigStrings::AllocateConfigStringsMemoryCommon");
  v31->__vftable = (GConfigStrings_vtbl *)&GConfigStringsMP::`vftable';
  GConfigStrings::ms_gConfigStrings = v31;
  LOBYTE(GConfigStrings::ms_allocatedType) = 2;
  if ( (_BYTE)GBullet::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 206, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 207, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem == 0 )", (const char *)&queryFormat, "ms_gBulletSystem == NULL") )
    __debugbreak();
  v32 = (GBullet *)Mem_HunkUser_AllocInternal(hunkUser, 0x13C8ui64, 8ui64, "GBullet::AllocateMemory");
  memset_0(v32, 0, sizeof(GBullet));
  GBullet::GBullet(v32);
  v32->m_reduceSpreadShotCount = 0;
  v32->__vftable = (GBullet_vtbl *)&GBulletMP::`vftable';
  GBullet::ms_gBulletSystem = v32;
  LOBYTE(GBullet::ms_allocatedType) = 2;
  if ( (_BYTE)GClientSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 475, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 476, ASSERT_TYPE_ASSERT, "( ms_gClientSystem == 0 )", (const char *)&queryFormat, "ms_gClientSystem == NULL") )
    __debugbreak();
  v33 = (GClientSystem *)Mem_HunkUser_AllocInternal(hunkUser, 0x18ui64, 8ui64, "GClientSystem::AllocateMemory");
  v33->__vftable = NULL;
  v33->m_clientsData = NULL;
  *(_QWORD *)&v33->m_clientsDataCount = 0i64;
  v34 = (gclient_s *)Mem_HunkUser_AllocInternal(hunkUser, 64592i64 * maxClients, 8ui64, "GClientSystem::AllocateMemory");
  DebugWipe(v34, 64592i64 * maxClients);
  *(_QWORD *)&v33->m_clientsDataCount = 0i64;
  v33->__vftable = (GClientSystem_vtbl *)&GClientSystemMP::`vftable';
  GClientSystem::ms_gClientSystem = v33;
  v33->m_clientsData = v34;
  GClientSystem::ms_gClientSystem->m_clientsDataCount = maxClients;
  LOBYTE(GClientSystem::ms_allocatedType) = 2;
  GClienThinkTaskManager::AllocateMemory(&GClienThinkTaskManager::ms_clientTaskGlobalManager, hunkUser, maxClients);
  if ( (_BYTE)GCombat::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 195, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 196, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem == 0 )", (const char *)&queryFormat, "ms_gCombatSystem == NULL") )
    __debugbreak();
  v35 = (GCombatMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x107F8ui64, 8ui64, "GCombat::AllocateMemory");
  memset_0(v35, 0, sizeof(GCombatMP));
  GCombatMP::GCombatMP(v35);
  GCombat::ms_gCombatSystem = v36;
  LOBYTE(GCombat::ms_allocatedType) = 2;
  if ( (_BYTE)GItems::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 100, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 101, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem == 0 )", (const char *)&queryFormat, "ms_gItemsSystem == NULL") )
    __debugbreak();
  v37 = (GItems *)Mem_HunkUser_AllocInternal(hunkUser, 0x978ui64, 8ui64, "GItems::AllocateMemory");
  memset_0(&v37->m_shouldUpdateDObjOnSpawn + 1, 0, 0x96Fui64);
  v37->m_shouldUpdateDObjOnSpawn = 0;
  v37->__vftable = (GItems_vtbl *)&GItemsMP::`vftable';
  GItems::ms_gItemsSystem = v37;
  LOBYTE(GItems::ms_allocatedType) = 2;
  if ( (_BYTE)GBallistics::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 102, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 103, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem == 0 )", (const char *)&queryFormat, "ms_gBallisticsSystem == NULL") )
    __debugbreak();
  v38 = (GBallistics *)Mem_HunkUser_AllocInternal(hunkUser, 0x29060ui64, 8ui64, "GBallistics::AllocateMemory");
  v38->m_firstFree = NULL;
  v38->m_lastFree = NULL;
  *(_QWORD *)&v38->m_numSlotsActive = 0i64;
  memset_0(v38->m_ballisticInstances, 0, sizeof(v38->m_ballisticInstances));
  v38->__vftable = (GBallistics_vtbl *)&GBallisticsMP::`vftable';
  GBallistics::ms_gBallisticsSystem = v38;
  LOBYTE(GBallistics::ms_allocatedType) = 2;
  if ( (_BYTE)GMissile::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 275, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 276, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem == 0 )", (const char *)&queryFormat, "ms_gMissileSystem == NULL") )
    __debugbreak();
  v39 = (GMissileMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x18ui64, 8ui64, "GMissile::AllocateMemory");
  v39->__vftable = NULL;
  *(_QWORD *)&v39->m_grenadeLinkToMovingPlatformUsesTag = 0i64;
  *(_QWORD *)&v39->m_javelinOffsetRight = 0i64;
  GMissileMP::GMissileMP(v39);
  GMissile::ms_gMissileSystem = v40;
  LOBYTE(GMissile::ms_allocatedType) = 2;
  BgMissile::SRand(v40, 0x89ABCDEF);
  if ( (_BYTE)GUtils::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 130, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 131, ASSERT_TYPE_ASSERT, "( ms_gUtils == 0 )", (const char *)&queryFormat, "ms_gUtils == NULL") )
    __debugbreak();
  v41 = (GUtilsMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GUtils::AllocateMemory");
  v41->__vftable = NULL;
  *(_QWORD *)&v41->m_entitySpawnMinFreeTime = 0i64;
  GUtilsMP::GUtilsMP(v41);
  GUtils::ms_gUtils = v42;
  LOBYTE(GUtils::ms_allocatedType) = 2;
  if ( (_BYTE)GWeapon::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 92, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 93, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem == 0 )", (const char *)&queryFormat, "ms_gWeaponSystem == NULL") )
    __debugbreak();
  v43 = (GWeapon *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GWeapon::AllocateMemory");
  v43->__vftable = (GWeapon_vtbl *)&GWeaponMP::`vftable';
  GWeapon::ms_gWeaponSystem = v43;
  LOBYTE(GWeapon::ms_allocatedType) = 2;
  GWeaponMap::AllocateMemory(hunkUser);
  if ( (_BYTE)GVehicles::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 592, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 593, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem == 0 )", (const char *)&queryFormat, "ms_gVehiclesSystem == NULL") )
    __debugbreak();
  v44 = (GVehicles *)Mem_HunkUser_AllocInternal(hunkUser, 0x109638ui64, 8ui64, "GVehicles::AllocateMemory");
  memset_0(&v44->m_vehiclePhysicsManager, 0, 0x109630ui64);
  v44->__vftable = (GVehicles_vtbl *)&GVehicles::`vftable';
  BgVehicleEventSystem::BgVehicleEventSystem(&v44->m_vehicleEventSystem);
  v44->m_vehicleEventSystem.__vftable = (GVehicleEventSystem_vtbl *)&GVehicleEventSystem::`vftable';
  GVehicleSuspendManager::GVehicleSuspendManager(&v44->m_suspendManager);
  v44->m_vehicleCollisionSystem.__vftable = (GVehicleCollisionSystem_vtbl *)&GVehicleCollisionSystem::`vftable';
  v44->m_scriptableDamageInfo.m_cursor = 0;
  v44->__vftable = (GVehicles_vtbl *)&GVehiclesMP::`vftable';
  GVehicles::ms_gVehiclesSystem = v44;
  GVehicles::PhysicsInit(v44);
  LOBYTE(GVehicles::ms_allocatedType) = 2;
  if ( BYTE2(GameScriptData::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 100, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GSave::ms_gSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 101, ASSERT_TYPE_ASSERT, "( ms_gSave == 0 )", (const char *)&queryFormat, "ms_gSave == NULL") )
    __debugbreak();
  v45 = (GSave *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GSave::AllocateMemory");
  v45->__vftable = (GSave_vtbl *)&GSaveMP::`vftable';
  GSave::ms_gSave = v45;
  GSave::ms_weaponNameSize = 512;
  BYTE2(GameScriptData::ms_allocatedType) = 2;
  if ( (_BYTE)GSaveMemory::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 231, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 232, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory == 0 )", (const char *)&queryFormat, "ms_gSaveMemory == NULL") )
    __debugbreak();
  v46 = (GSaveMemory *)Mem_HunkUser_AllocInternal(hunkUser, 0x200500ui64, 0x80ui64, "GSaveMemory::AllocateMemory");
  memset_0(&v46[1], 0, 0x2004F8ui64);
  v46->__vftable = (GSaveMemory_vtbl *)&GSaveMemoryMP::`vftable';
  GSaveMemory::ms_gSaveMemory = v46;
  LOBYTE(GSaveMemory::ms_allocatedType) = 2;
  if ( (_BYTE)GScript::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 201, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 202, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem == 0 )", (const char *)&queryFormat, "ms_gScriptSystem == NULL") )
    __debugbreak();
  v47 = (GScript *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GScript::AllocateMemory");
  v47->__vftable = (GScript_vtbl *)&GScriptMP::`vftable';
  GScript::ms_gScriptSystem = v47;
  LOBYTE(GScript::ms_allocatedType) = 2;
  if ( (_BYTE)GTargetAssist::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 79, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 80, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v48 = (GTargetAssistMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x970ui64, 8ui64, "GTargetAssist::AllocateMemory");
  memset_0(v48, 0, sizeof(GTargetAssistMP));
  GTargetAssistMP::GTargetAssistMP(v48);
  GTargetAssist::ms_instance = v49;
  LOBYTE(GTargetAssist::ms_allocatedType) = 2;
  if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 57, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 58, ASSERT_TYPE_ASSERT, "( ms_gSystem == 0 )", (const char *)&queryFormat, "ms_gSystem == NULL") )
    __debugbreak();
  v50 = (GPredictedEntitySystem *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GPredictedEntitySystem::AllocateMemory");
  v50->__vftable = NULL;
  *(_QWORD *)&v50->m_currentPredictionIndex = 0i64;
  BgPredictedEntitySystem::BgPredictedEntitySystem(v50);
  v50->__vftable = (GPredictedEntitySystem_vtbl *)&GPredictedEntitySystemMP::`vftable';
  GPredictedEntitySystem::ms_gSystem = v50;
  LOBYTE(GPredictedEntitySystem::ms_allocatedType) = 2;
  if ( allocateAiSystems )
    Nav_AllocNavPower(hunkUser);
  G_GameInterface_OnAllocateGameMemory(hunkUser);
  Ai_Asm::AllocateMemory(hunkUser);
  GPlayer_Asm::AllocateMemory(hunkUser, v6);
  G_Main_AllocateEntities(hunkUser);
  s_clientOmnvars = (OmnvarClientData *)Mem_HunkUser_AllocInternal(hunkUser, (int)(4000 * maxClients), 4ui64, "G_MainMP_AllocateLocalStructures");
  s_clientOmnvarAllocatedCount = maxClients;
  if ( allocateAiSystems )
  {
    s_agents = (gagent_s *)Mem_HunkUser_AllocInternal(hunkUser, (int)(55952 * maxAgents), 8ui64, "G_MainMP_AllocateLocalStructures");
    s_agentAllocatedCount = maxAgents;
  }
  G_PlayerUse_Allocate(hunkUser);
  G_PlayerSpawnPoints_AllocateMemory(hunkUser);
  Com_Challenges_AllocateMemory(hunkUser);
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(hunkUser);
  Com_Printf(15, "g_serverHunkUser G_MainMP_AllocateGameMemory. free memory %zu kb\n", FreeReserveAmount >> 10);
}

/*
==============
G_MainMP_CalculateRanks
==============
*/
void G_MainMP_CalculateRanks(void)
{
  int maxclients; 
  int v1; 
  int v2; 
  __int64 v3; 

  maxclients = level.maxclients;
  v1 = 0;
  level.numConnectedClients = 0;
  v2 = 0;
  if ( level.maxclients > 0 )
  {
    v3 = 0i64;
    do
    {
      if ( level.clients[v3].sess.connected )
      {
        level.sortedClients[v1] = v2;
        maxclients = level.maxclients;
        v1 = ++level.numConnectedClients;
      }
      ++v2;
      ++v3;
    }
    while ( v2 < maxclients );
  }
  qsort(level.sortedClients, v1, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)G_MainMP_SortRanks);
}

/*
==============
G_MainMP_CheatFreeCorpses
==============
*/
void G_MainMP_CheatFreeCorpses()
{
  const dvar_t *v0; 
  int integer; 
  GameScriptDataMP *GameScriptDataMP; 
  const dvar_t *v3; 
  GameScriptDataMP *v4; 
  __int64 v5; 
  __int64 v6; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  v0 = DVARINT_g_freeClientCorpses;
  if ( !DVARINT_g_freeClientCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_freeClientCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  if ( integer )
  {
    GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v6) = 8;
      LODWORD(v5) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3325, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "ComCharacterLimits::GetClientCorpseMaxCount() <= ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i, %i", v5, v6) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    G_MainMP_FreeCorpsesInternal(GameScriptDataMP->playerCorpseInfo, ComCharacterLimits::ms_gameData.m_clientCorpseCount, &level.currentPlayerClone);
    if ( integer == 1 )
    {
      MSG_Init(&buf, data, 1020);
      MSG_WriteByte(&buf, 63i64);
      SV_Game_BroadcastServerCommandMsg(SV_CMD_RELIABLE, &buf);
    }
    Dvar_SetInt_Internal(DVARINT_g_freeClientCorpses, 0);
  }
  v3 = DVARBOOL_g_freeAgentCorpses;
  if ( !DVARBOOL_g_freeAgentCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_freeAgentCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v4 = GameScriptDataMP::GetGameScriptDataMP();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v6) = 8;
      LODWORD(v5) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3338, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( gScrData->agentCorpseInfo ) ) + 0 ) )", "ComCharacterLimits::GetAgentCorpseMaxCount() <= ARRAY_COUNT( gScrData->agentCorpseInfo )\n\t%i, %i", v5, v6) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    G_MainMP_FreeCorpsesInternal(v4->agentCorpseInfo, ComCharacterLimits::ms_gameData.m_agentCorpseCount, &level.currentAgentClone);
    Dvar_SetBool_Internal(DVARBOOL_g_freeAgentCorpses, 0);
  }
}

/*
==============
G_MainMP_CheckEntityPositionChange
==============
*/
void G_MainMP_CheckEntityPositionChange(const gentity_s *ent)
{
  __int64 number; 
  __int64 v6; 

  _RBX = ent;
  if ( SV_EntitiesPartitioning_ShouldUpdatePositionDirtyFlag() )
  {
    number = _RBX->s.number;
    _RDI = s_entitiesPosition;
    _RDX = 3 * number;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rdx*4]
      vucomiss xmm0, dword ptr [rbx+130h]
    }
    SV_EntitiesPartitioning_SetDirtyFlag(number);
    v6 = _RBX->s.number;
    s_entitiesPosition[v6].v[0] = _RBX->r.currentOrigin.v[0];
    s_entitiesPosition[v6].v[1] = _RBX->r.currentOrigin.v[1];
    s_entitiesPosition[v6].v[2] = _RBX->r.currentOrigin.v[2];
  }
}

/*
==============
G_MainMP_ClearClientArchiveTime
==============
*/
void G_MainMP_ClearClientArchiveTime(int clientNum)
{
  __int64 v1; 

  v1 = clientNum;
  level.clients[v1].sess.archiveTime = 0;
  level.clients[v1].sess.archiveUsePOTG = 0;
}

/*
==============
G_MainMP_ClearClientCorpseCache
==============
*/
void G_MainMP_ClearClientCorpseCache(int clientNum)
{
  SvClient *CommonClient; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  MSG_Init(&buf, data, 1020);
  MSG_WriteByte(&buf, 63i64);
  if ( clientNum == -1 )
  {
    SV_Game_BroadcastServerCommandMsg(SV_CMD_RELIABLE, &buf);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(clientNum);
    SV_Game_SendServerCommandMsg(CommonClient, SV_CMD_RELIABLE, &buf);
  }
}

/*
==============
G_MainMP_ClearImpulseFieldEntities
==============
*/
void G_MainMP_ClearImpulseFieldEntities(void)
{
  memset_0(s_impulseFieldEntities, 0, sizeof(s_impulseFieldEntities));
  s_impulseFieldEntityCount = 0;
}

/*
==============
G_MainMP_ClearLowHunk
==============
*/
void G_MainMP_ClearLowHunk(void)
{
  __int64 v0; 
  int maxclients; 
  int i; 
  __int64 v3; 
  XAnimTree *v4; 
  __int64 v5; 
  XAnimTree *v6; 
  GameScriptDataMP *GameScriptDataMP; 
  unsigned int v8; 
  XAnimTree **p_tree; 
  unsigned int v10; 
  XAnimTree **v11; 

  v0 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( *(_QWORD *)&GStatic::ms_gameStatics )
  {
    maxclients = level.maxclients;
    for ( i = 0; i < level.maxclients; ++i )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v0 + 224i64))(v0, (unsigned int)i);
      v4 = *(XAnimTree **)(v3 + 2040);
      if ( v4 )
      {
        XAnimFreeTree(v4, NULL);
        *(_QWORD *)(v3 + 2040) = 0i64;
      }
      maxclients = level.maxclients;
    }
    while ( 1 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( maxclients >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v0 + 224i64))(v0, (unsigned int)maxclients);
      v6 = *(XAnimTree **)(v5 + 2040);
      if ( v6 )
      {
        Com_XAnimFreeSmallTree(v6);
        *(_QWORD *)(v5 + 2040) = 0i64;
      }
      ++maxclients;
    }
  }
  if ( GameScriptData::ms_gScriptData )
  {
    GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
    v8 = 0;
    p_tree = &GameScriptDataMP->playerCorpseInfo[0].tree;
    do
    {
      if ( *p_tree )
      {
        XAnimFreeTree(*p_tree, NULL);
        *p_tree = NULL;
      }
      ++v8;
      p_tree += 1856;
    }
    while ( v8 < 8 );
    v10 = 0;
    v11 = &GameScriptDataMP->agentCorpseInfo[0].tree;
    do
    {
      if ( *v11 )
      {
        Com_XAnimFreeSmallTree(*v11);
        *v11 = NULL;
      }
      ++v10;
      v11 += 1856;
    }
    while ( v10 < 8 );
  }
  BG_ShutDownTurretAnims(1);
  G_Main_ClearLowHunk();
  Com_FreeWeaponInfoMemory(1);
}

/*
==============
G_MainMP_ClientDoPerFrameNotifies
==============
*/
void G_MainMP_ClientDoPerFrameNotifies(gentity_s *ent)
{
  gclient_s *client; 
  GWeaponMap *Instance; 
  int v4; 
  unsigned int v5; 
  const Weapon *Weapon; 
  char v8; 
  char v10; 
  int v11; 
  scrContext_t *v12; 
  unsigned int lastStateFlags; 
  int weaponState; 
  int v18; 
  scr_string_t end_firing; 
  scr_string_t begin_firing; 
  BOOL v21; 
  scr_string_t end_firing_left; 
  scr_string_t begin_firing_left; 
  int v24; 
  scr_string_t night_vision_off; 
  scr_string_t night_vision_on; 
  int v27; 
  bool IsUsingNightVision; 
  char v29; 
  scr_string_t sprint_end; 
  scr_string_t sprint_begin; 
  int v32; 
  bool IsSprinting; 
  char v34; 
  bool v35; 
  scr_string_t sprint_slide_end; 
  scr_string_t sprint_slide_begin; 
  bool v38; 
  bool v39; 
  scr_string_t mantle_end; 
  bool v41; 
  scr_string_t mantle_start; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  bool v50; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2329, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2333, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2334, ASSERT_TYPE_ASSERT, "(client->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  v4 = 0;
  v50 = 0;
  v5 = 0;
  _R14 = BG_GetCurrentWeaponForPlayer(Instance, &client->ps);
  do
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, client->ps.weaponsEquipped[v5]);
    if ( !memcmp_0(_R14, Weapon, 0x3Cui64) )
      break;
    ++v5;
  }
  while ( v5 < 0xF );
  v8 = _R14->weaponIdx && v5 != 15 && BG_HasUnderbarrelAmmo(_R14) && client->ps.weapEquippedData[v5].inAltMode;
  _RDI = &client->ns;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v10 = client->ns.lastStateFlags & 1;
  if ( memcmp_0(_R14, &client->ns, 0x3Cui64) || (v11 = 0, v8 != v10) )
    v11 = 1;
  if ( !memcmp_0(_R14, &client->ns, 0x3Cui64) && v8 != v10 )
    v4 = 1;
  if ( v11 )
  {
    v12 = ScriptContext_Server();
    Scr_AddBool(v12, v4);
    GScr_Weapon_AddParam(v12, _R14, v8);
    GScr_Notify(ent, scr_const.weapon_change, 2u);
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm1, xmmword ptr [r14+20h]
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovsd  xmm0, qword ptr [r14+30h]
      vmovsd  qword ptr [rdi+30h], xmm0
    }
    *(_DWORD *)&client->ns.lastWeapon.weaponCamo = *(_DWORD *)&_R14->weaponCamo;
    if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
      __debugbreak();
    lastStateFlags = client->ns.lastStateFlags;
    if ( v8 )
      client->ns.lastStateFlags = lastStateFlags | 1;
    else
      client->ns.lastStateFlags = lastStateFlags & 0xFFFFFFFE;
  }
  weaponState = client->ps.weapState[0].weaponState;
  v18 = client->ps.weapState[1].weaponState;
  end_firing = scr_const.end_firing;
  begin_firing = scr_const.begin_firing;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v21 = weaponState == 16 && client->ps.pm_type < 7;
  if ( v21 == ((client->ns.lastStateFlags >> 1) & 1) )
  {
    LOBYTE(v21) = (client->ns.lastStateFlags & 2) != 0;
  }
  else
  {
    if ( v21 )
      end_firing = begin_firing;
    GScr_Notify(ent, end_firing, 0);
  }
  end_firing_left = scr_const.end_firing_left;
  begin_firing_left = scr_const.begin_firing_left;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  if ( v18 == 16 && client->ps.pm_type < 7 )
  {
    v24 = 1;
    v50 = 1;
  }
  else
  {
    v24 = 0;
  }
  if ( v24 == ((client->ns.lastStateFlags >> 2) & 1) )
  {
    v50 = (client->ns.lastStateFlags & 4) != 0;
  }
  else
  {
    if ( v24 )
      end_firing_left = begin_firing_left;
    GScr_Notify(ent, end_firing_left, 0);
  }
  night_vision_off = scr_const.night_vision_off;
  night_vision_on = scr_const.night_vision_on;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v27 = (client->ns.lastStateFlags >> 3) & 1;
  IsUsingNightVision = BG_IsUsingNightVision(&client->ps);
  v29 = IsUsingNightVision;
  if ( IsUsingNightVision == v27 )
  {
    v29 = v27;
  }
  else
  {
    if ( IsUsingNightVision )
      night_vision_off = night_vision_on;
    GScr_Notify(ent, night_vision_off, 0);
  }
  sprint_end = scr_const.sprint_end;
  sprint_begin = scr_const.sprint_begin;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v32 = (client->ns.lastStateFlags >> 4) & 1;
  IsSprinting = PM_IsSprinting(&client->ps);
  v34 = IsSprinting;
  if ( IsSprinting == v32 )
  {
    v34 = v32;
  }
  else
  {
    if ( IsSprinting )
      sprint_end = sprint_begin;
    GScr_Notify(ent, sprint_end, 0);
  }
  v35 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0x1Du);
  sprint_slide_end = scr_const.sprint_slide_end;
  sprint_slide_begin = scr_const.sprint_slide_begin;
  v38 = v35;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  if ( v38 == ((client->ns.lastStateFlags >> 5) & 1) )
  {
    v38 = (client->ns.lastStateFlags & 0x20) != 0;
  }
  else
  {
    if ( v38 )
      sprint_slide_end = sprint_slide_begin;
    GScr_Notify(ent, sprint_slide_end, 0);
  }
  v39 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 5u);
  mantle_end = scr_const.mantle_end;
  v41 = v39;
  mantle_start = scr_const.mantle_start;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  if ( v41 == ((_RDI->lastStateFlags >> 9) & 1) )
  {
    v41 = (_RDI->lastStateFlags & 0x200) != 0;
  }
  else
  {
    if ( v41 )
      mantle_end = mantle_start;
    GScr_Notify(ent, mantle_end, 0);
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v43 = _RDI->lastStateFlags | 2;
  if ( !v21 )
    v43 = _RDI->lastStateFlags & 0xFFFFFFFD;
  _RDI->lastStateFlags = v43;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v44 = _RDI->lastStateFlags | 4;
  if ( !v50 )
    v44 = _RDI->lastStateFlags & 0xFFFFFFFB;
  _RDI->lastStateFlags = v44;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v45 = _RDI->lastStateFlags | 8;
  if ( !v29 )
    v45 = _RDI->lastStateFlags & 0xFFFFFFF7;
  _RDI->lastStateFlags = v45;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v46 = _RDI->lastStateFlags | 0x10;
  if ( !v34 )
    v46 = _RDI->lastStateFlags & 0xFFFFFFEF;
  _RDI->lastStateFlags = v46;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v47 = _RDI->lastStateFlags | 0x20;
  if ( !v38 )
    v47 = _RDI->lastStateFlags & 0xFFFFFFDF;
  _RDI->lastStateFlags = v47;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v48 = _RDI->lastStateFlags | 0x200;
  if ( !v41 )
    v48 = _RDI->lastStateFlags & 0xFFFFFDFF;
  _RDI->lastStateFlags = v48;
}

/*
==============
G_MainMP_DeregisterDvars
==============
*/
const dvar_t *G_MainMP_DeregisterDvars()
{
  const dvar_t *result; 

  DVARINT_g_playerCollisionEjectSpeed = Dvar_Deregister(DVARINT_g_playerCollisionEjectSpeed);
  DVARFLT_g_dropForwardSpeed = Dvar_Deregister(DVARFLT_g_dropForwardSpeed);
  DVARFLT_g_dropUpSpeedBase = Dvar_Deregister(DVARFLT_g_dropUpSpeedBase);
  DVARFLT_g_dropUpSpeedRand = Dvar_Deregister(DVARFLT_g_dropUpSpeedRand);
  DVARFLT_g_dropHorzSpeedRand = Dvar_Deregister(DVARFLT_g_dropHorzSpeedRand);
  DVARINT_g_useholdspawndelay = Dvar_Deregister(DVARINT_g_useholdspawndelay);
  DVARINT_g_mantleBlockTimeBuffer = Dvar_Deregister(DVARINT_g_mantleBlockTimeBuffer);
  DVARBOOL_player_stunWhiteFlash = Dvar_Deregister(DVARBOOL_player_stunWhiteFlash);
  DVARINT_g_freeClientCorpses = Dvar_Deregister(DVARINT_g_freeClientCorpses);
  DVARBOOL_g_freeAgentCorpses = Dvar_Deregister(DVARBOOL_g_freeAgentCorpses);
  DVARBOOL_g_debugPredictedSpawnPoint = Dvar_Deregister(DVARBOOL_g_debugPredictedSpawnPoint);
  DVARBOOL_anim_deltas_debug = Dvar_Deregister(DVARBOOL_anim_deltas_debug);
  DVARBOOL_g_debugServerAiming = Dvar_Deregister(DVARBOOL_g_debugServerAiming);
  DVARSTR_g_log = Dvar_Deregister(DVARSTR_g_log);
  DVARBOOL_g_logSync = Dvar_Deregister(DVARBOOL_g_logSync);
  DVARBOOL_g_logEnable = Dvar_Deregister(DVARBOOL_g_logEnable);
  DVARBOOL_g_useHitLocationFix = Dvar_Deregister(DVARBOOL_g_useHitLocationFix);
  DVARINT_g_speculativeWeaponLoadCount = Dvar_Deregister(DVARINT_g_speculativeWeaponLoadCount);
  DVARFLT_g_speculativeWeaponLoadDistance = Dvar_Deregister(DVARFLT_g_speculativeWeaponLoadDistance);
  DVARSTR_g_gametype = Dvar_Deregister(DVARSTR_g_gametype);
  DVARBOOL_g_hardcore = Dvar_Deregister(DVARBOOL_g_hardcore);
  DCONST_DVARBOOL_g_weaponstreaming_verbose = Dvar_Deregister(DCONST_DVARBOOL_g_weaponstreaming_verbose);
  DCONST_DVARBOOL_g_weaponStreaming_devRandomWeapons = Dvar_Deregister(DCONST_DVARBOOL_g_weaponStreaming_devRandomWeapons);
  DCONST_DVARBOOL_g_characterstreaming_verbose = Dvar_Deregister(DCONST_DVARBOOL_g_characterstreaming_verbose);
  DCONST_DVARBOOL_g_characterstreaming_validation = Dvar_Deregister(DCONST_DVARBOOL_g_characterstreaming_validation);
  DCONST_DVARBOOL_g_debugPlayerTriggerBounds = Dvar_Deregister(DCONST_DVARBOOL_g_debugPlayerTriggerBounds);
  DVARBOOL_cg_mlg_static_cameras_editing = Dvar_Deregister(DVARBOOL_cg_mlg_static_cameras_editing);
  DVARBOOL_cg_mlg_forceDetachCodcasterCamera = Dvar_Deregister(DVARBOOL_cg_mlg_forceDetachCodcasterCamera);
  DCONST_DVARBOOL_g_extrapolation_full_move = Dvar_Deregister(DCONST_DVARBOOL_g_extrapolation_full_move);
  DCONST_DVARFLT_g_vehicleTriggerBoxPad = Dvar_Deregister(DCONST_DVARFLT_g_vehicleTriggerBoxPad);
  DCONST_DVARBOOL_g_vehicleMakeTriggerContent = Dvar_Deregister(DCONST_DVARBOOL_g_vehicleMakeTriggerContent);
  DCONST_DVARBOOL_g_vehicleMoverBlockNoneVehicleTouchedEntities = Dvar_Deregister(DCONST_DVARBOOL_g_vehicleMoverBlockNoneVehicleTouchedEntities);
  DVARINT_g_spectateCycleTimeout = Dvar_Deregister(DVARINT_g_spectateCycleTimeout);
  DCONST_DVARBOOL_g_devSpectateCycleVerbose = Dvar_Deregister(DCONST_DVARBOOL_g_devSpectateCycleVerbose);
  DVARINT_g_spectateExtraStreamedClients = Dvar_Deregister(DVARINT_g_spectateExtraStreamedClients);
  DCONST_DVARBOOL_g_globalCustomizationStreamingEnabled = Dvar_Deregister(DCONST_DVARBOOL_g_globalCustomizationStreamingEnabled);
  DCONST_DVARBOOL_g_globalWorldWeaponStreamingEnabled = Dvar_Deregister(DCONST_DVARBOOL_g_globalWorldWeaponStreamingEnabled);
  DCONST_DVARINT_g_canEmitFootstepTimeout = Dvar_Deregister(DCONST_DVARINT_g_canEmitFootstepTimeout);
  DVARBOOL_g_lastStandDropGrenades = Dvar_Deregister(DVARBOOL_g_lastStandDropGrenades);
  DVARBOOL_g_lastStandCancelGrenades = Dvar_Deregister(DVARBOOL_g_lastStandCancelGrenades);
  DCONST_DVARBOOL_g_grenadeDropConsumeAmmo = Dvar_Deregister(DCONST_DVARBOOL_g_grenadeDropConsumeAmmo);
  DVARBOOL_g_spectateOrderFixActive = Dvar_Deregister(DVARBOOL_g_spectateOrderFixActive);
  DVARINT_calloutmarkerping_maxEntityPings = Dvar_Deregister(DVARINT_calloutmarkerping_maxEntityPings);
  DVARINT_calloutmarkerping_maxDangerPings = Dvar_Deregister(DVARINT_calloutmarkerping_maxDangerPings);
  DVARINT_calloutmarkerping_maxScriptablePings = Dvar_Deregister(DVARINT_calloutmarkerping_maxScriptablePings);
  DVARBOOL_vehDroneDebugDrawPath = Dvar_Deregister(DVARBOOL_vehDroneDebugDrawPath);
  DCONST_DVARINT_vehDmgToPlayersCurve = Dvar_Deregister(DCONST_DVARINT_vehDmgToPlayersCurve);
  DVARBOOL_scr_frontline_trap_checks = Dvar_Deregister(DVARBOOL_scr_frontline_trap_checks);
  DVARINT_scr_frontline_min_spawns = Dvar_Deregister(DVARINT_scr_frontline_min_spawns);
  DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled = Dvar_Deregister(DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled);
  DCONST_DVARBOOL_g_playerspawns_scrCriticalFactorEnabled = Dvar_Deregister(DCONST_DVARBOOL_g_playerspawns_scrCriticalFactorEnabled);
  DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear = Dvar_Deregister(DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear);
  DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar = Dvar_Deregister(DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar);
  DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear = Dvar_Deregister(DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear);
  DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar = Dvar_Deregister(DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar);
  DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMin = Dvar_Deregister(DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMin);
  DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax = Dvar_Deregister(DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax);
  DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius = Dvar_Deregister(DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius);
  DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ = Dvar_Deregister(DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ);
  DVARINT_g_playerspawns_debugdraw = Dvar_Deregister(DVARINT_g_playerspawns_debugdraw);
  DVARINT_g_playerspawns_debugdraw_colorMode = Dvar_Deregister(DVARINT_g_playerspawns_debugdraw_colorMode);
  DVARBOOL_g_playerspawns_debugdraw_factors_drawAll = Dvar_Deregister(DVARBOOL_g_playerspawns_debugdraw_factors_drawAll);
  DVARBOOL_g_playerspawns_debugdraw_factors = Dvar_Deregister(DVARBOOL_g_playerspawns_debugdraw_factors);
  DVARBOOL_g_playerspawns_debugdraw_totalScore = Dvar_Deregister(DVARBOOL_g_playerspawns_debugdraw_totalScore);
  DVARBOOL_g_playerspawns_debugdraw_TTLOS = Dvar_Deregister(DVARBOOL_g_playerspawns_debugdraw_TTLOS);
  DVARBOOL_g_playerspawns_debugdraw_sightData = Dvar_Deregister(DVARBOOL_g_playerspawns_debugdraw_sightData);
  DVARBOOL_g_playerspawns_debugdraw_name = Dvar_Deregister(DVARBOOL_g_playerspawns_debugdraw_name);
  DVARBOOL_g_playerspawns_debugdraw_KVPs = Dvar_Deregister(DVARBOOL_g_playerspawns_debugdraw_KVPs);
  DVARBOOL_g_playerspawns_debugdraw_pos = Dvar_Deregister(DVARBOOL_g_playerspawns_debugdraw_pos);
  DVARBOOL_g_playerspawns_debugdraw_status = Dvar_Deregister(DVARBOOL_g_playerspawns_debugdraw_status);
  DVARBOOL_g_playerspawns_debugSpawnPathnodes = Dvar_Deregister(DVARBOOL_g_playerspawns_debugSpawnPathnodes);
  DVARBOOL_g_playerspawns_debugPlayerPathnodes = Dvar_Deregister(DVARBOOL_g_playerspawns_debugPlayerPathnodes);
  DVARBOOL_g_playerspawns_dumpSelectionResults = Dvar_Deregister(DVARBOOL_g_playerspawns_dumpSelectionResults);
  DVARBOOL_g_playerspawns_dumpViewerCache = Dvar_Deregister(DVARBOOL_g_playerspawns_dumpViewerCache);
  DVARBOOL_g_playerspawns_debugAlternates = Dvar_Deregister(DVARBOOL_g_playerspawns_debugAlternates);
  DVARBOOL_g_playerspawns_debugCritFail = Dvar_Deregister(DVARBOOL_g_playerspawns_debugCritFail);
  DVARINT_g_playerspawns_debugLastTeamSpawn = Dvar_Deregister(DVARINT_g_playerspawns_debugLastTeamSpawn);
  DVARBOOL_g_playerspawns_debugFrontline = Dvar_Deregister(DVARBOOL_g_playerspawns_debugFrontline);
  DVARFLT_g_playerspawns_FrontlineMinZ = Dvar_Deregister(DVARFLT_g_playerspawns_FrontlineMinZ);
  DVARFLT_g_playerspawns_FrontlineMaxZ = Dvar_Deregister(DVARFLT_g_playerspawns_FrontlineMaxZ);
  DVARFLT_g_playerspawns_FrontlineStep = Dvar_Deregister(DVARFLT_g_playerspawns_FrontlineStep);
  DVARBOOL_scr_dumpFrontlineAssignments = Dvar_Deregister(DVARBOOL_scr_dumpFrontlineAssignments);
  DVARBOOL_scr_simulateBadSpawns = Dvar_Deregister(DVARBOOL_scr_simulateBadSpawns);
  DVARBOOL_scr_compareSpawns = Dvar_Deregister(DVARBOOL_scr_compareSpawns);
  DVARBOOL_g_playerspawns_debugClusters = Dvar_Deregister(DVARBOOL_g_playerspawns_debugClusters);
  DVARBOOL_g_playerspawns_debugLanes = Dvar_Deregister(DVARBOOL_g_playerspawns_debugLanes);
  DVARBOOL_g_playerspawns_debugNonPlayerViewers = Dvar_Deregister(DVARBOOL_g_playerspawns_debugNonPlayerViewers);
  DVARBOOL_g_playerspawns_debugInfluenceNodes = Dvar_Deregister(DVARBOOL_g_playerspawns_debugInfluenceNodes);
  DVARBOOL_g_playerspawns_enableScriptCritFactorCallback = Dvar_Deregister(DVARBOOL_g_playerspawns_enableScriptCritFactorCallback);
  result = Dvar_Deregister(DVARBOOL_g_playerspawns_debugTacGraphSight);
  DVARBOOL_g_playerspawns_debugTacGraphSight = result;
  return result;
}

/*
==============
G_MainMP_DeregisterGameModeDvars
==============
*/
void G_MainMP_DeregisterGameModeDvars(void)
{
  DVARSTR_g_password = Dvar_Deregister(DVARSTR_g_password);
  DVARBOOL_g_kickHostIfIdle = Dvar_Deregister(DVARBOOL_g_kickHostIfIdle);
  DVARBOOL_g_deadChat = Dvar_Deregister(DVARBOOL_g_deadChat);
  DVARINT_g_voiceChatTalkingDuration = Dvar_Deregister(DVARINT_g_voiceChatTalkingDuration);
  DVARINT_scr_team_fftype = Dvar_Deregister(DVARINT_scr_team_fftype);
  DVARINT_scr_game_allowkillcam = Dvar_Deregister(DVARINT_scr_game_allowkillcam);
  DVARINT_min_wait_for_players = Dvar_Deregister(DVARINT_min_wait_for_players);
}

/*
==============
G_MainMP_DoesGameStateAllowServerPause
==============
*/
_BOOL8 G_MainMP_DoesGameStateAllowServerPause()
{
  bool result; 

  return G_GetOmnvar_BoolByName("allow_server_pause", &result) && result;
}

/*
==============
G_MainMP_ExitLevel
==============
*/
void G_MainMP_ExitLevel(void)
{
  int maxclients; 
  int v1; 
  __int64 v2; 

  maxclients = level.maxclients;
  v1 = 0;
  level.teammode = TEAMMODE_AXIS_ALLIES;
  *(_QWORD *)level.markedForEyesOn.array = 0i64;
  *(_QWORD *)&level.markedForEyesOn.array[2] = 0i64;
  *(_QWORD *)&level.markedForEyesOn.array[4] = 0i64;
  level.markedForEyesOn.array[6] = 0;
  if ( level.maxclients > 0 )
  {
    v2 = 0i64;
    do
    {
      if ( level.clients[v2].sess.connected == CON_CONNECTED )
      {
        level.clients[v2].sess.connected = CON_CONNECTING;
        maxclients = level.maxclients;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < maxclients );
  }
  G_MainMP_LogPrintf("ExitLevel: executed\n");
}

/*
==============
G_MainMP_FinishEntityNotifyWorkers
==============
*/
void G_MainMP_FinishEntityNotifyWorkers()
{
  scrContext_t *v0; 
  unsigned int v1; 
  __int64 v2; 
  __int64 v3; 
  char *v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  EntityNotifyList *outNotifyLists; 

  v0 = ScriptContext_Server();
  v1 = SV_EntityWorkersMP_FinishEntityNotifyUpdate((const EntityNotifyList **)&outNotifyLists);
  if ( v1 )
  {
    v2 = 0i64;
    v3 = v1;
    v17 = 0i64;
    v18 = v1;
    do
    {
      v4 = (char *)outNotifyLists + v2;
      v5 = *(unsigned __int16 *)((char *)&outNotifyLists->notifyEntity + v2);
      if ( v5 >= 0x800u )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3518, ASSERT_TYPE_ASSERT, "(unsigned)( notifyList->notifyEntity ) < (unsigned)( ( 2048 ) )", "notifyList->notifyEntity doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      v6 = *((_WORD *)v4 + 3);
      if ( v6 >= 0x800u )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3519, ASSERT_TYPE_ASSERT, "(unsigned)( notifyList->targetCount ) < (unsigned)( ( 2048 ) )", "notifyList->targetCount doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      v7 = *((unsigned __int16 *)v4 + 2);
      if ( (unsigned int)v7 >= 0x800 )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = *((unsigned __int16 *)v4 + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v7] && *((_WORD *)v4 + 3) )
      {
        v8 = 0;
        Scr_MakeArray(v0);
        v9 = *((_DWORD *)v4 + 2);
        LODWORD(v10) = 0;
        while ( v9 )
        {
LABEL_24:
          v11 = __lzcnt(v9);
          v12 = v11 + 32 * v10;
          if ( v11 >= 0x20 )
          {
            LODWORD(v16) = 32;
            LODWORD(v15) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v15, v16) )
              __debugbreak();
          }
          if ( (v9 & (0x80000000 >> v11)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
            __debugbreak();
          v13 = v8++;
          v9 &= ~(0x80000000 >> v11);
          if ( v13 >= *((unsigned __int16 *)v4 + 3) )
          {
            LODWORD(v16) = *((unsigned __int16 *)v4 + 3);
            LODWORD(v15) = v8++;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3539, ASSERT_TYPE_ASSERT, "(unsigned)( targetCountCheck++ ) < (unsigned)( notifyList->targetCount )", "targetCountCheck++ doesn't index notifyList->targetCount\n\t%i not in [0, %i)", v15, v16) )
              __debugbreak();
          }
          if ( v12 >= 0x800 )
          {
            LODWORD(v16) = 2048;
            LODWORD(v15) = v11 + 32 * v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( g_entityIsInUse[v12] )
          {
            Scr_AddEntityNum(v0, v12, ENTITY_CLASS_GENTITY);
            Scr_AddArray(v0);
          }
        }
        while ( 1 )
        {
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= 0x40 )
            break;
          v9 = *(_DWORD *)&v4[4 * v10 + 8];
          if ( v9 )
            goto LABEL_24;
        }
        if ( v8 != *((unsigned __int16 *)v4 + 3) )
        {
          LODWORD(v16) = *((unsigned __int16 *)v4 + 3);
          LODWORD(v15) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3549, ASSERT_TYPE_ASSERT, "( targetCountCheck ) == ( notifyList->targetCount )", "targetCountCheck == notifyList->targetCount\n\t%i, %i", v15, v16) )
            __debugbreak();
        }
        v14 = *((unsigned __int16 *)v4 + 2);
        if ( (unsigned int)v14 >= 0x800 )
        {
          LODWORD(v16) = 2048;
          LODWORD(v15) = *((unsigned __int16 *)v4 + 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        GScr_Notify(&g_entities[v14], *(scr_string_t *)v4, 1u);
        v2 = v17;
        v3 = v18;
      }
      v2 += 264i64;
      --v3;
      v17 = v2;
      v18 = v3;
    }
    while ( v3 );
  }
}

/*
==============
G_MainMP_FreeAllAgentCorpses
==============
*/
void G_MainMP_FreeAllAgentCorpses(void)
{
  GameScriptDataMP *GameScriptDataMP; 
  __int64 v1; 
  int v2; 

  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v2 = 8;
    LODWORD(v1) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3338, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( gScrData->agentCorpseInfo ) ) + 0 ) )", "ComCharacterLimits::GetAgentCorpseMaxCount() <= ARRAY_COUNT( gScrData->agentCorpseInfo )\n\t%i, %i", v1, v2) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  G_MainMP_FreeCorpsesInternal(GameScriptDataMP->agentCorpseInfo, ComCharacterLimits::ms_gameData.m_agentCorpseCount, &level.currentAgentClone);
}

/*
==============
G_MainMP_FreeAllPlayerCorpses
==============
*/
void G_MainMP_FreeAllPlayerCorpses(bool clearClientCorpses)
{
  GameScriptDataMP *GameScriptDataMP; 
  __int64 v3; 
  int v4; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v4 = 8;
    LODWORD(v3) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3325, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "ComCharacterLimits::GetClientCorpseMaxCount() <= ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i, %i", v3, v4) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  G_MainMP_FreeCorpsesInternal(GameScriptDataMP->playerCorpseInfo, ComCharacterLimits::ms_gameData.m_clientCorpseCount, &level.currentPlayerClone);
  if ( clearClientCorpses )
  {
    MSG_Init(&buf, data, 1020);
    MSG_WriteByte(&buf, 63i64);
    SV_Game_BroadcastServerCommandMsg(SV_CMD_RELIABLE, &buf);
  }
}

/*
==============
G_MainMP_FreeCorpsesInternal
==============
*/
void G_MainMP_FreeCorpsesInternal(GCorpseInfoMP *corpses, const unsigned int corpseCount, int *currentCorpse)
{
  __int64 v3; 
  __int16 *p_entnum; 
  __int64 v7; 
  __int64 v8; 
  gentity_s *v9; 

  v3 = corpseCount;
  if ( !corpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3303, ASSERT_TYPE_ASSERT, "( corpses )", (const char *)&queryFormat, "corpses") )
    __debugbreak();
  if ( !currentCorpse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3304, ASSERT_TYPE_ASSERT, "( currentCorpse )", (const char *)&queryFormat, "currentCorpse") )
    __debugbreak();
  if ( (_DWORD)v3 )
  {
    p_entnum = &corpses->entnum;
    v7 = v3;
    do
    {
      v8 = *p_entnum;
      if ( (_DWORD)v8 != -1 )
      {
        v9 = &g_entities[v8];
        if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
          __debugbreak();
        GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v9);
        LOWORD(v8) = *p_entnum;
      }
      if ( (_WORD)v8 != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3313, ASSERT_TYPE_ASSERT, "(corpses[corpseIndex].entnum == G_PLAYER_CORPSE_INVALID_ENTNUM)", "%s\n\tCorpse should have been freed", "corpses[corpseIndex].entnum == G_PLAYER_CORPSE_INVALID_ENTNUM") )
        __debugbreak();
      p_entnum += 7424;
      --v7;
    }
    while ( v7 );
  }
  *currentCorpse = 0;
}

/*
==============
G_MainMP_FreeEntities
==============
*/

void __fastcall G_MainMP_FreeEntities(double _XMM0_8)
{
  unsigned int v1; 
  int v2; 
  __int64 v3; 
  int *v4; 
  __int64 v5; 
  gentity_s *v6; 
  __int64 i; 
  __int64 v8; 
  gentity_s *v9; 
  EntHandle *droppedWeaponCue; 
  __int64 v11; 
  EntHandle *droppedEquipmentCue; 
  __int64 v13; 
  __int64 v15; 
  __int64 v16; 
  int v17[2048]; 

  v1 = 0;
  v2 = 0;
  if ( level.num_entities > 0 )
  {
    v3 = 0i64;
    v4 = v17;
    v5 = 0i64;
    do
    {
      if ( v1 >= 0x800 )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v5].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        if ( Path_EntIsNodeParent(v1) )
        {
          ++v2;
          *v4++ = v1;
        }
        else
        {
          v6 = &g_entities[v1];
          if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
            __debugbreak();
          GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v6);
        }
      }
      ++v1;
      ++v3;
      ++v5;
    }
    while ( (int)v1 < level.num_entities );
  }
  if ( v2 > 0 )
  {
    for ( i = 0i64; i < v2; ++i )
    {
      v8 = v17[i];
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = v17[i];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v8] )
      {
        v9 = &g_entities[v8];
        if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
          __debugbreak();
        GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v9);
      }
    }
  }
  if ( G_IsEntityInUse(2046) )
    G_FreeEntity(g_entities + 2046);
  droppedWeaponCue = level.droppedWeaponCue;
  v11 = 32i64;
  do
  {
    EntHandle::setEnt(droppedWeaponCue++, NULL);
    --v11;
  }
  while ( v11 );
  droppedEquipmentCue = level.droppedEquipmentCue;
  v13 = 8i64;
  do
  {
    EntHandle::setEnt(droppedEquipmentCue++, NULL);
    --v13;
  }
  while ( v13 );
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[2047].r.isInUse != g_entityIsInUse[2047] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( g_entityIsInUse[2047] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 821, ASSERT_TYPE_ASSERT, "(!G_IsEntityInUse( ENTITYNUM_NONE ))", (const char *)&queryFormat, "!G_IsEntityInUse( ENTITYNUM_NONE )") )
    __debugbreak();
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:?level@@3Ulevel_locals_t@@A.firstFreeEnt, xmm0; level_locals_t level
  }
  level.num_entities = 0;
}

/*
==============
G_MainMP_GetAgentState
==============
*/
agentState_s *G_MainMP_GetAgentState(int agentNum)
{
  __int64 v1; 
  int maxagents; 

  v1 = agentNum;
  if ( (unsigned int)agentNum >= level.maxagents )
  {
    maxagents = level.maxagents;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 768, ASSERT_TYPE_ASSERT, "(unsigned)( agentNum ) < (unsigned)( level.maxagents )", "agentNum doesn't index level.maxagents\n\t%i not in [0, %i)", agentNum, maxagents) )
      __debugbreak();
  }
  return &level.agents[v1].agentState;
}

/*
==============
G_MainMP_GetClientArchiveTime
==============
*/
__int64 G_MainMP_GetClientArchiveTime(int clientNum)
{
  return (unsigned int)level.clients[clientNum].sess.archiveTime;
}

/*
==============
G_MainMP_GetClientDeaths
==============
*/
__int64 G_MainMP_GetClientDeaths(int clientNum)
{
  return level.clients[clientNum].sess.scores.deaths;
}

/*
==============
G_MainMP_GetClientScore
==============
*/
__int64 G_MainMP_GetClientScore(int clientNum)
{
  return level.clients[clientNum].sess.scores.score;
}

/*
==============
G_MainMP_GetClientState
==============
*/
clientState_t *G_MainMP_GetClientState(int clientNum)
{
  return &level.clients[clientNum].sess.cs;
}

/*
==============
G_MainMP_GetDebugInfoForAnimScriptOverlay
==============
*/
bool G_MainMP_GetDebugInfoForAnimScriptOverlay(int handle, const characterInfo_t **ci, const playerState_s **ps)
{
  __int64 v3; 
  bool result; 

  v3 = handle;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics )
    return 0;
  *ci = (const characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)handle);
  result = 1;
  *ps = &level.clients[v3].ps;
  return result;
}

/*
==============
G_MainMP_GetEntIndexByImpulseFieldIndex
==============
*/
__int64 G_MainMP_GetEntIndexByImpulseFieldIndex(const LocalClientNum_t localClientNum, int impulseFieldIndex)
{
  __int64 v2; 

  v2 = impulseFieldIndex;
  if ( impulseFieldIndex >= s_impulseFieldEntityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 4110, ASSERT_TYPE_ASSERT, "( impulseFieldIndex < s_impulseFieldEntityCount )", (const char *)&queryFormat, "impulseFieldIndex < s_impulseFieldEntityCount") )
    __debugbreak();
  return (unsigned int)s_impulseFieldEntities[v2];
}

/*
==============
G_MainMP_GetGameMemoryAllocationSize
==============
*/
__int64 G_MainMP_GetGameMemoryAllocationSize(const unsigned int maxClients, const unsigned int maxAgents, const bool allocateAiSystems)
{
  __int64 v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int size; 

  size = 32304 * (maxClients + maxAgents) + ((14792 * (maxClients + maxAgents) + 19591) & 0xFFFFFFF8) + 64824 * maxClients + 4700776 + GClienThinkTaskManager::GetMemorySize(maxClients) + 238080;
  v6 = size + GWeaponMap::GetMemorySize() + 1087040;
  size = v6;
  v7 = ((v6 + 127) & 0xFFFFFFFFFFFFFF80ui64) - v6 + 2098432;
  if ( v7 > 0xFFFFFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v7, "unsigned", v7) )
      __debugbreak();
    LODWORD(v6) = size;
  }
  size = G_PlayerUse_GetAllocationSize() + v6 + v7 + 2424;
  size += Com_Challenges_GetAllocationSize();
  if ( allocateAiSystems )
    size += Nav_GetAllocSize();
  G_GameInterface_OnAllocationSize(&size);
  size += Ai_Asm::GetMemorySize();
  v8 = GPlayer_Asm::GetMemorySize() + size;
  v9 = 4000 * maxClients;
  if ( allocateAiSystems )
    return v8 + v9 + 55952 * maxAgents;
  else
    return v8 + v9;
}

/*
==============
G_MainMP_GetImpulseFieldEntityCount
==============
*/
__int64 G_MainMP_GetImpulseFieldEntityCount(const LocalClientNum_t localClientNum)
{
  return (unsigned int)s_impulseFieldEntityCount;
}

/*
==============
G_MainMP_GetPlayerState
==============
*/
gclient_s *G_MainMP_GetPlayerState(int clientNum)
{
  return &level.clients[clientNum];
}

/*
==============
G_MainMP_GetSavePersist
==============
*/
__int64 G_MainMP_GetSavePersist()
{
  return (unsigned int)level.savepersist;
}

/*
==============
G_MainMP_InitBgAnimations
==============
*/
void G_MainMP_InitBgAnimations(const SvServerInitSettings *initSettings, bool isFullInit)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 
  bool serverThreadStartup; 
  scrContext_t *v8; 
  scrContext_t *v9; 

  v2 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v5 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 272i64);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1256, ASSERT_TYPE_ASSERT, "( bgameAnim )", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_MainMP_InitBgAnimations");
  Scr_Mem_AcquireScriptLocks();
  XAnimSubTreeRegistry_Init(MOVEMENT);
  Cloth_XAnimNode_Clear(MOVEMENT);
  memset_0((void *)v6, 0, 0x4530ui64);
  serverThreadStartup = initSettings->serverThreadStartup;
  if ( initSettings->isFrontEnd )
  {
    BG_AnimationMP_FrontendInitialization((animScriptData_t *)v6);
    ScriptableBg_FindAnimations(1);
    v8 = ScriptContext_GetFromAnimUser(1);
    Scr_EmitScriptBundlesAnimations(v8);
    Scr_PrecacheAnimTrees(G_Main_HunkAllocXAnimServer, *(_DWORD *)(v6 + 19544), (const ScrThreadMode)serverThreadStartup);
    ScriptableBg_FindAnimationTrees(1);
    Scr_EndLoadAnimTrees(1);
  }
  else
  {
    BG_AnimationMP_FindAnims();
    Animset_InitAnims(1, isFullInit);
    ScriptableBg_FindAnimations(1);
    BG_TurretAnim_FindAnims(1);
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    BG_VehicleAnim_FindAnims(GVehicles::ms_gVehiclesSystem);
    BG_AnimationMP_LoadWeaponAnims((animScriptData_t *)v6);
    v9 = ScriptContext_GetFromAnimUser(1);
    Scr_EmitScriptBundlesAnimations(v9);
    Scr_PrecacheAnimTrees(G_Main_HunkAllocXAnimServer, *(_DWORD *)(v6 + 19544), (const ScrThreadMode)serverThreadStartup);
    BG_AnimationMP_FindAnimTrees(1);
    Animset_FindAnimTrees(1);
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    BG_VehicleAnim_FindTrees(GVehicles::ms_gVehiclesSystem);
    ScriptableBg_FindAnimationTrees(1);
    Scr_EndLoadAnimTrees(1);
    BG_AnimationMP_InitializeAnimations();
    PlayerAnimset_ValidateAnimTrees();
    G_MainMP_LoadAnimTreeInstances();
  }
  Scr_Mem_ReleaseScriptLocks();
  Sys_ProfEndNamedEvent();
}

/*
==============
G_MainMP_InitGame
==============
*/
void G_MainMP_InitGame(const SvServerInitSettings *initSettings, int levelTime, int frameDuration, unsigned int randomSeed)
{
  const char *v8; 
  int v9; 
  const char *v10; 
  bool isRestart; 
  bool v15; 
  const char *v16; 
  scrContext_t *v17; 
  bool isFrontEnd; 
  unsigned int *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const char *String_Internal_DebugName; 
  fsMode_t v24; 
  const char *v25; 
  const char *v26; 
  int i; 
  bool v28; 
  const SaveHeader *Header; 
  bool serverThreadStartup; 
  GPlayer_Asm *v31; 
  int AgentCount; 
  gagent_s *agents; 
  int v34; 
  __int64 v35; 
  const SaveHeader *v37; 
  GameScriptDataMP *GameScriptDataMP; 
  SaveGame *v42; 
  bool v43; 
  int v44; 
  char *fmt; 
  char *description; 
  __int64 v47; 
  int levelTimea; 
  SaveGame *saveGame; 
  int checksum[4]; 
  char dest[128]; 

  levelTimea = levelTime;
  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1340, ASSERT_TYPE_ASSERT, "(initSettings)", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( !initSettings->mapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1341, ASSERT_TYPE_ASSERT, "(initSettings->mapName[0])", (const char *)&queryFormat, "initSettings->mapName[0]") )
    __debugbreak();
  if ( !initSettings->gameType[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1342, ASSERT_TYPE_ASSERT, "(initSettings->gameType[0])", (const char *)&queryFormat, "initSettings->gameType[0]") )
    __debugbreak();
  if ( initSettings->serverThreadStartup )
  {
    if ( Sys_IsServerThread() )
      goto LABEL_17;
    v8 = "Sys_IsServerThread()";
    v9 = 1346;
    v10 = "(Sys_IsServerThread())";
  }
  else
  {
    if ( Sys_IsMainThread() )
      goto LABEL_17;
    v8 = "Sys_IsMainThread()";
    v9 = 1350;
    v10 = "(Sys_IsMainThread())";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", v9, ASSERT_TYPE_ASSERT, v10, (const char *)&queryFormat, v8) )
    __debugbreak();
LABEL_17:
  Com_Printf(15, "------- Game Initialization -------\n");
  Com_Printf(131087, "gamename: %s\n", "IW8");
  Com_Printf(131087, "gamedate: %s\n", "Aug  9 2020");
  if ( !level.savepersist )
    SV_ClientMP_AllocScriptPers();
  G_Main_InitCommon(s_entityHandlersMP, initSettings->registerDvars);
  GAntiLagMP::ClearAntiLagMemoryMP();
  if ( initSettings->registerDvars )
  {
    NetConstStrings_ResetNetworkDvars();
    G_MainMP_RegisterDvars();
  }
  __asm { vmovsd  xmm0, cs:__real@3ff0000000000000 }
  level.initializing = 1;
  isRestart = initSettings->isRestart;
  __asm
  {
    vxorpd  xmm3, xmm3, xmm3
    vmovq   r9, xmm3
  }
  v15 = !isRestart;
  __asm { vmovsd  [rsp+138h+fmt], xmm0 }
  v16 = j_va("%i %i %g %g", 0i64, 0i64, _R9, fmt);
  SV_SetConfigstring(0x217u, v16);
  v17 = ScriptContext_Server();
  GScr_Weapon_Init(v17, !isRestart);
  isFrontEnd = initSettings->isFrontEnd;
  if ( isFrontEnd )
    Path_Reset();
  else
    Path_Init(initSettings->isRestart, 0);
  Scr_SetUseCodePosMap(v17, 0);
  if ( !initSettings->isSaveGame )
    Scr_ShutdownCodeOffsetMap(v17);
  G_Door_Reset();
  G_Vehicle_ClearServerDefs();
  G_FXEntity_ClearSystem();
  G_SoundEntity_ClearSystem();
  G_LogDebugEntInfoInit();
  G_srand(randomSeed);
  ProfLoad_Begin("G_PreLoadGame");
  if ( initSettings->isSaveGame )
    G_SaveMP_PreLoadGame(initSettings, &saveGame, &levelTimea);
  else
    saveGame = NULL;
  ProfLoad_End();
  if ( (saveGame != NULL) != initSettings->isSaveGame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1441, ASSERT_TYPE_ASSERT, "(( save != 0 ) == initSettings->isSaveGame)", (const char *)&queryFormat, "( save != NULL ) == initSettings->isSaveGame") )
    __debugbreak();
  G_InitGlass(initSettings->mapName);
  Com_sprintf(dest, 0x80ui64, "scr_%s_scorelimit", initSettings->gameType);
  Dvar_RegisterInt(dest, 0, 0x80000000, 0x7FFFFFFF, 0x80180u, "script score limit");
  Com_sprintf(dest, 0x80ui64, "scr_%s_roundlimit", initSettings->gameType);
  Dvar_RegisterInt(dest, 0, 0x80000000, 0x7FFFFFFF, 0x80180u, "script round limit");
  G_Main_SetupGameTypeQuick(initSettings->gameType);
  v19 = G_GetRandomSeed();
  SV_DemoMP_Init(initSettings, saveGame, v19, &levelTimea);
  level.cachedTagMat.entnum = 2047;
  level.time = levelTimea;
  level.startTime = levelTimea;
  level.frameDuration = frameDuration;
  level.currentEntityThink = -1;
  level.scriptPrintChannel = 24;
  Dvar_SetString_Internal(DVARSTR_mapname, initSettings->mapName);
  Dvar_SetString_Internal(DVARSTR_g_gametype, initSettings->gameType);
  Dvar_SetBool_Internal(DVARBOOL_g_hardcore, initSettings->hardcoreMode);
  G_ClientFieldsMP_Init();
  BG_LookAt_Init();
  if ( !isFrontEnd )
    AIScheduler::Init();
  XAnimIKInit(1);
  level.tagIKTargetModelLeft = SV_Game_GetXModel("tag_ik_target_left");
  level.tagIKTargetModelRight = SV_Game_GetXModel("tag_ik_target_right");
  CL_Cameraman_Init(v15);
  G_FrontEndScene_Init(initSettings->isFrontEnd);
  if ( isRestart )
  {
    NetConstStrings_CallForCommonModels(G_MainMP_VerifyServerNetConstModels_Callback);
  }
  else
  {
    NetConstStrings_CallForCommonModels(G_MainMP_InitServerNetConstModels_Callback);
    NetConstStrings_CallForCommonShockStrings(G_Main_PrecacheServerShellshock);
  }
  G_XCompositeModel_InitDefs(v15);
  BG_Camo_InitNCS(v15);
  G_Weapon_SetupWeaponDef(!initSettings->isFrontEnd);
  G_Main_InitSuits(v15);
  Rumble_Init(v15);
  BG_AnimationMP_RegisterSuitAnimIndexes(v15);
  BG_Gesture_InitGestures(v15);
  BG_Camera_Init(v15);
  XAnimCurve_InitCurves(v15);
  BG_BlendSpace2D_InitDefs(v15);
  BG_Execution_InitAssets(v15);
  BG_CarryObject_InitDefs(v15);
  BG_HudOutline_InitDefs(v15);
  BG_Accessory_InitAssets(v15);
  BG_WorldStreaming_Init(!initSettings->isFrontEnd);
  GPlayerEventsMP::RegisterEvents();
  GClienThinkTaskManager::ClearTasks(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  GClienThinkTaskManager::ClearTaskFlags(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  v20 = DVARBOOL_g_logEnable;
  if ( !DVARBOOL_g_logEnable )
    goto LABEL_52;
  Dvar_CheckFrontendServerThread(DVARBOOL_g_logEnable);
  if ( !v20->current.enabled )
    goto LABEL_52;
  v21 = DVARSTR_g_log;
  if ( !DVARSTR_g_log && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_log") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( *(_BYTE *)v21->current.integer64 )
  {
    v22 = DVARBOOL_g_logSync;
    if ( !DVARBOOL_g_logSync && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_logSync") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
    {
      String_Internal_DebugName = Dvar_GetString_Internal_DebugName(DVARSTR_g_log, "g_log");
      v24 = FS_APPEND_SYNC;
    }
    else
    {
      String_Internal_DebugName = Dvar_GetString_Internal_DebugName(DVARSTR_g_log, "g_log");
      v24 = FS_APPEND;
    }
    FS_FOpenFileByMode(String_Internal_DebugName, &level.logFile, v24);
    if ( level.logFile.handle.handle == -1 )
    {
      v25 = Dvar_GetString_Internal_DebugName(DVARSTR_g_log, "g_log");
      Com_PrintWarning(15, "WARNING: Couldn't open logfile: %s\n", v25);
    }
    else
    {
      v26 = Dvar_GetString_Internal_DebugName(DVARSTR_g_log, "g_log");
      Com_Printf(15, "Logging to disk: '%s'.\n", v26);
      G_MainMP_LogPrintf("------------------------------------------------------------\n");
      G_MainMP_LogPrintf("InitGame\n");
    }
  }
  else
  {
LABEL_52:
    Com_Printf(15, "Not logging to disk.\n");
  }
  level.openScriptIOFileHandles[0].handle.handle = -1i64;
  level.openScriptIOFileBuffers[0] = NULL;
  *(_QWORD *)&level.currentScriptIOLineMark[0].lines = 0i64;
  level.currentScriptIOLineMark[0].text = NULL;
  *(_QWORD *)&level.currentScriptIOLineMark[0].ungetToken = 0i64;
  level.currentScriptIOLineMark[0].backup_text = NULL;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::DisableCreateEntityPhysicsOnInit(GUtils::ms_gUtils, 0);
  Physics_CreateServerWorlds(initSettings->maxClientCount);
  G_Utils_PhysicsCheckPostAssetChangeEmpty();
  for ( i = 0; i <= 1; ++i )
  {
    WorldCollision_InstantiateCollision((const Physics_WorldId)i);
    StaticModels_InstantiateCollision((const Physics_WorldId)i);
    PatchCollision_InstantiateCollision((const Physics_WorldId)i, initSettings->mapName);
  }
  G_Vehicle_InitSystem();
  G_CoverWall_InitSystem();
  G_PlayerUse_InitSystem();
  G_Trigger_InitSystem();
  GMissile::ClearMissileRegistry();
  GMissile::ClearMissileEventRegistry();
  G_Weapon_SetupLevelWeaponDef(v15);
  if ( isRestart )
  {
    NetConstStrings_CallForLevelModels(G_MainMP_VerifyServerNetConstModels_Callback);
  }
  else
  {
    NetConstStrings_CallForLevelModels(G_MainMP_InitServerNetConstModels_Callback);
    NetConstStrings_CallForLevelShockStrings(G_Main_PrecacheServerShellshock);
  }
  ScriptableBg_InitNetConstStringDefs(v15);
  v28 = initSettings->isSaveGame && !SV_IsDemoPlaying();
  if ( !level.gentities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1591, ASSERT_TYPE_ASSERT, "( level.gentities )", (const char *)&queryFormat, "level.gentities") )
    __debugbreak();
  if ( !level.clients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1592, ASSERT_TYPE_ASSERT, "( level.clients )", (const char *)&queryFormat, "level.clients") )
    __debugbreak();
  if ( !level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1593, ASSERT_TYPE_ASSERT, "( level.maxclients )", (const char *)&queryFormat, "level.maxclients") )
    __debugbreak();
  if ( !level.gameOmnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1594, ASSERT_TYPE_ASSERT, "( level.gameOmnvars )", (const char *)&queryFormat, "level.gameOmnvars") )
    __debugbreak();
  if ( !isRestart )
  {
    BG_CheckThread();
    GScr_MainMP_LoadScripts(initSettings);
    G_MainMP_InitBgAnimations(initSettings, v15);
    if ( !isFrontEnd )
      Ai_Asm::Init(initSettings->serverThreadStartup);
    if ( v28 )
    {
      Scr_GetChecksum(v17, checksum);
      Header = G_SaveMemoryMP_GetHeader(saveGame);
      if ( checksum[0] != Header->scrCheckSum[0] || checksum[1] != Header->scrCheckSum[1] || checksum[2] != Header->scrCheckSum[2] )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBF688, 381i64);
    }
  }
  if ( !initSettings->isFrontEnd )
  {
    serverThreadStartup = initSettings->serverThreadStartup;
    if ( PlayerASM_IsEnabled() )
    {
      v31 = GPlayer_Asm::Singleton();
      BgPlayer_Asm::Init(v31, v15, serverThreadStartup);
    }
  }
  *(_WORD *)&level.damageNotifyQueued = 0;
  if ( level.maxclients > s_clientOmnvarAllocatedCount )
  {
    LODWORD(v47) = s_clientOmnvarAllocatedCount;
    LODWORD(description) = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1629, ASSERT_TYPE_ASSERT, "( level.maxclients ) <= ( s_clientOmnvarAllocatedCount )", "level.maxclients <= s_clientOmnvarAllocatedCount\n\t%i, %i", description, v47) )
      __debugbreak();
  }
  if ( !s_clientOmnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1630, ASSERT_TYPE_ASSERT, "( s_clientOmnvars )", (const char *)&queryFormat, "s_clientOmnvars") )
    __debugbreak();
  level.clientOmnvars = s_clientOmnvars;
  if ( !v28 )
    BG_Omnvar_LoadGamescopeDefaults(level.gameOmnvars->omnvars);
  AgentCount = SV_GameMP_GetAgentCount();
  level.maxagents = AgentCount;
  if ( AgentCount > s_agentAllocatedCount )
  {
    LODWORD(v47) = s_agentAllocatedCount;
    LODWORD(description) = AgentCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1639, ASSERT_TYPE_ASSERT, "( level.maxagents ) <= ( s_agentAllocatedCount )", "level.maxagents <= s_agentAllocatedCount\n\t%i, %i", description, v47) )
      __debugbreak();
    AgentCount = level.maxagents;
  }
  if ( AgentCount <= 0 )
  {
    level.agents = NULL;
  }
  else
  {
    agents = s_agents;
    if ( !s_agents )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1643, ASSERT_TYPE_ASSERT, "( s_agents )", (const char *)&queryFormat, "s_agents") )
        __debugbreak();
      agents = s_agents;
      AgentCount = level.maxagents;
    }
    memset_0(agents, 0, 55952i64 * AgentCount);
    level.agents = agents;
    v34 = 0;
    if ( level.maxagents > 0 )
    {
      v35 = 0i64;
      while ( 1 )
      {
        agents[v35++].agentState.entityNum = 2047;
        if ( ++v34 >= level.maxagents )
          break;
        agents = level.agents;
      }
    }
  }
  Actor_EventListener_Init();
  level.actors = NULL;
  G_Sentient_InitSentients(0x110u, 0x18u);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:?level@@3Ulevel_locals_t@@A.firstFreeEnt, xmm0; level_locals_t level
  }
  level.num_entities = ComCharacterLimits::ms_gameData.m_staticEntityCount;
  SV_Game_LocateGameData(level.gentities, ComCharacterLimits::ms_gameData.m_staticEntityCount, &level.clients->ps, 64592);
  G_Combat_InitHitLocDmgTable();
  BG_LoadPenetrationDepthTable();
  BG_InitializeWeaponSetup();
  BG_LoadCodePerksTable();
  GTurret::InitTurrets();
  if ( initSettings->isSaveGame )
  {
    v37 = G_SaveMemoryMP_GetHeader(saveGame);
    ScriptableSv_SetSaveLootSeed(v37->sp.transientLoaded.array[0]);
  }
  ScriptableSv_Init(initSettings->isFrontEnd);
  Path_PreSpawnInitPaths();
  G_TacGraph_Init();
  G_LightSampler_Init();
  G_Spawn_EntitiesFromString(0);
  Physics_AddPendingBodies(PHYSICS_WORLD_ID_FIRST);
  Physics_AddPendingBodies(PHYSICS_WORLD_ID_SERVER_DETAIL);
  G_Spawn_SpawnableNodes();
  if ( Path_UsePathExtraData() )
    Path_SpawnZoneNodes();
  G_Vehicle_SetupSystem();
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  cs:?level@@3Ulevel_locals_t@@A.fFogOpaqueDist, xmm0; level_locals_t level
    vmovss  cs:?level@@3Ulevel_locals_t@@A.fFogOpaqueDistSqrd, xmm0; level_locals_t level
  }
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 134, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?comWorld@@3UComWorld@@A.umbraGateInitialStates.array; ComWorld comWorld
    vmovups xmm1, xmmword ptr cs:?comWorld@@3UComWorld@@A.umbraGateInitialStates.array+20h; ComWorld comWorld
    vmovups ymmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array, ymm0; level_locals_t level
    vmovups xmmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array+20h, xmm1; level_locals_t level
  }
  G_Objectives_Init();
  G_CalloutMarkerPing_Init();
  G_InitDialogQueues();
  G_Missile_InitAttractors();
  Scr_FreeEntityList(v17);
  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  GameScriptDataMP->playerCorpseInfo[0].entnum = -1;
  GameScriptDataMP->playerCorpseInfo[1].entnum = -1;
  GameScriptDataMP->playerCorpseInfo[2].entnum = -1;
  GameScriptDataMP->playerCorpseInfo[3].entnum = -1;
  GameScriptDataMP->playerCorpseInfo[4].entnum = -1;
  GameScriptDataMP->playerCorpseInfo[5].entnum = -1;
  GameScriptDataMP->playerCorpseInfo[6].entnum = -1;
  GameScriptDataMP->playerCorpseInfo[7].entnum = -1;
  GameScriptDataMP->agentCorpseInfo[0].entnum = -1;
  GameScriptDataMP->agentCorpseInfo[1].entnum = -1;
  GameScriptDataMP->agentCorpseInfo[2].entnum = -1;
  GameScriptDataMP->agentCorpseInfo[3].entnum = -1;
  GameScriptDataMP->agentCorpseInfo[4].entnum = -1;
  GameScriptDataMP->agentCorpseInfo[5].entnum = -1;
  GameScriptDataMP->agentCorpseInfo[6].entnum = -1;
  GameScriptDataMP->agentCorpseInfo[7].entnum = -1;
  G_MotionWarp_Reset();
  G_PlayerSpawnPoints_Init();
  G_MinimizedUsePrompts_Init();
  Com_Printf(15, "-----------------------------------\n");
  v42 = saveGame;
  if ( !saveGame || SV_IsDemoPlaying() )
  {
    SV_DemoMP_FinishDemoInit(initSettings);
    if ( !SV_DemoMP_UsingDemoHistory() )
    {
      v43 = initSettings->serverThreadStartup;
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      v44 = level.frameDuration;
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      Scr_InitSystem(v17, 1, (const ScrThreadMode)v43, level.frameDuration, v44);
      Scr_SetLoading(v17, 1);
      Scr_AllocGameVariable(v17);
      G_Spawn_LoadStructs();
      Scr_LoadGameType();
      GScr_MainMP_PrecacheAiTypes(v17);
      Path_ResolveParentIndices();
      Path_PostSpawnInitPaths(0, 0);
      G_UpdateTrackExtraNodes();
      if ( LOSPrecomputeSystem::IsSystemEnabled(&g_losPrecomputeData) && LOSPrecomputeSystem::IsDataLoaded(&g_losPrecomputeData) && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
        Path_LogStrandedNodes();
      GScr_LoadLevel();
      if ( !initSettings->isFrontEnd && !initSettings->isRestart )
        SV_OnlineTournament_Init();
      if ( !v28 )
        ScriptableSv_InitServerInstances();
      Scr_StartupGameType();
      if ( !initSettings->isFrontEnd )
      {
        if ( BG_BotScriptsEnabled() )
        {
          SV_BotInitRound();
          Scr_BotMain();
          Scr_BotGameTypeMain();
        }
        if ( BG_AgentSystemEnabled() )
        {
          AIAgentInterface::InitAgents();
          SV_AgentInitBotAI();
          Scr_AgentMain();
          Scr_AgentGameTypeMain();
        }
      }
      Scr_SetLoading(v17, 0);
      Scr_InitUsageAnalysis(v17);
      GScr_ResetOpcodeProfile();
      G_GameInterface_PostLoadMapStabilityChecks();
      level.initializing = 0;
    }
  }
  else
  {
    ProfLoad_Begin("G_LoadGame");
    G_SaveMP_LoadGame(initSettings, 0, v42, 1, 0);
    ProfLoad_End();
    if ( BG_AgentSystemEnabled() )
      AIAgentInterface::InitAgents();
    Path_ResolveParentIndices();
  }
}

/*
==============
G_MainMP_InitServerNetConstModels_Callback
==============
*/
void G_MainMP_InitServerNetConstModels_Callback(const unsigned int modelIndex, const char *name)
{
  if ( !modelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1174, ASSERT_TYPE_ASSERT, "(modelIndex != 0)", "%s\n\tShould be skipping the first 'default' model", "modelIndex != 0") )
    __debugbreak();
  G_MainMP_InitServerNetConstModels_NCSTransientModelCheck(name);
  G_Utils_SetCachedModel(name, modelIndex);
}

/*
==============
G_MainMP_InitServerNetConstModels_NCSTransientModelCheck
==============
*/
void G_MainMP_InitServerNetConstModels_NCSTransientModelCheck(const char *const name)
{
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1161, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1163, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION )") )
    __debugbreak();
  if ( SV_TransientsMP_IsTransientModel(name) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBF200, 380i64, name);
}

/*
==============
G_MainMP_IsClientArchivePOTG
==============
*/
_BOOL8 G_MainMP_IsClientArchivePOTG(int clientNum)
{
  return level.clients[clientNum].sess.archiveUsePOTG;
}

/*
==============
G_MainMP_IsCorpseExpired
==============
*/
bool G_MainMP_IsCorpseExpired(const gentity_s *ent)
{
  return 0;
}

/*
==============
G_MainMP_LoadAnimTreeInstances
==============
*/
char G_MainMP_LoadAnimTreeInstances()
{
  __int64 v0; 
  __int64 v1; 
  XAnimTree *Tree; 
  XAnim_s *v3; 
  int v4; 
  int i; 
  __int64 v6; 
  GameScriptDataMP *GameScriptDataMP; 
  GCorpseInfoMP *j; 
  __int64 v10; 

  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v0 = *(_QWORD *)&GStatic::ms_gameStatics;
  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 16i64))(*(_QWORD *)&GStatic::ms_gameStatics);
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 835, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( !PlayerASM_IsEnabled() || (LOBYTE(Tree) = PlayerASM_IsConnectingPaths(), !(_BYTE)Tree) )
  {
    v3 = *(XAnim_s **)(v1 + 17712);
    v4 = 0;
    for ( i = 0; i < level.maxclients; *(_QWORD *)(v6 + 2040) = XAnimCreateTree(v3, G_Main_HunkAllocXAnimServer, MOVEMENT) )
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v0 + 224i64))(v0, (unsigned int)i++);
    GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LOBYTE(Tree) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
    if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v10) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
      LOBYTE(Tree) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 853, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "ComCharacterLimits::GetClientCorpseMaxCount() <= ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i, %i", v10, 8);
      if ( (_BYTE)Tree )
        __debugbreak();
    }
    for ( j = GameScriptDataMP->playerCorpseInfo; ; ++j )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid )
      {
        LOBYTE(Tree) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid");
        if ( (_BYTE)Tree )
          __debugbreak();
      }
      if ( v4 >= (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
        break;
      Tree = XAnimCreateTree(v3, G_Main_HunkAllocXAnimServer, MOVEMENT);
      ++v4;
      j->tree = Tree;
    }
  }
  return (char)Tree;
}

/*
==============
G_MainMP_LogPrintf
==============
*/
void G_MainMP_LogPrintf(const char *fmt, ...)
{
  int v1; 
  __int64 v2; 
  char *ap; 
  char dest[1024]; 
  char v5[1024]; 
  va_list va; 

  va_start(va, fmt);
  if ( level.logFile.handle.handle != -1 )
  {
    Com_vsprintf_truncate(v5, 0x400ui64, 0x400ui64, fmt, va);
    v1 = level.time / 1000 % 60;
    LODWORD(ap) = v1 / 10;
    Com_sprintf(dest, 0x400ui64, "%3i:%i%i %s", (unsigned int)(level.time / 1000 / 60), ap, v1 % 10, v5);
    v2 = -1i64;
    do
      ++v2;
    while ( dest[v2] );
    FS_Write(dest, (unsigned int)v2, level.logFile);
  }
}

/*
==============
G_MainMP_PostDebuggerUpdate
==============
*/
void G_MainMP_PostDebuggerUpdate(void)
{
  __int64 v0; 

  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 113, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 114, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to clear the active bgs from the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v0 + 272) != *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 115, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_gameStatics ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == ms_gameStatics )", *(const void **)(v0 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
}

/*
==============
G_MainMP_PreDebuggerUpdate
==============
*/
void G_MainMP_PreDebuggerUpdate(void)
{
  __int64 v0; 

  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 103, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 104, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to set the active bgs to the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v0 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 105, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == 0 )", *(const void **)(v0 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = *(_QWORD *)&GStatic::ms_gameStatics;
  G_MainMP_ShowEntityInfo();
}

/*
==============
G_MainMP_PreFrame
==============
*/
void G_MainMP_PreFrame(void)
{
  int v0; 
  __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 

  SV_Profile_BeginEvent(SVPROF_CLIENT_THINK_DEFERRED);
  Sys_ProfBeginNamedEvent(0x34u, "G_MainMP_ProcessUserMoveOutput");
  v0 = 0;
  if ( level.maxclients > 0 )
  {
    v1 = 0i64;
    do
    {
      if ( v0 >= GClienThinkTaskManager::ms_clientTaskGlobalManager.m_allocatedClientCount )
      {
        LODWORD(v4) = GClienThinkTaskManager::ms_clientTaskGlobalManager.m_allocatedClientCount;
        LODWORD(v3) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 234, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( m_allocatedClientCount )", "clientNum doesn't index m_allocatedClientCount\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      if ( !GClienThinkTaskManager::ms_clientTaskGlobalManager.m_taskFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 235, ASSERT_TYPE_ASSERT, "( m_taskFlags )", (const char *)&queryFormat, "m_taskFlags") )
        __debugbreak();
      v2 = GClienThinkTaskManager::ms_clientTaskGlobalManager.m_taskFlags[v1];
      if ( v2 )
        G_ActiveMP_ProcessClientThinkUpdatePreTasks(v0, v2);
      ++v0;
      ++v1;
    }
    while ( v0 < level.maxclients );
  }
  GClienThinkTaskManager::ExecuteTasks(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  GClienThinkTaskManager::ClearTasks(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  GClienThinkTaskManager::ClearTaskFlags(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  Sys_ProfEndNamedEvent();
  SV_Profile_EndEvent(SVPROF_CLIENT_THINK_DEFERRED);
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  GCombat::ProcessQueuedClientDeaths(GCombat::ms_gCombatSystem);
}

/*
==============
G_MainMP_ProcessUserMoveOutput
==============
*/
void G_MainMP_ProcessUserMoveOutput(void)
{
  int v0; 
  __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 

  SV_Profile_BeginEvent(SVPROF_CLIENT_THINK_DEFERRED);
  Sys_ProfBeginNamedEvent(0x34u, "G_MainMP_ProcessUserMoveOutput");
  v0 = 0;
  if ( level.maxclients > 0 )
  {
    v1 = 0i64;
    do
    {
      if ( v0 >= GClienThinkTaskManager::ms_clientTaskGlobalManager.m_allocatedClientCount )
      {
        LODWORD(v4) = GClienThinkTaskManager::ms_clientTaskGlobalManager.m_allocatedClientCount;
        LODWORD(v3) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 234, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( m_allocatedClientCount )", "clientNum doesn't index m_allocatedClientCount\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      if ( !GClienThinkTaskManager::ms_clientTaskGlobalManager.m_taskFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 235, ASSERT_TYPE_ASSERT, "( m_taskFlags )", (const char *)&queryFormat, "m_taskFlags") )
        __debugbreak();
      v2 = GClienThinkTaskManager::ms_clientTaskGlobalManager.m_taskFlags[v1];
      if ( v2 )
        G_ActiveMP_ProcessClientThinkUpdatePreTasks(v0, v2);
      ++v0;
      ++v1;
    }
    while ( v0 < level.maxclients );
  }
  GClienThinkTaskManager::ExecuteTasks(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  GClienThinkTaskManager::ClearTasks(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  GClienThinkTaskManager::ClearTaskFlags(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  Sys_ProfEndNamedEvent();
  SV_Profile_EndEvent(SVPROF_CLIENT_THINK_DEFERRED);
}

/*
==============
G_MainMP_RegisterDvars
==============
*/

const dvar_t *__fastcall G_MainMP_RegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v10; 
  const dvar_t *v14; 
  const dvar_t *v18; 
  const dvar_t *v33; 
  const dvar_t *v37; 
  const dvar_t *v41; 
  const dvar_t *v45; 
  const dvar_t *v49; 
  const dvar_t *v53; 
  const dvar_t *v57; 
  const dvar_t *v64; 
  const dvar_t *v68; 
  const dvar_t *result; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovss  xmm6, cs:__real@447a0000
    vmovss  xmm1, cs:__real@41200000; value
  }
  DVARINT_g_playerCollisionEjectSpeed = Dvar_RegisterInt("NRMRQTNPLK", 25, 0, 32000, 0x80u, "Speed at which to push intersecting players away from each other");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v10 = Dvar_RegisterFloat("LMTOLRNTLM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Forward speed of a dropped item");
  __asm { vmovss  xmm1, cs:__real@41200000; value }
  DVARFLT_g_dropForwardSpeed = v10;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v14 = Dvar_RegisterFloat("NNMPPRPRRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Base component of the initial vertical speed of a dropped item");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DVARFLT_g_dropUpSpeedBase = v14;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v18 = Dvar_RegisterFloat("LTQQROOSON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Random component of the initial vertical speed of a dropped item");
  __asm { vmovss  xmm1, cs:__real@42c80000; value }
  DVARFLT_g_dropUpSpeedRand = v18;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_g_dropHorzSpeedRand = Dvar_RegisterFloat("SPMQNOLSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Random component of the initial horizontal speed of a dropped item");
  DVARINT_g_useholdspawndelay = Dvar_RegisterInt("MTMLSRRRKR", 1, 0, 1000, 0x84u, "Time in milliseconds that the player is unable to 'use' after spawning");
  DVARINT_g_mantleBlockTimeBuffer = Dvar_RegisterInt("SRQONORSQ", 500, 0, 60000, 0x84u, "Time that the client think is delayed after mantling");
  DVARBOOL_player_stunWhiteFlash = Dvar_RegisterBool("MMQKQOSTNS", 0, 4u, "If enabled, player's screens will flash white when they are stunned.");
  DVARINT_g_freeClientCorpses = Dvar_RegisterInt("LOMKTRTMTL", 0, 0, 2, 4u, "Clear all client corpses in the level. 1 = clear on server and clients. 2 = clear on server only.");
  DVARBOOL_g_freeAgentCorpses = Dvar_RegisterBool("LOQMNKQRLP", 0, 4u, "Clear all agent corpses in the level");
  DVARBOOL_g_debugPredictedSpawnPoint = Dvar_RegisterBool("MQONLMPNOR", 0, 4u, "Show debug information for predicted spawn times");
  DVARBOOL_anim_deltas_debug = Dvar_RegisterBool("MSTPOQMSO", 0, 0, "Enable animation debug data");
  DVARBOOL_g_debugServerAiming = Dvar_RegisterBool("PMSONLTPQ", 0, 4u, "Draw a debug box in front of the player where the server says the player is aiming");
  DVARSTR_g_log = Dvar_RegisterString("NSNTLKKLOT", "games_mp.log", 0, "Log file name");
  DVARBOOL_g_logSync = Dvar_RegisterBool("TNPOSRSRK", 0, 0, "Enable synchronous logging");
  DVARBOOL_g_logEnable = Dvar_RegisterBool("SQNRRQTTQ", 0, 0, "Enable logging from script to disk using logPrint command");
  DVARBOOL_g_useHitLocationFix = Dvar_RegisterBool("MNNOOKMTMP", 1, 0, "Enable the hit event location fixup so that hit events appear at non-rewound positions on the client");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@437a0000; value
  }
  DVARINT_g_speculativeWeaponLoadCount = Dvar_RegisterInt("LQOOKPQRRR", 2, 0, 24, 0, "The number of weapons to speculatively stream into memory.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_g_speculativeWeaponLoadDistance = Dvar_RegisterFloat("PNQSSORN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The distance at which a weapon on the ground begins to speculatively stream into memory.");
  DVARSTR_g_gametype = Dvar_RegisterString("NKTMKRMSKR", (const char *)&queryFormat.fmt + 3, 0x2000u, "Gametype information for use by script. Not read directly by code");
  DVARBOOL_g_hardcore = Dvar_RegisterBool("OSMSLRTOP", 0, 0x2000u, "Hardcore mode information for use by script. Not read directly by code");
  DCONST_DVARBOOL_g_weaponstreaming_verbose = Dvar_RegisterBool("g_weaponstreaming_verbose", 0, 0x40004u, "Enable verbose printing of changes to the game weapon streaming requests.");
  DCONST_DVARBOOL_g_weaponStreaming_devRandomWeapons = Dvar_RegisterBool("g_weaponStreaming_devRandomWeapons", 0, 0x40004u, "Enable to randomize server-side weapon streaming at regular intervals.");
  DCONST_DVARBOOL_g_characterstreaming_verbose = Dvar_RegisterBool("g_characterstreaming_verbose", 0, 0x40004u, "Enable verbose printing of changes to the game character streaming requests.");
  DCONST_DVARBOOL_g_characterstreaming_validation = Dvar_RegisterBool("g_characterstreaming_validation", 1, 0x40004u, "Enable validation asserts to ensure the streaming asset references are tracked correctly.");
  DCONST_DVARBOOL_g_debugPlayerTriggerBounds = Dvar_RegisterBool("g_debugPlayerTriggerBounds", 0, 0x40004u, "Displays the player's bounding volume used to test against triggers.");
  DVARBOOL_cg_mlg_static_cameras_editing = Dvar_RegisterBool("NQRTKOKOL", 0, 4u, "If the MLG/CodCaster static cameras editor is enabled");
  DVARBOOL_cg_mlg_forceDetachCodcasterCamera = Dvar_RegisterBool("MMPLKLSKPS", 0, 0, "Defensive fix to clear the current spectated player if using a Codcaster camera");
  __asm
  {
    vmovss  xmm8, cs:__real@461c4000
    vmovss  xmm1, cs:__real@41a00000; value
  }
  DCONST_DVARBOOL_g_extrapolation_full_move = Dvar_RegisterBool("g_extrapolation_full_move", 0, 0x40004u, "Enable full pmove when extrapolating client movement on the server");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_g_vehicleTriggerBoxPad = Dvar_RegisterFloat("g_vehicleTriggerBoxPad", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Padding for vehicle boxes to detect for touch triggers.");
  DCONST_DVARBOOL_g_vehicleMakeTriggerContent = Dvar_RegisterBool("g_vehicleMakeTriggerContent", 0, 0x40004u, "If true, when vehicle finds a trigger that does not have the vehicle trigger contents flag, it sets it dynamically");
  DCONST_DVARBOOL_g_vehicleMoverBlockNoneVehicleTouchedEntities = Dvar_RegisterBool("g_vehicleMoverBlockNoneVehicleTouchedEntities", 1, 0x40004u, "If true, the touched entities only collide with a vehicle toucher");
  DVARINT_g_spectateCycleTimeout = Dvar_RegisterInt("PTNOKRMNP", 5000, 0, 0x7FFFFFFF, 0x80u, "The timeout period for cycling next/prev, in ms");
  DCONST_DVARBOOL_g_devSpectateCycleVerbose = Dvar_RegisterBool("g_devSpectateCycleVerbose", 0, 0x40004u, "Enable to print verbose debug logging for spectate cycling.");
  DVARINT_g_spectateExtraStreamedClients = Dvar_RegisterInt("SMMOQMPOP", 0, 0, 200, 0, "The number of additional clients we will attempt to predictively stream for spectating. Set to 0 to turn off this feature.");
  DCONST_DVARBOOL_g_globalCustomizationStreamingEnabled = Dvar_RegisterBool("g_globalCustomizationStreamingEnabled", 0, 0x40004u, "Disable to turn off global customization streaming on the server");
  DCONST_DVARBOOL_g_globalWorldWeaponStreamingEnabled = Dvar_RegisterBool("g_globalWorldWeaponStreamingEnabled", 0, 0x40004u, "Disable to turn off global world weapon streaming on the server");
  DCONST_DVARINT_g_canEmitFootstepTimeout = Dvar_RegisterInt("g_canEmitFootstepTimeout", 500, 0, 0x7FFFFFFF, 0x40004u, "The time canEmitFootsteps is kept true until we check PM_ShouldMakeFootsteps() again.");
  DVARBOOL_g_lastStandDropGrenades = Dvar_RegisterBool("OKKTLROPQR", 1, 0, "If true, when player is cooking a grenade and goes into last stand, drop the grenade.");
  DVARBOOL_g_lastStandCancelGrenades = Dvar_RegisterBool("SPTOMRKOO", 1, 0, "If true, when player is cooking a grenade and goes into last stand, cancel the grenade.");
  DCONST_DVARBOOL_g_grenadeDropConsumeAmmo = Dvar_RegisterBool("g_grenadeDropConsumeAmmo", 1, 0x40004u, "If true, when player is cooking a grenade and goes into last stand, consume ammo.");
  DVARBOOL_g_spectateOrderFixActive = Dvar_RegisterBool("MLOOSKKOQP", 1, 0, "If true, copy spectated player's state _after_ it has been updated for the tick.");
  DVARINT_calloutmarkerping_maxEntityPings = Dvar_RegisterInt("LPTQLOKROK", 3, 0, 3, 0, "The number of simultaneous entity pings allowed");
  DVARINT_calloutmarkerping_maxDangerPings = Dvar_RegisterInt("MRPQRTKTLQ", 3, 0, 3, 0, "The number of simultaneous danger pings allowed");
  DVARINT_calloutmarkerping_maxScriptablePings = Dvar_RegisterInt("MTSRKTKLSM", 3, 0, 3, 0, "The number of simultaneous scriptable / loot pings allowed");
  DVARBOOL_vehDroneDebugDrawPath = Dvar_RegisterBool("POSNTPOQK", 0, 0xC4u, "Debug render the drone draw paths.");
  DCONST_DVARINT_vehDmgToPlayersCurve = Dvar_RegisterInt("vehDmgToPlayersCurve", 2, 0, 5, 0x40004u, "(0) ceil (1) floor (2) linear (3) x^1.5 (4) x^2 (5) x^3");
  DVARBOOL_scr_frontline_trap_checks = Dvar_RegisterBool("scr_frontline_trap_checks", 0, 0, "Enable Frontline trap checks");
  DVARINT_scr_frontline_min_spawns = Dvar_RegisterInt("scr_frontline_min_spawns", 2, 1, 100, 0, "If frontline checks only find this many usable spawns, we will disable the frontline critical factor.  This deems the spawning team trapped.");
  DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled = Dvar_RegisterBool("g_playerspawns_scrScoreFactorEnabled", 1, 0x40004u, "Enables the script score factor callback");
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3f6624dd; value
  }
  DCONST_DVARBOOL_g_playerspawns_scrCriticalFactorEnabled = Dvar_RegisterBool("g_playerspawns_scrCriticalFactorEnabled", 1, 0x40004u, "Enables the script critical factor callback");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v33 = Dvar_RegisterFloat("g_playerspawns_fullSightTTLOSNear", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The TTLOS value that below which a spawn point is considered fully-visible. This is used when the viewing-player is very close.");
  __asm { vmovss  xmm1, cs:__real@3f7851ec; value }
  DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear = v33;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v37 = Dvar_RegisterFloat("g_playerspawns_fullSightTTLOSFar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The TTLOS value that below which a spawn point is considered fully-visible. This is used when the viewing-player is very far away.");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar = v37;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v41 = Dvar_RegisterFloat("g_playerspawns_cornerSightTTLOSNear", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The TTLOS value that below which a spawn point is considered not fully visible, but still potentially dangerous. This is used when the viewing-player is very close.");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear = v41;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v45 = Dvar_RegisterFloat("g_playerspawns_cornerSightTTLOSFar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The TTLOS value that below which a spawn point is considered not fully visible, but still potentially dangerous. This is used when the viewing-player is very far away.");
  __asm { vmovss  xmm1, cs:__real@43960000; value }
  DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar = v45;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v49 = Dvar_RegisterFloat("g_playerspawns_ttlosViewerDistMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Players at or closer than this to a spawnpoint will be more likely to consider that spawnpoint visible");
  __asm { vmovss  xmm1, cs:__real@451c4000; value }
  DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMin = v49;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v53 = Dvar_RegisterFloat("g_playerspawns_ttlosViewerDistMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Players at or further than this to a spawnpoint will be less likely to consider that spawnpoint visible");
  __asm { vmovss  xmm1, cs:__real@43000000; value }
  DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax = v53;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v57 = Dvar_RegisterFloat("g_playerspawns_tacGraphViewerDistRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When calculating full-visibility between tac-graph points, the radius around a character we will consider nearby tac graph points.");
  __asm { vmovss  xmm1, cs:__real@42800000; value }
  DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius = v57;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ = Dvar_RegisterFloat("g_playerspawns_tacGraphViewerDistRadiusZ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When calculating full-visibility between tac-graph points, the Z radius around a character we will consider nearby tac graph points.");
  DVARINT_g_playerspawns_debugdraw = Dvar_RegisterEnum("MTQNLORQOO", g_playerSpawnPoints_debugDrawModes, 0, 0, "Display debug spawnpoint information.");
  DVARINT_g_playerspawns_debugdraw_colorMode = Dvar_RegisterEnum("NQPMKPPQQT", g_playerSpawnPoints_debugDrawColorModes, 0, 0, "How to color spawnpoints when spawn debug draw is enabled.");
  DVARBOOL_g_playerspawns_debugdraw_factors_drawAll = Dvar_RegisterBool("NQPKSOKMSN", 0, 0, "Display all factor scores - even if not registered.");
  DVARBOOL_g_playerspawns_debugdraw_factors = Dvar_RegisterBool("MKTRQQNMKP", 0, 0, "Display spawn factor scores.");
  DVARBOOL_g_playerspawns_debugdraw_totalScore = Dvar_RegisterBool("RPQNTKRNN", 0, 0, "Display spawn score data.");
  DVARBOOL_g_playerspawns_debugdraw_TTLOS = Dvar_RegisterBool("OKPLOOLLRT", 0, 0, "Display the TTLOS value.");
  DVARBOOL_g_playerspawns_debugdraw_sightData = Dvar_RegisterBool("NOQLLRMKM", 0, 0, "Display spawn sight data.");
  DVARBOOL_g_playerspawns_debugdraw_name = Dvar_RegisterBool("SNMKNRTMK", 0, 0, "Display the spawn's classname.");
  DVARBOOL_g_playerspawns_debugdraw_KVPs = Dvar_RegisterBool("MLPQLPQQMP", 0, 0, "Display spawn misc KVP data. script_noteworthy, target, etc.");
  DVARBOOL_g_playerspawns_debugdraw_pos = Dvar_RegisterBool("OKPSPSOKLP", 0, 0, "Display the spawn's origin/angles.");
  DVARBOOL_g_playerspawns_debugdraw_status = Dvar_RegisterBool("NLTMRTPNPP", 0, 0, "Display whether the spawn is enabled or disabled for each team");
  DVARBOOL_g_playerspawns_debugSpawnPathnodes = Dvar_RegisterBool("LRMNNSPTQL", 0, 0, "Draws the pathnodes that the spawn point uses for TTLOS checks");
  DVARBOOL_g_playerspawns_debugPlayerPathnodes = Dvar_RegisterBool("LTLRMQMPKL", 0, 0, "Draws the pathnodes that players uses for TTLOS checks");
  DVARBOOL_g_playerspawns_dumpSelectionResults = Dvar_RegisterBool("NLSROOPPLP", 0, 0, "Prints Selection results whenever a spawn point is selected.");
  DVARBOOL_g_playerspawns_dumpViewerCache = Dvar_RegisterBool("OLKRPQSPKR", 0, 0, "Viewer pathnodes are printed to screen when they are updated.");
  DVARBOOL_g_playerspawns_debugAlternates = Dvar_RegisterBool("NTPQPSRMNT", 0, 0, "Display alternate spawn positions.");
  DVARBOOL_g_playerspawns_debugCritFail = Dvar_RegisterBool("OKMSMTNROQ", 0, 0, "Display the reason for failing critical factors.");
  DVARINT_g_playerspawns_debugLastTeamSpawn = Dvar_RegisterEnum("MKSRLRTRLQ", g_playerSpawnPoints_debugLastTeamSpawnModes, 0, 0, "Display scores and visualization of Prefer Last Team Spawn factor.");
  __asm { vmovss  xmm2, cs:__real@c61c4000; min }
  DVARBOOL_g_playerspawns_debugFrontline = Dvar_RegisterBool("MPKKSLROLP", 0, 0, "Adds frontline debug info to the debug draw data.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v64 = Dvar_RegisterFloat("LRLKOSQQTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "FrontlineMinZ.");
  __asm
  {
    vmovss  xmm2, cs:__real@c61c4000; min
    vmovss  xmm1, cs:__real@44610000; value
  }
  DVARFLT_g_playerspawns_FrontlineMinZ = v64;
  __asm { vmovaps xmm3, xmm8; max }
  v68 = Dvar_RegisterFloat("LSPQNLOKMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "FrontlineMaxZ.");
  __asm
  {
    vmovss  xmm3, cs:__real@43fa0000; max
    vmovss  xmm2, cs:__real@41200000; min
    vmovss  xmm1, cs:__real@41c80000; value
  }
  DVARFLT_g_playerspawns_FrontlineMaxZ = v68;
  DVARFLT_g_playerspawns_FrontlineStep = Dvar_RegisterFloat("LRMTOPLPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "FrontlineStep.");
  DVARBOOL_scr_dumpFrontlineAssignments = Dvar_RegisterBool("scr_dumpFrontlineAssignments", 0, 0, "Prints the frontline assigned to each spawnpoint in precalc.");
  DVARBOOL_scr_simulateBadSpawns = Dvar_RegisterBool("scr_simulateBadSpawns", 0, 0, "Forces all spawn points into the 'bad' catagory.");
  DVARBOOL_scr_compareSpawns = Dvar_RegisterBool("scr_compareSpawns", 0, 0, "Allows the code and script system to compute spawns and compares the results");
  DVARBOOL_g_playerspawns_debugClusters = Dvar_RegisterBool("OKOTSTPTQL", 0, 0, "Draw Clustering Info.");
  DVARBOOL_g_playerspawns_debugLanes = Dvar_RegisterBool("LOKTQKQTNN", 0, 0, "Draw Lanes.");
  DVARBOOL_g_playerspawns_debugNonPlayerViewers = Dvar_RegisterBool("MSMOTRONQL", 0, 0, "Draw Non-Player Spawn Viewers.");
  DVARBOOL_g_playerspawns_debugInfluenceNodes = Dvar_RegisterBool("MQTLMNQRKQ", 0, 0, "Draw Spawn Influence Nodes.");
  DVARBOOL_g_playerspawns_enableScriptCritFactorCallback = Dvar_RegisterBool("TNSTLOSSR", 0, 0, "Enable script callback for critical factors, for dev builds.");
  result = Dvar_RegisterBool("MRNNQPSONP", 0, 0, "Display lines displaying tac graph points that have full-sight to a spawn.");
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  DVARBOOL_g_playerspawns_debugTacGraphSight = result;
  return result;
}

/*
==============
G_MainMP_RegisterGameModeDvars
==============
*/
void G_MainMP_RegisterGameModeDvars(void)
{
  DVARSTR_g_password = Dvar_RegisterString("PKSRQMLRO", (const char *)&queryFormat.fmt + 3, 0x80u, "Password");
  DVARBOOL_g_kickHostIfIdle = Dvar_RegisterBool("MTQMQMNLLQ", 1, 0, "Kick the host if he's idle");
  DVARBOOL_g_deadChat = Dvar_RegisterBool("SLLNLPRON", 0, 0x80u, "Allow dead players to chat with living players");
  DVARINT_g_voiceChatTalkingDuration = Dvar_RegisterInt("LPPTMNSMQP", 500, 0, 10000, 0x80u, "Time after the last talk packet was received that the player is considered by the\nserver to still be talking in milliseconds");
  DVARINT_scr_team_fftype = Dvar_RegisterInt("scr_team_fftype", 0, 0x80000000, 0x7FFFFFFF, 0x480u, "script team friendly fire type");
  DVARINT_scr_game_allowkillcam = Dvar_RegisterInt("scr_game_allowkillcam", 0, 0x80000000, 0x7FFFFFFF, 0x480u, "script allow killcam");
  DVARINT_min_wait_for_players = Dvar_RegisterInt("MSKKKKOPKS", 5, 0, 120, 0x80u, "Amount of time to wait for players to connect. Used in script");
}

/*
==============
G_MainMP_RegisterGametypeDvars
==============
*/
void G_MainMP_RegisterGametypeDvars(const char *gameType)
{
  char dest[128]; 

  Com_sprintf(dest, 0x80ui64, "scr_%s_scorelimit", gameType);
  Dvar_RegisterInt(dest, 0, 0x80000000, 0x7FFFFFFF, 0x80180u, "script score limit");
  Com_sprintf(dest, 0x80ui64, "scr_%s_roundlimit", gameType);
  Dvar_RegisterInt(dest, 0, 0x80000000, 0x7FFFFFFF, 0x80180u, "script round limit");
}

/*
==============
G_MainMP_RunClientEndFrame
==============
*/
void G_MainMP_RunClientEndFrame(void)
{
  __int64 v0; 
  unsigned int v1; 
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  gentity_s *v5; 
  const dvar_t *v6; 
  __int64 v7; 
  __int64 v8; 
  gentity_s *v9; 
  __int64 v10; 
  __int64 v11; 

  Profile_Begin(345);
  SV_Profile_BeginEvent(SVPROF_CLIENT_END_FRAME);
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v0 = *(_QWORD *)&GStatic::ms_gameStatics;
  v1 = 0;
  v2 = 0;
  if ( level.maxclients > 0 )
  {
    v3 = 0i64;
    v4 = 0i64;
    do
    {
      if ( v2 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        if ( v2 >= 0x800 )
        {
          LODWORD(v11) = 2048;
          LODWORD(v10) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v5 = &g_entities[v4];
        if ( !(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v0 + 224i64))(v0, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3618, ASSERT_TYPE_ASSERT, "( gameStatic->GetCharacterInfo( i ) )", (const char *)&queryFormat, "gameStatic->GetCharacterInfo( i )") )
          __debugbreak();
        if ( !*(_DWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v0 + 224i64))(v0, v2) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3619, ASSERT_TYPE_ASSERT, "( gameStatic->GetCharacterInfo( i )->infoValid )", (const char *)&queryFormat, "gameStatic->GetCharacterInfo( i )->infoValid") )
          __debugbreak();
        if ( v5->client - level.clients != v2 )
        {
          LODWORD(v11) = v2;
          LODWORD(v10) = v5->client - level.clients;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3620, ASSERT_TYPE_ASSERT, "( ent->client - level.clients ) == ( i )", "ent->client - level.clients == i\n\t%i, %i", v10, v11) )
            __debugbreak();
        }
        G_ActiveMP_ClientEndFrame(v5);
      }
      ++v2;
      ++v3;
      ++v4;
    }
    while ( (int)v2 < level.maxclients );
    v1 = 0;
  }
  v6 = DVARBOOL_g_spectateOrderFixActive;
  if ( !DVARBOOL_g_spectateOrderFixActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_spectateOrderFixActive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && level.maxclients > 0 )
  {
    v7 = 0i64;
    v8 = 0i64;
    do
    {
      if ( v1 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v7] )
      {
        if ( v1 >= 0x800 )
        {
          LODWORD(v11) = 2048;
          LODWORD(v10) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v9 = &g_entities[v8];
        if ( !(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v0 + 224i64))(v0, v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3637, ASSERT_TYPE_ASSERT, "( gameStatic->GetCharacterInfo( i ) )", (const char *)&queryFormat, "gameStatic->GetCharacterInfo( i )") )
          __debugbreak();
        if ( !*(_DWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v0 + 224i64))(v0, v1) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3638, ASSERT_TYPE_ASSERT, "( gameStatic->GetCharacterInfo( i )->infoValid )", (const char *)&queryFormat, "gameStatic->GetCharacterInfo( i )->infoValid") )
          __debugbreak();
        if ( v9->client - level.clients != v1 )
        {
          LODWORD(v11) = v1;
          LODWORD(v10) = v9->client - level.clients;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3639, ASSERT_TYPE_ASSERT, "( ent->client - level.clients ) == ( i )", "ent->client - level.clients == i\n\t%i, %i", v10, v11) )
            __debugbreak();
        }
        G_ActiveMP_ClientEndFrame_Spectator(v9);
      }
      ++v1;
      ++v7;
      ++v8;
    }
    while ( (int)v1 < level.maxclients );
  }
  SV_Profile_EndEvent(SVPROF_CLIENT_END_FRAME);
  Profile_EndInternal(NULL);
}

/*
==============
G_MainMP_RunFrame
==============
*/
void G_MainMP_RunFrame(int levelTime)
{
  int v5; 
  _DWORD *v6; 
  int v7; 
  __int64 v8; 
  __int16 entityNum; 
  __int64 v10; 
  gentity_s *v11; 
  int v12; 
  int v13; 
  __int64 v17; 
  __int64 v18; 
  gentity_s *v19; 
  char v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  scrContext_t *v24; 
  int v25; 
  trigger_info_t *currentTriggerList; 
  __int64 entnum; 
  __int64 v29; 
  __int64 v30; 
  gentity_s *v31; 
  __int64 otherEntnum; 
  gentity_s *v33; 
  __int64 v34; 
  unsigned int v35; 
  char *Value; 
  int *v40; 
  _QWORD *v41; 
  char *v42; 
  __int64 v43; 
  unsigned __int64 v44; 
  ThreadContext CurrentThreadContext; 
  int v46; 
  __int64 v47; 
  __int64 v48; 
  gentity_s *v49; 
  gclient_s *client; 
  int i; 
  int v53; 
  __int64 v54; 
  __int64 v55; 
  GBallistics *v56; 
  GAntiLag *v57; 
  unsigned int j; 
  unsigned int v59; 
  __int64 v60; 
  gentity_s *v61; 
  unsigned int v62; 
  __int64 v63; 
  __int64 v64; 
  unsigned int v65; 
  __int64 v66; 
  __int64 v67; 
  const dvar_t *v68; 
  int v69; 
  __int64 v70; 
  const char *v71; 
  const dvar_t *v72; 
  const dvar_t *v73; 
  const dvar_t *v74; 
  gentity_s *gentities; 
  const dvar_t *v76; 
  __int64 integer; 
  const DObj *ServerDObjForEnt; 
  GAntiLagMP *AntiLagMP; 
  GWeaponMap *Instance; 
  GWeaponMap *v81; 
  bool v82; 
  unsigned int k; 
  gclient_s *clients; 
  __int64 v85; 
  int LocalClientPing; 
  __int64 v89; 
  __int64 v90; 
  int v91; 
  scrContext_t *v92; 
  __int64 v93; 
  char v94[2048]; 
  char v95; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  Profile_Begin(278);
  SV_InitMP_CheckThread();
  ++level.framenum;
  level.previousTime = level.time;
  level.time = levelTime;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v5 = level.time - level.previousTime;
  if ( level.frameDuration != level.time - level.previousTime )
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    LODWORD(v89) = level.frameDuration;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3674, ASSERT_TYPE_ASSERT, "( G_Level_GetFrameDuration() ) == ( (level.time - level.previousTime) )", "G_Level_GetFrameDuration() == (level.time - level.previousTime)\n\t%i, %i", v89, v5) )
      __debugbreak();
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v93 = *(_QWORD *)&GStatic::ms_gameStatics;
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 16i64))(*(_QWORD *)&GStatic::ms_gameStatics);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3678, ASSERT_TYPE_ASSERT, "( bgameAnim )", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v6[4882] = level.time;
  v6[4883] = 0;
  v6[4884] = level.time;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v6[4885] = level.frameDuration;
  G_MainMP_CheatFreeCorpses();
  G_ActiveMP_BeginClientTriggerWorkers();
  G_ActiveMP_FinishClientTriggerWorkers();
  SV_SnapWorkersMP_StartBuildDeferedClientMessages();
  v7 = 0;
  if ( level.maxagents > 0 )
  {
    v8 = 0i64;
    do
    {
      entityNum = level.agents[v8].agentState.entityNum;
      if ( entityNum != 2047 )
      {
        v10 = entityNum;
        v11 = &g_entities[entityNum];
        if ( (unsigned int)entityNum >= 0x800 )
        {
          LODWORD(v90) = 2048;
          LODWORD(v89) = entityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v10] )
        {
          G_ActiveMP_AgentTouchTriggers(v11);
          G_MainMP_AgentDoPerFrameNotifies(v11);
        }
      }
      ++v7;
      ++v8;
    }
    while ( v7 < level.maxagents );
  }
  SV_ScrUpdateAgents();
  Profile_Begin(427);
  G_LogDebugEntInfoStart();
  SV_Profile_BeginEvent(SVPROF_ANIMATION);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v12 = 0;
  v13 = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm6, xmm0, cs:__real@3a83126f
  }
  if ( level.num_entities > 0 )
  {
    v17 = 0i64;
    v18 = 0i64;
    do
    {
      if ( (unsigned int)v13 >= 0x800 )
      {
        LODWORD(v90) = 2048;
        LODWORD(v89) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v18].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v17] )
      {
        v19 = &g_entities[v13];
        G_LogDebugEntInfo(v19);
        __asm { vmovaps xmm1, xmm6; dtime }
        SV_Game_DObjInitServerTime(v19, *(float *)&_XMM1);
      }
      ++v13;
      ++v17;
      ++v18;
    }
    while ( v13 < level.num_entities );
  }
  G_LogDebugEntInfoEnd();
  SV_Profile_EndEvent(SVPROF_ANIMATION);
  Profile_EndInternal(NULL);
  memset_0(v94, 0, sizeof(v94));
  v21 = 0;
  Profile_Begin(354);
  SV_Profile_BeginEvent(SVPROF_SCRIPT);
  if ( level.currentTriggerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3748, ASSERT_TYPE_ASSERT, "(level.currentTriggerListSize == 0)", (const char *)&queryFormat, "level.currentTriggerListSize == 0") )
    __debugbreak();
  memcpy_0(level.currentTriggerList, level.pendingTriggerList, 12i64 * level.pendingTriggerListSize);
  v22 = DVARINT_trigger_draw;
  level.currentTriggerListSize = level.pendingTriggerListSize;
  level.pendingTriggerListSize = 0;
  if ( !DVARINT_trigger_draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_draw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.integer )
  {
    v23 = DVARINT_trigger_draw;
    if ( !DVARINT_trigger_draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_draw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    G_DrawTriggers((trigger_draw_type_t)v23->current.integer);
  }
  v92 = ScriptContext_Server();
  v24 = v92;
  Scr_RunCurrentThreads(v92);
  do
  {
    ++v21;
    v91 = 0;
    v25 = 0;
    if ( level.currentTriggerListSize > 0 )
    {
      currentTriggerList = level.currentTriggerList;
      while ( 1 )
      {
        entnum = currentTriggerList->entnum;
        _R13 = currentTriggerList;
        v29 = entnum;
        v30 = entnum;
        v31 = &g_entities[entnum];
        if ( v31->useCount != currentTriggerList->useCount )
          goto LABEL_96;
        if ( (unsigned int)entnum >= 0x800 )
        {
          LODWORD(v90) = 2048;
          LODWORD(v89) = entnum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v30].r.isInUse != g_entityIsInUse[v29] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v29] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3778, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entnum ))", (const char *)&queryFormat, "G_IsEntityInUse( entnum )") )
          __debugbreak();
        otherEntnum = currentTriggerList->otherEntnum;
        v33 = &g_entities[otherEntnum];
        if ( v33->useCount != currentTriggerList->otherUseCount )
          goto LABEL_96;
        v34 = currentTriggerList->otherEntnum;
        if ( (unsigned int)otherEntnum >= 0x800 )
        {
          LODWORD(v90) = 2048;
          LODWORD(v89) = currentTriggerList->otherEntnum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v34].r.isInUse != g_entityIsInUse[v34] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v34] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3782, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( trigger_info->otherEntnum ))", (const char *)&queryFormat, "G_IsEntityInUse( trigger_info->otherEntnum )") )
          __debugbreak();
        if ( v94[v29] != v21 )
          break;
        v25 = 1;
        v91 = 1;
LABEL_97:
        ++v12;
        ++currentTriggerList;
        if ( v12 >= level.currentTriggerListSize )
        {
          v24 = v92;
          goto LABEL_99;
        }
      }
      v35 = v31->flags.m_flags[0] >> 17;
      v94[v29] = v21;
      if ( (v35 & 1) != 0 )
        G_Utils_FreeEntityDelay(v31);
      GScr_AddEntity(v33);
      GScr_Notify(v31, scr_const.trigger, 1u);
LABEL_96:
      --v12;
      v25 = v91;
      --level.currentTriggerListSize;
      --currentTriggerList;
      _RCX = level.currentTriggerListSize;
      _RAX = level.currentTriggerList;
      __asm
      {
        vmovsd  xmm0, qword ptr [rax+rcx*4]
        vmovsd  qword ptr [r13+0], xmm0
      }
      _R13->otherUseCount = level.currentTriggerList[_RCX].otherUseCount;
      goto LABEL_97;
    }
LABEL_99:
    Value = (char *)Sys_GetValue(0);
    v40 = (int *)(Value + 16296);
    if ( (unsigned int)(*((_DWORD *)Value + 4074) + 1) >= 3 )
    {
      LODWORD(v90) = 3;
      LODWORD(v89) = *((_DWORD *)Value + 4074) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v89, v90) )
        __debugbreak();
    }
    if ( (unsigned int)++*v40 >= 3 )
    {
      LODWORD(v90) = 3;
      LODWORD(v89) = *v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v89, v90) )
        __debugbreak();
    }
    v41 = Value + 2088;
    v42 = Value + 40;
    if ( *v41 < (unsigned __int64)v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v41 += 8i64;
    if ( *v41 >= (unsigned __int64)v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v41 = v40;
    if ( *v41 <= (unsigned __int64)v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v43 = *v40;
    v44 = __rdtsc();
    v40[v43 + 2] = v44;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    v12 = 0;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 355, NULL, 0);
    Scr_RunCurrentThreads(v24);
    Profile_EndInternal(NULL);
  }
  while ( v25 );
  if ( level.currentTriggerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3808, ASSERT_TYPE_ASSERT, "(level.currentTriggerListSize == 0)", (const char *)&queryFormat, "level.currentTriggerListSize == 0") )
    __debugbreak();
  SV_Profile_EndEvent(SVPROF_SCRIPT);
  Profile_EndInternal(NULL);
  v46 = 0;
  if ( level.maxclients > 0 )
  {
    v47 = 0i64;
    v48 = 0i64;
    do
    {
      if ( (unsigned int)v46 >= 0x800 )
      {
        LODWORD(v90) = 2048;
        LODWORD(v89) = v46;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v48].r.isInUse != g_entityIsInUse[v47] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v47] )
      {
        v49 = &g_entities[v48];
        if ( !g_entities[v48].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3819, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        client = v49->client;
        if ( client->sess.sessionState == SESS_STATE_PLAYING )
        {
          G_Door_UpdateScriptable(client);
          G_MainMP_ClientDoPerFrameNotifies(v49);
        }
      }
      ++v46;
      ++v47;
      ++v48;
    }
    while ( v46 < level.maxclients );
    v24 = v92;
  }
  SV_Profile_BeginEvent(SVPROF_GAME_SYSTEMS);
  GMovingPlatforms::UpdateAllPlatformTraces();
  SV_Profile_EndEvent(SVPROF_GAME_SYSTEMS);
  G_LightSampler_ProcessResults();
  SV_Profile_BeginEvent(SVPROF_ANIMATION);
  G_UpdateAnimationState();
  SV_Profile_EndEvent(SVPROF_ANIMATION);
  SV_Profile_BeginEvent(SVPROF_GAME_SYSTEMS);
  G_UpdateDialogQueues();
  SV_Profile_EndEvent(SVPROF_GAME_SYSTEMS);
  Profile_Begin(427);
  SV_Profile_BeginEvent(SVPROF_ANIMATION);
  for ( i = 0; i < level.num_entities; ++i )
  {
    __asm { vmovaps xmm1, xmm6; dt }
    G_MainMP_XAnimUpdateEnt(&g_entities[i], *(const float *)&_XMM1);
  }
  SV_Profile_EndEvent(SVPROF_ANIMATION);
  Profile_EndInternal(NULL);
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_MainMP_UpdateUsability");
  Sys_ProfBeginNamedEvent(0xFFFFA500, "G_MainMP_UpdateUsability CreateJobs");
  v53 = 0;
  if ( level.maxclients > 0 )
  {
    v54 = 0i64;
    v55 = 0i64;
    do
    {
      if ( (unsigned int)v53 >= 0x800 )
      {
        LODWORD(v90) = 2048;
        LODWORD(v89) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v55].r.isInUse != g_entityIsInUse[v54] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v54] && G_ActiveMP_IsPlayerActive(v53) )
        SV_ClientWorkersMP_AddClientUsabilityUpdate(v53);
      ++v53;
      ++v54;
      ++v55;
    }
    while ( v53 < level.maxclients );
    v24 = v92;
  }
  Sys_ProfEndNamedEvent();
  SV_ClientWorkersMP_ProcessClientUsabilityUpdate();
  Sys_ProfEndNamedEvent();
  Actor_EventListener_NotifyExecute();
  SV_Profile_BeginEvent(SVPROF_SCRIPT);
  Scr_IncTime(v24);
  SV_Profile_EndEvent(SVPROF_SCRIPT);
  SV_Game_ResetSkeletonCache();
  XAnimProceduralBonesAllocator_BeginServerFrame();
  GMovingPlatforms::DeferredReset();
  GMovingPlatforms::KeyframeMarkedEntities(level.num_entities);
  Profile_Begin(279);
  SV_Profile_BeginEvent(SVPROF_ENTITY_PRE_FRAME);
  G_Main_RunPreThinkForEntities();
  SV_Profile_EndEvent(SVPROF_ENTITY_PRE_FRAME);
  Profile_EndInternal(NULL);
  Profile_Begin(338);
  SV_Profile_BeginEvent(SVPROF_ENTITY_RUN_FRAME);
  SV_EntitiesPartitioning_ProcessNewEntityQueue();
  if ( level.currentEntityThink != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3893, ASSERT_TYPE_ASSERT, "(level.currentEntityThink == -1)", (const char *)&queryFormat, "level.currentEntityThink == -1") )
    __debugbreak();
  G_MainMP_UpdateSortedEntities();
  level.currentEntityThink = -1;
  SV_Profile_EndEvent(SVPROF_ENTITY_RUN_FRAME);
  Profile_EndInternal(NULL);
  SV_Profile_BeginEvent(SVPROF_GAME_SYSTEMS);
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 79, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem )", (const char *)&queryFormat, "ms_gBallisticsSystem") )
    __debugbreak();
  v56 = GBallistics::ms_gBallisticsSystem;
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3902, ASSERT_TYPE_ASSERT, "( ballisticsSystem )", (const char *)&queryFormat, "ballisticsSystem") )
    __debugbreak();
  GBallistics::UpdateBallistics(v56, level.time);
  SV_Profile_EndEvent(SVPROF_GAME_SYSTEMS);
  SV_Profile_BeginEvent(SVPROF_GAME_SYSTEMS);
  if ( !GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 61, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  GTargetAssist::ProcessAllEntities(GTargetAssist::ms_instance);
  SV_Profile_EndEvent(SVPROF_GAME_SYSTEMS);
  Profile_Begin(584);
  SV_Profile_BeginEvent(SVPROF_SCRIPTABLE);
  ScriptableSv_RunFrame();
  SV_Profile_EndEvent(SVPROF_SCRIPTABLE);
  Profile_EndInternal(NULL);
  SV_Profile_BeginEvent(SVPROF_GAME_SYSTEMS);
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v57 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3920, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
    __debugbreak();
  BgAntiLag::PurgeLerpMoverCommands(v57, level.time);
  SV_Profile_EndEvent(SVPROF_GAME_SYSTEMS);
  SV_Profile_BeginEvent(SVPROF_ENTITY_USE_CACHE);
  G_PlayerUse_CacheGatherDataForFrame();
  SV_Profile_EndEvent(SVPROF_ENTITY_USE_CACHE);
  G_MainMP_RunClientEndFrame();
  Profile_Begin(344);
  SV_Profile_BeginEvent(SVPROF_GAME_SYSTEMS);
  G_Door_UpdateOwnerMap();
  SV_Profile_EndEvent(SVPROF_GAME_SYSTEMS);
  Profile_EndInternal(NULL);
  Profile_Begin(351);
  for ( j = 0; (int)j < level.maxagents; ++j )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( j >= ComCharacterLimits::ms_gameData.m_agentCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v90) = ComCharacterLimits::ms_gameData.m_agentCount;
      LODWORD(v89) = j;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v89, v90) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v59 = j + ComCharacterLimits::ms_gameData.m_clientCount;
    if ( j + ComCharacterLimits::ms_gameData.m_clientCount >= 0x800 )
    {
      LODWORD(v90) = 2048;
      LODWORD(v89) = j + ComCharacterLimits::ms_gameData.m_clientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3940, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
        __debugbreak();
    }
    v60 = (int)v59;
    v61 = &g_entities[v60];
    if ( v59 >= 0x800 )
    {
      LODWORD(v90) = 2048;
      LODWORD(v89) = v59;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v60].r.isInUse != g_entityIsInUse[v59] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v59] )
    {
      if ( !(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v93 + 224i64))(v93, v59) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3944, ASSERT_TYPE_ASSERT, "( gameStatic->GetCharacterInfo( entityIndex ) )", (const char *)&queryFormat, "gameStatic->GetCharacterInfo( entityIndex )") )
        __debugbreak();
      if ( !*(_DWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v93 + 224i64))(v93, v59) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3945, ASSERT_TYPE_ASSERT, "( gameStatic->GetCharacterInfo( entityIndex )->infoValid )", (const char *)&queryFormat, "gameStatic->GetCharacterInfo( entityIndex )->infoValid") )
        __debugbreak();
      if ( v61->agent - level.agents != j )
      {
        LODWORD(v90) = j;
        LODWORD(v89) = v61->agent - level.agents;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3946, ASSERT_TYPE_ASSERT, "( ent->agent - level.agents ) == ( i )", "ent->agent - level.agents == i\n\t%i, %i", v89, v90) )
          __debugbreak();
      }
      SV_AgentEndFrame(v61);
    }
  }
  Profile_EndInternal(NULL);
  if ( SV_EntitiesLoD_UseDynamicLoD() )
  {
    SV_EntitiesLoD_UpdateForcedHighLoDEntitiesList();
    SV_EntitiesLoD_PrecomputeSharedDataForAllClients();
    SV_EntitiesPartitioning_ProcessNewEntityQueue();
    SV_EntitiesPartitioning_UpdateDirtyEntities();
  }
  SV_EntityWorkersMP_ClearEntityNotifyUpdate();
  v62 = 0;
  v63 = 0i64;
  v64 = 0i64;
  do
  {
    if ( v62 >= 0x800 )
    {
      LODWORD(v90) = 2048;
      LODWORD(v89) = v62;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v64].r.isInUse != g_entityIsInUse[v63] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v63] )
    {
      if ( v62 >= 0x800 )
      {
        LODWORD(v90) = 2048;
        LODWORD(v89) = v62;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v64].s.eType == ET_MISSILE && G_Missile_HasEntityNotify(&g_entities[v64]) )
        SV_EntityWorkersMP_AddEntityNotifyUpdate(v62, (const scr_string_t)scr_const.trigger_grenade);
    }
    ++v62;
    ++v63;
    ++v64;
  }
  while ( (int)v62 < 2048 );
  SV_EntityWorkersMP_StartEntityNotifyUpdate();
  G_ActiveMP_BeginClientEndFrameWorkers();
  G_ActiveMP_BeginClientEntityLoDWorkers();
  G_MainMP_FinishEntityNotifyWorkers();
  SV_Profile_BeginEvent(SVPROF_CLIENT_WORKER_OUT);
  G_ActiveMP_FinishClientEndFrameWorkers();
  G_ActiveMP_FinishClientEntityLoDWorkers();
  SV_Profile_EndEvent(SVPROF_CLIENT_WORKER_OUT);
  v65 = 0;
  if ( level.maxclients > 0 )
  {
    v66 = 0i64;
    v67 = 0i64;
    do
    {
      if ( v65 >= 0x800 )
      {
        LODWORD(v90) = 2048;
        LODWORD(v89) = v65;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v67].r.isInUse != g_entityIsInUse[v66] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v66] )
      {
        if ( v65 >= 0x800 )
        {
          LODWORD(v90) = 2048;
          LODWORD(v89) = v65;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v90) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        G_ActiveMP_ClientValidateScriptable(&g_entities[v65]);
      }
      ++v65;
      ++v66;
      ++v67;
    }
    while ( (int)v65 < level.maxclients );
  }
  SV_Profile_BeginEvent(SVPROF_GAME_SYSTEMS);
  G_CharacterStreaming_LoadCharacters();
  G_WeaponStreaming_LoadWeapons();
  DamageParts_Update();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "bad places");
  Path_RunBadPlaces();
  Sys_ProfEndNamedEvent();
  G_Glass_Update();
  v68 = DVARBOOL_g_listEntity;
  if ( !DVARBOOL_g_listEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_listEntity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v68);
  if ( v68->current.enabled )
  {
    v69 = 0;
    v70 = 0i64;
    do
    {
      v71 = SL_ConvertToString(g_entities[v70].classname);
      Com_Printf(15, "%4i: %s\n", (unsigned int)v69++, v71);
      ++v70;
    }
    while ( v69 < 2048 );
    Dvar_SetBool_Internal(DVARBOOL_g_listEntity, 0);
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 4009, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_CONFIG_STRINGS ))", "%s\n\tNeeed to restore items/weapons registration if this is turned off", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_CONFIG_STRINGS )") )
    __debugbreak();
  G_Utils_UpdateEntityEvents();
  Path_PostStep();
  Path_DrawDebug();
  SV_Profile_EndEvent(SVPROF_GAME_SYSTEMS);
  G_DebugInfils();
  G_PlayerSpawnPoints_DebugDraw();
  G_VehiclePath_DrawDebug();
  v72 = DVARINT_g_dumpAnims;
  if ( !DVARINT_g_dumpAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnims") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v72);
  if ( v72->current.integer >= 0 )
  {
    v73 = DVARINT_g_dumpAnims;
    if ( !DVARINT_g_dumpAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v73);
    if ( v73->current.integer >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2182, ASSERT_TYPE_SANITY, "( Dvar_GetInt_Internal_DebugName( DVARINT_g_dumpAnims, \"g_dumpAnims\" ) < ( 2048 ) )", (const char *)&queryFormat, "Dvar_GetInt( g_dumpAnims ) < MAX_GENTITIES") )
      __debugbreak();
    v74 = DVARINT_g_dumpAnims;
    gentities = level.gentities;
    if ( !DVARINT_g_dumpAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v74);
    SV_Game_DObjDisplayAnim(&gentities[v74->current.integer], "server:\n");
  }
  v76 = DVARINT_g_dobjdump;
  if ( !DVARINT_g_dobjdump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dobjdump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v76);
  integer = v76->current.integer;
  if ( (int)integer >= 0 )
  {
    Dvar_SetInt_Internal(DVARINT_g_dobjdump, -1);
    if ( (int)integer >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2197, ASSERT_TYPE_SANITY, "( dumpDObj < ( 2048 ) )", (const char *)&queryFormat, "dumpDObj < MAX_GENTITIES") )
      __debugbreak();
    ServerDObjForEnt = Com_GetServerDObjForEnt(&level.gentities[integer]);
    if ( ServerDObjForEnt )
      DObjDumpInfo(ServerDObjForEnt);
  }
  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  GAntiLagMP::DrawDebug(AntiLagMP);
  G_MainMP_ShowEntityInfo();
  G_DrawGrenadeHints();
  Instance = GWeaponMap::GetInstance();
  GWeaponMap::DrawWeaponMap(Instance);
  G_PlayerUse_DrawDebug();
  SV_EntitiesPartitioning_DrawDebug();
  v81 = GWeaponMap::GetInstance();
  GWeaponMap::ValidateReferences(v81);
  G_ProcessRadiantCmds(RADIANT_GAMEMODE_MP);
  G_BulletMP_ProcessPotentialImpactFixups();
  v82 = level.pingUpdateTime <= level.time;
  if ( level.pingUpdateTime <= level.time )
    level.pingUpdateTime = level.time + 2000;
  for ( k = 0; k < level.maxclients; ++k )
  {
    clients = level.clients;
    v85 = k;
    if ( SV_ClientMP_IsClientConnected(k) )
    {
      if ( v82 || clients[v85].sess.scores.ping == 1023 )
      {
        if ( SV_BotIsBot(k) )
        {
          clients[v85].sess.scores.ping = 0;
        }
        else
        {
          if ( SV_ClientMP_IsLocalClient(k) )
            LocalClientPing = SV_ClientMP_GetLocalClientPing(k);
          else
            LocalClientPing = SV_ClientMP_GetClientPing(k);
          clients[v85].sess.scores.ping = truncate_cast<unsigned short,int>(LocalClientPing);
        }
      }
    }
    else
    {
      clients[v85].sess.scores.ping = 1023;
    }
  }
  SV_OnlineTournament_Frame();
  Profile_EndInternal(NULL);
  _R11 = &v95;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
G_MainMP_RunFrameForEntity
==============
*/
void G_MainMP_RunFrameForEntity(gentity_s *ent)
{
  __int64 v3; 
  gentity_s **p_parent; 
  int v5; 
  bool v6; 
  bool v7; 
  const char *EntityModelName; 
  const char *v10; 
  bool v23; 
  const char *v24; 
  const char *v25; 
  bool v38; 
  const char *v40; 
  const char *v41; 
  bool v54; 
  int time; 
  char v56; 
  int eType; 
  const char *v58; 
  int v59; 
  const char *v60; 
  bool NoBroadphaseQueriesAllowed; 
  __int64 v68; 
  __int64 v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  double v84; 
  double v85; 
  double v86; 
  double v87; 
  vec3_t prevAngles; 
  vec3_t prevOrigin; 

  _RDI = ent;
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v3 = _RDI - g_entities;
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v68) = _RDI - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v68, 2048) )
      __debugbreak();
  }
  v3 = (__int16)v3;
  if ( (unsigned int)(__int16)v3 >= 0x800 )
  {
    LODWORD(v69) = 2048;
    LODWORD(v68) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v68, v69) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2837, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( ent ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  if ( _RDI->processedFrame != level.framenum )
  {
    p_parent = &_RDI->tagInfo->parent;
    __asm { vmovaps [rsp+0D8h+var_28], xmm6 }
    _RDI->processedFrame = level.framenum;
    if ( p_parent )
    {
      if ( !*p_parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2848, ASSERT_TYPE_ASSERT, "( tagInfo->parent )", (const char *)&queryFormat, "tagInfo->parent") )
        __debugbreak();
      G_MainMP_RunFrameForEntity(*p_parent);
      p_parent = &_RDI->tagInfo->parent;
    }
    if ( _RDI->s.eType == ET_SCRIPTMOVER && (LOBYTE(_RDI->s.lerp.u.vehicle.bodyPitch) & 4) != 0 )
    {
      v5 = s_impulseFieldEntityCount;
      s_impulseFieldEntities[s_impulseFieldEntityCount] = _RDI->s.number;
      s_impulseFieldEntityCount = v5 + 1;
    }
    v6 = (_RDI->r.svFlags & 6) != 7;
    if ( (_RDI->r.svFlags & 6) == 6 )
    {
      LODWORD(v69) = _RDI->s.number;
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2858, ASSERT_TYPE_ASSERT, "( ( (ent->r.svFlags & ((1 << 1) | (1 << 2))) != ((1 << 1) | (1 << 2)) ) )", "%s\n\t( ent->s.number ) = %i", "( (ent->r.svFlags & ((1 << 1) | (1 << 2))) != ((1 << 1) | (1 << 2)) )", v69);
      v6 = !v7;
      if ( v7 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm6, dword ptr [rdi+10Ch]
    }
    if ( !v6 )
    {
      EntityModelName = G_DebugGetEntityModelName(_RDI);
      v10 = SL_ConvertToString(_RDI->classname);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+114h]
        vmovss  xmm1, dword ptr [rdi+110h]
        vmovss  xmm2, dword ptr [rdi+10Ch]
        vmovss  xmm3, dword ptr [rdi+138h]
        vmovss  xmm4, dword ptr [rdi+134h]
        vmovss  xmm5, dword ptr [rdi+130h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0D8h+var_78], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0D8h+var_80], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+0D8h+var_88], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0D8h+var_90], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+0D8h+var_98], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+0D8h+var_A0], xmm5
      }
      LODWORD(v69) = _RDI->s.number;
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2860, ASSERT_TYPE_ASSERT, "(ent->r.box.halfSize[0] >= 0.0f)", "%s\n\tentnum: %d, origin: %g %g %g, halfsize: %g %g %g, classname: %s, modelname: %s", "ent->r.box.halfSize[0] >= 0.0f", v69, v70, v73, v76, v79, v82, v85, v10, EntityModelName);
      v6 = !v23;
      if ( v23 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, dword ptr [rdi+110h] }
    if ( !v6 )
    {
      v24 = G_DebugGetEntityModelName(_RDI);
      v25 = SL_ConvertToString(_RDI->classname);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+114h]
        vmovss  xmm1, dword ptr [rdi+110h]
        vmovss  xmm2, dword ptr [rdi+10Ch]
        vmovss  xmm3, dword ptr [rdi+138h]
        vmovss  xmm4, dword ptr [rdi+134h]
        vmovss  xmm5, dword ptr [rdi+130h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0D8h+var_78], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0D8h+var_80], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+0D8h+var_88], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0D8h+var_90], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+0D8h+var_98], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+0D8h+var_A0], xmm5
      }
      LODWORD(v69) = _RDI->s.number;
      v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2861, ASSERT_TYPE_ASSERT, "(ent->r.box.halfSize[1] >= 0.0f)", "%s\n\tentnum: %d, origin: %g %g %g, halfsize: %g %g %g, classname: %s, modelname: %s", "ent->r.box.halfSize[1] >= 0.0f", v69, v71, v74, v77, v80, v83, v86, v25, v24);
      v6 = !v38;
      if ( v38 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm6, dword ptr [rdi+114h]
      vmovaps xmm6, [rsp+0D8h+var_28]
    }
    if ( !v6 )
    {
      v40 = G_DebugGetEntityModelName(_RDI);
      v41 = SL_ConvertToString(_RDI->classname);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+114h]
        vmovss  xmm1, dword ptr [rdi+110h]
        vmovss  xmm2, dword ptr [rdi+10Ch]
        vmovss  xmm3, dword ptr [rdi+138h]
        vmovss  xmm4, dword ptr [rdi+134h]
        vmovss  xmm5, dword ptr [rdi+130h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0D8h+var_78], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0D8h+var_80], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+0D8h+var_88], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0D8h+var_90], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+0D8h+var_98], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+0D8h+var_A0], xmm5
      }
      LODWORD(v69) = _RDI->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2862, ASSERT_TYPE_ASSERT, "(ent->r.box.halfSize[2] >= 0.0f)", "%s\n\tentnum: %d, origin: %g %g %g, halfsize: %g %g %g, classname: %s, modelname: %s", "ent->r.box.halfSize[2] >= 0.0f", v69, v72, v75, v78, v81, v84, v87, v41, v40) )
        __debugbreak();
    }
    G_Util_FlushInvalidOtherEnt(_RDI);
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v54 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RDI->s.lerp.eFlags, ACTIVE, 0x16u);
    time = level.time;
    if ( v54 && level.time > _RDI->s.time2 )
      goto LABEL_50;
    if ( _RDI->s.eType >= ET_EVENTS )
    {
      if ( !G_Main_IsEventValid(_RDI) )
      {
LABEL_50:
        G_FreeEntity(_RDI);
        return;
      }
      time = level.time;
    }
    v56 = _RDI->r.eventTypeFlags & 1;
    if ( v56 && time - _RDI->r.eventTime > 200 )
      goto LABEL_50;
    if ( v56 )
      goto LABEL_83;
    if ( _RDI->client )
    {
      G_ActiveMP_RunClient(_RDI);
LABEL_83:
      G_MainMP_CheckEntityPositionChange(_RDI);
      return;
    }
    eType = _RDI->s.eType;
    if ( ((eType - 2) & 0xFFFFFFEF) == 0 || !_RDI->physicsObject )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+130h]
        vmovss  xmm1, dword ptr [rdi+134h]
        vmovss  dword ptr [rsp+0D8h+prevOrigin], xmm0
        vmovss  xmm0, dword ptr [rdi+138h]
        vmovss  dword ptr [rsp+0D8h+prevOrigin+4], xmm1
        vmovss  xmm1, dword ptr [rdi+13Ch]
        vmovss  dword ptr [rsp+0D8h+prevOrigin+8], xmm0
        vmovss  xmm0, dword ptr [rdi+140h]
        vmovss  dword ptr [rsp+0D8h+prevAngles], xmm1
        vmovss  xmm1, dword ptr [rdi+144h]
        vmovss  dword ptr [rsp+0D8h+prevAngles+4], xmm0
        vmovss  dword ptr [rsp+0D8h+prevAngles+8], xmm1
      }
      switch ( eType )
      {
        case 0:
        case 28:
          if ( p_parent )
            G_GeneralLink(_RDI);
          goto LABEL_81;
        case 2:
        case 18:
          NoBroadphaseQueriesAllowed = Physics_GetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST);
          if ( NoBroadphaseQueriesAllowed )
          {
            Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 0);
            Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 0);
          }
          G_PlayerCorpseMP_RunCorpse(_RDI);
          if ( NoBroadphaseQueriesAllowed )
          {
            Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 1);
            Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
          }
          goto LABEL_83;
        case 3:
          if ( !p_parent )
            goto LABEL_62;
          G_GeneralLink(_RDI);
          G_Main_RunThink(_RDI);
          goto LABEL_83;
        case 4:
          G_Missile_RunMissile(_RDI);
          goto LABEL_83;
        case 6:
        case 10:
        case 13:
          GMovingPlatforms::UpdateMovingPlatformEntity(_RDI);
          goto LABEL_82;
        case 22:
          Profile_Begin(639);
          G_PhysicsObject_UpdatePhysicsChild(PHYSICS_WORLD_ID_FIRST, _RDI);
          Profile_EndInternal(NULL);
          goto LABEL_83;
        case 23:
          G_BeamEntity_Update(_RDI);
          goto LABEL_81;
        case 25:
          G_RagdollConstraintEntity_Update(_RDI);
          goto LABEL_81;
        case 26:
          if ( _RDI->tagInfo )
            G_GeneralLink(_RDI);
          G_PhysicsVolume_Update(_RDI);
          goto LABEL_81;
        case 27:
          G_CoverWall_Update(_RDI);
          goto LABEL_81;
        default:
LABEL_81:
          G_Main_RunThink(_RDI);
LABEL_82:
          GMovingPlatforms::UpdateEntityMoveFlag(_RDI, &prevOrigin, &prevAngles);
          break;
      }
      goto LABEL_83;
    }
    if ( eType == 3 )
    {
      v58 = "eType != ET_ITEM";
      v59 = 2900;
      v60 = "( eType != ET_ITEM )";
    }
    else
    {
      if ( eType != 4 )
      {
LABEL_62:
        G_Items_RunItem(_RDI);
        goto LABEL_83;
      }
      v58 = "eType != ET_MISSILE";
      v59 = 2901;
      v60 = "( eType != ET_MISSILE )";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", v59, ASSERT_TYPE_ASSERT, v60, (const char *)&queryFormat, v58) )
      __debugbreak();
    goto LABEL_62;
  }
}

/*
==============
G_MainMP_SetSavePersist
==============
*/
void G_MainMP_SetSavePersist(int savepersist)
{
  level.savepersist = savepersist;
}

/*
==============
G_MainMP_ShowAgentsInfo
==============
*/
void G_MainMP_ShowAgentsInfo(gentity_s *ent, const vec3_t *origin, const vec4_t *color)
{
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  void (__fastcall *entinfo)(gentity_s *, const vec3_t *); 
  AIActorInterface v8; 
  AIAgentInterface v9; 
  void *v10; 

  AIActorInterface::AIActorInterface(&v8);
  AIAgentInterface::AIAgentInterface(&v9);
  v10 = NULL;
  v9.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->agent && SV_Agent_IsScripted(ent->s.number) )
  {
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(ent);
    if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
      __debugbreak();
    if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
      __debugbreak();
    AINewAgentInterface::SetAgent((AINewAgentInterface *)&v9, ScriptedAgentInfo);
    v10 = &v9;
  }
  else
  {
    actor = ent->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v8, ent->actor);
      v10 = &v8;
    }
    else if ( !v10 )
    {
      return;
    }
  }
  entinfo = G_Main_GetEntHandlerList(ent)->entinfo;
  if ( entinfo )
    entinfo(ent, origin);
}

/*
==============
G_MainMP_ShowEntityInfo
==============
*/

void __fastcall G_MainMP_ShowEntityInfo(double _XMM0_8)
{
  const dvar_t *v4; 
  bool enabled; 
  const dvar_t *v6; 
  bool v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  char v10; 
  gclient_s *client; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  GHandler *Handler; 
  GHandler *v19; 
  unsigned __int16 EntityHitId; 
  const gentity_s *v28; 
  gentity_s *v29; 
  gentity_s *v35; 
  int v36; 
  __int16 v40; 
  char v55; 
  char v56; 
  int IsAgentScripted; 
  vec4_t *v63; 
  int v64; 
  unsigned int v65; 
  _DWORD *v66; 
  const vec4_t *v67; 
  const char *EntityTypeName; 
  const char *v69; 
  const char *v70; 
  _DWORD *v71; 
  unsigned int v72; 
  _DWORD *v73; 
  unsigned int v74; 
  unsigned __int16 v75; 
  const char *v76; 
  float *v77; 
  const Weapon *v78; 
  __int64 v79; 
  const vec4_t *v80; 
  int v81; 
  unsigned int v82; 
  unsigned int v83; 
  const char *WeaponName; 
  const char *v85; 
  char *fmt; 
  bool v90; 
  int v91; 
  gentity_s *v92; 
  vec3_t forward; 
  vec3_t outOrigin; 
  vec3_t origin; 
  vec3_t end; 
  WorldUpReferenceFrame refFrame; 
  trace_t results; 
  char output[1024]; 

  v4 = DVARBOOL_entityLeakDisplay;
  if ( !DVARBOOL_entityLeakDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "entityLeakDisplay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  enabled = v4->current.enabled;
  v6 = DVARINT_bg_entinfo;
  v90 = enabled;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer || enabled;
  v8 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer == 4 )
    goto LABEL_20;
  v9 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer == 5 )
LABEL_20:
    v10 = 1;
  else
    v10 = 0;
  if ( !v7 || !G_IsEntityInUse(0) )
    return;
  if ( v10 )
    goto LABEL_24;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+580h+outOrigin], xmm0
    vmovss  dword ptr [rsp+580h+outOrigin+4], xmm0
    vmovss  dword ptr [rsp+580h+outOrigin+8], xmm0
  }
  client = g_entities->client;
  if ( client )
  {
    p_eFlags = &client->ps.eFlags;
    if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
      }
      else
      {
        _RBX = g_entities->client;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+30h]
          vmovss  dword ptr [rsp+580h+outOrigin], xmm0
          vmovss  xmm1, dword ptr [rbx+34h]
          vmovss  dword ptr [rsp+580h+outOrigin+4], xmm1
          vmovss  xmm0, dword ptr [rbx+38h]
          vmovss  dword ptr [rsp+580h+outOrigin+8], xmm0
        }
        Handler = GHandler::getHandler();
        WorldUpReferenceFrame::WorldUpReferenceFrame(&refFrame, &_RBX->ps, Handler);
        v19 = GHandler::getHandler();
        BG_GameInterface_AddContributionToPlayerEye(&_RBX->ps, v19, &outOrigin, &refFrame);
      }
    }
  }
  if ( enabled || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") <= 2 )
  {
    v35 = g_entities;
    v36 = 0;
    v92 = g_entities;
    v91 = 0;
    if ( level.num_entities <= 0 )
      return;
    __asm { vmovaps [rsp+580h+var_40], xmm7 }
    _R13 = &g_entities->r.currentOrigin.v[2];
    __asm
    {
      vmovss  xmm7, cs:__real@42c80000
      vmovaps [rsp+580h+var_50], xmm8
      vmovss  xmm8, cs:__real@48800000
    }
    *(_QWORD *)origin.v = &g_entities->r.currentOrigin.z;
    __asm { vmovaps [rsp+580h+var_30], xmm6 }
    while ( 1 )
    {
      if ( !G_IsEntityInUse(v36) )
        goto LABEL_110;
      v40 = *((_WORD *)_R13 - 152);
      if ( v40 >= 29 )
        goto LABEL_110;
      if ( enabled )
      {
        if ( v40 == 1 || ((_DWORD)_R13[26] & 0x40000000) != 0 )
          goto LABEL_110;
      }
      else if ( !*((_BYTE *)_R13 - 64) )
      {
        goto LABEL_110;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+580h+outOrigin]
        vsubss  xmm3, xmm0, dword ptr [r13-8]
        vmovss  xmm1, dword ptr [rsp+580h+outOrigin+4]
        vmovss  xmm0, dword ptr [rsp+580h+outOrigin+8]
        vsubss  xmm2, xmm1, dword ptr [r13-4]
        vsubss  xmm4, xmm0, dword ptr [r13+0]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm6, xmm3, xmm0
      }
      if ( enabled )
        goto LABEL_65;
      _RBX = DVARFLT_g_entinfo_maxdist;
      if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm6, xmm1
      }
      if ( v55 | v56 )
      {
LABEL_65:
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") != 2 )
          goto LABEL_67;
        if ( (unsigned __int16)(*((_WORD *)_R13 - 152) - 1) <= 1u )
        {
          __asm { vmovss  xmm2, dword ptr [r13+8]; yaw }
          G_DebugBox((const vec3_t *)(_R13 - 2), (const Bounds *)(_R13 - 14), *(float *)&_XMM2, &colorMagenta, 1, 0);
LABEL_67:
          __asm
          {
            vmovss  xmm0, dword ptr [r13-8]
            vmovss  xmm1, dword ptr [r13-4]
            vmovss  dword ptr [rsp+580h+forward], xmm0
            vmovss  xmm0, dword ptr [r13+0]
            vmovss  dword ptr [rsp+580h+forward+8], xmm0
            vmovss  dword ptr [rsp+580h+forward+4], xmm1
          }
          IsAgentScripted = SV_IsAgentScripted(v35);
          if ( IsAgentScripted )
          {
            __asm
            {
              vaddss  xmm1, xmm7, dword ptr [rsp+580h+forward+8]
              vmovss  dword ptr [rsp+580h+forward+8], xmm1
            }
          }
          v63 = &colorDefault;
          if ( *((_WORD *)_R13 - 152) == 6 )
          {
            v64 = *((_DWORD *)_R13 + 17);
            if ( v64 == scr_const.script_model )
            {
              v63 = &colorScriptModel;
            }
            else
            {
              v63 = &colorScriptBrushModel;
              if ( v64 != scr_const.script_brushmodel )
                v63 = &colorScriptOrigin;
            }
          }
          if ( (*((_BYTE *)_R13 - 62) & 1) != 0 )
          {
LABEL_78:
            v63 = &colorNoClients;
          }
          else
          {
            v65 = 0;
            v66 = _R13 + 201;
            while ( *v66 == -1 )
            {
              ++v65;
              ++v66;
              if ( v65 >= 7 )
                goto LABEL_78;
            }
          }
          v67 = &colorRed;
          if ( !enabled )
            v67 = v63;
          EntityTypeName = G_GetEntityTypeName(v35);
          v69 = j_va("%i %s", (unsigned int)v36, EntityTypeName);
          G_Utils_DisplayInfoLine(&forward, v69, v67);
          __asm { vcomiss xmm6, xmm8 }
          if ( v55 | v56 )
          {
            if ( IsAgentScripted )
            {
              G_MainMP_ShowAgentsInfo(v35, &forward, v67);
            }
            else
            {
              G_Utils_DisplayEntityInfo(v35, v67, enabled, &forward);
              if ( (*((_BYTE *)_R13 - 62) & 1) != 0 )
              {
                v70 = "hidden from all clients (SVF_NOCLIENT)";
              }
              else
              {
                v71 = _R13 + 201;
                v72 = 0;
                v73 = _R13 + 201;
                while ( !*v73 )
                {
                  ++v72;
                  ++v73;
                  if ( v72 >= 7 )
                    goto LABEL_96;
                }
                v74 = 0;
                while ( *v71 == -1 )
                {
                  ++v74;
                  ++v71;
                  if ( v74 >= 7 )
                  {
                    v70 = "hidden from all clients (clientMask)";
                    goto LABEL_95;
                  }
                }
                v70 = "hidden from some clients";
              }
LABEL_95:
              G_Utils_DisplayInfoLine(&forward, v70, v67);
LABEL_96:
              if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)_R13 - 75, (EntityStateFlagsMP)30) )
                G_Utils_DisplayInfoLine(&forward, "willNeverChange - not archived", v67);
              v75 = *((_WORD *)_R13 - 153);
              if ( v75 && v75 < 0x7FEu )
              {
                v76 = j_va("ground %i", (unsigned int)(__int16)v75);
                G_Utils_DisplayInfoLine(&forward, v76, v67);
              }
              if ( *((_WORD *)_R13 - 152) == 3 )
              {
                v77 = _R13 + 34;
                if ( _R13 == (float *)-136i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2520, ASSERT_TYPE_ASSERT, "(ent->c.item)", (const char *)&queryFormat, "ent->c.item") )
                  __debugbreak();
                v78 = (const Weapon *)(_R13 + 37);
                v79 = 2i64;
                v80 = v67;
                do
                {
                  if ( *((_WORD *)v77 + 6) )
                  {
                    v81 = *(_DWORD *)v77;
                    v82 = *((_DWORD *)v77 + 2);
                    v83 = *((_DWORD *)v77 + 1);
                    WeaponName = BG_GetWeaponName(v78, output, 0x400u);
                    LODWORD(fmt) = v81;
                    v85 = j_va("%s (%i, %i + %i)", WeaponName, v83, v82, fmt);
                    G_Utils_DisplayInfoLine(&forward, v85, v80);
                  }
                  v78 = (const Weapon *)((char *)v78 + 80);
                  v77 += 20;
                  --v79;
                }
                while ( v79 );
                _R13 = *(float **)origin.v;
                v35 = v92;
                v36 = v91;
                enabled = v90;
              }
            }
          }
        }
      }
LABEL_110:
      ++v36;
      ++v35;
      v91 = v36;
      _R13 += 364;
      v92 = v35;
      *(_QWORD *)origin.v = _R13;
      if ( v36 >= level.num_entities )
      {
        __asm
        {
          vmovaps xmm8, [rsp+580h+var_50]
          vmovaps xmm7, [rsp+580h+var_40]
          vmovaps xmm6, [rsp+580h+var_30]
        }
        return;
      }
    }
  }
  AngleVectors(&g_entities->client->ps.viewangles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm3, cs:__real@467a0000
    vmulss  xmm1, xmm3, dword ptr [rsp+580h+forward]
    vaddss  xmm2, xmm1, dword ptr [rsp+580h+outOrigin]
    vmulss  xmm1, xmm3, dword ptr [rsp+580h+forward+4]
    vmovss  dword ptr [rbp+480h+end], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+580h+outOrigin+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+580h+forward+8]
    vmovss  dword ptr [rbp+480h+end+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+580h+outOrigin+8]
    vmovss  dword ptr [rbp+480h+end+8], xmm2
  }
  G_Main_TraceCapsule(&results, &outOrigin, &end, &bounds_origin, g_entities->client->ps.clientNum, 33570816);
  EntityHitId = Trace_GetEntityHitId(&results);
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 6 )
  {
    if ( EntityHitId != 2047 && BG_IsCharacterEntity(&g_entities[EntityHitId].s) )
    {
      Dvar_SetInt_Internal(DVARINT_animscript_debug, EntityHitId);
      return;
    }
LABEL_24:
    Dvar_SetInt_Internal(DVARINT_animscript_debug, -1);
    return;
  }
  Dvar_SetInt_Internal(DVARINT_animscript_debug, -1);
  if ( EntityHitId != 2047 )
  {
    v28 = &g_entities[EntityHitId];
    if ( SV_IsAgentScripted(v28) || BG_IsCharacterEntity(&v28->s) )
    {
      Dvar_SetInt_Internal(DVARINT_agent_debugEntIndex, EntityHitId);
      lastEntTime = level.time;
    }
  }
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_agent_debugEntIndex, "agent_debugEntIndex") != -1 )
  {
    if ( lastEntTime + 30000 <= level.time )
    {
      Dvar_SetInt_Internal(DVARINT_agent_debugEntIndex, -1);
    }
    else
    {
      v29 = g_entities;
      _RCX = &v29[Dvar_GetInt_Internal_DebugName(DVARINT_agent_debugEntIndex, "agent_debugEntIndex")];
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vmovss  dword ptr [rsp+580h+origin], xmm0
        vmovss  xmm1, dword ptr [rcx+134h]
        vmovss  dword ptr [rsp+580h+origin+4], xmm1
        vmovss  xmm0, dword ptr [rcx+138h]
        vaddss  xmm2, xmm0, cs:__real@42c80000
        vmovss  dword ptr [rsp+580h+origin+8], xmm2
      }
      G_MainMP_ShowAgentsInfo(_RCX, &origin, &colorDefault);
    }
  }
}

/*
==============
G_MainMP_ShutdownGame
==============
*/
void G_MainMP_ShutdownGame(bool fullClear)
{
  scrContext_t *v2; 
  int i; 
  GPlayer_Asm *v4; 
  __int64 v5; 
  int maxclients; 
  int j; 
  __int64 v8; 
  XAnimTree *v9; 
  __int64 v10; 
  XAnimTree *v11; 
  GameScriptDataMP *GameScriptDataMP; 
  unsigned int v13; 
  XAnimTree **p_tree; 
  unsigned int v15; 
  XAnimTree **v16; 

  Com_Printf(15, "==== ShutdownGame (%d) ====\n", fullClear);
  if ( level.logFile.handle.handle != -1 )
  {
    G_MainMP_LogPrintf("ShutdownGame:\n");
    G_MainMP_LogPrintf("------------------------------------------------------------\n");
    FS_FCloseFile(level.logFile);
    level.logFile.handle.handle = -1i64;
  }
  Cmd_UnregisterAllNotifications();
  Path_PreShutdown();
  G_MainMP_FreeEntities();
  G_HudElem_DestroyAll();
  BG_WorldStreaming_Shutdown();
  G_WeaponStreaming_Shutdown();
  G_CharacterStreaming_Shutdown();
  AIAgentInterface::ShutdownAgents();
  SV_BotShutdownBotAI();
  SV_AgentShutdownAgentAI();
  Path_Shutdown(0);
  G_Vehicle_ShutdownSystem();
  G_CoverWall_ShutdownSystem();
  ScriptableSv_Shutdown();
  v2 = ScriptContext_Server();
  GScr_Weapon_Shutdown(v2, level.savepersist == 0);
  for ( i = 1; i >= 0; --i )
  {
    PatchCollision_ShutdownCollision((const Physics_WorldId)i);
    StaticModels_ShutdownCollision((const Physics_WorldId)i);
    WorldCollision_ShutdownCollision((const Physics_WorldId)i);
  }
  G_Utils_PhysicsCheckPostAssetChangeEmpty();
  Physics_DestroyServerWorlds();
  G_ShutdownGlass();
  G_MotionWarp_Reset();
  GPlayerEventsMP::UnregisterEvents();
  GClienThinkTaskManager::ClearTasks(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  GClienThinkTaskManager::ClearTaskFlags(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  if ( fullClear )
    AnalyticsStreamer_EndStream(ANALYTICS_STREAMER_LOG_FILE);
  AICommonInterface::ClearThreatBiasGroups();
  Scr_SetString(&level.cachedTagMat.name, (scr_string_t)0);
  Scr_ShutdownSystem(v2, 1u, level.savepersist == 0, 0);
  if ( level.savepersist )
    SV_ClientMP_MarkClientScriptPers();
  else
    SV_ClientMP_FreeScriptPers();
  Scr_FreeObjects(v2);
  if ( fullClear )
  {
    AI_BT_Shutdown();
    Ai_Asm::Shutdown();
    if ( PlayerASM_IsEnabled() )
    {
      v4 = GPlayer_Asm::Singleton();
      BgPlayer_Asm::Shutdown(v4, 1);
    }
    ASM_ReleaseAllHistoryObjects();
    v5 = *(_QWORD *)&GStatic::ms_gameStatics;
    if ( *(_QWORD *)&GStatic::ms_gameStatics )
    {
      maxclients = level.maxclients;
      for ( j = 0; j < level.maxclients; ++j )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 224i64))(v5, (unsigned int)j);
        v9 = *(XAnimTree **)(v8 + 2040);
        if ( v9 )
        {
          XAnimFreeTree(v9, NULL);
          *(_QWORD *)(v8 + 2040) = 0i64;
        }
        maxclients = level.maxclients;
      }
      while ( 1 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( maxclients >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
          break;
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 224i64))(v5, (unsigned int)maxclients);
        v11 = *(XAnimTree **)(v10 + 2040);
        if ( v11 )
        {
          Com_XAnimFreeSmallTree(v11);
          *(_QWORD *)(v10 + 2040) = 0i64;
        }
        ++maxclients;
      }
    }
    if ( GameScriptData::ms_gScriptData )
    {
      GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
      v13 = 0;
      p_tree = &GameScriptDataMP->playerCorpseInfo[0].tree;
      do
      {
        if ( *p_tree )
        {
          XAnimFreeTree(*p_tree, NULL);
          *p_tree = NULL;
        }
        ++v13;
        p_tree += 1856;
      }
      while ( v13 < 8 );
      v15 = 0;
      v16 = &GameScriptDataMP->agentCorpseInfo[0].tree;
      do
      {
        if ( *v16 )
        {
          Com_XAnimFreeSmallTree(*v16);
          *v16 = NULL;
        }
        ++v15;
        v16 += 1856;
      }
      while ( v15 < 8 );
    }
    BG_ShutDownTurretAnims(1);
    G_Main_ClearLowHunk();
    Com_FreeWeaponInfoMemory(1);
  }
  if ( level.openScriptIOFileBuffers[0] )
    Mem_Virtual_Free(level.openScriptIOFileBuffers[0]);
  level.openScriptIOFileBuffers[0] = NULL;
  if ( level.openScriptIOFileHandles[0].handle.handle != -1 )
    FS_FCloseFile(level.openScriptIOFileHandles[0]);
  level.openScriptIOFileHandles[0].handle.handle = -1i64;
  G_ClientFields_Shutdown();
  EntHandle::Shutdown();
  if ( fullClear )
    G_MainMP_DeregisterDvars();
  G_Main_ShutdownCommon(fullClear, fullClear);
}

/*
==============
G_MainMP_ShutdownGameMemory
==============
*/
void G_MainMP_ShutdownGameMemory(void)
{
  GPredictedEntitySystem *v0; 
  char v1; 
  GScript *v2; 
  GScript *v3; 
  char v4; 
  GSaveMemory *v5; 
  GSaveMemory *v6; 
  char v7; 
  GSave *v8; 
  GSave *v9; 
  char v10; 
  GVehicles *v11; 
  char v12; 
  GWeapon *v13; 
  GWeapon *v14; 
  char v15; 
  GUtils *v16; 
  GUtils *v17; 
  char v18; 
  GMissile *v19; 
  GMissile *v20; 
  char v21; 
  GBallistics *v22; 
  GBallistics *v23; 
  char v24; 
  GItems *v25; 
  GItems *v26; 
  char v27; 
  GCombat *v28; 
  GCombat *v29; 
  char v30; 
  GClientSystem *v31; 
  char v32; 
  GBullet *v33; 
  GBullet *v34; 
  char v35; 
  GConfigStrings *v36; 
  GConfigStrings *v37; 
  GMovingPlatforms *v38; 
  char v39; 
  int v40; 
  void **v41; 
  char v42; 
  GAntiLag *v43; 
  GAntiLag *v44; 
  char v45; 
  GameScriptData *v46; 
  char v47; 
  void (__fastcall ***v48)(_QWORD, _QWORD); 
  __int64 v49; 
  char v50; 
  GTargetAssist *v51; 
  GTargetAssist *v52; 
  char v53; 
  GPredictedEntitySystem *v54; 

  G_PlayerSpawnPoints_FreeMemory();
  Com_Challenges_ShutdownMemory();
  G_PlayerUse_Free();
  v0 = NULL;
  s_agents = NULL;
  s_clientOmnvars = NULL;
  s_agentAllocatedCount = 0;
  s_clientOmnvarAllocatedCount = 0;
  G_Main_FreeEntities();
  G_GameInterface_OnShutdownGameMemory();
  Nav_ClearNavPowerMemory();
  v1 = GScript::ms_allocatedType;
  if ( (_BYTE)GScript::ms_allocatedType )
  {
    if ( (_BYTE)GScript::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 217, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v1 = GScript::ms_allocatedType;
  }
  if ( v1 != 2 )
  {
    v3 = GScript::ms_gScriptSystem;
    goto LABEL_13;
  }
LABEL_7:
  v2 = GScript::ms_gScriptSystem;
  if ( !GScript::ms_gScriptSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 221, ASSERT_TYPE_ASSERT, "(ms_gScriptSystem != 0)", "%s\n\tGScript::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gScriptSystem != NULL") )
      __debugbreak();
    v2 = GScript::ms_gScriptSystem;
  }
  ((void (__fastcall *)(GScript *, _QWORD))v2->~GScript)(v2, 0i64);
  DebugWipe(GScript::ms_gScriptSystem, 8ui64);
  v3 = NULL;
  GScript::ms_gScriptSystem = NULL;
LABEL_13:
  LOBYTE(GScript::ms_allocatedType) = 0;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 233, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem == 0 )", (const char *)&queryFormat, "ms_gScriptSystem == NULL") )
    __debugbreak();
  v4 = GSaveMemory::ms_allocatedType;
  if ( (_BYTE)GSaveMemory::ms_allocatedType )
  {
    if ( (_BYTE)GSaveMemory::ms_allocatedType == HALF_HALF )
      goto LABEL_22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 250, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v4 = GSaveMemory::ms_allocatedType;
  }
  if ( v4 != 2 )
  {
    v6 = GSaveMemory::ms_gSaveMemory;
    goto LABEL_28;
  }
LABEL_22:
  v5 = GSaveMemory::ms_gSaveMemory;
  if ( !GSaveMemory::ms_gSaveMemory )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 254, ASSERT_TYPE_ASSERT, "(ms_gSaveMemory != 0)", "%s\n\tGSaveMemory::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gSaveMemory != NULL") )
      __debugbreak();
    v5 = GSaveMemory::ms_gSaveMemory;
  }
  ((void (__fastcall *)(GSaveMemory *, _QWORD))v5->~GSaveMemory)(v5, 0i64);
  DebugWipe(GSaveMemory::ms_gSaveMemory, 0x200500ui64);
  v6 = NULL;
  GSaveMemory::ms_gSaveMemory = NULL;
LABEL_28:
  LOBYTE(GSaveMemory::ms_allocatedType) = 0;
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 266, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory == 0 )", (const char *)&queryFormat, "ms_gSaveMemory == NULL") )
    __debugbreak();
  v7 = BYTE2(GameScriptData::ms_allocatedType);
  if ( BYTE2(GameScriptData::ms_allocatedType) )
  {
    if ( BYTE2(GameScriptData::ms_allocatedType) == 2 )
      goto LABEL_37;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 120, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v7 = BYTE2(GameScriptData::ms_allocatedType);
  }
  if ( v7 != 2 )
  {
    v9 = GSave::ms_gSave;
    goto LABEL_43;
  }
LABEL_37:
  v8 = GSave::ms_gSave;
  if ( !GSave::ms_gSave )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", (_DWORD)GSave::ms_gSave + 124, ASSERT_TYPE_ASSERT, "(ms_gSave != 0)", "%s\n\tGSave::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gSave != NULL") )
      __debugbreak();
    v8 = GSave::ms_gSave;
  }
  ((void (__fastcall *)(GSave *, _QWORD))v8->~GSave)(v8, 0i64);
  DebugWipe(GSave::ms_gSave, 8ui64);
  v9 = NULL;
  GSave::ms_gSave = NULL;
LABEL_43:
  GSave::ms_weaponNameSize = 0;
  BYTE2(GameScriptData::ms_allocatedType) = 0;
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 140, ASSERT_TYPE_ASSERT, "( ms_gSave == 0 )", (const char *)&queryFormat, "ms_gSave == NULL") )
    __debugbreak();
  v10 = GVehicles::ms_allocatedType;
  if ( (_BYTE)GVehicles::ms_allocatedType )
  {
    if ( (_BYTE)GVehicles::ms_allocatedType == HALF_HALF )
      goto LABEL_52;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 610, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v10 = GVehicles::ms_allocatedType;
  }
  if ( v10 != 2 )
  {
    v11 = GVehicles::ms_gVehiclesSystem;
    goto LABEL_57;
  }
LABEL_52:
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 614, ASSERT_TYPE_ASSERT, "(ms_gVehiclesSystem != 0)", "%s\n\tGVehicles::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gVehiclesSystem != NULL") )
    __debugbreak();
  GVehicles::PhysicsShutdown(GVehicles::ms_gVehiclesSystem);
  ((void (__fastcall *)(GVehicles *, _QWORD))GVehicles::ms_gVehiclesSystem->~GVehicles)(GVehicles::ms_gVehiclesSystem, 0i64);
  DebugWipe(GVehicles::ms_gVehiclesSystem, 0x109638ui64);
  v11 = NULL;
  GVehicles::ms_gVehiclesSystem = NULL;
LABEL_57:
  LOBYTE(GVehicles::ms_allocatedType) = 0;
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 627, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem == 0 )", (const char *)&queryFormat, "ms_gVehiclesSystem == NULL") )
    __debugbreak();
  GWeaponMap::FreeMemory();
  v12 = GWeapon::ms_allocatedType;
  if ( (_BYTE)GWeapon::ms_allocatedType )
  {
    if ( (_BYTE)GWeapon::ms_allocatedType == HALF_HALF )
      goto LABEL_66;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 108, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v12 = GWeapon::ms_allocatedType;
  }
  if ( v12 != 2 )
  {
    v14 = GWeapon::ms_gWeaponSystem;
    goto LABEL_72;
  }
LABEL_66:
  v13 = GWeapon::ms_gWeaponSystem;
  if ( !GWeapon::ms_gWeaponSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", (_DWORD)GWeapon::ms_gWeaponSystem + 112, ASSERT_TYPE_ASSERT, "(ms_gWeaponSystem != 0)", "%s\n\tGWeapon::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gWeaponSystem != NULL") )
      __debugbreak();
    v13 = GWeapon::ms_gWeaponSystem;
  }
  ((void (__fastcall *)(GWeapon *, _QWORD))v13->~GWeapon)(v13, 0i64);
  DebugWipe(GWeapon::ms_gWeaponSystem, 8ui64);
  v14 = NULL;
  GWeapon::ms_gWeaponSystem = NULL;
LABEL_72:
  LOBYTE(GWeapon::ms_allocatedType) = 0;
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 124, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem == 0 )", (const char *)&queryFormat, "ms_gWeaponSystem == NULL") )
    __debugbreak();
  v15 = GUtils::ms_allocatedType;
  if ( (_BYTE)GUtils::ms_allocatedType )
  {
    if ( (_BYTE)GUtils::ms_allocatedType == HALF_HALF )
      goto LABEL_81;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 146, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v15 = GUtils::ms_allocatedType;
  }
  if ( v15 != 2 )
  {
    v17 = GUtils::ms_gUtils;
    goto LABEL_87;
  }
LABEL_81:
  v16 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 150, ASSERT_TYPE_ASSERT, "(ms_gUtils != 0)", "%s\n\tGUtils::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gUtils != NULL") )
      __debugbreak();
    v16 = GUtils::ms_gUtils;
  }
  ((void (__fastcall *)(GUtils *, _QWORD))v16->~GUtils)(v16, 0i64);
  DebugWipe(GUtils::ms_gUtils, 0x10ui64);
  v17 = NULL;
  GUtils::ms_gUtils = NULL;
LABEL_87:
  LOBYTE(GUtils::ms_allocatedType) = 0;
  if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 162, ASSERT_TYPE_ASSERT, "( ms_gUtils == 0 )", (const char *)&queryFormat, "ms_gUtils == NULL") )
    __debugbreak();
  v18 = GMissile::ms_allocatedType;
  if ( (_BYTE)GMissile::ms_allocatedType )
  {
    if ( (_BYTE)GMissile::ms_allocatedType == HALF_HALF )
      goto LABEL_96;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 293, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v18 = GMissile::ms_allocatedType;
  }
  if ( v18 != 2 )
  {
    v20 = GMissile::ms_gMissileSystem;
    goto LABEL_102;
  }
LABEL_96:
  v19 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 297, ASSERT_TYPE_ASSERT, "(ms_gMissileSystem != 0)", "%s\n\tGMissile::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gMissileSystem != NULL") )
      __debugbreak();
    v19 = GMissile::ms_gMissileSystem;
  }
  ((void (__fastcall *)(GMissile *, _QWORD))v19->~BgMissile)(v19, 0i64);
  DebugWipe(GMissile::ms_gMissileSystem, 0x18ui64);
  v20 = NULL;
  GMissile::ms_gMissileSystem = NULL;
LABEL_102:
  LOBYTE(GMissile::ms_allocatedType) = 0;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 309, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem == 0 )", (const char *)&queryFormat, "ms_gMissileSystem == NULL") )
    __debugbreak();
  v21 = GBallistics::ms_allocatedType;
  if ( (_BYTE)GBallistics::ms_allocatedType )
  {
    if ( (_BYTE)GBallistics::ms_allocatedType == HALF_HALF )
      goto LABEL_111;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 118, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v21 = GBallistics::ms_allocatedType;
  }
  if ( v21 != 2 )
  {
    v23 = GBallistics::ms_gBallisticsSystem;
    goto LABEL_117;
  }
LABEL_111:
  v22 = GBallistics::ms_gBallisticsSystem;
  if ( !GBallistics::ms_gBallisticsSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", (_DWORD)GBallistics::ms_gBallisticsSystem + 122, ASSERT_TYPE_ASSERT, "(ms_gBallisticsSystem != 0)", "%s\n\tGBallistics::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gBallisticsSystem != NULL") )
      __debugbreak();
    v22 = GBallistics::ms_gBallisticsSystem;
  }
  ((void (__fastcall *)(GBallistics *, _QWORD))v22->~BgBallistics<GBallisticInstance>)(v22, 0i64);
  DebugWipe(GBallistics::ms_gBallisticsSystem, 0x29060ui64);
  v23 = NULL;
  GBallistics::ms_gBallisticsSystem = NULL;
LABEL_117:
  LOBYTE(GBallistics::ms_allocatedType) = 0;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 134, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem == 0 )", (const char *)&queryFormat, "ms_gBallisticsSystem == NULL") )
    __debugbreak();
  v24 = GItems::ms_allocatedType;
  if ( (_BYTE)GItems::ms_allocatedType )
  {
    if ( (_BYTE)GItems::ms_allocatedType == HALF_HALF )
      goto LABEL_126;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 116, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v24 = GItems::ms_allocatedType;
  }
  if ( v24 != 2 )
  {
    v26 = GItems::ms_gItemsSystem;
    goto LABEL_132;
  }
LABEL_126:
  v25 = GItems::ms_gItemsSystem;
  if ( !GItems::ms_gItemsSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", (_DWORD)GItems::ms_gItemsSystem + 120, ASSERT_TYPE_ASSERT, "(ms_gItemsSystem != 0)", "%s\n\tGItems::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gItemsSystem != NULL") )
      __debugbreak();
    v25 = GItems::ms_gItemsSystem;
  }
  ((void (__fastcall *)(GItems *, _QWORD))v25->~GItems)(v25, 0i64);
  DebugWipe(GItems::ms_gItemsSystem, 0x978ui64);
  v26 = NULL;
  GItems::ms_gItemsSystem = NULL;
LABEL_132:
  LOBYTE(GItems::ms_allocatedType) = 0;
  if ( v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 132, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem == 0 )", (const char *)&queryFormat, "ms_gItemsSystem == NULL") )
    __debugbreak();
  v27 = GCombat::ms_allocatedType;
  if ( (_BYTE)GCombat::ms_allocatedType )
  {
    if ( (_BYTE)GCombat::ms_allocatedType == HALF_HALF )
      goto LABEL_141;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 211, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v27 = GCombat::ms_allocatedType;
  }
  if ( v27 != 2 )
  {
    v29 = GCombat::ms_gCombatSystem;
    goto LABEL_147;
  }
LABEL_141:
  v28 = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 215, ASSERT_TYPE_ASSERT, "(ms_gCombatSystem != 0)", "%s\n\tGCombat::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gCombatSystem != NULL") )
      __debugbreak();
    v28 = GCombat::ms_gCombatSystem;
  }
  ((void (__fastcall *)(GCombat *, _QWORD))v28->~GCombat)(v28, 0i64);
  DebugWipe(GCombat::ms_gCombatSystem, 0x107F8ui64);
  v29 = NULL;
  GCombat::ms_gCombatSystem = NULL;
LABEL_147:
  LOBYTE(GCombat::ms_allocatedType) = 0;
  if ( v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 227, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem == 0 )", (const char *)&queryFormat, "ms_gCombatSystem == NULL") )
    __debugbreak();
  GClienThinkTaskManager::FreeMemory(&GClienThinkTaskManager::ms_clientTaskGlobalManager);
  v30 = GClientSystem::ms_allocatedType;
  if ( (_BYTE)GClientSystem::ms_allocatedType )
  {
    if ( (_BYTE)GClientSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_156;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 499, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v30 = GClientSystem::ms_allocatedType;
  }
  if ( v30 != 2 )
  {
    v31 = GClientSystem::ms_gClientSystem;
    goto LABEL_167;
  }
LABEL_156:
  if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 503, ASSERT_TYPE_ASSERT, "(ms_gClientSystem != nullptr)", "%s\n\tGClientSystem::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gClientSystem != nullptr") )
    __debugbreak();
  if ( !GClientSystem::ms_gClientSystem->m_clientsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 504, ASSERT_TYPE_ASSERT, "( ms_gClientSystem->m_clientsData != nullptr )", (const char *)&queryFormat, "ms_gClientSystem->m_clientsData != nullptr") )
    __debugbreak();
  if ( !GClientSystem::ms_gClientSystem->m_clientsDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 505, ASSERT_TYPE_ASSERT, "( ms_gClientSystem->m_clientsDataCount )", (const char *)&queryFormat, "ms_gClientSystem->m_clientsDataCount") )
    __debugbreak();
  ((void (__fastcall *)(GClientSystem *, _QWORD))GClientSystem::ms_gClientSystem->~GClientSystem)(GClientSystem::ms_gClientSystem, 0i64);
  DebugWipe(GClientSystem::ms_gClientSystem->m_clientsData, 64592i64 * GClientSystem::ms_gClientSystem->m_clientsDataCount);
  DebugWipe(GClientSystem::ms_gClientSystem, 0x18ui64);
  v31 = NULL;
  GClientSystem::ms_gClientSystem = NULL;
LABEL_167:
  LOBYTE(GClientSystem::ms_allocatedType) = 0;
  if ( v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 518, ASSERT_TYPE_ASSERT, "( ms_gClientSystem == 0 )", (const char *)&queryFormat, "ms_gClientSystem == NULL") )
    __debugbreak();
  v32 = GBullet::ms_allocatedType;
  if ( (_BYTE)GBullet::ms_allocatedType )
  {
    if ( (_BYTE)GBullet::ms_allocatedType == HALF_HALF )
      goto LABEL_176;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 222, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v32 = GBullet::ms_allocatedType;
  }
  if ( v32 != 2 )
  {
    v34 = GBullet::ms_gBulletSystem;
    goto LABEL_182;
  }
LABEL_176:
  v33 = GBullet::ms_gBulletSystem;
  if ( !GBullet::ms_gBulletSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 226, ASSERT_TYPE_ASSERT, "(ms_gBulletSystem != 0)", "%s\n\tGBullet::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gBulletSystem != NULL") )
      __debugbreak();
    v33 = GBullet::ms_gBulletSystem;
  }
  ((void (__fastcall *)(GBullet *, _QWORD))v33->~GBullet)(v33, 0i64);
  DebugWipe(GBullet::ms_gBulletSystem, 0x13C8ui64);
  v34 = NULL;
  GBullet::ms_gBulletSystem = NULL;
LABEL_182:
  LOBYTE(GBullet::ms_allocatedType) = 0;
  if ( v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 238, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem == 0 )", (const char *)&queryFormat, "ms_gBulletSystem == NULL") )
    __debugbreak();
  v35 = GConfigStrings::ms_allocatedType;
  if ( (_BYTE)GConfigStrings::ms_allocatedType )
  {
    if ( (_BYTE)GConfigStrings::ms_allocatedType == HALF_HALF )
      goto LABEL_191;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 104, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v35 = GConfigStrings::ms_allocatedType;
  }
  if ( v35 != 2 )
  {
    v37 = GConfigStrings::ms_gConfigStrings;
    goto LABEL_197;
  }
LABEL_191:
  v36 = GConfigStrings::ms_gConfigStrings;
  if ( !GConfigStrings::ms_gConfigStrings )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", (_DWORD)GConfigStrings::ms_gConfigStrings + 108, ASSERT_TYPE_ASSERT, "(ms_gConfigStrings != 0)", "%s\n\tFreeConfigStringsMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gConfigStrings != NULL") )
      __debugbreak();
    v36 = GConfigStrings::ms_gConfigStrings;
  }
  ((void (__fastcall *)(GConfigStrings *, _QWORD))v36->~GConfigStrings)(v36, 0i64);
  DebugWipe(GConfigStrings::ms_gConfigStrings, 8ui64);
  v37 = NULL;
  GConfigStrings::ms_gConfigStrings = NULL;
LABEL_197:
  LOBYTE(GConfigStrings::ms_allocatedType) = 0;
  if ( v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 120, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings == 0 )", (const char *)&queryFormat, "ms_gConfigStrings == NULL") )
    __debugbreak();
  v38 = GMovingPlatforms::ms_instance;
  if ( GMovingPlatforms::ms_instance )
  {
    if ( (_BYTE)GMovingPlatforms::ms_allocatedType != HALF_HALF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 241, ASSERT_TYPE_ASSERT, "( !ms_instance || ms_instance->ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "!ms_instance || ms_instance->ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
        __debugbreak();
      v38 = GMovingPlatforms::ms_instance;
    }
    if ( v38 )
    {
      ((void (__fastcall *)(GMovingPlatforms *, _QWORD))v38->~BGMovingPlatforms)(v38, 0i64);
      DebugWipe(GMovingPlatforms::ms_instance, 0x5550ui64);
      GMovingPlatforms::ms_instance = NULL;
    }
  }
  v39 = GTurret::ms_allocatedType;
  if ( !(_BYTE)GTurret::ms_allocatedType )
  {
LABEL_212:
    if ( v39 != 2 )
      goto LABEL_218;
    goto LABEL_213;
  }
  if ( (_BYTE)GTurret::ms_allocatedType != HALF_HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 268, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v39 = GTurret::ms_allocatedType;
    goto LABEL_212;
  }
LABEL_213:
  if ( !GTurret::ms_turretArray[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 272, ASSERT_TYPE_ASSERT, "(ms_turretArray[0] != 0)", "%s\n\tGTurret::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_turretArray[0] != NULL") )
    __debugbreak();
  v40 = 127;
  v41 = (void **)&GTurret::ms_turretArray[127];
  do
  {
    (**(void (__fastcall ***)(void *, _QWORD))*v41)(*v41, 0i64);
    DebugWipe(*v41, 0x100ui64);
    --v40;
    *v41-- = NULL;
  }
  while ( v40 >= 0 );
LABEL_218:
  LOBYTE(GTurret::ms_allocatedType) = 0;
  if ( GTurret::ms_turretArray[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 288, ASSERT_TYPE_ASSERT, "( ms_turretArray[0] == 0 )", (const char *)&queryFormat, "ms_turretArray[0] == NULL") )
    __debugbreak();
  v42 = BYTE1(GameScriptData::ms_allocatedType);
  if ( BYTE1(GameScriptData::ms_allocatedType) )
  {
    if ( BYTE1(GameScriptData::ms_allocatedType) == 2 )
      goto LABEL_227;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 242, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v42 = BYTE1(GameScriptData::ms_allocatedType);
  }
  if ( v42 != 2 )
  {
    v44 = GAntiLag::ms_gAntiLagData;
    goto LABEL_233;
  }
LABEL_227:
  v43 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 246, ASSERT_TYPE_ASSERT, "(ms_gAntiLagData != 0)", "%s\n\tFreeAntiLagMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gAntiLagData != NULL") )
      __debugbreak();
    v43 = GAntiLag::ms_gAntiLagData;
  }
  ((void (__fastcall *)(GAntiLag *, _QWORD))v43->~BgAntiLag)(v43, 0i64);
  DebugWipe(GAntiLag::ms_gAntiLagData, 0x433078ui64);
  v44 = NULL;
  GAntiLag::ms_gAntiLagData = NULL;
LABEL_233:
  BYTE1(GameScriptData::ms_allocatedType) = 0;
  if ( v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 258, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData == 0 )", (const char *)&queryFormat, "ms_gAntiLagData == NULL") )
    __debugbreak();
  v45 = GameScriptData::ms_allocatedType;
  if ( (_BYTE)GameScriptData::ms_allocatedType )
  {
    if ( (_BYTE)GameScriptData::ms_allocatedType == HALF_HALF )
      goto LABEL_242;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 118, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v45 = GameScriptData::ms_allocatedType;
  }
  if ( v45 != 2 )
  {
    v46 = GameScriptData::ms_gScriptData;
    goto LABEL_247;
  }
LABEL_242:
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 122, ASSERT_TYPE_ASSERT, "(ms_gScriptData != 0)", "%s\n\tFreeGameScriptDataMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gScriptData != NULL") )
    __debugbreak();
  DebugWipe(GameScriptData::ms_gScriptData, 0x3A0B8ui64);
  v46 = NULL;
  GameScriptData::ms_gScriptData = NULL;
LABEL_247:
  LOBYTE(GameScriptData::ms_allocatedType) = 0;
  if ( v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 134, ASSERT_TYPE_ASSERT, "( ms_gScriptData == 0 )", (const char *)&queryFormat, "ms_gScriptData == NULL") )
    __debugbreak();
  v47 = GStatic::ms_allocatedType;
  if ( (_BYTE)GStatic::ms_allocatedType )
  {
    if ( (_BYTE)GStatic::ms_allocatedType == HALF_HALF )
      goto LABEL_256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 78, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v47 = GStatic::ms_allocatedType;
  }
  if ( v47 != 2 )
  {
    v49 = *(_QWORD *)&GStatic::ms_gameStatics;
    goto LABEL_262;
  }
LABEL_256:
  v48 = *(void (__fastcall ****)(_QWORD, _QWORD))&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", GStatic::ms_gameStatics + 82, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tGStatic::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gameStatics != NULL") )
      __debugbreak();
    v48 = *(void (__fastcall ****)(_QWORD, _QWORD))&GStatic::ms_gameStatics;
  }
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
  (**v48)(v48, 0i64);
  DebugWipe(*(void **)&GStatic::ms_gameStatics, 0x4C80ui64);
  v49 = 0i64;
  *(_QWORD *)&GStatic::ms_gameStatics = 0i64;
LABEL_262:
  LOBYTE(GStatic::ms_allocatedType) = 0;
  if ( v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 97, ASSERT_TYPE_ASSERT, "( ms_gameStatics == 0 )", (const char *)&queryFormat, "ms_gameStatics == NULL") )
    __debugbreak();
  v50 = GTargetAssist::ms_allocatedType;
  if ( (_BYTE)GTargetAssist::ms_allocatedType )
  {
    if ( (_BYTE)GTargetAssist::ms_allocatedType == HALF_HALF )
      goto LABEL_271;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 95, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v50 = GTargetAssist::ms_allocatedType;
  }
  if ( v50 != 2 )
  {
    v52 = GTargetAssist::ms_instance;
    goto LABEL_277;
  }
LABEL_271:
  v51 = GTargetAssist::ms_instance;
  if ( !GTargetAssist::ms_instance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", (_DWORD)GTargetAssist::ms_instance + 99, ASSERT_TYPE_ASSERT, "(ms_instance != 0)", "%s\n\tGTargetAssist::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_instance != NULL") )
      __debugbreak();
    v51 = GTargetAssist::ms_instance;
  }
  ((void (__fastcall *)(GTargetAssist *, _QWORD))v51->~BgTargetAssist)(v51, 0i64);
  DebugWipe(GTargetAssist::ms_instance, 0x970ui64);
  v52 = NULL;
  GTargetAssist::ms_instance = NULL;
LABEL_277:
  LOBYTE(GTargetAssist::ms_allocatedType) = 0;
  if ( v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 111, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v53 = GPredictedEntitySystem::ms_allocatedType;
  if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType )
  {
    if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType == HALF_HALF )
      goto LABEL_286;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 73, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v53 = GPredictedEntitySystem::ms_allocatedType;
  }
  if ( v53 != 2 )
  {
    v0 = GPredictedEntitySystem::ms_gSystem;
    goto LABEL_292;
  }
LABEL_286:
  v54 = GPredictedEntitySystem::ms_gSystem;
  if ( !GPredictedEntitySystem::ms_gSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", (_DWORD)GPredictedEntitySystem::ms_gSystem + 77, ASSERT_TYPE_ASSERT, "(ms_gSystem != 0)", "%s\n\tGPredictedEntitySystem::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gSystem != NULL") )
      __debugbreak();
    v54 = GPredictedEntitySystem::ms_gSystem;
  }
  ((void (__fastcall *)(GPredictedEntitySystem *, _QWORD))v54->~BgPredictedEntitySystem)(v54, 0i64);
  DebugWipe(GPredictedEntitySystem::ms_gSystem, 0x10ui64);
  GPredictedEntitySystem::ms_gSystem = NULL;
LABEL_292:
  LOBYTE(GPredictedEntitySystem::ms_allocatedType) = 0;
  if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 89, ASSERT_TYPE_ASSERT, "( ms_gSystem == 0 )", (const char *)&queryFormat, "ms_gSystem == NULL") )
    __debugbreak();
  Ai_Asm::FreeMemory();
  GPlayer_Asm::FreeMemory();
}

/*
==============
G_MainMP_SortRanks
==============
*/
__int64 G_MainMP_SortRanks(const void *a, const void *b)
{
  gclient_s *v2; 
  gclient_s *v3; 
  team_t team; 
  team_t v5; 
  bool v6; 
  unsigned __int16 score; 
  unsigned __int16 v9; 
  unsigned __int16 deaths; 
  unsigned __int16 v11; 

  v2 = &level.clients[*(int *)a];
  v3 = &level.clients[*(int *)b];
  if ( v2->sess.connected == CON_CONNECTING )
    return 1i64;
  if ( v3->sess.connected == CON_CONNECTING )
    return 0xFFFFFFFFi64;
  team = v2->sess.cs.team;
  v5 = v3->sess.cs.team;
  if ( team == TEAM_SPECTATOR )
  {
    v6 = v5 == TEAM_SPECTATOR;
    goto LABEL_8;
  }
  if ( v5 == TEAM_SPECTATOR )
    return 0xFFFFFFFFi64;
  if ( team == TEAM_FOLLOWER )
  {
    v6 = v5 == TEAM_FOLLOWER;
LABEL_8:
    if ( !v6 )
      return 1i64;
    if ( v2 >= v3 )
      return v2 > v3;
    return 0xFFFFFFFFi64;
  }
  if ( v5 != TEAM_FOLLOWER )
  {
    score = v2->sess.scores.score;
    v9 = v3->sess.scores.score;
    if ( score <= v9 )
    {
      if ( score < v9 )
        return 1i64;
      deaths = v2->sess.scores.deaths;
      v11 = v3->sess.scores.deaths;
      if ( deaths >= v11 )
        return deaths > v11;
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
G_MainMP_UpdateSortedEntities
==============
*/
void G_MainMP_UpdateSortedEntities()
{
  int v0; 
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  gentity_s *v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  int count; 
  __int64 v29; 
  __int64 v30; 
  int *v31; 
  int *v32; 
  int *v33; 
  int *v34; 
  int *v35; 
  int *v36; 
  int *v37; 
  int *v38; 
  int *v39; 
  int v40[16]; 
  int thinkList[128]; 
  int v42[512]; 
  int v43[2048]; 
  int v44[2048]; 
  int v45[2048]; 
  int v46[2048]; 
  int v47[2048]; 
  int v48[2048]; 
  int v49[2048]; 
  int v50[2048]; 

  memset_0(s_impulseFieldEntities, 0, sizeof(s_impulseFieldEntities));
  v0 = 0;
  v1 = 0;
  s_impulseFieldEntityCount = 0;
  v2 = 0;
  count = 0;
  v3 = 0;
  v27 = 0;
  v4 = 0;
  v25 = 0;
  v5 = 0;
  v26 = 0;
  v6 = 0;
  v7 = 0;
  level.currentEntityThink = 0;
  if ( level.num_entities > 0 )
  {
    v29 = 0i64;
    v32 = v46;
    v31 = v42;
    v39 = v50;
    v38 = v45;
    v37 = v49;
    v36 = v48;
    v35 = v47;
    v30 = 0i64;
    v33 = thinkList;
    v34 = v40;
    do
    {
      if ( (unsigned int)v1 >= 0x800 )
      {
        LODWORD(v24) = 2048;
        LODWORD(v23) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v1].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v1] )
      {
        v8 = &g_entities[level.currentEntityThink];
        switch ( v8->s.eType )
        {
          case ET_PLAYER_CORPSE:
          case ET_AGENT_CORPSE:
          case ET_ACTOR_CORPSE:
            if ( v2 >= 16 )
            {
              LODWORD(v24) = 16;
              LODWORD(v23) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3122, ASSERT_TYPE_ASSERT, "( corpseCount ) < ( MAX_CORPSES )", "corpseCount < MAX_CORPSES\n\t%i, %i", v23, v24) )
                __debugbreak();
            }
            ++v2;
            *v34++ = v8->s.number;
            break;
          case ET_ITEM:
            if ( v25 >= 2048 )
            {
              LODWORD(v24) = 2048;
              LODWORD(v23) = v25;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3143, ASSERT_TYPE_ASSERT, "( itemCount ) < ( MAX_ITEMS )", "itemCount < MAX_ITEMS\n\t%i, %i", v23, v24) )
                __debugbreak();
            }
            ++v25;
            *v36++ = v8->s.number;
            break;
          case ET_MISSILE:
            if ( v3 < 2048 )
              goto LABEL_70;
            v11 = 3127;
            goto LABEL_68;
          case ET_SCRIPTMOVER:
            if ( G_EntIsLinked(&g_entities[level.currentEntityThink]) && v8->tagInfo->parent->s.eType == ET_MISSILE )
            {
              v9 = v29;
              if ( v29 >= 2048 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3108, ASSERT_TYPE_ASSERT, "(moverCount2 < MAX_MOVERS)", (const char *)&queryFormat, "moverCount2 < MAX_MOVERS") )
                  __debugbreak();
                v9 = v29;
              }
              ++count;
              v44[v9] = v8->s.number;
              v29 = v9 + 1;
            }
            else
            {
              v10 = v30;
              if ( v30 >= 2048 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3113, ASSERT_TYPE_ASSERT, "(moverCount < MAX_MOVERS)", (const char *)&queryFormat, "moverCount < MAX_MOVERS") )
                  __debugbreak();
                v10 = v30;
              }
              ++v0;
              v43[v10] = v8->s.number;
              v30 = v10 + 1;
            }
            break;
          case ET_PRIMARY_LIGHT:
            if ( v26 >= 2048 )
            {
              LODWORD(v24) = 2048;
              LODWORD(v23) = v26;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3153, ASSERT_TYPE_ASSERT, "( pLightCount ) < ( MAX_PLIGHTS )", "pLightCount < MAX_PLIGHTS\n\t%i, %i", v23, v24) )
                __debugbreak();
            }
            ++v26;
            *v38++ = v8->s.number;
            break;
          case ET_TURRET:
            if ( v27 >= 2048 )
            {
              LODWORD(v24) = 2048;
              LODWORD(v23) = v27;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3132, ASSERT_TYPE_ASSERT, "( turretCount ) < ( MAX_TURRETS )", "turretCount < MAX_TURRETS\n\t%i, %i", v23, v24) )
                __debugbreak();
            }
            ++v27;
            *v35++ = v8->s.number;
            break;
          case ET_VEHICLE:
            if ( v7 >= 128 )
            {
              LODWORD(v24) = 128;
              LODWORD(v23) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3100, ASSERT_TYPE_ASSERT, "( vehicleCount ) < ( (1 << 7) )", "vehicleCount < MAX_VEHICLES\n\t%i, %i", v23, v24) )
                __debugbreak();
            }
            ++v7;
            *v33++ = v8->s.number;
            break;
          case ET_VEHICLE_SPAWNER:
          case ET_ACTOR_SPAWNER:
            if ( v4 < 512 )
              goto LABEL_65;
            LODWORD(v24) = 512;
            LODWORD(v23) = v4;
            if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3138, ASSERT_TYPE_ASSERT, "( spawnerCount ) < ( ( 512 ) )", "spawnerCount < MAX_SPAWNERS\n\t%i, %i", v23, v24) )
              goto LABEL_65;
            __debugbreak();
            ++v4;
            *v31++ = v8->s.number;
            break;
          case ET_COVERWALL:
            if ( v5 >= 2048 )
            {
              LODWORD(v24) = 2048;
              LODWORD(v23) = v5;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3148, ASSERT_TYPE_ASSERT, "( coverWallCount ) < ( MAX_COVERWALLS )", "coverWallCount < MAX_COVERWALLS\n\t%i, %i", v23, v24) )
                __debugbreak();
            }
            ++v5;
            *v37++ = v8->s.number;
            break;
          default:
            if ( v8->handler == 10 || v8->handler == 12 )
            {
              if ( v3 >= 2048 )
              {
                v11 = 3163;
LABEL_68:
                LODWORD(v24) = 2048;
                LODWORD(v23) = v3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", v11, ASSERT_TYPE_ASSERT, "( missileCount ) < ( MAX_MISSILES )", "missileCount < MAX_MISSILES\n\t%i, %i", v23, v24) )
                  __debugbreak();
              }
LABEL_70:
              ++v3;
              *v32++ = v8->s.number;
            }
            else if ( v8->handler == 13 )
            {
              if ( v4 >= 512 )
              {
                LODWORD(v24) = 512;
                LODWORD(v23) = v4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3170, ASSERT_TYPE_ASSERT, "( spawnerCount ) < ( ( 512 ) )", "spawnerCount < MAX_SPAWNERS\n\t%i, %i", v23, v24) )
                  __debugbreak();
              }
LABEL_65:
              ++v4;
              *v31++ = v8->s.number;
            }
            else
            {
              if ( v6 >= 2048 )
              {
                LODWORD(v24) = 2048;
                LODWORD(v23) = v6;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 3177, ASSERT_TYPE_ASSERT, "( otherCount ) < ( MAX_OTHER )", "otherCount < MAX_OTHER\n\t%i, %i", v23, v24) )
                  __debugbreak();
              }
              ++v6;
              *v39++ = v8->s.number;
            }
            break;
        }
      }
      v1 = ++level.currentEntityThink;
    }
    while ( level.currentEntityThink < level.num_entities );
    if ( v7 > 0 )
    {
      v12 = j_va("Vehicle Think: %d", (unsigned int)v7);
      Sys_ProfBeginNamedEvent(0xFF008008, v12);
      G_MainMP_UpdateSortedEntityGroup(thinkList, v7);
      Sys_ProfEndNamedEvent();
    }
    if ( v0 > 0 )
    {
      v13 = j_va("Mover Think: %d", (unsigned int)v0);
      Sys_ProfBeginNamedEvent(0xFF008008, v13);
      G_MainMP_UpdateSortedEntityGroup(v43, v0);
      Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
      Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
      Sys_ProfEndNamedEvent();
    }
    v1 = v25;
  }
  Path_PreStep();
  GMovingPlatforms::DeferredUpdateAll();
  if ( count > 0 )
  {
    v14 = j_va("Mover Think2: %d", (unsigned int)count);
    Sys_ProfBeginNamedEvent(0xFF008008, v14);
    G_MainMP_UpdateSortedEntityGroup(v44, count);
    Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    Sys_ProfEndNamedEvent();
  }
  if ( v4 > 0 )
  {
    v15 = j_va("Spawner Think: %d", (unsigned int)v4);
    Sys_ProfBeginNamedEvent(0xFF008008, v15);
    G_MainMP_UpdateSortedEntityGroup(v42, v4);
    Sys_ProfEndNamedEvent();
  }
  if ( v26 > 0 )
  {
    v16 = j_va("Primary Light Think: %d", (unsigned int)v26);
    Sys_ProfBeginNamedEvent(0xFF008008, v16);
    G_MainMP_UpdateSortedEntityGroup(v45, v26);
    Sys_ProfEndNamedEvent();
  }
  if ( v3 > 0 )
  {
    v17 = j_va("Missile Think: %d", (unsigned int)v3);
    Sys_ProfBeginNamedEvent(0xFF008008, v17);
    G_MainMP_UpdateSortedEntityGroup(v46, v3);
    Sys_ProfEndNamedEvent();
  }
  if ( v27 > 0 )
  {
    v18 = j_va("Turret Think: %d", (unsigned int)v27);
    Sys_ProfBeginNamedEvent(0xFF008008, v18);
    G_MainMP_UpdateSortedEntityGroup(v47, v27);
    Sys_ProfEndNamedEvent();
  }
  if ( v1 > 0 )
  {
    v19 = j_va("Item Think: %d", (unsigned int)v1);
    Sys_ProfBeginNamedEvent(0xFF008008, v19);
    G_MainMP_UpdateSortedEntityGroup(v48, v1);
    Sys_ProfEndNamedEvent();
  }
  if ( v2 > 0 )
  {
    v20 = j_va("Corpse Think: %d", (unsigned int)v2);
    Sys_ProfBeginNamedEvent(0xFF008008, v20);
    G_MainMP_UpdateSortedEntityGroup(v40, v2);
    Sys_ProfEndNamedEvent();
  }
  if ( v5 > 0 )
  {
    v21 = j_va("CoverWall Think: %d", (unsigned int)v5);
    Sys_ProfBeginNamedEvent(0xFF008008, v21);
    G_MainMP_UpdateSortedEntityGroup(v49, v5);
    Sys_ProfEndNamedEvent();
  }
  AIScheduler::Update();
  if ( v6 > 0 )
  {
    v22 = j_va("Other Think: %d", (unsigned int)v6);
    Sys_ProfBeginNamedEvent(0xFF008008, v22);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    G_MainMP_UpdateSortedEntityGroup(v50, v6);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 0);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 0);
    Sys_ProfEndNamedEvent();
  }
  Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
  Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
}

/*
==============
G_MainMP_UpdateSortedEntityGroup
==============
*/
void G_MainMP_UpdateSortedEntityGroup(const int *thinkList, int count)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  gentity_s *v6; 
  __int64 v7; 
  __int64 v8; 

  if ( count > 0 )
  {
    v3 = 0i64;
    v4 = count;
    do
    {
      v5 = thinkList[v3];
      if ( (unsigned int)v5 >= 0x800 )
      {
        LODWORD(v8) = 2048;
        LODWORD(v7) = thinkList[v3];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v5] )
      {
        v6 = &g_entities[thinkList[v3]];
        G_MainMP_RunFrameForEntity(v6);
        G_UpdateLinkInfoForClients(v6);
      }
      ++v3;
    }
    while ( v3 < v4 );
  }
}

/*
==============
G_MainMP_VerifyServerNetConstModels_Callback
==============
*/
void G_MainMP_VerifyServerNetConstModels_Callback(const unsigned int modelIndex, const char *name)
{
  XModel *Model; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  signed __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 

  if ( !modelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "(modelIndex != 0)", "%s\n\tShould be skipping the first 'default' model", "modelIndex != 0") )
    __debugbreak();
  G_MainMP_InitServerNetConstModels_NCSTransientModelCheck(name);
  Model = G_Utils_GetModel(modelIndex);
  if ( !Model )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1194, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
  }
  v5 = Model->name;
  v6 = 0x7FFFFFFFi64;
  v7 = name;
  if ( !Model->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v8 = v5 - name;
  do
  {
    v9 = (unsigned __int8)v7[v8];
    v10 = v6;
    v11 = *(unsigned __int8 *)v7++;
    --v6;
    if ( !v10 )
      break;
    if ( v9 != v11 )
    {
      v12 = v9 + 32;
      if ( (unsigned int)(v9 - 65) > 0x19 )
        v12 = v9;
      v9 = v12;
      v13 = v11 + 32;
      if ( (unsigned int)(v11 - 65) > 0x19 )
        v13 = v11;
      if ( v9 != v13 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 1195, ASSERT_TYPE_ASSERT, "(I_stricmp( XModelGetName( xmodel ), name ) == 0)", "%s\n\t%s vs %s", "I_stricmp( XModelGetName( xmodel ), name ) == 0", Model->name, name) )
          __debugbreak();
        return;
      }
    }
  }
  while ( v9 );
}

/*
==============
G_MainMP_XAnimUpdateEnt
==============
*/

void __fastcall G_MainMP_XAnimUpdateEnt(gentity_s *ent, double dt)
{
  bool v6; 
  bool v7; 
  __int64 EntityIndex; 
  __int64 v10; 
  scrContext_t *v11; 
  int updated; 
  __int64 v14; 
  int ServerNotifyList; 
  __int64 v16; 
  Ai_Asm *v17; 
  __int64 v18; 
  __int64 v19; 
  Ai_Asm *j; 
  __int64 v22; 
  __int64 v23; 
  XAnimNotifySV *notifyList; 
  XAnimNotifySV *v26; 
  __int64 i; 

  __asm
  {
    vmovaps [rsp+88h+var_48], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = ent == NULL;
  if ( !ent )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2288, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_main_mp.cpp", 2289, ASSERT_TYPE_ASSERT, "( dt > 0.0f )", (const char *)&queryFormat, "dt > 0.0f") )
    __debugbreak();
  EntityIndex = G_GetEntityIndex(ent);
  v10 = 1456 * EntityIndex;
  v11 = ScriptContext_Server();
  for ( i = 1456 * EntityIndex; ; v10 = i )
  {
    if ( (unsigned int)EntityIndex >= 0x800 )
    {
      LODWORD(v23) = 2048;
      LODWORD(v22) = EntityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( *(&g_entities->r.isInUse + v10) != g_entityIsInUse[EntityIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[EntityIndex] || (ent->flags.m_flags[0] & 0x800) != 0 )
      break;
    __asm { vmovaps xmm1, xmm6; dtime }
    updated = SV_Game_DObjUpdateServerTime(ent, *(float *)&_XMM1, 1);
    if ( ScriptableSv_GetScriptableIndexForEntity(ent) != -1 )
    {
      v14 = 0i64;
      ServerNotifyList = DObjGetServerNotifyList(&notifyList);
      v16 = ServerNotifyList;
      if ( ServerNotifyList > 0 )
      {
        do
        {
          ScriptableSv_AnimNotetrackEvent(ent, notifyList[v14].noteName, notifyList[v14].notifyName);
          ++v14;
        }
        while ( v14 < v16 );
      }
    }
    v17 = Ai_Asm::Singleton();
    if ( Ai_Asm::ShouldProcessNotetracks(v17, ent->s.number) )
    {
      v18 = DObjGetServerNotifyList(&v26);
      v19 = 0i64;
      for ( j = Ai_Asm::Singleton(); v19 < v18; ++v19 )
        Ai_Asm::ProcessNotetrack(j, ent->s.number, v26[v19].notifyName, v26[v19].noteName);
    }
    if ( !updated )
      break;
    Scr_RunCurrentThreads(v11);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

