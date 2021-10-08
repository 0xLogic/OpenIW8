/*
==============
PartyUI_MissingMapPackName
==============
*/

const char *__fastcall PartyUI_MissingMapPackName()
{
  return ?PartyUI_MissingMapPackName@@YAPEBDXZ();
}

/*
==============
Party_GetMapVotePlaylistEntry
==============
*/

int __fastcall Party_GetMapVotePlaylistEntry(const PartyData *party, int entry)
{
  return ?Party_GetMapVotePlaylistEntry@@YAHPEBUPartyData@@H@Z(party, entry);
}

/*
==============
PartyUI_GetTeamMemberXuid
==============
*/

XUID *__fastcall PartyUI_GetTeamMemberXuid(XUID *result, PartyData *party, int localControllerIndex, int team, int slot)
{
  return ?PartyUI_GetTeamMemberXuid@@YA?AUXUID@@PEAUPartyData@@HHH@Z(result, party, localControllerIndex, team, slot);
}

/*
==============
PartyUI_OpenMenu
==============
*/

void __fastcall PartyUI_OpenMenu(const LocalClientNum_t localClientNum, PartyUIRoot menuId, const bool isExclusive)
{
  ?PartyUI_OpenMenu@@YAXW4LocalClientNum_t@@W4PartyUIRoot@@_N@Z(localClientNum, menuId, isExclusive);
}

/*
==============
Party_SetEntryBDisplayMapName
==============
*/

void __fastcall Party_SetEntryBDisplayMapName(const char *rawmapname)
{
  ?Party_SetEntryBDisplayMapName@@YAXPEBD@Z(rawmapname);
}

/*
==============
PartyUI_SetTeam
==============
*/

void __fastcall PartyUI_SetTeam(PartyData *party, int localControllerIndex, team_t newTeam)
{
  ?PartyUI_SetTeam@@YAXPEAUPartyData@@HW4team_t@@@Z(party, localControllerIndex, newTeam);
}

/*
==============
PartyUI_GetFirstPlayerNameWithoutMapPack
==============
*/

const char *__fastcall PartyUI_GetFirstPlayerNameWithoutMapPack(PartyData *party, int mapPackIndex)
{
  return ?PartyUI_GetFirstPlayerNameWithoutMapPack@@YAPEBDPEAUPartyData@@H@Z(party, mapPackIndex);
}

/*
==============
Party_SetUIPlayerCount
==============
*/

void __fastcall Party_SetUIPlayerCount(const PartyData *party)
{
  ?Party_SetUIPlayerCount@@YAXPEBUPartyData@@@Z(party);
}

/*
==============
PartyUI_ShouldShowInviteWarning
==============
*/

bool __fastcall PartyUI_ShouldShowInviteWarning(PartyData *party)
{
  return ?PartyUI_ShouldShowInviteWarning@@YA_NPEAUPartyData@@@Z(party);
}

/*
==============
PartyUI_GetStatus
==============
*/

PartyUIState __fastcall PartyUI_GetStatus(const PartyData *party)
{
  return ?PartyUI_GetStatus@@YA?AW4PartyUIState@@PEBUPartyData@@@Z(party);
}

/*
==============
PartyUI_RecoverFromError
==============
*/

void PartyUI_RecoverFromError(void)
{
  ?PartyUI_RecoverFromError@@YAXXZ();
}

/*
==============
PartyUI_GetTeamMember
==============
*/

PartyMember *__fastcall PartyUI_GetTeamMember(PartyData *party, const int localControllerIndex, const int team, const int slot)
{
  return ?PartyUI_GetTeamMember@@YAPEAUPartyMember@@PEAUPartyData@@HHH@Z(party, localControllerIndex, team, slot);
}

/*
==============
Party_SetEntryADisplayMapName
==============
*/

void __fastcall Party_SetEntryADisplayMapName(const char *rawmapname)
{
  ?Party_SetEntryADisplayMapName@@YAXPEBD@Z(rawmapname);
}

/*
==============
PartyUI_IsMatchStart
==============
*/

