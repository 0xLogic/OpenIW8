/*
==============
DebugSocketClient::RecvHandler
==============
*/

void __fastcall DebugSocketClient::RecvHandler(DebugSocketClient *this, rdbgClientInfo *ci)
{
  ?RecvHandler@DebugSocketClient@@QEAAXPEAUrdbgClientInfo@@@Z(this, ci);
}

/*
==============
DebugSocketClient::ClientFrameInternal
==============
*/

bool __fastcall DebugSocketClient::ClientFrameInternal(DebugSocketClient *this, rdbgClientInfo *ci, bool *outSuccess)
{
  return ?ClientFrameInternal@DebugSocketClient@@MEAA_NPEAUrdbgClientInfo@@PEA_N@Z(this, ci, outSuccess);
}

/*
==============
NET_RemoteDbgHostFrame
==============
*/

bool __fastcall NET_RemoteDbgHostFrame()
{
  return ?NET_RemoteDbgHostFrame@@YA_NXZ();
}

/*
==============
NET_RemoteDbgHostInitSockets
==============
*/

bool __fastcall NET_RemoteDbgHostInitSockets()
{
  return ?NET_RemoteDbgHostInitSockets@@YA_NXZ();
}

/*
==============
NET_RemoteDbgHostShutdownSockets
==============
*/

bool __fastcall NET_RemoteDbgHostShutdownSockets()
{
  return ?NET_RemoteDbgHostShutdownSockets@@YA_NXZ();
}

/*
==============
DebugSocketClient::SendEnqueueWithFilterKey
==============
*/

bool __fastcall DebugSocketClient::SendEnqueueWithFilterKey(DebugSocketClient *this, rdbgClientInfo *ci, const char *cmd, int inFilterKey)
{
  return ?SendEnqueueWithFilterKey@DebugSocketClient@@UEAA_NPEAUrdbgClientInfo@@PEBDH@Z(this, ci, cmd, inFilterKey);
}

/*
==============
DebugSocketClient::FreeSendQueue
==============
*/

void __fastcall DebugSocketClient::FreeSendQueue(DebugSocketClient *this)
{
  ?FreeSendQueue@DebugSocketClient@@MEAAXXZ(this);
}

/*
==============
NET_RemoteDbgHostStabilize
==============
*/

void NET_RemoteDbgHostStabilize(void)
{
  ?NET_RemoteDbgHostStabilize@@YAXXZ();
}

/*
==============
DebugSocketClientConsole::DebugSocketClientConsole
==============
*/

void __fastcall DebugSocketClientConsole::DebugSocketClientConsole(DebugSocketClientConsole *this)
{
  ??0DebugSocketClientConsole@@QEAA@XZ(this);
}

/*
==============
DebugSocketClientVisionEditor::DebugSocketClientVisionEditor
==============
*/

void __fastcall DebugSocketClientVisionEditor::DebugSocketClientVisionEditor(DebugSocketClientVisionEditor *this)
{
  ??0DebugSocketClientVisionEditor@@QEAA@XZ(this);
}

/*
==============
DebugSocketClient::RecvHandlerInternal
==============
*/

void __fastcall DebugSocketClient::RecvHandlerInternal(DebugSocketClient *this, rdbgClientInfo *ci, const char *pCommand, const unsigned int commandLength)
{
  ?RecvHandlerInternal@DebugSocketClient@@MEAAXPEAUrdbgClientInfo@@PEBDI@Z(this, ci, pCommand, commandLength);
}

/*
==============
NET_RemoteDbgHostInitSocketsInternal
==============
*/

bool __fastcall NET_RemoteDbgHostInitSocketsInternal()
{
  return ?NET_RemoteDbgHostInitSocketsInternal@@YA_NXZ();
}

/*
==============
DebugSocketClient::SendHandler
==============
*/

void __fastcall DebugSocketClient::SendHandler(DebugSocketClient *this, rdbgClientInfo *ci, const void *buffer, const int buffSize)
{
  ?SendHandler@DebugSocketClient@@UEAAXPEAUrdbgClientInfo@@PEBXH@Z(this, ci, buffer, buffSize);
}

/*
==============
DebugSocketClientConsole::SendHandler
==============
*/

void __fastcall DebugSocketClientConsole::SendHandler(DebugSocketClientConsole *this, rdbgClientInfo *ci, const void *buffer, const int buffSize)
{
  ?SendHandler@DebugSocketClientConsole@@UEAAXPEAUrdbgClientInfo@@PEBXH@Z(this, ci, buffer, buffSize);
}

/*
==============
rdbgRadiantSendCameraPosition
==============
*/

void __fastcall rdbgRadiantSendCameraPosition(const vec3_t *origin, const vec3_t *angles)
{
  ?rdbgRadiantSendCameraPosition@@YAXAEBTvec3_t@@0@Z(origin, angles);
}

/*
==============
NET_RemoteDbgHostConsoleConnected
==============
*/

bool __fastcall NET_RemoteDbgHostConsoleConnected()
{
  return ?NET_RemoteDbgHostConsoleConnected@@YA_NXZ();
}

/*
==============
DebugSocketClientVisionEditor::ProcessMessageLivePreview
==============
*/

void __fastcall DebugSocketClientVisionEditor::ProcessMessageLivePreview(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci, msg_t *msg)
{
  ?ProcessMessageLivePreview@DebugSocketClientVisionEditor@@IEAAXPEAUrdbgClientInfo@@PEAUmsg_t@@@Z(this, ci, msg);
}

/*
==============
DebugSocketClientRadiant::RecvHandlerInternal
==============
*/

void __fastcall DebugSocketClientRadiant::RecvHandlerInternal(DebugSocketClientRadiant *this, rdbgClientInfo *ci, const char *pCommand, const unsigned int commandLength)
{
  ?RecvHandlerInternal@DebugSocketClientRadiant@@MEAAXPEAUrdbgClientInfo@@PEBDI@Z(this, ci, pCommand, commandLength);
}

/*
==============
NET_RemoteDbgHostAssertHandler
==============
*/

bool __fastcall NET_RemoteDbgHostAssertHandler(const char *assertText)
{
  return ?NET_RemoteDbgHostAssertHandler@@YA_NPEBD@Z(assertText);
}

/*
==============
DebugSocketClientFX::DebugSocketClientFX
==============
*/

void __fastcall DebugSocketClientFX::DebugSocketClientFX(DebugSocketClientFX *this)
{
  ??0DebugSocketClientFX@@QEAA@XZ(this);
}

/*
==============
DebugSocketClient::Send
==============
*/

bool __fastcall DebugSocketClient::Send(DebugSocketClient *this, rdbgClientInfo *ci, const char *cmd)
{
  return ?Send@DebugSocketClient@@UEAA_NPEAUrdbgClientInfo@@PEBD@Z(this, ci, cmd);
}

/*
==============
DebugSocketClientRadiant::DebugSocketClientRadiant
==============
*/

void __fastcall DebugSocketClientRadiant::DebugSocketClientRadiant(DebugSocketClientRadiant *this)
{
  ??0DebugSocketClientRadiant@@QEAA@XZ(this);
}

/*
==============
DebugSocketClientVisionEditor::ClientFrameInternal
==============
*/

bool __fastcall DebugSocketClientVisionEditor::ClientFrameInternal(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci, bool *outSuccess)
{
  return ?ClientFrameInternal@DebugSocketClientVisionEditor@@MEAA_NPEAUrdbgClientInfo@@PEA_N@Z(this, ci, outSuccess);
}

/*
==============
NET_RemoteDbgSendMessageBlocking
==============
*/

bool __fastcall NET_RemoteDbgSendMessageBlocking(void *ciUser, int msgType, const unsigned __int8 *buffer, unsigned int length)
{
  return ?NET_RemoteDbgSendMessageBlocking@@YA_NPEAXHPEBEI@Z(ciUser, msgType, buffer, length);
}

/*
==============
DebugSocketClient::HandleSendFinished
==============
*/

void __fastcall DebugSocketClient::HandleSendFinished(DebugSocketClient *this)
{
  ?HandleSendFinished@DebugSocketClient@@MEAAXXZ(this);
}

/*
==============
DebugSocketClientVisionEditor::RecvHandlerInternal
==============
*/

void __fastcall DebugSocketClientVisionEditor::RecvHandlerInternal(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci, const char *pCommand, const unsigned int commandLength)
{
  ?RecvHandlerInternal@DebugSocketClientVisionEditor@@MEAAXPEAUrdbgClientInfo@@PEBDI@Z(this, ci, pCommand, commandLength);
}

/*
==============
IWErrorString
==============
*/

char *__fastcall IWErrorString()
{
  return ?IWErrorString@@YAPEADXZ();
}

/*
==============
DebugSocketClient::Disconnect
==============
*/

void __fastcall DebugSocketClient::Disconnect(DebugSocketClient *this)
{
  ?Disconnect@DebugSocketClient@@UEAAXXZ(this);
}

/*
==============
DebugSocketClientFX::RecvHandlerInternal
==============
*/

void __fastcall DebugSocketClientFX::RecvHandlerInternal(DebugSocketClientFX *this, rdbgClientInfo *ci, const char *pCommand, const unsigned int commandLength)
{
  ?RecvHandlerInternal@DebugSocketClientFX@@MEAAXPEAUrdbgClientInfo@@PEBDI@Z(this, ci, pCommand, commandLength);
}

/*
==============
DebugSocketClientRadiant::Disconnect
==============
*/

void __fastcall DebugSocketClientRadiant::Disconnect(DebugSocketClientRadiant *this)
{
  ?Disconnect@DebugSocketClientRadiant@@UEAAXXZ(this);
}

/*
==============
DebugSocketClientVisionEditor::Disconnect
==============
*/

void __fastcall DebugSocketClientVisionEditor::Disconnect(DebugSocketClientVisionEditor *this)
{
  ?Disconnect@DebugSocketClientVisionEditor@@UEAAXXZ(this);
}

/*
==============
NET_RemoteDbgHostWriteToLog
==============
*/

void __fastcall NET_RemoteDbgHostWriteToLog(int channel, const char *text)
{
  ?NET_RemoteDbgHostWriteToLog@@YAXHPEBD@Z(channel, text);
}

/*
==============
DebugSocketClient::RecvFullHandler
==============
*/

void __fastcall DebugSocketClient::RecvFullHandler(DebugSocketClient *this, rdbgClientInfo *ci)
{
  ?RecvFullHandler@DebugSocketClient@@QEAAXPEAUrdbgClientInfo@@@Z(this, ci);
}

/*
==============
DebugSocketClient::SendEnqueue
==============
*/

bool __fastcall DebugSocketClient::SendEnqueue(DebugSocketClient *this, rdbgClientInfo *ci, const char *cmd)
{
  return ?SendEnqueue@DebugSocketClient@@UEAA_NPEAUrdbgClientInfo@@PEBD@Z(this, ci, cmd);
}

/*
==============
DebugSocketClient::ClientFrame
==============
*/

bool __fastcall DebugSocketClient::ClientFrame(DebugSocketClient *this, rdbgClientInfo *ci)
{
  return ?ClientFrame@DebugSocketClient@@QEAA_NPEAUrdbgClientInfo@@@Z(this, ci);
}

/*
==============
DebugSocketClientRadiant::UseKeepAlive
==============
*/

bool __fastcall DebugSocketClientRadiant::UseKeepAlive(DebugSocketClientRadiant *this)
{
  return ?UseKeepAlive@DebugSocketClientRadiant@@MEBA_NXZ(this);
}

/*
==============
DebugSocketClient::HandleError
==============
*/

void __fastcall DebugSocketClient::HandleError(DebugSocketClient *this)
{
  ?HandleError@DebugSocketClient@@MEAAXXZ(this);
}

/*
==============
DebugSocketClientConsole::ClientFrameInternal
==============
*/

bool __fastcall DebugSocketClientConsole::ClientFrameInternal(DebugSocketClientConsole *this, rdbgClientInfo *ci, bool *outSuccess)
{
  return ?ClientFrameInternal@DebugSocketClientConsole@@MEAA_NPEAUrdbgClientInfo@@PEA_N@Z(this, ci, outSuccess);
}

/*
==============
rdbgClientIsConnected
==============
*/

bool __fastcall rdbgClientIsConnected(rdbgClientType_t inType)
{
  return ?rdbgClientIsConnected@@YA_NW4rdbgClientType_t@@@Z(inType);
}

/*
==============
DebugSocketClientVisionEditor::ProcessMessageDebugBlendTree
==============
*/

void __fastcall DebugSocketClientVisionEditor::ProcessMessageDebugBlendTree(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci)
{
  ?ProcessMessageDebugBlendTree@DebugSocketClientVisionEditor@@IEAAXPEAUrdbgClientInfo@@@Z(this, ci);
}

/*
==============
DebugSocketClient::DebugSocketClient
==============
*/

void __fastcall DebugSocketClient::DebugSocketClient(DebugSocketClient *this, rdbgClientType_t clientType, rdbgMsgType_t msgType, rdbgClientState_t recvState, rdbgClientState_t sendState)
{
  ??0DebugSocketClient@@QEAA@W4rdbgClientType_t@@W4rdbgMsgType_t@@W4rdbgClientState_t@@2@Z(this, clientType, msgType, recvState, sendState);
}

/*
==============
DebugSocketClient::HandleLeaving
==============
*/

void __fastcall DebugSocketClient::HandleLeaving(DebugSocketClient *this)
{
  ?HandleLeaving@DebugSocketClient@@MEAAXXZ(this);
}

/*
==============
DebugSocketClientFX::UseKeepAlive
==============
*/

bool __fastcall DebugSocketClientFX::UseKeepAlive(DebugSocketClientFX *this)
{
  return ?UseKeepAlive@DebugSocketClientFX@@MEBA_NXZ(this);
}

/*
==============
DebugSocketClient::SendSetupFromQueue
==============
*/

bool __fastcall DebugSocketClient::SendSetupFromQueue(DebugSocketClient *this, rdbgClientInfo *ci)
{
  return ?SendSetupFromQueue@DebugSocketClient@@MEAA_NPEAUrdbgClientInfo@@@Z(this, ci);
}

/*
==============
DebugSocketClient::AllocQueueMessageForKey
==============
*/

rdbgClientMessageSendQueue_t *__fastcall DebugSocketClient::AllocQueueMessageForKey(DebugSocketClient *this, int inFilterKey)
{
  return ?AllocQueueMessageForKey@DebugSocketClient@@MEAAPEAUrdbgClientMessageSendQueue_t@@H@Z(this, inFilterKey);
}

/*
==============
DecodeDvarRequest
==============
*/

const char *__fastcall DecodeDvarRequest(const char *dvarRequest, DvarRequestType *outRequestType)
{
  return ?DecodeDvarRequest@@YAPEBDPEBDPEAW4DvarRequestType@@@Z(dvarRequest, outRequestType);
}

/*
==============
NET_RemoteDbgHostInitLogBuffer
==============
*/

bool __fastcall NET_RemoteDbgHostInitLogBuffer()
{
  return ?NET_RemoteDbgHostInitLogBuffer@@YA_NXZ();
}

/*
==============
DebugSocketClient::SendSetup
==============
*/

bool __fastcall DebugSocketClient::SendSetup(DebugSocketClient *this, rdbgClientInfo *ci, const char *cmd)
{
  return ?SendSetup@DebugSocketClient@@MEAA_NPEAUrdbgClientInfo@@PEBD@Z(this, ci, cmd);
}

/*
==============
DebugSocketClientVisionEditor::ProcessMessageDebugResult
==============
*/

void __fastcall DebugSocketClientVisionEditor::ProcessMessageDebugResult(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci)
{
  ?ProcessMessageDebugResult@DebugSocketClientVisionEditor@@IEAAXPEAUrdbgClientInfo@@@Z(this, ci);
}

/*
==============
NET_RemoteDbgDisconnectClient
==============
*/

bool __fastcall NET_RemoteDbgDisconnectClient(void *ciUser)
{
  return ?NET_RemoteDbgDisconnectClient@@YA_NPEAX@Z(ciUser);
}

/*
==============
DebugSocketClient::UseKeepAlive
==============
*/

bool __fastcall DebugSocketClient::UseKeepAlive(DebugSocketClient *this)
{
  return ?UseKeepAlive@DebugSocketClient@@MEBA_NXZ(this);
}

/*
==============
DebugSocketClient::DebugSocketClient
==============
*/
void DebugSocketClient::DebugSocketClient(DebugSocketClient *this, rdbgClientType_t clientType, rdbgMsgType_t msgType, rdbgClientState_t recvState, rdbgClientState_t sendState)
{
  this->m_clientType = clientType;
  this->__vftable = (DebugSocketClient_vtbl *)&DebugSocketClient::`vftable';
  this->m_sendState = sendState;
  this->m_msgType = msgType;
  this->m_recvState = recvState;
  this->m_sendQueue = NULL;
}

/*
==============
DebugSocketClientConsole::DebugSocketClientConsole
==============
*/
void DebugSocketClientConsole::DebugSocketClientConsole(DebugSocketClientConsole *this)
{
  this->m_clientType = RDBG_CLIENTTYPE_CONSOLE;
  this->__vftable = (DebugSocketClientConsole_vtbl *)&DebugSocketClientConsole::`vftable';
  this->m_msgType = RDBG_MSG_CONSOLE_OUTPUT;
  this->m_recvState = RDBG_CSTATE_INVALID;
  this->m_sendState = RDBG_CSTATE_CONSOLELOG_SEND;
  this->m_sendQueue = NULL;
}

