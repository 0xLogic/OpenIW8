/*
==============
Online_AAR::OnDisconnect
==============
*/

void __fastcall Online_AAR::OnDisconnect(Online_AAR *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_AAR@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_AAR::OnSignedIn
==============
*/

void __fastcall Online_AAR::OnSignedIn(Online_AAR *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_AAR@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_AAR::OnSignedOut
==============
*/

void __fastcall Online_AAR::OnSignedOut(Online_AAR *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_AAR@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_AAR::Uninit
==============
*/

void __fastcall Online_AAR::Uninit(Online_AAR *this)
{
  ?Uninit@Online_AAR@@UEAAXXZ(this);
}

/*
==============
Online_AAR::OnUnregistered
==============
*/

void __fastcall Online_AAR::OnUnregistered(Online_AAR *this)
{
  ?OnUnregistered@Online_AAR@@UEAAXXZ(this);
}

/*
==============
Online_AAR::OnRegistered
==============
*/

void __fastcall Online_AAR::OnRegistered(Online_AAR *this)
{
  ?OnRegistered@Online_AAR@@UEAAXXZ(this);
}

/*
==============
Online_AAR::OutputCurrentState
==============
*/

void __fastcall Online_AAR::OutputCurrentState(Online_AAR *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_AAR@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_AAR::Init
==============
*/

bool __fastcall Online_AAR::Init(Online_AAR *this)
{
  return ?Init@Online_AAR@@UEAA_NXZ(this);
}

/*
==============
Online_AAR::GetInstancePtr
==============
*/

Online_AAR *__fastcall Online_AAR::GetInstancePtr()
{
  return ?GetInstancePtr@Online_AAR@@SAPEAV1@XZ();
}

/*
==============
Online_AAR::AddStickerBookChallengeXP
==============
*/

int __fastcall Online_AAR::AddStickerBookChallengeXP(Online_AAR *this, const int controllerIndex, const char *id, const StringTable *challenges, bool complete)
{
  return ?AddStickerBookChallengeXP@Online_AAR@@AEAAHHPEBDPEBUStringTable@@_N@Z(this, controllerIndex, id, challenges, complete);
}

/*
==============
Online_AAR::RegisterLuaFunctions
==============
*/

void __fastcall Online_AAR::RegisterLuaFunctions(Online_AAR *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_AAR@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_AAR::ControllerFrame
==============
*/

void __fastcall Online_AAR::ControllerFrame(Online_AAR *this, const int controllerIndex)
{
  ?ControllerFrame@Online_AAR@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_AAR::IsSupportedChallengeType
==============
*/

bool __fastcall Online_AAR::IsSupportedChallengeType(Online_AAR *this, const int kind)
{
  return ?IsSupportedChallengeType@Online_AAR@@QEAA_NH@Z(this, kind);
}

/*
==============
Online_AAR::StartMatch
==============
*/

void __fastcall Online_AAR::StartMatch(Online_AAR *this)
{
  ?StartMatch@Online_AAR@@QEAAXXZ(this);
}

/*
==============
Online_AAR::GetInstance
==============
*/

Online_AAR *__fastcall Online_AAR::GetInstance()
{
  return ?GetInstance@Online_AAR@@SAAEAV1@XZ();
}

/*
==============
Online_AAR::ParseCompletion
==============
*/

void __fastcall Online_AAR::ParseCompletion(Online_AAR *this, const int controllerIndex, const int kind, bdJSONDeserializer *json, bool complete)
{
  ?ParseCompletion@Online_AAR@@QEAAXHHPEAVbdJSONDeserializer@@_N@Z(this, controllerIndex, kind, json, complete);
}

/*
==============
Online_AAR::AddChallengeXP
==============
*/

int __fastcall Online_AAR::AddChallengeXP(Online_AAR *this, const int controllerIndex, const int kind, const char *id, bool complete)
{
  return ?AddChallengeXP@Online_AAR@@AEAAHHHPEBD_N@Z(this, controllerIndex, kind, id, complete);
}

/*
==============
Online_AAR::ParseUpdate
==============
*/

void __fastcall Online_AAR::ParseUpdate(Online_AAR *this, const int controllerIndex, const int kind, bdJSONDeserializer *json)
{
  ?ParseUpdate@Online_AAR@@QEAAXHHPEAVbdJSONDeserializer@@@Z(this, controllerIndex, kind, json);
}

/*
==============
Online_AAR::Reset
==============
*/

void __fastcall Online_AAR::Reset(Online_AAR *this, const int controllerIndex)
{
  ?Reset@Online_AAR@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_AAR::Frame
==============
*/

void __fastcall Online_AAR::Frame(Online_AAR *this)
{
  ?Frame@Online_AAR@@UEAAXXZ(this);
}

/*
==============
Online_AAR::OnRegistered
==============
*/
void Online_AAR::OnRegistered(Online_AAR *this)
{
  ;
}

/*
==============
Online_AAR::OnUnregistered
==============
*/
void Online_AAR::OnUnregistered(Online_AAR *this)
{
  ;
}

/*
==============
Online_AAR::Init
==============
*/
char Online_AAR::Init(Online_AAR *this)
{
  return 1;
}

/*
==============
Online_AAR::Uninit
==============
*/
void Online_AAR::Uninit(Online_AAR *this)
{
  ;
}

/*
==============
Online_AAR::Frame
==============
*/
void Online_AAR::Frame(Online_AAR *this)
{
  ;
}

/*
==============
Online_AAR::ControllerFrame
==============
*/
void Online_AAR::ControllerFrame(Online_AAR *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_AAR::OnSignedIn
==============
*/
void Online_AAR::OnSignedIn(Online_AAR *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_AAR::OnSignedOut
==============
*/
void Online_AAR::OnSignedOut(Online_AAR *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_AAR::OnDisconnect
==============
*/
void Online_AAR::OnDisconnect(Online_AAR *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_AAR::RegisterLuaFunctions
==============
*/
void Online_AAR::RegisterLuaFunctions(Online_AAR *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "OnlineAAR", AAR_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_AAR::OutputCurrentState
==============
*/
void Online_AAR::OutputCurrentState(Online_AAR *this, const int controllerIndex)
{
  OnlineAARData *v3; 
  __int64 v4; 
  unsigned int i; 
  unsigned int j; 

  v3 = &this->m_onlineAARData[controllerIndex];
  Com_Printf(25, "Online_AAR DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, DOUBLE_3_125);
  Com_Printf(25, "Start XP %lu - Current XP %lu\n", v3->start_xp, v3->current_xp);
  Com_Printf(25, "Start Season XP %lu - Current Season XP %lu\n", v3->start_season_xp, v3->current_season_xp);
  Com_Printf(25, "Start Battlepass XP %lu - Current Battlepass XP %lu\n", v3->start_battlepass_xp, v3->current_battlepass_xp);
  Com_Printf(25, "Battlepass Time XP %lu\n", v3->battlepass_time_xp);
  Com_Printf(25, "Battlepass Challenge XP %lu\n", v3->battlepass_challenge_xp);
  Com_Printf(25, "Start Level XP %lu - Current Level XP %lu\n", v3->start_level_xp, v3->current_level_xp);
  Com_Printf(25, "Start Level %lu - Current Level %lu\n", v3->start_level, v3->current_level);
  Com_Printf(25, "Mission XP %d\n", (unsigned int)v3->mission_xp);
  Com_Printf(25, "Plunder XP %d\n", (unsigned int)v3->plunder_xp);
  Com_Printf(25, "Challenge XP %d\n", (unsigned int)v3->challenge_xp);
  v4 = 0i64;
  for ( i = 0; i < v3->challenges_complete_amount; ++i )
    Com_Printf(25, "Challenge Kind %d ID %d completed\n", (unsigned int)v3->challenges_complete[i].kind, (unsigned int)v3->challenges_complete[i].id);
  for ( j = 0; j < v3->unlocks_amount; ++j )
    Com_Printf(25, "Loot ID %d unlocked\n", (unsigned int)v3->unlocks[j]);
  if ( v3->faction_unlocks_amount )
  {
    do
    {
      Com_Printf(25, "Loot ID %d unlocked via factions\n", (unsigned int)v3->faction_unlocks[v4]);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v3->faction_unlocks_amount );
  }
  Com_Printf(25, "Online_AAR DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_Reset
==============
*/
__int64 LUI_CoD_LuaCall_Reset(lua_State *const luaVM)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: OnlineAAR.Reset( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineAAR.Reset( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si edx, xmm0; controllerIndex }
  Online_AAR::Reset(&Online_AAR::s_instance, _EDX);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetData
==============
*/
__int64 LUI_CoD_LuaCall_GetData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_AddCPPoints
==============
*/
__int64 LUI_CoD_LuaCall_AddCPPoints(lua_State *const luaVM)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OnlineAAR.AddCPpoints( <controller>, <amount> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineAAR.AddCPpoints( <controller>, <amount> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OnlineAAR.AddCPpoints( <controller>, <amount> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si edx, xmm0 }
  Online_AAR::s_instance.m_onlineAARData[_EBX].start_CPPoints -= _EDX;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
Online_AAR::AddChallengeXP
==============
*/
__int64 Online_AAR::AddChallengeXP(Online_AAR *this, const int controllerIndex, const int kind, const char *id, bool complete)
{
  char *v8; 
  int v9; 
  const char *v10; 
  unsigned int v11; 
  OnlineStickerBookChallenges *Instance; 
  int v13; 
  StickerBookChallengeProgression *StickerBookChallengeProgression; 
  unsigned __int64 unlock_progress; 
  const char *v16; 
  const char *v17; 
  char *v18; 
  int v19; 
  char *v20; 
  __int64 v21; 
  const char *v22; 
  const StringTable *table; 
  StringTable *tablePtr; 
  char Str[128]; 
  char dest[128]; 

  v8 = (char *)this + 392 * controllerIndex;
  v9 = 5;
  switch ( kind )
  {
    case 6:
      v10 = "elder_challenges.csv";
      v9 = 6;
      goto LABEL_11;
    case 11:
      v10 = "weekly_challenges.csv";
      goto LABEL_11;
    case 12:
      v10 = "daily_challenges.csv";
      goto LABEL_11;
    case 15:
      v10 = "quest_challenges.csv";
      v9 = 8;
      goto LABEL_11;
    case 26:
      v10 = "br_weekly_challenges.csv";
      goto LABEL_11;
    case 27:
      v10 = "br_daily_challenges.csv";
      goto LABEL_11;
    case 30:
      v10 = "cp_daily_challenges.csv";
      goto LABEL_11;
    case 32:
      v10 = "sticker_book_challenges.csv";
      goto LABEL_11;
    case 34:
      v10 = "misc_challenges.csv";
LABEL_11:
      StringTable_GetAsset(v10, (const StringTable **)&tablePtr);
      if ( kind == 32 )
      {
        v11 = 0;
        table = tablePtr;
        Instance = OnlineStickerBookChallenges::GetInstance();
        v13 = atoi(id);
        StickerBookChallengeProgression = OnlineStickerBookChallenges::GetStickerBookChallengeProgression(Instance, controllerIndex, v13);
        unlock_progress = StickerBookChallengeProgression->unlock_progress;
        v16 = StringTable_Lookup(table, 0, id, 4);
        v17 = StringTable_Lookup(table, 0, id, 6);
        Core_strcpy(dest, 0x80ui64, v16);
        Core_strcpy(Str, 0x80ui64, v17);
        if ( !strstr_0(Str, "|") )
        {
          if ( !complete )
            goto LABEL_27;
          v18 = (char *)StringTable_Lookup(table, 0, id, 6);
          goto LABEL_15;
        }
        if ( StickerBookChallengeProgression->update_aar_multitarget_challenge_xp )
        {
          v19 = 0;
          v20 = strtok(dest, "|");
          StickerBookChallengeProgression->update_aar_multitarget_challenge_xp = 0;
          if ( v20 )
          {
            while ( 1 )
            {
              v21 = atoi(v20);
              v20 = strtok(NULL, "|");
              ++v19;
              if ( unlock_progress == v21 )
                break;
              if ( !v20 )
                goto LABEL_27;
            }
            v18 = strtok(Str, "|");
            if ( v18 )
            {
              while ( --v19 )
              {
                v18 = strtok(NULL, "|");
                if ( !v18 )
                  goto LABEL_27;
              }
LABEL_15:
              v11 = atoi(v18);
            }
          }
        }
      }
      else
      {
        v22 = StringTable_Lookup(tablePtr, 0, id, v9);
        v11 = atoi(v22);
      }
LABEL_27:
      *((_DWORD *)v8 + 43) += v11;
      Com_Printf(25, "-------------------Challenge Kind %d ID %s add_xp %d total_xp %d\n", (unsigned int)kind, id, v11, *((_DWORD *)v8 + 43));
      return v11;
    default:
      return 0i64;
  }
}

/*
==============
Online_AAR::AddStickerBookChallengeXP
==============
*/
int Online_AAR::AddStickerBookChallengeXP(Online_AAR *this, const int controllerIndex, const char *id, const StringTable *challenges, bool complete)
{
  OnlineStickerBookChallenges *Instance; 
  int v9; 
  StickerBookChallengeProgression *StickerBookChallengeProgression; 
  unsigned __int64 unlock_progress; 
  const char *v12; 
  const char *v13; 
  char *v14; 
  int v16; 
  char *v17; 
  __int64 v18; 
  char Str[128]; 
  char dest[128]; 

  Instance = OnlineStickerBookChallenges::GetInstance();
  v9 = atoi(id);
  StickerBookChallengeProgression = OnlineStickerBookChallenges::GetStickerBookChallengeProgression(Instance, controllerIndex, v9);
  unlock_progress = StickerBookChallengeProgression->unlock_progress;
  v12 = StringTable_Lookup(challenges, 0, id, 4);
  v13 = StringTable_Lookup(challenges, 0, id, 6);
  Core_strcpy(dest, 0x80ui64, v12);
  Core_strcpy(Str, 0x80ui64, v13);
  if ( strstr_0(Str, "|") )
  {
    if ( StickerBookChallengeProgression->update_aar_multitarget_challenge_xp )
    {
      v16 = 0;
      v17 = strtok(dest, "|");
      StickerBookChallengeProgression->update_aar_multitarget_challenge_xp = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = atoi(v17);
          v17 = strtok(NULL, "|");
          ++v16;
          if ( unlock_progress == v18 )
            break;
          if ( !v17 )
            return 0;
        }
        v14 = strtok(Str, "|");
        if ( v14 )
        {
          while ( --v16 )
          {
            v14 = strtok(NULL, "|");
            if ( !v14 )
              return 0;
          }
          return atoi(v14);
        }
      }
    }
  }
  else if ( complete )
  {
    v14 = (char *)StringTable_Lookup(challenges, 0, id, 6);
    return atoi(v14);
  }
  return 0;
}

/*
==============
Online_AAR::GetInstance
==============
*/
Online_AAR *Online_AAR::GetInstance()
{
  return &Online_AAR::s_instance;
}

/*
==============
Online_AAR::GetInstancePtr
==============
*/
Online_AAR *Online_AAR::GetInstancePtr()
{
  return &Online_AAR::s_instance;
}

/*
==============
Online_AAR::IsSupportedChallengeType
==============
*/
bool Online_AAR::IsSupportedChallengeType(Online_AAR *this, const int kind)
{
  __int64 v2; 
  bool result; 

  result = 0;
  if ( (unsigned int)kind <= 0x22 )
  {
    v2 = 0x54E009960i64;
    if ( _bittest64(&v2, kind) )
      return 1;
  }
  return result;
}

/*
==============
LUI_CoD_LuaCall_GetData_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetData_impl(lua_State *const luaVM)
{
  OnlineAARData *v4; 
  __int64 v5; 
  Online_Commerce *Instance; 
  __int64 CurrencyAmount; 
  __int64 v8; 
  Online_Commerce *v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 Currency; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: OnlineAAR.GetData( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineAAR.GetData( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si esi, xmm0 }
  v4 = &Online_AAR::s_instance.m_onlineAARData[_ESI];
  j_lua_createtable(luaVM, 0, 0);
  v5 = v4->current_xp - v4->challenge_xp - v4->plunder_xp - v4->mission_xp - v4->start_xp;
  LUI_SetTableInt("StartXP", v4->start_xp, luaVM);
  LUI_SetTableInt("CurrentXP", v4->current_xp, luaVM);
  LUI_SetTableInt("StartSeasonXP", v4->start_season_xp, luaVM);
  LUI_SetTableInt("CurrentSeasonXP", v4->current_season_xp, luaVM);
  LUI_SetTableInt("StartBattlepassXP", v4->start_battlepass_xp, luaVM);
  LUI_SetTableInt("CurrentBattlepassXP", v4->current_battlepass_xp, luaVM);
  LUI_SetTableInt("BattlepassTimeXP", v4->battlepass_time_xp, luaVM);
  LUI_SetTableInt("BattlepassChallengeXP", v4->battlepass_challenge_xp, luaVM);
  LUI_SetTableInt("StartLevelXP", v4->start_level_xp, luaVM);
  LUI_SetTableInt("CurrentLevelXP", v4->current_level_xp, luaVM);
  LUI_SetTableInt("StartLevel", v4->start_level, luaVM);
  LUI_SetTableInt("CurrentLevel", v4->current_level, luaVM);
  Instance = Online_Commerce::GetInstance();
  CurrencyAmount = Online_Commerce::GetCurrencyAmount(Instance, _ESI, 11);
  v8 = truncate_cast<int,__int64>(CurrencyAmount);
  v9 = Online_Commerce::GetInstance();
  v10 = Online_Commerce::GetCurrencyAmount(v9, _ESI, 10);
  v11 = truncate_cast<int,__int64>(v10);
  Currency = CL_PlayerData_GetCurrency(_ESI);
  LUI_SetTableInt("StartKeys", v4->start_keys, luaVM);
  LUI_SetTableInt("CurrentKeys", v8, luaVM);
  LUI_SetTableInt("StartCommonCrate", v4->start_common_crate, luaVM);
  LUI_SetTableInt("CurrentCommonCrate", v11, luaVM);
  LUI_SetTableInt("StartCPpoints", v4->start_CPPoints, luaVM);
  LUI_SetTableInt("CurrentCPpoints", Currency, luaVM);
  LUI_SetTableInt("ChallengeXP", v4->challenge_xp, luaVM);
  LUI_SetTableInt("MissionXP", v4->mission_xp, luaVM);
  LUI_SetTableInt("PlunderXP", v4->plunder_xp, luaVM);
  LUI_SetTableInt("MatchXP", v5, luaVM);
  LUI_BeginTable("Challenges", v4->challenges_complete_amount, 0, luaVM);
  v13 = 0;
  v14 = 0i64;
  if ( v4->challenges_complete_amount )
  {
    do
    {
      v15 = v14 + 1;
      LUI_BeginTable((unsigned int)(v14 + 1), luaVM);
      LUI_SetTableInt("type", v4->challenges_complete[v14].kind, luaVM);
      LUI_SetTableInt("ID", v4->challenges_complete[v14].id, luaVM);
      LUI_EndTable(LUI_luaVM);
      v14 = (unsigned int)(v14 + 1);
    }
    while ( v15 < v4->challenges_complete_amount );
  }
  LUI_EndTable(LUI_luaVM);
  LUI_BeginTable("Unlocks", v4->unlocks_amount, 0, luaVM);
  if ( v4->unlocks_amount )
  {
    do
    {
      LUI_BeginTable(v13 + 1, luaVM);
      LUI_SetTableInt("ID", v4->unlocks[v13], luaVM);
      LUI_EndTable(LUI_luaVM);
      ++v13;
    }
    while ( v13 < v4->unlocks_amount );
  }
  LUI_EndTable(LUI_luaVM);
  return 1i64;
}

/*
==============
Online_AAR::ParseCompletion
==============
*/
void Online_AAR::ParseCompletion(Online_AAR *this, const int controllerIndex, const int kind, bdJSONDeserializer *json, bool complete)
{
  unsigned __int64 v6; 
  __int64 v7; 
  OnlineAARData *v9; 
  bool v10; 
  const char *v11; 
  unsigned int i; 
  __int64 v13; 
  __int64 v14; 
  char v15; 
  char v16; 
  unsigned int j; 
  unsigned int unlocks_amount; 
  unsigned int challenges_complete_amount; 
  __int64 v21; 
  unsigned int v22; 
  int v23; 
  int v24; 
  bdJSONDeserializer value; 
  StringTable *tablePtr[2]; 
  bdJSONDeserializer v27; 
  bdJSONDeserializer v28; 
  char v29[32]; 

  tablePtr[1] = (StringTable *)-2i64;
  v6 = kind;
  v7 = controllerIndex;
  v23 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  v9 = &this->m_onlineAARData[v7];
  if ( !(_DWORD)v6 )
  {
    if ( bdJSONDeserializer::getObject(json, "multiProgress", &value) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v28);
      if ( bdJSONDeserializer::getObject(&value, "xp", &v28) )
        bdJSONDeserializer::getUInt64(&v28, (const char *const)&stru_143CE7590, &this->m_onlineAARData[v7].current_xp);
      bdJSONDeserializer::~bdJSONDeserializer(&v28);
    }
    goto LABEL_6;
  }
  if ( (_DWORD)v6 == 6 )
  {
    if ( !bdJSONDeserializer::getObject(json, "multiProgress", &value) )
    {
LABEL_6:
      v10 = 0;
      goto LABEL_32;
    }
    bdJSONDeserializer::bdJSONDeserializer(&v28);
    if ( bdJSONDeserializer::getObject(&value, "xp", &v28) )
      bdJSONDeserializer::getUInt64(&v28, (const char *const)&stru_143CE7590, &this->m_onlineAARData[v7].current_season_xp);
    if ( bdJSONDeserializer::getObject(&value, "level_xp", &v28) )
      bdJSONDeserializer::getUInt64(&v28, (const char *const)&stru_143CE7590, &this->m_onlineAARData[v7].current_level_xp);
    if ( bdJSONDeserializer::getObject(&value, "level", &v28) )
      bdJSONDeserializer::getUInt64(&v28, (const char *const)&stru_143CE7590, &this->m_onlineAARData[v7].current_level);
    bdJSONDeserializer::~bdJSONDeserializer(&v28);
    v10 = 0;
  }
  else
  {
    if ( (_DWORD)v6 == 20 && bdJSONDeserializer::getObject(json, "multiProgress", &value) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v28);
      if ( bdJSONDeserializer::getObject(&value, "xp", &v28) )
        bdJSONDeserializer::getUInt64(&v28, (const char *const)&stru_143CE7590, &this->m_onlineAARData[v7].current_battlepass_xp);
      if ( bdJSONDeserializer::getObject(&value, "challenge_xp", &v28) )
        bdJSONDeserializer::getUInt64(&v28, (const char *const)&stru_143CE7590, &this->m_onlineAARData[v7].battlepass_challenge_xp);
      if ( bdJSONDeserializer::getObject(&value, "time_xp", &v28) )
        bdJSONDeserializer::getUInt64(&v28, (const char *const)&stru_143CE7590, &this->m_onlineAARData[v7].battlepass_time_xp);
      bdJSONDeserializer::~bdJSONDeserializer(&v28);
    }
    v10 = 0;
    if ( (_DWORD)v6 == 34 && bdJSONDeserializer::hasKey(json, "id_") && bdJSONDeserializer::getInt32(json, "id_", &v24) )
    {
      Com_sprintf<16>((char (*)[16])&v28, "%d", (unsigned int)v24);
      StringTable_GetAsset("misc_challenges.csv", (const StringTable **)tablePtr);
      if ( !tablePtr[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_aar.cpp", 301, ASSERT_TYPE_ASSERT, "(challenges)", (const char *)&queryFormat, "challenges") )
        __debugbreak();
      v11 = StringTable_Lookup(tablePtr[0], 0, (const char *)&v28, 12);
      v10 = atoi(v11) != 0;
    }
  }
LABEL_32:
  if ( bdJSONDeserializer::hasKey(json, "triggers") && bdJSONDeserializer::getArray(json, "triggers", &value) )
  {
    for ( i = 0; i < value.m_count; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v28);
      bdJSONDeserializer::getElementByIndex(&value, i, &v28);
      bdJSONDeserializer::getString(&v28, "type", v29, 0x20u);
      v13 = 0i64;
      v14 = 0x7FFFFFFFi64;
      do
      {
        v15 = v29[v13];
        v16 = aGrantProduct[v13++];
        if ( !v14-- )
          break;
        if ( v15 != v16 )
          goto LABEL_44;
      }
      while ( v15 );
      bdJSONDeserializer::getObject(&v28, "inventory", &v28);
      bdJSONDeserializer::getArray(&v28, "granted_items", &v28);
      for ( j = 0; j < v28.m_count; ++j )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v27);
        bdJSONDeserializer::getElementByIndex(&v28, j, &v27);
        bdJSONDeserializer::getInt32(&v27, (const char *const)&valueOut, &v24);
        unlocks_amount = v9->unlocks_amount;
        if ( unlocks_amount < 0x10 && !v10 )
        {
          v9->unlocks[unlocks_amount] = v24;
          ++v9->unlocks_amount;
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v27);
      }
LABEL_44:
      bdJSONDeserializer::~bdJSONDeserializer(&v28);
    }
    LODWORD(v7) = v23;
  }
  if ( !complete )
  {
    if ( (_DWORD)v6 == 32 && bdJSONDeserializer::hasKey(json, "id_") && bdJSONDeserializer::getInt32(json, "id_", &v23) )
    {
      Com_sprintf<16>((char (*)[16])&v28, "%d", (unsigned int)v23);
      if ( Online_AAR::AddChallengeXP(this, v7, 32, (const char *)&v28, complete) > 0 )
      {
        challenges_complete_amount = v9->challenges_complete_amount;
        if ( challenges_complete_amount < 0x10 && !v10 )
        {
          v9->challenges_complete[challenges_complete_amount].id = v23;
          v9->challenges_complete[v9->challenges_complete_amount++].kind = 32;
        }
      }
    }
    goto LABEL_54;
  }
  if ( (unsigned int)v6 > 0x22 || (v21 = 0x54E009960i64, !_bittest64(&v21, v6)) )
  {
LABEL_54:
    Com_Printf(25, "Challenge Kind %d is not completed or challenge type is not supported right now.\n", (unsigned int)v6);
    goto LABEL_55;
  }
  if ( bdJSONDeserializer::hasKey(json, "id_") && bdJSONDeserializer::getInt32(json, "id_", &v23) )
  {
    Com_sprintf<16>((char (*)[16])&v28, "%d", (unsigned int)v23);
    Online_AAR::AddChallengeXP(this, v7, v6, (const char *)&v28, complete);
    v22 = v9->challenges_complete_amount;
    if ( v22 < 0x10 && !v10 )
    {
      v9->challenges_complete[v22].id = v23;
      v9->challenges_complete[v9->challenges_complete_amount++].kind = v6;
    }
  }
LABEL_55:
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
Online_AAR::ParseUpdate
==============
*/
void Online_AAR::ParseUpdate(Online_AAR *this, const int controllerIndex, const int kind, bdJSONDeserializer *json)
{
  __int64 v6; 
  unsigned __int64 *v8; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v10; 

  v6 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  v8 = (unsigned __int64 *)((char *)this + 392 * v6);
  if ( kind )
  {
    if ( kind == 6 )
    {
      if ( bdJSONDeserializer::getObject(json, "multiProgress", &value) )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v10);
        if ( bdJSONDeserializer::getObject(&value, "xp", &v10) )
          bdJSONDeserializer::getUInt64(&v10, (const char *const)&stru_143CE7590, v8 + 11);
        if ( bdJSONDeserializer::getObject(&value, "level_xp", &v10) )
          bdJSONDeserializer::getUInt64(&v10, (const char *const)&stru_143CE7590, v8 + 17);
        if ( bdJSONDeserializer::getObject(&value, "level", &v10) )
          bdJSONDeserializer::getUInt64(&v10, (const char *const)&stru_143CE7590, v8 + 19);
        goto LABEL_23;
      }
    }
    else if ( kind == 20 && bdJSONDeserializer::getObject(json, "multiProgress", &value) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v10);
      if ( bdJSONDeserializer::getObject(&value, "xp", &v10) )
        bdJSONDeserializer::getUInt64(&v10, (const char *const)&stru_143CE7590, v8 + 13);
      if ( bdJSONDeserializer::getObject(&value, "challenge_xp", &v10) )
        bdJSONDeserializer::getUInt64(&v10, (const char *const)&stru_143CE7590, v8 + 15);
      if ( bdJSONDeserializer::getObject(&value, "time_xp", &v10) )
        bdJSONDeserializer::getUInt64(&v10, (const char *const)&stru_143CE7590, v8 + 14);
      goto LABEL_23;
    }
  }
  else if ( bdJSONDeserializer::getObject(json, "multiProgress", &value) )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v10);
    if ( bdJSONDeserializer::getObject(&value, "xp", &v10) )
      bdJSONDeserializer::getUInt64(&v10, (const char *const)&stru_143CE7590, v8 + 9);
LABEL_23:
    bdJSONDeserializer::~bdJSONDeserializer(&v10);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
Online_AAR::Reset
==============
*/
void Online_AAR::Reset(Online_AAR *this, const int controllerIndex)
{
  __int64 v2; 
  int Int_Internal_DebugName; 
  OnlineAARData *v5; 
  unsigned __int64 xp; 
  OnlineProgression *Instance; 
  unsigned __int64 v8; 
  OnlineBattlepass *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 rank; 
  Online_Commerce *v13; 
  __int64 CurrencyAmount; 
  Online_Commerce *v15; 
  __int64 v16; 

  v2 = controllerIndex;
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_current_season, "current_season");
  v5 = &this->m_onlineAARData[v2];
  xp = OnlineProgression::GetInstance()->m_playerProgression[v2].xp;
  Instance = OnlineProgression::GetInstance();
  v8 = OnlineProgression::GetSeasonProgression(Instance, v2, Int_Internal_DebugName)->xp;
  v9 = OnlineBattlepass::GetInstance();
  v10 = OnlineBattlepass::GetXP(v9, v2, Int_Internal_DebugName);
  v11 = OnlineProgression::GetInstance()->m_levelProgression[v2].xp;
  rank = OnlineProgression::GetInstance()->m_levelProgression[v2].rank;
  v5->battlepass_time_xp = 0i64;
  v5->battlepass_challenge_xp = 0i64;
  *(_QWORD *)&v5->mission_xp = 0i64;
  v5->challenge_xp = 0;
  v5->challenges_complete_amount = 0;
  v5->unlocks_amount = 0;
  v5->faction_unlocks_amount = 0;
  v5->start_xp = xp;
  v5->current_xp = xp;
  v5->start_season_xp = v8;
  v5->current_season_xp = v8;
  v5->start_battlepass_xp = v10;
  v5->current_battlepass_xp = v10;
  v5->start_level_xp = v11;
  v5->current_level_xp = v11;
  v5->start_level = rank;
  v5->current_level = rank;
  v13 = Online_Commerce::GetInstance();
  CurrencyAmount = Online_Commerce::GetCurrencyAmount(v13, v2, 11);
  v5->start_keys = truncate_cast<int,__int64>(CurrencyAmount);
  v15 = Online_Commerce::GetInstance();
  v16 = Online_Commerce::GetCurrencyAmount(v15, v2, 10);
  v5->start_common_crate = truncate_cast<int,__int64>(v16);
  v5->start_CPPoints = CL_PlayerData_GetCurrency(v2);
}

/*
==============
Online_AAR::StartMatch
==============
*/
void Online_AAR::StartMatch(Online_AAR *this)
{
  unsigned __int64 *p_start_season_xp; 
  int v2; 
  __int64 v3; 
  int Int_Internal_DebugName; 
  unsigned __int64 v5; 
  OnlineProgression *Instance; 
  unsigned __int64 xp; 
  OnlineBattlepass *v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  Online_Commerce *v12; 
  __int64 CurrencyAmount; 
  Online_Commerce *v14; 
  __int64 v15; 

  p_start_season_xp = &this->m_onlineAARData[0].start_season_xp;
  v2 = 0;
  v3 = 124448i64;
  do
  {
    if ( CL_Mgr_IsControllerMappedToClient(v2, NULL) )
    {
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_current_season, "current_season");
      v5 = *(_QWORD *)((char *)OnlineProgression::GetInstance() + v3 - 124384);
      Instance = OnlineProgression::GetInstance();
      xp = OnlineProgression::GetSeasonProgression(Instance, v2, Int_Internal_DebugName)->xp;
      v8 = OnlineBattlepass::GetInstance();
      v9 = OnlineBattlepass::GetXP(v8, v2, Int_Internal_DebugName);
      v10 = *(unsigned __int64 *)((char *)&OnlineProgression::GetInstance()->__vftable + v3);
      v11 = *(unsigned __int64 *)((char *)&OnlineProgression::GetInstance()->m_nextSystem + v3);
      p_start_season_xp[8] = v11;
      p_start_season_xp[9] = v11;
      *(p_start_season_xp - 2) = v5;
      *(p_start_season_xp - 1) = v5;
      *p_start_season_xp = xp;
      p_start_season_xp[1] = xp;
      p_start_season_xp[2] = v9;
      p_start_season_xp[3] = v9;
      p_start_season_xp[4] = 0i64;
      p_start_season_xp[5] = 0i64;
      p_start_season_xp[6] = v10;
      p_start_season_xp[7] = v10;
      p_start_season_xp[12] = 0i64;
      *((_DWORD *)p_start_season_xp + 23) = 0;
      *((_DWORD *)p_start_season_xp + 58) = 0;
      *((_DWORD *)p_start_season_xp + 75) = 0;
      *((_DWORD *)p_start_season_xp + 92) = 0;
      v12 = Online_Commerce::GetInstance();
      CurrencyAmount = Online_Commerce::GetCurrencyAmount(v12, v2, 11);
      *((_DWORD *)p_start_season_xp + 20) = truncate_cast<int,__int64>(CurrencyAmount);
      v14 = Online_Commerce::GetInstance();
      v15 = Online_Commerce::GetCurrencyAmount(v14, v2, 10);
      *((_DWORD *)p_start_season_xp + 21) = truncate_cast<int,__int64>(v15);
      *((_DWORD *)p_start_season_xp + 22) = CL_PlayerData_GetCurrency(v2);
    }
    ++v2;
    p_start_season_xp += 49;
    v3 += 16i64;
  }
  while ( v2 < 8 );
}

