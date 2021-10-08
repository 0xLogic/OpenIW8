/*
==============
GetLobbyMemberXuid
==============
*/

XUID *__fastcall GetLobbyMemberXuid(XUID *result, LocalClientNum_t localClientNum, int slot)
{
  return ?GetLobbyMemberXuid@@YA?AUXUID@@W4LocalClientNum_t@@H@Z(result, localClientNum, slot);
}

/*
==============
GetPartyMemberCount
==============
*/

int __fastcall GetPartyMemberCount()
{
  return ?GetPartyMemberCount@@YAHXZ();
}

/*
==============
GetLobbyMemberCount
==============
*/

int __fastcall GetLobbyMemberCount()
{
  return ?GetLobbyMemberCount@@YAHXZ();
}

/*
==============
GetLobbyMemberCount
==============
*/
unsigned int GetLobbyMemberCount()
{
  const PartyData *PartyData; 

  PartyData = Lobby_GetPartyData();
  return Party_CountUIVisibleMembers(PartyData);
}

/*
==============
GetLobbyMemberXuid
==============
*/
XUID *GetLobbyMemberXuid(XUID *result, LocalClientNum_t localClientNum, int slot)
{
  int ControllerFromClient; 
  PartyData *PartyData; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  PartyData = Lobby_GetPartyData();
  PartyUI_GetMemberXuid(result, PartyData, ControllerFromClient, slot);
  return result;
}

/*
==============
GetPartyMemberCount
==============
*/
unsigned int GetPartyMemberCount()
{
  return Party_CountUIVisibleMembers(&g_partyData);
}

