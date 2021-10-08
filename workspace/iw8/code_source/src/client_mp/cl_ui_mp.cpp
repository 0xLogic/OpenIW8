/*
==============
LAN_GetServerPing
==============
*/

int __fastcall LAN_GetServerPing(int n)
{
  return ?LAN_GetServerPing@@YAHH@Z(n);
}

/*
==============
LAN_CompareHostname
==============
*/

int __fastcall LAN_CompareHostname(const char *hostName1, const char *hostName2)
{
  return ?LAN_CompareHostname@@YAHPEBD0@Z(hostName1, hostName2);
}

/*
==============
LAN_GetServerInfo
==============
*/

void __fastcall LAN_GetServerInfo(int n, char *buf, unsigned __int64 buflen)
{
  ?LAN_GetServerInfo@@YAXHPEAD_K@Z(n, buf, buflen);
}

/*
==============
CL_GetClientName
==============
*/

int __fastcall CL_GetClientName(LocalClientNum_t localClientNum, int index, char *buf, unsigned __int64 bufSize)
{
  return ?CL_GetClientName@@YAHW4LocalClientNum_t@@HPEAD_K@Z(localClientNum, index, buf, bufSize);
}

/*
==============
CL_GetClientNameAndClanTag
==============
*/

int __fastcall CL_GetClientNameAndClanTag(LocalClientNum_t localClientNum, int index, char *nameBuf, unsigned __int64 nameSize, char *clanTagBuf, unsigned __int64 clanTagSize)
{
  return ?CL_GetClientNameAndClanTag@@YAHW4LocalClientNum_t@@HPEAD_K12@Z(localClientNum, index, nameBuf, nameSize, clanTagBuf, clanTagSize);
}

/*
==============
CL_GetClientNameAndClanTagColorize
==============
*/

int __fastcall CL_GetClientNameAndClanTagColorize(LocalClientNum_t localClientNum, int index, char *nameBuf, unsigned __int64 nameSize, char *clanTagBuf, unsigned __int64 clanTagSize, char post_color_index)
{
  return ?CL_GetClientNameAndClanTagColorize@@YAHW4LocalClientNum_t@@HPEAD_K12D@Z(localClientNum, index, nameBuf, nameSize, clanTagBuf, clanTagSize, post_color_index);
}

/*
==============
LAN_MarkServerDirty
==============
*/

void __fastcall LAN_MarkServerDirty(int n, int dirty)
{
  ?LAN_MarkServerDirty@@YAXHH@Z(n, dirty);
}

/*
==============
CL_GetAgentName
==============
*/

int __fastcall CL_GetAgentName(LocalClientNum_t localClientNum, int index, int ownerIndex, char *nameBuf, unsigned __int64 nameSize)
{
  return ?CL_GetAgentName@@YAHW4LocalClientNum_t@@HHPEAD_K@Z(localClientNum, index, ownerIndex, nameBuf, nameSize);
}

/*
==============
CL_GetClientState
==============
*/

void __fastcall CL_GetClientState(LocalClientNum_t localClientNum, uiClientState_t *state)
{
  ?CL_GetClientState@@YAXW4LocalClientNum_t@@PEAUuiClientState_t@@@Z(localClientNum, state);
}

/*
==============
LAN_GetServerCount
==============
*/

int __fastcall LAN_GetServerCount()
{
  return ?LAN_GetServerCount@@YAHXZ();
}

/*
==============
LAN_ServerIsDirty
==============
*/

int __fastcall LAN_ServerIsDirty(int n)
{
  return ?LAN_ServerIsDirty@@YAHH@Z(n);
}

/*
==============
LAN_GetServerPtr
==============
*/

ClServerInfo *__fastcall LAN_GetServerPtr(int n)
{
  return ?LAN_GetServerPtr@@YAPEAUClServerInfo@@H@Z(n);
}

/*
==============
LAN_ResetPings
==============
*/

void LAN_ResetPings(void)
{
  ?LAN_ResetPings@@YAXXZ();
}

/*
==============
LAN_CompareServers
==============
*/

int __fastcall LAN_CompareServers(int sortKey, int sortDir, int s1, int s2)
{
  return ?LAN_CompareServers@@YAHHHHH@Z(sortKey, sortDir, s1, s2);
}

/*
==============
CL_GetClientNameColorize
==============
*/