bool __fastcall PartyUI_IsMatchStart(const PartyData *party)
{
  return ?PartyUI_IsMatchStart@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
PartyUI_MissingMapPackPlayerName
==============
*/

const char *__fastcall PartyUI_MissingMapPackPlayerName()
{
  return ?PartyUI_MissingMapPackPlayerName@@YAPEBDXZ();
}

/*
==============
PartyUI_IsStartingMatch
==============
*/

bool __fastcall PartyUI_IsStartingMatch(const PartyData *party)
{
  return ?PartyUI_IsStartingMatch@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
PartyUI_ShowTruePlayerInfo
==============
*/

int __fastcall PartyUI_ShowTruePlayerInfo(PartyData *party, const int localControllerIndex, const int slot)
{
  return ?PartyUI_ShowTruePlayerInfo@@YAHPEAUPartyData@@HH@Z(party, localControllerIndex, slot);
}

/*
==============
Party_SetEntryCDisplayMapName
==============
*/

void __fastcall Party_SetEntryCDisplayMapName(const char *rawmapname)
{
  ?Party_SetEntryCDisplayMapName@@YAXPEBD@Z(rawmapname);
}

/*
==============
PartyUI_GetMember
==============
*/

PartyMember *__fastcall PartyUI_GetMember(PartyData *party, int slot)
{
  return ?PartyUI_GetMember@@YAPEAUPartyMember@@PEAUPartyData@@H@Z(party, slot);
}

/*
==============
PartyUI_GetTeam
==============
*/

int __fastcall PartyUI_GetTeam(PartyData *party, int localControllerIndex)
{
  return ?PartyUI_GetTeam@@YAHPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyUI_UpdatePartyDvars
==============
*/

void __fastcall PartyUI_UpdatePartyDvars(const LocalClientNum_t localClientNum, const unsigned int index, const PartyData *party, XUID xuid)
{
  ?PartyUI_UpdatePartyDvars@@YAXW4LocalClientNum_t@@IPEBUPartyData@@UXUID@@@Z(localClientNum, index, party, xuid);
}

/*
==============
PartyUI_GetMemberXuid
==============
*/

XUID *__fastcall PartyUI_GetMemberXuid(XUID *result, PartyData *party, int localControllerIndex, int slot)
{
  return ?PartyUI_GetMemberXuid@@YA?AUXUID@@PEAUPartyData@@HH@Z(result, party, localControllerIndex, slot);
}

/*
==============
PartyUI_IsMLGSpectator
==============
*/

int __fastcall PartyUI_IsMLGSpectator(PartyData *party, int slot)
{
  return ?PartyUI_IsMLGSpectator@@YAHPEAUPartyData@@H@Z(party, slot);
}

/*
==============
PartyUI_MemberNameWithClan
==============
*/

const char *__fastcall PartyUI_MemberNameWithClan(PartyMember *member)
{
  return ?PartyUI_MemberNameWithClan@@YAPEBDPEAUPartyMember@@@Z(member);
}

/*
==============
PartyUI_GetFirstPlayerNameWithoutMapPack
==============
*/
char *PartyUI_GetFirstPlayerNameWithoutMapPack(PartyData *party, int mapPackIndex)
{
  __int64 v4; 
  int *i; 
  char *result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 166, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v4 = 0i64;
  for ( i = &party->partyMembers[0].info.availableMapPackFlags; *((_BYTE *)i + 402) < 5u || (mapPackIndex & *i) != 0; i += 126 )
  {
    if ( ++v4 >= 200 )
      return (char *)&queryFormat.fmt + 3;
  }
  Com_PlayerUtils_ColorizeNameAndClanTag((const char *)i + 44, (const char *)i + 84, *((_BYTE *)i + 90), playerName_0, 0x2Fui64, 0x37u);
  result = playerName_0;
  playerName_0[46] = 0;
  return result;
}

/*
==============
PartyUI_GetMember
==============
*/
PartyMember *PartyUI_GetMember(PartyData *party, int slot)
{
  const PartyMember *v2; 

  v2 = &party->partyMembers[PartyUI_GetMemberIndexForSlot(party, slot)];
  if ( !Party_IsMemberDataAvailable(v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 155, ASSERT_TYPE_ASSERT, "(Party_IsMemberDataAvailable( member ))", (const char *)&queryFormat, "Party_IsMemberDataAvailable( member )") )
    __debugbreak();
  return (PartyMember *)v2;
}

/*
==============
PartyUI_GetMemberIndexForSlot
==============
*/
__int64 PartyUI_GetMemberIndexForSlot(PartyData *party, int slot)
{
  __int64 v2; 
  const dvar_t *v4; 
  unsigned int i; 
  int v7; 
  unsigned int v8; 

  v2 = slot;
  if ( slot >= Party_CountUIVisibleMembers(party) )
  {
    v8 = Party_CountUIVisibleMembers(party);
    v7 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( Party_CountUIVisibleMembers( party ) )", "slot doesn't index Party_CountUIVisibleMembers( party )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( Party_IsPrivateParty(party) )
    goto LABEL_13;
  v4 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
LABEL_13:
    for ( i = 0; i < 0xC8; ++i )
    {
      if ( Party_IsMemberUIVisible(party, i) )
      {
        if ( !(_DWORD)v2 )
          goto LABEL_21;
        LODWORD(v2) = v2 - 1;
      }
    }
    if ( (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 134, ASSERT_TYPE_ASSERT, "(slot == 0)", (const char *)&queryFormat, "slot == 0") )
      __debugbreak();
  }
  else
  {
    if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 138, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", "%s\n\tUsing sorted indices without a game lobby", "Party_IsGameLobby( party )") )
      __debugbreak();
    Party_SortDescending(party, sortedIndices, 200);
    i = sortedIndices[v2];
  }
LABEL_21:
  if ( !Party_IsMemberIndexDataAvailable(party, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 143, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, memberIndex )") )
    __debugbreak();
  return i;
}

/*
==============
PartyUI_GetMemberXuid
==============
*/
XUID *PartyUI_GetMemberXuid(XUID *result, PartyData *party, int localControllerIndex, int slot)
{
  unsigned int MemberIndexForSlot; 
  const XUID *Xuid; 
  PartyMember *Member; 
  XUID myXuid; 
  XUID resulta; 

  XUID::XUID(&myXuid);
  if ( Live_IsSignedIn(localControllerIndex) && (MemberIndexForSlot = PartyUI_GetMemberIndexForSlot(party, slot), Xuid = Live_GetXuid(&resulta, localControllerIndex), XUID::operator=(&myXuid, Xuid), Party_IsMemberInfoVisible(party, myXuid, MemberIndexForSlot)) )
  {
    Member = PartyUI_GetMember(party, slot);
    if ( !Member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 556, ASSERT_TYPE_SANITY, "( member )", (const char *)&queryFormat, "member") )
      __debugbreak();
    result->m_id = (unsigned __int64)Member->playerUID;
  }
  else
  {
    XUID::NullXUID(result);
  }
  return result;
}

/*
==============
PartyUI_GetStatus
==============
*/

__int64 __fastcall PartyUI_GetStatus(const PartyData *party, __int64 a2, double _XMM2_8)
{
  int v5; 
  unsigned int v7; 
  bool v8; 
  const dvar_t *v9; 
  const char *v10; 
  int Int_Internal_DebugName; 
  int v18; 
  int v19; 
  bool IsPreloadComplete; 
  int areWeHost; 

  if ( !party || !party->inParty || !party->party_systemActive )
    return 0i64;
  if ( Party_IsGameLobby(party) )
  {
    if ( party->areWeHost && (v5 = Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_ALL), v5 <= Party_CountMembersEvenIfInactive(&g_partyData, PARTY_MEMBER_TYPE_ALL)) )
    {
      if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) )
        return 1i64;
    }
    else if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) )
    {
      return 2i64;
    }
  }
  if ( PartyMigrate_ShowMigratingStatus(party) )
    return 3i64;
  if ( PartyMigrate_ShowMakeHostStatus(party) )
    return 4i64;
  if ( (party->lobbyFlags & 1) != 0 )
    return 16i64;
  if ( Party_IsPrivateParty(party) && !Live_IsInSystemlinkLobby() )
  {
    if ( Party_AreWeHost(party) )
    {
      if ( !Party_IsWaitingForMembers(party) )
        return 0i64;
      return 7i64;
    }
    if ( PartyClient_IsHostAway(party) )
      return 8i64;
    if ( Party_IsWaitingForMembers(party) )
      return 7i64;
    return 9i64;
  }
  if ( Party_IsWaitingForMembers(party) && (!party->inParty || !party->areWeHost || party->specificData.hostData.partyCreationDoneTime) )
    return 7i64;
  v7 = party->lobbyFlags & 0x64;
  if ( v7 != 4 )
  {
    if ( v7 != 32 )
    {
      if ( v7 == 64 )
        return 15i64;
      if ( Party_AreWeHost(party) )
        return 21i64;
      return 9i64;
    }
    if ( !PartyUI_GetStatus_IsPreloadComplete(party) )
    {
      v8 = party->areWeHost == 0;
LABEL_58:
      if ( v8 && party->specificData.clientData.m_receivedGoMessage )
        return 5i64;
      else
        return 6i64;
    }
    if ( Party_IsPrivateOrSystemlinkGame(party) )
    {
      v9 = DVARINT_pt_privateGameStartTimerLength;
      v10 = "pt_privateGameStartTimerLength";
    }
    else
    {
      v9 = DVARINT_pt_gameStartTimerLength;
      v10 = "pt_gameStartTimerLength";
    }
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v9, v10);
    Sys_Milliseconds();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vxorps  xmm2, xmm2, xmm2
      vroundss xmm2, xmm2, xmm1, 2
      vcvttss2si eax, xmm2
    }
    if ( _EAX > Int_Internal_DebugName )
      return 19i64;
    return 20i64;
  }
  if ( Party_UsingPartyBasedTeams(party) )
    return 17i64;
  if ( !Party_IsPrivateOrSystemlinkGame(party) )
  {
    v18 = Party_CountMembers(party, PARTY_MEMBER_TYPE_ALL);
    v19 = Dvar_GetInt_Internal_DebugName(DVARINT_party_minplayers, "party_minplayers");
    if ( v18 < 1 )
      v18 = 1;
    if ( v19 - v18 > 0 )
      return 10i64;
  }
  if ( Party_UsingReadyUpFeature() )
  {
    if ( !Party_GetLocalReadyUpFlag() )
      return 11i64;
    if ( !Party_GetPartyReadyUpStatus() )
      return 12i64;
  }
  IsPreloadComplete = PartyUI_GetStatus_IsPreloadComplete(party);
  areWeHost = party->areWeHost;
  if ( !IsPreloadComplete )
  {
    v8 = areWeHost == 0;
    goto LABEL_58;
  }
  if ( !areWeHost && party->specificData.clientData.m_receivedGoMessage )
    return 20i64;
  if ( Party_IsPrivateOrSystemlinkGame(party) && !Party_AreWeHost(party) )
    return 9i64;
  return 14i64;
}

