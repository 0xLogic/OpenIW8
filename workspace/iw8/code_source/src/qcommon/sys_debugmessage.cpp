/*
==============
NET_ShutdownDebug
==============
*/

void __fastcall NET_ShutdownDebug(scrContext_t *scrContext)
{
  ?NET_ShutdownDebug@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_IsRemoteDebugServer
==============
*/

int __fastcall Sys_IsRemoteDebugServer(const scrContext_t *scrContext)
{
  return ?Sys_IsRemoteDebugServer@@YAHAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
NET_BeginDebug
==============
*/

void __fastcall NET_BeginDebug(scrContext_t *scrContext)
{
  ?NET_BeginDebug@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_UpdateRemoteDebugListenServer
==============
*/

void __fastcall Sys_UpdateRemoteDebugListenServer(scrContext_t *scrContext)
{
  ?Sys_UpdateRemoteDebugListenServer@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_ReadDebugSocketStringBuffer
==============
*/

void __fastcall Sys_ReadDebugSocketStringBuffer(scrContext_t *scrContext, void *buffer, int len)
{
  ?Sys_ReadDebugSocketStringBuffer@@YAXAEAUscrContext_t@@PEAXH@Z(scrContext, buffer, len);
}

/*
==============
Sys_ReadDebugSocketMessage
==============
*/

int __fastcall Sys_ReadDebugSocketMessage(scrContext_t *scrContext, _DebugMessage **message, int blocking)
{
  return ?Sys_ReadDebugSocketMessage@@YAHAEAUscrContext_t@@PEAPEAU_DebugMessage@@H@Z(scrContext, message, blocking);
}

/*
==============
Sys_WriteDebugSocketData
==============
*/

void __fastcall Sys_WriteDebugSocketData(scrContext_t *scrContext, const void *buffer, int len)
{
  ?Sys_WriteDebugSocketData@@YAXAEAUscrContext_t@@PEBXH@Z(scrContext, buffer, len);
}

/*
==============
Sys_WriteDebugSocketString
==============
*/

void __fastcall Sys_WriteDebugSocketString(scrContext_t *scrContext, const void *text)
{
  ?Sys_WriteDebugSocketString@@YAXAEAUscrContext_t@@PEBX@Z(scrContext, text);
}

/*
==============
Sys_ReadDebugSocketInt
==============
*/

int __fastcall Sys_ReadDebugSocketInt(scrContext_t *scrContext)
{
  return ?Sys_ReadDebugSocketInt@@YAHAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
NET_RestartDebug
==============
*/

void __fastcall NET_RestartDebug(scrContext_t *scrContext)
{
  ?NET_RestartDebug@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_DebugSocketError
==============
*/

void __fastcall Sys_DebugSocketError(scrContext_t *scrContext, const char *message)
{
  ?Sys_DebugSocketError@@YAXAEAUscrContext_t@@PEBD@Z(scrContext, message);
}

/*
==============
Sys_AckDebugSocket
==============
*/

void __fastcall Sys_AckDebugSocket(scrContext_t *scrContext)
{
  ?Sys_AckDebugSocket@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_DebugSocketReady
==============
*/

int __fastcall Sys_DebugSocketReady(const scrContext_t *scrContext)
{
  return ?Sys_DebugSocketReady@@YAHAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_UpdateDebugSocket
==============
*/

_DebugMessage *__fastcall Sys_UpdateDebugSocket(scrContext_t *scrContext)
{
  return ?Sys_UpdateDebugSocket@@YAPEAU_DebugMessage@@AEAUscrContext_t@@@Z(scrContext);
}

/*
==============
NET_InitDebug
==============
*/

void __fastcall NET_InitDebug(scrContext_t *scrContext)
{
  ?NET_InitDebug@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_WriteDebugSocketInt
==============
*/

void __fastcall Sys_WriteDebugSocketInt(scrContext_t *scrContext, int value)
{
  ?Sys_WriteDebugSocketInt@@YAXAEAUscrContext_t@@H@Z(scrContext, value);
}

/*
==============
Sys_StartRemoteDebugServer
==============
*/

bool __fastcall Sys_StartRemoteDebugServer(scrContext_t *scrContext)
{
  return ?Sys_StartRemoteDebugServer@@YA_NAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_ResetDebugMessage
==============
*/

void __fastcall Sys_ResetDebugMessage(_DebugMessage **message)
{
  ?Sys_ResetDebugMessage@@YAXAEAPEAU_DebugMessage@@@Z(message);
}

/*
==============
Sys_IsRemoteDebugClient
==============
*/

int __fastcall Sys_IsRemoteDebugClient(const scrContext_t *scrContext)
{
  return ?Sys_IsRemoteDebugClient@@YAHAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_WriteDebugSocketMessage
==============
*/

void __fastcall Sys_WriteDebugSocketMessage(scrContext_t *scrContext, const _DebugMessage *message)
{
  ?Sys_WriteDebugSocketMessage@@YAXAEAUscrContext_t@@PEBU_DebugMessage@@@Z(scrContext, message);
}

/*
==============
Sys_ReadDebugSocketString
==============
*/

const char *__fastcall Sys_ReadDebugSocketString(scrContext_t *scrContext)
{
  return ?Sys_ReadDebugSocketString@@YAPEBDAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Sys_FlushDebugSocketData
==============
*/

void __fastcall Sys_FlushDebugSocketData(scrContext_t *scrContext)
{
  ?Sys_FlushDebugSocketData@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
DebugMessage_alloc
==============
*/
void *DebugMessage_alloc(void *allocator_data, unsigned __int64 size)
{
  return ntl::nxheap::allocate(&s_ntlDebugMessageHeap.m_heap, size, 4ui64, 1);
}

/*
==============
DebugMessage_free
==============
*/
void DebugMessage_free(void *allocator_data, void *pointer)
{
  ntl::nxheap::free(&s_ntlDebugMessageHeap.m_heap, pointer);
}

/*
==============
Com_DevhostScriptDBCallbackClient
==============
*/
char Com_DevhostScriptDBCallbackClient(ComDevhostReadHandle *handle)
{
  return 1;
}

/*
==============
Com_DevhostScriptDBCallbackServer
==============
*/
bool Com_DevhostScriptDBCallbackServer(ComDevhostReadHandle *handle)
{
  scrContext_t *v2; 
  scrContext_t *v3; 
  _DebugMessage *v4; 
  bool result; 
  _DebugMessage *message; 

  v2 = ScriptContext_Server();
  v3 = v2;
  v2->m_debugSys.m_rscvHandle = handle;
  if ( handle->m_command )
  {
    v2->m_debugSys.m_rscvHandle = NULL;
    return 1;
  }
  else if ( Sys_ReadDebugSocketMessage(v2, &message, 0) )
  {
    v4 = message;
    if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 92, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
      __debugbreak();
    j_debug_message__free_unpacked(v3->m_debugSys.debugMessage, &s_debugMessageAllocator);
    result = 0;
    v3->m_debugSys.debugMessage = v4;
    v3->m_debugSys.m_rscvHandle = NULL;
  }
  else
  {
    v3->m_debugSys.m_rscvHandle = NULL;
    return 1;
  }
  return result;
}

/*
==============
NET_BeginDebug
==============
*/
void NET_BeginDebug(scrContext_t *scrContext)
{
  int m_DHSystem; 
  bool (__fastcall *v3)(ComDevhostReadHandle *); 

  j_debug_message__free_unpacked(scrContext->m_debugSys.debugMessage, &s_debugMessageAllocator);
  scrContext->m_debugSys.debugMessage = NULL;
  if ( scrContext == (scrContext_t *)-984256i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 122, ASSERT_TYPE_ASSERT, "(scrContext.m_debugSys.debugPacket)", (const char *)&queryFormat, "scrContext.m_debugSys.debugPacket") )
    __debugbreak();
  if ( scrContext->m_debugSys.usingDevHost )
  {
    m_DHSystem = scrContext->m_debugSys.m_DHSystem;
    v3 = (bool (__fastcall *)(ComDevhostReadHandle *))Com_DevhostScriptDBCallbackClient;
    if ( m_DHSystem == 7 )
      v3 = Com_DevhostScriptDBCallbackServer;
    Com_DevhostRegisterCallback(m_DHSystem, v3);
    Scr_ConnectRemote(scrContext);
  }
  else
  {
    scrContext->m_debugSys.debugPacketPos = 0;
    scrContext->m_debugSys.debugWriteInProcess = 0;
    Scr_ConnectRemote(scrContext);
  }
}

/*
==============
NET_InitDebug
==============
*/
void NET_InitDebug(scrContext_t *scrContext)
{
  *(_QWORD *)&scrContext->m_debugSys.debugServer = 0i64;
  scrContext->m_debugSys.ip_debugServerSocket = 0i64;
  scrContext->m_debugSys.ip_debugSocket = 0i64;
  j_debug_message__free_unpacked(scrContext->m_debugSys.debugMessage, &s_debugMessageAllocator);
  scrContext->m_debugSys.debugMessage = NULL;
  if ( scrContext == (scrContext_t *)-984256i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 30, ASSERT_TYPE_ASSERT, "(scrContext.m_debugSys.debugPacket)", (const char *)&queryFormat, "scrContext.m_debugSys.debugPacket") )
    __debugbreak();
  scrContext->m_debugSys.debugPacketPos = 0;
  scrContext->m_debugSys.debugWriteInProcess = 0;
}

/*
==============
NET_RestartDebug
==============
*/
void NET_RestartDebug(scrContext_t *scrContext)
{
  unsigned __int64 ip_debugSocket; 
  unsigned __int64 ip_debugServerSocket; 

  if ( !scrContext->m_debugSys.usingDevHost )
  {
    ip_debugSocket = scrContext->m_debugSys.ip_debugSocket;
    if ( ip_debugSocket )
    {
      NET_TCPIPClose(ip_debugSocket);
      scrContext->m_debugSys.ip_debugSocket = 0i64;
    }
    ip_debugServerSocket = scrContext->m_debugSys.ip_debugServerSocket;
    if ( ip_debugServerSocket )
      NET_TCPIPClose(ip_debugServerSocket);
  }
  *(_QWORD *)&scrContext->m_debugSys.debugServer = 0i64;
  scrContext->m_debugSys.ip_debugServerSocket = 0i64;
  scrContext->m_debugSys.ip_debugSocket = 0i64;
  j_debug_message__free_unpacked(scrContext->m_debugSys.debugMessage, &s_debugMessageAllocator);
  scrContext->m_debugSys.debugMessage = NULL;
  if ( scrContext == (scrContext_t *)-984256i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 30, ASSERT_TYPE_ASSERT, "(scrContext.m_debugSys.debugPacket)", (const char *)&queryFormat, "scrContext.m_debugSys.debugPacket") )
    __debugbreak();
  scrContext->m_debugSys.debugPacketPos = 0;
  scrContext->m_debugSys.debugWriteInProcess = 0;
}

/*
==============
NET_ShutdownDebug
==============
*/
void NET_ShutdownDebug(scrContext_t *scrContext)
{
  unsigned __int64 ip_debugSocket; 
  unsigned __int64 ip_debugServerSocket; 

  if ( !scrContext->m_debugSys.usingDevHost )
  {
    ip_debugSocket = scrContext->m_debugSys.ip_debugSocket;
    if ( ip_debugSocket )
    {
      NET_TCPIPClose(ip_debugSocket);
      scrContext->m_debugSys.ip_debugSocket = 0i64;
    }
    ip_debugServerSocket = scrContext->m_debugSys.ip_debugServerSocket;
    if ( ip_debugServerSocket )
    {
      NET_TCPIPClose(ip_debugServerSocket);
      scrContext->m_debugSys.ip_debugServerSocket = 0i64;
    }
  }
}

/*
==============
Sys_AckDebugSocket
==============
*/
void Sys_AckDebugSocket(scrContext_t *scrContext)
{
  j_debug_message__free_unpacked(scrContext->m_debugSys.debugMessage, &s_debugMessageAllocator);
  scrContext->m_debugSys.debugMessage = NULL;
}

/*
==============
Sys_DebugSend
==============
*/
void Sys_DebugSend(scrContext_t *scrContext, const char *buf, int len, const char *name)
{
  int v5; 
  int v8; 
  const char *v9; 
  const char *v10; 
  bool wouldBlock; 

  v5 = len;
  if ( !scrContext->m_debugSys.ip_debugSocket )
  {
    Sys_DebugSocketError(scrContext, "Sys_DebugSend: Socket closed");
    return;
  }
  scrContext->m_debugSys.debugWriteInProcess = 1;
  if ( len <= 0 )
  {
LABEL_10:
    scrContext->m_debugSys.debugWriteInProcess = 0;
    return;
  }
  while ( 1 )
  {
    v8 = NET_TCPIPSend(scrContext->m_debugSys.ip_debugSocket, buf, v5, &wouldBlock);
    if ( v8 <= 0 )
      break;
    buf += v8;
    v5 -= v8;
LABEL_9:
    if ( v5 <= 0 )
      goto LABEL_10;
  }
  if ( v8 >= 0 )
    goto LABEL_9;
  if ( wouldBlock )
  {
    NET_Sleep(1);
    goto LABEL_9;
  }
  v9 = NET_ErrorString();
  v10 = j_va("%s: %s", name, v9);
  Sys_DebugSocketError(scrContext, v10);
}

/*
==============
Sys_DebugSocketError
==============
*/
void Sys_DebugSocketError(scrContext_t *scrContext, const char *message)
{
  unsigned __int64 ip_debugSocket; 
  unsigned __int64 ip_debugServerSocket; 

  if ( !scrContext->m_debugSys.usingDevHost )
  {
    ip_debugSocket = scrContext->m_debugSys.ip_debugSocket;
    if ( ip_debugSocket )
    {
      NET_TCPIPClose(ip_debugSocket);
      scrContext->m_debugSys.ip_debugSocket = 0i64;
    }
    ip_debugServerSocket = scrContext->m_debugSys.ip_debugServerSocket;
    if ( ip_debugServerSocket )
      NET_TCPIPClose(ip_debugServerSocket);
  }
  *(_QWORD *)&scrContext->m_debugSys.debugServer = 0i64;
  scrContext->m_debugSys.ip_debugServerSocket = 0i64;
  scrContext->m_debugSys.ip_debugSocket = 0i64;
  j_debug_message__free_unpacked(scrContext->m_debugSys.debugMessage, &s_debugMessageAllocator);
  scrContext->m_debugSys.debugMessage = NULL;
  if ( scrContext == (scrContext_t *)-984256i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 30, ASSERT_TYPE_ASSERT, "(scrContext.m_debugSys.debugPacket)", (const char *)&queryFormat, "scrContext.m_debugSys.debugPacket") )
    __debugbreak();
  scrContext->m_debugSys.debugPacketPos = 0;
  scrContext->m_debugSys.debugWriteInProcess = 0;
  Com_Printf(25, "%s\n", message);
}

/*
==============
Sys_DebugSocketReady
==============
*/
_BOOL8 Sys_DebugSocketReady(const scrContext_t *scrContext)
{
  return scrContext->m_debugSys.usingDevHost || scrContext->m_debugSys.ip_debugSocket && !scrContext->m_debugSys.debugWriteInProcess;
}

/*
==============
Sys_FlushDebugSocketData
==============
*/
void Sys_FlushDebugSocketData(scrContext_t *scrContext)
{
  int debugPacketPos; 

  if ( !scrContext->m_debugSys.usingDevHost )
  {
    Sys_EnterCriticalSection(scrContext->m_debugSys.critSect);
    if ( scrContext == (scrContext_t *)-984256i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 593, ASSERT_TYPE_ASSERT, "(scrContext.m_debugSys.debugPacket)", (const char *)&queryFormat, "scrContext.m_debugSys.debugPacket") )
      __debugbreak();
    debugPacketPos = scrContext->m_debugSys.debugPacketPos;
    if ( debugPacketPos )
    {
      scrContext->m_debugSys.debugPacketPos = 0;
      Sys_DebugSend(scrContext, (const char *)scrContext->m_debugSys.debugPacket, debugPacketPos, "Sys_FlushDebugSocketData");
    }
    Sys_LeaveCriticalSection(scrContext->m_debugSys.critSect);
  }
}

/*
==============
Sys_IsRemoteDebugClient
==============
*/
__int64 Sys_IsRemoteDebugClient(const scrContext_t *scrContext)
{
  return (unsigned int)scrContext->m_debugSys.debugClient;
}

/*
==============
Sys_IsRemoteDebugServer
==============
*/
__int64 Sys_IsRemoteDebugServer(const scrContext_t *scrContext)
{
  return (unsigned int)scrContext->m_debugSys.debugServer;
}

/*
==============
Sys_ReadDebugSocketData
==============
*/
__int64 Sys_ReadDebugSocketData(scrContext_t *scrContext, void *buffer, int len, int blocking)
{
  int v5; 
  unsigned __int64 ip_debugSocket; 
  int v10; 
  __int64 v11; 
  const char *v12; 
  const char *v13; 
  bool wouldBlock; 

  v5 = len;
  if ( scrContext->m_debugSys.usingDevHost )
  {
    if ( !scrContext->m_debugSys.m_rscvHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 335, ASSERT_TYPE_ASSERT, "(scrContext.m_debugSys.m_rscvHandle)", (const char *)&queryFormat, "scrContext.m_debugSys.m_rscvHandle") )
      __debugbreak();
    ComDevhostReadHandle::Read(scrContext->m_debugSys.m_rscvHandle, (unsigned __int8 *)buffer, v5);
    return 1i64;
  }
  if ( !len )
    return 1i64;
  while ( 1 )
  {
    ip_debugSocket = scrContext->m_debugSys.ip_debugSocket;
    if ( !ip_debugSocket )
      break;
    v10 = NET_TCPIPRecvfrom(ip_debugSocket, (char *)buffer, v5, &wouldBlock);
    v11 = v10;
    if ( !v10 )
    {
      Sys_DebugSocketError(scrContext, "Socket_ReadData: recvfrom() returned 0");
      return 0i64;
    }
    if ( v10 >= 0 )
    {
      if ( v10 > v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 384, ASSERT_TYPE_ASSERT, "(read <= remaining)", (const char *)&queryFormat, "read <= remaining") )
        __debugbreak();
      v5 -= v11;
      buffer = (char *)buffer + v11;
    }
    else
    {
      if ( !wouldBlock )
      {
        v12 = NET_ErrorString();
        v13 = j_va("Sys_ReadDebugSocketData: %s", v12);
        Sys_DebugSocketError(scrContext, v13);
        return 0i64;
      }
      if ( !blocking )
        return 0i64;
      NET_Sleep(1);
    }
    if ( !v5 )
      return 1i64;
  }
  Sys_DebugSocketError(scrContext, "Sys_ReadDebugSocketData: Socket not opened");
  return 0i64;
}

/*
==============
Sys_ReadDebugSocketInt
==============
*/
__int64 Sys_ReadDebugSocketInt(scrContext_t *scrContext)
{
  unsigned int buffer; 

  Sys_ReadDebugSocketData(scrContext, &buffer, 4, 1);
  return buffer;
}

/*
==============
Sys_ReadDebugSocketMessage
==============
*/
_BOOL8 Sys_ReadDebugSocketMessage(scrContext_t *scrContext, _DebugMessage **message, int blocking)
{
  unsigned __int64 v5; 
  unsigned __int8 *v6; 
  _DebugMessage *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int v12[4]; 
  unsigned __int8 buffer; 

  if ( !(unsigned int)Sys_ReadDebugSocketData(scrContext, &buffer, 1, blocking) )
    return 0i64;
  if ( buffer != 0xCC )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 824, ASSERT_TYPE_ASSERT, "( magic ) == ( SIGNATURE__SIG_MAGIC )", "%s == %s\n\t%i, %i", "magic", "SIGNATURE__SIG_MAGIC", buffer, 204) )
      __debugbreak();
    if ( buffer != 0xCC )
      return 0i64;
  }
  Sys_ReadDebugSocketData(scrContext, v12, 4, 1);
  v5 = v12[0];
  if ( (unsigned int)(v12[0] - 1) > 0xFFFFF )
  {
    LODWORD(v11) = 0x100000;
    LODWORD(v10) = 1;
    LODWORD(v9) = v12[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 829, ASSERT_TYPE_ASSERT, "( 1 ) <= ( size ) && ( size ) <= ( SIGNATURE__SIG_MAX_MESSAGE_SIZE )", "size not in [1, SIGNATURE__SIG_MAX_MESSAGE_SIZE]\n\t%i not in [%i, %i]", v9, v10, v11) )
      __debugbreak();
  }
  v6 = (unsigned __int8 *)ntl::nxheap::allocate(&s_ntlDebugMessageHeap.m_heap, v5, 4ui64, 1);
  if ( (unsigned int)Sys_ReadDebugSocketData(scrContext, v6, v5, 1) )
  {
    v8 = j_debug_message__unpack(&s_debugMessageAllocator, v5, v6);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 839, ASSERT_TYPE_ASSERT, "(unpacked)", (const char *)&queryFormat, "unpacked") )
      __debugbreak();
    ntl::nxheap::free(&s_ntlDebugMessageHeap.m_heap, v6);
    *message = v8;
    return v8 != NULL;
  }
  else
  {
    ntl::nxheap::free(&s_ntlDebugMessageHeap.m_heap, v6);
    return 0i64;
  }
}