/*
==============
DebugSocketClientFX::DebugSocketClientFX
==============
*/
void DebugSocketClientFX::DebugSocketClientFX(DebugSocketClientFX *this)
{
  this->m_clientType = RDBG_CLIENTTYPE_FX;
  this->__vftable = (DebugSocketClientFX_vtbl *)&DebugSocketClientFX::`vftable';
  this->m_msgType = RDBG_MSG_FX_COMMAND;
  this->m_recvState = RDBG_CSTATE_FX_COMMAND_RECV;
  this->m_sendState = RDBG_CSTATE_FX_COMMAND_SEND;
  this->m_sendQueue = NULL;
}

/*
==============
DebugSocketClientRadiant::DebugSocketClientRadiant
==============
*/
void DebugSocketClientRadiant::DebugSocketClientRadiant(DebugSocketClientRadiant *this)
{
  this->m_clientType = RDBG_CLIENTTYPE_RADIANT;
  this->__vftable = (DebugSocketClientRadiant_vtbl *)&DebugSocketClientRadiant::`vftable';
  this->m_msgType = RDBG_MSG_RADIANT_COMMAND;
  this->m_recvState = RDBG_CSTATE_RADIANT_COMMAND_RECV;
  this->m_sendState = RDBG_CSTATE_RADIANT_COMMAND_SEND;
  this->m_sendQueue = NULL;
}