/*
==============
PartyUI_GetStatus_IsPreloadComplete
==============
*/
bool PartyUI_GetStatus_IsPreloadComplete(const PartyData *party)
{
  const char *MapName; 
  bool result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 236, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  MapName = Party_GetMapName();
  result = Com_FastFile_IsLevelPreloadComplete(MapName);
  if ( result )
    return party->areWeHost || party->specificData.clientData.m_receivedGoMessage && party->specificData.clientData.m_preloadStreamingChecked || PartyClient_IsStreamingPreloadComplete(party);
  return result;
}

/*
==============
PartyUI_GetTeam
==============
*/
int PartyUI_GetTeam(PartyData *party, int localControllerIndex)
{
  const XUID *Xuid; 
  XUID player; 
  XUID result; 

  XUID::XUID(&player);
  Xuid = Live_GetXuid(&result, localControllerIndex);
  XUID::operator=(&player, Xuid);
  return Party_GetAssignedTeam(party, player);
}

/*
==============
PartyUI_GetTeamMember
==============
*/
PartyMember *PartyUI_GetTeamMember(PartyData *party, const int localControllerIndex, const int team, const int slot)
{
  unsigned int *v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v12; 
  __int64 v13; 

  if ( (unsigned int)slot >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 590, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 200 )", "slot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", slot, 200) )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 592, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", "%s\n\tUsing sorted indices without a game lobby", "Party_IsGameLobby( party )") )
    __debugbreak();
  v7 = sortedIndices;
  Party_SortDescending(party, sortedIndices, 200);
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v8 > slot )
    {
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 613, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown slot for party member lookup") )
        __debugbreak();
      LODWORD(v10) = 0;
      return &party->partyMembers[(unsigned int)v10];
    }
    v10 = *v7;
    if ( party->partyMembers[v10].team == team && party->partyMembers[v10].status >= 5u )
      break;
