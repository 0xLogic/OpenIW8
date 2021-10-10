/*
==============
Online_PlayerData_HasShownCrossPlayDialog
==============
*/

bool __fastcall Online_PlayerData_HasShownCrossPlayDialog(const int controllerIndex)
{
  return ?Online_PlayerData_HasShownCrossPlayDialog@@YA_NH@Z(controllerIndex);
}

/*
==============
Online_PlayerData_GetPrivatePartySetting
==============
*/

PartyPrivacySetting __fastcall Online_PlayerData_GetPrivatePartySetting(const int controllerIndex)
{
  return ?Online_PlayerData_GetPrivatePartySetting@@YA?AW4PartyPrivacySetting@@H@Z(controllerIndex);
}

/*
==============
Online_PlayerData_SetHasShownCrossPlayDialog
==============
*/

void __fastcall Online_PlayerData_SetHasShownCrossPlayDialog(const int controllerIndex, const bool value)
{
  ?Online_PlayerData_SetHasShownCrossPlayDialog@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
Online_PlayerData_SetPartySquadAutofillEnabled
==============
*/

bool __fastcall Online_PlayerData_SetPartySquadAutofillEnabled(const int controllerIndex, const bool enabled)
{
  return ?Online_PlayerData_SetPartySquadAutofillEnabled@@YA_NH_N@Z(controllerIndex, enabled);
}

/*
==============
Online_PlayerData_GetFavoriteFriends
==============
*/

bool __fastcall Online_PlayerData_GetFavoriteFriends(const int controllerIndex, XUID *favoriteFriendXUIDs)
{
  return ?Online_PlayerData_GetFavoriteFriends@@YA_NHPEAUXUID@@@Z(controllerIndex, favoriteFriendXUIDs);
}

/*
==============
Online_PlayerData_SetCrossPlayEnabled
==============
*/

bool __fastcall Online_PlayerData_SetCrossPlayEnabled(const int controllerIndex, const bool enabled)
{
  return ?Online_PlayerData_SetCrossPlayEnabled@@YA_NH_N@Z(controllerIndex, enabled);
}

/*
==============
Online_PlayerData_GetFavoriteFriendsNextFreeSlot
==============
*/

int __fastcall Online_PlayerData_GetFavoriteFriendsNextFreeSlot(const int controllerIndex)
{
  return ?Online_PlayerData_GetFavoriteFriendsNextFreeSlot@@YAHH@Z(controllerIndex);
}

/*
==============
Online_PlayerData_GetIndexForXuidInFavoriteFriends
==============
*/

int __fastcall Online_PlayerData_GetIndexForXuidInFavoriteFriends(const int controllerIndex, const XUID friendXUID)
{
  return ?Online_PlayerData_GetIndexForXuidInFavoriteFriends@@YAHHUXUID@@@Z(controllerIndex, friendXUID);
}

/*
==============
Online_PlayerData_SetPrivatePartySetting
==============
*/

void __fastcall Online_PlayerData_SetPrivatePartySetting(const int controllerIndex, const PartyPrivacySetting setting)
{
  ?Online_PlayerData_SetPrivatePartySetting@@YAXHW4PartyPrivacySetting@@@Z(controllerIndex, setting);
}

/*
==============
Online_PlayerData_IsInCohort
==============
*/

bool __fastcall Online_PlayerData_IsInCohort(const int controllerIndex)
{
  return ?Online_PlayerData_IsInCohort@@YA_NH@Z(controllerIndex);
}

/*
==============
Online_PlayerData_GetLobbyComparisonData
==============
*/

void __fastcall Online_PlayerData_GetLobbyComparisonData(const int controllerIndex, ClientAuthoritativeMemberInfo *partyClientData)
{
  ?Online_PlayerData_GetLobbyComparisonData@@YAXHPEAUClientAuthoritativeMemberInfo@@@Z(controllerIndex, partyClientData);
}

/*
==============
Online_PlayerData_SetFavoriteFriends
==============
*/

bool __fastcall Online_PlayerData_SetFavoriteFriends(const int controllerIndex, const XUID friendXUID, const int index)
{
  return ?Online_PlayerData_SetFavoriteFriends@@YA_NHUXUID@@H@Z(controllerIndex, friendXUID, index);
}

/*
==============
Online_PlayerData_IsCrossPlayEnabled
==============
*/

bool __fastcall Online_PlayerData_IsCrossPlayEnabled(const int controllerIndex)
{
  return ?Online_PlayerData_IsCrossPlayEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
Online_PlayerData_StartCohortSampling
==============
*/

void __fastcall Online_PlayerData_StartCohortSampling(const int controllerIndex, const float percentOfPopulation)
{
  ?Online_PlayerData_StartCohortSampling@@YAXHM@Z(controllerIndex, percentOfPopulation);
}

/*
==============
Online_PlayerData_GetPartySquadAutofillEnabled
==============
*/

bool __fastcall Online_PlayerData_GetPartySquadAutofillEnabled(const int controllerIndex)
{
  return ?Online_PlayerData_GetPartySquadAutofillEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
Online_PlayerData_GetBool
==============
*/
bool Online_PlayerData_GetBool(const int controllerIndex, StatsGroup statsGroup, const char *fieldName)
{
  StatsSource ActiveStatsSource; 
  DDLState state; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
    return 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, statsGroup);
  return DDL_MoveToName(&state, &state, fieldName, 0) && DDL_GetBool(&state, &context);
}

/*
==============
Online_PlayerData_GetFavoriteFriends
==============
*/
char Online_PlayerData_GetFavoriteFriends(const int controllerIndex, XUID *favoriteFriendXUIDs)
{
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  int i; 
  unsigned __int64 UInt64; 
  const XUID *v10; 
  DDLState state; 
  DDLState toState; 
  DDLContext context; 
  XUID result; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    return 0;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  state.arrayIndex = -1;
  *(_OWORD *)&state.member = _XMM0;
  LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_NONGAME);
  RawHash = j_SL_GetRawHash(scr_const.favoriteUsers);
  if ( !DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    Com_PrintWarning(25, "Online_PlayerData_SetPrivatePartySetting failed DDL_MoveToNameByHash.\n");
    return 0;
  }
  for ( i = 0; i < 16; ++i )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    toState.isValid = 0;
    toState.offset = 0;
    toState.arrayIndex = -1;
    *(_OWORD *)&toState.member = _XMM0;
    DDL_MoveToIndex(&state, &toState, i);
    UInt64 = DDL_GetUInt64(&toState, &context);
    v10 = XUID::FromUInt64(&result, UInt64);
    XUID::operator=(favoriteFriendXUIDs++, v10);
  }
  return 1;
}