/*
==============
Sys_ReadDebugSocketString
==============
*/
const char *Sys_ReadDebugSocketString(scrContext_t *scrContext)
{
  int v2; 
  __int64 v3; 
  int v5; 
  int buffer[4]; 
  char in[4096]; 

  Sys_ReadDebugSocketData(scrContext, buffer, 4, 1);
  v2 = buffer[0];
  if ( (unsigned __int64)buffer[0] >= 0x1000 )
  {
    v5 = buffer[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 420, ASSERT_TYPE_ASSERT, "( ( len < sizeof( text ) ) )", "( len ) = %i", v5) )
      __debugbreak();
    v2 = buffer[0];
  }
  Sys_ReadDebugSocketData(scrContext, in, v2, 1);
  if ( (unsigned __int64)buffer[0] >= 0x1000 )
  {
    j___report_rangecheckfailure(v3);
    JUMPOUT(0x141401159i64);
  }
  in[buffer[0]] = 0;
  return SL_AllocString_Copy(in);
}

/*
==============
Sys_ReadDebugSocketStringBuffer
==============
*/
void Sys_ReadDebugSocketStringBuffer(scrContext_t *scrContext, void *buffer, int len)
{
  unsigned __int64 v3; 
  int v6; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  int buffera[4]; 
  char in[4096]; 

  v3 = len;
  Sys_ReadDebugSocketData(scrContext, buffera, 4, 1);
  v6 = buffera[0];
  if ( (unsigned __int64)buffera[0] >= 0x1000 )
  {
    v9 = buffera[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 420, ASSERT_TYPE_ASSERT, "( ( len < sizeof( text ) ) )", "( len ) = %i", v9) )
      __debugbreak();
    v6 = buffera[0];
  }
  Sys_ReadDebugSocketData(scrContext, in, v6, 1);
  if ( (unsigned __int64)buffera[0] >= 0x1000 )
  {
    j___report_rangecheckfailure(v7);
    JUMPOUT(0x14140127Ci64);
  }
  in[buffera[0]] = 0;
  v8 = SL_AllocString_Copy(in);
  Core_strcpy_truncate((char *)buffer, v3, v8);
  SL_AllocString_Free(v8);
}

