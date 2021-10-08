/*
==============
Lobby_IsInRunningLobby
==============
*/

bool __fastcall Lobby_IsInRunningLobby()
{
  return ?Lobby_IsInRunningLobby@@YA_NXZ();
}

/*
==============
Lobby_Init
==============
*/

void Lobby_Init(void)
{
  ?Lobby_Init@@YAXXZ();
}

/*
==============
Lobby_GetPartyData
==============
*/

PartyData *__fastcall Lobby_GetPartyData()
{
  return ?Lobby_GetPartyData@@YAPEAUPartyData@@XZ();
}

/*
==============
Lobby_GetHostData
==============
*/

PartyHostData *__fastcall Lobby_GetHostData()
{
  return ?Lobby_GetHostData@@YAPEAUPartyHostData@@XZ();
}

/*
==============
Lobby_IsInLobby
==============
*/

bool __fastcall Lobby_IsInLobby()
{
  return ?Lobby_IsInLobby@@YA_NXZ();
}

/*
==============
Lobby_AreWeServer
==============
*/

bool __fastcall Lobby_AreWeServer()
{
  return ?Lobby_AreWeServer@@YA_NXZ();
}

/*
==============
Lobby_GetMember
==============
*/

PartyMember *__fastcall Lobby_GetMember(const unsigned int memberIndex)
{
  return ?Lobby_GetMember@@YAPEAUPartyMember@@I@Z(memberIndex);
}

/*
==============
Lobby_AreWeHost
==============
*/

bool __fastcall Lobby_AreWeHost()
{
  return ?Lobby_AreWeHost@@YA_NXZ();
}

/*
==============
Lobby_IsHostDedicated
==============
*/

bool __fastcall Lobby_IsHostDedicated()
{
  return ?Lobby_IsHostDedicated@@YA_NXZ();
}

/*
==============
Lobby_GetHostXuid
==============
*/

int __fastcall Lobby_GetHostXuid(XUID *outHostXuid)
{
  return ?Lobby_GetHostXuid@@YAHPEAUXUID@@@Z(outHostXuid);
}

/*
==============
Lobby_AreWeHost
==============
*/
bool Lobby_AreWeHost()
{
  return g_lobbyData.party.areWeHost != 0;
}

/*
==============
Lobby_AreWeServer
==============
*/
bool Lobby_AreWeServer()
{
  return Party_AreWeServer(&g_lobbyData.party) != 0;
}

/*
==============
Lobby_GetHostData
==============
*/
PartySpecificData *Lobby_GetHostData()
{
  if ( !g_lobbyData.party.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\lobbycommon.cpp", 86, ASSERT_TYPE_ASSERT, "(Lobby_IsInLobby())", (const char *)&queryFormat, "Lobby_IsInLobby()") )
    __debugbreak();
  if ( !g_lobbyData.party.areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\lobbycommon.cpp", 87, ASSERT_TYPE_ASSERT, "(Lobby_AreWeHost())", (const char *)&queryFormat, "Lobby_AreWeHost()") )
    __debugbreak();
  return &g_lobbyData.party.specificData;
}

/*
==============
Lobby_GetHostXuid
==============
*/
__int64 Lobby_GetHostXuid(XUID *outHostXuid)
{
  const XUID *v2; 
  int v3; 
  const XUID *Xuid; 
  XUID result; 

  if ( !outHostXuid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\lobbycommon.cpp", 96, ASSERT_TYPE_ASSERT, "(outHostXuid)", (const char *)&queryFormat, "outHostXuid") )
    __debugbreak();
  v2 = XUID::NullXUID(&result);
  XUID::operator=(outHostXuid, v2);
  if ( !g_lobbyData.party.inParty )
    return 0i64;
  if ( Party_IsHostDedicated(&g_lobbyData.party) )
    return 0i64;
  v3 = Party_HostNum(&g_lobbyData.party);
  if ( !Party_IsMemberIndexDataAvailable(&g_lobbyData.party, v3) )
    return 0i64;
  Xuid = Party_GetXuid(&result, &g_lobbyData.party, v3);
  XUID::operator=(outHostXuid, Xuid);
  return 1i64;
}

/*
==============
Lobby_GetMember
==============
*/
PartyMember *Lobby_GetMember(const unsigned int memberIndex)
{
  __int64 v1; 
  int v4; 

  v1 = memberIndex;
  if ( memberIndex >= 0xC8 )
  {
    v4 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\lobbycommon.cpp", 79, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v4) )
      __debugbreak();
  }
  return &g_lobbyData.party.partyMembers[v1];
}

/*
==============
Lobby_GetPartyData
==============
*/
LobbyData *Lobby_GetPartyData()
{
  return &g_lobbyData;
}

/*
==============
Lobby_Init
==============
*/
void Lobby_Init(void)
{
  char ActiveGameMode; 
  PartyUIRoot uiRoot; 

  memset_0(&g_lobbyData.party.migrateData, 0, 0x4CC18ui64);
  memset_0(&g_lobbyData.party.partyId + 1, 0, 0x9FE9ui64);
  memset_0(&g_lobbyData.party.uiRoot + 1, 0, 0x61A2ui64);
  g_lobbyData.party.partyId = GAME_LOBBY_ID;
  g_lobbyData.party.session = &g_serverSession;
  g_lobbyData.party.uiRoot = AERIAL|FREE|0x4;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  uiRoot = g_lobbyData.party.uiRoot;
  if ( ActiveGameMode == 3 )
    uiRoot = 27;
  g_lobbyData.party.partyName = "GameParty";
  g_lobbyData.party.uiRoot = uiRoot;
  PartyClientTaskService::Init(&g_lobbyData.party.clientTaskService);
  ntl::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>(&g_lobbyData.party.memberMap);
}

/*
==============
Lobby_IsHostDedicated
==============
*/
bool Lobby_IsHostDedicated()
{
  return Party_IsHostDedicated(&g_lobbyData.party);
}

/*
==============
Lobby_IsInLobby
==============
*/
bool Lobby_IsInLobby()
{
  return g_lobbyData.party.inParty != 0;
}

/*
==============
Lobby_IsInRunningLobby
==============
*/
bool Lobby_IsInRunningLobby()
{
  return g_lobbyData.party.inParty && Party_IsRunning(&g_lobbyData.party);
}

