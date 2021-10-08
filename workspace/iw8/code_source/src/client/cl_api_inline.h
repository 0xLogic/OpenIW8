/*
==============
CL_Main_AddReliableCommand
==============
*/

void __fastcall CL_Main_AddReliableCommand(LocalClientNum_t localClientNum, const char *cmd)
{
  ?CL_Main_AddReliableCommand@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, cmd);
}

/*
==============
CL_Main_AddReliableCommand
==============
*/
void CL_Main_AddReliableCommand(LocalClientNum_t localClientNum, const char *cmd)
{
  __int64 v2; 
  ClConnection *ClientConnection; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( !ClConnection::ms_connections[v2] )
  {
    if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
      __debugbreak();
    if ( !ClConnection::ms_connections[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 14, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
      __debugbreak();
  }
  if ( !CL_Demo_IsPlayingServer((LocalClientNum_t)v2) )
  {
    ClientConnection = ClConnection::GetClientConnection((const LocalClientNum_t)v2);
    ClientConnection->AddReliableCommand(ClientConnection, cmd);
  }
}