/*
==============
Online_PlayerData_GetFavoriteFriendsNextFreeSlot
==============
*/
__int64 Online_PlayerData_GetFavoriteFriendsNextFreeSlot(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  unsigned int v6; 
  DDLState state; 
  DDLState toState; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    return 0xFFFFFFFFi64;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  state.arrayIndex = -1;
  *(_OWORD *)&state.member = _XMM0;
  LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_NONGAME);
  RawHash = j_SL_GetRawHash(scr_const.favoriteUsers);
  if ( !DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
  {
    Com_PrintWarning(25, "Online_PlayerData_GetFavoriteFriendsNextFreeSlot failed DDL_MoveToNameByHash.\n");
    return 0xFFFFFFFFi64;
  }
  v6 = 0;
  while ( 1 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    toState.isValid = 0;
    toState.offset = 0;
    toState.arrayIndex = -1;
    *(_OWORD *)&toState.member = _XMM0;
    DDL_MoveToIndex(&state, &toState, v6);
    if ( !DDL_GetUInt64(&toState, &context) )
      break;
    if ( (int)++v6 >= 16 )
      return 0xFFFFFFFFi64;
  }
  return v6;
}

/*
==============
Online_PlayerData_GetIndexForXuidInFavoriteFriends
==============
*/
__int64 Online_PlayerData_GetIndexForXuidInFavoriteFriends(const int controllerIndex, const XUID friendXUID)
{
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  bool v7; 
  int ArraySize; 
  int v9; 
  unsigned int v10; 
  unsigned __int64 UInt64; 
  DDLState state; 
  DDLState toState; 
  DDLContext context; 
  XUID v16; 

  v16.m_id = friendXUID.m_id;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    return 0xFFFFFFFFi64;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  state.arrayIndex = -1;
  *(_OWORD *)&state.member = _XMM0;
  LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_NONGAME);
  RawHash = j_SL_GetRawHash(scr_const.favoriteUsers);
  v7 = DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
  ArraySize = DDL_StateGetArraySize(&state);
  v9 = 16;
  if ( ArraySize < 16 )
    v9 = ArraySize;
  if ( !v7 )
  {
    Com_PrintWarning(25, "Online_PlayerData_SetPrivatePartySetting failed DDL_MoveToNameByHash.\n");
    return 0xFFFFFFFFi64;
  }
  v10 = 0;
  if ( v9 <= 0 )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    toState.isValid = 0;
    toState.offset = 0;
    toState.arrayIndex = -1;
    *(_OWORD *)&toState.member = _XMM0;
    DDL_MoveToIndex(&state, &toState, v10);
    UInt64 = DDL_GetUInt64(&toState, &context);
    if ( UInt64 == XUID::ToUint64(&v16) )
      break;
    if ( (int)++v10 >= v9 )
      return 0xFFFFFFFFi64;
  }
  return v10;
}