LABEL_13:
    ++v9;
    ++v7;
    if ( v9 >= 0xC8 )
      goto LABEL_14;
  }
  if ( slot != v8 )
  {
    ++v8;
    goto LABEL_13;
  }
  if ( (unsigned int)v10 >= 0xC8 )
  {
    LODWORD(v13) = 200;
    LODWORD(v12) = *v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 623, ASSERT_TYPE_SANITY, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  return &party->partyMembers[(unsigned int)v10];
}

/*
==============
PartyUI_GetTeamMemberXuid
==============
*/
XUID *PartyUI_GetTeamMemberXuid(XUID *result, PartyData *party, int localControllerIndex, int team, int slot)
{
  unsigned int *v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  if ( (unsigned int)slot >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 590, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 200 )", "slot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", slot, 200) )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 592, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", "%s\n\tUsing sorted indices without a game lobby", "Party_IsGameLobby( party )") )
    __debugbreak();
  v8 = sortedIndices;
  Party_SortDescending(party, sortedIndices, 200);
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v9 > slot )
    {
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 613, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown slot for party member lookup") )
        __debugbreak();
      LODWORD(v11) = 0;
      goto LABEL_17;
    }
    v11 = *v8;
    if ( party->partyMembers[v11].team == team && party->partyMembers[v11].status >= 5u )
      break;