int __fastcall CL_GetClientNameColorize(LocalClientNum_t localClientNum, int index, char *buf, unsigned __int64 bufSize, char post_color_index)
{
  return ?CL_GetClientNameColorize@@YAHW4LocalClientNum_t@@HPEAD_KD@Z(localClientNum, index, buf, bufSize, post_color_index);
}

/*
==============
LAN_GetLANPotentialHostInfo
==============
*/

bool __fastcall LAN_GetLANPotentialHostInfo(int n, XSESSION_INFO *pHostInfo)
{
  return ?LAN_GetLANPotentialHostInfo@@YA_NHPEAVXSESSION_INFO@@@Z(n, pHostInfo);
}

/*
==============
LAN_WaitServerResponse
==============
*/

int __fastcall LAN_WaitServerResponse()
{
  return ?LAN_WaitServerResponse@@YAHXZ();
}

/*
==============
CL_GetAgentName
==============
*/
__int64 CL_GetAgentName(LocalClientNum_t localClientNum, int index, int ownerIndex, char *nameBuf, unsigned __int64 nameSize)
{
  ClActiveClientMP *ClientMP; 
  __int64 v10; 
  agentState_s *v11; 
  ClConfigStrings *ClConfigStrings; 
  const char *v14; 
  const char *v15; 
  ConversionArguments arguments; 
  char clanTagBuf[16]; 
  char nameBufa[48]; 
  char dest[1024]; 

  if ( !nameBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_ui_mp.cpp", 523, ASSERT_TYPE_ASSERT, "(nameBuf)", (const char *)&queryFormat, "nameBuf") )
    __debugbreak();
  if ( !nameSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_ui_mp.cpp", 524, ASSERT_TYPE_ASSERT, "(nameSize > 0)", (const char *)&queryFormat, "nameSize > 0") )
    __debugbreak();
  *nameBuf = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( ClientMP->snap.state != BOOL_VALUE )
    return 0i64;
  v10 = 0i64;
  if ( !ClientMP->snap.numAgents )
    return 0i64;
  while ( 1 )
  {
    v11 = &ClientMP->parseAgents[(ClientMP->snap.parseAgentsIndex + v10) % ClientMP->parseAgentsCount];
    if ( v11->entityNum == index )
      break;
    if ( ++v10 >= ClientMP->snap.numAgents )
      return 0i64;
  }
  if ( v11->name )
  {
    ClConfigStrings = ClConfigStrings::GetClConfigStrings();
    v14 = (const char *)ClConfigStrings->GetLocalizedString(ClConfigStrings, v11->name);
    Core_strcpy(dest, 0x400ui64, v14);
    memset_0(&arguments, 0, sizeof(arguments));
    v15 = UI_SafeTranslateString(dest);
    UI_ReplaceConversions(v15, &arguments, nameBuf, nameSize);
    return 1i64;
  }
  else
  {
    if ( ownerIndex != 2047 )
    {
      if ( CL_GetClientNameAndClanTagColorize(localClientNum, ownerIndex, nameBufa, 0x24ui64, clanTagBuf, 0xCui64, 55) )
        Com_sprintf(nameBuf, nameSize, "[%s]", nameBufa);
    }
    return 1i64;
  }
}

/*
==============
CL_GetClientName
==============
*/
__int64 CL_GetClientName(LocalClientNum_t localClientNum, int index, char *buf, unsigned __int64 bufSize)
{
  const PartyData *PartyData; 
  const PartyData *v9; 
  const char *name; 
  ClActiveClientMP *ClientMP; 
  __int64 v13; 
  clientState_t *v14; 

  *buf = 0;
  if ( CL_GetLocalClientGameConnectionState(localClientNum) == CA_ACTIVE )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    if ( ClientMP->snap.state == BOOL_VALUE )
    {
      v13 = 0i64;
      if ( ClientMP->snap.numClients )
      {
        while ( 1 )
        {
          v14 = &ClientMP->parseClients[(ClientMP->snap.parseClientsIndex + v13) % ClientMP->parseClientsCount];
          if ( v14->clientIndex == index )
            break;
          if ( ++v13 >= ClientMP->snap.numClients )
            return 0i64;
        }
        name = v14->name;
        goto LABEL_6;
      }
    }
  }
  else if ( Lobby_IsInLobby() )
  {
    PartyData = Lobby_GetPartyData();
    if ( Party_IsMemberIndexDataAvailable(PartyData, index) )
    {
      v9 = Lobby_GetPartyData();
LABEL_5:
      name = Party_GetMemberName(v9, index);
LABEL_6:
      Core_strcpy(buf, bufSize, name);
      return 1i64;
    }
  }
  else if ( g_partyData.inParty && Party_IsMemberIndexDataAvailable(&g_partyData, index) )
  {
    v9 = &g_partyData;
    goto LABEL_5;
  }
  return 0i64;
}

/*
==============
CL_GetClientNameAndClanTag
==============
*/
int CL_GetClientNameAndClanTag(LocalClientNum_t localClientNum, int index, char *nameBuf, unsigned __int64 nameSize, char *clanTagBuf, unsigned __int64 clanTagSize)
{
  return CL_GetClientNameAndClanTagColorize(localClientNum, index, nameBuf, nameSize, clanTagBuf, clanTagSize, 55);
}

/*
==============
CL_GetClientNameAndClanTagColorize
==============
*/
__int64 CL_GetClientNameAndClanTagColorize(LocalClientNum_t localClientNum, int index, char *nameBuf, unsigned __int64 nameSize, char *clanTagBuf, unsigned __int64 clanTagSize, char post_color_index)
{
  __int64 v7; 
  const PartyData *PartyData; 
  const PartyData *v12; 
  const char *v13; 
  PartyMember *v14; 
  __int64 result; 
  const MPBotPlayerDataContainer *Only; 
  const MPBotPlayerDataContainer *v17; 
  const char *MemberName; 
  PartyMember *Member; 
  unsigned __int64 v20; 
  ClActiveClientMP *ClientMP; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 

  v7 = localClientNum;
  if ( !nameBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_ui_mp.cpp", 390, ASSERT_TYPE_ASSERT, "(nameBuf)", (const char *)&queryFormat, "nameBuf") )
    __debugbreak();
  if ( !clanTagBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_ui_mp.cpp", 391, ASSERT_TYPE_ASSERT, "(clanTagBuf)", (const char *)&queryFormat, "clanTagBuf") )
    __debugbreak();
  *nameBuf = 0;
  *clanTagBuf = 0;
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v7) == CA_ACTIVE )
  {
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v7);
    if ( ClientMP->snap.state == BOOL_VALUE )
    {
      v22 = 0i64;
      if ( ClientMP->snap.numClients )
      {
        while ( 1 )
        {
          v23 = (__int64)&ClientMP->parseClients[(ClientMP->snap.parseClientsIndex + v22) % ClientMP->parseClientsCount];
          if ( *(_DWORD *)v23 == index )
            break;
          if ( ++v22 >= ClientMP->snap.numClients )
            return 0i64;
        }
        if ( CL_Anonymization_ShouldAnonymizeClient((const LocalClientNum_t)v7, index) )
        {
          CL_Anonymization_GetNameForIndex(index, nameBuf);
          return 1i64;
        }
        Com_sprintf(nameBuf, nameSize, (const char *)&queryFormat, v23 + 120);
        Core_strcpy(nameBuf, nameSize, (const char *)(v23 + 120));
        v20 = clanTagSize;
        if ( *(_BYTE *)(v23 + 208) )
          Com_sprintf(clanTagBuf, clanTagSize, "[%s]", (const char *)(v23 + 208));
LABEL_31:
        nameBuf[nameSize - 1] = 0;
        result = 1i64;
        clanTagBuf[v20 - 1] = 0;
        return result;
      }
    }
    else
    {
      Com_PrintWarning(13, "DEBUGGING SQUAD NAME ... Cannot get agent name, invalid snap shot state");
    }
    return 0i64;
  }
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v24) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, 2) )
      __debugbreak();
  }
  if ( clientUIActives[v7].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_ui_mp.cpp", 400, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( !Lobby_IsInLobby() )
  {
    if ( g_partyData.inParty && Party_IsMemberIndexDataAvailable(&g_partyData, index) )
    {
      MemberName = Party_GetMemberName(&g_partyData, index);
      Core_strcpy(nameBuf, nameSize, MemberName);
      Member = Lobby_GetMember(index);
      if ( !Member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_ui_mp.cpp", 455, ASSERT_TYPE_ASSERT, "(partyMember)", (const char *)&queryFormat, "partyMember") )
        __debugbreak();
      v20 = clanTagSize;
      Com_PlayerUtils_ColorizeClanTag(Member->info.clanAbbrev, Member->info.clanTagType, clanTagBuf, clanTagSize, post_color_index);
      goto LABEL_31;
    }
    return 0i64;
  }
  PartyData = Lobby_GetPartyData();
  if ( !Party_IsMemberIndexDataAvailable(PartyData, index) )
  {
    if ( (unsigned int)index >= 0xC8 )
    {
      LODWORD(v25) = 200;
      LODWORD(v24) = index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_ui_mp.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 200 )", "index doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    Only = BG_GameStateInfo_GetBotMemberReadOnly(index);
    v17 = Only;
    if ( Only->isDataValid )
    {
      Core_strcpy(nameBuf, nameSize, Only->botDisplayData.displayName);
      Core_strcpy(clanTagBuf, clanTagSize, v17->botDisplayData.clanTag);
      return 1i64;
    }
    return 0i64;
  }
  v12 = Lobby_GetPartyData();
  v13 = Party_GetMemberName(v12, index);
  Core_strcpy(nameBuf, nameSize, v13);
  v14 = Lobby_GetMember(index);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_ui_mp.cpp", 414, ASSERT_TYPE_ASSERT, "(partyMember)", (const char *)&queryFormat, "partyMember") )
    __debugbreak();
  Com_PlayerUtils_ColorizeClanTag(v14->info.clanAbbrev, v14->info.clanTagType, clanTagBuf, clanTagSize, post_color_index);
  return 1i64;
}

/*
==============
CL_GetClientNameColorize
==============
*/
__int64 CL_GetClientNameColorize(LocalClientNum_t localClientNum, int index, char *buf, unsigned __int64 bufSize)
{
  const PartyData *PartyData; 
  const PartyData *v9; 
  const char *name; 
  ClActiveClientMP *ClientMP; 
  __int64 v13; 
  clientState_t *v14; 

  *buf = 0;
  if ( CL_GetLocalClientGameConnectionState(localClientNum) == CA_ACTIVE )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    if ( ClientMP->snap.state == BOOL_VALUE )
    {
      v13 = 0i64;
      if ( ClientMP->snap.numClients )
      {
        while ( 1 )
        {
          v14 = &ClientMP->parseClients[(ClientMP->snap.parseClientsIndex + v13) % ClientMP->parseClientsCount];
          if ( v14->clientIndex == index )
            break;
          if ( ++v13 >= ClientMP->snap.numClients )
            return 0i64;
        }
        name = v14->name;
        goto LABEL_6;
      }
    }
  }
  else if ( Lobby_IsInLobby() )
  {
    PartyData = Lobby_GetPartyData();
    if ( Party_IsMemberIndexDataAvailable(PartyData, index) )
    {
      v9 = Lobby_GetPartyData();
LABEL_5:
      name = Party_GetMemberName(v9, index);
LABEL_6:
      Core_strcpy(buf, bufSize, name);
      return 1i64;
    }
  }
  else if ( g_partyData.inParty && Party_IsMemberIndexDataAvailable(&g_partyData, index) )
  {
    v9 = &g_partyData;
    goto LABEL_5;
  }
  return 0i64;
}