/*
==============
Sys_ResetDebugMessage
==============
*/
void Sys_ResetDebugMessage(_DebugMessage **message)
{
  j_debug_message__free_unpacked(*message, &s_debugMessageAllocator);
  *message = NULL;
}

/*
==============
Sys_StartRemoteDebugServer
==============
*/
char Sys_StartRemoteDebugServer(scrContext_t *scrContext)
{
  if ( scrContext->m_debugSys.debugServer )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 69, ASSERT_TYPE_ASSERT, "(!scrContext.m_debugSys.debugServer)", (const char *)&queryFormat, "!scrContext.m_debugSys.debugServer") )
      __debugbreak();
    scrContext->m_debugSys.debugServer = 1;
    return 1;
  }
  else
  {
    scrContext->m_debugSys.debugServer = 1;
    return 1;
  }
}

/*
==============
Sys_UpdateDebugSocket
==============
*/
_DebugMessage *Sys_UpdateDebugSocket(scrContext_t *scrContext)
{
  _DebugMessage *result; 
  int v3; 
  unsigned __int64 ip_debugServerSocket; 
  unsigned __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  _DebugMessage *v9; 
  bool wouldBlock; 
  _DebugMessage *message; 

  result = scrContext->m_debugSys.debugMessage;
  if ( result )
    return result;
  if ( scrContext->m_debugSys.usingDevHost )
  {
    v3 = 256;
    if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
      v3 = 128;
    Com_DevhostUpdate(v3);
    return scrContext->m_debugSys.debugMessage;
  }
  ip_debugServerSocket = scrContext->m_debugSys.ip_debugServerSocket;
  if ( !ip_debugServerSocket )
    return 0i64;
  if ( !scrContext->m_debugSys.ip_debugSocket )
  {
    v5 = NET_TCPIPAccept(ip_debugServerSocket, &wouldBlock);
    scrContext->m_debugSys.ip_debugSocket = v5;
    if ( v5 == -1i64 )
    {
      v6 = !wouldBlock;
      scrContext->m_debugSys.ip_debugSocket = 0i64;
      if ( v6 )
      {
        v7 = NET_ErrorString();
        v8 = j_va("Sys_UpdateDebugSocket: %s\n", v7);
        Sys_DebugSocketError(scrContext, v8);
      }
      return 0i64;
    }
  }
  if ( Sys_ReadDebugSocketMessage(scrContext, &message, 0) )
  {
    v9 = message;
    if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 692, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
      __debugbreak();
    j_debug_message__free_unpacked(scrContext->m_debugSys.debugMessage, &s_debugMessageAllocator);
    scrContext->m_debugSys.debugMessage = v9;
  }
  return scrContext->m_debugSys.debugMessage;
}