LABEL_13:
    ++v10;
    ++v8;
    if ( v10 >= 0xC8 )
      goto LABEL_14;
  }
  if ( slot != v9 )
  {
    ++v9;
    goto LABEL_13;
  }
  if ( (unsigned int)v11 >= 0xC8 )
  {
    LODWORD(v15) = 200;
    LODWORD(v14) = *v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 623, ASSERT_TYPE_SANITY, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
LABEL_17:
  v12 = (unsigned int)v11;
  if ( (PartyData *)((char *)party + v12 * 504) == (PartyData *)-2192i64 )
    XUID::NullXUID(result);
  else
    result->m_id = (unsigned __int64)party->partyMembers[v12].playerUID;
  return result;
}

/*
==============
PartyUI_IsMLGSpectator
==============
*/
PartyMember *PartyUI_IsMLGSpectator(PartyData *party, int slot)
{
  PartyMember *result; 

  result = PartyUI_GetMember(party, slot);
  if ( result )
    return (PartyMember *)(unsigned int)result->info.mlgSpectator;
  return result;
}

/*
==============
PartyUI_IsMatchStart
==============
*/
bool PartyUI_IsMatchStart(const PartyData *party)
{
  PartyUIState Status; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 500, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 501, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  Status = PartyUI_GetStatus(party);
  return Status == 20 || Status == MAX_INT;
}

/*
==============
PartyUI_IsStartingMatch
==============
*/
bool PartyUI_IsStartingMatch(const PartyData *party)
{
  PartyUIState Status; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 483, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 484, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( (Party_IsGameLobby(party) || Live_IsInSystemlinkLobby()) && party->areWeHost && party->gameStartRequested )
    return 1;
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 501, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  Status = PartyUI_GetStatus(party);
  return Status == 20 || Status == MAX_INT;
}