/*
==============
Online_PlayerData_GetLobbyComparisonData
==============
*/
void Online_PlayerData_GetLobbyComparisonData(const int controllerIndex, ClientAuthoritativeMemberInfo *partyClientData)
{
  StatsGroup StatsGroupForGameMode; 
  __int64 v5; 
  StatsSource ActiveStatsSource; 
  unsigned __int8 *deathsHistory; 
  int ArrayIntByIndex; 
  int v9; 
  int InternalInt; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  DDLContext context; 
  unsigned int navHashes; 
  unsigned int RawHash; 

  if ( !partyClientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_player_data.cpp", 324, ASSERT_TYPE_ASSERT, "(partyClientData)", (const char *)&queryFormat, "partyClientData") )
    __debugbreak();
  StatsGroupForGameMode = Com_PlayerData_GetStatsGroupForGameMode();
  v5 = (unsigned int)StatsGroupForGameMode;
  if ( StatsGroupForGameMode == STATSGROUP_IGNORE )
    goto LABEL_15;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, (StatsGroup)v5) )
    goto LABEL_15;
  if ( !(_DWORD)v5 )
  {
    *(_QWORD *)&partyClientData->alienRevives = v5;
    navHashes = j_SL_GetRawHash(scr_const.bestWeaponIndex);
    partyClientData->bestWeaponIndex = Com_PlayerData_GetInternalInt(&navHashes, 1, &context, STATSGROUP_RANKED);
    navHashes = j_SL_GetRawHash(scr_const.wins);
    partyClientData->wins = Com_PlayerData_GetInternalInt(&navHashes, 1, &context, STATSGROUP_RANKED);
    navHashes = j_SL_GetRawHash(scr_const.kdRatio);
    partyClientData->kdRatio = Com_PlayerData_GetInternalInt(&navHashes, 1, &context, STATSGROUP_RANKED);
    navHashes = j_SL_GetRawHash(scr_const.currentWinStreak);
    partyClientData->currentWinStreak = Com_PlayerData_GetInternalInt(&navHashes, 1, &context, STATSGROUP_RANKED);
    navHashes = j_SL_GetRawHash(scr_const.gamesPlayed);
    partyClientData->gamesPlayed = Com_PlayerData_GetInternalInt(&navHashes, 1, &context, STATSGROUP_RANKED);
    navHashes = j_SL_GetRawHash(scr_const.winLossRatio);
    partyClientData->winLossRatio = Com_PlayerData_GetInternalInt(&navHashes, 1, &context, STATSGROUP_RANKED);
    navHashes = j_SL_GetRawHash(scr_const.timePlayedTotal);
    partyClientData->timePlayedTotal = Com_PlayerData_GetInternalInt(&navHashes, 1, &context, STATSGROUP_RANKED);
    deathsHistory = partyClientData->deathsHistory;
    do
    {
      ArrayIntByIndex = Com_PlayerData_GetArrayIntByIndex(&context, (const scr_string_t)scr_const.kdHistoryK, v5, STATSGROUP_RANKED);
      *(deathsHistory - 5) = truncate_cast<unsigned char,int>(ArrayIntByIndex);
      v9 = Com_PlayerData_GetArrayIntByIndex(&context, (const scr_string_t)scr_const.kdHistoryD, v5, STATSGROUP_RANKED);
      LODWORD(v5) = v5 + 1;
      *deathsHistory++ = truncate_cast<unsigned char,int>(v9);
    }
    while ( (int)v5 < 5 );
    return;
  }
  if ( (_DWORD)v5 != 1 )
  {
LABEL_15:
    *(_QWORD *)&partyClientData->bestWeaponIndex = 0i64;
    *(_QWORD *)&partyClientData->kdRatio = 0i64;
    *(_QWORD *)&partyClientData->gamesPlayed = 0i64;
    partyClientData->timePlayedTotal = 0;
    *(_QWORD *)&partyClientData->alienRevives = 0i64;
    return;
  }
  *(_QWORD *)&partyClientData->bestWeaponIndex = 0i64;
  *(_QWORD *)&partyClientData->kdRatio = 0i64;
  *(_QWORD *)&partyClientData->gamesPlayed = 0i64;
  partyClientData->timePlayedTotal = 0;
  *(_QWORD *)partyClientData->killsHistory = 0i64;
  *(_WORD *)&partyClientData->deathsHistory[3] = 0;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_player_data.cpp", 383, ASSERT_TYPE_ASSERT, "(Com_GameMode_IsCoopActive())", (const char *)&queryFormat, "Com_GameMode_IsCoopActive()") )
    __debugbreak();
  navHashes = j_SL_GetRawHash(scr_const.alienPlayerStats);
  RawHash = j_SL_GetRawHash(scr_const.revives);
  InternalInt = Com_PlayerData_GetInternalInt(&navHashes, 2, &context, STATSGROUP_COOP);
  v11 = I_clamp(InternalInt, 0, 0xFFFF);
  partyClientData->alienRevives = truncate_cast<unsigned short,int>(v11);
  RawHash = j_SL_GetRawHash(scr_const.escaped);
  v12 = Com_PlayerData_GetInternalInt(&navHashes, 2, &context, STATSGROUP_COOP);
  v13 = I_clamp(v12, 0, 0xFFFF);
  partyClientData->alienEscapes = truncate_cast<unsigned short,int>(v13);
  RawHash = j_SL_GetRawHash(scr_const.headShots);
  v14 = Com_PlayerData_GetInternalInt(&navHashes, 2, &context, STATSGROUP_COOP);
  v15 = I_clamp(v14, 0, 0xFFFF);
  partyClientData->alienNerfEscapes = truncate_cast<unsigned short,int>(v15);
  RawHash = j_SL_GetRawHash(scr_const.kills);
  v16 = Com_PlayerData_GetInternalInt(&navHashes, 2, &context, STATSGROUP_COOP);
  v17 = I_clamp(v16, 0, 0xFFFF);
  partyClientData->aliensKilled = truncate_cast<unsigned short,int>(v17);
}

