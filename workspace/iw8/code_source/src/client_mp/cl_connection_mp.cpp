/*
==============
ClConnectionMP::ClConnectionMP
==============
*/

void __fastcall ClConnectionMP::ClConnectionMP(ClConnectionMP *this, const LocalClientNum_t localClientNum, ClOutPacketMP *const packetBackupData, const int packetBackupCount)
{
  ??0ClConnectionMP@@QEAA@W4LocalClientNum_t@@QEAUClOutPacketMP@@H@Z(this, localClientNum, packetBackupData, packetBackupCount);
}

/*
==============
ClConnectionMP::ClearClientConnection
==============
*/

void __fastcall ClConnectionMP::ClearClientConnection(const LocalClientNum_t localClientNum)
{
  ?ClearClientConnection@ClConnectionMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClConnectionMP::AllocateClientConnections
==============
*/

void __fastcall ClConnectionMP::AllocateClientConnections(HunkUser *hunkUser, const int maxLocalClients, const int packetBackupCount)
{
  ?AllocateClientConnections@ClConnectionMP@@SAXPEAUHunkUser@@HH@Z(hunkUser, maxLocalClients, packetBackupCount);
}

/*
==============
ClConnectionMP::AddReliableBinaryCommand
==============
*/

void __fastcall ClConnectionMP::AddReliableBinaryCommand(ClConnectionMP *this, const unsigned __int8 *cmd, const int cmdSize)
{
  ?AddReliableBinaryCommand@ClConnectionMP@@UEAAXPEBEH@Z(this, cmd, cmdSize);
}

/*
==============
ClConnectionMP::AddReliableCommand
==============
*/

void __fastcall ClConnectionMP::AddReliableCommand(ClConnectionMP *this, const char *cmd)
{
  ?AddReliableCommand@ClConnectionMP@@UEAAXPEBD@Z(this, cmd);
}

/*
==============
ClConnectionMP::FreeClientConnections
==============
*/

void ClConnectionMP::FreeClientConnections(void)
{
  ?FreeClientConnections@ClConnectionMP@@SAXXZ();
}

/*
==============
ClConnectionMP::AddReliableCommandInternal
==============
*/

void __fastcall ClConnectionMP::AddReliableCommandInternal(ClConnectionMP *this, const unsigned __int8 *commandBuffer, const int reliableCmdSize, const ReliableCommandType type)
{
  ?AddReliableCommandInternal@ClConnectionMP@@AEAAXPEBEHW4ReliableCommandType@@@Z(this, commandBuffer, reliableCmdSize, type);
}

/*
==============
ClConnectionMP::ConnectedPacketEvent
==============
*/

bool __fastcall ClConnectionMP::ConnectedPacketEvent(ClConnectionMP *this, netadr_t *from, msg_t *msg, int time)
{
  return ?ConnectedPacketEvent@ClConnectionMP@@UEAA_NUnetadr_t@@PEAUmsg_t@@H@Z(this, from, msg, time);
}

/*
==============
ClConnectionMP::GetConnectionData
==============
*/

ClConnectionData *__fastcall ClConnectionMP::GetConnectionData(ClConnectionMP *this)
{
  return ?GetConnectionData@ClConnectionMP@@UEAAPEAUClConnectionData@@XZ(this);
}

/*
==============
ClConnectionMP::ConnectionLessPacketProfile
==============
*/

void __fastcall ClConnectionMP::ConnectionLessPacketProfile(ClConnectionMP *this, int iLength)
{
  ?ConnectionLessPacketProfile@ClConnectionMP@@UEAAXH@Z(this, iLength);
}

/*
==============
ClConnectionMP::ClConnectionMP
==============
*/
void ClConnectionMP::ClConnectionMP(ClConnectionMP *this, const LocalClientNum_t localClientNum, ClOutPacketMP *const packetBackupData, const int packetBackupCount)
{
  __int64 v7; 
  DLogTDigest<20,8> *m_digests; 
  __int64 v9; 
  NetchanTelemetry::Stat *m_stats; 

  ClConnection::ClConnection(this, localClientNum);
  this->__vftable = (ClConnectionMP_vtbl *)&ClConnectionMP::`vftable';
  this->m_connectionData.clientReliableCommands.TYPE_NOT_SPECIFIED = -1;
  this->m_connectionData.clientReliableCommands.m_bufferNextIndex = 0;
  NetConnection::NetConnection(&this->m_connectionData.serverConnection);
  v7 = 6i64;
  m_digests = this->m_connectionData.netperfTelemetry.m_digests;
  do
  {
    DLogTDigest<20,8>::DLogTDigest<20,8>(m_digests++);
    --v7;
  }
  while ( v7 );
  this->m_connectionData.netperfTelemetry.m_frameTimer.m_ticks = 0i64;
  this->m_connectionData.netperfTelemetry.m_frameTimer.m_started = 0;
  this->m_connectionData.netperfTelemetry.m_usercmdTimer.m_ticks = 0i64;
  this->m_connectionData.netperfTelemetry.m_usercmdTimer.m_started = 0;
  this->m_connectionData.serverReliableCommands.TYPE_NOT_SPECIFIED = -1;
  this->m_connectionData.serverReliableCommands.m_bufferNextIndex = 0;
  v9 = 11i64;
  m_stats = this->m_connectionData.netchan.clientTelemetry.m_stats;
  do
  {
    NetchanTelemetry::Stat::Stat(m_stats++);
    --v9;
  }
  while ( v9 );
  this->m_connectionData.netchan.clientTelemetry.m_lastPacketTx.m_ticks = 0i64;
  this->m_connectionData.netchan.clientTelemetry.m_lastPacketTx.m_started = 0;
  this->m_connectionData.netchan.clientTelemetry.m_lastPacketRx.m_ticks = 0i64;
  this->m_connectionData.netchan.clientTelemetry.m_lastPacketRx.m_started = 0;
  this->m_connectionData.netchan.clientTelemetry.m_lastMessageTx.m_ticks = 0i64;
  this->m_connectionData.netchan.clientTelemetry.m_lastMessageTx.m_started = 0;
  this->m_connectionData.netchan.clientTelemetry.m_lastMessageRx.m_ticks = 0i64;
  this->m_connectionData.netchan.clientTelemetry.m_lastMessageRx.m_started = 0;
  this->m_packetBackupData = packetBackupData;
  this->m_packetBackupCount = packetBackupCount;
  if ( !packetBackupData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 18, ASSERT_TYPE_ASSERT, "(m_packetBackupData != nullptr)", (const char *)&queryFormat, "m_packetBackupData != nullptr") )
    __debugbreak();
  if ( this->m_packetBackupCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 19, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", this->m_packetBackupCount, 0i64) )
    __debugbreak();
  memset_0(&this->m_connectionData, 0, sizeof(this->m_connectionData));
  memset_0(this->m_packetBackupData, 0, 16i64 * this->m_packetBackupCount);
  ClNetperfTelemetry::Reset(&this->m_connectionData.netperfTelemetry, this);
}

/*
==============
ClConnectionMP::AddReliableBinaryCommand
==============
*/
void ClConnectionMP::AddReliableBinaryCommand(ClConnectionMP *this, const unsigned __int8 *cmd, const int cmdSize)
{
  msg_t buf; 
  unsigned __int8 data[1024]; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 168, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( cmdSize > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 169, ASSERT_TYPE_ASSERT, "(cmdSize <= 1024)", (const char *)&queryFormat, "cmdSize <= MAX_RELIABLE_COMMAND_LENGTH") )
    __debugbreak();
  memset_0(data, 0, 0x3FCui64);
  MSG_Init(&buf, data, 1020);
  MSG_WriteByte(&buf, 89i64);
  MSG_WriteByte(&buf, 0i64);
  MSG_WriteShort(&buf, cmdSize);
  if ( buf.cursize != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 180, ASSERT_TYPE_ASSERT, "(commandMessage.cursize == (2 + sizeof( ushort )))", "%s\n\tChange BINARY_RELIABLE_COMMAND_OVERHEAD if this assert hits.", "commandMessage.cursize == BINARY_RELIABLE_COMMAND_OVERHEAD") )
    __debugbreak();
  Com_Printf(14, "%s: Sending binary cmd to server with size %i\n", "ClConnectionMP::AddReliableBinaryCommand", (unsigned int)cmdSize);
  MSG_WriteData(&buf, cmd, cmdSize);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 185, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &commandMessage ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &commandMessage )") )
    __debugbreak();
  ClConnectionMP::AddReliableCommandInternal(this, buf.data, buf.cursize, COMMAND_BINARY);
}

/*
==============
ClConnectionMP::AddReliableCommand
==============
*/
void ClConnectionMP::AddReliableCommand(ClConnectionMP *this, const char *cmd)
{
  int v4; 
  char pszBuffer[1024]; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 157, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !*cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 158, ASSERT_TYPE_ASSERT, "(cmd[0])", (const char *)&queryFormat, "cmd[0]") )
    __debugbreak();
  v4 = MSG_WriteReliableCommandToBuffer(cmd, pszBuffer, 0x400u);
  ClConnectionMP::AddReliableCommandInternal(this, (const unsigned __int8 *)pszBuffer, v4, COMMAND_STRING);
}

/*
==============
ClConnectionMP::AddReliableCommandInternal
==============
*/
void ClConnectionMP::AddReliableCommandInternal(ClConnectionMP *this, const unsigned __int8 *commandBuffer, const int reliableCmdSize, const ReliableCommandType type)
{
  int reliableSequence; 
  int v9; 

  if ( !commandBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 105, ASSERT_TYPE_ASSERT, "(commandBuffer)", (const char *)&queryFormat, "commandBuffer") )
    __debugbreak();
  if ( !this->m_connectionData.reliableOverflow )
  {
    if ( CL_Pause_IsGamePaused() || !NetConnection::IsThrottled(&this->m_connectionData.serverConnection) )
    {
      reliableSequence = this->m_connectionData.reliableSequence;
      if ( reliableSequence - this->m_connectionData.reliableAcknowledge > 128 )
      {
        this->m_connectionData.reliableOverflow = 1;
        ClConnection::DumpReliableCommands(this, &this->m_connectionData);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144211E88);
        reliableSequence = this->m_connectionData.reliableSequence;
      }
      v9 = reliableSequence + 1;
      this->m_connectionData.reliableSequence = v9;
      CircularEntryBuffer<128,131072,int,0>::SetDataAndType(&this->m_connectionData.clientReliableCommands, v9 & 0x7F, commandBuffer, reliableCmdSize, type);
      if ( this->m_connectionData.clientReliableCommands.m_bufferNextIndex - this->m_connectionData.clientReliableCommands.m_entries[((unsigned __int8)this->m_connectionData.reliableAcknowledge + 1) & 0x7F].offset > 0x20000 || !this->m_connectionData.clientReliableCommands.m_entries[((unsigned __int8)this->m_connectionData.reliableAcknowledge + 1) & 0x7F].size )
      {
        this->m_connectionData.reliableOverflow = 1;
        ClConnection::DumpReliableCommands(this, &this->m_connectionData);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144211E88);
      }
    }
    else
    {
      Com_Printf(14, "Not adding reliable command - connection throttled\n");
    }
  }
}

/*
==============
ClConnectionMP::AllocateClientConnections
==============
*/
void ClConnectionMP::AllocateClientConnections(HunkUser *hunkUser, const int maxLocalClients, const int packetBackupCount)
{
  __int64 v4; 
  __int64 v5; 
  ClConnectionMP *v6; 
  int v7; 
  ClOutPacketMP *v8; 
  ClConnection **v9; 
  ClConnection *v10; 
  __int64 v11; 
  int v12; 
  int v13; 

  v4 = packetBackupCount;
  v5 = maxLocalClients;
  if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 32, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType == GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)(v5 - 1) > 1 )
  {
    v13 = 2;
    v12 = 1;
    LODWORD(v11) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 33, ASSERT_TYPE_ASSERT, "( 1 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [1, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v11, v12, v13) )
      __debugbreak();
  }
  v6 = (ClConnectionMP *)Mem_HunkUser_AllocInternal(hunkUser, 595176 * v5, 8ui64, "ClConnectionMP::AllocateClientConnections");
  v7 = 0;
  v8 = (ClOutPacketMP *)Mem_HunkUser_AllocInternal(hunkUser, 16 * v5 * v4, 4ui64, "ClConnectionMP::AllocateClientConnections");
  if ( (int)v5 > 0 )
  {
    v9 = ClConnection::ms_connections;
    do
    {
      ClConnectionMP::ClConnectionMP(v6, (const LocalClientNum_t)v7++, v8, v4);
      *v9 = v10;
      v8 += v4;
      ++v9;
      ++v6;
    }
    while ( v7 < (int)v5 );
  }
  LOBYTE(ClConnection::ms_activeConnectionType) = 2;
}

/*
==============
ClConnectionMP::ClearClientConnection
==============
*/
void ClConnectionMP::ClearClientConnection(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClConnectionMP *v2; 
  ClOutPacketMP *m_packetBackupData; 
  int m_packetBackupCount; 
  ClConnection *v5; 
  __int64 v6; 
  __int64 v7; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 78, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v7 = cl_maxLocalClients;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 79, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cl_maxLocalClients )", "localClientNum doesn't index cl_maxLocalClients\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  v2 = (ClConnectionMP *)ClConnection::ms_connections[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 83, ASSERT_TYPE_ASSERT, "(connectionBuffer)", (const char *)&queryFormat, "connectionBuffer") )
    __debugbreak();
  m_packetBackupData = v2->m_packetBackupData;
  m_packetBackupCount = v2->m_packetBackupCount;
  NetConnection::Close(&v2->m_connectionData.serverConnection, NET_CLOSE_SOFT);
  ((void (__fastcall *)(ClConnectionMP *, _QWORD))v2->~ClConnection)(v2, 0i64);
  ClConnectionMP::ClConnectionMP(v2, (const LocalClientNum_t)v1, m_packetBackupData, m_packetBackupCount);
  ClConnection::ms_connections[v1] = v5;
}

/*
==============
ClConnectionMP::ConnectedPacketEvent
==============
*/
char ClConnectionMP::ConnectedPacketEvent(ClConnectionMP *this, netadr_t *from, msg_t *msg, int time)
{
  char result; 
  int addrHandleIndex; 
  const char *v9; 
  int incomingSequence; 
  int messageAcknowledge; 
  int reliableAcknowledge; 
  int serverMessageSequence; 
  int serverMessageConsecutiveValid; 
  int Long; 
  int reliableSent; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  __int64 reliableSequence; 
  __int64 v23; 
  __int64 v24; 
  netadr_t v25; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 199, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !Com_AreConnectedPacketsAllowed() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 200, ASSERT_TYPE_ASSERT, "(Com_AreConnectedPacketsAllowed())", "%s\n\tShould not be receiving connected packet events while the server is starting", "Com_AreConnectedPacketsAllowed()") )
    __debugbreak();
  if ( !NetConnection::IsOpened(&this->m_connectionData.serverConnection) )
  {
    Com_Printf(14, "Received a packet when server connection not opened\n");
    return 0;
  }
  if ( NetConnection::CompareAddr(&this->m_connectionData.serverConnection, from) )
  {
    this->m_connectionData.lastPacketTime = cls.realtime;
    if ( !Netchan_Process(&this->m_connectionData.netchan, msg) )
      return 0;
    ++this->m_numPacketsReceived;
    incomingSequence = this->m_connectionData.netchan.incomingSequence;
    messageAcknowledge = this->m_connectionData.messageAcknowledge;
    reliableAcknowledge = this->m_connectionData.reliableAcknowledge;
    serverMessageSequence = this->m_connectionData.serverMessageSequence;
    serverMessageConsecutiveValid = this->m_connectionData.serverMessageConsecutiveValid;
    if ( incomingSequence - serverMessageSequence < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 244, ASSERT_TYPE_ASSERT, "(serverMessageDelta >= 0)", "%s\n\tNetchan should have discarded duplicate messages, delta %d", "serverMessageDelta >= 0", this->m_connectionData.netchan.incomingSequence - serverMessageSequence) )
      __debugbreak();
    if ( incomingSequence - serverMessageSequence == 1 )
      ++this->m_connectionData.serverMessageConsecutiveValid;
    else
      this->m_connectionData.serverMessageConsecutiveValid = 0;
    this->m_connectionData.serverMessageSequence = incomingSequence;
    Long = MSG_ReadLong(msg);
    reliableSent = this->m_connectionData.reliableSent;
    v17 = Long & 0x3FFFFFFF;
    v18 = Long;
    v19 = this->m_connectionData.reliableAcknowledge;
    this->m_connectionData.messageAcknowledge = v17;
    if ( v19 > reliableSent || reliableSent > this->m_connectionData.reliableSequence )
    {
      LODWORD(v24) = v19;
      LODWORD(v23) = reliableSent;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 264, ASSERT_TYPE_ASSERT, "( clcData->reliableAcknowledge ) <= ( clcData->reliableSent ) && ( clcData->reliableSent ) <= ( clcData->reliableSequence )", "clcData->reliableSent not in [clcData->reliableAcknowledge, clcData->reliableSequence]\n\t%i not in [%i, %i]", v23, v24, this->m_connectionData.reliableSequence) )
        __debugbreak();
    }
    v20 = this->m_connectionData.reliableSent;
    v21 = (unsigned int)this->m_connectionData.reliableAcknowledge;
    if ( v20 > (int)v21 )
    {
      while ( this->m_connectionData.messageAcknowledge < this->m_connectionData.serverReliableCommandPacket[v20 & 0x7F] )
      {
        if ( --v20 <= (int)v21 )
          goto LABEL_28;
      }
      this->m_connectionData.reliableAcknowledge = v20;
      v21 = (unsigned int)v20;
    }
LABEL_28:
    reliableSequence = (unsigned int)this->m_connectionData.reliableSequence;
    if ( (int)v21 >= (int)reliableSequence - 128 )
    {
      msg->compressionFlags = v18 & 0xC0000000;
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "parse msg");
      CL_ParseMP_ParseServerMessage(this->m_localClientNum, msg);
      Sys_ProfEndNamedEvent();
      if ( msg->overflowed )
      {
        Com_Printf(14, "CL_MainMP_PacketEvent - ignoring illegible message\n");
        result = 0;
        this->m_connectionData.serverMessageSequence = serverMessageSequence;
        this->m_connectionData.serverMessageConsecutiveValid = serverMessageConsecutiveValid;
        this->m_connectionData.messageAcknowledge = messageAcknowledge;
        this->m_connectionData.reliableAcknowledge = reliableAcknowledge;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      Com_PrintWarning(14, "CL_MainMP_PacketEvent - cannot decode message since lost command which generates the key - %i %i\n", v21, reliableSequence);
      this->m_connectionData.reliableAcknowledge = this->m_connectionData.reliableSequence;
      result = 0;
      this->m_connectionData.serverMessageSequence = serverMessageSequence;
      this->m_connectionData.serverMessageConsecutiveValid = serverMessageConsecutiveValid;
      this->m_connectionData.messageAcknowledge = messageAcknowledge;
    }
  }
  else
  {
    addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v25.type = *(_OWORD *)&from->type;
    v25.addrHandleIndex = addrHandleIndex;
    v9 = NET_AdrToString(&v25);
    Com_Printf(14, "%s:sequenced packet without connection\n", v9);
    return 0;
  }
  return result;
}

/*
==============
ClConnectionMP::ConnectionLessPacketProfile
==============
*/
void ClConnectionMP::ConnectionLessPacketProfile(ClConnectionMP *this, int iLength)
{
  if ( !net_profile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.cpp", 340, ASSERT_TYPE_ASSERT, "(net_profile)", (const char *)&queryFormat, "net_profile") )
    __debugbreak();
  if ( net_profile->current.integer )
  {
    NetProf_PrepProfiling(&this->m_connectionData.OOBProf);
    NetProf_AddPacket(&this->m_connectionData.OOBProf.send, iLength, 0);
  }
}

/*
==============
ClConnectionMP::FreeClientConnections
==============
*/
void ClConnectionMP::FreeClientConnections(void)
{
  int v0; 
  void **v1; 

  if ( BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) )
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
        NetConnection::Close((NetConnection *)((char *)*v1 + 132152), NET_CLOSE_SOFT);
        (**(void (__fastcall ***)(void *, _QWORD))*v1)(*v1, 0i64);
        DebugWipe(*v1, 0x914E8ui64);
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
ClConnectionMP::GetConnectionData
==============
*/
ClConnectionDataMP *ClConnectionMP::GetConnectionData(ClConnectionMP *this)
{
  return &this->m_connectionData;
}