/*
==============
Sys_UpdateRemoteDebugListenServer
==============
*/
void Sys_UpdateRemoteDebugListenServer(scrContext_t *scrContext)
{
  int v2; 
  int v3; 
  unsigned __int64 v4; 
  const char *v5; 
  const char *v6; 
  unsigned __int64 ip_debugServerSocket; 
  unsigned __int64 ip_debugSocket; 
  const char *v9; 
  const char *v10; 
  bool wouldBlock; 

  v2 = (scrContext->m_Instance != SCRIPTINSTANCE_SERVER) + 7;
  if ( Com_DevhostSystemActive(v2) && !scrContext->m_debugSys.debugServer )
  {
    scrContext->m_debugSys.usingDevHost = 1;
    scrContext->m_debugSys.m_DHSystem = v2;
    Com_Printf(25, "Script Debugger Connect on Devhost\n");
    NET_BeginDebug(scrContext);
  }
  if ( !scrContext->m_debugSys.port && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 154, ASSERT_TYPE_ASSERT, "(scrContext.m_debugSys.port)", (const char *)&queryFormat, "scrContext.m_debugSys.port") )
    __debugbreak();
  if ( !scrContext->m_debugSys.ip_debugServerSocket )
  {
    v3 = dword_14D1CDFBC++;
    if ( v3 <= 5 )
    {
      v4 = NET_TCPIPSocket("localhost", scrContext->m_debugSys.port, 0);
      scrContext->m_debugSys.ip_debugServerSocket = v4;
      if ( !v4 )
      {
        v5 = "Sys_OpenDebugListenServerSocket: failed to connect";
LABEL_13:
        Sys_DebugSocketError(scrContext, v5);
        goto LABEL_14;
      }
      if ( !NET_TCPIPListen(v4) )
      {
        v6 = NET_ErrorString();
        v5 = j_va("Sys_OpenDebugListenServerSocket: listen: %s\n", v6);
        goto LABEL_13;
      }
    }
  }