/*
==============
PartyUI_MemberNameWithClan
==============
*/
char *PartyUI_MemberNameWithClan(PartyMember *member)
{
  char *result; 

  if ( !member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 533, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  Com_PlayerUtils_ColorizeNameAndClanTag(member->info.gamertag, member->info.clanAbbrev, member->info.clanTagType, playerName_0, 0x2Fui64, 0x37u);
  result = playerName_0;
  playerName_0[46] = 0;
  return result;
}

/*
==============
PartyUI_MissingMapPackName
==============
*/
const char *PartyUI_MissingMapPackName()
{
  const dvar_t *v0; 
  PartyData *PartyData; 
  char ActiveGameMode; 
  const char *FirstMapForSource; 
  int mapPackIndex; 
  int playerSlot; 

  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    PartyData = Lobby_GetPartyData();
  else
    PartyData = &g_partyData;
  if ( !Party_PartyMembersMissingMapPack(PartyData, &playerSlot, &mapPackIndex) )
    return (char *)&queryFormat.fmt + 3;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  FirstMapForSource = Live_GetFirstMapForSource(mapPackIndex, ActiveGameMode == 3);
  return UI_GetMapDisplayNameReference(FirstMapForSource);
}

/*
==============
PartyUI_MissingMapPackPlayerName
==============
*/
const char *PartyUI_MissingMapPackPlayerName()
{
  const dvar_t *v0; 
  PartyData *PartyData; 
  __int64 v3; 
  __int64 v4; 
  int playerSlot; 
  int mapPackIndex; 

  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    PartyData = Lobby_GetPartyData();
  else
    PartyData = &g_partyData;
  if ( !Party_PartyMembersMissingMapPack(PartyData, &playerSlot, &mapPackIndex) )
    return (char *)&queryFormat.fmt + 3;
  if ( (unsigned int)playerSlot >= 0xC8 )
  {
    LODWORD(v4) = 200;
    LODWORD(v3) = playerSlot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( playerSlot ) < (unsigned)( 200 )", "playerSlot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( PartyData->partyMembers[playerSlot].status < 5u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 204, ASSERT_TYPE_ASSERT, "(party->partyMembers[playerSlot].status >= PARTYSTATUS_PRESENT)", (const char *)&queryFormat, "party->partyMembers[playerSlot].status >= PARTYSTATUS_PRESENT") )
    __debugbreak();
  return PartyUI_MemberNameWithClan(&PartyData->partyMembers[playerSlot]);
}

/*
==============
PartyUI_OpenMenu
==============
*/
void PartyUI_OpenMenu(const LocalClientNum_t localClientNum, PartyUIRoot menuId, const bool isExclusive)
{
  int v3; 
  int v4; 
  int ControllerFromClient; 

  v3 = isExclusive;
  v4 = (unsigned __int8)menuId;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  LUI_RestoreMenuById(ControllerFromClient, v4, 0, v3, LUI_luaVM);
}

/*
==============
PartyUI_RecoverFromError
==============
*/
void PartyUI_RecoverFromError(void)
{
  PartyData *PartyData; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  int ControllerFromClient; 
  LocalClientNum_t outLocalClientNum; 

  PartyData = Lobby_GetPartyData();
  Party_StopParty(PartyData);
  Party_StopParty(&g_partyData);
  Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch, 0);
  if ( Live_InAreaThatHasParties() )
  {
    v1 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
    {
      v2 = DVARBOOL_systemlink;
      if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( !v2->current.enabled )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        if ( CL_Mgr_IsControllerMappedToClient(ControllerFromClient, &outLocalClientNum) )
          CL_Main_StartPrivateParty(outLocalClientNum, ControllerFromClient);
      }
    }
  }
  LUI_CoD_OpenInitialMenu();
}

/*
==============
PartyUI_SetTeam
==============
*/
void PartyUI_SetTeam(PartyData *party, int localControllerIndex, team_t newTeam)
{
  const XUID *Xuid; 
  XUID result; 
  XUID player; 

  XUID::XUID(&player);
  Xuid = Live_GetXuid(&result, localControllerIndex);
  XUID::operator=(&player, Xuid);
  PartyHost_SetTeam(party, player, newTeam);
}

/*
==============
PartyUI_ShouldShowInviteWarning
==============
*/
bool PartyUI_ShouldShowInviteWarning(PartyData *party)
{
  int v3; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 725, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty )
    return 0;
  v3 = Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY);
  return v3 != Party_CountLocalMembers(party);
}

/*
==============
PartyUI_ShowTruePlayerInfo
==============
*/
int PartyUI_ShowTruePlayerInfo(PartyData *party, const int localControllerIndex, const int slot)
{
  unsigned int MemberIndexForSlot; 
  const XUID *Xuid; 
  XUID result; 
  XUID myXuid; 

  XUID::XUID(&myXuid);
  if ( !Live_IsSignedIn(localControllerIndex) )
    return 0;
  MemberIndexForSlot = PartyUI_GetMemberIndexForSlot(party, slot);
  Xuid = Live_GetXuid(&result, localControllerIndex);
  XUID::operator=(&myXuid, Xuid);
  return Party_IsMemberInfoVisible(party, myXuid, MemberIndexForSlot);
}