/*
==============
CL_GetClientState
==============
*/
void CL_GetClientState(LocalClientNum_t localClientNum, uiClientState_t *state)
{
  __int64 v2; 
  connstate_t LocalClientGameConnectionState; 
  bool v5; 
  ClConnection **v6; 
  ClConnection *v7; 

  v2 = localClientNum;
  LocalClientGameConnectionState = CL_GetLocalClientGameConnectionState(localClientNum);
  state->connState = LocalClientGameConnectionState;
  if ( LocalClientGameConnectionState )
  {
    if ( (unsigned int)v2 >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 138, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, cl_maxLocalClients) )
      __debugbreak();
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 139, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
      __debugbreak();
    v5 = ClConnection::ms_connections[v2] == NULL;
    v6 = &ClConnection::ms_connections[v2];
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 140, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
      __debugbreak();
    v7 = *v6;
    state->connectPacketCount = v7[9362].m_numPacketsReceived;
    Core_strcpy(state->servername, 0x400ui64, cls.servername);
    Core_strcpy(state->messageString, 0x400ui64, (const char *)&v7[9363]);
  }
  else
  {
    state->connectPacketCount = 0;
    state->servername[0] = 0;
    state->messageString[0] = 0;
  }
}

/*
==============
LAN_CompareHostname
==============
*/
int LAN_CompareHostname(const char *hostName1, const char *hostName2)
{
  unsigned __int8 v2; 
  char *v3; 
  const char *i; 
  unsigned __int8 v7; 
  const char *v8; 
  char *j; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int result; 
  char v18[40]; 
  char v19[40]; 

  v2 = *hostName1;
  v3 = v18;
  for ( i = hostName1; v2; ++i )
  {
    if ( isalpha(v2) )
      *v3++ = v2;
    v2 = i[1];
  }
  v7 = *hostName2;
  v8 = hostName2;
  *v3 = 0;
  for ( j = v19; v7; ++v8 )
  {
    if ( isalpha(v7) )
      *j++ = v7;
    v7 = v8[1];
  }
  *j = 0;
  v10 = 0x7FFFFFFFi64;
  v11 = 0i64;
  while ( 1 )
  {
    v12 = (unsigned __int8)v18[v11];
    v13 = v10;
    v14 = (unsigned __int8)v19[v11++];
    --v10;
    if ( !v13 )
      return I_stricmp(hostName1, hostName2);
    if ( v12 != v14 )
    {
      v15 = v12 + 32;
      if ( v12 - 65 > 0x19 )
        v15 = v12;
      v12 = v15;
      v16 = v14 + 32;
      if ( v14 - 65 > 0x19 )
        v16 = v14;
      if ( v12 != v16 )
        break;
    }
    if ( !v12 )
      return I_stricmp(hostName1, hostName2);
  }
  result = 1;
  if ( v12 < v16 )
    return -1;
  return result;
}