/*
==============
Online_PlayerData_GetPartySquadAutofillEnabled
==============
*/
bool Online_PlayerData_GetPartySquadAutofillEnabled(const int controllerIndex)
{
  return !Online_PlayerData_GetBool(controllerIndex, STATSGROUP_NONGAME, "party_autofill_lock");
}

/*
==============
Online_PlayerData_GetPrivatePartySetting
==============
*/
int Online_PlayerData_GetPrivatePartySetting(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    return 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_NONGAME);
  RawHash = j_SL_GetRawHash(scr_const.partyPrivacySettings);
  if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
    return DDL_GetInt(&state, &context);
  else
    return 0;
}

/*
==============
Online_PlayerData_HasShownCrossPlayDialog
==============
*/
bool Online_PlayerData_HasShownCrossPlayDialog(const int controllerIndex)
{
  return Online_PlayerData_GetBool(controllerIndex, STATSGROUP_NONGAME, "cross_play_dialog_shown");
}

/*
==============
Online_PlayerData_IsCrossPlayEnabled
==============
*/
bool Online_PlayerData_IsCrossPlayEnabled(const int controllerIndex)
{
  return !Online_PlayerData_GetBool(controllerIndex, STATSGROUP_NONGAME, "cross_play_dialog_shown") || Online_PlayerData_GetBool(controllerIndex, STATSGROUP_NONGAME, "cross_play_enabled");
}

/*
==============
Online_PlayerData_IsInCohort
==============
*/
bool Online_PlayerData_IsInCohort(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  bool result; 
  DDLState state; 
  DDLContext context; 

  if ( !bOnce_1 )
    return bCachedValue;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON) )
    return bCachedValue;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_COMMON);
  if ( !DDL_MoveToName(&state, &state, "shouldLogCohortData") )
    return bCachedValue;
  result = DDL_GetBool(&state, &context);
  bCachedValue = result;
  bOnce_1 = 0;
  return result;
}