/*
==============
PartyUI_UpdatePartyDvars
==============
*/
void PartyUI_UpdatePartyDvars(const LocalClientNum_t localClientNum, const unsigned int index, const PartyData *party, XUID xuid)
{
  const dvar_t *v4; 
  bool enabled; 
  bool IsValid; 
  const dvar_t *v9; 
  bool v10; 
  bool v11; 
  int NumGameSlots; 
  int v13; 
  const dvar_t *v14; 
  int v15; 
  XUID player; 

  player.m_id = xuid.m_id;
  v4 = DVARBOOL_party_playervisible;
  if ( !DVARBOOL_party_playervisible && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_playervisible") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  enabled = v4->current.enabled;
  if ( enabled != XUID::IsValid(&player) )
  {
    IsValid = XUID::IsValid(&player);
    Dvar_SetBool_Internal(DVARBOOL_party_playervisible, IsValid);
  }
  v9 = DVARBOOL_party_IsLocalClientSelected;
  if ( !DVARBOOL_party_IsLocalClientSelected && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_IsLocalClientSelected") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.enabled;
  if ( v10 != Live_XUIDIsLocalPlayer(player) )
  {
    v11 = Live_XUIDIsLocalPlayer(player);
    Dvar_SetBool_Internal(DVARBOOL_party_IsLocalClientSelected, v11);
  }
  NumGameSlots = Party_GetNumGameSlots(party);
  v13 = Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY);
  if ( v13 >= NumGameSlots != ui_partyFull->current.enabled )
    Dvar_SetBool_Internal(ui_partyFull, v13 >= NumGameSlots);
  v14 = DVARINT_party_selectedIndex;
  if ( !DVARINT_party_selectedIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_selectedIndex") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( index != v14->current.integer )
  {
    Dvar_SetInt_Internal(DVARINT_party_selectedIndex, index);
    v15 = Sys_Milliseconds();
    Dvar_SetInt_Internal(DVARINT_party_selectedIndexChangedTime, v15);
  }
}

/*
==============
Party_GetMapVotePlaylistEntry
==============
*/
__int64 Party_GetMapVotePlaylistEntry(const PartyData *party, int entry)
{
  int v4; 

  if ( (unsigned int)entry >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 777, ASSERT_TYPE_ASSERT, "(unsigned)( entry ) < (unsigned)( NUM_MAP_VOTE_ENTRIES )", "entry doesn't index NUM_MAP_VOTE_ENTRIES\n\t%i not in [0, %i)", entry, 3) )
    __debugbreak();
  if ( !entry )
    return party->lastEntries[party->currentEntry];
  v4 = entry - 1;
  if ( !v4 )
    return party->alternateMap;
  if ( v4 != 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 788, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Illegal Map Vote. Defaulting to First") )
      __debugbreak();
    return party->lastEntries[party->currentEntry];
  }
  return party->randomMap;
}

/*
==============
Party_SetEntryADisplayMapName
==============
*/
void Party_SetEntryADisplayMapName(const char *rawmapname)
{
  if ( !rawmapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 796, ASSERT_TYPE_ASSERT, "(rawmapname)", (const char *)&queryFormat, "rawmapname") )
    __debugbreak();
  Party_SetMapVoteMapNameDVar(g_mapVoteInfo[0].partyMapnameDVar, rawmapname);
}

/*
==============
Party_SetEntryBDisplayMapName
==============
*/
void Party_SetEntryBDisplayMapName(const char *rawmapname)
{
  if ( !rawmapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 804, ASSERT_TYPE_ASSERT, "(rawmapname)", (const char *)&queryFormat, "rawmapname") )
    __debugbreak();
  Party_SetMapVoteMapNameDVar(g_mapVoteInfo[1].partyMapnameDVar, rawmapname);
}

/*
==============
Party_SetEntryCDisplayMapName
==============
*/
void Party_SetEntryCDisplayMapName(const char *rawmapname)
{
  if ( !rawmapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 811, ASSERT_TYPE_ASSERT, "(rawmapname)", (const char *)&queryFormat, "rawmapname") )
    __debugbreak();
  Party_SetMapVoteMapNameDVar(g_mapVoteInfo[2].partyMapnameDVar, rawmapname);
}

/*
==============
Party_SetMapVoteMapNameDVar
==============
*/
void Party_SetMapVoteMapNameDVar(const char *dvarname, const char *rawmapname)
{
  const char *MapDisplayName; 

  if ( !dvarname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 761, ASSERT_TYPE_ASSERT, "(dvarname)", (const char *)&queryFormat, "dvarname") )
    __debugbreak();
  if ( !rawmapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 762, ASSERT_TYPE_ASSERT, "(rawmapname)", (const char *)&queryFormat, "rawmapname") )
    __debugbreak();
  if ( *rawmapname )
    MapDisplayName = UI_GetMapDisplayName(rawmapname);
  else
    MapDisplayName = (char *)&queryFormat.fmt + 3;
  Dvar_SetStringByName(dvarname, MapDisplayName);
}

/*
==============
Party_SetUIPlayerCount
==============
*/