/*
==============
LAN_CompareServers
==============
*/
__int64 LAN_CompareServers(int sortKey, int sortDir, int s1, int s2)
{
  int v4; 
  ClServerInfo *v5; 
  ClServerInfo *v6; 
  __int64 result; 
  const char *MapDisplayName; 
  const char *GameTypeDisplayName; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 

  v4 = sortDir;
  if ( (unsigned int)s1 > 0x3F )
    v5 = NULL;
  else
    v5 = &cls.localServers[s1];
  if ( (unsigned int)s2 > 0x3F )
    v6 = NULL;
  else
    v6 = &cls.localServers[s2];
  if ( !v5 || !v6 )
    return 0i64;
  if ( !sortKey )
  {
    v13 = LAN_CompareHostname(v5->hostName, v6->hostName);
    if ( v13 )
    {
LABEL_32:
      result = -v13;
      if ( !v4 )
        return v13;
      return result;
    }
    goto $sort_ping;
  }
  if ( sortKey == 1 )
  {
    MapDisplayName = UI_GetMapDisplayName(v6->mapName);
    GameTypeDisplayName = UI_GetMapDisplayName(v5->mapName);
    goto LABEL_23;
  }
  if ( sortKey != 2 )
  {
    if ( sortKey != 3 )
    {
      if ( sortKey != 4 )
      {
        result = 0i64;
        if ( !sortDir )
          return 0i64;
        return result;
      }
      goto LABEL_29;
    }
    MapDisplayName = UI_GetGameTypeDisplayName(v6->gameType);
    GameTypeDisplayName = UI_GetGameTypeDisplayName(v5->gameType);
LABEL_23:
    v11 = I_stricmp(GameTypeDisplayName, MapDisplayName);
    v12 = v11;
    if ( v11 )
    {
      result = (unsigned int)-v11;
      if ( !v4 )
        return v12;
      return result;
    }
$sort_ping:
    v4 = 0;
LABEL_29:
    v13 = v5->ping - v6->ping;
    if ( !v13 )
    {
      v13 = I_stricmp(v5->gameType, v6->gameType);
      if ( !v13 )
        v13 = LAN_CompareHostname(v5->hostName, v6->hostName);
    }
    goto LABEL_32;
  }
  v10 = v5->clients - v6->clients;
  if ( !v10 )
    goto $sort_ping;
  result = v6->clients - (unsigned int)v5->clients;
  if ( !sortDir )
    return v10;
  return result;
}

