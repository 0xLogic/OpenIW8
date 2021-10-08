/*
==============
OnlineProgression::UpdateProgression
==============
*/

bool __fastcall OnlineProgression::UpdateProgression(OnlineProgression *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  return ?UpdateProgression@OnlineProgression@@QEAA_NHPEAVbdJSONDeserializer@@_N@Z(this, controllerIndex, json, complete);
}

/*
==============
OnlineProgression::GetSeasonChallengeProgress
==============
*/

unsigned __int64 __fastcall OnlineProgression::GetSeasonChallengeProgress(OnlineProgression *this, const int controllerIndex, const int challenge_id)
{
  return ?GetSeasonChallengeProgress@OnlineProgression@@QEAA_KHH@Z(this, controllerIndex, challenge_id);
}

/*
==============
OnlineProgression::Frame
==============
*/

void __fastcall OnlineProgression::Frame(OnlineProgression *this)
{
  ?Frame@OnlineProgression@@UEAAXXZ(this);
}

/*
==============
OnlineProgression::ResetProgression
==============
*/

void __fastcall OnlineProgression::ResetProgression(OnlineProgression *this, const int controllerIndex)
{
  ?ResetProgression@OnlineProgression@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineProgression::RequestUserState
==============
*/

void __fastcall OnlineProgression::RequestUserState(OnlineProgression *this, const int controllerIndex, ONLINE_USER_STATE_STAGE stage)
{
  ?RequestUserState@OnlineProgression@@QEAAXHW4ONLINE_USER_STATE_STAGE@@@Z(this, controllerIndex, stage);
}

/*
==============
CL_GiveXP
==============
*/

void __fastcall CL_GiveXP()
{
  ?CL_GiveXP@@YAXXZ();
}

/*
==============
OnlineProgression::CheckSinglePlayerRewards
==============
*/

void __fastcall OnlineProgression::CheckSinglePlayerRewards(OnlineProgression *this, const int controllerIndex)
{
  ?CheckSinglePlayerRewards@OnlineProgression@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineProgression::GetInstancePtr
==============
*/

OnlineProgression *__fastcall OnlineProgression::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineProgression@@SAPEAV1@XZ();
}

/*
==============
OnlineProgression::OutputCurrentState
==============
*/

void __fastcall OnlineProgression::OutputCurrentState(OnlineProgression *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineProgression@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineProgression::OnGetUserStateComplete
==============
*/

void __fastcall OnlineProgression::OnGetUserStateComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnGetUserStateComplete@OnlineProgression@@SAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineProgression::OnActivateAchievementComplete
==============
*/

void __fastcall OnlineProgression::OnActivateAchievementComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnActivateAchievementComplete@OnlineProgression@@SAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineProgression::Init
==============
*/

bool __fastcall OnlineProgression::Init(OnlineProgression *this)
{
  return ?Init@OnlineProgression@@UEAA_NXZ(this);
}

/*
==============
OnlineProgression::OnResume
==============
*/

void __fastcall OnlineProgression::OnResume(OnlineProgression *this)
{
  ?OnResume@OnlineProgression@@QEAAXXZ(this);
}

/*
==============
OnlineProgression::SetPlayerBRTutorialReward
==============
*/

void __fastcall OnlineProgression::SetPlayerBRTutorialReward(OnlineProgression *this, const int controllerIndex, ONLINE_BR_TUTORIAL_REWARD reward, const bool value)
{
  ?SetPlayerBRTutorialReward@OnlineProgression@@QEAAXHW4ONLINE_BR_TUTORIAL_REWARD@@_N@Z(this, controllerIndex, reward, value);
}

/*
==============
OnlineProgression::ParseUserState
==============
*/

void __fastcall OnlineProgression::ParseUserState(OnlineProgression *this, const int controllerIndex)
{
  ?ParseUserState@OnlineProgression@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineProgression::SendTokenActivationMessage
==============
*/

void __fastcall OnlineProgression::SendTokenActivationMessage(OnlineProgression *this, const int controllerIndex)
{
  ?SendTokenActivationMessage@OnlineProgression@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineProgression::ActivateToken
==============
*/

void __fastcall OnlineProgression::ActivateToken(OnlineProgression *this, const int controllerIndex, const int tokenChallengeID)
{
  ?ActivateToken@OnlineProgression@@QEAAXHH@Z(this, controllerIndex, tokenChallengeID);
}

/*
==============
OnlineProgression::TokenComplete
==============
*/

void __fastcall OnlineProgression::TokenComplete(OnlineProgression *this, const int controllerIndex, bdJSONDeserializer *json)
{
  ?TokenComplete@OnlineProgression@@QEAAXHPEAVbdJSONDeserializer@@@Z(this, controllerIndex, json);
}

/*
==============
OnlineProgression::UpdatePlayerStats
==============
*/

void __fastcall OnlineProgression::UpdatePlayerStats(OnlineProgression *this, const int controllerIndex)
{
  ?UpdatePlayerStats@OnlineProgression@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineProgression::SetPlayerTrialsOfSummerReward
==============
*/

void __fastcall OnlineProgression::SetPlayerTrialsOfSummerReward(OnlineProgression *this, const int controllerIndex, const int trialId, const ONLINE_GAMES_OF_SUMMER_REWARD_TYPES bestMedal)
{
  ?SetPlayerTrialsOfSummerReward@OnlineProgression@@QEAAXHHW4ONLINE_GAMES_OF_SUMMER_REWARD_TYPES@@@Z(this, controllerIndex, trialId, bestMedal);
}

/*
==============
OnlineProgression::GetInstance
==============
*/

OnlineProgression *__fastcall OnlineProgression::GetInstance()
{
  return ?GetInstance@OnlineProgression@@SAAEAV1@XZ();
}

/*
==============
OnlineProgression::Uninit
==============
*/

void __fastcall OnlineProgression::Uninit(OnlineProgression *this)
{
  ?Uninit@OnlineProgression@@UEAAXXZ(this);
}

/*
==============
OnlineProgression::OnSignedIn
==============
*/

void __fastcall OnlineProgression::OnSignedIn(OnlineProgression *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineProgression@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineProgression::GetSeasonProgression
==============
*/

SeasonProgression *__fastcall OnlineProgression::GetSeasonProgression(OnlineProgression *this, const int controllerIndex, const int season)
{
  return ?GetSeasonProgression@OnlineProgression@@QEAAPEAUSeasonProgression@@HH@Z(this, controllerIndex, season);
}

/*
==============
OnlineProgression::OnDisconnect
==============
*/

void __fastcall OnlineProgression::OnDisconnect(OnlineProgression *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineProgression@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineProgression::GetPlayerBRTutorialReward
==============
*/

bool __fastcall OnlineProgression::GetPlayerBRTutorialReward(OnlineProgression *this, const int controllerIndex, ONLINE_BR_TUTORIAL_REWARD reward)
{
  return ?GetPlayerBRTutorialReward@OnlineProgression@@QEAA_NHW4ONLINE_BR_TUTORIAL_REWARD@@@Z(this, controllerIndex, reward);
}

/*
==============
OnlineProgression::GetPlayerTrialsOfSummerReward
==============
*/

ONLINE_GAMES_OF_SUMMER_REWARD_TYPES __fastcall OnlineProgression::GetPlayerTrialsOfSummerReward(OnlineProgression *this, const int controllerIndex, const int trialId)
{
  return ?GetPlayerTrialsOfSummerReward@OnlineProgression@@QEAA?AW4ONLINE_GAMES_OF_SUMMER_REWARD_TYPES@@HH@Z(this, controllerIndex, trialId);
}

/*
==============
OnlineProgression::RegisterLuaFunctions
==============
*/

void __fastcall OnlineProgression::RegisterLuaFunctions(OnlineProgression *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineProgression@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineProgression::OnRegistered
==============
*/

void __fastcall OnlineProgression::OnRegistered(OnlineProgression *this)
{
  ?OnRegistered@OnlineProgression@@UEAAXXZ(this);
}

/*
==============
OnlineProgression::SendSeasonChallengesComplete
==============
*/

void __fastcall OnlineProgression::SendSeasonChallengesComplete(OnlineProgression *this, const int controllerIndex)
{
  ?SendSeasonChallengesComplete@OnlineProgression@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineProgression::OnSignedOut
==============
*/

void __fastcall OnlineProgression::OnSignedOut(OnlineProgression *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineProgression@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineProgression::OnGetProgressionComplete
==============
*/

void __fastcall OnlineProgression::OnGetProgressionComplete(OnlineProgression *this, const int controllerIndex, bdAchievementState *state)
{
  ?OnGetProgressionComplete@OnlineProgression@@QEAAXHPEAVbdAchievementState@@@Z(this, controllerIndex, state);
}

/*
==============
OnlineProgression::OnUnregistered
==============
*/

void __fastcall OnlineProgression::OnUnregistered(OnlineProgression *this)
{
  ?OnUnregistered@OnlineProgression@@UEAAXXZ(this);
}

/*
==============
OnlineProgression::ControllerFrame
==============
*/

void __fastcall OnlineProgression::ControllerFrame(OnlineProgression *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineProgression@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineProgression::ActivationFailed
==============
*/

void __fastcall OnlineProgression::ActivationFailed(OnlineProgression *this, const int controllerIndex)
{
  ?ActivationFailed@OnlineProgression@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineProgression::GetUserState
==============
*/

void __fastcall OnlineProgression::GetUserState(OnlineProgression *this, const int controllerIndex, ONLINE_USER_STATE_STAGE stage)
{
  ?GetUserState@OnlineProgression@@QEAAXHW4ONLINE_USER_STATE_STAGE@@@Z(this, controllerIndex, stage);
}

/*
==============
OnlineProgression::OnRegistered
==============
*/
void OnlineProgression::OnRegistered(OnlineProgression *this)
{
  Cmd_AddCommandInternal("givexp", CL_GiveXP, &CL_GiveXP_VAR);
}

/*
==============
OnlineProgression::OnUnregistered
==============
*/
void OnlineProgression::OnUnregistered(OnlineProgression *this)
{
  Cmd_RemoveCommand("givexp");
}

/*
==============
OnlineProgression::Init
==============
*/
__int64 OnlineProgression::Init(OnlineProgression *this)
{
  __int64 result; 

  this->m_playerProgression[0].xp = 0i64;
  this->m_playerProgression[0].rank = 0i64;
  this->m_levelProgression[0].xp = 0i64;
  this->m_levelProgression[0].rank = 0i64;
  this->m_seasonChallengeCount[0] = 0;
  memset_0(this->m_seasonProgression, 0, 0x70ui64);
  memset_0(this->m_seasonChallenges, 0, 0x2BC0ui64);
  *(_DWORD *)&this->m_brTutorialRewards[0][0] = 0;
  *(_QWORD *)&this->m_gamesOfSummerRewards[0][0] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[0][2] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[0][4] = 0i64;
  this->m_playerProgression[1].xp = 0i64;
  this->m_playerProgression[1].rank = 0i64;
  this->m_levelProgression[1].xp = 0i64;
  this->m_levelProgression[1].rank = 0i64;
  this->m_seasonChallengeCount[1] = 0;
  memset_0(this->m_seasonProgression[1], 0, sizeof(this->m_seasonProgression[1]));
  memset_0(this->m_seasonChallenges[1], 0, sizeof(this->m_seasonChallenges[1]));
  *(_DWORD *)&this->m_brTutorialRewards[1][0] = 0;
  *(_QWORD *)&this->m_gamesOfSummerRewards[1][0] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[1][2] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[1][4] = 0i64;
  this->m_playerProgression[2].xp = 0i64;
  this->m_playerProgression[2].rank = 0i64;
  this->m_levelProgression[2].xp = 0i64;
  this->m_levelProgression[2].rank = 0i64;
  this->m_seasonChallengeCount[2] = 0;
  memset_0(this->m_seasonProgression[2], 0, sizeof(this->m_seasonProgression[2]));
  memset_0(this->m_seasonChallenges[2], 0, sizeof(this->m_seasonChallenges[2]));
  *(_DWORD *)&this->m_brTutorialRewards[2][0] = 0;
  *(_QWORD *)&this->m_gamesOfSummerRewards[2][0] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[2][2] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[2][4] = 0i64;
  this->m_playerProgression[3].xp = 0i64;
  this->m_playerProgression[3].rank = 0i64;
  this->m_levelProgression[3].xp = 0i64;
  this->m_levelProgression[3].rank = 0i64;
  this->m_seasonChallengeCount[3] = 0;
  memset_0(this->m_seasonProgression[3], 0, sizeof(this->m_seasonProgression[3]));
  memset_0(this->m_seasonChallenges[3], 0, sizeof(this->m_seasonChallenges[3]));
  *(_DWORD *)&this->m_brTutorialRewards[3][0] = 0;
  *(_QWORD *)&this->m_gamesOfSummerRewards[3][0] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[3][2] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[3][4] = 0i64;
  this->m_playerProgression[4].xp = 0i64;
  this->m_playerProgression[4].rank = 0i64;
  this->m_levelProgression[4].xp = 0i64;
  this->m_levelProgression[4].rank = 0i64;
  this->m_seasonChallengeCount[4] = 0;
  memset_0(this->m_seasonProgression[4], 0, sizeof(this->m_seasonProgression[4]));
  memset_0(this->m_seasonChallenges[4], 0, sizeof(this->m_seasonChallenges[4]));
  *(_DWORD *)&this->m_brTutorialRewards[4][0] = 0;
  *(_QWORD *)&this->m_gamesOfSummerRewards[4][0] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[4][2] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[4][4] = 0i64;
  this->m_playerProgression[5].xp = 0i64;
  this->m_playerProgression[5].rank = 0i64;
  this->m_levelProgression[5].xp = 0i64;
  this->m_levelProgression[5].rank = 0i64;
  this->m_seasonChallengeCount[5] = 0;
  memset_0(this->m_seasonProgression[5], 0, sizeof(this->m_seasonProgression[5]));
  memset_0(this->m_seasonChallenges[5], 0, sizeof(this->m_seasonChallenges[5]));
  *(_DWORD *)&this->m_brTutorialRewards[5][0] = 0;
  *(_QWORD *)&this->m_gamesOfSummerRewards[5][0] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[5][2] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[5][4] = 0i64;
  this->m_playerProgression[6].xp = 0i64;
  this->m_playerProgression[6].rank = 0i64;
  this->m_levelProgression[6].xp = 0i64;
  this->m_levelProgression[6].rank = 0i64;
  this->m_seasonChallengeCount[6] = 0;
  memset_0(this->m_seasonProgression[6], 0, sizeof(this->m_seasonProgression[6]));
  memset_0(this->m_seasonChallenges[6], 0, sizeof(this->m_seasonChallenges[6]));
  *(_DWORD *)&this->m_brTutorialRewards[6][0] = 0;
  *(_QWORD *)&this->m_gamesOfSummerRewards[6][0] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[6][2] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[6][4] = 0i64;
  this->m_playerProgression[7].xp = 0i64;
  this->m_playerProgression[7].rank = 0i64;
  this->m_levelProgression[7].xp = 0i64;
  this->m_levelProgression[7].rank = 0i64;
  this->m_seasonChallengeCount[7] = 0;
  memset_0(this->m_seasonProgression[7], 0, sizeof(this->m_seasonProgression[7]));
  memset_0(this->m_seasonChallenges[7], 0, sizeof(this->m_seasonChallenges[7]));
  result = 1i64;
  *(_DWORD *)&this->m_brTutorialRewards[7][0] = 0;
  *(_QWORD *)&this->m_gamesOfSummerRewards[7][0] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[7][2] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[7][4] = 0i64;
  return result;
}

/*
==============
OnlineProgression::Uninit
==============
*/
void OnlineProgression::Uninit(OnlineProgression *this)
{
  ;
}

/*
==============
OnlineProgression::Frame
==============
*/
void OnlineProgression::Frame(OnlineProgression *this)
{
  ;
}

/*
==============
OnlineProgression::ControllerFrame
==============
*/
void OnlineProgression::ControllerFrame(OnlineProgression *this, const int controllerIndex)
{
  __int64 v2; 
  ONLINE_USER_STATE_STAGE v4; 
  ONLINE_USER_STATE_STAGE v5; 
  ONLINE_USER_STATE_STAGE v6; 
  ONLINE_USER_STATE_STAGE v7; 

  v2 = controllerIndex;
  if ( !FenceManager_IsFencePassing(controllerIndex, FENCE_DW_TIME) )
    return;
  v4 = this->m_userStateStage[v2];
  switch ( v4 )
  {
    case ONLINE_USER_STATE_STAGE_NEED:
      v5 = ONLINE_USER_STATE_STAGE_NEED;
LABEL_8:
      OnlineProgression::GetUserState(this, v2, v5);
      break;
    case ONLINE_USER_STATE_STAGE_NEED_TOKENS:
      v5 = ONLINE_USER_STATE_STAGE_NEED_TOKENS;
      goto LABEL_8;
    case ONLINE_USER_STATE_STAGE_NEED_DAILY_INDEX:
      v5 = ONLINE_USER_STATE_STAGE_NEED_DAILY_INDEX;
      goto LABEL_8;
  }
  if ( !Online_Retry::ShouldRetry(&this->m_getUserStateRetry[v2]) )
    return;
  v6 = this->m_userStateStage[v2];
  switch ( v6 )
  {
    case ONLINE_USER_STATE_STAGE_RETRYING:
      v7 = ONLINE_USER_STATE_STAGE_NEED;
      break;
    case ONLINE_USER_STATE_STAGE_RETRYING_TOKENS:
      v7 = ONLINE_USER_STATE_STAGE_NEED_TOKENS;
      break;
    case ONLINE_USER_STATE_STAGE_RETRYING_DAILY_INDEX:
      v7 = ONLINE_USER_STATE_STAGE_NEED_DAILY_INDEX;
      break;
    default:
      return;
  }
  OnlineProgression::GetUserState(this, v2, v7);
}

/*
==============
OnlineProgression::OnSignedIn
==============
*/
void OnlineProgression::OnSignedIn(OnlineProgression *this, const int controllerIndex, GenericSignInState signinState)
{
  __int64 v3; 
  __int64 v4; 

  v3 = 4i64 * controllerIndex + 15508;
  *((_QWORD *)&this->__vftable + v3) = 0i64;
  *((_QWORD *)&this->m_nextSystem + v3) = 0i64;
  *((_QWORD *)&this->m_dependencyFlags + v3) = 0i64;
  *(_QWORD *)&this->m_name[8 * v3 + 3] = 0i64;
  v4 = controllerIndex;
  *(_QWORD *)&this->m_getUserStateRetry[v4].m_numRetries = 0i64;
  this->m_getUserStateRetry[v4].m_retrying = 0;
  this->m_userStateStage[controllerIndex] = ONLINE_USER_STATE_STAGE_NEED;
}

/*
==============
OnlineProgression::OnSignedOut
==============
*/

void __fastcall OnlineProgression::OnSignedOut(OnlineProgression *this, const int controllerIndex, GenericSignOutState signOutState)
{
  OnlineProgression::ResetProgression(this, controllerIndex);
}

/*
==============
OnlineProgression::OnDisconnect
==============
*/
void OnlineProgression::OnDisconnect(OnlineProgression *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineProgression::RegisterLuaFunctions
==============
*/
void OnlineProgression::RegisterLuaFunctions(OnlineProgression *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "OnlineProgression", progression_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OnlineProgression::OutputCurrentState
==============
*/
void OnlineProgression::OutputCurrentState(OnlineProgression *this, const int controllerIndex)
{
  Com_Printf(25, "PROGRESSION DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "PROGRESSION DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_GetPlayerXP
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetPlayerXP(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerXP( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerXP( <controllerIndex> )\n");
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (OnlineProgression::s_instance.m_playerProgression[lui_tointeger32(luaVM, 1)].xp & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerRank
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetPlayerRank(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerRank( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerRank( <controllerIndex> )\n");
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (OnlineProgression::s_instance.m_playerProgression[lui_tointeger32(luaVM, 1)].rank & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSeasonXP
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetSeasonXP(lua_State *const luaVM, double _XMM1_8)
{
  int v3; 
  int v4; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetSeasonXP( <controllerIndex><season> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetSeasonXP( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetSeasonXP( <season> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rcx
  }
  if ( (OnlineProgression::GetSeasonProgression(&OnlineProgression::s_instance, v3, v4)->xp & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSeasonRank
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetSeasonRank(lua_State *const luaVM, double _XMM1_8)
{
  int v3; 
  int v4; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetSeasonRank( <controllerIndex><season> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetSeasonRank( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetSeasonRank( <season> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rcx
  }
  if ( (OnlineProgression::GetSeasonProgression(&OnlineProgression::s_instance, v3, v4)->rank & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSeasonChallengeProgress
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetSeasonChallengeProgress(lua_State *const luaVM, double _XMM1_8)
{
  int v3; 
  int v4; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetSeasonChallengeProgress( <controllerIndex><challenge_id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetSeasonChallengeProgress( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetSeasonChallengeProgress( <challenge_id> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (OnlineProgression::GetSeasonChallengeProgress(&OnlineProgression::s_instance, v3, v4) & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetTokenAmount
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetTokenAmount(lua_State *const luaVM, double _XMM1_8)
{
  int v3; 
  unsigned int v4; 
  Online_Loot *Instance; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetTokenAmount( <controllerIndex><token_id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetTokenAmount( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetTokenAmount( <token_id> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  Instance = Online_Loot::GetInstance();
  Online_Loot::GetItemQuantity(Instance, v3, v4);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax; n
  }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ActivateToken
==============
*/
__int64 LUI_CoD_LuaCall_ActivateToken(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.ActivateToken( <controllerIndex><token_id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.ActivateToken( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.ActivateToken( <challenge_token_id> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  OnlineProgression::ActivateToken(&OnlineProgression::s_instance, v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetTokenExpirations
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetTokenExpirations(lua_State *const luaVM, long double _XMM1_8)
{
  __int64 v5; 
  __int64 *v6; 
  unsigned int v8; 
  __int64 result; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetTokenExpirations( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetTokenExpirations( <controllerIndex> )\n");
  __asm { vmovsd  xmm6, cs:__real@43f0000000000000 }
  v5 = 4i64;
  v6 = (__int64 *)OnlineProgression::s_instance.m_tokenExpiryTime[lui_tointeger32(luaVM, 1)];
  do
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( *v6 < 0 )
      __asm { vaddsd  xmm1, xmm1, xmm6; n }
    j_lua_pushnumber(luaVM, _XMM1_8);
    ++v6;
    --v5;
  }
  while ( v5 );
  if ( j_lua_gettop(luaVM) < 4 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 4i64, v8);
  }
  result = 4i64;
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return result;
}

/*
==============
LUI_CoD_LuaCall_CheckSinglePlayerRewards
==============
*/
__int64 LUI_CoD_LuaCall_CheckSinglePlayerRewards(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_CheckSinglePlayerRewards_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerLevelXP
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetPlayerLevelXP(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerLevelXP( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerLevelXP( <controllerIndex> )\n");
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (OnlineProgression::s_instance.m_levelProgression[lui_tointeger32(luaVM, 1)].xp & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerLevelRank
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetPlayerLevelRank(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerLevel( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerLevel( <controllerIndex> )\n");
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (OnlineProgression::s_instance.m_levelProgression[lui_tointeger32(luaVM, 1)].rank & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerBROnboardingRewarded
==============
*/
__int64 LUI_CoD_LuaCall_GetPlayerBROnboardingRewarded(lua_State *const luaVM)
{
  __int64 v2; 
  int v3; 
  __int64 v4; 
  int v5; 
  unsigned int v6; 
  __int64 v8; 
  __int64 v9; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerBROnboardingRewarded( <controllerIndex>, <rewardId> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = v3;
    if ( (unsigned int)v3 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 528, ASSERT_TYPE_ASSERT, "(unsigned)( reward ) < (unsigned)( ONLINE_BR_TUTORIAL_REWARD_MAX )", "reward doesn't index ONLINE_BR_TUTORIAL_REWARD_MAX\n\t%i not in [0, %i)", v3, 4) )
      __debugbreak();
    if ( (unsigned int)v2 >= 8 )
    {
      LODWORD(v9) = 8;
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 529, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v5 = OnlineProgression::s_instance.m_brTutorialRewards[v2][v4];
  }
  else
  {
    v5 = 0;
  }
  j_lua_pushboolean(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_RewardPlayerBROnboarding
==============
*/
__int64 LUI_CoD_LuaCall_RewardPlayerBROnboarding(lua_State *const luaVM)
{
  __int64 v2; 
  int v3; 
  __int64 v4; 
  OnlineChallengesManager *Instance; 
  unsigned __int64 UTC; 
  const XUID *Xuid; 
  unsigned int v8; 
  unsigned __int64 timestamp; 
  __int64 v11; 
  int v12; 
  char _Buffer[2]; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.RewardPlayerBROnboarding( <controllerIndex>, <rewardId> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = v3;
    if ( v3 >= 10 )
      j_luaL_error(luaVM, "Rewards over 10 not supported");
    sprintf_s<2>((char (*)[2])_Buffer, "%d", (unsigned int)v3);
    Instance = OnlineChallengesManager::GetInstance();
    UTC = LiveStorage_GetUTC();
    Xuid = Live_GetXuid(&result, v2);
    OnlineChallengesManager::RecordEventForPlayer(Instance, v2, (const XUID)Xuid->m_id, "br_tutorial_complete", _Buffer, UTC);
    if ( (unsigned int)v4 >= 4 )
    {
      v12 = 4;
      LODWORD(timestamp) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 520, ASSERT_TYPE_ASSERT, "(unsigned)( reward ) < (unsigned)( ONLINE_BR_TUTORIAL_REWARD_MAX )", "reward doesn't index ONLINE_BR_TUTORIAL_REWARD_MAX\n\t%i not in [0, %i)", timestamp, v12) )
        __debugbreak();
    }
    if ( (unsigned int)v2 >= 8 )
    {
      LODWORD(v11) = 8;
      LODWORD(timestamp) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 521, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", timestamp, v11) )
        __debugbreak();
    }
    OnlineProgression::s_instance.m_brTutorialRewards[v2][v4] = 1;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerTrialEventRewarded
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetPlayerTrialEventRewarded(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v3; 
  int v4; 
  unsigned int v7; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.GetPlayerTrialEventRewarded( <controllerIndex>, <trialId> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    if ( v4 > 5 )
      j_luaL_error(luaVM, "Rewards over 5 not supported");
    if ( v3 >= 8 )
    {
      v12 = 8;
      v10 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 545, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, v12) )
        __debugbreak();
    }
    if ( (unsigned int)v4 >= 6 )
    {
      LODWORD(v11) = 6;
      LODWORD(v9) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 546, ASSERT_TYPE_ASSERT, "(unsigned)( trialId ) < (unsigned)( 6 )", "trialId doesn't index ONLINE_GAMES_OF_SUMMER_MAX_TRIALS\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, dword ptr [rax+rdx*4]
    }
  }
  else
  {
    __asm { vxorpd  xmm1, xmm1, xmm1; n }
  }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_RewardPlayerForTrialEvent
==============
*/
__int64 LUI_CoD_LuaCall_RewardPlayerForTrialEvent(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_RewardPlayerForTrialEvent_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
OnlineProgression::ActivateToken
==============
*/
void OnlineProgression::ActivateToken(OnlineProgression *this, const int controllerIndex, const int tokenChallengeID)
{
  unsigned __int64 v3; 
  __int64 v4; 
  unsigned int UTC; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v9; 
  DWServicesAccess *v10; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *v12; 
  bdRemoteTask *v13; 
  TaskManager *v14; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  LocalClientNum_t outLocalClientNum; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v20; 
  bdActivateAchievementRequest request; 

  v20 = -2i64;
  v3 = tokenChallengeID;
  v4 = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  UTC = LiveStorage_GetUTC();
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  v9 = j_va("%u", TitleID);
  bdActivateAchievementRequest::bdActivateAchievementRequest(&request, v9, v3, UTC);
  v10 = DWServicesAccess::GetInstance();
  AchievementEngine = DWServicesAccess::GetAchievementEngine(v10, v4);
  v12 = (TaskCreateRequest *)DWAchievementEngine::activateAchievement(AchievementEngine, &result, &request);
  if ( v12 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v13 = *(bdRemoteTask **)&v12->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v13;
    if ( v13 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_controllerIndex = v4;
    pTaskCreateRequest.m_onCompletionCallback = OnlineProgression::OnActivateAchievementComplete;
    this->m_currentChallengeToken[v4] = v3;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(14, "%s - CreateTask created task id %d controllerIndex %d!\n", "OnlineProgression::ActivateToken", pTaskCreateResult.m_localTaskId, v4);
    }
    else
    {
      Com_PrintError(14, "%s - CreateTask failed for controllerIndex %d!\n", "OnlineProgression::ActivateToken", (unsigned int)v4);
      OnlineProgression::ActivationFailed(&OnlineProgression::s_instance, v4);
    }
  }
  else
  {
    Com_PrintError(14, "%s failed for controllerIndex %d\n", "OnlineProgression::ActivateToken", (unsigned int)v4);
    if ( CL_Mgr_IsControllerMappedToClient(v4, &outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "token_activation_failed", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>(&request.m_name);
  bdStructFixedSizeString<20>::~bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&request.__vftable + 2));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)request.gapA0);
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineProgression::ActivationFailed
==============
*/
void OnlineProgression::ActivationFailed(OnlineProgression *this, const int controllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "token_activation_failed", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
CL_GiveXP
==============
*/
void CL_GiveXP(void)
{
  unsigned int v0; 
  int v1; 
  unsigned int v2; 
  const char *v3; 
  const char *v4; 
  int v5; 
  int v6; 
  OnlineChallengesManager *Instance; 
  unsigned __int64 UTC; 
  const char *v9; 
  const XUID *Xuid; 
  char *fmt; 
  unsigned __int64 timestamp; 
  unsigned int timestampa; 
  int v14; 
  XUID result; 

  if ( Cmd_Argc() >= 5 )
  {
    v0 = Cmd_LocalControllerIndex();
    v1 = v0;
    if ( v0 > 8 )
    {
      v14 = 8;
      timestampa = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 64, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", timestampa, 0i64, v14) )
        __debugbreak();
    }
    v2 = Cmd_ArgInt(1);
    v3 = Cmd_Argv(2);
    v4 = Cmd_Argv(3);
    v5 = Cmd_ArgInt(4);
    v6 = Cmd_ArgInt(5);
    Instance = OnlineChallengesManager::GetInstance();
    LODWORD(timestamp) = v6;
    UTC = LiveStorage_GetUTC();
    LODWORD(fmt) = v5;
    v9 = j_va("%d,%s,%s,%d,%d", v2, v3, v4, fmt, timestamp);
    Xuid = Live_GetXuid(&result, v1);
    OnlineChallengesManager::RecordEventForPlayer(Instance, v1, (const XUID)Xuid->m_id, "mp_addxp", v9, UTC);
  }
  else
  {
    Com_Printf(0, "usage: givexp [player_xp][operator][weapon][weapon_xp]\n");
  }
}

/*
==============
OnlineProgression::CheckSinglePlayerRewards
==============
*/
void OnlineProgression::CheckSinglePlayerRewards(OnlineProgression *this, const int controllerIndex)
{
  Online_Loot *Instance; 
  __int64 RowCount; 
  int v6; 
  __int64 v7; 
  __int64 v9; 
  char v10; 
  const char *ColumnValueForRow; 
  int v12; 
  Online_Loot *v13; 
  OnlineChallengesManager *v14; 
  unsigned __int64 timestamp; 
  const char *v16; 
  const XUID *Xuid; 
  __int128 v18; 
  GamerProfileData result; 
  StringTable *tablePtr; 
  XUID v21; 

  if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
  {
    Instance = Online_Loot::GetInstance();
    if ( Online_Loot::HasInventory(Instance, controllerIndex) )
    {
      StringTable_GetAsset("sp_reward_ids.csv", (const StringTable **)&tablePtr);
      if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 968, ASSERT_TYPE_ASSERT, "(rewardTable)", (const char *)&queryFormat, "rewardTable") )
        __debugbreak();
      RowCount = StringTable_GetRowCount(tablePtr);
      _RAX = GamerProfile_GetDataByName(&result, controllerIndex, "missionhighestdifficulty");
      v6 = 0;
      v7 = RowCount;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups [rsp+88h+var_58], xmm0
      }
      if ( (int)RowCount > 0 )
      {
        v9 = 0i64;
        do
        {
          if ( v6 >= 64 )
            break;
          v10 = *(_BYTE *)(v9 + *((_QWORD *)&v18 + 1));
          ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v6, 1);
          v12 = atoi(ColumnValueForRow);
          if ( v10 != 48 )
          {
            v13 = Online_Loot::GetInstance();
            if ( !Online_Loot::GetItemQuantity(v13, controllerIndex, v12) )
            {
              v14 = OnlineChallengesManager::GetInstance();
              timestamp = LiveStorage_GetUTC();
              v16 = j_va("%d", (unsigned int)v6);
              Xuid = Live_GetXuid(&v21, controllerIndex);
              OnlineChallengesManager::RecordEventForPlayer(v14, controllerIndex, (const XUID)Xuid->m_id, "sp_mission_complete", v16, timestamp);
            }
          }
          ++v6;
          ++v9;
        }
        while ( v9 < v7 );
      }
    }
  }
}

/*
==============
OnlineProgression::GetInstance
==============
*/
OnlineProgression *OnlineProgression::GetInstance()
{
  return &OnlineProgression::s_instance;
}

/*
==============
OnlineProgression::GetInstancePtr
==============
*/
OnlineProgression *OnlineProgression::GetInstancePtr()
{
  return &OnlineProgression::s_instance;
}

/*
==============
OnlineProgression::GetPlayerBRTutorialReward
==============
*/
_BOOL8 OnlineProgression::GetPlayerBRTutorialReward(OnlineProgression *this, const int controllerIndex, ONLINE_BR_TUTORIAL_REWARD reward)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = reward;
  v5 = controllerIndex;
  if ( (unsigned int)reward >= ONLINE_BR_TUTORIAL_REWARD_MAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 528, ASSERT_TYPE_ASSERT, "(unsigned)( reward ) < (unsigned)( ONLINE_BR_TUTORIAL_REWARD_MAX )", "reward doesn't index ONLINE_BR_TUTORIAL_REWARD_MAX\n\t%i not in [0, %i)", reward, 4) )
    __debugbreak();
  if ( (unsigned int)v5 >= 8 )
  {
    LODWORD(v8) = 8;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 529, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return this->m_brTutorialRewards[v5][v3];
}

/*
==============
OnlineProgression::GetPlayerTrialsOfSummerReward
==============
*/
__int64 OnlineProgression::GetPlayerTrialsOfSummerReward(OnlineProgression *this, const int controllerIndex, const int trialId)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = controllerIndex;
  v5 = trialId;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 545, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (unsigned int)v5 >= 6 )
  {
    LODWORD(v8) = 6;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 546, ASSERT_TYPE_ASSERT, "(unsigned)( trialId ) < (unsigned)( 6 )", "trialId doesn't index ONLINE_GAMES_OF_SUMMER_MAX_TRIALS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned int)this->m_gamesOfSummerRewards[v3][v5];
}

/*
==============
OnlineProgression::GetSeasonChallengeProgress
==============
*/
unsigned __int64 OnlineProgression::GetSeasonChallengeProgress(OnlineProgression *this, const int controllerIndex, const int challenge_id)
{
  int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  SeasonChallenge *i; 

  v4 = 0;
  v5 = controllerIndex;
  v6 = this->m_seasonChallengeCount[controllerIndex];
  if ( v6 <= 0 )
    return 0i64;
  v7 = 0i64;
  for ( i = this->m_seasonChallenges[controllerIndex]; challenge_id != i->id; ++i )
  {
    ++v4;
    if ( ++v7 >= v6 )
      return 0i64;
  }
  return this->m_seasonChallenges[v5][v4].progress;
}

/*
==============
OnlineProgression::GetSeasonProgression
==============
*/
SeasonProgression *OnlineProgression::GetSeasonProgression(OnlineProgression *this, const int controllerIndex, const int season)
{
  __int64 v3; 
  __int64 v5; 
  int v8; 

  v3 = season;
  v5 = controllerIndex;
  if ( (unsigned int)season >= 7 )
  {
    v8 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 500, ASSERT_TYPE_ASSERT, "(unsigned)( season ) < (unsigned)( 7 )", "season doesn't index MAX_SEASONS\n\t%i not in [0, %i)", season, v8) )
      __debugbreak();
  }
  return &this->m_seasonProgression[v5][v3];
}

/*
==============
OnlineProgression::GetUserState
==============
*/
void OnlineProgression::GetUserState(OnlineProgression *this, const int controllerIndex, ONLINE_USER_STATE_STAGE stage)
{
  __int64 v4; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v8; 
  DWServicesAccess *v9; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *UserState; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v18; 
  bdGetUserStateRequest request; 

  v18 = -2i64;
  v4 = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  v8 = j_va("%u", TitleID);
  bdGetUserStateRequest::bdGetUserStateRequest(&request, v8);
  v9 = DWServicesAccess::GetInstance();
  AchievementEngine = DWServicesAccess::GetAchievementEngine(v9, v4);
  UserState = (TaskCreateRequest *)DWAchievementEngine::getUserState(AchievementEngine, &result, &request, &this->m_getUserResponse[v4]);
  if ( UserState != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v12 = *(bdRemoteTask **)&UserState->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( !pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    Com_PrintError(14, "%s failed for controllerIndex %d\n", "OnlineProgression::GetUserState", (unsigned int)v4);
LABEL_18:
    Online_Retry::SetNextRetry(&this->m_getUserStateRetry[v4]);
    if ( stage )
    {
      if ( stage == ONLINE_USER_STATE_STAGE_NEED_TOKENS )
      {
        this->m_userStateStage[v4] = ONLINE_USER_STATE_STAGE_RETRYING_TOKENS;
      }
      else if ( stage == ONLINE_USER_STATE_STAGE_NEED_DAILY_INDEX )
      {
        this->m_userStateStage[v4] = ONLINE_USER_STATE_STAGE_RETRYING_DAILY_INDEX;
      }
    }
    else
    {
      this->m_userStateStage[v4] = ONLINE_USER_STATE_STAGE_RETRYING;
    }
    goto LABEL_24;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_controllerIndex = v4;
  pTaskCreateRequest.m_onCompletionCallback = OnlineProgression::OnGetUserStateComplete;
  v13 = TaskManager::GetInstance();
  if ( !TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult) )
  {
    Com_PrintError(14, "%s - CreateTask failed for controllerIndex %d!\n", "OnlineProgression::GetUserState", (unsigned int)v4);
    goto LABEL_18;
  }
  Com_Printf(14, "%s - CreateTask created task id %d controllerIndex %d!\n", "OnlineProgression::GetUserState", pTaskCreateResult.m_localTaskId, v4);
  if ( stage )
  {
    if ( stage == ONLINE_USER_STATE_STAGE_NEED_TOKENS )
    {
      this->m_userStateStage[v4] = ONLINE_USER_STATE_STAGE_FETCHING_TOKENS;
    }
    else if ( stage == ONLINE_USER_STATE_STAGE_NEED_DAILY_INDEX )
    {
      this->m_userStateStage[v4] = ONLINE_USER_STATE_STAGE_FETCHING_DAILY_INDEX;
    }
  }
  else
  {
    this->m_userStateStage[v4] = ONLINE_USER_STATE_STAGE_FETCHING;
  }
LABEL_24:
  bdStructFixedSizeString<20>::~bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&request.__vftable + 2));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&request.gap25[3]);
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
LUI_CoD_LuaCall_CheckSinglePlayerRewards_impl
==============
*/
__int64 LUI_CoD_LuaCall_CheckSinglePlayerRewards_impl(lua_State *const luaVM)
{
  int v2; 
  Online_Loot *Instance; 
  __int64 RowCount; 
  int v6; 
  __int64 v7; 
  __int64 v9; 
  char v10; 
  const char *ColumnValueForRow; 
  int v12; 
  Online_Loot *v13; 
  OnlineChallengesManager *v14; 
  unsigned __int64 timestamp; 
  const char *v16; 
  const XUID *Xuid; 
  __int128 v19; 
  GamerProfileData result; 
  StringTable *tablePtr; 
  XUID v22; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.CheckSinglePlayerRewards( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.CheckSinglePlayerRewards( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  if ( dwGetLogOnStatus(v2) != DW_LIVE_CONNECTED )
    return 0i64;
  Instance = Online_Loot::GetInstance();
  if ( !Online_Loot::HasInventory(Instance, v2) )
    return 0i64;
  StringTable_GetAsset("sp_reward_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 968, ASSERT_TYPE_ASSERT, "(rewardTable)", (const char *)&queryFormat, "rewardTable") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  _RAX = GamerProfile_GetDataByName(&result, v2, "missionhighestdifficulty");
  v6 = 0;
  v7 = RowCount;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rsp+88h+var_58], xmm0
  }
  if ( (int)RowCount <= 0 )
    return 0i64;
  v9 = 0i64;
  do
  {
    if ( v6 >= 64 )
      break;
    v10 = *(_BYTE *)(v9 + *((_QWORD *)&v19 + 1));
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v6, 1);
    v12 = atoi(ColumnValueForRow);
    if ( v10 != 48 )
    {
      v13 = Online_Loot::GetInstance();
      if ( !Online_Loot::GetItemQuantity(v13, v2, v12) )
      {
        v14 = OnlineChallengesManager::GetInstance();
        timestamp = LiveStorage_GetUTC();
        v16 = j_va("%d", (unsigned int)v6);
        Xuid = Live_GetXuid(&v22, v2);
        OnlineChallengesManager::RecordEventForPlayer(v14, v2, (const XUID)Xuid->m_id, "sp_mission_complete", v16, timestamp);
      }
    }
    ++v6;
    ++v9;
  }
  while ( v9 < v7 );
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RewardPlayerForTrialEvent_impl
==============
*/
__int64 LUI_CoD_LuaCall_RewardPlayerForTrialEvent_impl(lua_State *const luaVM)
{
  __int64 v2; 
  __int64 v3; 
  int v4; 
  ONLINE_GAMES_OF_SUMMER_REWARD_TYPES v5; 
  OnlineChallengesManager *Instance; 
  unsigned __int64 UTC; 
  const XUID *Xuid; 
  unsigned __int64 timestamp; 
  __int64 v11; 
  int v12; 
  char _Buffer[4]; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: OnlineProgression.RewardPlayerForTrialEvent( <controllerIndex>, <trialId>, <bestMedal> )\n");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = lui_tointeger32(luaVM, 3);
    v5 = v4;
    if ( (int)v3 > 5 )
      j_luaL_error(luaVM, "Rewards over 5 not supported");
    if ( v4 > 3 )
      j_luaL_error(luaVM, "Rewards over 3 not supported");
    sprintf_s<4>((char (*)[4])_Buffer, "%d,%d", (unsigned int)v3, (unsigned int)v4);
    Instance = OnlineChallengesManager::GetInstance();
    UTC = LiveStorage_GetUTC();
    Xuid = Live_GetXuid(&result, v2);
    OnlineChallengesManager::RecordEventForPlayer(Instance, v2, (const XUID)Xuid->m_id, "games_of_summer_complete", _Buffer, UTC);
    if ( (unsigned int)v5 >= ONLINE_GAMES_OF_SUMMER_REWARD_TYPES_MAX )
    {
      v12 = 4;
      LODWORD(timestamp) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 536, ASSERT_TYPE_ASSERT, "(unsigned)( bestMedal ) < (unsigned)( ONLINE_GAMES_OF_SUMMER_REWARD_TYPES_MAX )", "bestMedal doesn't index ONLINE_GAMES_OF_SUMMER_REWARD_TYPES_MAX\n\t%i not in [0, %i)", timestamp, v12) )
        __debugbreak();
    }
    if ( (unsigned int)v2 >= 8 )
    {
      LODWORD(v11) = 8;
      LODWORD(timestamp) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 537, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", timestamp, v11) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= 6 )
    {
      LODWORD(v11) = 6;
      LODWORD(timestamp) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 538, ASSERT_TYPE_ASSERT, "(unsigned)( trialId ) < (unsigned)( 6 )", "trialId doesn't index ONLINE_GAMES_OF_SUMMER_MAX_TRIALS\n\t%i not in [0, %i)", timestamp, v11) )
        __debugbreak();
    }
    OnlineProgression::s_instance.m_gamesOfSummerRewards[v2][v3] = v5;
  }
  return 0i64;
}

/*
==============
OnlineProgression::OnActivateAchievementComplete
==============
*/
void OnlineProgression::OnActivateAchievementComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  unsigned int v5; 
  const char *v6; 
  const char *v7; 
  Online_Loot *Instance; 
  int v9; 
  const char *v10; 
  const char *v11; 
  OnlineChallengesManager *v12; 
  unsigned __int64 timestamp; 
  const XUID *Xuid; 
  StringTable *tablePtr; 
  XUID result; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 617, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      Com_PrintError(25, "activateAchievement - Error\n");
      OnlineProgression::ActivationFailed(&OnlineProgression::s_instance, pTask->m_controllerIndex);
    }
  }
  else
  {
    Com_Printf(25, "activateAchievement - Success\n");
    m_controllerIndex = pTask->m_controllerIndex;
    v5 = OnlineProgression::s_instance.m_currentChallengeToken[m_controllerIndex];
    StringTable_GetAsset("loot/consumable_ids.csv", (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 603, ASSERT_TYPE_ASSERT, "(consumbleTable)", (const char *)&queryFormat, "consumbleTable") )
      __debugbreak();
    v6 = j_va("%d", v5);
    v7 = StringTable_Lookup(tablePtr, 6, v6, 0);
    Instance = Online_Loot::GetInstance();
    v9 = atoi(v7);
    Online_Loot::UpdateItemInInventory(Instance, m_controllerIndex, v9, -1, 0);
    v10 = j_va("%d", v5);
    v11 = StringTable_Lookup(tablePtr, 6, v10, 7);
    v12 = OnlineChallengesManager::GetInstance();
    timestamp = LiveStorage_GetUTC();
    Xuid = Live_GetXuid(&result, m_controllerIndex);
    OnlineChallengesManager::RecordEventForPlayer(v12, m_controllerIndex, (const XUID)Xuid->m_id, v11, (const char *)&queryFormat.fmt + 3, timestamp);
  }
}

/*
==============
OnlineProgression::OnGetProgressionComplete
==============
*/
void OnlineProgression::OnGetProgressionComplete(OnlineProgression *this, const int controllerIndex, bdAchievementState *state)
{
  __int64 v4; 
  int v6; 
  unsigned __int64 Id; 
  unsigned __int64 v8; 
  PlayerProgression *v9; 
  unsigned int v10; 
  unsigned __int64 AchievementCurrentProgress; 
  const char *TargetName; 
  const char *Name; 
  const char *v16; 
  __int64 v17; 
  const char *v18; 
  signed __int64 v19; 
  int v20; 
  int v21; 
  int v23; 
  int v24; 
  const dvar_t *v25; 
  const char *v26; 
  __int64 v27; 
  const char *v28; 
  signed __int64 v29; 
  int v30; 
  int v31; 
  int v33; 
  int v34; 
  _QWORD *v35; 
  PlayerProgression *v36; 
  const dvar_t *v37; 
  unsigned int v38; 
  bdAchievementState *i; 
  unsigned __int64 v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  const dvar_t *v49; 
  int v50; 
  SeasonChallenge *v51; 
  unsigned int Progress; 
  unsigned int v53; 
  int v54; 
  bdAchievementProgress v58; 

  v4 = controllerIndex;
  v6 = 0;
  Id = bdAchievementState::getId(state);
  v8 = Id;
  if ( Id == 1000000 )
  {
    v9 = &this->m_playerProgression[v4];
    v10 = 0;
    if ( bdAchievementState::getNumMultiProgresses(state) )
    {
      do
      {
        _RBX = bdAchievementState::getMultiProgress(state, v10);
        *((_QWORD *)&v58.__vftable + 1) = &bdAchievementProgress::`vbtable';
        bdReferencable::bdReferencable((bdReferencable *)v58.gap48, (const bdReferencable *)((char *)&_RBX->__vftable + *(int *)(*((_QWORD *)&_RBX->__vftable + 1) + 4i64) + 8));
        v6 |= 1u;
        bdStructBufferSerializable::bdStructBufferSerializable(&v58, _RBX);
        v58.__vftable = (bdAchievementProgress_vtbl *)&bdAchievementProgress::`vftable'{for `bdStructBufferSerializable'};
        *(_QWORD *)&v58.m_targetName[*(int *)(*((_QWORD *)&v58.__vftable + 1) + 4i64) - 24] = &bdAchievementProgress::`vftable'{for `bdReferencable'};
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx+10h]
          vmovups ymmword ptr [rbp+57h+var_A0+10h], ymm0
        }
        v58.m_targetName[16] = _RBX->m_targetName[16];
        v58.m_currentProgress = _RBX->m_currentProgress;
        v58.m_targetProgress = _RBX->m_targetProgress;
        AchievementCurrentProgress = bdAchievementProgress::getAchievementCurrentProgress(&v58);
        TargetName = bdAchievementProgress::getTargetName(&v58);
        Name = bdAchievementState::getName(state);
        Com_Printf(25, "(%s) %s = %ld\n", Name, TargetName, AchievementCurrentProgress);
        v16 = bdAchievementProgress::getTargetName(&v58);
        v17 = 0x7FFFFFFFi64;
        v18 = "xp";
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v19 = v16 - "xp";
        while ( 1 )
        {
          v20 = (unsigned __int8)v18[v19];
          v21 = *(unsigned __int8 *)v18++;
          if ( !v17-- )
          {
LABEL_15:
            v9->xp = bdAchievementProgress::getAchievementCurrentProgress(&v58);
            goto LABEL_16;
          }
          if ( v20 != v21 )
          {
            v23 = v20 + 32;
            if ( (unsigned int)(v20 - 65) > 0x19 )
              v23 = v20;
            v20 = v23;
            v24 = v21 + 32;
            if ( (unsigned int)(v21 - 65) > 0x19 )
              v24 = v21;
            if ( v20 != v24 )
              break;
          }
          if ( !v20 )
            goto LABEL_15;
        }
        v26 = bdAchievementProgress::getTargetName(&v58);
        v27 = 0x7FFFFFFFi64;
        v28 = "rank";
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v29 = v26 - "rank";
        do
        {
          v30 = (unsigned __int8)v28[v29];
          v31 = *(unsigned __int8 *)v28++;
          if ( !v27-- )
            break;
          if ( v30 != v31 )
          {
            v33 = v30 + 32;
            if ( (unsigned int)(v30 - 65) > 0x19 )
              v33 = v30;
            v30 = v33;
            v34 = v31 + 32;
            if ( (unsigned int)(v31 - 65) > 0x19 )
              v34 = v31;
            if ( v30 != v34 )
              goto LABEL_16;
          }
        }
        while ( v30 );
        v9->rank = bdAchievementProgress::getAchievementCurrentProgress(&v58);
LABEL_16:
        bdStructFixedSizeString<32>::~bdStructFixedSizeString<32>((bdStructFixedSizeString<32> *)(&v58.__vftable + 2));
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v58.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)v58.gap48);
        ++v10;
      }
      while ( v10 < bdAchievementState::getNumMultiProgresses(state) );
      LODWORD(v4) = controllerIndex;
    }
    v25 = DVARBOOL_online_challenge_update_player_data_once_when_done;
    if ( !DVARBOOL_online_challenge_update_player_data_once_when_done && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_update_player_data_once_when_done") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( !v25->current.enabled )
      OnlineProgression::UpdatePlayerStats(this, v4);
  }
  else if ( Id - 1001001 > 6 )
  {
    v50 = this->m_seasonChallengeCount[v4];
    if ( v50 <= 0 )
    {
LABEL_61:
      if ( (unsigned int)v50 >= 0x2BC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( m_seasonChallengeCount[controllerIndex] ) < (unsigned)( ( 100 * 7 ) )", "m_seasonChallengeCount[controllerIndex] doesn't index MAX_SEASON_CHALLENGES\n\t%i not in [0, %i)", this->m_seasonChallengeCount[v4], 700) )
        __debugbreak();
      if ( this->m_seasonChallengeCount[v4] < 700 )
      {
        Progress = bdAchievementState::getProgress(state);
        Com_Printf(25, "Added New Season Challenge %lu with Progress %d\n", v8, Progress);
        this->m_seasonChallenges[v4][this->m_seasonChallengeCount[v4]].id = v8;
        this->m_seasonChallenges[v4][this->m_seasonChallengeCount[v4]++].progress = bdAchievementState::getProgress(state);
      }
    }
    else
    {
      v51 = this->m_seasonChallenges[v4];
      while ( Id != v51->id )
      {
        ++v6;
        ++v51;
        if ( v6 >= v50 )
          goto LABEL_61;
      }
      v53 = bdAchievementState::getProgress(state);
      Com_Printf(25, "Updated Season Challenge %lu with Progress %d\n", v8, v53);
      this->m_seasonChallenges[v4][v6].progress = bdAchievementState::getProgress(state);
    }
  }
  else
  {
    v35 = (_QWORD *)((char *)&this[-128] + 112 * v4 + 16 * Id - 70096);
    v36 = &this->m_levelProgression[v4];
    v37 = DVARINT_current_season;
    if ( !DVARINT_current_season && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "current_season") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v54 = v37->current.integer + 1001001;
    v38 = 0;
    for ( i = state; v38 < bdAchievementState::getNumMultiProgresses(state); i = state )
    {
      _RBX = bdAchievementState::getMultiProgress(i, v38);
      *((_QWORD *)&v58.__vftable + 1) = &bdAchievementProgress::`vbtable';
      bdReferencable::bdReferencable((bdReferencable *)v58.gap48, (const bdReferencable *)((char *)&_RBX->__vftable + *(int *)(*((_QWORD *)&_RBX->__vftable + 1) + 4i64) + 8));
      v6 |= 2u;
      bdStructBufferSerializable::bdStructBufferSerializable(&v58, _RBX);
      v58.__vftable = (bdAchievementProgress_vtbl *)&bdAchievementProgress::`vftable'{for `bdStructBufferSerializable'};
      *(_QWORD *)&v58.m_targetName[*(int *)(*((_QWORD *)&v58.__vftable + 1) + 4i64) - 24] = &bdAchievementProgress::`vftable'{for `bdReferencable'};
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+10h]
        vmovups ymmword ptr [rbp+57h+var_A0+10h], ymm0
      }
      v58.m_targetName[16] = _RBX->m_targetName[16];
      v58.m_currentProgress = _RBX->m_currentProgress;
      v58.m_targetProgress = _RBX->m_targetProgress;
      v42 = bdAchievementProgress::getAchievementCurrentProgress(&v58);
      v43 = bdAchievementProgress::getTargetName(&v58);
      v44 = bdAchievementState::getName(state);
      Com_Printf(25, "(%s) %s = %ld\n", v44, v43, v42);
      v45 = bdAchievementProgress::getTargetName(&v58);
      if ( I_stricmp(v45, "xp") )
      {
        v46 = bdAchievementProgress::getTargetName(&v58);
        if ( I_stricmp(v46, "rank") )
        {
          v47 = bdAchievementProgress::getTargetName(&v58);
          if ( I_stricmp(v47, "level_xp") )
          {
            v48 = bdAchievementProgress::getTargetName(&v58);
            if ( !I_stricmp(v48, "level") && v8 == v54 )
              v36->rank = bdAchievementProgress::getAchievementCurrentProgress(&v58);
          }
          else if ( v8 == v54 )
          {
            v36->xp = bdAchievementProgress::getAchievementCurrentProgress(&v58);
          }
        }
        else
        {
          v35[1] = bdAchievementProgress::getAchievementCurrentProgress(&v58);
        }
      }
      else
      {
        *v35 = bdAchievementProgress::getAchievementCurrentProgress(&v58);
      }
      bdStructFixedSizeString<32>::~bdStructFixedSizeString<32>((bdStructFixedSizeString<32> *)(&v58.__vftable + 2));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v58.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)v58.gap48);
      ++v38;
    }
    v49 = DVARBOOL_online_challenge_update_player_data_once_when_done;
    if ( !DVARBOOL_online_challenge_update_player_data_once_when_done && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_update_player_data_once_when_done") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    if ( !v49->current.enabled )
      OnlineProgression::UpdatePlayerStats(this, controllerIndex);
  }
}

/*
==============
OnlineProgression::OnGetUserStateComplete
==============
*/
void OnlineProgression::OnGetUserStateComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  ONLINE_USER_STATE_STAGE v5; 
  __int64 v6; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 727, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_controllerIndex = pTask->m_controllerIndex;
  v5 = OnlineProgression::s_instance.m_userStateStage[m_controllerIndex];
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      Com_PrintError(25, "GetUserState - Error\n");
      Online_Retry::SetNextRetry(&OnlineProgression::s_instance.m_getUserStateRetry[m_controllerIndex]);
      switch ( v5 )
      {
        case ONLINE_USER_STATE_STAGE_FETCHING:
          OnlineProgression::s_instance.m_userStateStage[m_controllerIndex] = ONLINE_USER_STATE_STAGE_RETRYING;
          break;
        case ONLINE_USER_STATE_STAGE_FETCHING_TOKENS:
          OnlineProgression::s_instance.m_userStateStage[m_controllerIndex] = ONLINE_USER_STATE_STAGE_RETRYING_TOKENS;
          break;
        case ONLINE_USER_STATE_STAGE_FETCHING_DAILY_INDEX:
          OnlineProgression::s_instance.m_userStateStage[m_controllerIndex] = ONLINE_USER_STATE_STAGE_RETRYING_DAILY_INDEX;
          break;
      }
    }
  }
  else
  {
    Com_Printf(25, "GetUserState - Success\n");
    OnlineProgression::ParseUserState(&OnlineProgression::s_instance, m_controllerIndex);
    v6 = m_controllerIndex;
    *(_QWORD *)&OnlineProgression::s_instance.m_getUserStateRetry[v6].m_numRetries = 0i64;
    OnlineProgression::s_instance.m_getUserStateRetry[v6].m_retrying = 0;
    if ( v5 == ONLINE_USER_STATE_STAGE_FETCHING )
    {
      OnlineProgression::s_instance.m_userStateStage[m_controllerIndex] = ONLINE_USER_STATE_STAGE_INITIAL_DOWNLOAD_COMPLETE;
    }
    else if ( v5 == ONLINE_USER_STATE_STAGE_FETCHING_TOKENS || v5 == ONLINE_USER_STATE_STAGE_FETCHING_DAILY_INDEX )
    {
      OnlineProgression::s_instance.m_userStateStage[m_controllerIndex] = ONLINE_USER_STATE_STAGE_COMPLETE;
    }
  }
}

/*
==============
OnlineProgression::OnResume
==============
*/
void OnlineProgression::OnResume(OnlineProgression *this)
{
  int i; 

  for ( i = 0; i < 8; ++i )
  {
    this->OnSignedOut(this, i, SignedOutFromOnline);
    this->OnSignedIn(this, i, SignedInToDemonWare);
  }
}

/*
==============
OnlineProgression::ParseUserState
==============
*/
void OnlineProgression::ParseUserState(OnlineProgression *this, const int controllerIndex)
{
  __int64 v2; 
  const char *UserState; 
  __int64 v5; 
  unsigned __int64 *v6; 
  __int64 v7; 
  const char *const *v8; 
  __int64 v9; 
  const dvar_t *v10; 
  __int64 i; 
  int v12; 
  const char *const *v13; 
  OnlineBattlepass *Instance; 
  const char *v15; 
  OnlineBattlepass *v16; 
  OnlineScheduledChallenges *v17; 
  OnlineScheduledChallenges *v18; 
  OnlineScheduledChallenges *v19; 
  OnlineScheduledChallenges *v20; 
  OnlineScheduledChallenges *v21; 
  int index; 
  bdJSONDeserializer v23; 
  int v24; 
  bdJSONDeserializer value; 
  __int64 v26; 
  __int64 v27[7]; 

  v26 = -2i64;
  v2 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&v23);
  v27[0] = (__int64)"battlepass0_owned";
  v27[1] = (__int64)"battlepass1_owned";
  v27[2] = (__int64)"battlepass2_owned";
  v27[3] = (__int64)"battlepass3_owned";
  v27[4] = (__int64)"battlepass4_owned";
  v27[5] = (__int64)"battlepass5_owned";
  v27[6] = (__int64)"battlepass6_owned";
  UserState = bdGetUserStateResponse::getUserState(&this->m_getUserResponse[v2]);
  bdJSONDeserializer::parse(&v23, UserState);
  if ( v23.m_parsed )
  {
    v5 = v2;
    if ( bdJSONDeserializer::hasKey(&v23, "player_xp_end_time") )
    {
      bdJSONDeserializer::getUInt64(&v23, "player_xp_end_time", this->m_tokenExpiryTime[v5]);
      this->m_tokenExpiryTime[v2][0] /= 0x3E8ui64;
    }
    v6 = (unsigned __int64 *)((char *)this + v5 * 32);
    if ( bdJSONDeserializer::hasKey(&v23, "weapon_xp_end_time") )
    {
      bdJSONDeserializer::getUInt64(&v23, "weapon_xp_end_time", &this->m_tokenExpiryTime[v5][1]);
      this->m_tokenExpiryTime[v5][1] /= 0x3E8ui64;
    }
    if ( bdJSONDeserializer::hasKey(&v23, "keys_end_time") )
    {
      bdJSONDeserializer::getUInt64(&v23, "keys_end_time", v6 + 15510);
      v6[15510] /= 0x3E8ui64;
    }
    if ( bdJSONDeserializer::hasKey(&v23, "battle_xp_end_time") )
    {
      bdJSONDeserializer::getUInt64(&v23, "battle_xp_end_time", v6 + 15511);
      this->m_tokenExpiryTime[v5][3] /= 0x3E8ui64;
    }
    if ( bdJSONDeserializer::hasKey(&v23, "br_tutorial_rewarded") )
    {
      bdJSONDeserializer::bdJSONDeserializer(&value);
      bdJSONDeserializer::getFieldByKey(&v23, "br_tutorial_rewarded", &value, 1);
      v7 = 0i64;
      v8 = s_ONLINE_BR_TUTORIAL_REWARD_KEYS;
      v9 = 4i64;
      do
      {
        if ( bdJSONDeserializer::hasKey(&value, *v8) )
          bdJSONDeserializer::getBoolean(&value, *v8, &this->m_brTutorialRewards[v2][v7]);
        ++v7;
        ++v8;
        --v9;
      }
      while ( v9 );
      bdJSONDeserializer::~bdJSONDeserializer(&value);
    }
    if ( bdJSONDeserializer::hasKey(&v23, "games_of_summer_rewarded") )
    {
      v10 = DVARBOOL_online_challenge_games_of_summer_parse_user_state;
      if ( !DVARBOOL_online_challenge_games_of_summer_parse_user_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_games_of_summer_parse_user_state") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
      {
        bdJSONDeserializer::bdJSONDeserializer(&value);
        bdJSONDeserializer::getFieldByKey(&v23, "games_of_summer_rewarded", &value, 1);
        for ( i = 0i64; i < 6; ++i )
        {
          if ( bdJSONDeserializer::hasKey(&value, s_ONLINE_GAMES_OF_SUMMER_TRIAL_KEYS[i]) )
          {
            bdJSONDeserializer::getInt32(&value, s_ONLINE_GAMES_OF_SUMMER_TRIAL_KEYS[i], &index);
            this->m_gamesOfSummerRewards[v2][i] = index;
          }
        }
        bdJSONDeserializer::~bdJSONDeserializer(&value);
      }
    }
    v12 = 0;
    v13 = (const char *const *)v27;
    do
    {
      Instance = OnlineBattlepass::GetInstance();
      OnlineBattlepass::SetOwnsBattlepass(Instance, v2, v12, 0);
      v15 = *v13;
      if ( bdJSONDeserializer::hasKey(&v23, *v13) )
      {
        v24 = 0;
        bdJSONDeserializer::getInt32(&v23, v15, &v24);
        v16 = OnlineBattlepass::GetInstance();
        OnlineBattlepass::SetOwnsBattlepass(v16, v2, v12, v24 != 0);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < 7 );
    if ( bdJSONDeserializer::hasKey(&v23, "daily_index") )
    {
      bdJSONDeserializer::getInt32(&v23, "daily_index", &index);
      v17 = OnlineScheduledChallenges::GetInstance();
      OnlineScheduledChallenges::SetDailyCurrentIndex(v17, v2, index);
    }
    if ( bdJSONDeserializer::hasKey(&v23, "br_daily_index") )
    {
      bdJSONDeserializer::getInt32(&v23, "br_daily_index", &index);
      v18 = OnlineScheduledChallenges::GetInstance();
      OnlineScheduledChallenges::SetBRDailyCurrentIndex(v18, v2, index);
    }
    if ( bdJSONDeserializer::hasKey(&v23, "cp_daily_index") )
    {
      bdJSONDeserializer::getInt32(&v23, "cp_daily_index", &index);
      v19 = OnlineScheduledChallenges::GetInstance();
      OnlineScheduledChallenges::SetCPDailyCurrentIndex(v19, v2, index);
    }
    if ( bdJSONDeserializer::hasKey(&v23, "special_event_day") )
    {
      bdJSONDeserializer::getInt32(&v23, "special_event_day", &index);
      v20 = OnlineScheduledChallenges::GetInstance();
      OnlineScheduledChallenges::SetSpecialEventDay(v20, v2, index);
    }
    if ( bdJSONDeserializer::hasKey(&v23, "br_special_event_day") )
    {
      bdJSONDeserializer::getInt32(&v23, "br_special_event_day", &index);
      v21 = OnlineScheduledChallenges::GetInstance();
      OnlineScheduledChallenges::SetBRSpecialEventDay(v21, v2, index);
    }
  }
  OnlineQuests::GetInstance()->m_hasBattlepassData[v2] = 1;
  bdJSONDeserializer::~bdJSONDeserializer(&v23);
}

/*
==============
OnlineProgression::RequestUserState
==============
*/
void OnlineProgression::RequestUserState(OnlineProgression *this, const int controllerIndex, ONLINE_USER_STATE_STAGE stage)
{
  this->m_userStateStage[controllerIndex] = stage;
}

/*
==============
OnlineProgression::ResetProgression
==============
*/
void OnlineProgression::ResetProgression(OnlineProgression *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  v2 = controllerIndex;
  v4 = controllerIndex;
  this->m_playerProgression[v4].rank = 0i64;
  this->m_levelProgression[v4].rank = 0i64;
  this->m_playerProgression[v2].xp = 0i64;
  this->m_levelProgression[v2].xp = 0i64;
  this->m_seasonChallengeCount[v2] = 0;
  memset_0(this->m_seasonProgression[v2], 0, sizeof(this->m_seasonProgression[v2]));
  memset_0(this->m_seasonChallenges[v2], 0, sizeof(this->m_seasonChallenges[v2]));
  *(_DWORD *)&this->m_brTutorialRewards[v2][0] = 0;
  v5 = v2;
  *(_QWORD *)&this->m_gamesOfSummerRewards[v5][0] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[v5][2] = 0i64;
  *(_QWORD *)&this->m_gamesOfSummerRewards[v5][4] = 0i64;
}

/*
==============
OnlineProgression::SendSeasonChallengesComplete
==============
*/
void OnlineProgression::SendSeasonChallengesComplete(OnlineProgression *this, const int controllerIndex)
{
  __int64 v2; 
  const dvar_t *v4; 
  unsigned int UTC; 
  int v6; 
  __int64 v7; 
  const dvar_t *v8; 
  int v9; 
  const char *v10; 
  int RowCount; 
  int i; 
  const char *ColumnValueForRow; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  SeasonChallenge *v17; 
  unsigned __int64 progress; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v24; 
  DWServicesAccess *v25; 
  DWAchievementEngine *AchievementEngine; 
  _BYTE *v27; 
  unsigned __int64 v28; 
  _BYTE *v29; 
  unsigned __int64 v30; 
  _BYTE *v31; 
  unsigned __int64 v32; 
  _BYTE *v33; 
  unsigned __int64 v34; 
  _BYTE *v35; 
  unsigned __int64 v36; 
  StringTable *table; 
  StringTable *tablePtr; 
  bdReference<bdRemoteTask> result; 
  bdAchievementEvent *events[2]; 
  bdAchievementEvent ptr; 
  bdReportEventsRequest request; 

  events[1] = (bdAchievementEvent *)-2i64;
  v2 = controllerIndex;
  v4 = DVARBOOL_online_challenge_upload_season_update;
  if ( !DVARBOOL_online_challenge_upload_season_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_season_update") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    StringTable_GetAsset("elder_challenges.csv", (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 996, ASSERT_TYPE_ASSERT, "(missionTable)", (const char *)&queryFormat, "missionTable") )
      __debugbreak();
    UTC = LiveStorage_GetUTC();
    bdAchievementEvent::bdAchievementEvent(&ptr, "seasons", UTC);
    bdAchievementEvent::addKeyValue(&ptr, "version", 1ui64);
    v6 = 0;
    v7 = v2;
    while ( 1 )
    {
      v8 = DVARINT_current_season;
      if ( !DVARINT_current_season && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "current_season") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v6 > v8->current.integer || v6 >= 7 )
        break;
      v9 = 0;
      v10 = j_va("mp/progression/elder%d_progression.csv", (unsigned int)v6);
      StringTable_GetAsset(v10, (const StringTable **)&table);
      if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 1007, ASSERT_TYPE_ASSERT, "(seasonTable)", (const char *)&queryFormat, "seasonTable") )
        __debugbreak();
      RowCount = StringTable_GetRowCount(table);
      for ( i = 0; i < RowCount; ++i )
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(table, i, 8);
        v14 = atoi(ColumnValueForRow);
        if ( v14 > 0 )
        {
          v15 = 0i64;
          v16 = this->m_seasonChallengeCount[v7];
          if ( v16 <= 0 )
          {
LABEL_23:
            progress = 0i64;
          }
          else
          {
            v17 = this->m_seasonChallenges[v7];
            while ( v14 != v17->id )
            {
              ++v15;
              ++v17;
              if ( v15 >= v16 )
                goto LABEL_23;
            }
            progress = this->m_seasonChallenges[v7][v15].progress;
          }
          v19 = j_va("%d", (unsigned int)v14);
          v20 = StringTable_Lookup(tablePtr, 0, v19, 4);
          if ( progress >= atoi(v20) )
            ++v9;
        }
      }
      v21 = j_va("season%d", (unsigned int)v6);
      bdAchievementEvent::addKeyValue(&ptr, v21, v9);
      ++v6;
    }
    events[0] = &ptr;
    Instance = DWServicesAccess::GetInstance();
    TitleID = DWServicesAccess::GetTitleID(Instance);
    v24 = j_va("%u", TitleID);
    bdReportEventsRequest::bdReportEventsRequest(&request, v24, 1u, (const bdAchievementEvent **)events, NULL);
    v25 = DWServicesAccess::GetInstance();
    AchievementEngine = DWServicesAccess::GetAchievementEngine(v25, controllerIndex);
    DWAchievementEngine::reportEvents(AchievementEngine, &result, &request);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    v27 = memchr_0(&request.m_requestID, 0, 0x1Aui64);
    if ( v27 )
      v28 = v27 - (_BYTE *)&request.m_requestID;
    else
      v28 = 26i64;
    bdHandleAssert(v28 < 0x1A, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<25>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_accountID._bytes_48);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_accountID.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)request.m_accountID._bytes_48);
    v29 = memchr_0(&request._bytes_20[78], 0, 0x1001ui64);
    if ( v29 )
      v30 = v29 - &request._bytes_20[78];
    else
      v30 = 4097i64;
    bdHandleAssert(v30 < 0x1001, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<4096>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    v31 = memchr_0(&request._bytes_20[13], 0, 0x41ui64);
    if ( v31 )
      v32 = v31 - &request._bytes_20[13];
    else
      v32 = 65i64;
    bdHandleAssert(v32 < 0x41, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<64>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    v33 = memchr_0((char *)&request.__vftable + 28, 0, 0x11ui64);
    if ( v33 )
      v34 = v33 - ((char *)&request.__vftable + 28);
    else
      v34 = 17i64;
    bdHandleAssert(v34 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    bdRESTRequest::~bdRESTRequest((bdRESTRequest *)&request.__vftable + 2);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.gap10F2[6]);
    `eh vector destructor iterator'(&ptr.m_keyValues, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdAchievementEventKeyValue::`vbase destructor);
    v35 = memchr_0(&ptr.__vftable + 3, 0, 0x65ui64);
    if ( v35 )
      v36 = v35 - (_BYTE *)(&ptr.__vftable + 3);
    else
      v36 = 101i64;
    bdHandleAssert(v36 < 0x65, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&ptr.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&ptr.m_keyValues + 1));
  }
}

/*
==============
OnlineProgression::SendTokenActivationMessage
==============
*/
void OnlineProgression::SendTokenActivationMessage(OnlineProgression *this, const int controllerIndex)
{
  unsigned int v3; 
  const char *v4; 
  const char *v5; 
  Online_Loot *Instance; 
  int v7; 
  const char *v8; 
  const char *v9; 
  OnlineChallengesManager *v10; 
  unsigned __int64 timestamp; 
  const XUID *Xuid; 
  StringTable *tablePtr; 
  XUID result; 

  v3 = this->m_currentChallengeToken[controllerIndex];
  StringTable_GetAsset("loot/consumable_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 603, ASSERT_TYPE_ASSERT, "(consumbleTable)", (const char *)&queryFormat, "consumbleTable") )
    __debugbreak();
  v4 = j_va("%d", v3);
  v5 = StringTable_Lookup(tablePtr, 6, v4, 0);
  Instance = Online_Loot::GetInstance();
  v7 = atoi(v5);
  Online_Loot::UpdateItemInInventory(Instance, controllerIndex, v7, -1, 0);
  v8 = j_va("%d", v3);
  v9 = StringTable_Lookup(tablePtr, 6, v8, 7);
  v10 = OnlineChallengesManager::GetInstance();
  timestamp = LiveStorage_GetUTC();
  Xuid = Live_GetXuid(&result, controllerIndex);
  OnlineChallengesManager::RecordEventForPlayer(v10, controllerIndex, (const XUID)Xuid->m_id, v9, (const char *)&queryFormat.fmt + 3, timestamp);
}

/*
==============
OnlineProgression::SetPlayerBRTutorialReward
==============
*/
void OnlineProgression::SetPlayerBRTutorialReward(OnlineProgression *this, const int controllerIndex, ONLINE_BR_TUTORIAL_REWARD reward, const bool value)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  v4 = reward;
  v6 = controllerIndex;
  if ( (unsigned int)reward >= ONLINE_BR_TUTORIAL_REWARD_MAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 520, ASSERT_TYPE_ASSERT, "(unsigned)( reward ) < (unsigned)( ONLINE_BR_TUTORIAL_REWARD_MAX )", "reward doesn't index ONLINE_BR_TUTORIAL_REWARD_MAX\n\t%i not in [0, %i)", reward, 4) )
    __debugbreak();
  if ( (unsigned int)v6 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 521, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  this->m_brTutorialRewards[v6][v4] = value;
}

/*
==============
OnlineProgression::SetPlayerTrialsOfSummerReward
==============
*/
void OnlineProgression::SetPlayerTrialsOfSummerReward(OnlineProgression *this, const int controllerIndex, const int trialId, const ONLINE_GAMES_OF_SUMMER_REWARD_TYPES bestMedal)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v4 = trialId;
  v6 = controllerIndex;
  if ( (unsigned int)bestMedal >= ONLINE_GAMES_OF_SUMMER_REWARD_TYPES_MAX )
  {
    v11 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 536, ASSERT_TYPE_ASSERT, "(unsigned)( bestMedal ) < (unsigned)( ONLINE_GAMES_OF_SUMMER_REWARD_TYPES_MAX )", "bestMedal doesn't index ONLINE_GAMES_OF_SUMMER_REWARD_TYPES_MAX\n\t%i not in [0, %i)", bestMedal, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 8 )
  {
    LODWORD(v10) = 8;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 537, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 6 )
  {
    LODWORD(v10) = 6;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 538, ASSERT_TYPE_ASSERT, "(unsigned)( trialId ) < (unsigned)( 6 )", "trialId doesn't index ONLINE_GAMES_OF_SUMMER_MAX_TRIALS\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  this->m_gamesOfSummerRewards[v6][v4] = bestMedal;
}

/*
==============
OnlineProgression::TokenComplete
==============
*/
void OnlineProgression::TokenComplete(OnlineProgression *this, const int controllerIndex, bdJSONDeserializer *json)
{
  __int64 v3; 
  LocalClientNum_t outLocalClientNum[6]; 
  int value; 

  v3 = controllerIndex;
  if ( bdJSONDeserializer::hasKey(json, "id_") )
  {
    bdJSONDeserializer::getInt32(json, "id_", &value);
    if ( value == this->m_currentChallengeToken[v3] )
    {
      this->m_userStateStage[v3] = ONLINE_USER_STATE_STAGE_NEED_TOKENS;
      if ( CL_Mgr_IsControllerMappedToClient(v3, outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "token_activation_success", LUI_luaVM) )
      {
        LUI_SetTableBool("immediate", 1, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 713, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Activated token and a different ID was returned.") )
    {
      __debugbreak();
    }
  }
}

/*
==============
OnlineProgression::UpdatePlayerStats
==============
*/
void OnlineProgression::UpdatePlayerStats(OnlineProgression *this, const int controllerIndex)
{
  __int64 v3; 
  StatsSource ActiveStatsSource; 
  char *v7; 
  char *v10; 
  const dvar_t *v13; 
  __int64 v14; 
  int rank; 
  int v16; 
  int v17; 
  int navStringCount; 
  DDLState fromState; 
  DDLContext context; 
  DDLState result; 
  char *navStrings[16]; 

  v3 = controllerIndex;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+160h+fromState.member], xmm0 }
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, v3, ActiveStatsSource, STATSGROUP_RANKEDLOADOUTS) )
  {
    v7 = j_va("squadMembers.player_xp");
    Com_ParseNavStrings(v7, (const char **)navStrings, 16, &navStringCount);
    _RAX = DDL_GetRootState(&result, context.def);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+160h+fromState.isValid], ymm0
    }
    if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) && DDL_GetType(&fromState) == DDL_INT_TYPE )
      DDL_SetInt(&fromState, &context, this->m_playerProgression[v3].xp);
    v10 = j_va("squadMembers.season_rank");
    Com_ParseNavStrings(v10, (const char **)navStrings, 16, &navStringCount);
    _RAX = DDL_GetRootState(&result, context.def);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+160h+fromState.isValid], ymm0
    }
    if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) && DDL_GetType(&fromState) == DDL_INT_TYPE )
    {
      v13 = DVARINT_current_season;
      if ( !DVARINT_current_season && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "current_season") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v14 = 7 * v3 + v13->current.integer;
      if ( this->m_seasonProgression[0][v14].xp )
      {
        rank = this->m_seasonProgression[0][v14].rank;
        v16 = 100;
        v17 = rank + 1;
        if ( v17 < 100 )
          v16 = v17;
      }
      else
      {
        v16 = 0;
      }
      DDL_SetInt(&fromState, &context, v16);
    }
  }
}

/*
==============
OnlineProgression::UpdateProgression
==============
*/
__int64 OnlineProgression::UpdateProgression(OnlineProgression *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  __int64 v6; 
  PlayerProgression *v8; 
  unsigned __int64 rank; 
  unsigned __int64 xp; 
  unsigned __int8 v11; 
  unsigned __int64 *v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  int v16; 
  int v17; 
  unsigned __int64 v18; 
  SeasonChallenge *v19; 
  unsigned __int64 value; 
  unsigned __int64 v22; 
  unsigned __int64 v23[2]; 
  bdJSONDeserializer v24; 
  bdJSONDeserializer v25; 

  v23[1] = -2i64;
  v6 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&v25);
  if ( !bdJSONDeserializer::getUInt64(json, "id_", &value) )
    goto LABEL_54;
  if ( value == 1000000 )
  {
    if ( bdJSONDeserializer::getObject(json, "multiProgress", &v25) )
    {
      v8 = &this->m_playerProgression[v6];
      bdJSONDeserializer::bdJSONDeserializer(&v24);
      if ( bdJSONDeserializer::getObject(&v25, "xp", &v24) )
        bdJSONDeserializer::getUInt64(&v24, (const char *const)&stru_143CE7590, &v8->xp);
      if ( bdJSONDeserializer::getObject(&v25, "rank", &v24) )
        bdJSONDeserializer::getUInt64(&v24, (const char *const)&stru_143CE7590, &v8->rank);
      rank = v8->rank;
      xp = v8->xp;
      if ( !complete )
      {
        Com_Printf(25, "Updated Player Progression with XP %lu, Rank %lu\n", xp, rank);
        goto LABEL_14;
      }
      Com_Printf(25, "Ranked Up: Player Progression is now XP %lu, Rank %lu\n", xp, rank);
      if ( LUI_BeginEvent(LOCAL_CLIENT_0, "player_ranked_up", LUI_luaVM) )
      {
        LUI_SetTableBool("immediate", 1, LUI_luaVM);
        LUI_SetTableInt("xp", v8->xp, LUI_luaVM);
        LUI_SetTableInt("rank", v8->rank, LUI_luaVM);
        LUI_SetTableInt("controller", v6, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_update_player_data_once_when_done, "online_challenge_update_player_data_once_when_done") )
        goto LABEL_14;
LABEL_12:
      OnlineProgression::UpdatePlayerStats(this, v6);
LABEL_14:
      bdJSONDeserializer::~bdJSONDeserializer(&v24);
      v11 = 1;
      goto LABEL_55;
    }
    goto LABEL_54;
  }
  if ( value - 1001001 <= 6 )
  {
    if ( bdJSONDeserializer::getObject(json, "multiProgress", &v25) )
    {
      v12 = (unsigned __int64 *)((char *)&this[-128] + 112 * v6 + 16 * value - 70096);
      v22 = 0i64;
      v23[0] = 0i64;
      bdJSONDeserializer::bdJSONDeserializer(&v24);
      if ( bdJSONDeserializer::getObject(&v25, "xp", &v24) )
        bdJSONDeserializer::getUInt64(&v24, (const char *const)&stru_143CE7590, v12);
      if ( bdJSONDeserializer::getObject(&v25, "rank", &v24) )
        bdJSONDeserializer::getUInt64(&v24, (const char *const)&stru_143CE7590, v12 + 1);
      if ( bdJSONDeserializer::getObject(&v25, "level_xp", &v24) )
        bdJSONDeserializer::getUInt64(&v24, (const char *const)&stru_143CE7590, v23);
      if ( bdJSONDeserializer::getObject(&v25, "level", &v24) )
        bdJSONDeserializer::getUInt64(&v24, (const char *const)&stru_143CE7590, &v22);
      v13 = v22;
      if ( v22 > this->m_levelProgression[v6].rank )
      {
        Com_Printf(25, "Leveled Up: Player Level is now XP %lu, Rank %lu\n", v23[0], v22);
        if ( LUI_BeginEvent(LOCAL_CLIENT_0, "player_leveled_up", LUI_luaVM) )
        {
          LUI_SetTableBool("immediate", 1, LUI_luaVM);
          LUI_SetTableInt("xp", v23[0], LUI_luaVM);
          LUI_SetTableInt("level", v22, LUI_luaVM);
          LUI_SetTableInt("controller", v6, LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
        }
        v13 = v22;
      }
      this->m_levelProgression[v6].rank = v13;
      this->m_levelProgression[v6].xp = v23[0];
      v14 = v12[1];
      v15 = *v12;
      if ( !complete )
      {
        Com_Printf(25, "Updated Season Progression with XP %lu, Rank %lu\n", v15, v14);
        goto LABEL_14;
      }
      Com_Printf(25, "Ranked Up: Season Progression is now XP %lu, Rank %lu\n", v15, v14);
      if ( LUI_BeginEvent(LOCAL_CLIENT_0, "season_ranked_up", LUI_luaVM) )
      {
        LUI_SetTableBool("immediate", 1, LUI_luaVM);
        LUI_SetTableInt("xp", *v12, LUI_luaVM);
        LUI_SetTableInt("rank", v12[1], LUI_luaVM);
        LUI_SetTableInt("controller", v6, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_update_player_data_once_when_done, "online_challenge_update_player_data_once_when_done") )
        goto LABEL_14;
      goto LABEL_12;
    }
LABEL_54:
    v11 = 0;
    goto LABEL_55;
  }
  if ( !bdJSONDeserializer::getUInt64(json, "progress", v23) )
    goto LABEL_54;
  if ( complete )
  {
    Com_Printf(25, "Completed: Season Challenge %lu is now complete\n", value);
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, "season_challenge_complete", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_SetTableInt((const char *)&valueOut, value, LUI_luaVM);
      LUI_SetTableInt("controller", v6, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  v16 = 0;
  v17 = this->m_seasonChallengeCount[v6];
  v18 = value;
  if ( v17 <= 0 )
  {
LABEL_44:
    if ( (unsigned int)v17 >= 0x2BC )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_progression.cpp", 473, ASSERT_TYPE_ASSERT, "(unsigned)( m_seasonChallengeCount[controllerIndex] ) < (unsigned)( ( 100 * 7 ) )", "m_seasonChallengeCount[controllerIndex] doesn't index MAX_SEASON_CHALLENGES\n\t%i not in [0, %i)", this->m_seasonChallengeCount[v6], 700) )
        __debugbreak();
      v18 = value;
    }
    if ( this->m_seasonChallengeCount[v6] >= 700 )
      goto LABEL_54;
    Com_Printf(25, "Adding Season Challenge %lu with Progress %lu\n", v18, v23[0]);
    this->m_seasonChallenges[v6][this->m_seasonChallengeCount[v6]].id = value;
    this->m_seasonChallenges[v6][this->m_seasonChallengeCount[v6]++].progress = v23[0];
  }
  else
  {
    v19 = this->m_seasonChallenges[v6];
    while ( value != v19->id )
    {
      ++v16;
      ++v19;
      if ( v16 >= v17 )
        goto LABEL_44;
    }
    Com_Printf(25, "Updated Season Challenge %lu with Progress %lu\n", value, v23[0]);
    this->m_seasonChallenges[v6][v16].progress = v23[0];
  }
  if ( complete )
    OnlineProgression::SendSeasonChallengesComplete(this, v6);
  v11 = 1;
LABEL_55:
  bdJSONDeserializer::~bdJSONDeserializer(&v25);
  return v11;
}