/*
==============
Online_PlayerData_SetBool
==============
*/
bool Online_PlayerData_SetBool(const int controllerIndex, StatsGroup statsGroup, const char *fieldName, const bool value)
{
  StatsSource ActiveStatsSource; 
  DDLState state; 
  DDLContext context; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, statsGroup) )
    return 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, statsGroup);
  return DDL_MoveToName(&state, &state, fieldName, 0) && DDL_SetBool(&state, &context, value);
}

/*
==============
Online_PlayerData_SetCrossPlayEnabled
==============
*/
bool Online_PlayerData_SetCrossPlayEnabled(const int controllerIndex, const bool enabled)
{
  return Online_PlayerData_SetBool(controllerIndex, STATSGROUP_NONGAME, "cross_play_enabled", enabled);
}

/*
==============
Online_PlayerData_SetFavoriteFriends
==============
*/
char Online_PlayerData_SetFavoriteFriends(const int controllerIndex, const XUID friendXUID, const int index)
{
  unsigned int RawHash; 
  unsigned __int64 v9; 
  DDLState state; 
  DDLState toState; 
  DDLContext context; 
  XUID v14; 

  v14.m_id = friendXUID.m_id;
  if ( LiveStorage_GetActiveStatsSource(controllerIndex) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_player_data.cpp", 217, ASSERT_TYPE_ASSERT, "(LiveStorage_GetActiveStatsSource( controllerIndex ) == STATS_ONLINE)", (const char *)&queryFormat, "LiveStorage_GetActiveStatsSource( controllerIndex ) == STATS_ONLINE") )
      __debugbreak();
  }
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, STATS_ONLINE, STATSGROUP_NONGAME) )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.isValid = 0;
    *(_OWORD *)&state.member = _XMM0;
    state.offset = 0;
    state.arrayIndex = -1;
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_NONGAME);
    RawHash = j_SL_GetRawHash(scr_const.favoriteUsers);
    if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      *(_OWORD *)&toState.member = _XMM0;
      if ( DDL_MoveToIndex(&state, &toState, index) )
      {
        v9 = XUID::ToUint64(&v14);
        if ( DDL_SetUInt64(&toState, &context, v9) )
        {
          LiveStorage_RequestOnlineStatsUpload(controllerIndex);
          return 1;
        }
      }
      else
      {
        Com_PrintWarning(25, "Online_PlayerData_SetFavoriteFriends failed DDL_MoveToIndex.\n");
      }
    }
    else
    {
      Com_PrintWarning(25, "Online_PlayerData_SetFavoriteFriends failed DDL_MoveToNameByHash.\n");
    }
  }
  return 0;
}

/*
==============
Online_PlayerData_SetHasShownCrossPlayDialog
==============
*/
void Online_PlayerData_SetHasShownCrossPlayDialog(const int controllerIndex, const bool value)
{
  Online_PlayerData_SetBool(controllerIndex, STATSGROUP_NONGAME, "cross_play_dialog_shown", value);
}

/*
==============
Online_PlayerData_SetPartySquadAutofillEnabled
==============
*/
char Online_PlayerData_SetPartySquadAutofillEnabled(const int controllerIndex, const bool enabled)
{
  if ( !Online_PlayerData_SetBool(controllerIndex, STATSGROUP_NONGAME, "party_autofill_lock", !enabled) )
    return 0;
  if ( LiveStorage_GetActiveStatsSource(controllerIndex) == STATS_ONLINE )
    LiveStorage_RequestOnlineStatsUpload(controllerIndex);
  return 1;
}

/*
==============
Online_PlayerData_SetPrivatePartySetting
==============
*/
void Online_PlayerData_SetPrivatePartySetting(const int controllerIndex, const PartyPrivacySetting setting)
{
  unsigned int RawHash; 
  DDLState state; 
  DDLContext context; 

  if ( LiveStorage_GetActiveStatsSource(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_player_data.cpp", 61, ASSERT_TYPE_ASSERT, "(LiveStorage_GetActiveStatsSource( controllerIndex ) == STATS_ONLINE)", (const char *)&queryFormat, "LiveStorage_GetActiveStatsSource( controllerIndex ) == STATS_ONLINE") )
    __debugbreak();
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, STATS_ONLINE, STATSGROUP_NONGAME) )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.isValid = 0;
    *(_OWORD *)&state.member = _XMM0;
    state.offset = 0;
    state.arrayIndex = -1;
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_NONGAME);
    Com_Printf(25, "Online_PlayerData_SetPrivatePartySetting - setting party privacy to %d.\n", (unsigned int)setting);
    RawHash = j_SL_GetRawHash(scr_const.partyPrivacySettings);
    if ( DDL_MoveToNameByHash(&state, &state, RawHash, NULL) )
    {
      if ( DDL_SetInt(&state, &context, setting) )
        LiveStorage_RequestOnlineStatsUpload(controllerIndex);
      else
        Com_PrintWarning(25, "Online_PlayerData_SetPrivatePartySetting failed DDL_SetBool.\n");
    }
    else
    {
      Com_PrintWarning(25, "Online_PlayerData_SetPrivatePartySetting failed DDL_MoveToNameByHash.\n");
    }
  }
}