/*
==============
DebugSocketClientVisionEditor::DebugSocketClientVisionEditor
==============
*/
void DebugSocketClientVisionEditor::DebugSocketClientVisionEditor(DebugSocketClientVisionEditor *this)
{
  this->m_clientType = RDBG_CLIENTTYPE_VISION_EDITOR;
  this->__vftable = (DebugSocketClientVisionEditor_vtbl *)&DebugSocketClientVisionEditor::`vftable';
  this->m_msgType = RDBG_MSG_VISION_EDITOR;
  this->m_recvState = RDBG_CSTATE_VISION_EDITOR_RECV;
  this->m_sendState = RDBG_CSTATE_VISION_EDITOR_SEND;
  this->m_sendQueue = NULL;
}

/*
==============
DebugSocketClient::AllocQueueMessageForKey
==============
*/
rdbgClientMessageSendQueue_t *DebugSocketClient::AllocQueueMessageForKey(DebugSocketClient *this, int inFilterKey)
{
  rdbgClientMessageSendQueue_t *v4; 
  rdbgClientMessageSendQueue_t *m_sendQueue; 
  rdbgClientMessageSendQueue_t *next; 
  rdbgClientMessageSendQueue_t *result; 

  v4 = NULL;
  if ( inFilterKey >= 0 && (m_sendQueue = this->m_sendQueue) != NULL )
  {
    while ( 1 )
    {
      next = m_sendQueue->next;
      if ( m_sendQueue->filterKey == inFilterKey )
        break;
      v4 = m_sendQueue;
      m_sendQueue = m_sendQueue->next;
      if ( !next )
        goto LABEL_5;
    }
    if ( v4 )
      v4->next = next;
    else
      this->m_sendQueue = next;
    m_sendQueue->next = NULL;
  }
  else
  {
LABEL_5:
    m_sendQueue = (rdbgClientMessageSendQueue_t *)Mem_Virtual_Alloc(0x8128ui64, "SendEnqueue", TRACK_DEBUG);
    if ( !m_sendQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3061, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
      __debugbreak();
  }
  m_sendQueue->next = this->m_sendQueue;
  result = m_sendQueue;
  m_sendQueue->filterKey = inFilterKey;
  this->m_sendQueue = m_sendQueue;
  return result;
}

/*
==============
ClientAssertHandler
==============
*/
char ClientAssertHandler(rdbgClientInfo *ci, const char *assertText)
{
  rdbgClientState_t state; 
  int headerXferCnt; 
  rdbgClientState_t v6; 
  unsigned __int64 v7; 
  int v8; 
  ScopedDevHostMessage v10; 
  int msg; 
  u_long v12; 

  if ( !ci )
    return 0;
  state = ci->state;
  if ( (unsigned int)state <= RDBG_CSTATE_LEAVING || state == RDBG_CSTATE_WELCOME_SEND )
    return 0;
  if ( state == RDBG_CSTATE_HEADERONLY_SEND || (unsigned int)(state - 10) <= 2 )
  {
    headerXferCnt = ci->msgData.headerXferCnt;
    if ( headerXferCnt && !ci->usingDevHost )
    {
      if ( headerXferCnt < 8 && !IWSocketDataSendBLOCKING(ci->socketID, &ci->msgData, 8, 8) )
        return 0;
      v6 = ci->state;
      if ( v6 != RDBG_CSTATE_HEADERONLY_SEND && (((v6 - 10) & 0xFFFFFFFD) == 0 && !IWSocketDataSendBLOCKING(ci->socketID, (char *)&ci->msgData.un.log.endPos + ci->msgData.un.log.currentGen, 33023 - ci->msgData.un.general.bodyXferCnt, ci->msgData.un.welcome.xferCnt - ci->msgData.un.general.bodyXferCnt) || ci->state == RDBG_CSTATE_CONSOLELOG_SEND) )
        return 0;
    }
  }
  v7 = -1i64;
  do
    ++v7;
  while ( assertText[v7] );
  v8 = truncate_cast<int,unsigned __int64>(v7);
  msg = 612169;
  v12 = htonl(v8);
  if ( ci->usingDevHost )
  {
    ScopedDevHostMessage::ScopedDevHostMessage(&v10, 11, ci->type, v8 + 8);
    Com_DevhostSendBody(11, 8u, (const char *)&msg);
    Com_DevhostSendBody(11, v8, assertText);
    ScopedDevHostMessage::~ScopedDevHostMessage(&v10);
    return 1;
  }
  if ( !IWSocketDataSendBLOCKING(ci->socketID, &msg, 8, 8) )
    return 0;
  IWSocketDataSendBLOCKING(ci->socketID, (void *)assertText, v8, v8);
  return 1;
}

/*
==============
DebugSocketClient::ClientFrame
==============
*/
char DebugSocketClient::ClientFrame(DebugSocketClient *this, rdbgClientInfo *ci)
{
  int v4; 
  rdbgClientState_t state; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  __int64 xferCnt; 
  int v10; 
  int v11; 
  scrContext_t *v12; 
  __int64 v13; 
  char result; 
  unsigned int v15; 
  int *v16; 
  int v17; 
  __int64 v18; 
  int *p_endPos; 
  char v20; 
  __int64 v21; 
  int *v22; 
  char v23; 
  rdbgClientState_t v24; 
  unsigned int TickCount64; 
  unsigned int v26; 
  bool v27; 
  ScopedDevHostMessage v28; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3136, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci", -2i64) )
    __debugbreak();
  if ( ci->type != this->m_clientType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3137, ASSERT_TYPE_ASSERT, "(ci->type == GetClientType())", (const char *)&queryFormat, "ci->type == GetClientType()") )
    __debugbreak();
  if ( ci->state == RDBG_CSTATE_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3138, ASSERT_TYPE_ASSERT, "(ci->state != RDBG_CSTATE_DISCONNECTED)", (const char *)&queryFormat, "ci->state != RDBG_CSTATE_DISCONNECTED") )
    __debugbreak();
  v4 = 0;
  state = ci->state;
  v6 = (unsigned int)state;
  while ( 2 )
  {
    v7 = "ci->state == GetRecvState()";
    v8 = "ci->state == RDBG_CSTATE_COMMAND_RECV";
    if ( state == RDBG_CSTATE_IDLE || state == RDBG_CSTATE_HEADER_RECV )
    {
      v27 = HeaderReceive(ci);
      if ( !v27 )
        return 0;
      if ( ci->msgData.headerXferCnt == 8 )
      {
        v27 = SetStateFromNewHeader(ci);
        if ( !v27 )
          return 0;
      }
      v6 = (unsigned int)ci->state;
      if ( (_DWORD)v6 == 3 )
      {
        this->SendSetupFromQueue(this, ci);
        v6 = (unsigned int)ci->state;
      }
      v7 = "ci->state == GetRecvState()";
      v8 = "ci->state == RDBG_CSTATE_COMMAND_RECV";
    }
    switch ( (int)v6 )
    {
      case 1:
        goto $LN27_22;
      case 6:
        goto $LN26_33;
      case 7:
        if ( ci->usingDevHost )
        {
          ScopedDevHostMessage::ScopedDevHostMessage(&v28, 11, ci->type, 8u);
          Com_DevhostSendBody(11, 8u, (const char *)&ci->msgData);
          ClientStateSet_Idle(ci);
          ScopedDevHostMessage::~ScopedDevHostMessage(&v28);
          goto LABEL_97;
        }
        if ( (_DWORD)v6 != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1180, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_HEADERONLY_SEND)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_HEADERONLY_SEND") )
          __debugbreak();
        if ( ci->msgData.headerXferCnt == 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1181, ASSERT_TYPE_ASSERT, "(!HeaderXferIsFinished( ci ))", (const char *)&queryFormat, "!HeaderXferIsFinished( ci )") )
          __debugbreak();
        if ( HeaderSendFragments(ci) )
          goto LABEL_89;
        goto LABEL_97;
      case 8:
        if ( (_DWORD)v6 != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2100, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_COMMAND_RECV)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_COMMAND_RECV") )
          __debugbreak();
        if ( GeneralReceiveGetFragments(ci) )
        {
          xferCnt = ci->msgData.un.welcome.xferCnt;
          if ( (unsigned int)xferCnt > 0x80FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2109, ASSERT_TYPE_ASSERT, "(len <= RDBG_GENERAL_BUFFER_LIMIT)", (const char *)&queryFormat, "len <= RDBG_GENERAL_BUFFER_LIMIT") )
            __debugbreak();
          ci->msgData.un.general.buffer[xferCnt] = 0;
          if ( !I_stristr(ci->msgData.un.general.buffer, "remoteKey") && !I_stristr(ci->msgData.un.general.buffer, "remoteChar") && !I_stristr(ci->msgData.un.general.buffer, "mouseMove") )
            Com_Printf(16, "]%s\n", ci->msgData.un.general.buffer);
          Sys_EnterCriticalSection(CRITSECT_CBUF);
          v10 = strlen_noncrt(ci->msgData.un.general.buffer);
          v11 = v10;
          if ( s_cmd_superUser_textArray[0].cmdsize + v10 < s_cmd_superUser_textArray[0].maxsize )
          {
            memcpy_noncrt(&s_cmd_superUser_textArray[0].data[s_cmd_superUser_textArray[0].cmdsize], &ci->msgData.un.log.endPos, v10 + 1);
            s_cmd_superUser_textArray[0].cmdsize += v11;
            v12 = ScriptContext_Server();
            Scr_MonitorCommand(v12, ci->msgData.un.general.buffer);
          }
          else
          {
            Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", ci->msgData.un.general.buffer);
          }
          Sys_LeaveCriticalSection(CRITSECT_CBUF);
          ClientStateSet_Idle(ci);
        }
        goto LABEL_44;
      case 9:
        if ( (_DWORD)v6 != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1548, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_TABCOMPLETE_RECV)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_TABCOMPLETE_RECV") )
          __debugbreak();
        if ( !GeneralReceiveGetFragments(ci) )
          goto LABEL_97;
        v18 = ci->msgData.un.welcome.xferCnt;
        if ( (unsigned int)v18 < 0x40 )
        {
          ci->msgData.un.general.buffer[v18] = 0;
          p_endPos = &ci->msgData.un.log.endPos;
          do
          {
            v20 = *(_BYTE *)p_endPos;
            *((_BYTE *)p_endPos + 33024) = *(_BYTE *)p_endPos;
            p_endPos = (int *)((char *)p_endPos + 1);
          }
          while ( v20 );
        }
        else
        {
          Com_PrintWarning(16, "Client #%i sent a tab-complete request %i chars long, which is too long (by %zi) to have a reply processed.\n", (unsigned int)ci->clientNum, (unsigned int)v18, 63 - v18);
        }
        goto LABEL_89;
      case 10:
        GeneralSendHandler(ci, 10, "problem sending tabcomplete data");
        goto LABEL_97;
      case 11:
        if ( !ci->usingDevHost )
        {
          ConsoleLogThreadShieldUp(this, v6, "ci->state == RDBG_CSTATE_COMMAND_RECV", "ci->state == GetRecvState()");
          this->SendHandler(this, ci, &ci->msgData.un.log.endPos, 33023i64);
          ConsoleLogThreadShieldDown();
          if ( ci->state == RDBG_CSTATE_IDLE )
            goto $LN26_33;
        }
        goto LABEL_97;
      case 12:
        GeneralSendHandler(ci, 12, "problem sending dvar data");
        goto LABEL_97;
      case 13:
        if ( (_DWORD)v6 != 13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1726, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_DVARREQ_RECV)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_DVARREQ_RECV") )
          __debugbreak();
        if ( !GeneralReceiveGetFragments(ci) )
          goto LABEL_97;
        v21 = ci->msgData.un.welcome.xferCnt;
        if ( (unsigned int)v21 < 0x66 )
        {
          ci->msgData.un.general.buffer[v21] = 0;
          v22 = &ci->msgData.un.log.endPos;
          do
          {
            v23 = *(_BYTE *)v22;
            *((_BYTE *)v22 + 33088) = *(_BYTE *)v22;
            v22 = (int *)((char *)v22 + 1);
          }
          while ( v23 );
        }
        else
        {
          Com_PrintWarning(16, "Client #%i's dvar request is too long at (%i) chars.  Max supported is (%zu) chars.\n", (unsigned int)ci->clientNum, (unsigned int)v21, 101i64);
        }
        goto LABEL_89;
      case 14:
        if ( (_DWORD)v6 != 14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1386, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_UNKNOWNMSG_RECV)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_UNKNOWNMSG_RECV") )
          __debugbreak();
        v15 = ci->msgData.un.welcome.xferCnt - ci->msgData.un.general.bodyXferCnt;
        if ( v15 > 0x8100 )
          v15 = 33024;
        v16 = &ci->msgData.un.log.endPos;
        if ( ci->usingDevHost )
          v17 = Com_DevhostRead(ci, v16, 33024, 0, v15);
        else
          v17 = IWSocketDataRecv(ci->socketID, v16, 33024, 0, v15);
        if ( v17 >= 0 )
        {
          ci->msgData.un.general.bodyXferCnt += v17;
          if ( ci->msgData.un.general.bodyXferCnt == ci->msgData.un.welcome.xferCnt )
LABEL_89:
            ClientStateSet_Idle(ci);
        }
        else
        {
          ClientStateSet_FatalError(ci, NULL);
        }
LABEL_97:
        v24 = ci->state;
        if ( v24 == RDBG_CSTATE_FATALERROR )
        {
$LN27_22:
          ((void (__fastcall *)(DebugSocketClient *, __int64, const char *, const char *))this->HandleError)(this, v6, v8, v7);
          return 0;
        }
        if ( v24 == RDBG_CSTATE_IDLE )
        {
          if ( ((unsigned __int8 (__fastcall *)(DebugSocketClient *, rdbgClientInfo *, bool *, const char *))this->ClientFrameInternal)(this, ci, &v27, v7) )
          {
            result = v27;
          }
          else
          {
            if ( this->UseKeepAlive(this) )
            {
              if ( ci->state != RDBG_CSTATE_IDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2162, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_IDLE)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_IDLE") )
                __debugbreak();
              TickCount64 = GetTickCount64();
              v26 = truncate_cast<unsigned int,unsigned __int64>(TickCount64) / 0x3E8;
              if ( v26 >= ci->timeStamp + 5 )
              {
                ci->timeStamp = v26;
                *(_DWORD *)&ci->msgData.header.keyA = 22345;
                ci->msgData.header.bodyLength = htonl(0);
                ci->msgData.headerXferCnt = 0;
                ci->state = RDBG_CSTATE_HEADERONLY_SEND;
              }
            }
            result = 1;
          }
        }
        else
        {
$LN26_33:
          result = 1;
        }
        break;
      case 15:
      case 17:
      case 21:
        if ( (_DWORD)v6 != this->m_recvState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2891, ASSERT_TYPE_ASSERT, "(ci->state == GetRecvState())", (const char *)&queryFormat, "ci->state == GetRecvState()") )
          __debugbreak();
        if ( GeneralReceiveGetFragments(ci) )
        {
          v13 = ci->msgData.un.welcome.xferCnt;
          if ( (unsigned int)v13 > 0x80FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2900, ASSERT_TYPE_ASSERT, "(len <= RDBG_GENERAL_BUFFER_LIMIT)", (const char *)&queryFormat, "len <= RDBG_GENERAL_BUFFER_LIMIT") )
            __debugbreak();
          ci->msgData.un.general.buffer[v13] = 0;
          this->RecvHandlerInternal(this, ci, (const char *)&ci->msgData.un.log.endPos, v13);
        }
        goto LABEL_44;
      case 16:
      case 20:
      case 22:
        this->SendHandler(this, ci, &ci->msgData.un.log.endPos, 33023i64);
        goto LABEL_97;
      case 18:
      case 19:
        ci->state = RDBG_CSTATE_RADIANT_COMMAND_RECV;
        DebugSocketClient::RecvFullHandler(this, ci);
LABEL_44:
        v6 = (unsigned int)ci->state;
        if ( (_DWORD)v6 != 3 )
          goto LABEL_97;
        if ( ++v4 >= 20 )
          goto LABEL_97;
        state = RDBG_CSTATE_IDLE;
        continue;
      case 23:
        PosRequestRecvHandler(ci);
        goto LABEL_97;
      case 24:
        GeneralSendHandler(ci, 24, "problem sending position data");
        goto LABEL_97;
      default:
        goto LABEL_97;
    }
    return result;
  }
}

/*
==============
DebugSocketClient::ClientFrameInternal
==============
*/
bool DebugSocketClient::ClientFrameInternal(DebugSocketClient *this, rdbgClientInfo *ci, bool *outSuccess)
{
  return 0;
}

/*
==============
DebugSocketClientConsole::ClientFrameInternal
==============
*/
char DebugSocketClientConsole::ClientFrameInternal(DebugSocketClientConsole *this, rdbgClientInfo *ci, bool *outSuccess, __int64 a4)
{
  const char *v6; 
  int v7; 
  const char *v8; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3323, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->tabCompletePrefix[0] )
  {
    *outSuccess = TabCompleteSendSetup(ci);
    if ( ci->tabCompletePrefix[0] )
    {
      v6 = "ci->tabCompletePrefix[0] == 0";
      v7 = 3328;
      v8 = "(ci->tabCompletePrefix[0] == 0)";
      goto LABEL_13;
    }
    return 1;
  }
  if ( ci->dvarRequest[0] )
  {
    *outSuccess = DvarSendSetup(ci);
    if ( !ci->dvarRequest[0] )
      return 1;
    v6 = "ci->dvarRequest[0] == 0";
    v7 = 3335;
    v8 = "(ci->dvarRequest[0] == 0)";
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", v7, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v6) )
      __debugbreak();
    return 1;
  }
  if ( ci->posRequest[0] )
  {
    *outSuccess = PosSendSetup(ci);
    if ( !ci->posRequest[0] )
      return 1;
    v6 = "ci->posRequest[0] == 0";
    v7 = 3342;
    v8 = "(ci->posRequest[0] == 0)";
    goto LABEL_13;
  }
  if ( !ci->usingDevHost )
  {
    ConsoleLogThreadShieldUp(this, ci, outSuccess, a4);
    if ( !ConsoleLogIsInValidState(ci) )
    {
      ConsoleLogResetMarkers(ci);
      ConsoleLogThreadShieldDown();
      Com_Printf(16, "Log position reset for client #%i.\n", (unsigned int)ci->clientNum);
      ConsoleLogThreadShieldUp(v11, v10, v12, v13);
    }
    if ( !ConsoleLogIsUpToDate(ci) )
    {
      *outSuccess = ConsoleLogSendSetup(ci);
      ConsoleLogThreadShieldDown();
      return 1;
    }
    ConsoleLogThreadShieldDown();
  }
  return 0;
}

/*
==============
DebugSocketClientVisionEditor::ClientFrameInternal
==============
*/
char DebugSocketClientVisionEditor::ClientFrameInternal(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci, bool *outSuccess)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3466, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !ci->dvarRequest[0] )
    return 0;
  *outSuccess = DvarSendSetup(ci);
  if ( ci->dvarRequest[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3471, ASSERT_TYPE_ASSERT, "(ci->dvarRequest[0] == 0)", (const char *)&queryFormat, "ci->dvarRequest[0] == 0") )
      __debugbreak();
  }
  return 1;
}

/*
==============
ClientFrame_Connecting
==============
*/
char ClientFrame_Connecting(rdbgClientInfo *ci)
{
  rdbgClientState_t state; 
  int v3; 
  unsigned __int8 messageType; 
  int v6; 
  char *fmt; 
  unsigned __int8 buff; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2223, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->usingDevHost )
    return 1;
  state = ci->state;
  if ( state == RDBG_CSTATE_IDLE )
  {
    ci->state = RDBG_CSTATE_WELCOME_SEND;
    ci->msgData.un.welcome.xferCnt = 0;
  }
  else if ( state != RDBG_CSTATE_WELCOME_SEND )
  {
    goto LABEL_11;
  }
  v3 = IWSocketDataSend(ci->socketID, &g_WelcomePacket, 8, ci->msgData.un.log.currentPos, 8);
  if ( v3 < 0 )
    return 0;
  ci->msgData.un.welcome.xferCnt += v3;
  if ( ci->msgData.un.welcome.xferCnt == 8 )
  {
    ci->state = RDBG_CSTATE_HEADER_RECV;
    ci->msgData.headerXferCnt = 0;
  }
LABEL_11:
  if ( ci->state != RDBG_CSTATE_HEADER_RECV )
    goto LABEL_18;
  if ( !HeaderReceive(ci) )
    return 0;
  if ( HeaderXferIsFinished(ci) )
  {
    messageType = ci->msgData.header.messageType;
    if ( messageType != 1 )
    {
      LODWORD(fmt) = 1;
      Com_PrintError(16, "Remote debug-client #%i sent initial message of type (%i); this host was expecting (%i).\n", (unsigned int)ci->clientNum, messageType, fmt);
      return 0;
    }
    ci->state = RDBG_CSTATE_CLIENTTYPE_RECV;
  }
LABEL_18:
  if ( ci->state == RDBG_CSTATE_CLIENTTYPE_RECV )
  {
    v6 = IWSocketDataRecv(ci->socketID, &buff, 1, 0, 1);
    if ( v6 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2277, ASSERT_TYPE_ASSERT, "(size <= 1)", (const char *)&queryFormat, "size <= 1") )
      __debugbreak();
    if ( v6 < 0 )
      return 0;
    if ( v6 == 1 )
    {
      switch ( buff )
      {
        case 1u:
          ci->type = RDBG_CLIENTTYPE_CONSOLE;
          break;
        case 3u:
          ci->type = RDBG_CLIENTTYPE_VISION_EDITOR;
          break;
        case 4u:
          if ( !BG_IsRadiantLiveEnabled() )
            return 0;
          ci->type = RDBG_CLIENTTYPE_RADIANT;
          break;
        case 6u:
          ci->type = RDBG_CLIENTTYPE_FX;
          break;
        default:
          Com_PrintError(16, "Remote debug-client #%i requested being set to an unrecognized client type (%i).\n", (unsigned int)ci->clientNum, buff);
          return 0;
      }
      ClientStateSet_Idle(ci);
      Com_Printf(0, "Debug-client #%i: client type set to 0x%x.\n", (unsigned int)ci->clientNum, (unsigned int)ci->type);
    }
  }
  return 1;
}

/*
==============
ClientHeaderInit
==============
*/
void ClientHeaderInit(rdbgClientInfo *ci, rdbgMsgType_t type, unsigned int bodyLength)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1038, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( type >= RDBG_MSGCOUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1039, ASSERT_TYPE_ASSERT, "(type < RDBG_MSGCOUNT)", (const char *)&queryFormat, "type < RDBG_MSGCOUNT") )
    __debugbreak();
  *(_WORD *)&ci->msgData.header.keyA = 22345;
  ci->msgData.header.messageType = type;
  ci->msgData.header.messageFlags = 0;
  ci->msgData.header.bodyLength = htonl(bodyLength);
  ci->msgData.headerXferCnt = 0;
}

/*
==============
ClientPrintIP
==============
*/
void ClientPrintIP(rdbgClientInfo *ci)
{
  char *fmt; 
  __int64 v3; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 850, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  LODWORD(v3) = ci->remoteIP[3];
  LODWORD(fmt) = ci->remoteIP[2];
  Com_Printf(16, "%d.%d.%d.%d:%d", ci->remoteIP[0], ci->remoteIP[1], fmt, v3, ci->remotePort);
}

/*
==============
ClientStateSet_FatalError
==============
*/
void ClientStateSet_FatalError(rdbgClientInfo *ci, const char *reason)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1005, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state == RDBG_CSTATE_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1006, ASSERT_TYPE_ASSERT, "(ci->state != RDBG_CSTATE_DISCONNECTED)", (const char *)&queryFormat, "ci->state != RDBG_CSTATE_DISCONNECTED") )
    __debugbreak();
  ci->state = RDBG_CSTATE_FATALERROR;
}

/*
==============
ClientStateSet_Idle
==============
*/
void ClientStateSet_Idle(rdbgClientInfo *ci)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 997, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state == RDBG_CSTATE_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 998, ASSERT_TYPE_ASSERT, "(ci->state != RDBG_CSTATE_DISCONNECTED)", (const char *)&queryFormat, "ci->state != RDBG_CSTATE_DISCONNECTED") )
    __debugbreak();
  ci->state = RDBG_CSTATE_IDLE;
}

/*
==============
ClientStateSet_Leaving
==============
*/
void ClientStateSet_Leaving(rdbgClientInfo *ci)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1018, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state == RDBG_CSTATE_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1019, ASSERT_TYPE_ASSERT, "(ci->state != RDBG_CSTATE_DISCONNECTED)", (const char *)&queryFormat, "ci->state != RDBG_CSTATE_DISCONNECTED") )
    __debugbreak();
  ci->state = RDBG_CSTATE_LEAVING;
}

/*
==============
ClientsAcceptNew
==============
*/
char ClientsAcceptNew(unsigned __int64 hostSocket)
{
  SOCKET v1; 
  SOCKET v2; 
  const char *v3; 
  unsigned int Error; 
  rdbgClientInfo *v6; 
  int v7; 
  __int64 v8; 
  unsigned int TickCount64; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 clientNum; 
  int addrlen; 
  struct sockaddr addr; 

  addrlen = 16;
  v1 = accept(hostSocket, &addr, &addrlen);
  v2 = v1;
  if ( v1 == -1i64 )
  {
    if ( WSAGetLastError() != 10035 && nextPrintTime_1 < Sys_Milliseconds() )
    {
      v3 = NET_ErrorString();
      Com_Printf(16, "Socket accept attempt returned error: %s\n", v3);
      nextPrintTime_1 = Sys_Milliseconds() + 3000;
    }
    return 0;
  }
  else
  {
    addrlen = 1;
    if ( ioctlsocket(v1, -2147195266, (u_long *)&addrlen) )
    {
      Error = WSAGetLastError();
      Com_PrintError(1, "Unable to set socket to non blocking. Error: %d\n", Error);
      closesocket(v2);
      return 0;
    }
    else
    {
      v6 = s_debugSocketClients;
      v7 = 0;
      while ( v6->state )
      {
        ++v7;
        if ( (__int64)++v6 >= (__int64)&unk_14B9E6F40 )
        {
          v8 = -1i64;
          do
            ++v8;
          while ( MY_REJECTREASON[v8] );
          send(v2, MY_REJECTREASON, v8, 0);
          closesocket(v2);
          Com_Printf(16, "Rejected incoming connection.  No more client slots left.\n");
          return 0;
        }
      }
      v6->clientNum = v7;
      v6->socketID = v2;
      if ( v6 == (rdbgClientInfo *)-24i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 554, ASSERT_TYPE_ASSERT, "(IPResult)", (const char *)&queryFormat, "IPResult") )
        __debugbreak();
      v6->remoteIP[0] = addr.sa_data[2];
      v6->remoteIP[1] = addr.sa_data[3];
      v6->remoteIP[2] = addr.sa_data[4];
      v6->remoteIP[3] = addr.sa_data[5];
      v6->remotePort = *(_WORD *)addr.sa_data;
      TickCount64 = GetTickCount64();
      v10 = truncate_cast<unsigned int,unsigned __int64>(TickCount64);
      v6->type = RDBG_CLIENTTYPE_UNSPECIFIED;
      v11 = v10 / 0x3E8;
      v6->timeStamp = v11;
      v6->tabCompletePrefix[0] = 0;
      v6->dvarRequest[0] = 0;
      v6->usingDevHost = 0;
      ConsoleLogThreadShieldUp(v10, v11, v12, v13);
      ConsoleLogResetMarkers(v6);
      ConsoleLogThreadShieldDown();
      clientNum = (unsigned int)v6->clientNum;
      v6->state = RDBG_CSTATE_IDLE;
      Com_Printf(16, "Client #%i connected from: ", clientNum);
      ClientPrintIP(v6);
      Com_Printf(16, "\n");
      return 1;
    }
  }
}

/*
==============
ClientsFrame
==============
*/
char ClientsFrame()
{
  rdbgClientInfo *v0; 
  rdbgClientState_t state; 
  __int64 type; 
  char v3; 
  DebugSocketClient **v4; 
  DebugSocketClient *v5; 

  ++g_netDebugSocketFrameCount;
  v0 = s_debugSocketClients;
  do
  {
    state = v0->state;
    if ( state )
    {
      if ( state == RDBG_CSTATE_LEAVING )
      {
        Net_DbgSockets_ClientDisconnect(v0);
      }
      else if ( state == RDBG_CSTATE_FATALERROR )
      {
        Com_Printf(16, "Client #%i force-disconnected due to error.\n", (unsigned int)v0->clientNum);
        Net_DbgSockets_ClientDisconnect(v0);
      }
      else
      {
        type = (unsigned int)v0->type;
        if ( (_DWORD)type )
        {
          v4 = g_debugSocketClients;
          while ( 1 )
          {
            v5 = *v4;
            if ( (*v4)->m_clientType == (_DWORD)type )
              break;
            if ( (__int64)++v4 >= (__int64)&unk_147EB5358 )
              goto LABEL_12;
          }
          if ( !v5 )
          {
LABEL_12:
            Com_Printf(16, "Client is unhandled type '%i'.\n", type);
            goto LABEL_13;
          }
          v3 = DebugSocketClient::ClientFrame(v5, v0);
        }
        else
        {
          v3 = ClientFrame_Connecting(v0);
        }
        if ( !v3 )
LABEL_13:
          ClientStateSet_Leaving(v0);
      }
    }
    ++v0;
  }
  while ( (__int64)v0 < (__int64)&unk_14B9E6F40 );
  return 1;
}

/*
==============
Com_DevhostRDBGCallback
==============
*/
char Com_DevhostRDBGCallback(ComDevhostReadHandle *handle)
{
  __int16 m_command; 
  rdbgClientType_t *v3; 
  int v4; 
  int v5; 
  rdbgClientInfo *v6; 
  unsigned int TickCount64; 
  unsigned int v9; 
  rdbgClientType_t v10; 
  rdbgClientType_t v11; 
  int v12; 
  rdbgClientType_t *p_type; 
  unsigned int v14; 
  unsigned __int8 desbuf; 

  m_command = handle->m_command;
  if ( m_command )
  {
    v11 = m_command;
    v12 = 0;
    p_type = &s_debugSocketClients[0].type;
    while ( *p_type != v11 )
    {
      ++v12;
      p_type += 8318;
      if ( (__int64)p_type >= (__int64)&unk_14B9E6F44 )
        return 0;
    }
    if ( &s_debugSocketClients[v12] )
    {
      if ( s_devhostRecvBuffer.bodyXferCnt != s_devhostRecvBuffer.bodyLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 897, ASSERT_TYPE_ASSERT, "(s_devhostRecvBuffer.bodyXferCnt == s_devhostRecvBuffer.bodyLength)", (const char *)&queryFormat, "s_devhostRecvBuffer.bodyXferCnt == s_devhostRecvBuffer.bodyLength") )
        __debugbreak();
      s_devhostRecvBuffer.clientType = v11;
      s_devhostRecvBuffer.bodyXferCnt = 0;
      v14 = 33024;
      if ( handle->m_size - handle->m_bytesRead <= 0x8100 )
        v14 = handle->m_size - handle->m_bytesRead;
      s_devhostRecvBuffer.bodyLength = v14;
      ComDevhostReadHandle::Read(handle, (unsigned __int8 *)s_devhostRecvBuffer.buffer, v14);
    }
    return 0;
  }
  else
  {
    ComDevhostReadHandle::Read(handle, &desbuf, 1u);
    v3 = &s_debugSocketClients[0].type;
    v4 = 0;
    v5 = 0;
    while ( *v3 != (char)desbuf )
    {
      ++v5;
      v3 += 8318;
      if ( (__int64)v3 >= (__int64)&unk_14B9E6F44 )
        goto LABEL_7;
    }
    v6 = &s_debugSocketClients[v5];
    if ( v6 )
      goto LABEL_12;
LABEL_7:
    v6 = s_debugSocketClients;
    while ( v6->state )
    {
      ++v4;
      if ( (__int64)++v6 >= (__int64)&unk_14B9E6F40 )
        return 1;
    }
    v6->clientNum = v4;
LABEL_12:
    TickCount64 = GetTickCount64();
    v9 = truncate_cast<unsigned int,unsigned __int64>(TickCount64);
    v10 = (char)desbuf;
    v6->timeStamp = v9 / 0x3E8;
    v6->tabCompletePrefix[0] = 0;
    v6->dvarRequest[0] = 0;
    v6->usingDevHost = 1;
    v6->state = RDBG_CSTATE_IDLE;
    v6->type = v10;
    Com_DevhostSendMessage(11, 0, 8u, (const char *)&g_WelcomePacket);
    return 1;
  }
}

/*
==============
Com_DevhostRead
==============
*/
__int64 Com_DevhostRead(rdbgClientInfo *ci, void *buff, int buffSize, int transferedSoFar, int totalNeeded)
{
  __int64 v5; 
  unsigned int bodyXferCnt; 
  unsigned int bodyLength; 
  int v11; 

  v5 = transferedSoFar;
  if ( !buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 921, ASSERT_TYPE_ASSERT, "(buff)", (const char *)&queryFormat, "buff") )
    __debugbreak();
  if ( buffSize < totalNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 922, ASSERT_TYPE_ASSERT, "(buffSize >= totalNeeded)", (const char *)&queryFormat, "buffSize >= totalNeeded") )
    __debugbreak();
  if ( totalNeeded <= (int)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 923, ASSERT_TYPE_ASSERT, "(totalNeeded > transferedSoFar)", (const char *)&queryFormat, "totalNeeded > transferedSoFar") )
    __debugbreak();
  bodyXferCnt = s_devhostRecvBuffer.bodyXferCnt;
  bodyLength = s_devhostRecvBuffer.bodyLength;
  if ( s_devhostRecvBuffer.bodyXferCnt >= s_devhostRecvBuffer.bodyLength )
  {
    Com_DevhostUpdate(2048);
    bodyXferCnt = s_devhostRecvBuffer.bodyXferCnt;
    bodyLength = s_devhostRecvBuffer.bodyLength;
  }
  v11 = bodyLength - bodyXferCnt;
  if ( !v11 || ci->type != s_devhostRecvBuffer.clientType )
    return 0i64;
  if ( totalNeeded - (int)v5 <= v11 )
    v11 = totalNeeded - v5;
  if ( v11 > 0 )
  {
    memcpy_0((char *)buff + v5, &s_devhostRecvBuffer.buffer[bodyXferCnt], v11);
    s_devhostRecvBuffer.bodyXferCnt += v11;
  }
  return (unsigned int)v11;
}

/*
==============
ConsoleLogIsInValidState
==============
*/
bool ConsoleLogIsInValidState(rdbgClientInfo *ci)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1903, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  return ConsoleLogPosIsValid(ci->logGen, ci->logPos);
}

/*
==============
ConsoleLogIsUpToDate
==============
*/
bool ConsoleLogIsUpToDate(rdbgClientInfo *ci)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1877, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  return g_log.gen == ci->logGen && g_log.pos == ci->logPos;
}

/*
==============
ConsoleLogPosIsValid
==============
*/
bool ConsoleLogPosIsValid(int logGen, int logPos)
{
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  return g_log.gen == logGen && (g_log.pos == logPos || g_log.pos > logPos) || g_log.gen - 1 == logGen && g_log.pos <= logPos;
}

/*
==============
ConsoleLogResetMarkers
==============
*/
void ConsoleLogResetMarkers(rdbgClientInfo *ci)
{
  int pos; 
  int logGen; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1914, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  if ( g_log.gen )
  {
    ci->logGen = g_log.gen;
    pos = g_log.pos;
    ci->logPos = g_log.pos;
    logGen = ci->logGen;
  }
  else
  {
    pos = 0;
    *(_QWORD *)&ci->logPos = 0i64;
    logGen = 0;
  }
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  if ( (g_log.gen != logGen || g_log.pos != pos && g_log.pos <= pos) && (g_log.gen - 1 != logGen || g_log.pos > pos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1928, ASSERT_TYPE_ASSERT, "(ConsoleLogIsInValidState( ci ))", (const char *)&queryFormat, "ConsoleLogIsInValidState( ci )") )
    __debugbreak();
}

/*
==============
ConsoleLogSendChunks
==============
*/
int ConsoleLogSendChunks(rdbgClientInfo *ci)
{
  int result; 
  int currentPos; 
  int v4; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2019, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != RDBG_CSTATE_CONSOLELOG_SEND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2020, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_CONSOLELOG_SEND)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_CONSOLELOG_SEND") )
    __debugbreak();
  if ( ConsoleLogSendIsFinished(ci) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2021, ASSERT_TYPE_ASSERT, "(!ConsoleLogSendIsFinished( ci ))", (const char *)&queryFormat, "!ConsoleLogSendIsFinished( ci )") )
    __debugbreak();
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  if ( !ConsoleLogPosIsValid(ci->msgData.un.log.currentGen, ci->msgData.un.log.currentPos) )
    return -1;
  if ( ci->msgData.un.general.bodyXferCnt == ci->msgData.un.log.endGen - 1 )
  {
    currentPos = ci->msgData.un.log.currentPos;
    v4 = 0x40000 - currentPos;
    result = ConsoleLogSendSegment(ci, currentPos, 0x40000 - currentPos);
    if ( result < 0 )
      return result;
    if ( result != v4 )
      goto LABEL_26;
    ++ci->msgData.un.general.bodyXferCnt;
    ci->msgData.un.welcome.xferCnt = 0;
    if ( ConsoleLogSendIsFinished(ci) )
      return 1;
  }
  if ( ci->msgData.un.general.bodyXferCnt != ci->msgData.un.log.endGen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2046, ASSERT_TYPE_ASSERT, "(ci->msgData.un.log.currentGen == ci->msgData.un.log.endGen)", (const char *)&queryFormat, "MY_GEN == MY_ENDGEN") )
    __debugbreak();
  if ( ci->msgData.un.welcome.xferCnt == ci->msgData.un.log.endPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2047, ASSERT_TYPE_ASSERT, "(ci->msgData.un.log.currentPos != ci->msgData.un.log.endPos)", (const char *)&queryFormat, "MY_POS != MY_ENDPOS") )
    __debugbreak();
  result = ConsoleLogSendSegment(ci, ci->msgData.un.log.currentPos, ci->msgData.un.log.endPos - ci->msgData.un.welcome.xferCnt);
  if ( result >= 0 )
  {
LABEL_26:
    ci->msgData.un.welcome.xferCnt += result;
    return 1;
  }
  return result;
}

/*
==============
ConsoleLogSendIsFinished
==============
*/
bool ConsoleLogSendIsFinished(rdbgClientInfo *ci)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1996, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != RDBG_CSTATE_CONSOLELOG_SEND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1997, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_CONSOLELOG_SEND)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_CONSOLELOG_SEND") )
    __debugbreak();
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  return ci->msgData.un.welcome.xferCnt == ci->msgData.un.log.endPos && ci->msgData.un.general.bodyXferCnt == ci->msgData.un.log.endGen;
}

/*
==============
ConsoleLogSendSegment
==============
*/
int ConsoleLogSendSegment(rdbgClientInfo *ci, int startPos, int len)
{
  __int64 v3; 

  v3 = startPos;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1957, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != RDBG_CSTATE_CONSOLELOG_SEND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1958, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_CONSOLELOG_SEND)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_CONSOLELOG_SEND") )
    __debugbreak();
  if ( (int)v3 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1959, ASSERT_TYPE_ASSERT, "(startPos >= 0)", (const char *)&queryFormat, "startPos >= 0") )
    __debugbreak();
  if ( (int)v3 + len > 0x40000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1960, ASSERT_TYPE_ASSERT, "((startPos + len) <= TEXTPOOL_BUFFER_SIZE)", (const char *)&queryFormat, "(startPos + len) <= TEXTPOOL_BUFFER_SIZE") )
    __debugbreak();
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  return IWSocketDataSend(ci->socketID, &g_log.text[v3], 0x40000 - v3, 0, len);
}

/*
==============
ConsoleLogSendSetup
==============
*/
char ConsoleLogSendSetup(rdbgClientInfo *ci)
{
  int logPos; 
  int logGen; 
  int v4; 
  int v5; 
  int gen; 
  int pos; 
  u_long v8; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1972, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != RDBG_CSTATE_IDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1973, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_IDLE)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_IDLE") )
    __debugbreak();
  logPos = ci->logPos;
  logGen = ci->logGen;
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  if ( (g_log.gen != logGen || g_log.pos != logPos && g_log.pos <= logPos) && (g_log.gen - 1 != logGen || g_log.pos > logPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1974, ASSERT_TYPE_ASSERT, "(ConsoleLogIsInValidState( ci ))", (const char *)&queryFormat, "ConsoleLogIsInValidState( ci )") )
    __debugbreak();
  if ( ConsoleLogIsUpToDate(ci) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1975, ASSERT_TYPE_ASSERT, "(!ConsoleLogIsUpToDate( ci ))", (const char *)&queryFormat, "!ConsoleLogIsUpToDate( ci )") )
    __debugbreak();
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  v4 = ci->logGen;
  v5 = ci->logPos;
  ci->msgData.un.welcome.xferCnt = v5;
  ci->msgData.un.general.bodyXferCnt = v4;
  ci->state = RDBG_CSTATE_CONSOLELOG_SEND;
  ci->msgData.un.log.endPos = g_log.pos;
  ci->msgData.un.log.endGen = g_log.gen;
  gen = g_log.gen;
  pos = g_log.pos;
  if ( v4 == g_log.gen )
  {
    if ( v5 >= g_log.pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1938, ASSERT_TYPE_ASSERT, "(fromPos < toPos)", (const char *)&queryFormat, "fromPos < toPos") )
      __debugbreak();
    v8 = pos - v5;
  }
  else
  {
    if ( v4 >= g_log.gen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1944, ASSERT_TYPE_ASSERT, "(toGen > fromGen)", (const char *)&queryFormat, "toGen > fromGen") )
      __debugbreak();
    if ( gen != v4 + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1945, ASSERT_TYPE_ASSERT, "(toGen == (fromGen + 1))", (const char *)&queryFormat, "toGen == (fromGen + 1)") )
      __debugbreak();
    v8 = pos - v5 + 0x40000;
  }
  *(_DWORD *)&ci->msgData.header.keyA = 284489;
  ci->msgData.header.bodyLength = htonl(v8);
  ci->msgData.headerXferCnt = 0;
  ci->logPos = g_log.pos;
  ci->logGen = g_log.gen;
  return 1;
}

/*
==============
ConsoleLogThreadShieldDown
==============
*/
void ConsoleLogThreadShieldDown()
{
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1856, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  g_logShield = 0;
  Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_HOST_LOGBUFFER);
}

/*
==============
ConsoleLogThreadShieldUp
==============
*/
void ConsoleLogThreadShieldUp()
{
  Sys_EnterCriticalSection(CRITSECT_DBGSOCKETS_HOST_LOGBUFFER);
  if ( g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1847, ASSERT_TYPE_ASSERT, "(!g_logShield)", (const char *)&queryFormat, "!g_logShield") )
    __debugbreak();
  g_logShield = 1;
}

/*
==============
CreateHostSocket
==============
*/
SOCKET CreateHostSocket(unsigned __int16 portNum)
{
  int v2; 
  HSTRING v3; 
  int ActivationFactoryByPCWSTR; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  SOCKET v8; 
  SOCKET v9; 
  char *v10; 
  char *v12; 
  unsigned int Error; 
  char optval[4]; 
  __int64 v15; 
  Platform::Guid pGuid; 
  __int64 v17; 
  void *ppActivationFactory; 
  HSTRING v19[3]; 
  HSTRING_HEADER v20; 
  struct sockaddr name; 

  v19[1] = (HSTRING)-2i64;
  *(_WORD *)optval = portNum;
  v2 = WindowsCreateStringReference_0(L"DebugTraffic", 0xCu, &v20, v19);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = v19[0];
  pGuid.__vftable = (Platform::Object_vtbl *)0x47E1697A46745A18i64;
  *(_DWORD *)&pGuid.__d = 1909220027;
  *(_DWORD *)&pGuid.__h = -1931669538;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Networking.SecureDeviceAssociationTemplate", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v17 = 0i64;
  v5 = (*(__int64 (__fastcall **)(void *, HSTRING, __int64 *))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, v3, &v17);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = v17;
  v7 = v17;
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8i64))(v17);
    v6 = v17;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  v15 = 0i64;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v15 = 0i64;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  v8 = socket(2, 1, 0);
  v9 = v8;
  if ( v8 == -1i64 )
    return -1i64;
  *(_DWORD *)optval = 1;
  if ( setsockopt(v8, 0xFFFF, 4, optval, 4) < 0 )
    Com_Printf(25, "Failed to set SO_REUSEADDR on socket.\n");
  *(_QWORD *)&name.sa_data[6] = 0i64;
  *(_QWORD *)&name.sa_family = 2i64;
  *(_WORD *)name.sa_data = htons(portNum);
  *(_DWORD *)&name.sa_data[2] = 0;
  if ( bind(v9, &name, 16) < 0 )
  {
    v10 = NET_ErrorString();
    Com_PrintError(1, "bind %d failed: %s\n", portNum, v10);
LABEL_17:
    closesocket(v9);
    return -1i64;
  }
  if ( listen(v9, 8) < 0 )
  {
    v12 = NET_ErrorString();
    Com_PrintError(1, "listen %d failed: %s\n", portNum, v12);
    goto LABEL_17;
  }
  *(_DWORD *)optval = 1;
  if ( !ioctlsocket(v9, -2147195266, (u_long *)optval) )
    return v9;
  Error = WSAGetLastError();
  Com_PrintError(1, "Unable to set socket to non blocking. Error: %d\n", Error);
  closesocket(v9);
  return 0i64;
}

/*
==============
DecodeDvarRequest
==============
*/
const char *DecodeDvarRequest(const char *dvarRequest, DvarRequestType *outRequestType)
{
  bool v2; 
  __int64 v5; 
  char *v6; 
  __int64 v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  char *v12; 
  __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  char *v17; 
  char v18; 
  __int64 v19; 
  char v20; 
  char v21[8]; 
  char v22[8]; 
  char v23[8]; 

  v2 = *dvarRequest == 63;
  strcpy(v23, "?INFO.");
  strcpy(v21, "?INFO*");
  strcpy(v22, "?INFO>");
  if ( v2 )
  {
    v5 = 6i64;
    v6 = v21;
    v7 = 6i64;
    while ( 1 )
    {
      v8 = v6[dvarRequest - v21];
      v9 = v7;
      v10 = *v6++;
      --v7;
      if ( !v9 )
      {
LABEL_6:
        *outRequestType = INFO_BEGIN;
        return dvarRequest + 6;
      }
      if ( v8 != v10 )
        break;
      if ( !v8 )
        goto LABEL_6;
    }
    v12 = v22;
    v13 = 6i64;
    while ( 1 )
    {
      v14 = v12[dvarRequest - v22];
      v15 = v13;
      v16 = *v12++;
      --v13;
      if ( !v15 )
      {
LABEL_11:
        *outRequestType = INFO_MORE;
        return dvarRequest + 6;
      }
      if ( v14 != v16 )
        break;
      if ( !v14 )
        goto LABEL_11;
    }
    v17 = v23;
    do
    {
      v18 = v17[dvarRequest - v23];
      v19 = v5;
      v20 = *v17++;
      --v5;
      if ( !v19 )
        break;
      if ( v18 != v20 )
        goto LABEL_17;
    }
    while ( v18 );
    *outRequestType = INFO_SINGLE;
    return dvarRequest + 6;
  }
  else
  {
LABEL_17:
    *outRequestType = DVAR;
    return dvarRequest;
  }
}

/*
==============
DebugSocketClient::Disconnect
==============
*/
void DebugSocketClient::Disconnect(DebugSocketClient *this)
{
  this->FreeSendQueue(this);
}

/*
==============
DebugSocketClientRadiant::Disconnect
==============
*/
void DebugSocketClientRadiant::Disconnect(DebugSocketClientRadiant *this)
{
  CG_SetRadiantStatus(0);
  this->FreeSendQueue(this);
}

/*
==============
DebugSocketClientVisionEditor::Disconnect
==============
*/
void DebugSocketClientVisionEditor::Disconnect(DebugSocketClientVisionEditor *this)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 

  if ( cg_t::ms_allocatedType )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v3 = LocalClientGlobals;
    if ( LocalClientGlobals )
    {
      CG_VisionSetSetBlendOn(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_ROOT);
      v3->refdef.visionSetToolConnected = 0;
    }
  }
  this->FreeSendQueue(this);
}

/*
==============
DvarSendSetup
==============
*/
bool DvarSendSetup(rdbgClientInfo *ci)
{
  bool v1; 
  __int64 v3; 
  __int64 v4; 
  signed __int64 v5; 
  char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  int *p_endPos; 
  __int64 v11; 
  char *v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  char *v16; 
  char v17; 
  __int64 v18; 
  char v19; 
  const dvar_t *VarByName; 
  const char *v21; 
  unsigned __int64 v22; 
  unsigned int v23; 
  bool result; 
  char v25[8]; 
  char v26[8]; 
  char v27[8]; 

  v1 = ci->dvarRequest[0] == 63;
  strcpy(v27, "?INFO.");
  strcpy(v25, "?INFO*");
  strcpy(v26, "?INFO>");
  if ( v1 )
  {
    v3 = 6i64;
    v4 = 6i64;
    v5 = ci->dvarRequest - v25;
    v6 = v25;
    while ( 1 )
    {
      v7 = v6[v5];
      v8 = v4;
      v9 = *v6++;
      --v4;
      if ( !v8 )
      {
LABEL_6:
        p_endPos = &ci->msgData.un.log.endPos;
        GetDvarInfoBegin(ci->msgData.un.general.buffer, 0x8100u);
        goto LABEL_21;
      }
      if ( v7 != v9 )
        break;
      if ( !v7 )
        goto LABEL_6;
    }
    v11 = 6i64;
    v12 = v26;
    while ( 1 )
    {
      v13 = v12[ci->dvarRequest - v26];
      v14 = v11;
      v15 = *v12++;
      --v11;
      if ( !v14 )
      {
LABEL_11:
        p_endPos = &ci->msgData.un.log.endPos;
        GetDvarInfoMore(&ci->dvarRequest[6], ci->msgData.un.general.buffer, 0x8100u);
        goto LABEL_21;
      }
      if ( v13 != v15 )
        break;
      if ( !v13 )
        goto LABEL_11;
    }
    v16 = v27;
    do
    {
      v17 = v16[ci->dvarRequest - v27];
      v18 = v3;
      v19 = *v16++;
      --v3;
      if ( !v18 )
        break;
      if ( v17 != v19 )
        goto LABEL_17;
    }
    while ( v17 );
    p_endPos = &ci->msgData.un.log.endPos;
    GetDvarInfoSingle(&ci->dvarRequest[6], ci->msgData.un.general.buffer, 0x8100u);
  }
  else
  {
LABEL_17:
    VarByName = Dvar_FindVarByName(ci->dvarRequest);
    if ( VarByName )
      v21 = Dvar_DisplayableValue(VarByName);
    else
      v21 = (char *)&queryFormat.fmt + 3;
    p_endPos = &ci->msgData.un.log.endPos;
    Com_sprintf(ci->msgData.un.general.buffer, 0x8100ui64, "%s,%s", ci->dvarRequest, v21);
  }
LABEL_21:
  ci->state = RDBG_CSTATE_DVAR_SEND;
  v22 = -1i64;
  do
    ++v22;
  while ( *((_BYTE *)p_endPos + v22) );
  v23 = truncate_cast<unsigned int,unsigned __int64>(v22);
  ci->msgData.un.welcome.xferCnt = v23;
  ci->msgData.un.general.bodyXferCnt = 0;
  *(_DWORD *)&ci->msgData.header.keyA = 481097;
  ci->msgData.header.bodyLength = htonl(v23);
  result = 1;
  ci->msgData.headerXferCnt = 0;
  ci->dvarRequest[0] = 0;
  return result;
}

/*
==============
DebugSocketClient::FreeSendQueue
==============
*/
void DebugSocketClient::FreeSendQueue(DebugSocketClient *this)
{
  rdbgClientMessageSendQueue_t *m_sendQueue; 
  rdbgClientMessageSendQueue_t *next; 

  m_sendQueue = this->m_sendQueue;
  this->m_sendQueue = NULL;
  if ( m_sendQueue )
  {
    do
    {
      next = m_sendQueue->next;
      Mem_Virtual_Free(m_sendQueue);
      m_sendQueue = next;
    }
    while ( next );
  }
}

/*
==============
GeneralReceiveGetFragments
==============
*/
char GeneralReceiveGetFragments(rdbgClientInfo *ci)
{
  unsigned int state; 
  int v3; 
  int *p_endPos; 
  int currentGen; 
  int v6; 
  int fmt; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1256, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  state = ci->state;
  if ( state > 0x17 || (v3 = 11444992, !_bittest(&v3, state)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1257, ASSERT_TYPE_ASSERT, "(IsReceiveState( ci->state ))", (const char *)&queryFormat, "IsReceiveState( ci->state )") )
      __debugbreak();
  }
  if ( ci->msgData.un.welcome.xferCnt > 0x80FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1259, ASSERT_TYPE_ASSERT, "(ci->msgData.un.general.bodyLength <= RDBG_GENERAL_BUFFER_LIMIT)", (const char *)&queryFormat, "ci->msgData.un.general.bodyLength <= RDBG_GENERAL_BUFFER_LIMIT") )
    __debugbreak();
  if ( ci->msgData.un.general.bodyXferCnt >= 0x80FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1260, ASSERT_TYPE_ASSERT, "(ci->msgData.un.general.bodyXferCnt < RDBG_GENERAL_BUFFER_LIMIT)", (const char *)&queryFormat, "ci->msgData.un.general.bodyXferCnt < RDBG_GENERAL_BUFFER_LIMIT") )
    __debugbreak();
  if ( !GeneralReceiveIsFinished(ci) )
  {
    p_endPos = &ci->msgData.un.log.endPos;
    currentGen = ci->msgData.un.log.currentGen;
    fmt = ci->msgData.un.log.currentPos;
    if ( ci->usingDevHost )
      v6 = Com_DevhostRead(ci, p_endPos, 33023, currentGen, fmt);
    else
      v6 = IWSocketDataRecv(ci->socketID, p_endPos, 33023, currentGen, fmt);
    if ( v6 < 0 )
    {
      ClientStateSet_FatalError(ci, NULL);
      return 0;
    }
    ci->msgData.un.general.bodyXferCnt += v6;
    if ( !GeneralReceiveIsFinished(ci) )
      return 0;
  }
  return 1;
}

/*
==============
GeneralReceiveIsFinished
==============
*/
bool GeneralReceiveIsFinished(rdbgClientInfo *ci)
{
  unsigned int state; 
  int v3; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1241, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  state = ci->state;
  if ( state > 0x17 || (v3 = 11444992, !_bittest(&v3, state)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1242, ASSERT_TYPE_ASSERT, "(IsReceiveState( ci->state ))", (const char *)&queryFormat, "IsReceiveState( ci->state )") )
      __debugbreak();
  }
  if ( ci->msgData.un.general.bodyXferCnt > ci->msgData.un.welcome.xferCnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1243, ASSERT_TYPE_ASSERT, "(ci->msgData.un.general.bodyXferCnt <= ci->msgData.un.general.bodyLength)", (const char *)&queryFormat, "ci->msgData.un.general.bodyXferCnt <= ci->msgData.un.general.bodyLength") )
    __debugbreak();
  return ci->msgData.un.general.bodyXferCnt == ci->msgData.un.welcome.xferCnt;
}

/*
==============
GeneralRecieveSetup
==============
*/
bool GeneralRecieveSetup(rdbgClientInfo *ci, rdbgClientState_t newState)
{
  unsigned int bodyLength; 
  bool result; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1364, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != RDBG_CSTATE_HEADER_RECV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1365, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_HEADER_RECV)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_HEADER_RECV") )
    __debugbreak();
  if ( !IsReceiveState(newState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1366, ASSERT_TYPE_ASSERT, "(IsReceiveState( newState ))", (const char *)&queryFormat, "IsReceiveState( newState )") )
    __debugbreak();
  bodyLength = ci->msgData.header.bodyLength;
  if ( bodyLength <= 0x80FF )
  {
    ci->msgData.un.welcome.xferCnt = bodyLength;
    result = 1;
    ci->state = newState;
    ci->msgData.un.general.bodyXferCnt = 0;
  }
  else
  {
    Com_Printf(16, "Debugsockets: Incoming command of length %u is too long for our buffer.\n", bodyLength);
    return 0;
  }
  return result;
}

/*
==============
GeneralSendHandler
==============
*/
void GeneralSendHandler(rdbgClientInfo *ci, int assumedState, const char *errorMessage)
{
  unsigned int xferCnt; 
  unsigned int v6; 
  int v7; 
  ScopedDevHostMessage v8; 

  if ( ci->usingDevHost )
  {
    ScopedDevHostMessage::ScopedDevHostMessage(&v8, 11, ci->type, ci->msgData.un.welcome.xferCnt + 8);
    Com_DevhostSendBody(11, 8u, (const char *)&ci->msgData);
    xferCnt = ci->msgData.un.welcome.xferCnt;
    if ( xferCnt )
    {
      Com_DevhostSendBody(11, xferCnt, ci->msgData.un.general.buffer);
      xferCnt = ci->msgData.un.welcome.xferCnt;
    }
    ci->msgData.un.general.bodyXferCnt = xferCnt;
    ClientStateSet_Idle(ci);
    ScopedDevHostMessage::~ScopedDevHostMessage(&v8);
  }
  else
  {
    if ( ci->state != assumedState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1768, ASSERT_TYPE_ASSERT, "(ci->state == assumedState)", (const char *)&queryFormat, "ci->state == assumedState", -2i64) )
      __debugbreak();
    if ( HeaderSendFragments(ci) )
    {
      v6 = ci->msgData.un.welcome.xferCnt;
      if ( !v6 )
        goto LABEL_16;
      if ( v6 == ci->msgData.un.general.bodyXferCnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1780, ASSERT_TYPE_ASSERT, "(!GeneralSendIsFinished( ci ))", (const char *)&queryFormat, "!GeneralSendIsFinished( ci )") )
        __debugbreak();
      v7 = IWSocketDataSend(ci->socketID, &ci->msgData.un.log.endPos, 33023, ci->msgData.un.log.currentGen, ci->msgData.un.log.currentPos);
      if ( v7 < 0 )
      {
        ClientStateSet_FatalError(ci, errorMessage);
        return;
      }
      ci->msgData.un.general.bodyXferCnt += v7;
      if ( GeneralSendIsFinished(ci) )
LABEL_16:
        ClientStateSet_Idle(ci);
    }
  }
}

/*
==============
GeneralSendIsFinished
==============
*/
bool GeneralSendIsFinished(rdbgClientInfo *ci)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1155, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  return ci->msgData.un.welcome.xferCnt == ci->msgData.un.general.bodyXferCnt;
}

/*
==============
DebugSocketClient::HandleError
==============
*/
void DebugSocketClient::HandleError(DebugSocketClient *this)
{
  ;
}

/*
==============
DebugSocketClient::HandleLeaving
==============
*/
void DebugSocketClient::HandleLeaving(DebugSocketClient *this)
{
  ;
}

/*
==============
DebugSocketClient::HandleSendFinished
==============
*/
void DebugSocketClient::HandleSendFinished(DebugSocketClient *this)
{
  ;
}

/*
==============
HeaderReceive
==============
*/
char HeaderReceive(rdbgClientInfo *ci)
{
  rdbgClientState_t state; 
  rdbgClientState_t v3; 
  int headerXferCnt; 
  rdbgClientMessageInfo_t *p_msgData; 
  int v6; 
  rdbgClientMessageInfo_t *v8; 
  u_long v9; 
  bool v10; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1195, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  state = ci->state;
  if ( state != RDBG_CSTATE_IDLE && state != RDBG_CSTATE_HEADER_RECV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1196, ASSERT_TYPE_ASSERT, "((ci->state == RDBG_CSTATE_IDLE) || (ci->state == RDBG_CSTATE_HEADER_RECV))", (const char *)&queryFormat, "(ci->state == RDBG_CSTATE_IDLE) || (ci->state == RDBG_CSTATE_HEADER_RECV)") )
    __debugbreak();
  v3 = ci->state;
  if ( v3 != RDBG_CSTATE_IDLE && v3 != RDBG_CSTATE_HEADER_RECV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1085, ASSERT_TYPE_ASSERT, "((ci->state == RDBG_CSTATE_IDLE) || (ci->state == RDBG_CSTATE_HEADER_RECV))", (const char *)&queryFormat, "(ci->state == RDBG_CSTATE_IDLE) || (ci->state == RDBG_CSTATE_HEADER_RECV)") )
    __debugbreak();
  if ( ci->state == RDBG_CSTATE_IDLE )
  {
    headerXferCnt = 0;
    ci->msgData.headerXferCnt = 0;
  }
  else
  {
    headerXferCnt = ci->msgData.headerXferCnt;
    if ( headerXferCnt == 8 )
      goto LABEL_22;
  }
  p_msgData = &ci->msgData;
  if ( ci->usingDevHost )
    v6 = Com_DevhostRead(ci, p_msgData, 8, headerXferCnt, 8);
  else
    v6 = IWSocketDataRecv(ci->socketID, p_msgData, 8, headerXferCnt, 8);
  if ( v6 < 0 )
  {
    ClientStateSet_FatalError(ci, NULL);
    return 1;
  }
  if ( !v6 )
    return 1;
  ci->msgData.headerXferCnt += v6;
  ci->state = RDBG_CSTATE_HEADER_RECV;
  if ( !HeaderXferIsFinished(ci) )
    return 1;
LABEL_22:
  if ( ci->state != RDBG_CSTATE_HEADER_RECV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1202, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_HEADER_RECV)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_HEADER_RECV") )
    __debugbreak();
  v8 = &ci->msgData;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1062, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  v9 = ntohl(v8->header.bodyLength);
  v10 = v8->header.keyA == 73;
  v8->header.bodyLength = v9;
  if ( v10 && v8->header.keyB == 87 )
    return 1;
  Com_Printf(16, "Processing of header msg failed.\n");
  return 0;
}

/*
==============
HeaderSendFragments
==============
*/
char HeaderSendFragments(rdbgClientInfo *ci)
{
  int headerXferCnt; 
  int v3; 

  if ( !ci )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1133, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1071, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
  }
  headerXferCnt = ci->msgData.headerXferCnt;
  if ( headerXferCnt != 8 )
  {
    v3 = IWSocketDataSend(ci->socketID, &ci->msgData, 8, headerXferCnt, 8);
    if ( v3 < 0 )
    {
      ClientStateSet_FatalError(ci, NULL);
      return 0;
    }
    ci->msgData.headerXferCnt += v3;
    if ( !HeaderXferIsFinished(ci) )
      return 0;
  }
  return 1;
}

/*
==============
HeaderXferIsFinished
==============
*/
bool HeaderXferIsFinished(rdbgClientInfo *ci)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1071, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  return ci->msgData.headerXferCnt == 8;
}

/*
==============
IWErrorString
==============
*/

char *__fastcall IWErrorString()
{
  return NET_ErrorString();
}

/*
==============
IWSocketDataRecv
==============
*/
int IWSocketDataRecv(unsigned __int64 sock, void *buff, int buffSize, int transferedSoFar, int totalNeeded)
{
  __int64 v5; 
  int result; 

  v5 = transferedSoFar;
  if ( !buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 694, ASSERT_TYPE_ASSERT, "(buff)", (const char *)&queryFormat, "buff") )
    __debugbreak();
  if ( buffSize < totalNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 695, ASSERT_TYPE_ASSERT, "(buffSize >= totalNeeded)", (const char *)&queryFormat, "buffSize >= totalNeeded") )
    __debugbreak();
  if ( totalNeeded <= (int)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 696, ASSERT_TYPE_ASSERT, "(totalNeeded > transferedSoFar)", (const char *)&queryFormat, "totalNeeded > transferedSoFar") )
    __debugbreak();
  result = recv(sock, (char *)buff + v5, totalNeeded - v5, 0);
  if ( result == -1 )
  {
    if ( WSAGetLastError() == 10035 )
      return 0;
    if ( WSAGetLastError() != 10054 )
      return -2;
  }
  else if ( result )
  {
    return result;
  }
  return -3;
}

/*
==============
IWSocketDataSend
==============
*/
int IWSocketDataSend(unsigned __int64 sock, const void *buff, int buffSize, int transferedSoFar, int totalNeeded)
{
  __int64 v5; 
  int result; 

  v5 = transferedSoFar;
  if ( !buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 662, ASSERT_TYPE_ASSERT, "(buff)", (const char *)&queryFormat, "buff") )
    __debugbreak();
  if ( buffSize < totalNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 663, ASSERT_TYPE_ASSERT, "(buffSize >= totalNeeded)", (const char *)&queryFormat, "buffSize >= totalNeeded") )
    __debugbreak();
  if ( totalNeeded <= (int)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 664, ASSERT_TYPE_ASSERT, "(totalNeeded > transferedSoFar)", (const char *)&queryFormat, "totalNeeded > transferedSoFar") )
    __debugbreak();
  result = send(sock, (const char *)buff + v5, totalNeeded - v5, 0);
  if ( result == -1 )
  {
    if ( WSAGetLastError() == 10035 )
      return 0;
    if ( WSAGetLastError() != 10054 )
      return -2;
  }
  else if ( result )
  {
    return result;
  }
  return -3;
}

/*
==============
IWSocketDataSendBLOCKING
==============
*/
char IWSocketDataSendBLOCKING(unsigned __int64 sock, void *buff, int buffLimit, int totalNeeded)
{
  int v8; 
  int v9; 
  bool v10; 

  v8 = 0;
  v9 = IWSocketDataSend(sock, buff, buffLimit, 0, totalNeeded);
  if ( v9 < 0 )
    return 0;
  while ( 1 )
  {
    v8 += v9;
    v10 = v8 == totalNeeded;
    if ( v8 > totalNeeded )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 738, ASSERT_TYPE_ASSERT, "(sent <= totalNeeded)", (const char *)&queryFormat, "sent <= totalNeeded") )
        __debugbreak();
      v10 = v8 == totalNeeded;
    }
    if ( v10 )
      break;
    Sys_Sleep(1);
    v9 = IWSocketDataSend(sock, buff, buffLimit, v8, totalNeeded);
    if ( v9 < 0 )
      return 0;
  }
  return 1;
}

/*
==============
IsReceiveState
==============
*/
bool IsReceiveState(rdbgClientState_t state)
{
  int v1; 
  bool result; 

  result = 0;
  if ( (unsigned int)state <= RDBG_CSTATE_POSREQ_RECV )
  {
    v1 = 11444992;
    if ( _bittest(&v1, state) )
      return 1;
  }
  return result;
}

/*
==============
NET_RemoteDbgDisconnectClient
==============
*/
char NET_RemoteDbgDisconnectClient(void *ciUser)
{
  if ( !ciUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2848, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( *((int *)ciUser + 2) <= 0 )
    return 0;
  Net_DbgSockets_ClientDisconnect((rdbgClientInfo *)ciUser);
  return 1;
}

/*
==============
NET_RemoteDbgHostAssertHandler
==============
*/
char NET_RemoteDbgHostAssertHandler(const char *assertText)
{
  __int64 v2; 
  rdbgClientInfo *v3; 
  char v4; 

  if ( com_remoteAssertMsg && !com_remoteAssertMsg->current.enabled )
    return 0;
  Sys_EnterCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  if ( !g_rdbgInitializedSockets || g_insideCommFrame )
  {
    Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
    return 0;
  }
  NET_RemoteDbgHostWaitForStableConsoleConnection();
  v2 = 8i64;
  v3 = s_debugSocketClients;
  v4 = 0;
  do
  {
    if ( ClientAssertHandler(v3, assertText) )
      v4 = 1;
    ++v3;
    --v2;
  }
  while ( v2 );
  Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  return v4;
}

/*
==============
NET_RemoteDbgHostConsoleConnected
==============
*/
char NET_RemoteDbgHostConsoleConnected()
{
  int v0; 
  rdbgClientState_t *i; 

  v0 = 0;
  for ( i = &s_debugSocketClients[0].state; *((_DWORD *)i - 1) != 1 || (unsigned int)(*i + 1) <= 1; i += 8318 )
  {
    if ( ++v0 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
NET_RemoteDbgHostFrame
==============
*/
char NET_RemoteDbgHostFrame()
{
  Sys_EnterCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  if ( g_rdbgInitializedSockets )
  {
    g_insideCommFrame = 1;
    ClientsFrame();
    if ( s_devhostRecvBuffer.bodyXferCnt >= s_devhostRecvBuffer.bodyLength )
      Com_DevhostUpdate(2048);
    ClientsAcceptNew(g_hostSocket);
    g_insideCommFrame = 0;
  }
  Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  return 1;
}

/*
==============
NET_RemoteDbgHostInitLogBuffer
==============
*/
char NET_RemoteDbgHostInitLogBuffer()
{
  Sys_EnterCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  if ( g_rdbgInitializedLogBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2577, ASSERT_TYPE_ASSERT, "(!g_rdbgInitializedLogBuffer)", (const char *)&queryFormat, "!g_rdbgInitializedLogBuffer") )
    __debugbreak();
  g_rdbgInitializedLogBuffer = 1;
  *(_QWORD *)&g_log.pos = 0i64;
  g_log.text[0] = 0;
  Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  return 1;
}

/*
==============
NET_RemoteDbgHostInitSockets
==============
*/
char NET_RemoteDbgHostInitSockets()
{
  Com_DevhostRegisterCallback(11, (bool (__fastcall *)(ComDevhostReadHandle *))Com_DevhostRDBGCallback);
  Sys_EnterCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  if ( g_rdbgInitializedSockets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2591, ASSERT_TYPE_ASSERT, "(!g_rdbgInitializedSockets)", (const char *)&queryFormat, "!g_rdbgInitializedSockets", -2i64) )
    __debugbreak();
  g_WelcomePacket = RDBG_WELCOME_RAW_618;
  g_WelcomePacket.protocolVersion = htonl(RDBG_WELCOME_RAW_618.protocolVersion);
  s_debugSocketClients[0].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[1].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[2].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[3].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[4].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[5].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[6].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[7].state = RDBG_CSTATE_DISCONNECTED;
  g_hostSocket = CreateHostSocket(0x7A51u);
  if ( g_hostSocket == -1i64 )
  {
    Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
    return 0;
  }
  else
  {
    g_insideCommFrame = 0;
    g_rdbgInitializedSockets = 1;
    Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
    return 1;
  }
}

/*
==============
NET_RemoteDbgHostInitSocketsInternal
==============
*/
char NET_RemoteDbgHostInitSocketsInternal()
{
  Sys_EnterCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  if ( g_rdbgInitializedSockets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2591, ASSERT_TYPE_ASSERT, "(!g_rdbgInitializedSockets)", (const char *)&queryFormat, "!g_rdbgInitializedSockets") )
    __debugbreak();
  g_WelcomePacket = RDBG_WELCOME_RAW_618;
  g_WelcomePacket.protocolVersion = htonl(RDBG_WELCOME_RAW_618.protocolVersion);
  s_debugSocketClients[0].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[1].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[2].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[3].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[4].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[5].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[6].state = RDBG_CSTATE_DISCONNECTED;
  s_debugSocketClients[7].state = RDBG_CSTATE_DISCONNECTED;
  g_hostSocket = CreateHostSocket(0x7A51u);
  if ( g_hostSocket == -1i64 )
  {
    Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
    return 0;
  }
  else
  {
    g_insideCommFrame = 0;
    g_rdbgInitializedSockets = 1;
    Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
    return 1;
  }
}

/*
==============
NET_RemoteDbgHostShutdownSockets
==============
*/
char NET_RemoteDbgHostShutdownSockets()
{
  bool *p_usingDevHost; 
  DebugSocketClient **v1; 
  DebugSocketClient *v2; 

  Sys_EnterCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  g_rdbgInitializedSockets = 0;
  p_usingDevHost = &s_debugSocketClients[0].usingDevHost;
  do
  {
    if ( *(_DWORD *)(p_usingDevHost - 22) )
    {
      if ( p_usingDevHost == (bool *)30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 953, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( !*(_DWORD *)(p_usingDevHost - 22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 954, ASSERT_TYPE_ASSERT, "(ci->state != RDBG_CSTATE_DISCONNECTED)", (const char *)&queryFormat, "ci->state != RDBG_CSTATE_DISCONNECTED") )
        __debugbreak();
      if ( !*p_usingDevHost )
      {
        Com_Printf(16, "Disconnected debug-client #%i (", *(unsigned int *)(p_usingDevHost - 30));
        ClientPrintIP((rdbgClientInfo *)(p_usingDevHost - 30));
        Com_Printf(16, ").\n");
        closesocket(*(_QWORD *)(p_usingDevHost - 14));
      }
      v1 = g_debugSocketClients;
      while ( 1 )
      {
        v2 = *v1;
        if ( (*v1)->m_clientType == *(_DWORD *)(p_usingDevHost - 26) )
          break;
        if ( (__int64)++v1 >= (__int64)&unk_147EB5358 )
          goto LABEL_17;
      }
      if ( v2 )
        v2->Disconnect(v2);
LABEL_17:
      memset_0(p_usingDevHost - 30, 0, 0x81F8ui64);
    }
    p_usingDevHost += 33272;
  }
  while ( (__int64)p_usingDevHost < (__int64)&unk_14B9E6F5E );
  closesocket(g_hostSocket);
  Sys_LeaveCriticalSection(CRITSECT_DBGSOCKETS_FRAME);
  return 1;
}

/*
==============
NET_RemoteDbgHostStabilize
==============
*/

void NET_RemoteDbgHostStabilize(void)
{
  NET_RemoteDbgHostWaitForStableConsoleConnection();
}

/*
==============
NET_RemoteDbgHostWaitForStableConsoleConnection
==============
*/
void NET_RemoteDbgHostWaitForStableConsoleConnection()
{
  __int64 v0; 
  rdbgClientState_t *p_state; 

  v0 = 10i64;
  do
  {
    ClientsFrame();
    ClientsAcceptNew(g_hostSocket);
    --v0;
  }
  while ( v0 );
LABEL_3:
  ClientsFrame();
  ClientsAcceptNew(g_hostSocket);
  p_state = &s_debugSocketClients[0].state;
  while ( *((_DWORD *)p_state - 1) != 1 || *p_state != RDBG_CSTATE_IDLE )
  {
    p_state += 8318;
    if ( (__int64)p_state >= (__int64)&unk_14B9E6F48 )
    {
      Sys_Sleep(50);
      LODWORD(v0) = v0 + 1;
      if ( (int)v0 < 10 )
        goto LABEL_3;
      return;
    }
  }
}

/*
==============
NET_RemoteDbgHostWriteToLog
==============
*/
void NET_RemoteDbgHostWriteToLog(int channel, const char *text)
{
  unsigned __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  char dest[8]; 

  Sys_EnterCriticalSection(CRITSECT_DBGSOCKETS_HOST_LOGBUFFER);
  if ( g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1847, ASSERT_TYPE_ASSERT, "(!g_logShield)", (const char *)&queryFormat, "!g_logShield") )
    __debugbreak();
  g_logShield = 1;
  if ( g_rdbgInitializedLogBuffer )
  {
    if ( (unsigned int)channel > 0x63 )
      channel = 0;
    Com_sprintf(dest, 5ui64, "~~%02i", (unsigned int)channel);
    v4 = -1i64;
    do
      ++v4;
    while ( dest[v4] );
    v5 = truncate_cast<int,unsigned __int64>(v4);
    v6 = v5;
    if ( v5 <= 0x40000 )
    {
      if ( g_log.pos + v5 > 0x3FFFF )
      {
        v7 = 0x40000 - g_log.pos;
        if ( 0x40000 != g_log.pos )
          memcpy_0(&g_log.text[g_log.pos], dest, v7);
        memcpy_0(g_log.text, &dest[v7], v6 - v7);
        ++g_log.gen;
        g_log.pos = g_log.pos + v6 - 0x40000;
      }
      else
      {
        memcpy_0(&g_log.text[g_log.pos], dest, v5);
        g_log.pos += v6;
      }
    }
    else
    {
      *(_QWORD *)&g_log.pos = 0i64;
      g_log.text[0] = 0;
    }
    TextPool_AddText(&g_log, text);
  }
  ConsoleLogThreadShieldDown();
}

/*
==============
NET_RemoteDbgSendMessageBlocking
==============
*/
char NET_RemoteDbgSendMessageBlocking(void *ciUser, int msgType, const unsigned __int8 *buffer, unsigned int length)
{
  ScopedDevHostMessage v9; 

  if ( !ciUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2808, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci", -2i64) )
    __debugbreak();
  if ( msgType >= 19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2810, ASSERT_TYPE_ASSERT, "(msgType < RDBG_MSGCOUNT)", (const char *)&queryFormat, "msgType < RDBG_MSGCOUNT") )
    __debugbreak();
  ClientHeaderInit((rdbgClientInfo *)ciUser, (rdbgMsgType_t)msgType, length);
  if ( *((_BYTE *)ciUser + 30) )
  {
    ScopedDevHostMessage::ScopedDevHostMessage(&v9, 11, *((_DWORD *)ciUser + 1), length + 8);
    Com_DevhostSendBody(11, 8u, (const char *)ciUser + 40);
    Com_DevhostSendBody(11, length, (const char *)buffer);
    ScopedDevHostMessage::~ScopedDevHostMessage(&v9);
  }
  else if ( !IWSocketDataSendBLOCKING(*((_QWORD *)ciUser + 2), (char *)ciUser + 40, 8, 8) || !IWSocketDataSendBLOCKING(*((_QWORD *)ciUser + 2), (void *)buffer, length, length) )
  {
    Net_DbgSockets_ClientDisconnect((rdbgClientInfo *)ciUser);
    return 0;
  }
  return 1;
}

/*
==============
Net_DbgSockets_ClientDisconnect
==============
*/
void Net_DbgSockets_ClientDisconnect(rdbgClientInfo *ci)
{
  __int64 type; 
  DebugSocketClient **v3; 
  DebugSocketClient *v4; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 953, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state == RDBG_CSTATE_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 954, ASSERT_TYPE_ASSERT, "(ci->state != RDBG_CSTATE_DISCONNECTED)", (const char *)&queryFormat, "ci->state != RDBG_CSTATE_DISCONNECTED") )
    __debugbreak();
  if ( !ci->usingDevHost )
  {
    Com_Printf(16, "Disconnected debug-client #%i (", (unsigned int)ci->clientNum);
    ClientPrintIP(ci);
    Com_Printf(16, ").\n");
    closesocket(ci->socketID);
  }
  type = (unsigned int)ci->type;
  v3 = g_debugSocketClients;
  while ( 1 )
  {
    v4 = *v3;
    if ( (*v3)->m_clientType == (_DWORD)type )
      break;
    if ( (__int64)++v3 >= (__int64)&unk_147EB5358 )
      goto LABEL_15;
  }
  if ( v4 )
    ((void (__fastcall *)(DebugSocketClient *, __int64, void *))v4->Disconnect)(v4, type, &unk_147EB5358);
LABEL_15:
  memset_0(ci, 0, sizeof(rdbgClientInfo));
}

/*
==============
PosRequestRecvHandler
==============
*/
void PosRequestRecvHandler(rdbgClientInfo *ci)
{
  __int64 xferCnt; 
  int *p_endPos; 
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  const char *v10; 
  __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  const char *v15; 
  char v16; 
  __int64 v17; 
  char v18; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2131, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != RDBG_CSTATE_POSREQ_RECV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2132, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_POSREQ_RECV)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_POSREQ_RECV") )
    __debugbreak();
  if ( GeneralReceiveGetFragments(ci) )
  {
    xferCnt = ci->msgData.un.welcome.xferCnt;
    p_endPos = &ci->msgData.un.log.endPos;
    if ( (unsigned int)xferCnt > 0x80FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2141, ASSERT_TYPE_ASSERT, "(len <= RDBG_GENERAL_BUFFER_LIMIT)", (const char *)&queryFormat, "len <= RDBG_GENERAL_BUFFER_LIMIT") )
      __debugbreak();
    *((_BYTE *)p_endPos + xferCnt) = 0;
    v4 = 0x7FFFFFFFi64;
    v5 = "viewpos";
    v6 = 0x7FFFFFFFi64;
    if ( ci == (rdbgClientInfo *)-60i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v7 = v5[(char *)p_endPos - "viewpos"];
      v8 = v6;
      v9 = *v5++;
      --v6;
      if ( !v8 )
        break;
      if ( v7 != v9 )
      {
        v10 = "fullviewpos";
        v11 = 0x7FFFFFFFi64;
        if ( ci == (rdbgClientInfo *)-60i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v12 = v10[(char *)p_endPos - "fullviewpos"];
          v13 = v11;
          v14 = *v10++;
          --v11;
          if ( !v13 )
            goto LABEL_17;
          if ( v12 != v14 )
          {
            v15 = "mdlprv";
            if ( ci == (rdbgClientInfo *)-60i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v16 = v15[(char *)p_endPos - "mdlprv"];
              v17 = v4;
              v18 = *v15++;
              --v4;
              if ( !v17 )
                goto LABEL_17;
              if ( v16 != v18 )
              {
                Com_PrintWarning(16, "Invalid position request '%s' from client %i.\n", ci->msgData.un.general.buffer, (unsigned int)ci->clientNum);
                goto LABEL_18;
              }
              if ( !v16 )
                goto LABEL_17;
            }
          }
          if ( !v12 )
            goto LABEL_17;
        }
      }
    }
    while ( v7 );
LABEL_17:
    Core_strcpy_truncate_or_fill_zero(ci->posRequest, 0x10ui64, ci->msgData.un.general.buffer);
LABEL_18:
    ClientStateSet_Idle(ci);
  }
}

/*
==============
PosSendSetup
==============
*/
char PosSendSetup(rdbgClientInfo *ci)
{
  __int64 v2; 
  __int64 v3; 
  const char *v4; 
  int *p_endPos; 
  char v6; 
  char v7; 
  unsigned __int64 v16; 
  unsigned int v17; 
  __int64 v19; 
  const char *v20; 
  char v21; 
  char v22; 
  LocalClientNum_t v24; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  const char *v41; 
  char v42; 
  char v43; 
  char *fmt; 
  char *fmta; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  vec3_t pos; 

  v2 = 0x7FFFFFFFi64;
  v3 = 0x7FFFFFFFi64;
  v4 = "viewpos";
  p_endPos = &ci->msgData.un.log.endPos;
  if ( ci == (rdbgClientInfo *)-60i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v6 = v4[(char *)p_endPos - "viewpos"];
    v7 = *v4++;
    if ( !v3-- )
    {
LABEL_7:
      CL_GetDebugViewPos(&pos);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+88h+pos+8]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovss  xmm1, dword ptr [rsp+88h+pos+4]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovss  xmm3, dword ptr [rsp+88h+pos]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+88h+var_60], xmm0
        vmovsd  [rsp+88h+fmt], xmm1
        vmovq   r9, xmm3
      }
      Com_sprintf((char *)p_endPos, 0x8100ui64, "%.2f %.2f %.2f", *(double *)&_XMM3, *(double *)&fmt, v47);
      goto LABEL_8;
    }
    if ( v6 != v7 )
      break;
    if ( !v6 )
      goto LABEL_7;
  }
  v19 = 0x7FFFFFFFi64;
  v20 = "fullviewpos";
  if ( !p_endPos && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v21 = v20[(char *)p_endPos - "fullviewpos"];
    v22 = *v20++;
    if ( !v19-- )
      break;
    if ( v21 != v22 )
    {
      v41 = "mdlprv";
      if ( !p_endPos && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v42 = v41[(char *)p_endPos - "mdlprv"];
        v43 = *v41++;
        if ( !v2-- )
          break;
        if ( v42 != v43 )
          return 0;
      }
      while ( v42 );
      CG_ModelPreviewerBuildViewPosStr((char *)p_endPos, 0x80FFu);
      goto LABEL_8;
    }
  }
  while ( v21 );
  v24 = Cmd_LocalClientNum();
  LocalClientGlobals = CG_GetLocalClientGlobals(v24);
  _RDI = LocalClientGlobals;
  if ( !LocalClientGlobals || !LocalClientGlobals->nextSnap )
    return 0;
  p_view = &LocalClientGlobals->refdef.view;
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
  v = (_DWORD *)p_view->org.org.v;
  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(pos.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
  LODWORD(pos.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
  LODWORD(pos.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+178C0h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rdi+178C4h]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovss  xmm2, dword ptr [rsp+88h+pos+8]
    vcvtss2sd xmm2, xmm2, xmm2
    vmovss  xmm4, dword ptr [rsp+88h+pos+4]
    vcvtss2sd xmm4, xmm4, xmm4
    vmovss  xmm3, dword ptr [rsp+88h+pos]
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+88h+var_50], xmm0
    vmovsd  [rsp+88h+var_58], xmm1
    vmovsd  [rsp+88h+var_60], xmm2
    vmovsd  [rsp+88h+fmt], xmm4
    vmovq   r9, xmm3
  }
  Com_sprintf((char *)p_endPos, 0x8100ui64, "%.2f %.2f %.2f %.2f %.2f", *(double *)&_XMM3, *(double *)&fmta, v48, v49, v50);
  memset(&pos, 0, sizeof(pos));
LABEL_8:
  ci->state = RDBG_CSTATE_POS_SEND;
  v16 = -1i64;
  do
    ++v16;
  while ( *((_BYTE *)p_endPos + v16) );
  v17 = truncate_cast<unsigned int,unsigned __int64>(v16);
  ci->msgData.un.welcome.xferCnt = v17;
  ci->msgData.un.general.bodyXferCnt = 0;
  *(_DWORD *)&ci->msgData.header.keyA = 1070921;
  ci->msgData.header.bodyLength = htonl(v17);
  ci->msgData.headerXferCnt = 0;
  ci->posRequest[0] = 0;
  return 1;
}

/*
==============
DebugSocketClientVisionEditor::ProcessMessageDebugBlendTree
==============
*/
void DebugSocketClientVisionEditor::ProcessMessageDebugBlendTree(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci)
{
  char *m_ptr; 
  bool v5; 
  Mem_LargeLocal v6; 

  Mem_LargeLocal::Mem_LargeLocal(&v6, 0x1C00ui64, "vision_buf_t visionBuffer");
  m_ptr = (char *)v6.m_ptr;
  *(_BYTE *)v6.m_ptr = 4;
  v5 = CG_VisionSetDebugBlendTree(LOCAL_CLIENT_0, m_ptr + 1, 0x1BFFu);
  ClientStateSet_Idle(ci);
  if ( v5 )
    this->SendSetup(this, ci, m_ptr);
  Mem_LargeLocal::~Mem_LargeLocal(&v6);
}

/*
==============
DebugSocketClientVisionEditor::ProcessMessageDebugResult
==============
*/
void DebugSocketClientVisionEditor::ProcessMessageDebugResult(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci)
{
  char *m_ptr; 
  bool v5; 
  Mem_LargeLocal v6; 

  Mem_LargeLocal::Mem_LargeLocal(&v6, 0x1C00ui64, "vision_buf_t visionBuffer");
  m_ptr = (char *)v6.m_ptr;
  *(_BYTE *)v6.m_ptr = 5;
  v5 = CG_VisionSetDebugResult(LOCAL_CLIENT_0, m_ptr + 1, 0x1BFFu);
  ClientStateSet_Idle(ci);
  if ( v5 )
    this->SendSetup(this, ci, m_ptr);
  Mem_LargeLocal::~Mem_LargeLocal(&v6);
}

/*
==============
DebugSocketClientVisionEditor::ProcessMessageLivePreview
==============
*/
void DebugSocketClientVisionEditor::ProcessMessageLivePreview(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci, msg_t *msg)
{
  cg_t *LocalClientGlobals; 
  void *m_ptr; 
  Mem_LargeLocal v7; 

  if ( cg_t::ms_allocatedType )
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  else
    LocalClientGlobals = NULL;
  Mem_LargeLocal::Mem_LargeLocal(&v7, 0x1C00ui64, "vision_buf_t visionBuffer");
  m_ptr = v7.m_ptr;
  if ( msg->cursize >= 0x1BFDu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3548, ASSERT_TYPE_ASSERT, "(msg->cursize < MAX_VISION_BUF_SIZE - 3)", (const char *)&queryFormat, "msg->cursize < MAX_VISION_BUF_SIZE - 3", -2i64) )
    __debugbreak();
  memset_0(m_ptr, 0, 0x1C00ui64);
  MSG_ReadData(msg, msg->cursize - 3, m_ptr, 7168);
  if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3551, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  if ( LocalClientGlobals && CG_VisionSetLoadVisionArtTweaks(&LocalClientGlobals->cvsData, (const char *)m_ptr) )
    CG_VisionSetSetBlendOff(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_ROOT);
  ClientStateSet_Idle(ci);
  Mem_LargeLocal::~Mem_LargeLocal(&v7);
}

/*
==============
DebugSocketClient::RecvFullHandler
==============
*/
void DebugSocketClient::RecvFullHandler(DebugSocketClient *this, rdbgClientInfo *ci)
{
  unsigned int state; 
  int v5; 
  int *p_endPos; 
  int currentGen; 
  int v8; 
  __int64 xferCnt; 
  int fmt; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2913, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != this->m_recvState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2914, ASSERT_TYPE_ASSERT, "(ci->state == GetRecvState())", (const char *)&queryFormat, "ci->state == GetRecvState()") )
    __debugbreak();
  state = ci->state;
  if ( state > 0x17 || (v5 = 11444992, !_bittest(&v5, state)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1313, ASSERT_TYPE_ASSERT, "(IsReceiveState( ci->state ))", (const char *)&queryFormat, "IsReceiveState( ci->state )") )
      __debugbreak();
  }
  if ( ci->msgData.un.welcome.xferCnt > 0x80FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1315, ASSERT_TYPE_ASSERT, "(ci->msgData.un.general.bodyLength <= RDBG_GENERAL_BUFFER_LIMIT)", (const char *)&queryFormat, "ci->msgData.un.general.bodyLength <= RDBG_GENERAL_BUFFER_LIMIT") )
    __debugbreak();
  if ( ci->msgData.un.general.bodyXferCnt >= 0x80FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1316, ASSERT_TYPE_ASSERT, "(ci->msgData.un.general.bodyXferCnt < RDBG_GENERAL_BUFFER_LIMIT)", (const char *)&queryFormat, "ci->msgData.un.general.bodyXferCnt < RDBG_GENERAL_BUFFER_LIMIT") )
    __debugbreak();
  if ( GeneralReceiveIsFinished(ci) )
  {
LABEL_23:
    xferCnt = ci->msgData.un.welcome.xferCnt;
    if ( (unsigned int)xferCnt > 0x80FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2923, ASSERT_TYPE_ASSERT, "(len <= RDBG_GENERAL_BUFFER_LIMIT)", (const char *)&queryFormat, "len <= RDBG_GENERAL_BUFFER_LIMIT") )
      __debugbreak();
    ci->msgData.un.general.buffer[xferCnt] = 0;
    this->RecvHandlerInternal(this, ci, (const char *)&ci->msgData.un.log.endPos, xferCnt);
  }
  else
  {
    while ( 1 )
    {
      p_endPos = &ci->msgData.un.log.endPos;
      currentGen = ci->msgData.un.log.currentGen;
      fmt = ci->msgData.un.log.currentPos;
      v8 = ci->usingDevHost ? Com_DevhostRead(ci, p_endPos, 33023, currentGen, fmt) : IWSocketDataRecv(ci->socketID, p_endPos, 33023, currentGen, fmt);
      if ( v8 < 0 )
        break;
      ci->msgData.un.general.bodyXferCnt += v8;
      if ( GeneralReceiveIsFinished(ci) )
        goto LABEL_23;
    }
    ClientStateSet_FatalError(ci, NULL);
  }
}

/*
==============
DebugSocketClient::RecvHandler
==============
*/
void DebugSocketClient::RecvHandler(DebugSocketClient *this, rdbgClientInfo *ci)
{
  __int64 xferCnt; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2890, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != this->m_recvState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2891, ASSERT_TYPE_ASSERT, "(ci->state == GetRecvState())", (const char *)&queryFormat, "ci->state == GetRecvState()") )
    __debugbreak();
  if ( GeneralReceiveGetFragments(ci) )
  {
    xferCnt = ci->msgData.un.welcome.xferCnt;
    if ( (unsigned int)xferCnt > 0x80FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2900, ASSERT_TYPE_ASSERT, "(len <= RDBG_GENERAL_BUFFER_LIMIT)", (const char *)&queryFormat, "len <= RDBG_GENERAL_BUFFER_LIMIT") )
      __debugbreak();
    ci->msgData.un.general.buffer[xferCnt] = 0;
    this->RecvHandlerInternal(this, ci, (const char *)&ci->msgData.un.log.endPos, xferCnt);
  }
}

/*
==============
DebugSocketClient::RecvHandlerInternal
==============
*/
void DebugSocketClient::RecvHandlerInternal(DebugSocketClient *this, rdbgClientInfo *ci, const char *pCommand, const unsigned int commandLength)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 288, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "RecvHandlerInternal must be overridden if it is being called") )
    __debugbreak();
}

/*
==============
DebugSocketClientFX::RecvHandlerInternal
==============
*/
void DebugSocketClientFX::RecvHandlerInternal(DebugSocketClientFX *this, rdbgClientInfo *ci, const char *pCommand, const unsigned int commandLength)
{
  char *m_ptr; 
  Mem_LargeLocal v8; 

  Mem_LargeLocal::Mem_LargeLocal(&v8, 0x4000ui64, "FXCommandBuffer responseCommandBuffer");
  m_ptr = (char *)v8.m_ptr;
  *(_BYTE *)v8.m_ptr = 0;
  if ( pCommand[2] )
    Particle_ToolAddToQueue(pCommand + 2, m_ptr, 0x4000u);
  ClientStateSet_Idle(ci);
  if ( *m_ptr )
    this->SendSetup(this, ci, m_ptr);
  Mem_LargeLocal::~Mem_LargeLocal(&v8);
}

/*
==============
DebugSocketClientRadiant::RecvHandlerInternal
==============
*/
void DebugSocketClientRadiant::RecvHandlerInternal(DebugSocketClientRadiant *this, rdbgClientInfo *ci, const char *pCommand, const unsigned int commandLength)
{
  CG_AddRadiantCmd(pCommand);
  ClientStateSet_Idle(ci);
}

/*
==============
DebugSocketClientVisionEditor::RecvHandlerInternal
==============
*/
void DebugSocketClientVisionEditor::RecvHandlerInternal(DebugSocketClientVisionEditor *this, rdbgClientInfo *ci, const char *pCommand, const unsigned int commandLength)
{
  int v8; 
  cg_t *v9; 
  cg_t *LocalClientGlobals; 
  unsigned int v11; 
  void *v12; 
  char *m_ptr; 
  bool v14; 
  char *v15; 
  bool v16; 
  Mem_LargeLocal v17; 
  msg_t buf; 

  if ( !pCommand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3486, ASSERT_TYPE_ASSERT, "(pCommand)", (const char *)&queryFormat, "pCommand", -2i64) )
    __debugbreak();
  if ( !commandLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3487, ASSERT_TYPE_ASSERT, "(commandLength >= 1)", (const char *)&queryFormat, "commandLength >= 1") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3488, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  MSG_InitReadOnly(&buf, (unsigned __int8 *)pCommand, commandLength);
  MSG_BeginReading(&buf);
  MSG_ReadByte(&buf);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3494, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  v8 = MSG_ReadByte(&buf);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3497, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  v9 = NULL;
  if ( cg_t::ms_allocatedType )
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  else
    LocalClientGlobals = NULL;
  if ( !v8 )
  {
    if ( LocalClientGlobals )
      CG_VisionSetSetBlendOn(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_ROOT);
    goto LABEL_47;
  }
  v11 = MSG_ReadByte(&buf);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3506, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      Mem_LargeLocal::Mem_LargeLocal(&v17, 0x1C00ui64, "vision_buf_t visionBuffer");
      m_ptr = (char *)v17.m_ptr;
      *(_BYTE *)v17.m_ptr = 4;
      v14 = CG_VisionSetDebugBlendTree(LOCAL_CLIENT_0, m_ptr + 1, 0x1BFFu);
      ClientStateSet_Idle(ci);
      if ( v14 )
        this->SendSetup(this, ci, m_ptr);
LABEL_39:
      Mem_LargeLocal::~Mem_LargeLocal(&v17);
      goto LABEL_48;
    }
    if ( v11 == 3 )
    {
      Mem_LargeLocal::Mem_LargeLocal(&v17, 0x1C00ui64, "vision_buf_t visionBuffer");
      v15 = (char *)v17.m_ptr;
      *(_BYTE *)v17.m_ptr = 5;
      v16 = CG_VisionSetDebugResult(LOCAL_CLIENT_0, v15 + 1, 0x1BFFu);
      ClientStateSet_Idle(ci);
      if ( v16 )
        this->SendSetup(this, ci, v15);
      goto LABEL_39;
    }
    Com_PrintError(0, "DebugSocketClientVisionEditor provided message with unknown command %d", v11);
LABEL_47:
    ClientStateSet_Idle(ci);
    goto LABEL_48;
  }
  if ( cg_t::ms_allocatedType )
    v9 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  Mem_LargeLocal::Mem_LargeLocal(&v17, 0x1C00ui64, "vision_buf_t visionBuffer");
  v12 = v17.m_ptr;
  if ( buf.cursize >= 0x1BFDu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3548, ASSERT_TYPE_ASSERT, "(msg->cursize < MAX_VISION_BUF_SIZE - 3)", (const char *)&queryFormat, "msg->cursize < MAX_VISION_BUF_SIZE - 3") )
    __debugbreak();
  memset_0(v12, 0, 0x1C00ui64);
  MSG_ReadData(&buf, buf.cursize - 3, v12, 7168);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3551, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  if ( v9 && CG_VisionSetLoadVisionArtTweaks(&v9->cvsData, (const char *)v12) )
    CG_VisionSetSetBlendOff(&v9->cvsData, VISIONSET_BLENDTYPE_ROOT);
  ClientStateSet_Idle(ci);
  Mem_LargeLocal::~Mem_LargeLocal(&v17);
LABEL_48:
  if ( LocalClientGlobals )
    LocalClientGlobals->refdef.visionSetToolConnected = 1;
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3537, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  if ( buf.readcount != buf.splitSize + buf.cursize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3538, ASSERT_TYPE_ASSERT, "(MSG_IsFullyRead( &msg ))", (const char *)&queryFormat, "MSG_IsFullyRead( &msg )") )
    __debugbreak();
}

/*
==============
DebugSocketClient::Send
==============
*/
bool DebugSocketClient::Send(DebugSocketClient *this, rdbgClientInfo *ci, const char *cmd)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2981, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2982, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  return ci->state == RDBG_CSTATE_IDLE && this->SendSetup(this, ci, cmd);
}

/*
==============
DebugSocketClient::SendEnqueue
==============
*/
__int64 DebugSocketClient::SendEnqueue(DebugSocketClient *this, rdbgClientInfo *ci, const char *cmd)
{
  return ((__int64 (__fastcall *)(DebugSocketClient *, rdbgClientInfo *, const char *, __int64))this->SendEnqueueWithFilterKey)(this, ci, cmd, 0xFFFFFFFFi64);
}

/*
==============
DebugSocketClient::SendEnqueueWithFilterKey
==============
*/
char DebugSocketClient::SendEnqueueWithFilterKey(DebugSocketClient *this, rdbgClientInfo *ci, const char *cmd, int inFilterKey)
{
  rdbgClientState_t state; 
  DebugSocketClient_vtbl *v9; 
  __int64 v11; 
  unsigned __int64 v12; 
  u_long v13; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3076, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3077, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( ci )
  {
    state = ci->state;
    if ( state )
    {
      if ( state != RDBG_CSTATE_FATALERROR )
        LOBYTE(state) = state == RDBG_CSTATE_LEAVING || state == RDBG_CSTATE_WELCOME_SEND;
    }
    else
    {
      LOBYTE(state) = 1;
    }
  }
  else
  {
    LOBYTE(state) = 1;
  }
  v9 = this->__vftable;
  if ( (_BYTE)state )
  {
    v9->FreeSendQueue(this);
    return 0;
  }
  else
  {
    v11 = (__int64)v9->AllocQueueMessageForKey(this, inFilterKey);
    Com_sprintf((char *)(v11 + 20), 0x8100ui64, (const char *)&queryFormat, cmd);
    v12 = -1i64;
    do
      ++v12;
    while ( *(_BYTE *)(v11 + v12 + 20) );
    v13 = truncate_cast<unsigned int,unsigned __int64>(v12);
    *(_DWORD *)(v11 + 12) = v13;
    *(_DWORD *)(v11 + 16) = 0;
    *(_BYTE *)(v11 + 2) = this->m_msgType;
    *(_WORD *)v11 = 22345;
    *(_BYTE *)(v11 + 3) = 0;
    *(_DWORD *)(v11 + 4) = htonl(v13);
    return 1;
  }
}

/*
==============
DebugSocketClient::SendHandler
==============
*/
void DebugSocketClient::SendHandler(DebugSocketClient *this, rdbgClientInfo *ci, const void *buffer, const int buffSize)
{
  unsigned int xferCnt; 
  unsigned int v9; 
  int v10; 
  __int64 v11; 
  ScopedDevHostMessage v12; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2932, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != this->m_sendState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2933, ASSERT_TYPE_ASSERT, "(ci->state == GetSendState())", (const char *)&queryFormat, "ci->state == GetSendState()") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2934, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (unsigned int)buffSize >= 0x8100 )
  {
    LODWORD(v11) = buffSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2935, ASSERT_TYPE_ASSERT, "(unsigned)( buffSize ) < (unsigned)( RDBG_GENERAL_BUFFER_SIZE )", "buffSize doesn't index RDBG_GENERAL_BUFFER_SIZE\n\t%i not in [0, %i)", v11, 33024) )
      __debugbreak();
  }
  if ( ci->usingDevHost )
  {
    ScopedDevHostMessage::ScopedDevHostMessage(&v12, 11, ci->type, ci->msgData.un.welcome.xferCnt + 8);
    Com_DevhostSendBody(11, 8u, (const char *)&ci->msgData);
    xferCnt = ci->msgData.un.welcome.xferCnt;
    if ( xferCnt )
    {
      Com_DevhostSendBody(11, xferCnt, ci->msgData.un.general.buffer);
      xferCnt = ci->msgData.un.welcome.xferCnt;
    }
    ci->msgData.un.general.bodyXferCnt = xferCnt;
    this->HandleSendFinished(this);
    ClientStateSet_Idle(ci);
    ScopedDevHostMessage::~ScopedDevHostMessage(&v12);
  }
  else
  {
    if ( !HeaderSendFragments(ci) )
      return;
    v9 = ci->msgData.un.welcome.xferCnt;
    if ( v9 )
    {
      if ( v9 == ci->msgData.un.general.bodyXferCnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2961, ASSERT_TYPE_ASSERT, "(!GeneralSendIsFinished( ci ))", (const char *)&queryFormat, "!GeneralSendIsFinished( ci )") )
        __debugbreak();
      v10 = IWSocketDataSend(ci->socketID, buffer, buffSize, ci->msgData.un.log.currentGen, ci->msgData.un.log.currentPos);
      if ( v10 < 0 )
      {
        ClientStateSet_FatalError(ci, "Problem sending command data");
        return;
      }
      ci->msgData.un.general.bodyXferCnt += v10;
    }
    if ( GeneralSendIsFinished(ci) )
    {
      this->HandleSendFinished(this);
      ClientStateSet_Idle(ci);
    }
  }
}

/*
==============
DebugSocketClientConsole::SendHandler
==============
*/
void DebugSocketClientConsole::SendHandler(DebugSocketClientConsole *this, rdbgClientInfo *ci, const void *buffer, const int buffSize)
{
  __int64 v8; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3299, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != this->m_sendState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3300, ASSERT_TYPE_ASSERT, "(ci->state == GetSendState())", (const char *)&queryFormat, "ci->state == GetSendState()") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3301, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (unsigned int)buffSize >= 0x8100 )
  {
    LODWORD(v8) = buffSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3302, ASSERT_TYPE_ASSERT, "(unsigned)( buffSize ) < (unsigned)( RDBG_GENERAL_BUFFER_SIZE )", "buffSize doesn't index RDBG_GENERAL_BUFFER_SIZE\n\t%i not in [0, %i)", v8, 33024) )
      __debugbreak();
  }
  if ( !g_logShield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1870, ASSERT_TYPE_ASSERT, "(g_logShield)", (const char *)&queryFormat, "g_logShield") )
    __debugbreak();
  if ( HeaderSendFragments(ci) )
  {
    if ( ConsoleLogSendIsFinished(ci) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3310, ASSERT_TYPE_ASSERT, "(!ConsoleLogSendIsFinished( ci ))", (const char *)&queryFormat, "!ConsoleLogSendIsFinished( ci )") )
      __debugbreak();
    if ( ConsoleLogSendChunks(ci) >= 0 )
    {
      if ( ConsoleLogSendIsFinished(ci) )
        ClientStateSet_Idle(ci);
    }
    else
    {
      ClientStateSet_FatalError(ci, "problem sending console log");
    }
  }
}

/*
==============
DebugSocketClient::SendSetup
==============
*/
char DebugSocketClient::SendSetup(DebugSocketClient *this, rdbgClientInfo *ci, const char *cmd)
{
  unsigned __int64 v6; 
  unsigned int v7; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2993, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2994, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( ci->state != RDBG_CSTATE_IDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2995, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_IDLE)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_IDLE") )
    __debugbreak();
  Com_sprintf(ci->msgData.un.general.buffer, 0x8100ui64, (const char *)&queryFormat, cmd);
  v6 = -1i64;
  ci->state = this->m_sendState;
  do
    ++v6;
  while ( ci->msgData.un.general.buffer[v6] );
  v7 = truncate_cast<unsigned int,unsigned __int64>(v6);
  ci->msgData.un.welcome.xferCnt = v7;
  ci->msgData.un.general.bodyXferCnt = 0;
  ClientHeaderInit(ci, this->m_msgType, v7);
  return 1;
}

/*
==============
DebugSocketClient::SendSetupFromQueue
==============
*/
char DebugSocketClient::SendSetupFromQueue(DebugSocketClient *this, rdbgClientInfo *ci)
{
  rdbgClientMessageSendQueue_t *m_sendQueue; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 3106, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  m_sendQueue = this->m_sendQueue;
  if ( !m_sendQueue )
    return 0;
  this->m_sendQueue = m_sendQueue->next;
  m_sendQueue->next = NULL;
  ci->state = this->m_sendState;
  memcpy_0(&ci->msgData, m_sendQueue, sizeof(ci->msgData));
  Mem_Virtual_Free(m_sendQueue);
  return 1;
}

/*
==============
SetStateFromNewHeader
==============
*/
bool SetStateFromNewHeader(rdbgClientInfo *ci)
{
  bool result; 
  unsigned int bodyLength; 
  char *fmt; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2176, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != RDBG_CSTATE_HEADER_RECV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2177, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_HEADER_RECV)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_HEADER_RECV") )
    __debugbreak();
  if ( ci->msgData.headerXferCnt != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 2178, ASSERT_TYPE_ASSERT, "(HeaderXferIsFinished( ci ))", (const char *)&queryFormat, "HeaderXferIsFinished( ci )") )
    __debugbreak();
  switch ( ci->msgData.header.messageType )
  {
    case 0u:
      goto $LN19_31;
    case 2u:
      ClientStateSet_Leaving(ci);
      result = 1;
      break;
    case 3u:
      result = GeneralRecieveSetup(ci, RDBG_CSTATE_COMMAND_RECV);
      break;
    case 5u:
      result = GeneralRecieveSetup(ci, RDBG_CSTATE_TABCOMPLETE_RECV);
      break;
    case 8u:
      result = GeneralRecieveSetup(ci, RDBG_CSTATE_DVARREQ_RECV);
      break;
    case 0xBu:
      result = GeneralRecieveSetup(ci, RDBG_CSTATE_VISION_EDITOR_RECV);
      break;
    case 0xCu:
      result = GeneralRecieveSetup(ci, RDBG_CSTATE_RADIANT_COMMAND_RECV);
      break;
    case 0xDu:
      result = GeneralRecieveSetup(ci, RDBG_CSTATE_RADIANT_COMMAND_RECV_BINARY_PARTIAL);
      break;
    case 0xEu:
      result = GeneralRecieveSetup(ci, RDBG_CSTATE_RADIANT_COMMAND_RECV_BINARY_FINAL);
      break;
    case 0x11u:
      result = GeneralRecieveSetup(ci, RDBG_CSTATE_POSREQ_RECV);
      break;
    case 0x12u:
      result = GeneralRecieveSetup(ci, RDBG_CSTATE_FX_COMMAND_RECV);
      break;
    default:
      LODWORD(fmt) = ci->msgData.header.bodyLength;
      Com_Printf(16, "Unhandled msg type '%i' from client %i.  Throwing next %i bytes away.\n", ci->msgData.header.messageType, (unsigned int)ci->clientNum, fmt);
      if ( ci->state != RDBG_CSTATE_HEADER_RECV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1420, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_HEADER_RECV)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_HEADER_RECV") )
        __debugbreak();
      bodyLength = ci->msgData.header.bodyLength;
      if ( bodyLength )
      {
        ci->msgData.un.welcome.xferCnt = bodyLength;
        result = 1;
        ci->state = RDBG_CSTATE_UNKNOWNMSG_RECV;
        ci->msgData.un.general.bodyXferCnt = 0;
      }
      else
      {
$LN19_31:
        ClientStateSet_Idle(ci);
        result = 1;
      }
      break;
  }
  return result;
}

/*
==============
TabCompleteQsortFunc
==============
*/
int TabCompleteQsortFunc(const void *e0, const void *e1)
{
  return I_strnicmp(*(const char **)e0, *(const char **)e1, 0x7FFFFFFFui64);
}

/*
==============
TabCompleteSearchCallback
==============
*/
void TabCompleteSearchCallback(const char *txt)
{
  if ( g_tabComplete.matchCnt < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1448, ASSERT_TYPE_ASSERT, "(g_tabComplete.matchCnt >= 0)", (const char *)&queryFormat, "g_tabComplete.matchCnt >= 0") )
    __debugbreak();
  if ( !txt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1449, ASSERT_TYPE_ASSERT, "(txt)", (const char *)&queryFormat, "txt") )
    __debugbreak();
  ++g_tabComplete.totalSearched;
  if ( g_tabComplete.matchCnt == 256 )
  {
    g_tabComplete.overflowed = 1;
  }
  else if ( !I_strnicmp(g_tabComplete.prefix, txt, g_tabComplete.prefixLen) )
  {
    g_tabComplete.matches[g_tabComplete.matchCnt++] = txt;
  }
}

/*
==============
TabCompleteSendSetup
==============
*/
char TabCompleteSendSetup(rdbgClientInfo *ci)
{
  char *tabCompletePrefix; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  int v5; 
  const char **matches; 
  unsigned int v7; 
  __int64 v8; 
  char v9; 
  int v10; 
  const char **v11; 
  unsigned int v12; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1478, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->state != RDBG_CSTATE_IDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1479, ASSERT_TYPE_ASSERT, "(ci->state == RDBG_CSTATE_IDLE)", (const char *)&queryFormat, "ci->state == RDBG_CSTATE_IDLE") )
    __debugbreak();
  Dvar_ForEachName_UNSAFE_LockBegin();
  tabCompletePrefix = ci->tabCompletePrefix;
  v3 = -1i64;
  g_tabComplete.prefix = ci->tabCompletePrefix;
  v4 = -1i64;
  do
    ++v4;
  while ( tabCompletePrefix[v4] );
  g_tabComplete.prefixLen = truncate_cast<int,unsigned __int64>(v4);
  g_tabComplete.matchCnt = 0;
  g_tabComplete.overflowed = 0;
  g_tabComplete.totalSearched = 0;
  Cmd_ForEach(TabCompleteSearchCallback);
  Dvar_ForEachName_UNSAFE(TabCompleteSearchCallback);
  if ( g_tabComplete.matchCnt )
  {
    qsort(g_tabComplete.matches, g_tabComplete.matchCnt, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)TabCompleteQsortFunc);
    if ( g_tabComplete.matchCnt > 1 )
    {
      v5 = 0;
      if ( g_tabComplete.matchCnt > 0 )
      {
        matches = g_tabComplete.matches;
        do
        {
          Com_Printf(16, "    %s\n", *matches);
          ++v5;
          ++matches;
        }
        while ( v5 < g_tabComplete.matchCnt );
      }
      if ( g_tabComplete.overflowed )
        Com_Printf(16, "[Too Many Tab-Complete Matches to Sort/List Them All]\n");
      Com_Printf(16, "\n");
    }
    v7 = 0;
    v8 = 0i64;
    do
    {
      v9 = g_tabComplete.matches[0][v8];
      if ( !v9 )
        break;
      ci->msgData.un.general.buffer[v8] = v9;
      v10 = 0;
      if ( g_tabComplete.matchCnt > 0 )
      {
        v11 = g_tabComplete.matches;
        while ( v9 == (*v11)[v8] )
        {
          ++v10;
          ++v11;
          if ( v10 >= g_tabComplete.matchCnt )
            goto LABEL_25;
        }
        ci->msgData.un.general.buffer[v8] = 0;
      }
LABEL_25:
      ++v7;
      ++v8;
    }
    while ( v7 < 0x80FF );
    ci->msgData.un.general.buffer[v7] = 0;
    ci->state = RDBG_CSTATE_TABCOMPLETE_SEND;
    do
      ++v3;
    while ( ci->msgData.un.general.buffer[v3] );
    v12 = truncate_cast<unsigned int,unsigned __int64>(v3);
    ci->msgData.un.welcome.xferCnt = v12;
    ci->msgData.un.general.bodyXferCnt = 0;
    *(_DWORD *)&ci->msgData.header.keyA = 415561;
    ci->msgData.header.bodyLength = htonl(v12);
    ci->msgData.headerXferCnt = 0;
    if ( g_tabComplete.matchCnt == 1 )
      ci->msgData.header.messageFlags |= 1u;
  }
  *tabCompletePrefix = 0;
  Dvar_ForEachName_UNSAFE_LockEnd();
  return 1;
}

/*
==============
TextPool_AddText
==============
*/
void TextPool_AddText(rdbgTextPool_t *pool, const char *text)
{
  unsigned __int64 v4; 
  int v5; 
  int v6; 
  __int64 pos; 
  int v8; 

  if ( !pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1808, ASSERT_TYPE_ASSERT, "(pool)", (const char *)&queryFormat, "pool") )
    __debugbreak();
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1809, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  v4 = -1i64;
  do
    ++v4;
  while ( text[v4] );
  v5 = truncate_cast<int,unsigned __int64>(v4);
  v6 = v5;
  if ( v5 <= 0x40000 )
  {
    pos = pool->pos;
    if ( (int)pos + v5 > 0x3FFFF )
    {
      v8 = 0x40000 - pos;
      if ( 0x40000 != (_DWORD)pos )
        memcpy_0(&pool->text[pos], text, v8);
      memcpy_0(pool->text, &text[v8], v6 - v8);
      pool->pos += v6 - 0x40000;
      ++pool->gen;
    }
    else
    {
      memcpy_0(&pool->text[pos], text, v5);
      pool->pos += v6;
    }
  }
  else
  {
    if ( !pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_debugsockets.cpp", 1798, ASSERT_TYPE_ASSERT, "(pool)", (const char *)&queryFormat, "pool") )
      __debugbreak();
    *(_QWORD *)&pool->pos = 0i64;
    pool->text[0] = 0;
  }
}

/*
==============
DebugSocketClient::UseKeepAlive
==============
*/
char DebugSocketClient::UseKeepAlive(DebugSocketClient *this)
{
  return 1;
}

/*
==============
DebugSocketClientFX::UseKeepAlive
==============
*/
bool DebugSocketClientFX::UseKeepAlive(DebugSocketClientFX *this)
{
  return 0;
}

/*
==============
DebugSocketClientRadiant::UseKeepAlive
==============
*/
bool DebugSocketClientRadiant::UseKeepAlive(DebugSocketClientRadiant *this)
{
  return 0;
}

/*
==============
rdbgClientIsConnected
==============
*/
bool rdbgClientIsConnected(rdbgClientType_t inType)
{
  rdbgClientType_t *p_type; 
  int v2; 

  p_type = &s_debugSocketClients[0].type;
  v2 = 0;
  while ( *p_type != inType )
  {
    ++v2;
    p_type += 8318;
    if ( (__int64)p_type >= (__int64)&unk_14B9E6F44 )
      return 0;
  }
  return &s_debugSocketClients[v2] != NULL;
}

/*
==============
rdbgRadiantSendCameraPosition
==============
*/
void rdbgRadiantSendCameraPosition(const vec3_t *origin, const vec3_t *angles)
{
  __int64 m_clientType; 
  rdbgClientType_t *p_type; 
  int v16; 
  void *v17; 
  rdbgClientInfo *v18; 
  unsigned int state; 
  __int64 v20; 
  unsigned __int64 v21; 
  u_long v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  char dest[33024]; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rdx]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+8178h+var_8128], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+8178h+var_8130], xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+8178h+var_8138], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+8178h+var_8140], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+8178h+var_8148], xmm4
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+8178h+var_8150], xmm5
  }
  Com_sprintf(dest, 0x8100ui64, "RCMD! %d %d %g %g %g %g %g %g ", 4i64, 0i64, v23, v24, v25, v26, v27, v28);
  m_clientType = (unsigned int)g_debugSocketClientRadiant.m_clientType;
  p_type = &s_debugSocketClients[0].type;
  v16 = 0;
  v17 = &unk_14B9E6F44;
  while ( *p_type != g_debugSocketClientRadiant.m_clientType )
  {
    ++v16;
    p_type += 8318;
    if ( (__int64)p_type >= (__int64)&unk_14B9E6F44 )
      return;
  }
  v18 = &s_debugSocketClients[v16];
  if ( v18 && (v18->state != RDBG_CSTATE_IDLE || !g_debugSocketClientRadiant.SendSetup(&g_debugSocketClientRadiant, v18, dest)) )
  {
    state = v18->state;
    if ( state <= 2 || state == 4 )
    {
      ((void (__fastcall *)(DebugSocketClientRadiant *, __int64, void *))g_debugSocketClientRadiant.FreeSendQueue)(&g_debugSocketClientRadiant, m_clientType, v17);
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(DebugSocketClientRadiant *, _QWORD, void *))g_debugSocketClientRadiant.AllocQueueMessageForKey)(&g_debugSocketClientRadiant, 0i64, v17);
      Com_sprintf((char *)(v20 + 20), 0x8100ui64, (const char *)&queryFormat, dest);
      v21 = -1i64;
      do
        ++v21;
      while ( *(_BYTE *)(v20 + v21 + 20) );
      v22 = truncate_cast<unsigned int,unsigned __int64>(v21);
      *(_DWORD *)(v20 + 12) = v22;
      *(_DWORD *)(v20 + 16) = 0;
      *(_BYTE *)(v20 + 2) = g_debugSocketClientRadiant.m_msgType;
      *(_WORD *)v20 = 22345;
      *(_BYTE *)(v20 + 3) = 0;
      *(_DWORD *)(v20 + 4) = htonl(v22);
    }
  }
}