LABEL_14:
  ip_debugServerSocket = scrContext->m_debugSys.ip_debugServerSocket;
  if ( ip_debugServerSocket )
  {
    if ( scrContext->m_debugSys.ip_debugSocket )
      goto LABEL_24;
    ip_debugSocket = NET_TCPIPAccept(ip_debugServerSocket, &wouldBlock);
    scrContext->m_debugSys.ip_debugSocket = ip_debugSocket;
    if ( ip_debugSocket == -1i64 )
    {
      ip_debugSocket = 0i64;
      scrContext->m_debugSys.ip_debugSocket = 0i64;
      if ( !wouldBlock )
      {
        v9 = NET_ErrorString();
        v10 = j_va("Sys_AcceptDebugListenServerSocket: %s\n", v9);
        Sys_DebugSocketError(scrContext, v10);
        ip_debugSocket = scrContext->m_debugSys.ip_debugSocket;
      }
    }
    if ( ip_debugSocket )
    {
LABEL_24:
      if ( !scrContext->m_debugSys.debugServer )
      {
        scrContext->m_debugSys.usingDevHost = 0;
        Com_Printf(25, "Script Debugger Connect on deprecated socket\n");
        NET_BeginDebug(scrContext);
      }
    }
  }
}

/*
==============
Sys_WriteDebugSocketData
==============
*/
void Sys_WriteDebugSocketData(scrContext_t *scrContext, const void *buffer, int len)
{
  int debugPacketPos; 
  bool i; 
  int v8; 
  bool v9; 

  if ( !Com_ErrorEntered() && scrContext->m_debugSys.debugServer )
  {
    if ( scrContext->m_debugSys.usingDevHost )
    {
      Com_DevhostSendBody(scrContext->m_debugSys.m_DHSystem, len, (const char *)buffer);
    }
    else
    {
      if ( scrContext == (scrContext_t *)-984256i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 531, ASSERT_TYPE_ASSERT, "(scrContext.m_debugSys.debugPacket)", (const char *)&queryFormat, "scrContext.m_debugSys.debugPacket") )
        __debugbreak();
      debugPacketPos = scrContext->m_debugSys.debugPacketPos;
      for ( i = len <= 0; len; i = len <= 0 )
      {
        if ( i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 537, ASSERT_TYPE_ASSERT, "(len > 0)", (const char *)&queryFormat, "len > 0") )
          __debugbreak();
        v8 = 0x2000 - debugPacketPos;
        if ( len <= 0x2000 - debugPacketPos )
          v8 = len;
        memcpy_0(&scrContext->m_debugSys.debugPacket[debugPacketPos], buffer, v8);
        debugPacketPos += v8;
        buffer = (char *)buffer + v8;
        len -= v8;
        scrContext->m_debugSys.debugPacketPos = debugPacketPos;
        v9 = debugPacketPos == 0x2000;
        if ( debugPacketPos > 0x2000 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 550, ASSERT_TYPE_ASSERT, "(pos <= 8192)", (const char *)&queryFormat, "pos <= MAX_DEBUG_PACKETLEN") )
            __debugbreak();
          v9 = debugPacketPos == 0x2000;
        }
        if ( v9 )
        {
          debugPacketPos = 0;
          scrContext->m_debugSys.debugPacketPos = 0;
          Sys_DebugSend(scrContext, (const char *)scrContext->m_debugSys.debugPacket, 0x2000, "Sys_WriteDebugSocketData");
        }
      }
    }
  }
}

