/*
==============
OnlineScheduledChallenges::Finalise
==============
*/

void __fastcall OnlineScheduledChallenges::Finalise(OnlineScheduledChallenges *this, const int controllerIndex)
{
  ?Finalise@OnlineScheduledChallenges@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::OnDisconnect
==============
*/

void __fastcall OnlineScheduledChallenges::OnDisconnect(OnlineScheduledChallenges *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineScheduledChallenges@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineScheduledChallenges::GetConversionType
==============
*/

const char *__fastcall OnlineScheduledChallenges::GetConversionType(const int kind, const unsigned __int64 id)
{
  return ?GetConversionType@OnlineScheduledChallenges@@SAPEBDH_K@Z(kind, id);
}

/*
==============
OnlineScheduledChallenges::UpdateChallenges
==============
*/

bool __fastcall OnlineScheduledChallenges::UpdateChallenges(OnlineScheduledChallenges *this, const int controllerIndex, const int kind, bdJSONDeserializer *json, bool complete)
{
  return ?UpdateChallenges@OnlineScheduledChallenges@@QEAA_NHHPEAVbdJSONDeserializer@@_N@Z(this, controllerIndex, kind, json, complete);
}

/*
==============
OnlineScheduledChallenges::AddProgression
==============
*/

void __fastcall OnlineScheduledChallenges::AddProgression(OnlineScheduledChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  ?AddProgression@OnlineScheduledChallenges@@QEAAXHPEAVbdAchievementState@@@Z(this, controllerIndex, ae_state);
}

/*
==============
CL_ActivateDaily
==============
*/

void __fastcall CL_ActivateDaily()
{
  ?CL_ActivateDaily@@YAXXZ();
}

/*
==============
OnlineScheduledChallenges::OutputCurrentState
==============
*/

void __fastcall OnlineScheduledChallenges::OutputCurrentState(OnlineScheduledChallenges *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineScheduledChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::OnRegistered
==============
*/

void __fastcall OnlineScheduledChallenges::OnRegistered(OnlineScheduledChallenges *this)
{
  ?OnRegistered@OnlineScheduledChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineScheduledChallenges::ResetProgression
==============
*/

void __fastcall OnlineScheduledChallenges::ResetProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  ?ResetProgression@OnlineScheduledChallenges@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::Uninit
==============
*/

void __fastcall OnlineScheduledChallenges::Uninit(OnlineScheduledChallenges *this)
{
  ?Uninit@OnlineScheduledChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineScheduledChallenges::Frame
==============
*/

void __fastcall OnlineScheduledChallenges::Frame(OnlineScheduledChallenges *this)
{
  ?Frame@OnlineScheduledChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineScheduledChallenges::GetBRWeeklyProgression
==============
*/

WeeklyProgression *__fastcall OnlineScheduledChallenges::GetBRWeeklyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return ?GetBRWeeklyProgression@OnlineScheduledChallenges@@QEAAPEAUWeeklyProgression@@H@Z(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::ControllerFrame
==============
*/

void __fastcall OnlineScheduledChallenges::ControllerFrame(OnlineScheduledChallenges *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineScheduledChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::GetInstancePtr
==============
*/

OnlineScheduledChallenges *__fastcall OnlineScheduledChallenges::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineScheduledChallenges@@SAPEAV1@XZ();
}

/*
==============
OnlineScheduledChallenges::GetInstance
==============
*/

OnlineScheduledChallenges *__fastcall OnlineScheduledChallenges::GetInstance()
{
  return ?GetInstance@OnlineScheduledChallenges@@SAAEAV1@XZ();
}

/*
==============
OnlineScheduledChallenges::SetDailyCurrentIndex
==============
*/

void __fastcall OnlineScheduledChallenges::SetDailyCurrentIndex(OnlineScheduledChallenges *this, const int controllerIndex, const int index)
{
  ?SetDailyCurrentIndex@OnlineScheduledChallenges@@QEAAXHH@Z(this, controllerIndex, index);
}

/*
==============
OnlineScheduledChallenges::FillMissingCompletedChallengeProgress
==============
*/

void __fastcall OnlineScheduledChallenges::FillMissingCompletedChallengeProgress(OnlineScheduledChallenges *this, const int controllerIndex, int type)
{
  ?FillMissingCompletedChallengeProgress@OnlineScheduledChallenges@@AEAAXHH@Z(this, controllerIndex, type);
}

/*
==============
OnlineScheduledChallenges::SetBRSpecialEventDay
==============
*/

void __fastcall OnlineScheduledChallenges::SetBRSpecialEventDay(OnlineScheduledChallenges *this, const int controllerIndex, const int day)
{
  ?SetBRSpecialEventDay@OnlineScheduledChallenges@@QEAAXHH@Z(this, controllerIndex, day);
}

/*
==============
OnlineScheduledChallenges::ConvertProgressToTarget
==============
*/

unsigned __int64 __fastcall OnlineScheduledChallenges::ConvertProgressToTarget(const int kind, const unsigned __int64 id, const unsigned __int64 progress)
{
  return ?ConvertProgressToTarget@OnlineScheduledChallenges@@SA_KH_K0@Z(kind, id, progress);
}

/*
==============
OnlineScheduledChallenges::OnSignedIn
==============
*/

void __fastcall OnlineScheduledChallenges::OnSignedIn(OnlineScheduledChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineScheduledChallenges@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineScheduledChallenges::ConvertTargetToProgress
==============
*/

unsigned __int64 __fastcall OnlineScheduledChallenges::ConvertTargetToProgress(const int kind, const unsigned __int64 id, const unsigned __int64 target)
{
  return ?ConvertTargetToProgress@OnlineScheduledChallenges@@SA_KH_K0@Z(kind, id, target);
}

/*
==============
OnlineScheduledChallenges::OnUnregistered
==============
*/

void __fastcall OnlineScheduledChallenges::OnUnregistered(OnlineScheduledChallenges *this)
{
  ?OnUnregistered@OnlineScheduledChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineScheduledChallenges::GetCPDailyProgression
==============
*/

DailyProgression *__fastcall OnlineScheduledChallenges::GetCPDailyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return ?GetCPDailyProgression@OnlineScheduledChallenges@@QEAAPEAUDailyProgression@@H@Z(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::SetCPDailyCurrentIndex
==============
*/

void __fastcall OnlineScheduledChallenges::SetCPDailyCurrentIndex(OnlineScheduledChallenges *this, const int controllerIndex, const int index)
{
  ?SetCPDailyCurrentIndex@OnlineScheduledChallenges@@QEAAXHH@Z(this, controllerIndex, index);
}

/*
==============
OnlineScheduledChallenges::SetSpecialEventDay
==============
*/

void __fastcall OnlineScheduledChallenges::SetSpecialEventDay(OnlineScheduledChallenges *this, const int controllerIndex, const int day)
{
  ?SetSpecialEventDay@OnlineScheduledChallenges@@QEAAXHH@Z(this, controllerIndex, day);
}

/*
==============
OnlineScheduledChallenges::GetBRDailyProgression
==============
*/

DailyProgression *__fastcall OnlineScheduledChallenges::GetBRDailyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return ?GetBRDailyProgression@OnlineScheduledChallenges@@QEAAPEAUDailyProgression@@H@Z(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::OnSignedOut
==============
*/

void __fastcall OnlineScheduledChallenges::OnSignedOut(OnlineScheduledChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineScheduledChallenges@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineScheduledChallenges::Init
==============
*/

bool __fastcall OnlineScheduledChallenges::Init(OnlineScheduledChallenges *this)
{
  return ?Init@OnlineScheduledChallenges@@UEAA_NXZ(this);
}

/*
==============
OnlineScheduledChallenges::GetDailyProgression
==============
*/

DailyProgression *__fastcall OnlineScheduledChallenges::GetDailyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return ?GetDailyProgression@OnlineScheduledChallenges@@QEAAPEAUDailyProgression@@H@Z(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::SetBRDailyCurrentIndex
==============
*/

void __fastcall OnlineScheduledChallenges::SetBRDailyCurrentIndex(OnlineScheduledChallenges *this, const int controllerIndex, const int index)
{
  ?SetBRDailyCurrentIndex@OnlineScheduledChallenges@@QEAAXHH@Z(this, controllerIndex, index);
}

/*
==============
OnlineScheduledChallenges::GetWeeklyProgression
==============
*/

WeeklyProgression *__fastcall OnlineScheduledChallenges::GetWeeklyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return ?GetWeeklyProgression@OnlineScheduledChallenges@@QEAAPEAUWeeklyProgression@@H@Z(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::TriggerNextDay
==============
*/

void __fastcall OnlineScheduledChallenges::TriggerNextDay(OnlineScheduledChallenges *this, const int controllerIndex, const int kind, bdJSONDeserializer *json)
{
  ?TriggerNextDay@OnlineScheduledChallenges@@QEAAXHHPEAVbdJSONDeserializer@@@Z(this, controllerIndex, kind, json);
}

/*
==============
OnlineScheduledChallenges::RegisterLuaFunctions
==============
*/

void __fastcall OnlineScheduledChallenges::RegisterLuaFunctions(OnlineScheduledChallenges *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineScheduledChallenges@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
LUI_CoD_LuaCall_GetDailyChallenges
==============
*/
__int64 LUI_CoD_LuaCall_GetDailyChallenges(lua_State *const luaVM)
{
  unsigned int v2; 
  __int64 v3; 
  DailyProgression *v4; 
  __int64 v5; 
  __int64 id_low; 
  __int64 v7; 
  unsigned int v8; 
  char _Buffer[8]; 
  __int64 v11; 
  int v12; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ScheduledChallenges.GetDailyChallenges( <controllerIndex> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = &OnlineScheduledChallenges::s_instance.m_dailyProgression[v3];
  if ( (OnlineScheduledChallenges *)((char *)&OnlineScheduledChallenges::s_instance + v3 * 56) == (OnlineScheduledChallenges *)-64i64 || !OnlineScheduledChallenges::s_instance.m_dailyProgression[v3].amount )
  {
    v2 = 0;
  }
  else
  {
    j_lua_createtable(luaVM, 0, 0);
    v5 = 3i64;
    do
    {
      id_low = LODWORD(v4->progression[0].id);
      *(_QWORD *)_Buffer = 0i64;
      v11 = 0i64;
      v12 = 0;
      j_sprintf(_Buffer, "%d", id_low);
      v7 = OnlineScheduledChallenges::ConvertProgressToTarget(12, v4->progression[0].id, v4->progression[0].progress);
      LUI_SetTableInt(_Buffer, v7, luaVM);
      v4 = (DailyProgression *)((char *)v4 + 16);
      --v5;
    }
    while ( v5 );
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetWeeklyChallenges
==============
*/
__int64 LUI_CoD_LuaCall_GetWeeklyChallenges(lua_State *const luaVM)
{
  unsigned int v2; 
  WeeklyProgression *v3; 
  unsigned int i; 
  __int64 v5; 
  unsigned int v6; 
  char _Buffer[8]; 
  __int64 v9; 
  int v10; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ScheduledChallenges.GetWeeklyChallenges( <controllerIndex> )\n");
  v3 = &OnlineScheduledChallenges::s_instance.m_weeklyProgression[lui_tointeger32(luaVM, 1)];
  if ( v3 && v3->amount )
  {
    j_lua_createtable(luaVM, 0, 0);
    for ( i = 0; i < v3->amount; ++i )
    {
      *(_QWORD *)_Buffer = 0i64;
      v9 = 0i64;
      v10 = 0;
      j_sprintf(_Buffer, "%d", LODWORD(v3->progression[i].id));
      v5 = OnlineScheduledChallenges::ConvertProgressToTarget(11, v3->progression[i].id, v3->progression[i].progress);
      LUI_SetTableInt(_Buffer, v5, luaVM);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetBRDailyChallenges
==============
*/
__int64 LUI_CoD_LuaCall_GetBRDailyChallenges(lua_State *const luaVM)
{
  unsigned int v2; 
  __int64 v3; 
  DailyProgression *v4; 
  __int64 v5; 
  __int64 id_low; 
  __int64 v7; 
  unsigned int v8; 
  char _Buffer[8]; 
  __int64 v11; 
  int v12; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ScheduledChallenges.GetBRDailyChallenges( <controllerIndex> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = &OnlineScheduledChallenges::s_instance.m_brDailyProgression[v3];
  if ( (OnlineScheduledChallenges *)((char *)&OnlineScheduledChallenges::s_instance + v3 * 56) == (OnlineScheduledChallenges *)-51776i64 || !OnlineScheduledChallenges::s_instance.m_brDailyProgression[v3].amount )
  {
    v2 = 0;
  }
  else
  {
    j_lua_createtable(luaVM, 0, 0);
    v5 = 3i64;
    do
    {
      id_low = LODWORD(v4->progression[0].id);
      *(_QWORD *)_Buffer = 0i64;
      v11 = 0i64;
      v12 = 0;
      j_sprintf(_Buffer, "%d", id_low);
      v7 = OnlineScheduledChallenges::ConvertProgressToTarget(27, v4->progression[0].id, v4->progression[0].progress);
      LUI_SetTableInt(_Buffer, v7, luaVM);
      v4 = (DailyProgression *)((char *)v4 + 16);
      --v5;
    }
    while ( v5 );
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetBRWeeklyChallenges
==============
*/
__int64 LUI_CoD_LuaCall_GetBRWeeklyChallenges(lua_State *const luaVM)
{
  unsigned int v2; 
  WeeklyProgression *v3; 
  unsigned int i; 
  __int64 v5; 
  unsigned int v6; 
  char _Buffer[8]; 
  __int64 v9; 
  int v10; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ScheduledChallenges.GetBRWeeklyChallenges( <controllerIndex> )\n");
  v3 = &OnlineScheduledChallenges::s_instance.m_brWeeklyProgression[lui_tointeger32(luaVM, 1)];
  if ( v3 && v3->amount )
  {
    j_lua_createtable(luaVM, 0, 0);
    for ( i = 0; i < v3->amount; ++i )
    {
      *(_QWORD *)_Buffer = 0i64;
      v9 = 0i64;
      v10 = 0;
      j_sprintf(_Buffer, "%d", LODWORD(v3->progression[i].id));
      v5 = OnlineScheduledChallenges::ConvertProgressToTarget(26, v3->progression[i].id, v3->progression[i].progress);
      LUI_SetTableInt(_Buffer, v5, luaVM);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetCPDailyChallenges
==============
*/
__int64 LUI_CoD_LuaCall_GetCPDailyChallenges(lua_State *const luaVM)
{
  unsigned int v2; 
  __int64 v3; 
  DailyProgression *v4; 
  __int64 v5; 
  __int64 id_low; 
  __int64 v7; 
  unsigned int v8; 
  char _Buffer[8]; 
  __int64 v11; 
  int v12; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ScheduledChallenges.GetCPDailyChallenges( <controllerIndex> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = &OnlineScheduledChallenges::s_instance.m_cpDailyProgression[v3];
  if ( (OnlineScheduledChallenges *)((char *)&OnlineScheduledChallenges::s_instance + v3 * 56) == (OnlineScheduledChallenges *)-103488i64 || !OnlineScheduledChallenges::s_instance.m_cpDailyProgression[v3].amount )
  {
    v2 = 0;
  }
  else
  {
    j_lua_createtable(luaVM, 0, 0);
    v5 = 3i64;
    do
    {
      id_low = LODWORD(v4->progression[0].id);
      *(_QWORD *)_Buffer = 0i64;
      v11 = 0i64;
      v12 = 0;
      j_sprintf(_Buffer, "%d", id_low);
      v7 = OnlineScheduledChallenges::ConvertProgressToTarget(30, v4->progression[0].id, v4->progression[0].progress);
      LUI_SetTableInt(_Buffer, v7, luaVM);
      v4 = (DailyProgression *)((char *)v4 + 16);
      --v5;
    }
    while ( v5 );
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
OnlineScheduledChallenges::OnRegistered
==============
*/
void OnlineScheduledChallenges::OnRegistered(OnlineScheduledChallenges *this)
{
  Cmd_AddCommandInternal("activatedaily", CL_ActivateDaily, &CL_ActivateDaily_VAR);
}

/*
==============
OnlineScheduledChallenges::OnUnregistered
==============
*/
void OnlineScheduledChallenges::OnUnregistered(OnlineScheduledChallenges *this)
{
  Cmd_RemoveCommand("activatedaily");
}

/*
==============
OnlineScheduledChallenges::Init
==============
*/
char OnlineScheduledChallenges::Init(OnlineScheduledChallenges *this)
{
  int *m_brDailyCurrentIndex; 
  __int64 v2; 
  WeeklyProgression *v3; 
  DailyProgression *v4; 

  m_brDailyCurrentIndex = this->m_brDailyCurrentIndex;
  v2 = 2i64;
  v3 = &this->m_brWeeklyProgression[1];
  v4 = &this->m_brDailyProgression[1];
  do
  {
    v4[-925].progression[2].id = 0i64;
    v4[-925].progression[2].progress = 0i64;
    *(_QWORD *)&v4[-925].amount = 0i64;
    v4[-924].progression[0].id = 0i64;
    v4[-924].progression[0].progress = 0i64;
    v4[-924].progression[1].id = 0i64;
    v4[-924].progression[1].progress = 0i64;
    memset_0(&v3[-10].progression[372].progress, 0, sizeof(WeeklyProgression));
    v4[-1].progression[0].id = 0i64;
    v4[-1].progression[0].progress = 0i64;
    v4[-1].progression[1].id = 0i64;
    v4[-1].progression[1].progress = 0i64;
    v4[-1].progression[2].id = 0i64;
    v4[-1].progression[2].progress = 0i64;
    *(_QWORD *)&v4[-1].amount = 0i64;
    memset_0(&v3[-1], 0, sizeof(WeeklyProgression));
    v4[922].progression[1].progress = 0i64;
    v4[922].progression[2].id = 0i64;
    v4[922].progression[2].progress = 0i64;
    *(_QWORD *)&v4[922].amount = 0i64;
    v4[923].progression[0].id = 0i64;
    v4[923].progression[0].progress = 0i64;
    v4[923].progression[1].id = 0i64;
    *(m_brDailyCurrentIndex - 8) = 0;
    *m_brDailyCurrentIndex = 0;
    m_brDailyCurrentIndex[8] = 0;
    m_brDailyCurrentIndex[16] = 0;
    m_brDailyCurrentIndex[24] = 0;
    v4[-924].progression[2].id = 0i64;
    v4[-924].progression[2].progress = 0i64;
    *(_QWORD *)&v4[-924].amount = 0i64;
    v4[-923].progression[0].id = 0i64;
    v4[-923].progression[0].progress = 0i64;
    v4[-923].progression[1].id = 0i64;
    v4[-923].progression[1].progress = 0i64;
    memset_0(&v3[-9].progression[372].progress, 0, sizeof(WeeklyProgression));
    v4->progression[0].id = 0i64;
    v4->progression[0].progress = 0i64;
    v4->progression[1].id = 0i64;
    v4->progression[1].progress = 0i64;
    v4->progression[2].id = 0i64;
    v4->progression[2].progress = 0i64;
    *(_QWORD *)&v4->amount = 0i64;
    memset_0(v3, 0, sizeof(WeeklyProgression));
    v4[923].progression[1].progress = 0i64;
    v4[923].progression[2].id = 0i64;
    v4[923].progression[2].progress = 0i64;
    *(_QWORD *)&v4[923].amount = 0i64;
    v4[924].progression[0].id = 0i64;
    v4[924].progression[0].progress = 0i64;
    v4[924].progression[1].id = 0i64;
    *(m_brDailyCurrentIndex - 7) = 0;
    m_brDailyCurrentIndex[1] = 0;
    m_brDailyCurrentIndex[9] = 0;
    m_brDailyCurrentIndex[17] = 0;
    m_brDailyCurrentIndex[25] = 0;
    v4[-923].progression[2].id = 0i64;
    v4[-923].progression[2].progress = 0i64;
    *(_QWORD *)&v4[-923].amount = 0i64;
    v4[-922].progression[0].id = 0i64;
    v4[-922].progression[0].progress = 0i64;
    v4[-922].progression[1].id = 0i64;
    v4[-922].progression[1].progress = 0i64;
    memset_0(&v3[-8].progression[372].progress, 0, sizeof(WeeklyProgression));
    v4[1].progression[0].id = 0i64;
    v4[1].progression[0].progress = 0i64;
    v4[1].progression[1].id = 0i64;
    v4[1].progression[1].progress = 0i64;
    v4[1].progression[2].id = 0i64;
    v4[1].progression[2].progress = 0i64;
    *(_QWORD *)&v4[1].amount = 0i64;
    memset_0(&v3[1], 0, sizeof(WeeklyProgression));
    v4[924].progression[1].progress = 0i64;
    v4[924].progression[2].id = 0i64;
    v4[924].progression[2].progress = 0i64;
    *(_QWORD *)&v4[924].amount = 0i64;
    v4[925].progression[0].id = 0i64;
    v4[925].progression[0].progress = 0i64;
    v4[925].progression[1].id = 0i64;
    *(m_brDailyCurrentIndex - 6) = 0;
    m_brDailyCurrentIndex[2] = 0;
    m_brDailyCurrentIndex[10] = 0;
    m_brDailyCurrentIndex[18] = 0;
    m_brDailyCurrentIndex[26] = 0;
    v4[-922].progression[2].id = 0i64;
    v4[-922].progression[2].progress = 0i64;
    *(_QWORD *)&v4[-922].amount = 0i64;
    v4[-921].progression[0].id = 0i64;
    v4[-921].progression[0].progress = 0i64;
    v4[-921].progression[1].id = 0i64;
    v4[-921].progression[1].progress = 0i64;
    memset_0(&v3[-7].progression[372].progress, 0, sizeof(WeeklyProgression));
    v4[2].progression[0].id = 0i64;
    v4[2].progression[0].progress = 0i64;
    v4[2].progression[1].id = 0i64;
    v4[2].progression[1].progress = 0i64;
    v4[2].progression[2].id = 0i64;
    v4[2].progression[2].progress = 0i64;
    *(_QWORD *)&v4[2].amount = 0i64;
    memset_0(&v3[2], 0, sizeof(WeeklyProgression));
    m_brDailyCurrentIndex += 4;
    v4[925].progression[1].progress = 0i64;
    v3 += 4;
    v4[925].progression[2].id = 0i64;
    v4[925].progression[2].progress = 0i64;
    *(_QWORD *)&v4[925].amount = 0i64;
    v4[926].progression[0].id = 0i64;
    v4[926].progression[0].progress = 0i64;
    v4[926].progression[1].id = 0i64;
    v4 += 4;
    *(m_brDailyCurrentIndex - 9) = 0;
    *(m_brDailyCurrentIndex - 1) = 0;
    m_brDailyCurrentIndex[7] = 0;
    m_brDailyCurrentIndex[15] = 0;
    m_brDailyCurrentIndex[23] = 0;
    --v2;
  }
  while ( v2 );
  return 1;
}

/*
==============
OnlineScheduledChallenges::Uninit
==============
*/
void OnlineScheduledChallenges::Uninit(OnlineScheduledChallenges *this)
{
  ;
}

/*
==============
OnlineScheduledChallenges::Frame
==============
*/
void OnlineScheduledChallenges::Frame(OnlineScheduledChallenges *this)
{
  ;
}

/*
==============
OnlineScheduledChallenges::ControllerFrame
==============
*/
void OnlineScheduledChallenges::ControllerFrame(OnlineScheduledChallenges *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineScheduledChallenges::OnSignedIn
==============
*/
void OnlineScheduledChallenges::OnSignedIn(OnlineScheduledChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineScheduledChallenges::OnSignedOut
==============
*/

void __fastcall OnlineScheduledChallenges::OnSignedOut(OnlineScheduledChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  OnlineScheduledChallenges::ResetProgression(this, controllerIndex);
}

/*
==============
OnlineScheduledChallenges::OnDisconnect
==============
*/
void OnlineScheduledChallenges::OnDisconnect(OnlineScheduledChallenges *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineScheduledChallenges::RegisterLuaFunctions
==============
*/
void OnlineScheduledChallenges::RegisterLuaFunctions(OnlineScheduledChallenges *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "ScheduledChallenges", scheduled_challenges_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OnlineScheduledChallenges::OutputCurrentState
==============
*/
void OnlineScheduledChallenges::OutputCurrentState(OnlineScheduledChallenges *this, const int controllerIndex)
{
  Com_Printf(25, "SCHEDULED CHALLENGES DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "SCHEDULED CHALLENGES DUMP END\n");
}

/*
==============
OnlineScheduledChallenges::AddProgression
==============
*/
void OnlineScheduledChallenges::AddProgression(OnlineScheduledChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  __int64 v4; 
  char *v6; 
  unsigned __int16 Kind; 
  __int64 v8; 
  int v9; 
  char *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  DailyProgression *v17; 
  unsigned int amount; 
  int v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  unsigned int Progress; 
  unsigned __int64 Id; 

  v4 = controllerIndex;
  if ( bdAchievementState::getKind(ae_state) == 12 || bdAchievementState::getKind(ae_state) == 27 || bdAchievementState::getKind(ae_state) == 30 )
  {
    v16 = v4;
    if ( bdAchievementState::getKind(ae_state) == 27 )
    {
      v17 = &this->m_brDailyProgression[v16];
    }
    else if ( bdAchievementState::getKind(ae_state) == 30 )
    {
      v17 = &this->m_cpDailyProgression[v16];
    }
    else
    {
      v17 = &this->m_dailyProgression[v16];
    }
    amount = v17->amount;
    v19 = 0;
    if ( amount )
    {
      while ( bdAchievementState::getId(ae_state) != v17->progression[v19].id )
      {
        amount = v17->amount;
        if ( ++v19 >= amount )
          goto LABEL_23;
      }
      v17->progression[v19].progress = bdAchievementState::getProgress(ae_state);
      Progress = bdAchievementState::getProgress(ae_state);
      Id = bdAchievementState::getId(ae_state);
      Com_Printf(25, "Updated Daily Challenge %lu with progress %d\n", Id, Progress);
    }
    else
    {
LABEL_23:
      if ( amount >= 3 )
      {
        Com_PrintError(25, "Too many Daily Challenges sent from AE. Increase MAX_DAILY_CHALLENGES.\n");
      }
      else
      {
        v20 = bdAchievementState::getProgress(ae_state);
        v21 = bdAchievementState::getId(ae_state);
        Com_Printf(25, "Found Daily Challenge %lu with progress %d\n", v21, v20);
        v17->progression[v17->amount].id = bdAchievementState::getId(ae_state);
        v17->progression[v17->amount++].progress = bdAchievementState::getProgress(ae_state);
      }
    }
  }
  else if ( bdAchievementState::getKind(ae_state) == 11 || bdAchievementState::getKind(ae_state) == 26 )
  {
    v6 = (char *)this + 6408 * v4;
    Kind = bdAchievementState::getKind(ae_state);
    v8 = 512i64;
    if ( Kind == 26 )
      v8 = 52224i64;
    v9 = 0;
    v10 = &v6[v8];
    v11 = *((_DWORD *)v10 + 1600);
    if ( v11 )
    {
      while ( bdAchievementState::getId(ae_state) != *(_QWORD *)&v10[16 * v9] )
      {
        v11 = *((_DWORD *)v10 + 1600);
        if ( ++v9 >= v11 )
          goto LABEL_11;
      }
      *(_QWORD *)&v10[16 * v9 + 8] = bdAchievementState::getProgress(ae_state);
      v14 = bdAchievementState::getProgress(ae_state);
      v15 = bdAchievementState::getId(ae_state);
      Com_Printf(25, "Updated Weekly Challenge %lu with progress %d\n", v15, v14);
    }
    else
    {
LABEL_11:
      if ( v11 >= 0x190 )
      {
        Com_PrintError(25, "Too many Weekly Challenges sent from AE. Increase MAX_WEEKLY_CHALLENGES.\n");
      }
      else
      {
        v12 = bdAchievementState::getProgress(ae_state);
        v13 = bdAchievementState::getId(ae_state);
        Com_Printf(25, "Found Weekly Challenge %lu with progress %d\n", v13, v12);
        *(_QWORD *)&v10[16 * *((unsigned int *)v10 + 1600)] = bdAchievementState::getId(ae_state);
        *(_QWORD *)&v10[16 * (*((_DWORD *)v10 + 1600))++ + 8] = bdAchievementState::getProgress(ae_state);
      }
    }
  }
}

/*
==============
CL_ActivateDaily
==============
*/
void CL_ActivateDaily(void)
{
  unsigned int v0; 
  int v1; 
  unsigned __int64 v2; 
  unsigned int UTC; 
  int Int_Internal_DebugName; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v7; 
  DWServicesAccess *v8; 
  DWAchievementEngine *AchievementEngine; 
  unsigned int v10; 
  int v11; 
  bdReference<bdRemoteTask> result; 
  bdAchievementEvent *events[3]; 
  bdAchievementEvent ptr; 
  bdReportEventsRequest request; 

  events[1] = (bdAchievementEvent *)-2i64;
  if ( Cmd_Argc() >= 1 )
  {
    v0 = Cmd_LocalControllerIndex();
    v1 = v0;
    if ( v0 > 8 )
    {
      v11 = 8;
      v10 = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 51, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v10, 0i64, v11) )
        __debugbreak();
    }
    v2 = Cmd_ArgInt(1);
    UTC = LiveStorage_GetUTC();
    bdAchievementEvent::bdAchievementEvent(&ptr, "login_event", UTC);
    bdAchievementEvent::addKeyValue(&ptr, "version", 1ui64);
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_challenge_special_event_day, "online_challenge_special_event_day");
    if ( Int_Internal_DebugName > 0 )
      bdAchievementEvent::addKeyValue(&ptr, "special_event_day", Int_Internal_DebugName);
    bdAchievementEvent::addKeyValue(&ptr, "day_override", v2);
    events[0] = &ptr;
    Instance = DWServicesAccess::GetInstance();
    TitleID = DWServicesAccess::GetTitleID(Instance);
    v7 = j_va("%u", TitleID);
    bdReportEventsRequest::bdReportEventsRequest(&request, v7, 1u, (const bdAchievementEvent **)events, NULL);
    v8 = DWServicesAccess::GetInstance();
    AchievementEngine = DWServicesAccess::GetAchievementEngine(v8, v1);
    DWAchievementEngine::reportEvents(AchievementEngine, &result, &request);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    bdReportEventsRequest::~bdReportEventsRequest(&request);
    bdReferencable::~bdReferencable((bdReferencable *)&request.gap10F2[6]);
    `eh vector destructor iterator'(&ptr.m_keyValues, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdAchievementEventKeyValue::`vbase destructor);
    bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&ptr.__vftable + 3));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&ptr.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&ptr.m_keyValues + 1));
  }
  else
  {
    Com_Printf(0, "usage: activatedaily [offset]\n");
  }
}

/*
==============
OnlineScheduledChallenges::ConvertProgressToTarget
==============
*/
unsigned __int64 OnlineScheduledChallenges::ConvertProgressToTarget(const int kind, const unsigned __int64 id, const unsigned __int64 progress)
{
  const char *ConversionType; 
  float v5; 
  float v6; 
  float v7; 
  unsigned __int64 v8; 
  float v10; 
  float v11; 

  ConversionType = OnlineScheduledChallenges::GetConversionType(kind, id);
  if ( I_stricmp(ConversionType, "sec") )
  {
    if ( I_stricmp(ConversionType, "min") )
      return progress;
    v10 = (float)(__int64)progress;
    if ( (progress & 0x8000000000000000ui64) != 0i64 )
    {
      v11 = (float)(__int64)progress;
      v10 = v11 + 1.8446744e19;
    }
    v7 = v10 * 0.000016666667;
  }
  else
  {
    v5 = (float)(__int64)progress;
    if ( (progress & 0x8000000000000000ui64) != 0i64 )
    {
      v6 = (float)(__int64)progress;
      v5 = v6 + 1.8446744e19;
    }
    v7 = v5 * 0.001;
  }
  v8 = 0i64;
  if ( v7 >= 9.223372e18 )
  {
    v7 = v7 - 9.223372e18;
    if ( v7 < 9.223372e18 )
      v8 = 0x8000000000000000ui64;
  }
  return v8 + (unsigned int)(int)v7;
}

/*
==============
OnlineScheduledChallenges::ConvertTargetToProgress
==============
*/
unsigned __int64 OnlineScheduledChallenges::ConvertTargetToProgress(const int kind, const unsigned __int64 id, const unsigned __int64 target)
{
  const char *ConversionType; 

  ConversionType = OnlineScheduledChallenges::GetConversionType(kind, id);
  if ( !I_stricmp(ConversionType, "sec") )
    return 1000 * target;
  if ( I_stricmp(ConversionType, "min") )
    return target;
  return 60000 * target;
}

/*
==============
OnlineScheduledChallenges::FillMissingCompletedChallengeProgress
==============
*/
void OnlineScheduledChallenges::FillMissingCompletedChallengeProgress(OnlineScheduledChallenges *this, const int controllerIndex, int type)
{
  int v3; 
  signed int v4; 
  const char *v5; 
  unsigned int v6; 
  int v7; 
  DailyProgression *v8; 
  int v9; 
  StringTable *v10; 
  unsigned int amount; 
  __int64 *v12; 
  DailyProgression *v13; 
  __int64 v14; 
  __int64 id; 
  int v16; 
  int RowCount; 
  const char *ColumnValueForRow; 
  int v19; 
  int v20; 
  const char *v21; 
  int v22; 
  bool v23; 
  const char *v24; 
  int v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  const char *v28; 
  int v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  const char *ConversionType; 
  __int64 v33; 
  int v34; 
  StringTable *tablePtr; 
  __int64 v36[3]; 

  v3 = 0;
  v4 = 0;
  if ( type )
  {
    if ( type == 1 )
    {
      v5 = "br_daily_challenges.csv";
      v7 = this->m_brDailyCurrentIndex[controllerIndex];
      v6 = 27;
      v3 = this->m_brSpecialEventDay[controllerIndex];
      v8 = &this->m_brDailyProgression[controllerIndex];
    }
    else
    {
      if ( type != 2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 543, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled ONLINE_SCHEDULED_CHALLENGE_TYPE %d", type) )
          __debugbreak();
        return;
      }
      v5 = "cp_daily_challenges.csv";
      v6 = 30;
      v7 = this->m_cpDailyCurrentIndex[controllerIndex];
      v8 = &this->m_cpDailyProgression[controllerIndex];
    }
  }
  else
  {
    v5 = "daily_challenges.csv";
    v7 = this->m_dailyCurrentIndex[controllerIndex];
    v6 = 12;
    v3 = this->m_specialEventDay[controllerIndex];
    v8 = &this->m_dailyProgression[controllerIndex];
  }
  v34 = v7;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 547, ASSERT_TYPE_ASSERT, "(prog)", (const char *)&queryFormat, "prog") )
    __debugbreak();
  v9 = 1207963648;
  if ( !_bittest(&v9, v6) )
  {
    LODWORD(v33) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 548, ASSERT_TYPE_ASSERT, "( kind == AE_CHALLENGE_TYPE_DAILY || kind == AE_CHALLENGE_TYPE_BR_DAILY || kind == AE_CHALLENGE_TYPE_CP_DAILY )", "kind = %d", v33) )
      __debugbreak();
  }
  if ( v8 && v8->amount < 3 && _bittest(&v9, v6) )
  {
    tablePtr = NULL;
    StringTable_GetAsset(v5, (const StringTable **)&tablePtr);
    v10 = tablePtr;
    if ( tablePtr )
      goto LABEL_22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 567, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
      __debugbreak();
    v10 = tablePtr;
    if ( tablePtr )
    {
LABEL_22:
      amount = v8->amount;
      if ( amount )
      {
        v12 = v36;
        v13 = v8;
        v4 = v8->amount;
        v14 = amount;
        do
        {
          id = v13->progression[0].id;
          v13 = (DailyProgression *)((char *)v13 + 16);
          *v12++ = id;
          --v14;
        }
        while ( v14 );
      }
      v16 = 0;
      RowCount = StringTable_GetRowCount(v10);
      if ( RowCount > 0 )
      {
        do
        {
          ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v16, 7);
          v19 = atoi(ColumnValueForRow);
          v20 = v19;
          if ( v3 <= 0 || v19 != 2 )
          {
            v21 = StringTable_GetColumnValueForRow(tablePtr, v16, 12);
            v22 = atoi(v21);
            if ( v3 > 0 && v20 == 5 )
              v23 = v22 == v3;
            else
              v23 = v22 - 1 == v7;
            if ( v23 )
            {
              v24 = StringTable_GetColumnValueForRow(tablePtr, v16, 0);
              v25 = atoi(v24);
              v26 = 0i64;
              v27 = v25;
              if ( v4 <= 0i64 )
              {
LABEL_36:
                if ( v8->amount < 3 )
                {
                  v28 = StringTable_GetColumnValueForRow(tablePtr, v16, 4);
                  v29 = atoi(v28);
                  v30 = v27;
                  v31 = v29;
                  v8->progression[v8->amount].id = v30;
                  ConversionType = OnlineScheduledChallenges::GetConversionType(v6, v30);
                  if ( I_stricmp(ConversionType, "sec") )
                  {
                    if ( !I_stricmp(ConversionType, "min") )
                      v31 *= 60000i64;
                  }
                  else
                  {
                    v31 *= 1000i64;
                  }
                  v8->progression[v8->amount++].progress = v31;
                }
              }
              else
              {
                while ( v36[v26] != v25 )
                {
                  if ( ++v26 >= v4 )
                    goto LABEL_36;
                }
              }
            }
          }
          v7 = v34;
          ++v16;
        }
        while ( v16 < RowCount );
      }
    }
  }
}

/*
==============
OnlineScheduledChallenges::Finalise
==============
*/
void OnlineScheduledChallenges::Finalise(OnlineScheduledChallenges *this, const int controllerIndex)
{
  int i; 

  for ( i = 0; i < 3; ++i )
    OnlineScheduledChallenges::FillMissingCompletedChallengeProgress(this, controllerIndex, i);
}

/*
==============
OnlineScheduledChallenges::GetBRDailyProgression
==============
*/
DailyProgression *OnlineScheduledChallenges::GetBRDailyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return &this->m_brDailyProgression[controllerIndex];
}

/*
==============
OnlineScheduledChallenges::GetBRWeeklyProgression
==============
*/
WeeklyProgression *OnlineScheduledChallenges::GetBRWeeklyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return &this->m_brWeeklyProgression[controllerIndex];
}

/*
==============
OnlineScheduledChallenges::GetCPDailyProgression
==============
*/
DailyProgression *OnlineScheduledChallenges::GetCPDailyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return &this->m_cpDailyProgression[controllerIndex];
}

/*
==============
OnlineScheduledChallenges::GetConversionType
==============
*/
const char *OnlineScheduledChallenges::GetConversionType(const int kind, const unsigned __int64 id)
{
  int v4; 
  const char *v5; 
  const char *v6; 
  int v7; 
  const char *v9; 
  StringTable *tablePtr; 

  if ( (unsigned int)kind <= 0x1E && (v4 = 1207963648, _bittest(&v4, kind)) )
  {
    if ( kind == 27 )
    {
      v5 = "br_daily_challenges.csv";
    }
    else
    {
      v5 = "cp_daily_challenges.csv";
      if ( kind != 30 )
        v5 = "daily_challenges.csv";
    }
    StringTable_GetAsset(v5, (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 675, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
      __debugbreak();
    v6 = j_va("%lu", id);
    v7 = 11;
  }
  else
  {
    if ( kind != 11 && kind != 26 )
      return (char *)&queryFormat.fmt + 3;
    v9 = "weekly_challenges.csv";
    if ( kind == 26 )
      v9 = "br_weekly_challenges.csv";
    StringTable_GetAsset(v9, (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 683, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
      __debugbreak();
    v6 = j_va("%lu", id);
    v7 = 10;
  }
  return StringTable_Lookup(tablePtr, 0, v6, v7);
}

/*
==============
OnlineScheduledChallenges::GetDailyProgression
==============
*/
DailyProgression *OnlineScheduledChallenges::GetDailyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return &this->m_dailyProgression[controllerIndex];
}

/*
==============
OnlineScheduledChallenges::GetInstance
==============
*/
OnlineScheduledChallenges *OnlineScheduledChallenges::GetInstance()
{
  return &OnlineScheduledChallenges::s_instance;
}

/*
==============
OnlineScheduledChallenges::GetInstancePtr
==============
*/
OnlineScheduledChallenges *OnlineScheduledChallenges::GetInstancePtr()
{
  return &OnlineScheduledChallenges::s_instance;
}

/*
==============
OnlineScheduledChallenges::GetWeeklyProgression
==============
*/
WeeklyProgression *OnlineScheduledChallenges::GetWeeklyProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  return &this->m_weeklyProgression[controllerIndex];
}

/*
==============
OnlineScheduledChallenges::ResetProgression
==============
*/
void OnlineScheduledChallenges::ResetProgression(OnlineScheduledChallenges *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  OnlineScheduledChallenges_vtbl **v5; 

  v2 = controllerIndex;
  v4 = controllerIndex;
  v5 = (OnlineScheduledChallenges_vtbl **)((char *)this + 56 * controllerIndex);
  v5[8] = NULL;
  v5[9] = NULL;
  v5[10] = NULL;
  v5[11] = NULL;
  v5[12] = NULL;
  v5[13] = NULL;
  v5[14] = NULL;
  memset_0(&this->m_weeklyProgression[v4], 0, sizeof(this->m_weeklyProgression[v4]));
  v5[6472] = NULL;
  v5[6473] = NULL;
  v5[6474] = NULL;
  v5[6475] = NULL;
  v5[6476] = NULL;
  v5[6477] = NULL;
  v5[6478] = NULL;
  memset_0(&this->m_brWeeklyProgression[v4], 0, sizeof(this->m_brWeeklyProgression[v4]));
  v5[12936] = NULL;
  v5[12937] = NULL;
  v5[12938] = NULL;
  v5[12939] = NULL;
  v5[12940] = NULL;
  v5[12941] = NULL;
  v5[12942] = NULL;
  this->m_dailyCurrentIndex[v2] = 0;
  this->m_brDailyCurrentIndex[v2] = 0;
  this->m_cpDailyCurrentIndex[v2] = 0;
  this->m_specialEventDay[v2] = 0;
  this->m_brSpecialEventDay[v2] = 0;
}

/*
==============
OnlineScheduledChallenges::SetBRDailyCurrentIndex
==============
*/
void OnlineScheduledChallenges::SetBRDailyCurrentIndex(OnlineScheduledChallenges *this, const int controllerIndex, const int index)
{
  this->m_brDailyCurrentIndex[controllerIndex] = index;
}

/*
==============
OnlineScheduledChallenges::SetBRSpecialEventDay
==============
*/
void OnlineScheduledChallenges::SetBRSpecialEventDay(OnlineScheduledChallenges *this, const int controllerIndex, const int day)
{
  this->m_brSpecialEventDay[controllerIndex] = day;
}

/*
==============
OnlineScheduledChallenges::SetCPDailyCurrentIndex
==============
*/
void OnlineScheduledChallenges::SetCPDailyCurrentIndex(OnlineScheduledChallenges *this, const int controllerIndex, const int index)
{
  this->m_cpDailyCurrentIndex[controllerIndex] = index;
}

/*
==============
OnlineScheduledChallenges::SetDailyCurrentIndex
==============
*/
void OnlineScheduledChallenges::SetDailyCurrentIndex(OnlineScheduledChallenges *this, const int controllerIndex, const int index)
{
  this->m_dailyCurrentIndex[controllerIndex] = index;
}

/*
==============
OnlineScheduledChallenges::SetSpecialEventDay
==============
*/
void OnlineScheduledChallenges::SetSpecialEventDay(OnlineScheduledChallenges *this, const int controllerIndex, const int day)
{
  this->m_specialEventDay[controllerIndex] = day;
}

/*
==============
OnlineScheduledChallenges::TriggerNextDay
==============
*/
void OnlineScheduledChallenges::TriggerNextDay(OnlineScheduledChallenges *this, const int controllerIndex, const int kind, bdJSONDeserializer *json)
{
  __int64 v6; 
  DailyProgression *v8; 
  unsigned int i; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  const char *v18; 
  const char *v19; 
  unsigned int v20; 
  const char *v21; 
  StringTable *tablePtr; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v24; 
  __int64 v25; 
  char v26[32]; 
  char v27[64]; 

  v25 = -2i64;
  v6 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( kind == 1000010 )
  {
LABEL_6:
    if ( kind == 1000050 )
      v8 = &this->m_cpDailyProgression[v6];
    else
      v8 = &this->m_dailyProgression[v6];
    goto LABEL_9;
  }
  if ( kind != 1000047 )
  {
    if ( kind != 1000050 )
      goto LABEL_43;
    goto LABEL_6;
  }
  v8 = &this->m_brDailyProgression[v6];
LABEL_9:
  v8->amount = 0;
  if ( bdJSONDeserializer::hasKey(json, "triggers") && bdJSONDeserializer::getArray(json, "triggers", &value) )
  {
    for ( i = 0; i < value.m_count; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v24);
      bdJSONDeserializer::getElementByIndex(&value, i, &v24);
      bdJSONDeserializer::getString(&v24, "type", v26, 0x20u);
      v10 = 0x7FFFFFFFi64;
      v11 = 0i64;
      while ( 1 )
      {
        v12 = (unsigned __int8)v26[v11];
        v13 = (unsigned __int8)aActivateAchiev[v11++];
        if ( !v10-- )
        {
LABEL_21:
          v17 = 0;
          goto LABEL_22;
        }
        if ( v12 != v13 )
        {
          v15 = v12 + 32;
          if ( v12 - 65 > 0x19 )
            v15 = v12;
          v12 = v15;
          v16 = v13 + 32;
          if ( v13 - 65 > 0x19 )
            v16 = v13;
          if ( v12 != v16 )
            break;
        }
        if ( !v12 )
          goto LABEL_21;
      }
      v17 = 1;
      if ( v12 < v16 )
        v17 = -1;
LABEL_22:
      if ( !v17 && bdJSONDeserializer::getString(&v24, (const char *const)&stru_143C9A1A4, v27, 0x40u) && v8->amount < 3 )
      {
        if ( kind == 1000047 )
        {
          v18 = "br_daily_challenges.csv";
        }
        else
        {
          v18 = "cp_daily_challenges.csv";
          if ( kind != 1000050 )
            v18 = "daily_challenges.csv";
        }
        StringTable_GetAsset(v18, (const StringTable **)&tablePtr);
        if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 464, ASSERT_TYPE_ASSERT, "(daily_challenges)", (const char *)&queryFormat, "daily_challenges") )
          __debugbreak();
        v19 = StringTable_Lookup(tablePtr, 1, v27, 0);
        v20 = atoi(v19);
        Com_Printf(25, "DAILY CHALLENGES: %s (%d) has been unlocked, activated and added\n", v27, v20);
        v8->progression[v8->amount].id = atoi(v19);
        v8->progression[v8->amount++].progress = 0i64;
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v24);
    }
  }
  if ( kind == 1000047 )
  {
    v21 = "new_br_daily_challenges";
  }
  else
  {
    v21 = "new_cp_daily_challenges";
    if ( kind != 1000050 )
      v21 = "new_daily_challenges";
  }
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, v21, LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
LABEL_43:
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
OnlineScheduledChallenges::UpdateChallenges
==============
*/
char OnlineScheduledChallenges::UpdateChallenges(OnlineScheduledChallenges *this, const int controllerIndex, const int kind, bdJSONDeserializer *json, bool complete)
{
  __int64 v6; 
  int v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  unsigned __int64 v13; 
  int v14; 
  unsigned __int64 v15; 
  unsigned __int64 UserId; 
  __int64 v17; 
  DailyProgression *v18; 
  unsigned int amount; 
  int v20; 
  DailyProgression *i; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  unsigned __int64 v28; 
  int v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  char *v33; 
  int v34; 
  unsigned int v35; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  unsigned __int64 value; 
  StringTable *tablePtr; 
  unsigned __int64 v40; 
  unsigned __int64 v41; 
  char v42[64]; 

  v6 = controllerIndex;
  if ( !bdJSONDeserializer::getUInt64(json, "id_", &value) || !bdJSONDeserializer::getUInt64(json, "progress", &v40) )
    return 0;
  if ( (unsigned int)kind <= 0x1E )
  {
    v9 = 1207963648;
    if ( _bittest(&v9, kind) )
    {
      if ( complete )
      {
        if ( kind == 27 )
        {
          v10 = "completed_br_daily_challenge";
        }
        else
        {
          v10 = "completed_cp_daily_challenge";
          if ( kind != 30 )
            v10 = "completed_daily_challenge";
        }
        if ( LUI_BeginEvent(LOCAL_CLIENT_0, v10, LUI_luaVM) )
        {
          LUI_SetTableBool("immediate", 1, LUI_luaVM);
          LUI_SetTableInt((const char *)&valueOut, value, LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
        }
        bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, v42, 0x40u);
        if ( kind == 27 )
        {
          v11 = "br_daily_challenges.csv";
        }
        else
        {
          v11 = "cp_daily_challenges.csv";
          if ( kind != 30 )
            v11 = "daily_challenges.csv";
        }
        StringTable_GetAsset(v11, (const StringTable **)&tablePtr);
        if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 298, ASSERT_TYPE_ASSERT, "(daily_challenges)", (const char *)&queryFormat, "daily_challenges") )
          __debugbreak();
        v12 = StringTable_Lookup(tablePtr, 1, v42, 5);
        bdJSONDeserializer::getUInt64(json, "completionTimestamp", &v41);
        v13 = v41;
        v14 = atoi(v12);
        v15 = value;
        LODWORD(v12) = v14;
        UserId = DLog_GetUserId(v6);
        DLog_RecordEvent<char const *,unsigned __int64,char const *,int,char const *,unsigned __int64>(UserId, "dlog_event_challenge_complete", "challenge_id", v15, "xp_gained", (int)v12, "timestamp", v13);
      }
      v17 = v6;
      if ( kind == 27 )
      {
        v18 = &this->m_brDailyProgression[v17];
      }
      else
      {
        v18 = &this->m_cpDailyProgression[v17];
        if ( kind != 30 )
          v18 = &this->m_dailyProgression[v17];
      }
      amount = v18->amount;
      v20 = 0;
      if ( amount )
      {
        for ( i = v18; value != i->progression[0].id; i = (DailyProgression *)((char *)i + 16) )
        {
          if ( ++v20 >= amount )
            return 0;
        }
        v22 = v40;
        v23 = value;
        v18->progression[v20].progress = v40;
        Com_Printf(25, "Updated Daily Challenge %lu with progress %lu\n", v23, v22);
        return 1;
      }
      return 0;
    }
  }
  if ( kind != 11 && kind != 26 )
    return 0;
  if ( complete )
  {
    v25 = "completed_weekly_challenge";
    if ( kind == 26 )
      v25 = "completed_br_weekly_challenge";
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, v25, LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_SetTableInt((const char *)&valueOut, value, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
      bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, v42, 0x40u);
      v26 = "weekly_challenges.csv";
      if ( kind == 26 )
        v26 = "br_weekly_challenges.csv";
      StringTable_GetAsset(v26, (const StringTable **)&tablePtr);
      if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_scheduled_challenges.cpp", 357, ASSERT_TYPE_ASSERT, "(weekly_challenges)", (const char *)&queryFormat, "weekly_challenges") )
        __debugbreak();
      v27 = StringTable_Lookup(tablePtr, 1, v42, 5);
      bdJSONDeserializer::getUInt64(json, "completionTimestamp", &v41);
      v28 = v41;
      v29 = atoi(v27);
      v30 = value;
      LODWORD(v27) = v29;
      v31 = DLog_GetUserId(v6);
      DLog_RecordEvent<char const *,unsigned __int64,char const *,int,char const *,unsigned __int64>(v31, "dlog_event_challenge_complete", "challenge_id", v30, "xp_gained", (int)v27, "timestamp", v28);
    }
  }
  v32 = 52224i64;
  if ( kind != 26 )
    v32 = 512i64;
  v33 = (char *)this + 6408 * v6 + v32;
  v34 = 0;
  v35 = *((_DWORD *)v33 + 1600);
  if ( !v35 )
  {
LABEL_47:
    if ( v35 >= 0x190 )
    {
      Com_PrintError(25, "Too many Weekly Challenges sent from AE. Increase MAX_WEEKLY_CHALLENGES.\n");
    }
    else
    {
      Com_Printf(25, "Found Weekly Challenge %lu with progress %lu\n", value, v40);
      *(_QWORD *)&v33[16 * *((unsigned int *)v33 + 1600)] = value;
      *(_QWORD *)&v33[16 * (*((_DWORD *)v33 + 1600))++ + 8] = v40;
    }
    return 0;
  }
  while ( value != *(_QWORD *)&v33[16 * v34] )
  {
    if ( ++v34 >= v35 )
      goto LABEL_47;
  }
  v36 = v40;
  v37 = value;
  *(_QWORD *)&v33[16 * v34 + 8] = v40;
  Com_Printf(25, "Updated Weekly Challenge %lu with progress %lu\n", v37, v36);
  return 1;
}

