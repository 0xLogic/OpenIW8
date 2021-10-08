/*
==============
OnlineCommunityChallenges::UpdateChallenges
==============
*/

bool __fastcall OnlineCommunityChallenges::UpdateChallenges(OnlineCommunityChallenges *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  return ?UpdateChallenges@OnlineCommunityChallenges@@QEAA_NHPEAVbdJSONDeserializer@@_N@Z(this, controllerIndex, json, complete);
}

/*
==============
OnlineCommunityChallenges::AddProgression
==============
*/

void __fastcall OnlineCommunityChallenges::AddProgression(OnlineCommunityChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  ?AddProgression@OnlineCommunityChallenges@@QEAAXHPEAVbdAchievementState@@@Z(this, controllerIndex, ae_state);
}

/*
==============
OnlineCommunityChallenges::RegisterLuaFunctions
==============
*/

void __fastcall OnlineCommunityChallenges::RegisterLuaFunctions(OnlineCommunityChallenges *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineCommunityChallenges@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineCommunityChallenges::OnDisconnect
==============
*/

void __fastcall OnlineCommunityChallenges::OnDisconnect(OnlineCommunityChallenges *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineCommunityChallenges@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineCommunityChallenges::Uninit
==============
*/

void __fastcall OnlineCommunityChallenges::Uninit(OnlineCommunityChallenges *this)
{
  ?Uninit@OnlineCommunityChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineCommunityChallenges::OnRegistered
==============
*/

void __fastcall OnlineCommunityChallenges::OnRegistered(OnlineCommunityChallenges *this)
{
  ?OnRegistered@OnlineCommunityChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineCommunityChallenges::OnSignedIn
==============
*/

void __fastcall OnlineCommunityChallenges::OnSignedIn(OnlineCommunityChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineCommunityChallenges@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineCommunityChallenges::OnUnregistered
==============
*/

void __fastcall OnlineCommunityChallenges::OnUnregistered(OnlineCommunityChallenges *this)
{
  ?OnUnregistered@OnlineCommunityChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineCommunityChallenges::ResetProgression
==============
*/

void __fastcall OnlineCommunityChallenges::ResetProgression(OnlineCommunityChallenges *this, const int controllerIndex)
{
  ?ResetProgression@OnlineCommunityChallenges@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineCommunityChallenges::GetInstance
==============
*/

OnlineCommunityChallenges *__fastcall OnlineCommunityChallenges::GetInstance()
{
  return ?GetInstance@OnlineCommunityChallenges@@SAAEAV1@XZ();
}

/*
==============
OnlineCommunityChallenges::OnSignedOut
==============
*/

void __fastcall OnlineCommunityChallenges::OnSignedOut(OnlineCommunityChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineCommunityChallenges@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineCommunityChallenges::OutputCurrentState
==============
*/

void __fastcall OnlineCommunityChallenges::OutputCurrentState(OnlineCommunityChallenges *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineCommunityChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineCommunityChallenges::GetProgression
==============
*/

CommunityProgression *__fastcall OnlineCommunityChallenges::GetProgression(OnlineCommunityChallenges *this, const int controllerIndex, const int id)
{
  return ?GetProgression@OnlineCommunityChallenges@@QEAAPEAUCommunityProgression@@HH@Z(this, controllerIndex, id);
}

/*
==============
OnlineCommunityChallenges::Init
==============
*/

bool __fastcall OnlineCommunityChallenges::Init(OnlineCommunityChallenges *this)
{
  return ?Init@OnlineCommunityChallenges@@UEAA_NXZ(this);
}

/*
==============
OnlineCommunityChallenges::ControllerFrame
==============
*/

void __fastcall OnlineCommunityChallenges::ControllerFrame(OnlineCommunityChallenges *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineCommunityChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineCommunityChallenges::Frame
==============
*/

void __fastcall OnlineCommunityChallenges::Frame(OnlineCommunityChallenges *this)
{
  ?Frame@OnlineCommunityChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineCommunityChallenges::GetInstancePtr
==============
*/

OnlineCommunityChallenges *__fastcall OnlineCommunityChallenges::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineCommunityChallenges@@SAPEAV1@XZ();
}

/*
==============
OnlineCommunityChallenges::OnRegistered
==============
*/
void OnlineCommunityChallenges::OnRegistered(OnlineCommunityChallenges *this)
{
  ;
}

/*
==============
OnlineCommunityChallenges::OnUnregistered
==============
*/
void OnlineCommunityChallenges::OnUnregistered(OnlineCommunityChallenges *this)
{
  ;
}

/*
==============
OnlineCommunityChallenges::Init
==============
*/
char OnlineCommunityChallenges::Init(OnlineCommunityChallenges *this)
{
  memset_0(this->m_communityProgression, 0, 0x140ui64);
  this->m_numCommunityProgressions[0] = 0;
  memset_0(this->m_communityProgression[1], 0, sizeof(this->m_communityProgression[1]));
  this->m_numCommunityProgressions[1] = 0;
  memset_0(this->m_communityProgression[2], 0, sizeof(this->m_communityProgression[2]));
  this->m_numCommunityProgressions[2] = 0;
  memset_0(this->m_communityProgression[3], 0, sizeof(this->m_communityProgression[3]));
  this->m_numCommunityProgressions[3] = 0;
  memset_0(this->m_communityProgression[4], 0, sizeof(this->m_communityProgression[4]));
  this->m_numCommunityProgressions[4] = 0;
  memset_0(this->m_communityProgression[5], 0, sizeof(this->m_communityProgression[5]));
  this->m_numCommunityProgressions[5] = 0;
  memset_0(this->m_communityProgression[6], 0, sizeof(this->m_communityProgression[6]));
  this->m_numCommunityProgressions[6] = 0;
  memset_0(this->m_communityProgression[7], 0, sizeof(this->m_communityProgression[7]));
  this->m_numCommunityProgressions[7] = 0;
  return 1;
}

/*
==============
OnlineCommunityChallenges::Uninit
==============
*/
void OnlineCommunityChallenges::Uninit(OnlineCommunityChallenges *this)
{
  ;
}

/*
==============
OnlineCommunityChallenges::Frame
==============
*/
void OnlineCommunityChallenges::Frame(OnlineCommunityChallenges *this)
{
  ;
}

/*
==============
OnlineCommunityChallenges::ControllerFrame
==============
*/
void OnlineCommunityChallenges::ControllerFrame(OnlineCommunityChallenges *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineCommunityChallenges::OnSignedIn
==============
*/
void OnlineCommunityChallenges::OnSignedIn(OnlineCommunityChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineCommunityChallenges::OnSignedOut
==============
*/
void OnlineCommunityChallenges::OnSignedOut(OnlineCommunityChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  __int64 v3; 

  v3 = controllerIndex;
  memset_0(this->m_communityProgression[controllerIndex], 0, sizeof(this->m_communityProgression[controllerIndex]));
  this->m_numCommunityProgressions[v3] = 0;
}

/*
==============
OnlineCommunityChallenges::OnDisconnect
==============
*/
void OnlineCommunityChallenges::OnDisconnect(OnlineCommunityChallenges *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineCommunityChallenges::RegisterLuaFunctions
==============
*/
void OnlineCommunityChallenges::RegisterLuaFunctions(OnlineCommunityChallenges *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "CommunityChallenges", community_challenges_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OnlineCommunityChallenges::OutputCurrentState
==============
*/
void OnlineCommunityChallenges::OutputCurrentState(OnlineCommunityChallenges *this, const int controllerIndex)
{
  Com_Printf(25, "COMMUNITY CHALLENGES DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "COMMUNITY CHALLENGES DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_GetCommunityInfo
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetCommunityInfo(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  CommunityProgression *v9; 
  unsigned int v10; 
  CommunityProgression *v12; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: CommunityChallenges.GetCommunityInfo( <controllerIndex>, <operator_id> )\n");
  v3 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: CommunityChallenges.GetCommunityInfo( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: CommunityChallenges.GetCommunityInfo( <id> )\n");
  v4 = lui_tointeger32(luaVM, 1);
  v5 = lui_tointeger32(luaVM, 2);
  v6 = 0;
  v7 = OnlineCommunityChallenges::s_instance.m_numCommunityProgressions[v4];
  if ( v7 <= 0 )
    goto LABEL_11;
  v8 = v5;
  v9 = OnlineCommunityChallenges::s_instance.m_communityProgression[v4];
  while ( v9->id != v8 )
  {
    ++v6;
    ++v9;
    if ( v6 >= v7 )
      goto LABEL_11;
  }
  v12 = &OnlineCommunityChallenges::s_instance.m_communityProgression[v4][v6];
  if ( v12 )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (v12->progress & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
LABEL_11:
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v10);
  }
  return v3;
}

/*
==============
OnlineCommunityChallenges::AddProgression
==============
*/
void OnlineCommunityChallenges::AddProgression(OnlineCommunityChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  __int64 v3; 
  int v4; 
  int v7; 
  CommunityProgression *v8; 
  unsigned int Progress; 
  unsigned __int64 Id; 
  unsigned int v11; 
  unsigned __int64 v12; 
  int v13; 
  int v14; 

  v3 = controllerIndex;
  v4 = 0;
  v7 = this->m_numCommunityProgressions[controllerIndex];
  if ( v7 <= 0 )
  {
LABEL_5:
    if ( (unsigned int)v7 >= 0x14 )
    {
      v14 = 20;
      v13 = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_community_challenges.cpp", 117, ASSERT_TYPE_ASSERT, "(unsigned)( m_numCommunityProgressions[controllerIndex] ) < (unsigned)( 20 )", "m_numCommunityProgressions[controllerIndex] doesn't index MAX_COMMUNITY_CHALLENGES\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( this->m_numCommunityProgressions[v3] < 20 )
    {
      Progress = bdAchievementState::getProgress(ae_state);
      Id = bdAchievementState::getId(ae_state);
      Com_Printf(25, "Added Community Unlock Challenge %lu with progress %d\n", Id, Progress);
      bdAchievementState::getId(ae_state);
      bdAchievementState::getProgress(ae_state);
      ++this->m_numCommunityProgressions[v3];
    }
  }
  else
  {
    v8 = this->m_communityProgression[controllerIndex];
    while ( bdAchievementState::getId(ae_state) != v8->id )
    {
      v7 = this->m_numCommunityProgressions[v3];
      ++v4;
      ++v8;
      if ( v4 >= v7 )
        goto LABEL_5;
    }
    v11 = bdAchievementState::getProgress(ae_state);
    v12 = bdAchievementState::getId(ae_state);
    Com_Printf(25, "Updated Community Unlock Challenge %lu with progress %d\n", v12, v11);
    v8->progress = bdAchievementState::getProgress(ae_state);
  }
}

/*
==============
OnlineCommunityChallenges::GetInstance
==============
*/
OnlineCommunityChallenges *OnlineCommunityChallenges::GetInstance()
{
  return &OnlineCommunityChallenges::s_instance;
}

/*
==============
OnlineCommunityChallenges::GetInstancePtr
==============
*/
OnlineCommunityChallenges *OnlineCommunityChallenges::GetInstancePtr()
{
  return &OnlineCommunityChallenges::s_instance;
}

/*
==============
OnlineCommunityChallenges::GetProgression
==============
*/
CommunityProgression *OnlineCommunityChallenges::GetProgression(OnlineCommunityChallenges *this, const int controllerIndex, const int id)
{
  __int64 v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  CommunityProgression *i; 

  v3 = controllerIndex;
  v4 = 0;
  v5 = this->m_numCommunityProgressions[controllerIndex];
  if ( v5 <= 0 )
    return 0i64;
  v6 = 20i64 * controllerIndex;
  v7 = 0i64;
  for ( i = this->m_communityProgression[v3]; i->id != id; ++i )
  {
    ++v4;
    if ( ++v7 >= v5 )
      return 0i64;
  }
  return &this->m_communityProgression[0][v4 + v6];
}

/*
==============
OnlineCommunityChallenges::ResetProgression
==============
*/
void OnlineCommunityChallenges::ResetProgression(OnlineCommunityChallenges *this, const int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  memset_0(this->m_communityProgression[controllerIndex], 0, sizeof(this->m_communityProgression[controllerIndex]));
  this->m_numCommunityProgressions[v2] = 0;
}

/*
==============
OnlineCommunityChallenges::UpdateChallenges
==============
*/
char OnlineCommunityChallenges::UpdateChallenges(OnlineCommunityChallenges *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  __int64 v5; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  CommunityProgression *i; 
  unsigned __int64 v12; 
  unsigned __int64 value; 
  unsigned __int64 v14; 

  v5 = controllerIndex;
  if ( !bdJSONDeserializer::getUInt64(json, "id_", &value) )
    return 0;
  if ( !bdJSONDeserializer::getUInt64(json, "progress", &v14) )
    return 0;
  v7 = this->m_numCommunityProgressions[v5];
  if ( v7 <= 0 )
    return 0;
  v8 = value;
  v9 = 0i64;
  for ( i = this->m_communityProgression[v5]; value != i->id; ++i )
  {
    if ( ++v9 >= v7 )
      return 0;
  }
  v12 = v14;
  i->progress = v14;
  Com_Printf(25, "Updated Community Unlock Challenge %lu with progress %lu\n", v8, v12);
  return 1;
}