void __fastcall Party_SetUIPlayerCount(const PartyData *party, double _XMM1_8)
{
  int NumGameSlots; 
  int v5; 
  int v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  const char *HostName; 
  int StartingControllerIndex; 
  const char *v14; 
  int replaceInts[4]; 
  ConversionArguments arguments; 
  char _Buffer[48]; 
  char outputString[1024]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 694, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 695, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  NumGameSlots = Party_GetNumGameSlots(party);
  v5 = Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY);
  replaceInts[1] = NumGameSlots;
  v6 = v5;
  if ( v5 < 1 )
    v5 = 1;
  replaceInts[0] = v5;
  v7 = UI_SafeTranslateString("MENU/LOBBYPLAYERCOUNT");
  v8 = UI_ReplaceConversionInts(v7, 2, replaceInts);
  Dvar_SetString_Internal(DVARSTR_party_lobbyPlayerCount, v8);
  v9 = Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY);
  if ( v9 < 1 )
    v9 = 1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  *(&arguments.argCount + 1) = 0;
  arguments.args[2] = NULL;
  __asm
  {
    vmovdqu xmmword ptr [rsp+4D8h+arguments.args+18h], xmm0
    vmovdqu xmmword ptr [rsp+4D8h+arguments.args+28h], xmm1
    vmovdqu xmmword ptr [rsp+4D8h+arguments.args+38h], xmm0
  }
  j_sprintf(_Buffer, "%d", (unsigned int)v9);
  arguments.argCount = 2;
  arguments.args[0] = _Buffer;
  if ( v6 )
  {
    HostName = Party_GetHostName(party);
  }
  else
  {
    StartingControllerIndex = Party_GetStartingControllerIndex(party);
    HostName = Live_GetLocalClientName(StartingControllerIndex);
  }
  arguments.args[1] = HostName;
  v14 = UI_SafeTranslateString("MENU/PARTYPLAYERCOUNT");
  UI_ReplaceConversions(v14, &arguments, outputString, 0x400ui64);
  Dvar_SetString_Internal(DVARSTR_party_partyPlayerCount, outputString);
  Dvar_SetInt_Internal(DVARINT_party_partyPlayerCountNum, v9);
}

/*
==============
Party_SortDescending
==============
*/
void Party_SortDescending(PartyData *party, unsigned int *indices, int maxCount)
{
  unsigned int *v5; 
  unsigned int *v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int IsMemberUIVisible; 
  int IsMemberPresent; 
  PartyMember *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int *v20; 

  if ( maxCount > 1i64 )
  {
    v5 = indices + 1;
    v6 = indices + 1;
    v7 = 0i64;
    v8 = maxCount - 1i64;
    v19 = v8;
    v18 = 0i64;
    v20 = indices + 1;
    do
    {
      v9 = *v6;
      v10 = v7;
      if ( v7 >= 0 )
      {
        v11 = (int)*v6;
        do
        {
          v12 = (int)indices[v10];
          if ( (unsigned int)v12 >= 0xC8 )
          {
            LODWORD(v17) = 200;
            LODWORD(v16) = indices[v10];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 69, ASSERT_TYPE_ASSERT, "(unsigned)( i1 ) < (unsigned)( 200 )", "i1 doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          if ( v9 >= 0xC8 )
          {
            LODWORD(v17) = 200;
            LODWORD(v16) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyui.cpp", 70, ASSERT_TYPE_ASSERT, "(unsigned)( i2 ) < (unsigned)( 200 )", "i2 doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          IsMemberUIVisible = Party_IsMemberUIVisible(party, v12);
          IsMemberPresent = Party_IsMemberUIVisible(party, v9);
          if ( IsMemberUIVisible == IsMemberPresent )
          {
            v15 = &party->partyMembers[v12];
            IsMemberUIVisible = Party_IsMemberPresent(v15);
            IsMemberPresent = Party_IsMemberPresent(&party->partyMembers[v11]);
            if ( IsMemberUIVisible == IsMemberPresent )
            {
              IsMemberPresent = party->partyMembers[v11].score;
              IsMemberUIVisible = v15->score;
            }
            v5 = indices + 1;
          }
          if ( IsMemberUIVisible - IsMemberPresent >= 0 )
            break;
          v5[v10] = indices[v10];
          --v10;
        }
        while ( v10 >= 0 );
        v7 = v18;
        v6 = v20;
        v8 = v19;
      }
      ++v6;
      indices[v10 + 1] = v9;
      ++v7;
      v20 = v6;
      --v8;
      v18 = v7;
      v19 = v8;
    }
    while ( v8 );
  }
}

