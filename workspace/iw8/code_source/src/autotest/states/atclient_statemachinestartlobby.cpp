/*
==============
ATClient_StateMachineStartLobbyTransition
==============
*/

bool __fastcall ATClient_StateMachineStartLobbyTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineStartLobbyTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineStartLobbyUpdate
==============
*/

void __fastcall ATClient_StateMachineStartLobbyUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineStartLobbyUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineStartLobbyTransition
==============
*/
char ATClient_StateMachineStartLobbyTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  const PartyData *PartyData; 

  *outNewState = -2;
  PartyData = Lobby_GetPartyData();
  if ( !Party_IsRunning(PartyData) )
    return 0;
  *outNewState = 3;
  return 1;
}

/*
==============
ATClient_StateMachineStartLobbyUpdate
==============
*/
void ATClient_StateMachineStartLobbyUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  int Int_Internal_DebugName; 
  int PlaylistNumForId; 
  int ControllerFromClient; 

  if ( !Lobby_GetPartyData()->inParty )
  {
    if ( g_partyData.inParty )
      goto LABEL_6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinestartlobby.cpp", 35, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
      __debugbreak();
    if ( g_partyData.inParty )
    {
LABEL_6:
      s_retryDelayRemaining -= msec;
      if ( s_retryDelayRemaining <= 0 )
      {
        s_retryDelayRemaining = 3000;
        if ( Playlist_GetPlaylistCount() <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinestartlobby.cpp", 46, ASSERT_TYPE_ASSERT, "(Playlist_GetPlaylistCount() > 0)", (const char *)&queryFormat, "Playlist_GetPlaylistCount() > 0") )
          __debugbreak();
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ATClient_PlaylistId, "ATClient_PlaylistId");
        PlaylistNumForId = Playlist_GetPlaylistNumForId(Int_Internal_DebugName);
        Dvar_SetInt_Internal(DVARINT_playlist, PlaylistNumForId);
        Dvar_SetInt_Internal(DVARINT_playlistID, Int_Internal_DebugName);
        ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
        Cbuf_ExecuteBufferInternal(localClientNum, ControllerFromClient, "xstartlobby", 0, 0);
        Com_Printf(14, "STM StartLobbyUpdate - xstartlobby ");
      }
    }
  }
}