/*
==============
Sys_WriteDebugSocketInt
==============
*/
void Sys_WriteDebugSocketInt(scrContext_t *scrContext, int value)
{
  int buffer; 

  buffer = value;
  Sys_WriteDebugSocketData(scrContext, &buffer, 4);
}

/*
==============
Sys_WriteDebugSocketMessage
==============
*/
void Sys_WriteDebugSocketMessage(scrContext_t *scrContext, const _DebugMessage *message)
{
  unsigned __int64 packed_size; 
  int v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  int v8; 
  __int64 v9; 
  ProtobufCBuffer v10; 
  scrContext_t *v11; 
  char buffer; 
  int v13; 
  ScopedDevHostMessage v14; 

  if ( scrContext->m_debugSys.usingDevHost )
  {
    packed_size = j_debug_message__get_packed_size(message);
    v5 = truncate_cast<int,unsigned __int64>(packed_size);
    v6 = v5;
    buffer = -52;
    ScopedDevHostMessage::ScopedDevHostMessage(&v14, scrContext->m_debugSys.m_DHSystem, 1u, v5 + 5);
    Sys_WriteDebugSocketData(scrContext, &buffer, 1);
    v13 = v6;
    Sys_WriteDebugSocketData(scrContext, &v13, 4);
    v11 = scrContext;
    v10.append = Sys_WriteDebugSocketProto;
    if ( j_debug_message__pack_to_buffer(message, &v10) != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 788, ASSERT_TYPE_ASSERT, "(written == size)", (const char *)&queryFormat, "written == size", -2i64) )
      __debugbreak();
    ScopedDevHostMessage::~ScopedDevHostMessage(&v14);
  }
  else
  {
    Sys_EnterCriticalSection(scrContext->m_debugSys.critSect);
    buffer = -52;
    Sys_WriteDebugSocketData(scrContext, &buffer, 1);
    v7 = j_debug_message__get_packed_size(message);
    v8 = truncate_cast<int,unsigned __int64>(v7);
    v9 = v8;
    if ( v8 >= 0x100000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 801, ASSERT_TYPE_ASSERT, "(size < SIGNATURE__SIG_MAX_MESSAGE_SIZE)", (const char *)&queryFormat, "size < SIGNATURE__SIG_MAX_MESSAGE_SIZE", -2i64) )
      __debugbreak();
    v13 = v9;
    Sys_WriteDebugSocketData(scrContext, &v13, 4);
    v11 = scrContext;
    v10.append = Sys_WriteDebugSocketProto;
    if ( j_debug_message__pack_to_buffer(message, &v10) != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 808, ASSERT_TYPE_ASSERT, "(written == size)", (const char *)&queryFormat, "written == size") )
      __debugbreak();
    Sys_LeaveCriticalSection(scrContext->m_debugSys.critSect);
  }
}

