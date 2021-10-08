/*
==============
ClActiveClientSP::GetPlayerState
==============
*/

playerState_s *__fastcall ClActiveClientSP::GetPlayerState(ClActiveClientSP *this)
{
  return ?GetPlayerState@ClActiveClientSP@@UEAAPEAUplayerState_s@@XZ(this);
}

/*
==============
ClActiveClientSP::GetClientSP
==============
*/

ClActiveClientSP *__fastcall ClActiveClientSP::GetClientSP(const LocalClientNum_t localClientNum)
{
  return ?GetClientSP@ClActiveClientSP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClActiveClientSP::GetPlayerState
==============
*/

const playerState_s *__fastcall ClActiveClientSP::GetPlayerState(ClActiveClientSP *this)
{
  return ?GetPlayerState@ClActiveClientSP@@UEBAPEBUplayerState_s@@XZ(this);
}

/*
==============
ClActiveClientSP::GetPlayerState
==============
*/
playerState_s *ClActiveClientSP::GetPlayerState(ClActiveClientSP *this)
{
  return &this->ps;
}

/*
==============
ClActiveClientSP::GetPlayerState
==============
*/
playerState_s *ClActiveClientSP::GetPlayerState(ClActiveClientSP *this)
{
  return &this->ps;
}

/*
==============
ClActiveClientSP::GetClientSP
==============
*/
ClActiveClient *ClActiveClientSP::GetClientSP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  ClActiveClient **v3; 
  float v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( (_BYTE)ClActiveClient::ms_activeClientType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 84, ASSERT_TYPE_ASSERT, "(ms_activeClientType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeClientType == GameModeType::SP") )
    __debugbreak();
  v2 = ClActiveClient::ms_activeClients[v1] == NULL;
  v3 = &ClActiveClient::ms_activeClients[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 85, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  return *v3;
}