/*
==============
Online_PlayerData_StartCohortSampling
==============
*/

void __fastcall Online_PlayerData_StartCohortSampling(const int controllerIndex, double percentOfPopulation)
{
  __int128 v3; 
  bool v5; 
  StatsSource ActiveStatsSource; 
  bool v9; 
  unsigned __int64 v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  bool v15; 
  bool v16; 
  DDLState state; 
  unsigned int resultSize[2]; 
  XUID result; 
  DDLContext context; 
  __int64 v21; 
  DDLState toState; 
  unsigned __int8 data[8]; 
  int v24; 
  unsigned __int64 m_id; 

  v21 = -2i64;
  v3 = *(_OWORD *)&percentOfPopulation;
  v5 = 0;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON) )
  {
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&state.member = _XMM0;
    LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_COMMON);
    if ( DDL_MoveToName(&state, &state, "shouldCheckCohortSampling") && DDL_GetBool(&state, &context) && Online_PlayerData_IsInCohort(controllerIndex) )
    {
LABEL_22:
      Online_PlayerData_IsInCohort(controllerIndex);
      return;
    }
  }
  if ( *(float *)&percentOfPopulation >= 0.0 && *(float *)&percentOfPopulation <= 1.0 )
  {
    Live_GetXuid(&result, controllerIndex);
    bdHashSHA1::bdHashSHA1((bdHashSHA1 *)&state);
    resultSize[0] = 20;
    *(double *)data = *(double *)"infinityward";
    v24 = *(_DWORD *)"ward";
    _XMM0 = result.m_id;
    m_id = result.m_id;
    v9 = bdHashSHA1::hash((bdHashSHA1 *)&state, data, 0x14u, (unsigned __int8 *)&toState, resultSize);
    if ( v9 )
    {
      result.m_id = *(unsigned __int64 *)&toState.isValid;
      v10 = XUID::ToUint64(&result);
      v11 = (float)(v10 % 0x64);
      if ( ((v10 % 0x64) & 0x8000000000000000ui64) != 0i64 )
      {
        v12 = (float)(v10 % 0x64);
        v11 = v12 + 1.8446744e19;
      }
      v13 = v3;
      *(float *)&v13 = *(float *)&v3 * 100.0;
      _XMM0 = v13;
      v5 = (float)(*(float *)&v3 * 100.0) >= v11;
    }
    bdHashSHA1::~bdHashSHA1((bdHashSHA1 *)&state);
    if ( v9 )
    {
      if ( LiveStorage_GetActiveStatsSource(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_player_data.cpp", 486, ASSERT_TYPE_ASSERT, "(LiveStorage_GetActiveStatsSource( controllerIndex ) == STATS_ONLINE)", (const char *)&queryFormat, "LiveStorage_GetActiveStatsSource( controllerIndex ) == STATS_ONLINE") )
        __debugbreak();
      if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, STATS_ONLINE, STATSGROUP_COMMON) )
      {
        state.isValid = 0;
        state.offset = 0;
        state.arrayIndex = -1;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&state.member = _XMM0;
        toState.isValid = 0;
        toState.offset = 0;
        toState.arrayIndex = -1;
        *(_OWORD *)&toState.member = _XMM0;
        LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_COMMON);
        v15 = DDL_MoveToName(&state, &toState, "shouldCheckCohortSampling");
        if ( v15 )
          DDL_SetBool(&state, &context, 1);
        v16 = DDL_MoveToName(&state, &toState, "shouldLogCohortData") && v15;
        if ( v16 )
          DDL_SetBool(&state, &context, v5);
        if ( DDL_MoveToName(&state, &toState, "loggingCohort") && v16 )
        {
          DDL_SetString(&state, &context, "base");
          LiveStorage_RequestOnlineStatsUpload(controllerIndex);
        }
      }
      goto LABEL_22;
    }
  }
}

