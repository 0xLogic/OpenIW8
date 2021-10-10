/*
==============
LUI_CoD_RegisterLobbyFunctions
==============
*/

void __fastcall LUI_CoD_RegisterLobbyFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterLobbyFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_RegisterLobbyMemberFunctions
==============
*/

void __fastcall LUI_CoD_RegisterLobbyMemberFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterLobbyMemberFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCall_GetNATType
==============
*/
__int64 LUI_CoD_LuaCall_GetNATType(lua_State *const luaVM)
{
  __int64 v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  v2 = 0i64;
  if ( NET_IsStarted() )
  {
    v3 = NET_GetNatType() - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          v2 = 3i64;
      }
      else
      {
        v2 = 2i64;
      }
    }
    else
    {
      v2 = 1i64;
    }
  }
  j_lua_pushinteger(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SelectedMember_SetLocalMemberMLGSpectator
==============
*/
__int64 LUI_CoD_LuaCall_SelectedMember_SetLocalMemberMLGSpectator(lua_State *luaVM)
{
  PartyData *PartyData; 
  int v3; 
  double v4; 
  int PortForLocalXUID; 
  unsigned int v6; 

  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) && !Live_IsInSystemlinkLobby() )
    PartyData = Lobby_GetPartyData();
  if ( j_lua_type(luaVM, 1) != 1 || j_lua_gettop(luaVM) != 1 && (j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 2)) )
    j_luaL_error(luaVM, "SelectedMember_SetLocalMemberMLGSpectator( <isMLGSpectator> )");
  if ( j_lua_type(luaVM, 1) == 1 && (j_lua_gettop(luaVM) == 1 || j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 2)) )
  {
    v3 = j_lua_toboolean(luaVM, 1);
    if ( j_lua_gettop(luaVM) == 2 )
    {
      v4 = lui_tonumber32(luaVM, 2);
      Party_SetLocalMLGSpectator(PartyData, (int)*(float *)&v4, v3);
    }
    else if ( Live_XUIDIsLocalPlayer(sharedUiInfo.partyMemberXuid) )
    {
      PortForLocalXUID = Live_GetPortForLocalXUID(sharedUiInfo.partyMemberXuid);
      Party_SetLocalMLGSpectator(PartyData, PortForLocalXUID, v3);
    }
    else
    {
      Com_Printf(13, "WRN: SelectedMember_SetLocalMemberMLGSpectator() called on a non-local player\n");
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SelectedMember_SetLocalMemberIsFollower
==============
*/
__int64 LUI_CoD_LuaCall_SelectedMember_SetLocalMemberIsFollower(lua_State *luaVM)
{
  PartyData *PartyData; 
  int v3; 
  double v4; 
  int PortForLocalXUID; 
  unsigned int v6; 

  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) && !Live_IsInSystemlinkLobby() )
    PartyData = Lobby_GetPartyData();
  if ( j_lua_type(luaVM, 1) != 1 || j_lua_gettop(luaVM) != 1 && (j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 2)) )
    j_luaL_error(luaVM, "SelectedMember_SetLocalMemberIsFollower( <isFollower> )");
  if ( j_lua_type(luaVM, 1) == 1 && (j_lua_gettop(luaVM) == 1 || j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 2)) )
  {
    v3 = j_lua_toboolean(luaVM, 1);
    if ( j_lua_gettop(luaVM) == 2 )
    {
      v4 = lui_tonumber32(luaVM, 2);
      Party_SetLocalMLGFollower(PartyData, (int)*(float *)&v4, v3);
    }
    else if ( Live_XUIDIsLocalPlayer(sharedUiInfo.partyMemberXuid) )
    {
      PortForLocalXUID = Live_GetPortForLocalXUID(sharedUiInfo.partyMemberXuid);
      Party_SetLocalMLGFollower(PartyData, PortForLocalXUID, v3);
    }
    else
    {
      Com_Printf(13, "WRN: SelectedMember_SetLocalMemberIsFollower() called on a non-local player\n");
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SelectedMember_SetLocalMemberFollowerIndex
==============
*/
__int64 LUI_CoD_LuaCall_SelectedMember_SetLocalMemberFollowerIndex(lua_State *luaVM)
{
  PartyData *PartyData; 
  double v3; 
  int v4; 
  double v5; 
  int PortForLocalXUID; 
  unsigned int v7; 

  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) && !Live_IsInSystemlinkLobby() )
    PartyData = Lobby_GetPartyData();
  if ( !j_lua_isnumber(luaVM, 1) || j_lua_gettop(luaVM) != 1 && (j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 2)) )
    j_luaL_error(luaVM, "SelectedMember_SetLocalMemberFollowerIndex( <indexFollower> )");
  if ( j_lua_isnumber(luaVM, 1) && (j_lua_gettop(luaVM) == 1 || j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 2)) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    v4 = (int)*(float *)&v3;
    if ( j_lua_gettop(luaVM) == 2 )
    {
      v5 = lui_tonumber32(luaVM, 2);
      Party_SetLocalMLGFollowerIndex(PartyData, (int)*(float *)&v5, v4);
    }
    else if ( Live_XUIDIsLocalPlayer(sharedUiInfo.partyMemberXuid) )
    {
      PortForLocalXUID = Live_GetPortForLocalXUID(sharedUiInfo.partyMemberXuid);
      Party_SetLocalMLGFollowerIndex(PartyData, PortForLocalXUID, v4);
    }
    else
    {
      Com_Printf(13, "WRN: SelectedMember_SetLocalMemberFollowerIndex() called on a non-local player\n");
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMemberCount
==============
*/
__int64 LUI_CoD_LuaCall_GetMemberCount(lua_State *luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  const PartyData *PartyData; 
  int PrelobbyMemberCount; 
  const PartyData *v9; 
  int LobbyMemberCount; 
  unsigned int v11; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1 && lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  if ( !Live_IsSignedIn(controllerIndex) )
  {
    v3 = 0;
    goto LABEL_23;
  }
  v4 = v2 - 1;
  if ( !v4 )
  {
    PrelobbyMemberCount = GetPrelobbyMemberCount();
    goto LABEL_22;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      v3 = 0;
      goto LABEL_23;
    }
    v6 = lui_tointeger32(luaVM, 2);
    PartyData = Lobby_GetPartyData();
    PrelobbyMemberCount = Party_CountTeamMembers(PartyData, v6, PARTY_MEMBER_TYPE_ALL);
    goto LABEL_22;
  }
  if ( !Lobby_GetPartyData()->gameStartTime && !Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") && !Dvar_GetBool_Internal_DebugName(DVARBOOL_systemlink, "systemlink") )
  {
    v9 = Lobby_GetPartyData();
    PrelobbyMemberCount = Party_GetNumGameSlots(v9);
LABEL_22:
    v3 = PrelobbyMemberCount;
    goto LABEL_23;
  }
  LobbyMemberCount = GetLobbyMemberCount();
  if ( g_partyData.inParty && !LobbyMemberCount )
    LobbyMemberCount = GetPartyMemberCount();
  v3 = 1;
  if ( LobbyMemberCount > 1 )
    v3 = LobbyMemberCount;
LABEL_23:
  j_lua_pushinteger(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v11);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetLocalPlayerTeam
==============
*/
__int64 LUI_CoD_LuaCall_SetLocalPlayerTeam(lua_State *luaVM)
{
  int v2; 
  int v3; 
  team_t v4; 
  PartyData *PartyData; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Lobby.SetLocalPlayerTeam( <state>, <controller>, <team> )");
  if ( j_lua_gettop(luaVM) == 3 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      if ( j_lua_isnumber(luaVM, 2) )
      {
        if ( j_lua_isnumber(luaVM, 3) )
        {
          v2 = lui_tointeger32(luaVM, 1);
          v3 = lui_tointeger32(luaVM, 2);
          v4 = lui_tointeger32(luaVM, 3);
          if ( v2 == 3 )
          {
            PartyData = Lobby_GetPartyData();
            PartyUI_SetTeam(PartyData, v3, v4);
          }
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLobbyMemberStats
==============
*/
__int64 LUI_CoD_LuaCall_GetLobbyMemberStats(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLobbyMemberStats_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_COD_LuaCall_UsingReadyUpFeature
==============
*/
__int64 LUI_COD_LuaCall_UsingReadyUpFeature(lua_State *luaVM)
{
  bool ready; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.UsingReadyUpFeature()\n");
  ready = Party_UsingReadyUpFeature();
  j_lua_pushboolean(luaVM, ready);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_GetLocalReadyUpFlag
==============
*/
__int64 LUI_COD_LuaCall_GetLocalReadyUpFlag(lua_State *luaVM)
{
  bool LocalReadyUpFlag; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetLocalReadyUpFlag()\n");
  LocalReadyUpFlag = Party_GetLocalReadyUpFlag();
  j_lua_pushboolean(luaVM, LocalReadyUpFlag);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_SetLocalReadyUpFlag
==============
*/
__int64 LUI_COD_LuaCall_SetLocalReadyUpFlag(lua_State *luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.SetLocalReadyUpFlag()\n");
  Party_SetLocalReadyUpFlag();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_ClearLocalReadyUpFlag
==============
*/
__int64 LUI_COD_LuaCall_ClearLocalReadyUpFlag(lua_State *luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.ClearLocalReadyUpFlag()\n");
  Party_ClearLocalReadyUpFlag();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_GetPartyReadyUpStatus
==============
*/
__int64 LUI_COD_LuaCall_GetPartyReadyUpStatus(lua_State *luaVM)
{
  bool PartyReadyUpStatus; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetPartyReadyUpStatus()\n");
  PartyReadyUpStatus = Party_GetPartyReadyUpStatus();
  j_lua_pushboolean(luaVM, PartyReadyUpStatus);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ExecPrestigeReset
==============
*/
__int64 LUI_CoD_LuaCall_ExecPrestigeReset(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.ExecPrestigeReset( <controllerIndex> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    CL_PlayerData_PrestigeReset(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ExecAliensPrestigeReset
==============
*/
__int64 LUI_CoD_LuaCall_ExecAliensPrestigeReset(lua_State *luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.ExecAliensPrestigeReset( <controllerIndex>, <currentRank> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    CL_PlayerData_AliensPrestigeReset(v2, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMaxPrestigeLevel
==============
*/
__int64 LUI_CoD_LuaCall_GetMaxPrestigeLevel(lua_State *luaVM)
{
  int v2; 
  const char *v3; 
  unsigned int v4; 

  v2 = -1;
  v3 = StringTable_LookupFromAsset("mp/rankIconTable.csv", 0, "maxprestige", 1);
  if ( v3 )
    v2 = atoi(v3);
  j_lua_pushinteger(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerPrestigeLevel
==============
*/
__int64 LUI_CoD_LuaCall_GetPlayerPrestigeLevel(lua_State *luaVM)
{
  int PrestigeMP; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetPlayerPrestigeLevel( <controllerIndex> )\n");
  PrestigeMP = -1;
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    PrestigeMP = CL_PlayerData_GetPrestigeMP(v3);
  }
  j_lua_pushinteger(luaVM, PrestigeMP);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsGameHost
==============
*/
__int64 LUI_CoD_LuaCall_IsGameHost(lua_State *luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = Lobby_AreWeHost();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsPrivatePartyHost
==============
*/
__int64 LUI_CoD_LuaCall_IsPrivatePartyHost(lua_State *luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, g_partyData.areWeHost);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPrivatePartyHostControllerIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetPrivatePartyHostControllerIndex(lua_State *luaVM)
{
  int PortForLocalXUID; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetPrivatePartyHostControllerIndex()");
  if ( j_lua_gettop(luaVM) || (PortForLocalXUID = Live_GetPortForLocalXUID(g_partyData.partyMembers[g_partyData.currentHost.hostNum].playerUID), PortForLocalXUID == -1) )
  {
    v3 = 0;
  }
  else
  {
    j_lua_pushinteger(luaVM, PortForLocalXUID);
    v3 = 1;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v4);
  }
  return v3;
}

/*
==============
LUI_CoD_LuaCall_IsControllerIndexHostOfAnyParty
==============
*/
__int64 LUI_CoD_LuaCall_IsControllerIndexHostOfAnyParty(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  PartyData *PartyData; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.IsControllerIndexHostOfAnyParty( <controllerIndex>)");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    PartyData = Lobby_GetPartyData();
    if ( PartyData->inParty && v3 == Live_GetPortForLocalXUID(PartyData->partyMembers[PartyData->currentHost.hostNum].playerUID) || g_partyData.inParty && v3 == Live_GetPortForLocalXUID(g_partyData.partyMembers[g_partyData.currentHost.hostNum].playerUID) )
      j_lua_pushboolean(luaVM, 1);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsPartyHostWaitingOnMembers
==============
*/
__int64 LUI_CoD_LuaCall_IsPartyHostWaitingOnMembers(lua_State *luaVM)
{
  int IsWaitingForMembers; 
  const PartyData *PartyData; 
  unsigned int v4; 

  IsWaitingForMembers = 0;
  if ( Lobby_IsInRunningLobby() )
  {
    PartyData = Lobby_GetPartyData();
  }
  else
  {
    if ( !Party_InParty(&g_partyData) )
      goto LABEL_6;
    PartyData = &g_partyData;
  }
  IsWaitingForMembers = Party_IsWaitingForMembers(PartyData);
LABEL_6:
  j_lua_pushboolean(luaVM, IsWaitingForMembers);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsPrivatePartyHostInLobby
==============
*/
__int64 LUI_CoD_LuaCall_IsPrivatePartyHostInLobby(lua_State *luaVM)
{
  int v2; 
  unsigned __int64 m_id; 
  const PartyData *PartyData; 
  int v5; 
  unsigned int v6; 
  XUID player; 

  XUID::XUID(&player);
  if ( g_partyData.inParty && (v2 = Party_HostNum(&g_partyData), XUID::operator=(&player, &g_partyData.partyMembers[v2].playerUID), XUID::IsValid(&player)) )
  {
    m_id = player.m_id;
    PartyData = Lobby_GetPartyData();
    v5 = Party_FindMemberByXUID(PartyData, (const XUID)m_id) >= 0;
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
LUI_CoD_LuaCall_PartyClientsUpToDate
==============
*/
__int64 LUI_CoD_LuaCall_PartyClientsUpToDate(lua_State *luaVM)
{
  int v2; 
  const PartyData *PartyData; 
  unsigned int v4; 

  v2 = 0;
  if ( Lobby_IsInLobby() && Lobby_AreWeHost() )
  {
    PartyData = Lobby_GetPartyData();
    v2 = PartyHost_ArePresentClientsUpToDate(PartyData);
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsUsingIntermissionTimer
==============
*/
__int64 LUI_CoD_LuaCall_IsUsingIntermissionTimer(lua_State *luaVM)
{
  GameStateInfo *v2; 
  unsigned int v3; 

  v2 = GameStateInfo_Get();
  j_lua_pushboolean(luaVM, v2->usingIntermission);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_UseIntermissionTimer
==============
*/
__int64 LUI_CoD_LuaCall_UseIntermissionTimer(lua_State *luaVM)
{
  const dvar_t *v2; 
  int v3; 
  PartyData *PartyData; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) < 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1 && lua_isboolean( luaVM, 1 )");
  if ( Lobby_IsInLobby() )
  {
    if ( Lobby_AreWeHost() )
    {
      v2 = DVARBOOL_xblive_privatematch;
      if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( v2->current.enabled )
      {
        v3 = j_lua_toboolean(luaVM, 1) != 0;
        GameStateInfo_Get()->usingIntermission = v3;
        PartyData = Lobby_GetPartyData();
        PartyData->lobbyFlags &= 0xFFFFFF9F;
        PartyData->lobbyFlags |= 4u;
      }
      else
      {
        Com_PrintError(13, "Lobby.UseIntermissionTimer called while not in private match\n");
      }
    }
    else
    {
      Com_PrintError(13, "Lobby.UseIntermissionTimer called while not lobby host\n");
    }
  }
  else
  {
    Com_PrintError(13, "Lobby.UseIntermissionTimer called while not in lobby\n");
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_StopIntermissionTimer
==============
*/
__int64 LUI_CoD_LuaCall_StopIntermissionTimer(lua_State *luaVM)
{
  const dvar_t *v2; 
  PartyData *PartyData; 
  unsigned int v4; 

  if ( Lobby_IsInLobby() )
  {
    if ( Lobby_AreWeHost() )
    {
      v2 = DVARBOOL_xblive_privatematch;
      if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( v2->current.enabled )
      {
        PartyData = Lobby_GetPartyData();
        PartyData->lobbyFlags &= 0xFFFFFF9F;
        PartyData->lobbyFlags |= 4u;
      }
      else
      {
        Com_PrintError(13, "Lobby.StopIntermissionTimer called while not in private match\n");
      }
    }
    else
    {
      Com_PrintError(13, "Lobby.StopIntermissionTimer called while not lobby host\n");
    }
  }
  else
  {
    Com_PrintError(13, "Lobby.StopIntermissionTimer called while not in lobby\n");
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_BotsAreAllowed
==============
*/
__int64 LUI_CoD_LuaCall_BotsAreAllowed(lua_State *luaVM)
{
  bool v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.BotsAreAllowed()\n");
  v2 = BG_BotsAreAllowed();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBotsConnectType
==============
*/
__int64 LUI_CoD_LuaCall_GetBotsConnectType(lua_State *luaVM)
{
  unsigned __int8 BotsConnectType; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetBotsConnectType()\n");
  BotsConnectType = BG_GetBotsConnectType();
  j_lua_pushinteger(luaVM, BotsConnectType);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetBotsConnectType
==============
*/
__int64 LUI_CoD_LuaCall_SetBotsConnectType(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_SetBotsConnectType_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetBotsConnectTypeCount
==============
*/
__int64 LUI_CoD_LuaCall_GetBotsConnectTypeCount(lua_State *luaVM)
{
  const dvar_t *VarByName; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetBotsConnectTypeCount()\n");
  VarByName = Dvar_FindVarByName("OMSOSSSORO");
  if ( VarByName->type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_lobby.cpp", 1941, ASSERT_TYPE_ASSERT, "(bot_SystemStatus->type == DVAR_TYPE_ENUM)", (const char *)&queryFormat, "bot_SystemStatus->type == DVAR_TYPE_ENUM") )
    __debugbreak();
  j_lua_pushinteger(luaVM, VarByName->domain.enumeration.stringCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBotsDifficulty
==============
*/
__int64 LUI_CoD_LuaCall_GetBotsDifficulty(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  __int64 BotsDifficulty; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetBotsDifficulty( <team> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = 0;
    if ( v2 <= 1 )
      v3 = v2;
    BotsDifficulty = BG_GetBotsDifficulty(v3);
  }
  else
  {
    BotsDifficulty = 0i64;
  }
  j_lua_pushinteger(luaVM, BotsDifficulty);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetBotsDifficulty
==============
*/
__int64 LUI_CoD_LuaCall_SetBotsDifficulty(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_SetBotsDifficulty_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetBotsDifficultyCount
==============
*/
__int64 LUI_CoD_LuaCall_GetBotsDifficultyCount(lua_State *luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetBotsDifficultyCount()\n");
  j_lua_pushinteger(luaVM, 5i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetBotsTeamLimit
==============
*/
__int64 LUI_CoD_LuaCall_GetBotsTeamLimit(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  __int64 BotsTeamLimit; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetBotsTeamLimit( <team> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = 0;
    if ( v2 <= 1 )
      v3 = v2;
    BotsTeamLimit = BG_GetBotsTeamLimit(v3);
  }
  else
  {
    BotsTeamLimit = 0i64;
  }
  j_lua_pushinteger(luaVM, BotsTeamLimit);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetBotsTeamLimit
==============
*/
__int64 LUI_CoD_LuaCall_SetBotsTeamLimit(lua_State *luaVM)
{
  const dvar_t *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) < 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.SetBotsTeamLimit( <team>, <limit> )\n");
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      if ( !Lobby_IsInLobby() )
      {
        Com_PrintError(13, "Lobby.SetBotsTeamLimit called while not in lobby\n");
        goto LABEL_24;
      }
      if ( !Lobby_AreWeHost() )
      {
        Com_PrintError(13, "Lobby.SetBotsTeamLimit called while not lobby host\n");
        goto LABEL_24;
      }
    }
    if ( !BG_BotsAreAllowed() )
    {
      Com_PrintError(13, "Lobby.SetBotsTeamLimit called while bots are not allowed\n");
      goto LABEL_24;
    }
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = v4;
    if ( v3 >= 0 )
    {
      if ( v3 <= 1 )
      {
        v6 = v3;
      }
      else
      {
        if ( v3 != 2 )
          goto LABEL_24;
        BG_SetBotsTeamLimit(0, v4);
        v6 = 1;
      }
      BG_SetBotsTeamLimit(v6, v5);
    }
  }
LABEL_24:
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapImage
==============
*/
__int64 LUI_CoD_LuaCall_GetMapImage(lua_State *luaVM)
{
  const char *CurrentMapImage; 
  unsigned int v3; 

  CurrentMapImage = UI_GetCurrentMapImage();
  j_lua_pushstring(luaVM, CurrentMapImage);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapImageByName
==============
*/
__int64 LUI_CoD_LuaCall_GetMapImageByName(lua_State *luaVM)
{
  const char *v2; 
  const char *MapImageByName; 
  unsigned int v4; 

  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetMapImageByName( <map_name> )\n");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  MapImageByName = UI_GetMapImageByName(v2);
  j_lua_pushstring(luaVM, MapImageByName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetVoteMapImage
==============
*/
__int64 LUI_CoD_LuaCall_GetVoteMapImage(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  char ActiveGameMode; 
  const char *MapVoteMapImage; 
  const char *v6; 
  const char *v7; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetVoteMapImage( <map_index> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 <= 2 )
  {
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    MapVoteMapImage = UI_GetMapVoteMapImage(v3);
    v6 = "%s_lobby";
    if ( ActiveGameMode != 3 )
      v6 = "%s_vote";
    v7 = j_va(v6, MapVoteMapImage);
  }
  else
  {
    Com_PrintError(13, "Lobby.GetMapVoteMapImage called unrecognized integer data=[%d] expected 0 or 1 or 2\n", v3);
    v7 = (char *)&queryFormat.fmt + 3;
  }
  j_lua_pushstring(luaVM, v7);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapName
==============
*/
__int64 LUI_CoD_LuaCall_GetMapName(lua_State *luaVM)
{
  const char *CurrentMapName; 
  unsigned int v3; 

  CurrentMapName = UI_GetCurrentMapName();
  j_lua_pushstring(luaVM, CurrentMapName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetVoteMapName
==============
*/
__int64 LUI_CoD_LuaCall_GetVoteMapName(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  const char *MapVoteMapName; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetVoteMapName( <map_index> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 <= 2 )
  {
    MapVoteMapName = UI_GetMapVoteMapName(v3);
  }
  else
  {
    Com_PrintError(13, "Lobby.GetMapVoteMapImage called unrecognized integer data=[%d] expected 0 or 1 or 2\n", v3);
    MapVoteMapName = (char *)&queryFormat.fmt + 3;
  }
  j_lua_pushstring(luaVM, MapVoteMapName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasVotePassed
==============
*/
__int64 LUI_CoD_LuaCall_HasVotePassed(lua_State *luaVM)
{
  bool HasVotePassed; 
  unsigned int v3; 

  HasVotePassed = Party_HasVotePassed();
  j_lua_pushboolean(luaVM, HasVotePassed);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasPartyCastVote
==============
*/
__int64 LUI_CoD_LuaCall_HasPartyCastVote(lua_State *luaVM)
{
  bool HasVoteBeenCast; 
  unsigned int v3; 

  HasVoteBeenCast = Party_HasVoteBeenCast();
  j_lua_pushboolean(luaVM, HasVoteBeenCast);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetVoteMapGametype
==============
*/
__int64 LUI_CoD_LuaCall_GetVoteMapGametype(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  const dvar_t *v4; 
  const PartyData *PartyData; 
  int MapVotePlaylistEntry; 
  const char *LocalizedGametypeName; 
  const char *v8; 
  const char *Gametype; 
  const char *GameTypeDisplayName; 
  unsigned int v11; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetVoteMapGametype( <map_index> )\n");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 > 2 )
  {
    Com_PrintError(13, "Lobby.GetMapVoteGametypeName called unrecognized integer data=[%d] expected 0 or 1 or 2\n", v3);
LABEL_19:
    v8 = (char *)&queryFormat.fmt + 3;
    goto LABEL_20;
  }
  if ( !Com_FrontEnd_IsInFrontEnd() )
  {
    Com_PrintError(13, "Lobby.GetMapVoteGametypeName called outside of the front-end\n");
    goto LABEL_19;
  }
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  if ( !Lobby_IsInLobby() )
    goto LABEL_15;
  v4 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
LABEL_15:
    Gametype = Party_GetGametype();
    GameTypeDisplayName = UI_GetGameTypeDisplayName(Gametype);
    v8 = (char *)&queryFormat.fmt + 3;
    if ( GameTypeDisplayName )
      v8 = GameTypeDisplayName;
  }
  else
  {
    PartyData = Lobby_GetPartyData();
    MapVotePlaylistEntry = Party_GetMapVotePlaylistEntry(PartyData, v3);
    LocalizedGametypeName = Playlist_GetLocalizedGametypeName(MapVotePlaylistEntry);
    v8 = (char *)&queryFormat.fmt + 3;
    if ( LocalizedGametypeName )
      v8 = LocalizedGametypeName;
  }
LABEL_20:
  j_lua_pushstring(luaVM, v8);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v11);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GameTypeNameAbbreviated
==============
*/
__int64 LUI_CoD_LuaCall_GameTypeNameAbbreviated(lua_State *luaVM)
{
  unsigned int v2; 

  j_lua_pushstring(luaVM, (const char *)&queryFormat.fmt + 3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CanCancelMatchStart
==============
*/
__int64 LUI_CoD_LuaCall_CanCancelMatchStart(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  unsigned int v3; 

  ActiveParty = Party_GetActiveParty();
  j_lua_pushboolean(luaVM, ActiveParty->gameStartRequested);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetAlienRankForXP
==============
*/
__int64 LUI_CoD_LuaCall_GetAlienRankForXP(lua_State *luaVM)
{
  int v2; 
  int RankForXpAlien; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetAlienRankForXP( <xpamount> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  RankForXpAlien = Com_GetRankForXpAlien(v2);
  j_lua_pushinteger(luaVM, RankForXpAlien);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsItemOfTypeUnlocked
==============
*/
__int64 LUI_CoD_LuaCall_IsItemOfTypeUnlocked(lua_State *luaVM)
{
  unsigned int v2; 

  Com_PrintError(13, "Lobby.IsItemOfTypeUnlocked is deprecated. Please use Engine.IsUnlocked");
  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_BuildServerList
==============
*/
__int64 LUI_CoD_LuaCall_BuildServerList(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 
  char *args; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.BuildServerList( <controller> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    args = "UpdateFilter";
    UI_RunMenuScript(ClientFromController, (const char **)&args, (const char *)&queryFormat.fmt + 3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RefreshServerList
==============
*/
__int64 LUI_CoD_LuaCall_RefreshServerList(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 
  char *args; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.RefreshServerList( <controller> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    args = "RefreshServers";
    UI_RunMenuScript(ClientFromController, (const char **)&args, (const char *)&queryFormat.fmt + 3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_UpdateServerDisplayList
==============
*/
__int64 LUI_CoD_LuaCall_UpdateServerDisplayList(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.UpdateServerDisplayList( <controller> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    UI_DoServerRefreshOnClient(ClientFromController);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetServerCount
==============
*/
__int64 LUI_CoD_LuaCall_GetServerCount(lua_State *luaVM)
{
  int ServerCount; 
  int v3; 
  LocalClientNum_t ClientFromController; 
  unsigned int v5; 

  ServerCount = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetServerCount( <controller> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v3);
    ServerCount = UI_GetServerCount(ClientFromController);
  }
  j_lua_pushinteger(luaVM, ServerCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetServerData
==============
*/
__int64 LUI_CoD_LuaCall_GetServerData(lua_State *luaVM)
{
  const char *v2; 
  int v3; 
  int v4; 
  int v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  Material *material; 

  v2 = (char *)&queryFormat.fmt + 3;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetServerData( <controller>, <index>, <column> )\n");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = lui_tointeger32(luaVM, 3);
    ClientFromController = CL_Mgr_GetClientFromController(v3);
    v2 = UI_FeederItemText(ClientFromController, 2.0, v4, v5, NULL, NULL, NULL, NULL, &material, 0.0);
  }
  j_lua_pushstring(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CreateServersDataModels
==============
*/
__int64 LUI_CoD_LuaCall_CreateServersDataModels(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_CreateServersDataModels_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_StartServer
==============
*/
__int64 LUI_CoD_LuaCall_StartServer(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  bool v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.StartServer( <controller>, <optional skip countdown>)\n");
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v4 = 0;
  }
  else
  {
    if ( j_lua_type(luaVM, 2) != 1 )
      j_luaL_error(luaVM, "USAGE: Lobby.StartServer's second parameter must be true or false");
    v4 = j_lua_toboolean(luaVM, 2) != 0;
  }
  UI_StartServer(ClientFromController, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CancelStartServer
==============
*/
__int64 LUI_CoD_LuaCall_CancelStartServer(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  unsigned int v3; 

  ActiveParty = Party_GetActiveParty();
  PartyHost_CancelStartMatch(ActiveParty);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetServerClientCount
==============
*/
__int64 LUI_CoD_LuaCall_SetServerClientCount(lua_State *luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.SetServerClientCount( <count> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = v2;
  if ( v2 <= 0 )
    j_luaL_error(luaVM, "Count must be greater than 0.\n");
  Com_Printf(13, "LUI SetServerClientCount: %i\n", (unsigned int)v2);
  Dvar_SetInt_Internal(DVARINT_ui_maxclients, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_JoinServer
==============
*/
__int64 LUI_CoD_LuaCall_JoinServer(lua_State *luaVM)
{
  int v2; 
  int v3; 
  LocalClientNum_t ClientFromController; 
  unsigned int v5; 
  char *args; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.JoinServer( <controller>, <index> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    UI_FeederSelection(ClientFromController, 2.0, v3);
    args = "JoinServer";
    UI_RunMenuScript(ClientFromController, (const char **)&args, (const char *)&queryFormat.fmt + 3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapFeederCount
==============
*/
__int64 LUI_CoD_LuaCall_GetMapFeederCount(lua_State *luaVM)
{
  int MapCount; 
  unsigned int v3; 

  MapCount = UI_GetMapCount();
  j_lua_pushinteger(luaVM, MapCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapNameByIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetMapNameByIndex(lua_State *luaVM)
{
  int v2; 
  const char *v3; 
  unsigned int v4; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetMapNameByIndex( <index> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
    v2 = lui_tointeger32(luaVM, 1);
  v3 = UI_FeederItemText_Maps(LOCAL_CLIENT_INVALID, v2, 0, NULL);
  j_lua_pushstring(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapGameTypesByIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetMapGameTypesByIndex(lua_State *luaVM)
{
  int v2; 
  const char *MapGameTypesForCurrentIndex; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetMapGameTypesByIndex( <index> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  MapGameTypesForCurrentIndex = UI_GetMapGameTypesForCurrentIndex(v2);
  j_lua_pushstring(luaVM, MapGameTypesForCurrentIndex);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapSupportsAliensByIdx
==============
*/
__int64 LUI_CoD_LuaCall_GetMapSupportsAliensByIdx(lua_State *luaVM)
{
  int v2; 
  int MapSupportsAliensByIndex; 
  unsigned int v4; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetMapSupportsAliensByIdx( <index> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
    v2 = lui_tointeger32(luaVM, 1);
  MapSupportsAliensByIndex = UI_GetMapSupportsAliensByIndex(v2);
  j_lua_pushboolean(luaVM, MapSupportsAliensByIndex);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapDescByIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetMapDescByIndex(lua_State *luaVM)
{
  int v2; 
  const char *MapDescByIndex; 
  unsigned int v4; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetMapDescByIndex( <index> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
    v2 = lui_tointeger32(luaVM, 1);
  MapDescByIndex = UI_GetMapDescByIndex(v2);
  j_lua_pushstring(luaVM, MapDescByIndex);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapLoadNameByIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetMapLoadNameByIndex(lua_State *luaVM)
{
  int v2; 
  const char *MapLoadNameForCurrentIndex; 
  unsigned int v4; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetMapLoadNameByIndex( <index> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
    v2 = lui_tointeger32(luaVM, 1);
  MapLoadNameForCurrentIndex = UI_GetMapLoadNameForCurrentIndex(v2);
  j_lua_pushstring(luaVM, MapLoadNameForCurrentIndex);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapImageByIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetMapImageByIndex(lua_State *luaVM)
{
  int v2; 
  const char *MapImageByIndex; 
  unsigned int v4; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetMapImageByIndex( <index> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
    v2 = lui_tointeger32(luaVM, 1);
  MapImageByIndex = UI_GetMapImageByIndex(v2);
  j_lua_pushstring(luaVM, MapImageByIndex);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMapPackForMapIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetMapPackForMapIndex(lua_State *luaVM)
{
  int v2; 
  int MapPackByIndex; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetMapPackForMapIndex( index )");
  v2 = lui_tointeger32(luaVM, 1);
  MapPackByIndex = UI_GetMapPackByIndex(v2);
  j_lua_pushinteger(luaVM, MapPackByIndex);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IncludeMapInRotation
==============
*/
__int64 LUI_CoD_LuaCall_IncludeMapInRotation(lua_State *luaVM)
{
  const char *v2; 
  int v3; 
  LobbyMapRotation *mapRotation; 
  unsigned int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Lobby.IncludeMapInRotation( <name>, <include> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isstring(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = j_lua_tolstring(luaVM, 1, NULL);
    v3 = j_lua_toboolean(luaVM, 2);
    mapRotation = GameStateInfo_Get()->mapRotation;
    if ( v3 )
    {
      v5 = PrivateMapRotation_AddNewEntry(mapRotation, v2);
      if ( v5 != 0xFFFF )
        PrivateMapRotation_SetInitialMapSelection(mapRotation, v5);
    }
    else
    {
      PrivateMapRotation_RemoveEntry(mapRotation, v2);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsMapInRotation
==============
*/
__int64 LUI_CoD_LuaCall_IsMapInRotation(lua_State *luaVM)
{
  int v2; 
  const char *v3; 
  LobbyMapRotation *mapRotation; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.IsMapInRotation( <name> )\n");
  v2 = 0;
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isstring(luaVM, 1) )
    {
      v3 = j_lua_tolstring(luaVM, 1, NULL);
      mapRotation = GameStateInfo_Get()->mapRotation;
      if ( mapRotation )
      {
        v5 = 0;
        if ( mapRotation->entryCount )
        {
          while ( I_strncmp(v3, mapRotation->entry[v5].name, 0x18ui64) )
          {
            if ( ++v5 >= mapRotation->entryCount )
              goto LABEL_12;
          }
          v2 = 1;
        }
      }
    }
  }
LABEL_12:
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetNonPlayingLocalClientText
==============
*/
__int64 LUI_CoD_LuaCall_GetNonPlayingLocalClientText(lua_State *luaVM)
{
  int v2; 
  int PrelobbyMemberCount; 
  unsigned int v4; 
  char outBuf[1024]; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetNonPlayingLocalClientText( <memberListIndex> )\n");
  outBuf[0] = 0;
  v2 = lui_tointeger32(luaVM, 1);
  PrelobbyMemberCount = GetPrelobbyMemberCount();
  UI_FeederItemText_NonPlayingLocalClients(LOCAL_CLIENT_0, v2, PrelobbyMemberCount, outBuf, 0x400ui64);
  j_lua_pushstring(luaVM, outBuf);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AreAllUsersLocal
==============
*/
__int64 LUI_CoD_LuaCall_AreAllUsersLocal(lua_State *luaVM)
{
  const PartyData *GameParty; 
  bool v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Lobby.AreAllUsersLocal()\n");
  GameParty = Live_GetGameParty();
  if ( !GameParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_lobby.cpp", 449, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v3 = Party_AreAllMembersLocal(GameParty);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetUsingMLGRules
==============
*/
__int64 LUI_CoD_LuaCall_SetUsingMLGRules(lua_State *luaVM)
{
  int v2; 
  PartyData *PartyData; 
  unsigned int v4; 

  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "SetUsingMLGRules( <bool> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    v2 = j_lua_toboolean(luaVM, 1);
    if ( Live_IsInGameBattlesGame() )
    {
      GameBattles_ToogleCDLRecipeCheck(v2 != 0);
LABEL_10:
      Com_Printf(13, "WRN: Lobby.SetUsingMLGRules called when not in a lobby or private match!\n");
      goto LABEL_12;
    }
    PartyData = &g_partyData;
    if ( !Party_InParty(&g_partyData) && !Live_IsInSystemlinkLobby() )
    {
      if ( !Lobby_IsInLobby() )
        goto LABEL_10;
      PartyData = Lobby_GetPartyData();
      if ( !PartyData )
        goto LABEL_10;
    }
    Party_SetUsesMLGRules(PartyData, v2);
  }
LABEL_12:
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsUsingMLGRules
==============
*/
__int64 LUI_CoD_LuaCall_IsUsingMLGRules(lua_State *luaVM)
{
  int CDLRuleValue; 
  const PartyData *PartyData; 
  unsigned int v4; 

  if ( Live_IsInGameBattlesGame() )
  {
    CDLRuleValue = GameBattles_GetCDLRuleValue();
  }
  else
  {
    PartyData = &g_partyData;
    if ( !Party_InParty(&g_partyData) && !Live_IsInSystemlinkLobby() )
      PartyData = Lobby_GetPartyData();
    CDLRuleValue = Party_CheckUsesMLGRules(PartyData);
  }
  j_lua_pushboolean(luaVM, CDLRuleValue);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetCodcastingEnabledInParty
==============
*/
__int64 LUI_CoD_LuaCall_SetCodcastingEnabledInParty(lua_State *luaVM)
{
  PartyData *PartyData; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "SetCodcastingEnabledInParty( <bool> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    PartyData = &g_partyData;
    v3 = j_lua_toboolean(luaVM, 1);
    if ( Party_InParty(&g_partyData) || Live_IsInSystemlinkLobby() || Lobby_IsInLobby() && (PartyData = Lobby_GetPartyData()) != NULL )
      Party_SetCodcastingEnabled(PartyData, v3);
    else
      Com_Printf(13, "WRN: Lobby.SetCodcastingEnabledInParty called when not in a lobby or private party!\n");
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsCodcastingEnabled
==============
*/
__int64 LUI_CoD_LuaCall_IsCodcastingEnabled(lua_State *luaVM)
{
  const PartyData *PartyData; 
  int v3; 
  unsigned int v4; 

  PartyData = NULL;
  if ( Party_InParty(&g_partyData) || Live_IsInSystemlinkLobby() )
  {
    PartyData = &g_partyData;
  }
  else if ( Lobby_IsInLobby() )
  {
    PartyData = Lobby_GetPartyData();
  }
  v3 = Party_CheckCodcastingEnabled(PartyData);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetTeamAssignmentEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetTeamAssignmentEnabled(lua_State *luaVM)
{
  PartyData *PartyData; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "SetTeamAssignmentEnabled( <bool> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    PartyData = &g_partyData;
    v3 = j_lua_toboolean(luaVM, 1);
    if ( Party_InParty(&g_partyData) || Live_IsInSystemlinkLobby() || Lobby_IsInLobby() && (PartyData = Lobby_GetPartyData()) != NULL )
      Party_SetTeamAssignmentEnabled(PartyData, v3);
    else
      Com_Printf(13, "WRN: Lobby.SetTeamAssignmentEnabled called when not in a lobby or private party!\n");
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsTeamAssignmentEnabled
==============
*/
__int64 LUI_CoD_LuaCall_IsTeamAssignmentEnabled(lua_State *luaVM)
{
  const PartyData *PartyData; 
  int v3; 
  unsigned int v4; 

  PartyData = &g_partyData;
  v3 = 0;
  if ( Party_InParty(&g_partyData) || Live_IsInSystemlinkLobby() || Lobby_IsInLobby() && (PartyData = Lobby_GetPartyData()) != NULL )
    v3 = Party_CheckTeamAssignmentEnabled(PartyData);
  else
    Com_Printf(13, "WRN: Lobby.SetTeamAssignmentEnabled called when not in a lobby or private party!\n");
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsMemberMLGSpectator
==============
*/
__int64 LUI_CoD_LuaCall_IsMemberMLGSpectator(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 
  PartyData *PartyData; 
  const XUID *LobbyMemberXuid; 
  int v6; 
  unsigned int v7; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 
  XUID result; 

  v2 = 0;
  if ( !j_lua_isnumber(luaVM, 1) || j_lua_gettop(luaVM) != 1 && (j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 2)) )
    j_luaL_error(luaVM, "IsMemberMLGSpectator( <slot>, [controller] )");
  if ( j_lua_isnumber(luaVM, 1) && (j_lua_gettop(luaVM) == 1 || j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 2)) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    PartyData = Lobby_GetPartyData();
    if ( Lobby_IsInLobby() && Party_CountUIVisibleMembers(PartyData) > v3 )
    {
      LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
      LobbyMemberXuid = GetLobbyMemberXuid(&result, localClientNum, v3);
      if ( Live_XUIDIsLocalPlayer((const XUID)LobbyMemberXuid->m_id) && Party_IsHost(PartyData, v3) )
      {
        if ( j_lua_gettop(luaVM) == 2 )
        {
          v6 = lui_tointeger32(luaVM, 2);
          controllerIndex = v6;
        }
        else
        {
          v6 = controllerIndex;
        }
        if ( Party_GetLocalMLGSpectator(PartyData, v6) )
          v2 = 1;
      }
      else if ( PartyUI_IsMLGSpectator(PartyData, v3) )
      {
        v2 = 1;
      }
    }
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsLocalMemberMLGSpectator
==============
*/
__int64 LUI_CoD_LuaCall_IsLocalMemberMLGSpectator(lua_State *luaVM)
{
  int v2; 
  PartyData *PartyData; 
  int v4; 
  unsigned int v5; 

  v2 = 0;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "IsLocalMemberMLGSpectator([controller] )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    PartyData = &g_partyData;
    v4 = lui_tointeger32(luaVM, 1);
    if ( !Party_InParty(&g_partyData) && !Live_IsInSystemlinkLobby() )
      PartyData = Lobby_GetPartyData();
    if ( Party_GetLocalMLGSpectator(PartyData, v4) )
      v2 = 1;
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetExtinctionDifficulty
==============
*/
__int64 LUI_CoD_LuaCall_SetExtinctionDifficulty(lua_State *luaVM)
{
  PartyData *PartyData; 
  int v3; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetExtinctionDifficulty( <number> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    PartyData = &g_partyData;
    v3 = lui_tointeger32(luaVM, 1);
    if ( Party_InParty(&g_partyData) || Live_IsInSystemlinkLobby() || Lobby_IsInLobby() && (PartyData = Lobby_GetPartyData()) != NULL )
      Party_SetAliensDifficulty(PartyData, v3);
    else
      Com_Printf(13, "WRN: Lobby.SetExtinctionDifficulty called when not in a lobby or private party!\n");
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetExtinctionDifficulty
==============
*/
__int64 LUI_CoD_LuaCall_GetExtinctionDifficulty(lua_State *luaVM)
{
  PartyData *PartyData; 
  int AliensDifficulty; 
  unsigned int v4; 

  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) && !Live_IsInSystemlinkLobby() )
    PartyData = Lobby_GetPartyData();
  AliensDifficulty = Party_GetAliensDifficulty(PartyData);
  j_lua_pushinteger(luaVM, AliensDifficulty);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_AreAllPlayersMuted
==============
*/
__int64 LUI_CoD_LuaCall_AreAllPlayersMuted(lua_State *luaVM)
{
  PartyData *PartyData; 
  const PartyData *v3; 
  int ControllerFromClient; 
  bool v5; 
  unsigned int v6; 
  unsigned int v7; 

  if ( !Com_FrontEndScene_IsActive() )
  {
    if ( Lobby_IsInRunningLobby() )
    {
      PartyData = Lobby_GetPartyData();
    }
    else
    {
      v3 = &g_partyData;
      if ( Party_InParty(&g_partyData) )
      {
LABEL_7:
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        v5 = CL_AreAllPlayersMuted(v3, ControllerFromClient);
        j_lua_pushboolean(luaVM, v5);
        v6 = 1;
        goto LABEL_9;
      }
      PartyData = Live_GetGameParty();
    }
    v3 = PartyData;
    if ( PartyData )
      goto LABEL_7;
  }
  v6 = 0;
LABEL_9:
  if ( (int)v6 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v6, v7);
  }
  return v6;
}

/*
==============
LUI_CoD_LuaCall_MuteAllPlayers
==============
*/
__int64 LUI_CoD_LuaCall_MuteAllPlayers(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  unsigned int v3; 

  ActiveParty = Party_GetActiveParty();
  if ( ActiveParty )
    CL_MuteAllPlayers(ActiveParty);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MuteAllPlayersButParty
==============
*/
__int64 LUI_CoD_LuaCall_MuteAllPlayersButParty(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  unsigned int v3; 

  ActiveParty = Party_GetActiveParty();
  if ( ActiveParty )
    CL_MuteAllPlayersButParty(ActiveParty);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MuteAllPlayersButFriends
==============
*/
__int64 LUI_CoD_LuaCall_MuteAllPlayersButFriends(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  unsigned int v3; 

  ActiveParty = Party_GetActiveParty();
  if ( ActiveParty )
    CL_MuteAllPlayersButFriends(ActiveParty);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_UnmuteAllPlayers
==============
*/
__int64 LUI_CoD_LuaCall_UnmuteAllPlayers(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "Lobby.UnmuteAllPlayers( <controller> )");
  if ( j_lua_gettop(luaVM) >= 1 )
  {
    ActiveParty = Party_GetActiveParty();
    if ( ActiveParty )
    {
      v3 = lui_tointeger32(luaVM, 1);
      CL_UnmuteAllPlayers(ActiveParty, v3);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetPartyPrivacySetting
==============
*/
__int64 LUI_CoD_LuaCall_SetPartyPrivacySetting(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  PartyData *v3; 
  int v4; 
  PartyPrivacySetting v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) < 2 )
    j_luaL_error(luaVM, "Lobby.LUI_CoD_LuaCall_SetPartyPrivacySetting( <controller>, <privacySetting> )");
  if ( j_lua_gettop(luaVM) >= 2 )
  {
    ActiveParty = Party_GetActiveParty();
    v3 = ActiveParty;
    if ( ActiveParty->inParty )
    {
      if ( Party_AreWeHost(ActiveParty) )
      {
        v4 = lui_tointeger32(luaVM, 1);
        v5 = lui_tointeger32(luaVM, 2);
        Online_PlayerData_SetPrivatePartySetting(v4, v5);
        PartyHost_CopyPartyPrivacyFromPlayerDataToParty(v3);
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetPartyPrivacySetting
==============
*/
__int64 LUI_CoD_LuaCall_GetPartyPrivacySetting(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  PartyPrivacySetting PrivacySetting; 
  unsigned int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "Lobby.GetPartyPrivacySetting()");
  if ( j_lua_gettop(luaVM) )
  {
    v4 = 0;
  }
  else
  {
    ActiveParty = Party_GetActiveParty();
    if ( ActiveParty->inParty )
    {
      PrivacySetting = Party_GetPrivacySetting(ActiveParty);
      j_lua_pushinteger(luaVM, PrivacySetting);
    }
    else
    {
      j_lua_pushinteger(luaVM, 3i64);
    }
    v4 = 1;
  }
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v5);
  }
  return v4;
}

/*
==============
LUI_CoD_LuaCall_SetPartySquadAutofill
==============
*/
__int64 LUI_CoD_LuaCall_SetPartySquadAutofill(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) < 2 )
    j_luaL_error(luaVM, "Lobby.SetPartySquadAutofill( <controller>, <enabled> )");
  if ( j_lua_gettop(luaVM) >= 2 && g_partyData.inParty && Party_AreWeHost(&g_partyData) && (v2 = 1, v3 = lui_tointeger32(luaVM, 1), v4 = j_lua_toboolean(luaVM, 2), Online_PlayerData_SetPartySquadAutofillEnabled(v3, v4 != 0)) )
    PartyHost_CopySquadAutofillFromPlayerDataToPrivateParty();
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetPartySquadAutofill
==============
*/
__int64 LUI_CoD_LuaCall_GetPartySquadAutofill(lua_State *luaVM)
{
  bool SquadAutofill; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "Lobby.GetPartySquadAutofill()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    SquadAutofill = Party_GetSquadAutofill();
    j_lua_pushboolean(luaVM, SquadAutofill);
    v3 = 1;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v4);
  }
  return v3;
}

/*
==============
LUI_CoD_LuaCall_IsInviteOnly
==============
*/
__int64 LUI_CoD_LuaCall_IsInviteOnly(lua_State *luaVM)
{
  int v2; 
  int v3; 
  PartyData *ActiveParty; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, "Lobby.IsInviteOnly( <controller> )");
  v2 = j_lua_gettop(luaVM);
  v3 = 1;
  if ( v2 >= 1 )
  {
    lui_tointeger32(luaVM, 1);
    ActiveParty = Party_GetActiveParty();
    v3 = ActiveParty->inParty && Party_IsInviteOnly(ActiveParty);
  }
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsInLobby
==============
*/
__int64 LUI_CoD_LuaCall_IsInLobby(lua_State *luaVM)
{
  bool v2; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "Lobby.IsInLobby()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    v2 = Lobby_IsInLobby();
    j_lua_pushboolean(luaVM, v2);
    v3 = 1;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v4);
  }
  return v3;
}

/*
==============
LUI_CoD_LuaCall_IsBackingOut
==============
*/
__int64 LUI_CoD_LuaCall_IsBackingOut(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "Lobby.IsBackingOut()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    j_lua_pushboolean(luaVM, g_partyData.backingOut);
    v2 = 1;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetNumLobbyMembers
==============
*/
__int64 LUI_CoD_LuaCall_GetNumLobbyMembers(lua_State *luaVM)
{
  signed int v2; 
  const PartyData *PartyData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 0");
  v2 = 0;
  if ( Lobby_IsInRunningLobby() )
  {
    PartyData = Lobby_GetPartyData();
    v2 = Party_CountUIVisibleMembers(PartyData);
  }
  j_lua_pushinteger(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetActivePartyMemberXUID
==============
*/
__int64 LUI_CoD_LuaCall_GetActivePartyMemberXUID(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  XUID *v4; 
  unsigned int v5; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetActivePartyMemberXUID( memberIndex )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    GetActivePartyXUID(&result, v3);
    v4 = (XUID *)j_lua_newuserdata(luaVM, 8ui64);
    XUID::operator=(v4, &result);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetActivePartyMemberXUIDString
==============
*/
__int64 LUI_CoD_LuaCall_GetActivePartyMemberXUIDString(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned int v4; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetActivePartyMemberXUIDString( memberIndex )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    GetActivePartyXUID(&result, v3);
    LUI_PushXUID(luaVM, result);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsMemberInParty
==============
*/
__int64 LUI_CoD_LuaCall_IsMemberInParty(lua_State *luaVM)
{
  unsigned int v2; 
  XUID v3; 
  const PartyData *ActiveParty; 
  int MemberByXUID; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.IsMemberInParty( XUID )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 1);
    ActiveParty = Party_GetActiveParty();
    MemberByXUID = Party_FindMemberByXUID(ActiveParty, v3);
    j_lua_pushboolean(luaVM, MemberByXUID >= 0);
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
LUI_CoD_LuaCall_IsLocalPlayer
==============
*/
__int64 LUI_CoD_LuaCall_IsLocalPlayer(lua_State *luaVM)
{
  unsigned int v2; 
  const XUID *v3; 
  bool v4; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.IsLocalPlayer( xuid )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = (const XUID *)j_lua_touserdata(luaVM, 1);
    v4 = Live_XUIDIsLocalPlayer((const XUID)v3->m_id);
    j_lua_pushboolean(luaVM, v4);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetGamertag
==============
*/
__int64 LUI_CoD_LuaCall_GetGamertag(lua_State *luaVM)
{
  unsigned int v2; 
  XUID v3; 
  const PartyData *ActiveParty; 
  int MemberByXUID; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetGamertag( xuid )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 1);
    ActiveParty = Party_GetActiveParty();
    MemberByXUID = Party_FindMemberByXUID(ActiveParty, v3);
    if ( MemberByXUID >= 0 )
    {
      j_lua_pushstring(luaVM, ActiveParty->partyMembers[MemberByXUID].info.gamertag);
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_lobby.cpp", 3600, ASSERT_TYPE_ASSERT, "(memberIndex >= 0)", (const char *)&queryFormat, "memberIndex >= 0") )
        __debugbreak();
      j_lua_pushstring(luaVM, (const char *)&queryFormat.fmt + 3);
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
LUI_CoD_LuaCall_ShowGamerCardWithPlatformId
==============
*/
__int64 LUI_CoD_LuaCall_ShowGamerCardWithPlatformId(lua_State *luaVM)
{
  int v2; 
  const char *v3; 
  unsigned __int64 v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.ShowGamerCard( controllerIndex, platformId )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    v4 = I_atoui64(v3);
    UI_ShowGamerCardWithPlatformId(v2, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ToggleMute
==============
*/
__int64 LUI_CoD_LuaCall_ToggleMute(lua_State *luaVM)
{
  int v2; 
  XUID *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.ToggleMute( controllerIndex, xuid )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isuserdata(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = (XUID *)j_lua_touserdata(luaVM, 2);
    UI_TogglePlayerMute(v2, (XUID)v3->m_id);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ToggleMuteWithXuidString
==============
*/
__int64 LUI_CoD_LuaCall_ToggleMuteWithXuidString(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.ToggleMuteWithXuidString( controllerIndex, xuidString )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    UI_TogglePlayerMute(v2, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MuteAll
==============
*/
__int64 LUI_CoD_LuaCall_MuteAll(lua_State *luaVM)
{
  PartyData *PartyData; 
  int v3; 
  MuteStrategy MuteStrategy; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Lobby.MuteAll( controllerIndex, <boolean> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    PartyData = &g_partyData;
    if ( !Party_InParty(&g_partyData) )
    {
      if ( !Lobby_IsInRunningLobby() )
      {
        Com_PrintError(15, "Attempt to mute all players while not in a party/lobby.\n");
        goto LABEL_19;
      }
      PartyData = Lobby_GetPartyData();
      if ( !PartyData )
        goto LABEL_19;
    }
    v3 = lui_tointeger32(luaVM, 1);
    if ( j_lua_toboolean(luaVM, 2) <= 0 )
    {
      CL_UnmuteAllPlayers(PartyData, v3);
    }
    else
    {
      MuteStrategy = CL_GetMuteStrategy(v3);
      if ( MuteStrategy == MuteStrategyMuteAllButParty )
      {
        CL_MuteAllPlayersButParty(PartyData);
      }
      else if ( MuteStrategy == MuteStrategyMuteAllButFriends )
      {
        CL_MuteAllPlayersButFriends(PartyData);
      }
      else
      {
        CL_MuteAllPlayers(PartyData);
      }
    }
  }
LABEL_19:
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMuteStrategy
==============
*/
__int64 LUI_CoD_LuaCall_GetMuteStrategy(lua_State *luaVM)
{
  int v2; 
  MuteStrategy MuteStrategy; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetMuteStrategy( controllerIndex )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    MuteStrategy = CL_GetMuteStrategy(v2);
    j_lua_pushinteger(luaVM, MuteStrategy);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetMuteStrategy
==============
*/
__int64 LUI_CoD_LuaCall_SetMuteStrategy(lua_State *luaVM)
{
  int v2; 
  MuteStrategy v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.SetMuteStrategy( controllerIndex, CoD.MuteStrategy )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    CL_SetMuteStrategy(v2, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ShowGamerCardWithXuidString
==============
*/
__int64 LUI_CoD_LuaCall_ShowGamerCardWithXuidString(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.ShowGamerCardWithXuidString( controllerIndex, xuid )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    UI_ShowGamerCard(v2, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MigrateHost
==============
*/
__int64 LUI_CoD_LuaCall_MigrateHost(lua_State *luaVM)
{
  XUID *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.MigrateHost( xuid )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = (XUID *)j_lua_touserdata(luaVM, 1);
    UI_MakeHost((XUID)v2->m_id);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_BatchKickPlayer
==============
*/
__int64 LUI_CoD_LuaCall_BatchKickPlayer(lua_State *luaVM)
{
  int v2; 
  XUID *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 5 )
    j_luaL_error(luaVM, "USAGE: Lobby.BatchKickPlayer( xuids )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_type(luaVM, 1) == 5 )
  {
    j_lua_pushinteger(luaVM, 1i64);
    j_lua_gettable(luaVM, 1);
    if ( j_lua_type(luaVM, -1) )
    {
      v2 = 1;
      do
      {
        if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_lobby.cpp", 3842, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
          __debugbreak();
        v3 = (XUID *)j_lua_touserdata(luaVM, -1);
        UI_KickPlayer((XUID)v3->m_id);
        ++v2;
        j_lua_settop(luaVM, -2);
        j_lua_pushinteger(luaVM, v2);
        j_lua_gettable(luaVM, 1);
      }
      while ( j_lua_type(luaVM, -1) );
    }
    j_lua_settop(luaVM, -2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_KickPlayer
==============
*/
__int64 LUI_CoD_LuaCall_KickPlayer(lua_State *luaVM)
{
  XUID *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.KickPlayer( xuid )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = (XUID *)j_lua_touserdata(luaVM, 1);
    UI_KickPlayer((XUID)v2->m_id);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ReportPlayer
==============
*/
__int64 LUI_CoD_LuaCall_ReportPlayer(lua_State *luaVM)
{
  int v2; 
  __int64 v3; 
  unsigned __int64 UniversalId; 
  unsigned int v5; 
  XUID v7; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Lobby.ReportPlayer( controllerIndex, xuid, offense )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v7.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 2);
    v3 = (unsigned int)lui_tointeger32(luaVM, 3);
    Com_Printf(13, "Reporting player for offense %d\n", v3);
    UniversalId = XUID::GetUniversalId(&v7);
    LiveAntiCheat_ReportPlayer(v2, (const ReportOffense)v3, UniversalId);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsGameStartRequested
==============
*/
__int64 LUI_CoD_LuaCall_IsGameStartRequested(lua_State *luaVM)
{
  const PartyData *PartyData; 
  bool IsGameStartRequested; 
  unsigned int v4; 

  if ( Live_IsInSystemlinkLobby() )
    PartyData = &g_partyData;
  else
    PartyData = Lobby_GetPartyData();
  IsGameStartRequested = PartyHost_IsGameStartRequested(PartyData);
  j_lua_pushboolean(luaVM, IsGameStartRequested);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetPartyUIRoot
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetPartyUIRoot(lua_State *luaVM, double _XMM1_8)
{
  PartyData *ActiveParty; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 0");
  ActiveParty = Party_GetActiveParty();
  if ( !ActiveParty->inParty || ActiveParty->areWeHost )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1; n }
  }
  else
  {
    Party_GetUIRoot(ActiveParty);
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, eax }
  }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetPartyUIRoot
==============
*/
__int64 LUI_CoD_LuaCall_SetPartyUIRoot(lua_State *luaVM)
{
  PartyUIRoot v2; 
  PartyData *ActiveParty; 
  PartyData *v4; 
  unsigned int v5; 
  int v7; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  v2 = (unsigned __int8)lui_tointeger32(luaVM, 1);
  ActiveParty = Party_GetActiveParty();
  v4 = ActiveParty;
  if ( ActiveParty->areWeHost )
  {
    v7 = (unsigned __int8)v2;
    Com_Printf(13, "%s: Setting [%s] party root locally to: %d\n", "LUI_CoD_LuaCall_SetPartyUIRoot_impl", ActiveParty->partyName, v7);
    Party_SetUIRoot(v4, v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_WakeLobbyParty
==============
*/
__int64 LUI_CoD_LuaCall_WakeLobbyParty(lua_State *luaVM)
{
  int v2; 
  PartyData *PartyData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  PartyData = Lobby_GetPartyData();
  if ( Party_GetActiveParty() != PartyData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_lobby.cpp", 3977, ASSERT_TYPE_ASSERT, "(Party_GetActiveParty() == lobbyParty)", (const char *)&queryFormat, "Party_GetActiveParty() == lobbyParty") )
    __debugbreak();
  Party_Sleep(&g_partyData);
  Party_Awake(PartyData, v2, 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_WakePrivateParty
==============
*/
__int64 LUI_CoD_LuaCall_WakePrivateParty(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  v2 = lui_tointeger32(luaVM, 1);
  if ( Lobby_GetPartyData()->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_lobby.cpp", 4002, ASSERT_TYPE_ASSERT, "(!Lobby_GetPartyData()->inParty)", (const char *)&queryFormat, "!Lobby_GetPartyData()->inParty") )
    __debugbreak();
  Party_Awake(&g_partyData, v2, 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_PopulatePlaylistDataModel
==============
*/
__int64 LUI_CoD_LuaCall_PopulatePlaylistDataModel(lua_State *luaVM)
{
  const char *v2; 
  unsigned int v3; 

  if ( (j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_lobby.cpp", 4060, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1 && lua_isstring( luaVM, 1 ))", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 && lua_isstring( luaVM, 1 )") )
    __debugbreak();
  v2 = j_lua_tolstring(luaVM, -1, NULL);
  LUI_DataBinding_UpdatePlaylists(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetDesiredLobbyTeamSelection
==============
*/
__int64 LUI_CoD_LuaCall_SetDesiredLobbyTeamSelection(lua_State *luaVM)
{
  int v2; 
  PartyData *PartyData; 
  int v4; 
  LocalClientNum_t ClientFromController; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.SetDesiredLobbyTeamSelection( <controller>, <team> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    PartyData = &g_partyData;
    v4 = lui_tointeger32(luaVM, 2);
    if ( !Party_InParty(&g_partyData) && !Live_IsInSystemlinkLobby() )
      PartyData = Lobby_GetPartyData();
    if ( (!v4 || (unsigned int)(v4 - 201) <= 1 && MLG_IsCoDCasterEnabled() || (unsigned int)(v4 - 1) <= 0xC9 && Live_IsLobbyTeamSelectEnabled()) && CL_Mgr_IsControllerActive(v2) )
    {
      ClientFromController = CL_Mgr_GetClientFromController(v2);
      if ( ClientFromController != LOCAL_CLIENT_INVALID )
        PartyData->desiredTeamSelection[ClientFromController] = v4;
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SwitchPlayersIndex
==============
*/
__int64 LUI_CoD_LuaCall_SwitchPlayersIndex(lua_State *luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.SwitchPlayersIndex( <oldIndex>, <newIndex> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) )
    j_lua_isnumber(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_AssignPlayerTeam
==============
*/
__int64 LUI_CoD_LuaCall_AssignPlayerTeam(lua_State *luaVM)
{
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.AssignPlayerTeam( <playerIndex>, <teamIndex> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) )
    j_lua_isnumber(luaVM, 2);
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsAnyDraftMemberAutoAssign
==============
*/
__int64 LUI_CoD_LuaCall_IsAnyDraftMemberAutoAssign(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  int v3; 
  const PartyData *v4; 
  signed int v5; 
  int *p_team; 
  unsigned int v7; 

  ActiveParty = Party_GetActiveParty();
  v3 = 0;
  v4 = ActiveParty;
  if ( ActiveParty && ActiveParty->inParty && (clientUIActives[0].frontEndSceneState[0] || clientUIActives[0].connectionState < CA_CONNECTED) )
  {
    v5 = 0;
    p_team = &ActiveParty->partyMembers[0].team;
    while ( !Party_IsMemberUIVisible(v4, v5) || *p_team )
    {
      ++v5;
      p_team += 126;
      if ( v5 >= 200 )
        goto LABEL_11;
    }
    v3 = 1;
  }
LABEL_11:
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsAnyDraftMemberSplitscreen
==============
*/
__int64 LUI_CoD_LuaCall_IsAnyDraftMemberSplitscreen(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  int v3; 
  unsigned int v4; 

  ActiveParty = Party_GetActiveParty();
  v3 = ActiveParty && ActiveParty->inParty && (clientUIActives[0].frontEndSceneState[0] || clientUIActives[0].connectionState < CA_CONNECTED) && Party_IsAnyMemberSplitscreened(ActiveParty);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_StartPrivateDS
==============
*/
__int64 LUI_CoD_LuaCall_StartPrivateDS(lua_State *luaVM)
{
  int v2; 
  PrivateMatchId v3; 
  PartyData *PartyData; 
  unsigned int v5; 
  XUID result; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "StartPrivateDS( <controllerIndex> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    Live_GetXuid(&result, v2);
    v3.m_id = XUID::ToUint64(&result);
    PartyData = Lobby_GetPartyData();
    PartyHost_SetPrivateMatchId(PartyData, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CanCancelPrivateDSMatch
==============
*/
__int64 LUI_CoD_LuaCall_CanCancelPrivateDSMatch(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  const PartyData *ActiveParty; 
  bool CanCancelPrivateDS; 
  unsigned int v6; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "CanCancelPrivateDSMatch( <controllerIndex> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    ActiveParty = Party_GetActiveParty();
    CanCancelPrivateDS = PartyHost_CanCancelPrivateDS(ActiveParty, v3);
    j_lua_pushboolean(luaVM, CanCancelPrivateDS);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v6);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_CancelPrivateDSMatch
==============
*/
__int64 LUI_CoD_LuaCall_CancelPrivateDSMatch(lua_State *luaVM)
{
  int v2; 
  PartyData *ActiveParty; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "CancelPrivateDSMatch( <controllerIndex> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    ActiveParty = Party_GetActiveParty();
    PartyHost_CancelPrivateDS(ActiveParty, v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
GetActivePartyXUID
==============
*/
XUID *GetActivePartyXUID(XUID *result, const int memberIndex)
{
  __int64 v2; 
  PartyData *PartyData; 

  v2 = memberIndex;
  if ( Lobby_IsInRunningLobby() )
  {
    PartyData = Lobby_GetPartyData();
LABEL_4:
    result->m_id = (unsigned __int64)PartyData->partyMembers[v2].playerUID;
    return result;
  }
  PartyData = &g_partyData;
  if ( Party_InParty(&g_partyData) )
    goto LABEL_4;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_lobby.cpp", 3501, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No active party") )
    __debugbreak();
  XUID::NullXUID(result);
  return result;
}

/*
==============
GetPrelobbyMemberCount
==============
*/
__int64 GetPrelobbyMemberCount()
{
  int PartyMemberCount; 
  const dvar_t *v1; 
  int v2; 
  int integer; 
  __int64 result; 

  PartyMemberCount = GetPartyMemberCount();
  v1 = DVARINT_party_maxplayers;
  v2 = PartyMemberCount;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  result = 1i64;
  if ( v2 < integer )
    integer = v2;
  if ( integer > 1 )
    return (unsigned int)integer;
  return result;
}

/*
==============
LUI_CoD_LuaCall_CreateServersDataModels_impl
==============
*/
__int64 LUI_CoD_LuaCall_CreateServersDataModels_impl(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  int ServerCount; 
  unsigned __int16 v7; 
  int v8; 
  unsigned __int16 v9; 
  const char *v10; 
  unsigned __int16 v11; 
  const char *v12; 
  const char *MapDisplayName; 
  const char *v14; 
  unsigned __int16 v15; 
  const char *v16; 
  unsigned __int16 v17; 
  const char *v18; 
  unsigned __int16 v19; 
  Material *material[2]; 
  char dest[64]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.CreateServersDataModels( controllerIndex )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) || sharedUiInfo.serverStatus.refreshActive )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  GlobalModel = LUI_Model_GetGlobalModel();
  ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.systemLinkMenu.serverBrowser");
  ServerCount = UI_GetServerCount(ClientFromController);
  v7 = LUI_Model_CreateModelFromPath(ModelFromPath, "serverCount");
  LUI_Model_SetInt(v7, ServerCount);
  v8 = 0;
  if ( ServerCount <= 0 )
    return 0i64;
  do
  {
    if ( v8 >= 64 )
      break;
    Com_sprintf(dest, 0x40ui64, "%i", (unsigned int)v8);
    v9 = LUI_Model_CreateModelFromPath(ModelFromPath, dest);
    v10 = UI_FeederItemText(ClientFromController, 2.0, v8, 0, NULL, NULL, NULL, NULL, material, 0.0);
    v11 = LUI_Model_CreateModelFromPath(v9, "host");
    LUI_Model_SetString(v11, v10);
    v12 = UI_FeederItemText(ClientFromController, 2.0, v8, 1, NULL, NULL, NULL, NULL, material, 0.0);
    LOWORD(v10) = LUI_Model_CreateModelFromPath(v9, "map");
    MapDisplayName = UI_GetMapDisplayName(v12);
    LUI_Model_SetString((const unsigned __int16)v10, MapDisplayName);
    v14 = UI_FeederItemText(ClientFromController, 2.0, v8, 2, NULL, NULL, NULL, NULL, material, 0.0);
    v15 = LUI_Model_CreateModelFromPath(v9, "players");
    LUI_Model_SetString(v15, v14);
    v16 = UI_FeederItemText(ClientFromController, 2.0, v8, 3, NULL, NULL, NULL, NULL, material, 0.0);
    v17 = LUI_Model_CreateModelFromPath(v9, "type");
    LUI_Model_SetString(v17, v16);
    v18 = UI_FeederItemText(ClientFromController, 2.0, v8, 5, NULL, NULL, NULL, NULL, material, 0.0);
    v19 = LUI_Model_CreateModelFromPath(v9, "status");
    LUI_Model_SetInt(v19, *v18 == 49);
    ++v8;
  }
  while ( v8 < ServerCount );
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetLobbyMemberStats_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetLobbyMemberStats_impl(lua_State *const luaVM)
{
  const PartyData *ActiveParty; 
  int MemberByXUID; 
  int *v4; 
  __int64 v5; 
  int v6; 
  __int64 i; 
  int v8; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Lobby.GetLobbyMemberStats( xuidString )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.GetLobbyMemberStats( xuidString )");
  j_lua_createtable(luaVM, 0, 0);
  LUI_ToXUID(&result, luaVM, 1);
  ActiveParty = Party_GetActiveParty();
  MemberByXUID = Party_FindMemberByXUID(ActiveParty, result);
  if ( MemberByXUID >= 0 )
  {
    v4 = (int *)((char *)ActiveParty + 504 * MemberByXUID);
    LUI_SetTableInt("numWins", v4[576], luaVM);
    LUI_SetTableInt("currentWinStreak", v4[578], luaVM);
    LUI_SetTableNumber("kdRatio", (float)((float)v4[577] * 0.001), luaVM);
    LUI_SetTableNumber("winLossRatio", (float)((float)v4[580] * 0.001), luaVM);
    j_lua_createtable(luaVM, 0, 0);
    v5 = 0i64;
    v6 = 1;
    for ( i = 0i64; i < 5; ++i )
    {
      j_lua_pushinteger(luaVM, v6);
      j_lua_pushinteger(luaVM, *((unsigned __int8 *)v4 + i + 2360));
      j_lua_settable(luaVM, -3);
      ++v6;
    }
    j_lua_setfield(luaVM, -2, "killsHistory");
    j_lua_createtable(luaVM, 0, 0);
    v8 = 1;
    do
    {
      j_lua_pushinteger(luaVM, v8);
      j_lua_pushinteger(luaVM, *((unsigned __int8 *)v4 + v5 + 2365));
      j_lua_settable(luaVM, -3);
      ++v8;
      ++v5;
    }
    while ( v5 < 5 );
    j_lua_setfield(luaVM, -2, "deathsHistory");
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetBotsConnectType_impl
==============
*/
__int64 LUI_CoD_LuaCall_SetBotsConnectType_impl(lua_State *const luaVM)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *VarByName; 
  int v5; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Lobby.SetBotsConnectType( <new_type> )\n");
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( !Lobby_IsInLobby() )
    {
      Com_PrintError(13, "Lobby.SetBotsConnectType called while not in lobby\n");
      return 0i64;
    }
    if ( !Lobby_AreWeHost() )
    {
      Com_PrintError(13, "Lobby.SetBotsConnectType called while not lobby host\n");
      return 0i64;
    }
  }
  if ( !Live_IsInSystemlinkLobby() )
    goto LABEL_30;
  v3 = DVARBOOL_systemlink_host;
  if ( !DVARBOOL_systemlink_host && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink_host") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
LABEL_30:
    if ( BG_BotsAreAllowed() )
    {
      VarByName = Dvar_FindVarByName("OMSOSSSORO");
      if ( VarByName->type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_lobby.cpp", 1914, ASSERT_TYPE_ASSERT, "(bot_SystemStatus->type == DVAR_TYPE_ENUM)", (const char *)&queryFormat, "bot_SystemStatus->type == DVAR_TYPE_ENUM") )
        __debugbreak();
      v5 = lui_tointeger32(luaVM, 1);
      if ( v5 < 0 || v5 >= VarByName->domain.enumeration.stringCount )
        Com_PrintError(13, "Lobby.SetBotsConnectType index %i out of bounds\n", (unsigned int)v5);
      else
        BG_SetBotsConnectType(v5);
    }
    else
    {
      Com_PrintError(13, "Lobby.SetBotsConnectType called while bots are not allowed\n");
    }
  }
  else
  {
    Com_PrintError(13, "Lobby.SetBotsConnectType called while not system link host\n");
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetBotsDifficulty_impl
==============
*/
__int64 LUI_CoD_LuaCall_SetBotsDifficulty_impl(lua_State *const luaVM)
{
  const dvar_t *v2; 
  int v3; 
  bot_difficulty_t v4; 
  bot_difficulty_t v5; 

  if ( j_lua_gettop(luaVM) < 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Lobby.SetBotsDifficulty( <team>, <difficulty> )\n");
  if ( j_lua_gettop(luaVM) < 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    return 0i64;
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( !Lobby_IsInLobby() )
    {
      Com_PrintError(13, "Lobby.SetBotsDifficulty called while not in lobby\n");
      return 0i64;
    }
    if ( !Lobby_AreWeHost() )
    {
      Com_PrintError(13, "Lobby.SetBotsDifficulty called while not lobby host\n");
      return 0i64;
    }
  }
  if ( BG_BotsAreAllowed() )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = v4;
    if ( (unsigned int)v4 > BOT_DIFFICULTY_DEFAULT )
    {
      Com_PrintError(13, "Lobby.SetBotsDifficulty index out of bounds\n");
    }
    else if ( v3 >= 0 )
    {
      if ( v3 <= 1 )
      {
        BG_SetBotsDifficulty(v3, v4);
        return 0i64;
      }
      if ( v3 == 2 )
      {
        BG_SetBotsDifficulty(0, v4);
        BG_SetBotsDifficulty(1, v5);
        return 0i64;
      }
    }
  }
  else
  {
    Com_PrintError(13, "Lobby.SetBotsDifficulty called while bots are not allowed\n");
  }
  return 0i64;
}

/*
==============
LUI_CoD_RegisterLobbyFunctions
==============
*/
void LUI_CoD_RegisterLobbyFunctions(lua_State *luaVM)
{
  LuaShared_RegisterLobbyFunctions(luaVM);
  j_luaL_register(luaVM, "Lobby", Lobby_methods_0);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_CoD_RegisterLobbyMemberFunctions
==============
*/
void LUI_CoD_RegisterLobbyMemberFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "LobbyMember", LobbyMember_methods);
  j_lua_settop(luaVM, -2);
}