/*
==============
LAN_GetLANPotentialHostInfo
==============
*/
char LAN_GetLANPotentialHostInfo(int n, XSESSION_INFO *pHostInfo)
{
  if ( (unsigned int)n > 0x3F )
    return 0;
  XSESSION_INFO::Set(pHostInfo, &cls.localServers[n].xninfo, &cls.localServers[n].xnaddr);
  return 1;
}

/*
==============
LAN_GetServerCount
==============
*/
__int64 LAN_GetServerCount()
{
  return (unsigned int)cls.numlocalservers;
}

/*
==============
LAN_GetServerInfo
==============
*/
void LAN_GetServerInfo(int n, char *buf, unsigned __int64 buflen)
{
  ClServerInfo *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  char s[1024]; 

  s[0] = 0;
  if ( (unsigned int)n <= 0x3F && (v5 = &cls.localServers[n]) != NULL )
  {
    if ( buf )
    {
      *buf = 0;
      Info_SetValueForKey(s, "hostname", v5->hostName);
      Info_SetValueForKey(s, "mapname", v5->mapName);
      v6 = j_va("%i", v5->clients);
      Info_SetValueForKey(s, "clients", v6);
      v7 = j_va("%i", v5->maxClients);
      Info_SetValueForKey(s, "maxclients", v7);
      v8 = j_va("%i", (unsigned int)v5->ping);
      Info_SetValueForKey(s, "ping", v8);
      v9 = j_va("%i", (unsigned int)v5->minPing);
      Info_SetValueForKey(s, "minping", v9);
      v10 = j_va("%i", (unsigned int)v5->maxPing);
      Info_SetValueForKey(s, "maxping", v10);
      Info_SetValueForKey(s, "gametype", v5->gameType);
      v11 = j_va("%i", v5->isLobby);
      Info_SetValueForKey(s, "islobby", v11);
      Core_strcpy(buf, buflen, s);
    }
  }
  else if ( buf )
  {
    *buf = 0;
  }
}

