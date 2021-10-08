/*
==============
ClConnectionSP::AllocateClientConnections
==============
*/

void __fastcall ClConnectionSP::AllocateClientConnections(HunkUser *hunkUser, const int maxLocalClients)
{
  ?AllocateClientConnections@ClConnectionSP@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
ClConnectionSP::ConnectedPacketEvent
==============
*/

bool __fastcall ClConnectionSP::ConnectedPacketEvent(ClConnectionSP *this, netadr_t *from, msg_t *msg, int time)
{
  return ?ConnectedPacketEvent@ClConnectionSP@@UEAA_NUnetadr_t@@PEAUmsg_t@@H@Z(this, from, msg, time);
}

/*
==============
ClConnectionSP::AddReliableBinaryCommand
==============
*/

void __fastcall ClConnectionSP::AddReliableBinaryCommand(ClConnectionSP *this, const unsigned __int8 *cmd, const int cmdSize)
{
  ?AddReliableBinaryCommand@ClConnectionSP@@UEAAXPEBEH@Z(this, cmd, cmdSize);
}

/*
==============
ClConnectionSP::HandleReliableOverflow
==============
*/

void __fastcall ClConnectionSP::HandleReliableOverflow(ClConnectionSP *this)
{
  ?HandleReliableOverflow@ClConnectionSP@@AEAAXXZ(this);
}

/*
==============
ClConnectionSP::ConnectionLessPacketProfile
==============
*/

void __fastcall ClConnectionSP::ConnectionLessPacketProfile(ClConnectionSP *this, int iLength)
{
  ?ConnectionLessPacketProfile@ClConnectionSP@@UEAAXH@Z(this, iLength);
}

/*
==============
ClConnectionSP::ClConnectionSP
==============
*/

void __fastcall ClConnectionSP::ClConnectionSP(ClConnectionSP *this, const LocalClientNum_t localClientNum)
{
  ??0ClConnectionSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClConnectionSP::FreeClientConnections
==============
*/

void ClConnectionSP::FreeClientConnections(void)
{
  ?FreeClientConnections@ClConnectionSP@@SAXXZ();
}

/*
==============
ClConnectionSP::AddReliableCommand
==============
*/

void __fastcall ClConnectionSP::AddReliableCommand(ClConnectionSP *this, const char *cmd)
{
  ?AddReliableCommand@ClConnectionSP@@UEAAXPEBD@Z(this, cmd);
}

/*
==============
ClConnectionSP::GetConnectionData
==============
*/

ClConnectionData *__fastcall ClConnectionSP::GetConnectionData(ClConnectionSP *this)
{
  return ?GetConnectionData@ClConnectionSP@@UEAAPEAUClConnectionData@@XZ(this);
}

/*
==============
ClConnectionSP::ClearClientConnection
==============
*/

void __fastcall ClConnectionSP::ClearClientConnection(const LocalClientNum_t localClientNum)
{
  ?ClearClientConnection@ClConnectionSP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClConnectionSP::ClConnectionSP
==============
*/
void ClConnectionSP::ClConnectionSP(ClConnectionSP *this, const LocalClientNum_t localClientNum)
{
  ClConnection::ClConnection(this, localClientNum);
  this->__vftable = (ClConnectionSP_vtbl *)&ClConnectionSP::`vftable';
  this->m_connectionData.clientReliableCommands.TYPE_NOT_SPECIFIED = -1;
  this->m_connectionData.clientReliableCommands.m_bufferNextIndex = 0;
  memset_0(&this->m_connectionData, 0, sizeof(this->m_connectionData));
}

/*
==============
ClConnectionSP::AddReliableBinaryCommand
==============
*/
void ClConnectionSP::AddReliableBinaryCommand(ClConnectionSP *this, const unsigned __int8 *cmd, const int cmdSize)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 165, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ClConnectionSP::AddReliableBinaryCommand not supported") )
    __debugbreak();
}

/*
==============
ClConnectionSP::AddReliableCommand
==============
*/
void ClConnectionSP::AddReliableCommand(ClConnectionSP *this, const char *cmd)
{
  int reliableSequence; 
  int v5; 
  __int64 v6; 
  int v7; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 105, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !*cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 106, ASSERT_TYPE_ASSERT, "(cmd[0])", (const char *)&queryFormat, "cmd[0]") )
    __debugbreak();
  if ( !SV_IsDemoPlaying() && SV_Loaded() && !this->m_connectionData.reliableOverflow )
  {
    Sys_EnterCriticalSection(CRITSECT_CLIENT_CMD);
    reliableSequence = this->m_connectionData.reliableSequence;
    if ( reliableSequence - this->m_connectionData.reliableAcknowledge > 128 )
    {
      ClConnectionSP::HandleReliableOverflow(this);
      reliableSequence = this->m_connectionData.reliableSequence;
    }
    v5 = reliableSequence + 1;
    v6 = -1i64;
    this->m_connectionData.reliableSequence = v5;
    v7 = v5 & 0x7F;
    while ( cmd[++v6] != 0 )
      ;
    CircularEntryBuffer<128,131072,int,0>::SetDataAndType(&this->m_connectionData.clientReliableCommands, v7, (const unsigned __int8 *)cmd, v6 + 1, this->m_connectionData.clientReliableCommands.TYPE_NOT_SPECIFIED);
    if ( this->m_connectionData.clientReliableCommands.m_bufferNextIndex - this->m_connectionData.clientReliableCommands.m_entries[((unsigned __int8)this->m_connectionData.reliableAcknowledge + 1) & 0x7F].offset > 0x20000 || !this->m_connectionData.clientReliableCommands.m_entries[((unsigned __int8)this->m_connectionData.reliableAcknowledge + 1) & 0x7F].size )
      ClConnectionSP::HandleReliableOverflow(this);
    Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
  }
}

/*
==============
ClConnectionSP::AllocateClientConnections
==============
*/
void ClConnectionSP::AllocateClientConnections(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  ClConnection *v5; 
  ClConnection **v6; 
  __int64 v7; 
  int v8; 

  v3 = maxLocalClients;
  if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 24, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType == GameModeType::NONE") )
    __debugbreak();
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v8 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 25, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v8) )
      __debugbreak();
  }
  v5 = (ClConnection *)Mem_HunkUser_AllocInternal(hunkUser, 140864 * v3, 8ui64, "ClConnectionSP::AllocateClientConnections");
  if ( (int)v3 > 0 )
  {
    v6 = ClConnection::ms_connections;
    do
    {
      ClConnection::ClConnection(v5, (const LocalClientNum_t)v4);
      v5->__vftable = (ClConnection_vtbl *)&ClConnectionSP::`vftable';
      BYTE4(v5[2].__vftable) = -1;
      memset_0(&v5[1], 0, 0x2262Cui64);
      *v6++ = v5;
      v5 += 8804;
      ++v4;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(ClConnection::ms_activeConnectionType) = 1;
}

/*
==============
ClConnectionSP::ClearClientConnection
==============
*/
void ClConnectionSP::ClearClientConnection(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClConnection *v2; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 63, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v4 = cl_maxLocalClients;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 64, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cl_maxLocalClients )", "localClientNum doesn't index cl_maxLocalClients\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( (_BYTE)ClConnection::ms_activeConnectionType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 65, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeConnectionType == GameModeType::SP") )
    __debugbreak();
  v2 = ClConnection::ms_connections[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 68, ASSERT_TYPE_ASSERT, "(connectionBuffer)", (const char *)&queryFormat, "connectionBuffer") )
    __debugbreak();
  ((void (__fastcall *)(ClConnection *, _QWORD))v2->~ClConnection)(v2, 0i64);
  ClConnection::ClConnection(v2, (const LocalClientNum_t)v1);
  v2->__vftable = (ClConnection_vtbl *)&ClConnectionSP::`vftable';
  v2[8258].m_localClientNum = LOCAL_CLIENT_0;
  memset_0(&v2[1], 0, 0x2262Cui64);
  ClConnection::ms_connections[v1] = v2;
}

/*
==============
ClConnectionSP::ConnectedPacketEvent
==============
*/
bool ClConnectionSP::ConnectedPacketEvent(ClConnectionSP *this, netadr_t *from, msg_t *msg, int time)
{
  return 0;
}

/*
==============
ClConnectionSP::ConnectionLessPacketProfile
==============
*/
void ClConnectionSP::ConnectionLessPacketProfile(ClConnectionSP *this, int iLength)
{
  ;
}

/*
==============
ClConnectionSP::FreeClientConnections
==============
*/
void ClConnectionSP::FreeClientConnections(void)
{
  int v0; 
  void **v1; 

  if ( (_BYTE)ClConnection::ms_activeConnectionType == HALF )
  {
    v0 = LODWORD(cl_maxLocalClients) - 1;
    if ( LODWORD(cl_maxLocalClients) - 1 < 0 )
    {
      LOBYTE(ClConnection::ms_activeConnectionType) = 0;
    }
    else
    {
      v1 = (void **)&ClConnection::ms_connections[v0];
      do
      {
        (**(void (__fastcall ***)(void *, _QWORD))*v1)(*v1, 0i64);
        DebugWipe(*v1, 0x22640ui64);
        --v0;
        *v1-- = NULL;
      }
      while ( v0 >= 0 );
      LOBYTE(ClConnection::ms_activeConnectionType) = 0;
    }
  }
  else
  {
    LOBYTE(ClConnection::ms_activeConnectionType) = 0;
  }
}

/*
==============
ClConnectionSP::GetConnectionData
==============
*/
ClConnectionDataSP *ClConnectionSP::GetConnectionData(ClConnectionSP *this)
{
  return &this->m_connectionData;
}

/*
==============
ClConnectionSP::HandleReliableOverflow
==============
*/
void ClConnectionSP::HandleReliableOverflow(ClConnectionSP *this)
{
  if ( this->m_connectionData.reliableOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.cpp", 87, ASSERT_TYPE_ASSERT, "(!clcData->reliableOverflow)", (const char *)&queryFormat, "!clcData->reliableOverflow") )
    __debugbreak();
  this->m_connectionData.reliableOverflow = 1;
  ClConnection::DumpReliableCommands(this, &this->m_connectionData);
  Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144211E88);
}