/*
==============
Sys_WriteDebugSocketProto
==============
*/
void Sys_WriteDebugSocketProto(ProtobufCBuffer *buffer, unsigned __int64 len, const unsigned __int8 *data)
{
  unsigned __int8 v6; 
  int v7; 
  int v8; 
  int v9; 

  v6 = *((_BYTE *)buffer[1].append + 984228);
  if ( v6 )
  {
    v9 = 1;
    v8 = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_debugmessage.cpp", 761, ASSERT_TYPE_ASSERT, "(unsigned)( sysbuffer->scrContext.m_Instance ) < (unsigned)( SCRIPTINSTANCE_COUNT )", "sysbuffer->scrContext.m_Instance doesn't index SCRIPTINSTANCE_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v7 = truncate_cast<int,unsigned __int64>(len);
  Sys_WriteDebugSocketData((scrContext_t *)buffer[1].append, data, v7);
}

/*
==============
Sys_WriteDebugSocketString
==============
*/
void Sys_WriteDebugSocketString(scrContext_t *scrContext, const void *text)
{
  unsigned __int64 v4; 
  int buffer; 

  v4 = -1i64;
  do
    ++v4;
  while ( *((_BYTE *)text + v4) );
  buffer = truncate_cast<int,unsigned __int64>(v4);
  Sys_WriteDebugSocketData(scrContext, &buffer, 4);
  Sys_WriteDebugSocketData(scrContext, text, buffer);
}