/*
==============
LAN_GetServerPing
==============
*/
__int64 LAN_GetServerPing(int n)
{
  if ( (unsigned int)n > 0x3F )
    return 0xFFFFFFFFi64;
  else
    return (unsigned int)cls.localServers[n].ping;
}

/*
==============
LAN_GetServerPtr
==============
*/
ClServerInfo *LAN_GetServerPtr(int n)
{
  if ( (unsigned int)n > 0x3F )
    return 0i64;
  else
    return &cls.localServers[n];
}

/*
==============
LAN_MarkServerDirty
==============
*/
void LAN_MarkServerDirty(int n, int dirty)
{
  if ( n == -1 )
  {
    cls.localServers[0].dirty = dirty;
    cls.localServers[1].dirty = dirty;
    cls.localServers[2].dirty = dirty;
    cls.localServers[3].dirty = dirty;
    cls.localServers[4].dirty = dirty;
    cls.localServers[5].dirty = dirty;
    cls.localServers[6].dirty = dirty;
    cls.localServers[7].dirty = dirty;
    cls.localServers[8].dirty = dirty;
    cls.localServers[9].dirty = dirty;
    cls.localServers[10].dirty = dirty;
    cls.localServers[11].dirty = dirty;
    cls.localServers[12].dirty = dirty;
    cls.localServers[13].dirty = dirty;
    cls.localServers[14].dirty = dirty;
    cls.localServers[15].dirty = dirty;
    cls.localServers[16].dirty = dirty;
    cls.localServers[17].dirty = dirty;
    cls.localServers[18].dirty = dirty;
    cls.localServers[19].dirty = dirty;
    cls.localServers[20].dirty = dirty;
    cls.localServers[21].dirty = dirty;
    cls.localServers[22].dirty = dirty;
    cls.localServers[23].dirty = dirty;
    cls.localServers[24].dirty = dirty;
    cls.localServers[25].dirty = dirty;
    cls.localServers[26].dirty = dirty;
    cls.localServers[27].dirty = dirty;
    cls.localServers[28].dirty = dirty;
    cls.localServers[29].dirty = dirty;
    cls.localServers[30].dirty = dirty;
    cls.localServers[31].dirty = dirty;
    cls.localServers[32].dirty = dirty;
    cls.localServers[33].dirty = dirty;
    cls.localServers[34].dirty = dirty;
    cls.localServers[35].dirty = dirty;
    cls.localServers[36].dirty = dirty;
    cls.localServers[37].dirty = dirty;
    cls.localServers[38].dirty = dirty;
    cls.localServers[39].dirty = dirty;
    cls.localServers[40].dirty = dirty;
    cls.localServers[41].dirty = dirty;
    cls.localServers[42].dirty = dirty;
    cls.localServers[43].dirty = dirty;
    cls.localServers[44].dirty = dirty;
    cls.localServers[45].dirty = dirty;
    cls.localServers[46].dirty = dirty;
    cls.localServers[47].dirty = dirty;
    cls.localServers[48].dirty = dirty;
    cls.localServers[49].dirty = dirty;
    cls.localServers[50].dirty = dirty;
    cls.localServers[51].dirty = dirty;
    cls.localServers[52].dirty = dirty;
    cls.localServers[53].dirty = dirty;
    cls.localServers[54].dirty = dirty;
    cls.localServers[55].dirty = dirty;
    cls.localServers[56].dirty = dirty;
    cls.localServers[57].dirty = dirty;
    cls.localServers[58].dirty = dirty;
    cls.localServers[59].dirty = dirty;
    cls.localServers[60].dirty = dirty;
    cls.localServers[61].dirty = dirty;
    cls.localServers[62].dirty = dirty;
    cls.localServers[63].dirty = dirty;
  }
  else if ( (unsigned int)n <= 0x3F )
  {
    cls.localServers[n].dirty = dirty;
  }
}

