/*
==============
ClConnectionSP::GetClientConnectionData
==============
*/

ClConnectionDataSP *__fastcall ClConnectionSP::GetClientConnectionData(const LocalClientNum_t localClientNum)
{
  return ?GetClientConnectionData@ClConnectionSP@@SAPEAUClConnectionDataSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClConnectionSP::GetClientConnectionData
==============
*/
ClConnection *ClConnectionSP::GetClientConnectionData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  ClConnection **v3; 
  float v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 49, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( (_BYTE)ClConnection::ms_activeConnectionType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 50, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeConnectionType == GameModeType::SP") )
    __debugbreak();
  v2 = ClConnection::ms_connections[v1] == NULL;
  v3 = &ClConnection::ms_connections[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 51, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  return *v3 + 1;
}

