/*
==============
ClConnectionMP::GetConnectionDataMP
==============
*/

const ClConnectionDataMP *__fastcall ClConnectionMP::GetConnectionDataMP(ClConnectionMP *this)
{
  return ?GetConnectionDataMP@ClConnectionMP@@QEBAPEBUClConnectionDataMP@@XZ(this);
}

/*
==============
ClConnectionMP::GetClientConnectionMP
==============
*/

ClConnectionMP *__fastcall ClConnectionMP::GetClientConnectionMP(const LocalClientNum_t localClientNum)
{
  return ?GetClientConnectionMP@ClConnectionMP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClConnectionMP::GetClientConnectionData
==============
*/

ClConnectionDataMP *__fastcall ClConnectionMP::GetClientConnectionData(const LocalClientNum_t localClientNum)
{
  return ?GetClientConnectionData@ClConnectionMP@@SAPEAUClConnectionDataMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClConnectionMP::GetPacketBackup
==============
*/

bool __fastcall ClConnectionMP::GetPacketBackup(ClConnectionMP *this, const int sequence, ClOutPacketMP *const outPacket)
{
  return ?GetPacketBackup@ClConnectionMP@@QEBA_NHQEAUClOutPacketMP@@@Z(this, sequence, outPacket);
}

/*
==============
ClConnectionMP::GetConnectionDataMP
==============
*/

ClConnectionDataMP *__fastcall ClConnectionMP::GetConnectionDataMP(ClConnectionMP *this)
{
  return ?GetConnectionDataMP@ClConnectionMP@@QEAAPEAUClConnectionDataMP@@XZ(this);
}

/*
==============
ClConnectionMP::GetPacketBackupCount
==============
*/

int __fastcall ClConnectionMP::GetPacketBackupCount(ClConnectionMP *this)
{
  return ?GetPacketBackupCount@ClConnectionMP@@QEBAHXZ(this);
}

/*
==============
ClConnectionMP::GetClientConnectionMP
==============
*/
ClConnection *ClConnectionMP::GetClientConnectionMP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  ClConnection **v3; 
  float v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 149, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  v2 = ClConnection::ms_connections[v1] == NULL;
  v3 = &ClConnection::ms_connections[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 150, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  return *v3;
}

/*
==============
ClConnectionMP::GetConnectionDataMP
==============
*/
ClConnectionDataMP *ClConnectionMP::GetConnectionDataMP(ClConnectionMP *this)
{
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 157, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  return &this->m_connectionData;
}

/*
==============
ClConnectionMP::GetClientConnectionData
==============
*/
ClConnection *ClConnectionMP::GetClientConnectionData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  ClConnection **v3; 
  float v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 138, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 139, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  v2 = ClConnection::ms_connections[v1] == NULL;
  v3 = &ClConnection::ms_connections[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 140, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  return *v3 + 1;
}

/*
==============
ClConnectionMP::GetPacketBackupCount
==============
*/
__int64 ClConnectionMP::GetPacketBackupCount(ClConnectionMP *this)
{
  __int64 result; 

  result = (unsigned int)this->m_packetBackupCount;
  if ( (int)result <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", this->m_packetBackupCount, 0i64) )
      __debugbreak();
    return (unsigned int)this->m_packetBackupCount;
  }
  return result;
}

/*
==============
ClConnectionMP::GetConnectionDataMP
==============
*/
ClConnectionDataMP *ClConnectionMP::GetConnectionDataMP(ClConnectionMP *this)
{
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 164, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  return &this->m_connectionData;
}

/*
==============
ClConnectionMP::GetPacketBackup
==============
*/
char ClConnectionMP::GetPacketBackup(ClConnectionMP *this, const int sequence, ClOutPacketMP *const outPacket)
{
  ClOutPacketMP *v6; 
  __int64 v8; 

  if ( sequence < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 178, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "%s >= %s\n\t%i, %i", "sequence", "0", sequence, 0i64) )
    __debugbreak();
  if ( this->m_packetBackupCount <= 0 )
  {
    LODWORD(v8) = this->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 179, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", v8, 0i64) )
      __debugbreak();
  }
  if ( !this->m_packetBackupData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 180, ASSERT_TYPE_ASSERT, "(m_packetBackupData != nullptr)", (const char *)&queryFormat, "m_packetBackupData != nullptr") )
    __debugbreak();
  v6 = &this->m_packetBackupData[sequence % this->m_packetBackupCount];
  if ( v6->p_packetSeq != sequence )
    return 0;
  *outPacket = *(ClOutPacketMP *const)v6;
  return 1;
}