/*
==============
LAN_ResetPings
==============
*/
void LAN_ResetPings(void)
{
  cls.localServers[0].ping = -1;
  cls.localServers[1].ping = -1;
  cls.localServers[2].ping = -1;
  cls.localServers[3].ping = -1;
  cls.localServers[4].ping = -1;
  cls.localServers[5].ping = -1;
  cls.localServers[6].ping = -1;
  cls.localServers[7].ping = -1;
  cls.localServers[8].ping = -1;
  cls.localServers[9].ping = -1;
  cls.localServers[10].ping = -1;
  cls.localServers[11].ping = -1;
  cls.localServers[12].ping = -1;
  cls.localServers[13].ping = -1;
  cls.localServers[14].ping = -1;
  cls.localServers[15].ping = -1;
  cls.localServers[16].ping = -1;
  cls.localServers[17].ping = -1;
  cls.localServers[18].ping = -1;
  cls.localServers[19].ping = -1;
  cls.localServers[20].ping = -1;
  cls.localServers[21].ping = -1;
  cls.localServers[22].ping = -1;
  cls.localServers[23].ping = -1;
  cls.localServers[24].ping = -1;
  cls.localServers[25].ping = -1;
  cls.localServers[26].ping = -1;
  cls.localServers[27].ping = -1;
  cls.localServers[28].ping = -1;
  cls.localServers[29].ping = -1;
  cls.localServers[30].ping = -1;
  cls.localServers[31].ping = -1;
  cls.localServers[32].ping = -1;
  cls.localServers[33].ping = -1;
  cls.localServers[34].ping = -1;
  cls.localServers[35].ping = -1;
  cls.localServers[36].ping = -1;
  cls.localServers[37].ping = -1;
  cls.localServers[38].ping = -1;
  cls.localServers[39].ping = -1;
  cls.localServers[40].ping = -1;
  cls.localServers[41].ping = -1;
  cls.localServers[42].ping = -1;
  cls.localServers[43].ping = -1;
  cls.localServers[44].ping = -1;
  cls.localServers[45].ping = -1;
  cls.localServers[46].ping = -1;
  cls.localServers[47].ping = -1;
  cls.localServers[48].ping = -1;
  cls.localServers[49].ping = -1;
  cls.localServers[50].ping = -1;
  cls.localServers[51].ping = -1;
  cls.localServers[52].ping = -1;
  cls.localServers[53].ping = -1;
  cls.localServers[54].ping = -1;
  cls.localServers[55].ping = -1;
  cls.localServers[56].ping = -1;
  cls.localServers[57].ping = -1;
  cls.localServers[58].ping = -1;
  cls.localServers[59].ping = -1;
  cls.localServers[60].ping = -1;
  cls.localServers[61].ping = -1;
  cls.localServers[62].ping = -1;
  cls.localServers[63].ping = -1;
}

/*
==============
LAN_ServerIsDirty
==============
*/
__int64 LAN_ServerIsDirty(int n)
{
  if ( (unsigned int)n > 0x3F )
    return 0i64;
  else
    return cls.localServers[n].dirty;
}

/*
==============
LAN_WaitServerResponse
==============
*/
__int64 LAN_WaitServerResponse()
{
  return 0i64;
}

