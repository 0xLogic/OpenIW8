/*
==============
ClConnection::GetClientConnection
==============
*/

ClConnection *__fastcall ClConnection::GetClientConnection(const LocalClientNum_t localClientNum)
{
  return ?GetClientConnection@ClConnection@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClConnection::HasClientConnection
==============
*/

bool __fastcall ClConnection::HasClientConnection(const LocalClientNum_t localClientNum)
{
  return ?HasClientConnection@ClConnection@@SA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClConnection::GetClientConnection
==============
*/
ClConnection *ClConnection::GetClientConnection(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  ClConnection **v3; 
  float v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
    __debugbreak();
  v2 = ClConnection::ms_connections[v1] == NULL;
  v3 = &ClConnection::ms_connections[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  return *v3;
}

/*
==============
ClConnection::HasClientConnection
==============
*/
bool ClConnection::HasClientConnection(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  ClConnection **v3; 
  int v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  v2 = ClConnection::ms_connections[v1] == NULL;
  v3 = &ClConnection::ms_connections[v1];
  if ( v2 )
  {
    if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
      __debugbreak();
    v2 = *v3 == NULL;
  }
  return !v2;
}

