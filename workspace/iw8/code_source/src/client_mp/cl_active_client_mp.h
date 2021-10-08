/*
==============
ClActiveClientMP::GetClientMP
==============
*/

ClActiveClientMP *__fastcall ClActiveClientMP::GetClientMP(const LocalClientNum_t localClientNum)
{
  return ?GetClientMP@ClActiveClientMP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClActiveClientMP::GetPlayerState
==============
*/

const playerState_s *__fastcall ClActiveClientMP::GetPlayerState(ClActiveClientMP *this)
{
  return ?GetPlayerState@ClActiveClientMP@@UEBAPEBUplayerState_s@@XZ(this);
}

/*
==============
ClActiveClientMP::GetPlayerState
==============
*/

playerState_s *__fastcall ClActiveClientMP::GetPlayerState(ClActiveClientMP *this)
{
  return ?GetPlayerState@ClActiveClientMP@@UEAAPEAUplayerState_s@@XZ(this);
}

/*
==============
ClActiveClientMP::GetClientMP
==============
*/
ClActiveClient *ClActiveClientMP::GetClientMP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  ClActiveClient **v3; 
  float v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  v2 = ClActiveClient::ms_activeClients[v1] == NULL;
  v3 = &ClActiveClient::ms_activeClients[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  return *v3;
}

/*
==============
ClActiveClientMP::GetPlayerState
==============
*/
ClSnapshot *ClActiveClientMP::GetPlayerState(ClActiveClientMP *this)
{
  return &this->snap;
}

/*
==============
ClActiveClientMP::GetPlayerState
==============
*/
ClSnapshot *ClActiveClientMP::GetPlayerState(ClActiveClientMP *this)
{
  return &this->snap;
}

