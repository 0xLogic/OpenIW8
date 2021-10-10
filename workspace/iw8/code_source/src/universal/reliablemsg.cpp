/*
==============
RMsg_AddMessageWithHandle
==============
*/

void __fastcall RMsg_AddMessageWithHandle(const netadr_t *to, msg_t *msg, unsigned int *outHandle, const netsrc_t fromLocalNetID)
{
  ?RMsg_AddMessageWithHandle@@YAXPEBUnetadr_t@@PEAUmsg_t@@PEAIW4netsrc_t@@@Z(to, msg, outHandle, fromLocalNetID);
}

/*
==============
RMsg_AddMessage
==============
*/

void __fastcall RMsg_AddMessage(const netadr_t *to, msg_t *msg, const netsrc_t fromLocalNetID)
{
  ?RMsg_AddMessage@@YAXPEBUnetadr_t@@PEAUmsg_t@@W4netsrc_t@@@Z(to, msg, fromLocalNetID);
}

/*
==============
RMsg_DropAddr
==============
*/

void __fastcall RMsg_DropAddr(const netadr_t *to, bool ignoreNetId)
{
  ?RMsg_DropAddr@@YAXPEBUnetadr_t@@_N@Z(to, ignoreNetId);
}

/*
==============
RMsg_SendMessages
==============
*/

void RMsg_SendMessages(void)
{
  ?RMsg_SendMessages@@YAXXZ();
}

/*
==============
RMsg_Init
==============
*/

void RMsg_Init(void)
{
  ?RMsg_Init@@YAXXZ();
}

/*
==============
RMsg_ReleaseHandle
==============
*/

void __fastcall RMsg_ReleaseHandle(unsigned int *messageHandle)
{
  ?RMsg_ReleaseHandle@@YAXPEAI@Z(messageHandle);
}

/*
==============
RMsg_MarkHandleMsgReceived
==============
*/

void __fastcall RMsg_MarkHandleMsgReceived(const unsigned int messageHandle)
{
  ?RMsg_MarkHandleMsgReceived@@YAXI@Z(messageHandle);
}

/*
==============
RMsg_UpdateAddr
==============
*/

void __fastcall RMsg_UpdateAddr(const netadr_t *addr, const netadr_t *newAddr)
{
  ?RMsg_UpdateAddr@@YAXPEBUnetadr_t@@0@Z(addr, newAddr);
}

/*
==============
RMsg_HandleAckMessage
==============
*/

int __fastcall RMsg_HandleAckMessage(netadr_t *from, const char *cmd, msg_t *msg)
{
  return ?RMsg_HandleAckMessage@@YAHPEAUnetadr_t@@PEBDPEAUmsg_t@@@Z(from, cmd, msg);
}

/*
==============
RMsg_GetSendStatusFromHandle
==============
*/

RMsgSendStatus __fastcall RMsg_GetSendStatusFromHandle(const unsigned int messageHandle)
{
  return ?RMsg_GetSendStatusFromHandle@@YA?AW4RMsgSendStatus@@I@Z(messageHandle);
}

/*
==============
RMsg_IsHandleValid
==============
*/

int __fastcall RMsg_IsHandleValid(const unsigned int *messageHandle)
{
  return ?RMsg_IsHandleValid@@YAHPEBI@Z(messageHandle);
}

/*
==============
RMsg_HandleReliablePacket
==============
*/

int __fastcall RMsg_HandleReliablePacket(const LocalClientNum_t localClientNum, const char *cmd, netadr_t *from, msg_t *msg, const int time, bool (__fastcall *dispatchCallback)(LocalClientNum_t, netadr_t *__struct_ptr, const char *, msg_t *, int), bool *success)
{
  return ?RMsg_HandleReliablePacket@@YAHW4LocalClientNum_t@@PEBDUnetadr_t@@PEAUmsg_t@@HP6A_NW41@213H@ZPEA_N@Z(localClientNum, cmd, from, msg, time, dispatchCallback, success);
}

/*
==============
RMsg_SetInvalidHandle
==============
*/

void __fastcall RMsg_SetInvalidHandle(unsigned int *outHandle)
{
  ?RMsg_SetInvalidHandle@@YAXPEAI@Z(outHandle);
}

/*
==============
RMsg_IsActiveAddr
==============
*/

bool __fastcall RMsg_IsActiveAddr(const netadr_t *to, bool ignoreNetId)
{
  return ?RMsg_IsActiveAddr@@YA_NPEBUnetadr_t@@_N@Z(to, ignoreNetId);
}

/*
==============
RMsg_AddPrint
==============
*/

void __fastcall RMsg_AddPrint(const netadr_t *to, const char *line, const netsrc_t fromLocalNetID)
{
  ?RMsg_AddPrint@@YAXPEBUnetadr_t@@PEBDW4netsrc_t@@@Z(to, line, fromLocalNetID);
}

/*
==============
RMsg_CancelHandle
==============
*/

void __fastcall RMsg_CancelHandle(unsigned int *messageHandle)
{
  ?RMsg_CancelHandle@@YAXPEAI@Z(messageHandle);
}

/*
==============
RMsg_AddMessage
==============
*/
void RMsg_AddMessage(const netadr_t *to, msg_t *msg, const netsrc_t fromLocalNetID)
{
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 648, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 649, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  RMsg_AddMessageInternal(to, msg->data, msg->cursize, fromLocalNetID, NULL);
}

/*
==============
RMsg_AddMessageAtMsgSlot
==============
*/
void RMsg_AddMessageAtMsgSlot(RMsgClient *client, const unsigned int msgSlot, const unsigned __int8 *msg, const int length, const netsrc_t fromLocalNetID, unsigned int *outHandle)
{
  __int64 v6; 
  char *v10; 
  unsigned int nextSequence; 
  unsigned int v12; 
  int v13; 
  RMsgSendHandler *v14; 
  const dvar_t *v15; 
  __int64 v16; 
  __int64 v17; 

  v6 = msgSlot;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 465, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->bufferUsed >= 0xFA0u )
  {
    LODWORD(v16) = client->bufferUsed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 466, ASSERT_TYPE_ASSERT, "(unsigned)( client->bufferUsed ) < (unsigned)( 4000 )", "client->bufferUsed doesn't index RMSG_BUF_SIZE_PER_CLIENT\n\t%i not in [0, %i)", v16, 4000) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 0x14 )
  {
    LODWORD(v17) = 20;
    LODWORD(v16) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 468, ASSERT_TYPE_ASSERT, "(unsigned)( msgSlot ) < (unsigned)( 20 )", "msgSlot doesn't index RMSG_MAX_MSG_PER_CLIENT\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( length <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 469, ASSERT_TYPE_ASSERT, "(length > 0)", (const char *)&queryFormat, "length > 0") )
    __debugbreak();
  v10 = (char *)client + 80 * v6;
  MSG_Init((msg_t *)(v10 + 4064), &client->reliableBuf[client->bufferUsed], 4000 - client->bufferUsed);
  MSG_WriteData((msg_t *const)(v10 + 4064), msg, length);
  nextSequence = client->nextSequence;
  v12 = 0;
  *((_DWORD *)v10 + 1015) = nextSequence;
  client->nextSequence = (unsigned __int8)(nextSequence + 1);
  client->lastSendTime = 0;
  v13 = Sys_Milliseconds();
  client->bufferUsed += length;
  client->lastAddTime = v13;
  client->sendCount = 0;
  v10[4048] = 1;
  *((_DWORD *)v10 + 1014) = client->lastAddTime;
  *((_DWORD *)v10 + 1013) = fromLocalNetID;
  *((_DWORD *)v10 + 1030) = 0;
  if ( outHandle )
  {
    v14 = s_reliableMsgHandler;
    while ( 1 )
    {
      ++v12;
      if ( v14->status == RMSG_STATUS_INACTIVE )
        break;
      ++v14;
      if ( v12 >= 0x32 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 248, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Out of free handler slots for connection mesh") )
          __debugbreak();
        goto LABEL_23;
      }
    }
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 240, ASSERT_TYPE_SANITY, "( sendHandle != RMSG_SEND_INVALID_HANDLE )", (const char *)&queryFormat, "sendHandle != RMSG_SEND_INVALID_HANDLE") )
      __debugbreak();
    *((_DWORD *)v10 + 1030) = v12;
    v14->status = RMSG_STATUS_IN_PROGRESS;
    *(_OWORD *)&v14->clientUID.addr.type = *(_OWORD *)&client->addr.type;
    v14->clientUID.addr.addrHandleIndex = client->addr.addrHandleIndex;
    v14->msgUID.sequence = *((_DWORD *)v10 + 1015);
    v14->timeCreated = Sys_Milliseconds();
    v14->assignedHandle = *((_DWORD *)v10 + 1030);
LABEL_23:
    *outHandle = *((_DWORD *)v10 + 1030);
  }
  v15 = DCONST_DVARBOOL_reliableDebug;
  if ( !DCONST_DVARBOOL_reliableDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
    Com_Printf(131097, "RMSG: Add message with sequence (%i) and handle (%i): %s\n", *((unsigned int *)v10 + 1015), *((unsigned int *)v10 + 1030), (const char *)msg);
}

/*
==============
RMsg_AddMessageInternal
==============
*/
void RMsg_AddMessageInternal(const netadr_t *to, const unsigned __int8 *msg, int length, const netsrc_t fromLocalNetID, unsigned int *outHandle)
{
  const netadr_t *v5; 
  netsrc_t v6; 
  int v7; 
  const unsigned __int8 *v8; 
  int addrHandleIndex; 
  unsigned int *v10; 
  unsigned int v11; 
  unsigned int v12; 
  RMsgClient *v13; 
  __int64 v14; 
  _DWORD *i; 
  int bufferUsed; 
  int bytesAckd; 
  int v18; 
  const char *v19; 
  __int64 v20; 
  unsigned __int8 *reliableBuf; 
  __int64 v22; 
  unsigned __int64 *p_data; 
  unsigned __int64 v24; 
  RMsgMessage *v25; 
  RMsgMessage *j; 
  int v27; 
  const char *v28; 
  char *fmt; 
  unsigned int *v30; 
  __int64 v31; 
  __int64 v32; 
  netadr_t v33[5]; 

  v5 = to;
  v6 = fromLocalNetID;
  v7 = length;
  v8 = msg;
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 587, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  addrHandleIndex = v5->addrHandleIndex;
  *(_OWORD *)&v33[0].type = *(_OWORD *)&v5->type;
  v33[0].addrHandleIndex = addrHandleIndex;
  if ( NET_IsLocalAddress(v33) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 588, ASSERT_TYPE_ASSERT, "(!NET_IsLocalAddress( *to ))", "%s\n\tCan't add reliable messages destined to local clients", "!NET_IsLocalAddress( *to )") )
    __debugbreak();
  v10 = outHandle;
  v11 = 0;
  if ( outHandle )
    *outHandle = 0;
  if ( v7 > 1228 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 594, ASSERT_TYPE_ASSERT, "( length ) <= ( ((( ( 1270 - 16 - 2 ) - ( 3 * 4 + 2 + 1 ) )) - (3) - (1+1+4)) )", "%s <= %s\n\t%i, %i", "length", "RMSG_PACKET_PAYLOAD_SIZE", v7, 1228) )
    __debugbreak();
  v12 = 0;
  while ( 1 )
  {
    v13 = (RMsgClient *)((char *)&s_reliableMsgClients + 5648 * v12);
    if ( !NET_CompareAdrSigned(v5, &v13->addr, 0) )
      break;
    if ( ++v12 >= 0x18 )
    {
      v14 = 0i64;
      for ( i = &unk_14FF56B28; *i; i += 1412 )
      {
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= 0x18 )
        {
          Com_PrintWarning(131097, "RMSG: Unable to get slot for outbound packet - we either ran out of slots or the destination IP is already dead\n");
          return;
        }
      }
      v13 = (RMsgClient *)((char *)&s_reliableMsgClients + 5648 * v14);
      *(_OWORD *)&v13->addr.type = *(_OWORD *)&v5->type;
      v13->addr.addrHandleIndex = v5->addrHandleIndex;
      break;
    }
  }
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 603, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( NET_IsBotAddr(&v13->addr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 604, ASSERT_TYPE_ASSERT, "(!NET_IsBotAddr( client->addr ))", (const char *)&queryFormat, "!NET_IsBotAddr( client->addr )") )
    __debugbreak();
  bufferUsed = v13->bufferUsed;
  if ( bufferUsed + v7 >= 4000 )
  {
    bytesAckd = v13->bytesAckd;
    if ( v7 + bufferUsed - bytesAckd >= 4000 )
    {
      v18 = v5->addrHandleIndex;
      *(_OWORD *)&v33[0].type = *(_OWORD *)&v5->type;
      v33[0].addrHandleIndex = v18;
      v19 = NET_AdrToString(v33);
      LODWORD(fmt) = v7;
      Com_PrintWarning(131097, "RMSG: Client at %s already has %i pending reliable bytes of messages, unable to add another %i bytes\n", v19, (unsigned int)bufferUsed, fmt);
      RMsg_DropFailedClient(v5, v13);
      return;
    }
    if ( bytesAckd >= bufferUsed )
    {
      LODWORD(v32) = v13->bufferUsed;
      LODWORD(v31) = v13->bytesAckd;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 617, ASSERT_TYPE_ASSERT, "(client->bytesAckd < client->bufferUsed)", "%s\n\tclient has %i bytes ackd and %i bytes used in the buffer", "client->bytesAckd < client->bufferUsed", v31, v32) )
        __debugbreak();
    }
    v20 = v13->bytesAckd;
    if ( (unsigned int)(v20 - 1) > 0xF9D )
    {
      LODWORD(v30) = v13->bytesAckd;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 517, ASSERT_TYPE_ASSERT, "( ( bytesShifted > 0 && bytesShifted < 4000-1 ) )", "( bytesShifted ) = %i", v30) )
        __debugbreak();
    }
    reliableBuf = v13->reliableBuf;
    memmove_0(v13->reliableBuf, &v13->reliableBuf[v20], v13->bufferUsed - v13->bytesAckd);
    v22 = 20i64;
    p_data = (unsigned __int64 *)&v13->msgs[0].msg.data;
    do
    {
      if ( *((_BYTE *)p_data - 24) )
      {
        v24 = *p_data;
        if ( *p_data - v20 < (unsigned __int64)reliableBuf || v24 >= (unsigned __int64)v13->msgs )
        {
          LODWORD(v31) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 526, ASSERT_TYPE_ASSERT, "(client->msgs[msgSlot].msg.data - bytesShifted >= client->reliableBuf && client->msgs[msgSlot].msg.data < client->reliableBuf + 4000)", "%s\n\tbytesShifted = %i, msg.data points to %zi bytes after client->reliableBuf", "client->msgs[msgSlot].msg.data - bytesShifted >= client->reliableBuf && client->msgs[msgSlot].msg.data < client->reliableBuf + RMSG_BUF_SIZE_PER_CLIENT", v31, v24 - (_QWORD)v13 - 48) )
            __debugbreak();
        }
        v25 = (RMsgMessage *)(*p_data - v20);
        *p_data = (unsigned __int64)v25;
        if ( v25 < (RMsgMessage *)reliableBuf || v25 >= v13->msgs )
        {
          LODWORD(v31) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 532, ASSERT_TYPE_ASSERT, "(client->msgs[msgSlot].msg.data >= client->reliableBuf && client->msgs[msgSlot].msg.data < client->reliableBuf + 4000)", "%s\n\tbuffer corruption while trying to shift buffer back by %i bytes, msg.data is 0x%p, buf start is 0x%p", "client->msgs[msgSlot].msg.data >= client->reliableBuf && client->msgs[msgSlot].msg.data < client->reliableBuf + RMSG_BUF_SIZE_PER_CLIENT", v31, v25, v13->reliableBuf) )
            __debugbreak();
        }
      }
      p_data += 10;
      --v22;
    }
    while ( v22 );
    v13->bufferUsed -= v20;
    v5 = to;
    v11 = 0;
    v7 = length;
    v10 = outHandle;
    v6 = fromLocalNetID;
    v8 = msg;
    v13->bytesAckd = 0;
  }
  for ( j = v13->msgs; j->active; ++j )
  {
    if ( ++v11 >= 0x14 )
    {
      v27 = v5->addrHandleIndex;
      *(_OWORD *)&v33[0].type = *(_OWORD *)&v5->type;
      v33[0].addrHandleIndex = v27;
      v28 = NET_AdrToString(v33);
      Com_PrintWarning(131097, "RMSG: Client at %s already has %i pending reliable messages - dropping all reliable msgs for them\n", v28, 20i64);
      RMsg_DropFailedClient(v5, v13);
      return;
    }
  }
  RMsg_AddMessageAtMsgSlot(v13, v11, v8, v7, v6, v10);
}

/*
==============
RMsg_AddMessageWithHandle
==============
*/
void RMsg_AddMessageWithHandle(const netadr_t *to, msg_t *msg, unsigned int *outHandle, const netsrc_t fromLocalNetID)
{
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 639, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 640, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  RMsg_AddMessageInternal(to, msg->data, msg->cursize, fromLocalNetID, outHandle);
}

/*
==============
RMsg_AddPrint
==============
*/
void RMsg_AddPrint(const netadr_t *to, const char *line, const netsrc_t fromLocalNetID)
{
  __int64 v6; 

  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 657, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !line && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 658, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  v6 = -1i64;
  while ( line[++v6] != 0 )
    ;
  RMsg_AddMessageInternal(to, (const unsigned __int8 *)line, v6 + 1, fromLocalNetID, NULL);
}

/*
==============
RMsg_AddRMsgsToPacket
==============
*/
void RMsg_AddRMsgsToPacket(RMsgClient *client, msg_t *outMsg)
{
  unsigned int oldestSequence; 
  int i; 
  __int64 v6; 
  unsigned int *p_sequenceNum; 
  char *v8; 
  const dvar_t *v9; 
  int addrHandleIndex; 
  const char *v11; 
  int v12; 
  const char *v13; 
  int v14; 
  int cursize; 
  char *fmt; 
  __int64 v17; 
  __int64 v18; 
  netadr_t v19; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 674, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !client->bufferUsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 675, ASSERT_TYPE_ASSERT, "(client->bufferUsed)", (const char *)&queryFormat, "client->bufferUsed") )
    __debugbreak();
  if ( outMsg->cursize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 677, ASSERT_TYPE_ASSERT, "(outMsg->cursize == 0)", (const char *)&queryFormat, "outMsg->cursize == 0") )
    __debugbreak();
  if ( outMsg->maxsize <= 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 678, ASSERT_TYPE_ASSERT, "(sizeof( \"RM\" ) < outMsg->maxsize)", (const char *)&queryFormat, "sizeof( RMSG_PACKET_HEADER ) < outMsg->maxsize") )
    __debugbreak();
  MSG_WriteString(outMsg, "RM");
  if ( outMsg->cursize != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 680, ASSERT_TYPE_ASSERT, "( outMsg->cursize ) == ( (3) )", "%s == %s\n\t%i, %i", "outMsg->cursize", "RMSG_PACKET_HEADER_SIZE", outMsg->cursize, 3) )
    __debugbreak();
  oldestSequence = client->oldestSequence;
  for ( i = 0; ; ++i )
  {
    v6 = 0i64;
    p_sequenceNum = &client->msgs[0].sequenceNum;
    while ( !*((_BYTE *)p_sequenceNum - 12) || *p_sequenceNum != oldestSequence )
    {
      v6 = (unsigned int)(v6 + 1);
      p_sequenceNum += 20;
      if ( (unsigned int)v6 >= 0x14 )
        goto LABEL_40;
    }
    v8 = (char *)client + 80 * v6;
    if ( outMsg->cursize + *((_DWORD *)v8 + 1023) + 6 > outMsg->maxsize )
      break;
    if ( showpackets->current.integer )
      Com_Printf(25, "reliable send (%i): %s\n", *((unsigned int *)v8 + 1015), *((const char **)v8 + 509));
    v9 = DCONST_DVARBOOL_reliableDebug;
    if ( !DCONST_DVARBOOL_reliableDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      addrHandleIndex = client->addr.addrHandleIndex;
      *(_OWORD *)&v19.type = *(_OWORD *)&client->addr.type;
      v19.addrHandleIndex = addrHandleIndex;
      v11 = NET_AdrToString(&v19);
      v12 = *((_DWORD *)v8 + 1015);
      v13 = v11;
      v14 = Sys_Milliseconds();
      LODWORD(fmt) = v12;
      Com_Printf(25, "RMSG: Sending message '%s' at %dms with sequence %d to client %s\n", *((const char **)v8 + 509), (unsigned int)(v14 - *((_DWORD *)v8 + 1014)), fmt, v13);
    }
    cursize = outMsg->cursize;
    if ( *((_DWORD *)v8 + 1015) > 0xFFu )
    {
      LODWORD(v18) = 255;
      LODWORD(v17) = *((_DWORD *)v8 + 1015);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 716, ASSERT_TYPE_ASSERT, "( message->sequenceNum ) <= ( 0xff )", "%s <= %s\n\t%i, %i", "message->sequenceNum", "RMSG_MAX_SEQUENCE_NUM", v17, v18) )
        __debugbreak();
    }
    MSG_WriteByte(outMsg, *((unsigned int *)v8 + 1015));
    MSG_WriteByte(outMsg, *((int *)v8 + 1013));
    MSG_WriteLong(outMsg, *((_DWORD *)v8 + 1023));
    if ( outMsg->cursize - cursize != 6 )
    {
      LODWORD(v18) = 6;
      LODWORD(v17) = outMsg->cursize - cursize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 726, ASSERT_TYPE_ASSERT, "( outMsg->cursize - startSize ) == ( (1+1+4) )", "%s == %s\n\t%i, %i", "outMsg->cursize - startSize", "RMSG_PACKET_MSG_HEADER_SIZE", v17, v18) )
        __debugbreak();
    }
    MSG_WriteData(outMsg, *((const void **)v8 + 509), *((_DWORD *)v8 + 1023));
    oldestSequence = (unsigned __int8)(oldestSequence + 1);
  }
  if ( i )
    return;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 697, ASSERT_TYPE_ASSERT, "(numMessagesWritten > 0)", "%s\n\twe found a message that won't fit into a packet on its own! your message is too big", "numMessagesWritten > 0") )
    __debugbreak();
LABEL_40:
  if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 738, ASSERT_TYPE_ASSERT, "(numMessagesWritten > 0)", "%s\n\tAttempted to send an empty reliable message packet", "numMessagesWritten > 0") )
    __debugbreak();
}

/*
==============
RMsg_CancelHandle
==============
*/
void RMsg_CancelHandle(unsigned int *messageHandle)
{
  unsigned int v2; 
  RMsgSendHandler *SendHandler; 
  unsigned int v4; 
  const netadr_t *v5; 
  unsigned int sequence; 
  __int64 v7; 
  const netadr_t *v8; 
  __int64 v9; 

  v2 = *messageHandle;
  if ( v2 )
  {
    SendHandler = RMsg_GetSendHandler(v2);
    if ( !SendHandler )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 321, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 164, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
        __debugbreak();
    }
    v4 = 0;
    while ( 1 )
    {
      v5 = (netadr_t *)((char *)&s_reliableMsgClients + 5648 * v4);
      if ( !NET_CompareAdrSigned(&SendHandler->clientUID.addr, v5, 0) )
        break;
      if ( ++v4 >= 0x18 )
        goto LABEL_20;
    }
    sequence = SendHandler->msgUID.sequence;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 142, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
      __debugbreak();
    v7 = 0i64;
    v8 = v5 + 203;
    while ( !LOBYTE(v8[-1].port) || v8->type != sequence )
    {
      v7 = (unsigned int)(v7 + 1);
      v8 += 4;
      if ( (unsigned int)v7 >= 0x14 )
        goto LABEL_20;
    }
    v9 = 10 * v7;
    RMsg_SetMessageStatus((RMsgMessage *)&v5[4 * v7 + 202].port, RMSG_STATUS_ERROR);
    v5[(unsigned __int64)(8 * v9) / 0x14 + 206].type = NA_BAD;
LABEL_20:
    *(_QWORD *)&SendHandler->clientUID.addr.type = 0i64;
    *(_QWORD *)&SendHandler->clientUID.addr.port = 0i64;
    *(_QWORD *)&SendHandler->clientUID.addr.addrHandleIndex = 0i64;
    *(_QWORD *)&SendHandler->status = 0i64;
    SendHandler->timeCreated = 0;
    *messageHandle = 0;
  }
}

/*
==============
RMsg_DropAddr
==============
*/
void RMsg_DropAddr(const netadr_t *to, bool ignoreNetId)
{
  unsigned int i; 

LABEL_1:
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 164, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  for ( i = 0; i < 0x18; ++i )
  {
    if ( !NET_CompareAdrSigned(to, (netadr_t *)((char *)&s_reliableMsgClients + 5648 * i), ignoreNetId) )
    {
      RMsg_DropAllPacketsForClient((RMsgClient *)&s_reliableMsgClients + i);
      goto LABEL_1;
    }
  }
}

/*
==============
RMsg_DropAllPacketsForClient
==============
*/
void RMsg_DropAllPacketsForClient(RMsgClient *client)
{
  int addrHandleIndex; 
  const char *v3; 
  unsigned int *p_sendHandle; 
  __int64 v5; 
  RMsgSendHandler *SendHandler; 
  const dvar_t *v7; 
  int v8; 
  const char *v9; 
  char *fmt; 
  __int64 v11; 
  netadr_t v12[3]; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 397, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->addr.type )
  {
    addrHandleIndex = client->addr.addrHandleIndex;
    *(_OWORD *)&v12[0].type = *(_OWORD *)&client->addr.type;
    v12[0].addrHandleIndex = addrHandleIndex;
    v3 = NET_AdrToString(v12);
    Com_Printf(25, "[NET] Dropping all packets to client %s\n", v3);
  }
  p_sendHandle = &client->msgs[0].sendHandle;
  v5 = 20i64;
  do
  {
    if ( *((_BYTE *)p_sendHandle - 72) && *p_sendHandle )
    {
      SendHandler = RMsg_GetSendHandler(*p_sendHandle);
      if ( SendHandler->status != RMSG_STATUS_IN_PROGRESS )
      {
        LODWORD(v11) = SendHandler->status;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 264, ASSERT_TYPE_ASSERT, "( ( handler->status == RMSG_STATUS_IN_PROGRESS ) )", "( handler->status ) = %i", v11) )
          __debugbreak();
      }
      v7 = DCONST_DVARBOOL_reliableDebug;
      if ( !DCONST_DVARBOOL_reliableDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled )
      {
        v8 = SendHandler->clientUID.addr.addrHandleIndex;
        *(_OWORD *)&v12[0].type = *(_OWORD *)&SendHandler->clientUID.addr.type;
        v12[0].addrHandleIndex = v8;
        v9 = NET_AdrToString(v12);
        LODWORD(fmt) = *p_sendHandle;
        Com_Printf(131097, "RMSG: Changing handle state from %i to %i for handle %i (client %s)\n", (unsigned int)SendHandler->status, 3i64, fmt, v9);
      }
      SendHandler->status = RMSG_STATUS_ERROR;
      *p_sendHandle = 0;
    }
    p_sendHandle += 20;
    --v5;
  }
  while ( v5 );
  memset_0(client, 0, sizeof(RMsgClient));
}

/*
==============
RMsg_DropFailedClient
==============
*/
void RMsg_DropFailedClient(const netadr_t *to, RMsgClient *reliableClient)
{
  int addrHandleIndex; 
  PartyData *PartyData; 
  int FirstMemberAtAddr; 
  int v7; 
  PartyData *v8; 
  netadr_t v9; 

  if ( s_inDropClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 547, ASSERT_TYPE_ASSERT, "(!s_inDropClient)", "%s\n\tRMsg_DropFailedClient is calling itself in a loop", "!s_inDropClient") )
    __debugbreak();
  s_inDropClient = 1;
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 551, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !reliableClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 552, ASSERT_TYPE_ASSERT, "(reliableClient)", (const char *)&queryFormat, "reliableClient") )
    __debugbreak();
  RMsg_DropAllPacketsForClient(reliableClient);
  if ( Lobby_AreWeHost() )
  {
    addrHandleIndex = to->addrHandleIndex;
    *(_OWORD *)&v9.type = *(_OWORD *)&to->type;
    v9.addrHandleIndex = addrHandleIndex;
    PartyData = Lobby_GetPartyData();
    FirstMemberAtAddr = Party_FindFirstMemberAtAddr(PartyData, &v9);
    v7 = FirstMemberAtAddr;
    if ( FirstMemberAtAddr >= 0 )
    {
      Com_Printf(25, "RMSG: Dropping lobby/game client at slot %i due to reliable message failure\n", (unsigned int)FirstMemberAtAddr);
      if ( Com_IsGameLocalServerRunning() )
      {
        CL_Live_RequestClientDrop(v7, SV_LIVE_DROP_RMSG_LOST, "EXE/LOSTRELIABLECOMMANDS");
      }
      else
      {
        v8 = Lobby_GetPartyData();
        PartyHost_RemovePlayerAsync(v8, v7, 1, "EXE/LOSTRELIABLECOMMANDS", NET_CLOSE_HARD, NULL);
      }
    }
  }
  s_inDropClient = 0;
}

/*
==============
RMsg_GetSendHandler
==============
*/
RMsgSendHandler *RMsg_GetSendHandler(const unsigned int messageHandle)
{
  __int64 v2; 
  RMsgSendHandler *v3; 
  __int64 v5; 
  __int64 v6; 

  if ( !messageHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 205, ASSERT_TYPE_ASSERT, "(messageHandle != RMSG_SEND_INVALID_HANDLE)", (const char *)&queryFormat, "messageHandle != RMSG_SEND_INVALID_HANDLE") )
    __debugbreak();
  v2 = messageHandle - 1;
  if ( (unsigned int)v2 >= 0x32 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 208, ASSERT_TYPE_ASSERT, "(unsigned)( handleIndex ) < (unsigned)( ( sizeof( *array_counter( s_reliableMsgHandler ) ) + 0 ) )", "handleIndex doesn't index ARRAY_COUNT( s_reliableMsgHandler )\n\t%i not in [0, %i)", v5, 50) )
      __debugbreak();
  }
  v3 = &s_reliableMsgHandler[v2];
  if ( v3->status >= (unsigned int)RMSG_STATUS_COUNT )
  {
    LODWORD(v6) = 4;
    LODWORD(v5) = v3->status;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( handler->status ) < (unsigned)( RMSG_STATUS_COUNT )", "handler->status doesn't index RMSG_STATUS_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( v3->status == RMSG_STATUS_INACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 212, ASSERT_TYPE_ASSERT, "(handler->status != RMSG_STATUS_INACTIVE)", (const char *)&queryFormat, "handler->status != RMSG_STATUS_INACTIVE") )
    __debugbreak();
  return v3;
}

/*
==============
RMsg_GetSendStatusFromHandle
==============
*/
__int64 RMsg_GetSendStatusFromHandle(const unsigned int messageHandle)
{
  if ( messageHandle )
    return (unsigned int)RMsg_GetSendHandler(messageHandle)->status;
  else
    return 0i64;
}

/*
==============
RMsg_HandleAckMessage
==============
*/
__int64 RMsg_HandleAckMessage(netadr_t *from, const char *cmd, msg_t *msg)
{
  int addrHandleIndex; 
  unsigned int Byte; 
  netsrc_t v9; 
  bool v10; 
  const dvar_t *v11; 
  int v12; 
  const char *v13; 
  netadr_t v14; 
  netadr_t froma; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 980, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 981, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 982, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( I_strcmp(cmd, "RA") )
    return 0i64;
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&froma.type = *(_OWORD *)&from->type;
  froma.addrHandleIndex = addrHandleIndex;
  Byte = MSG_ReadByte(msg);
  v9 = MSG_ReadByte(msg);
  v10 = msg->overflowed == 0;
  froma.localNetID = v9;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 994, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  if ( msg->readcount != msg->cursize + msg->splitSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 995, ASSERT_TYPE_ASSERT, "(MSG_IsFullyRead( msg ))", (const char *)&queryFormat, "MSG_IsFullyRead( msg )") )
    __debugbreak();
  v11 = DCONST_DVARBOOL_reliableDebug;
  if ( !DCONST_DVARBOOL_reliableDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = from->addrHandleIndex;
    *(_OWORD *)&v14.type = *(_OWORD *)&from->type;
    v14.addrHandleIndex = v12;
    v13 = NET_AdrToString(&v14);
    Com_Printf(25, "RMSG: Received ACK for sequence %d from %s\n", Byte, v13);
  }
  RMsg_MarkSequenceReceived(&froma, Byte);
  return 1i64;
}

/*
==============
RMsg_HandleReliablePacket
==============
*/
__int64 RMsg_HandleReliablePacket(const LocalClientNum_t localClientNum, const char *cmd, netadr_t *from, msg_t *msg, const int time, bool (*dispatchCallback)(LocalClientNum_t, netadr_t *__struct_ptr, const char *, msg_t *, int), bool *success)
{
  int v11; 
  unsigned int v12; 
  const dvar_t *v13; 
  int addrHandleIndex; 
  const char *v15; 
  int v16; 
  unsigned int Byte; 
  int Long; 
  __int64 v19; 
  const char *v20; 
  __int128 v21; 
  const char *v22; 
  const dvar_t *v23; 
  LocalClientNum_t v24; 
  bool v25; 
  bool v26; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  const dvar_t *v28; 
  int v29; 
  const char *v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  int v36; 
  netadr_t v37; 
  netadr_t v38; 
  const char *v39; 
  bool (__fastcall *v40)(LocalClientNum_t, netadr_t *__struct_ptr, const char *, msg_t *, int); 
  bool *v41; 
  __int128 v42; 
  msg_t sb; 
  msg_t buf; 
  unsigned __int8 buffer[1248]; 
  char string[1024]; 

  v40 = dispatchCallback;
  v41 = success;
  v39 = cmd;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1041, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1042, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !success && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1043, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
  if ( I_strcmp(cmd, "RM") )
    return 0i64;
  v11 = 0;
  v12 = 0;
  *success = 0;
  v13 = DCONST_DVARBOOL_reliableDebug;
  if ( !DCONST_DVARBOOL_reliableDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v37.type = *(_OWORD *)&from->type;
    v37.addrHandleIndex = addrHandleIndex;
    v15 = NET_AdrToString(&v37);
    Com_Printf(25, "RMSG: Received reliable packet from %s\n", v15);
  }
  v16 = from->addrHandleIndex;
  v42 = *(_OWORD *)&from->type;
  v36 = v16;
  Byte = MSG_ReadByte(msg);
  if ( msg->overflowed )
    goto LABEL_62;
  while ( 1 )
  {
    if ( Byte > 0xFF )
    {
      LODWORD(v34) = 255;
      LODWORD(v33) = Byte;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1066, ASSERT_TYPE_ASSERT, "( sequence ) <= ( 0xff )", "%s <= %s\n\t%i, %i", "sequence", "RMSG_MAX_SEQUENCE_NUM", v33, v34) )
        __debugbreak();
    }
    HIDWORD(v42) = MSG_ReadByte(msg);
    Long = MSG_ReadLong(msg);
    v19 = Long;
    if ( msg->overflowed )
      break;
    if ( (unsigned __int64)Long >= 0x4D6 )
    {
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1082, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "msgSize overflow, packet likely tampered with");
      goto LABEL_43;
    }
    MSG_ReadData(msg, Long, buffer, 1238);
    if ( msg->overflowed )
    {
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1089, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "msgSize overflow, packet likely tampered with");
      goto LABEL_43;
    }
    if ( (unsigned int)v19 >= 0x4D6 )
    {
      LODWORD(v32) = 1238;
      LODWORD(v31) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1094, ASSERT_TYPE_ASSERT, "(unsigned)( msgSize ) < (unsigned)( ( sizeof( *array_counter( msgBuf ) ) + 0 ) )", "msgSize doesn't index ARRAY_COUNT( msgBuf )\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    buffer[v19] = 0;
    v11 = 1;
    if ( Byte < v12 && Byte && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1104, ASSERT_TYPE_ASSERT, "(sequence >= highestSequence || sequence == 0)", (const char *)&queryFormat, "sequence >= highestSequence || sequence == 0") )
      __debugbreak();
    v12 = Byte;
    MSG_InitReadOnly(&buf, buffer, v19);
    MSG_BeginReading(&buf);
    v20 = MSG_ReadStringLine(&buf, string, 0x400u);
    if ( showpackets->current.integer )
    {
      v21 = *(_OWORD *)&from->type;
      v37.addrHandleIndex = from->addrHandleIndex;
      *(_OWORD *)&v37.type = v21;
      v22 = NET_AdrToString(&v37);
      Com_Printf(16, "reliable recv: %s (%i)->'%s'\n", v22, Byte, v39);
    }
    v23 = DCONST_DVARBOOL_reliableDebug;
    if ( !DCONST_DVARBOOL_reliableDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
      Com_Printf(25, "RMSG: Seq=%i, Str='%s'\n", Byte, v20);
    v24 = localClientNum;
    v38.addrHandleIndex = v36;
    *(_OWORD *)&v38.type = v42;
    v25 = v40((LocalClientNum_t)localClientNum, &v38, v20, &buf, time);
    *v41 |= v25;
    Byte = MSG_ReadByte(msg);
    if ( msg->overflowed )
      goto LABEL_49;
  }
  v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1075, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "message overflow, packet likely tampered with");
LABEL_43:
  if ( v26 )
    __debugbreak();
  if ( !v11 )
  {
LABEL_62:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1124, ASSERT_TYPE_ASSERT, "(sequenceReceived)", (const char *)&queryFormat, "sequenceReceived") )
      __debugbreak();
  }
  v24 = localClientNum;
LABEL_49:
  if ( NET_IsConnectionEstablished(from) )
  {
    if ( v12 > 0xFF )
    {
      LODWORD(v34) = 255;
      LODWORD(v33) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 1010, ASSERT_TYPE_ASSERT, "( sequenceNum ) <= ( 0xff )", "%s <= %s\n\t%i, %i", "sequenceNum", "RMSG_MAX_SEQUENCE_NUM", v33, v34) )
        __debugbreak();
    }
    MSG_Init(&sb, s_msgBuildBuf, 1237);
    MSG_WriteString(&sb, "RA");
    MSG_WriteByte(&sb, v12);
    LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum(v24);
    MSG_WriteByte(&sb, LocalNetIDFromLocalClientNum);
    v28 = DCONST_DVARBOOL_reliableDebug;
    if ( !DCONST_DVARBOOL_reliableDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    if ( v28->current.enabled )
    {
      v29 = from->addrHandleIndex;
      *(_OWORD *)&v38.type = *(_OWORD *)&from->type;
      v38.addrHandleIndex = v29;
      v30 = NET_AdrToString(&v38);
      Com_Printf(25, "RMSG: Sending ack for sequence %d to %s\n", v12, v30);
    }
    NET_OutOfBandData(NS_MAXCLIENTS, from, sb.data, sb.cursize);
  }
  return 1i64;
}

/*
==============
RMsg_Init
==============
*/
void RMsg_Init(void)
{
  netadr_t *v0; 
  __int64 v1; 
  int addrHandleIndex; 
  const char *v3; 
  RMsgMessage *p_port; 
  __int64 v5; 
  netadr_t v6; 

  v0 = &s_reliableMsgClients;
  v1 = 24i64;
  do
  {
    if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 397, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
      __debugbreak();
    if ( v0->type )
    {
      addrHandleIndex = v0->addrHandleIndex;
      *(_OWORD *)&v6.type = *(_OWORD *)&v0->type;
      v6.addrHandleIndex = addrHandleIndex;
      v3 = NET_AdrToString(&v6);
      Com_Printf(25, "[NET] Dropping all packets to client %s\n", v3);
    }
    p_port = (RMsgMessage *)&v0[202].port;
    v5 = 20i64;
    do
    {
      if ( p_port->active )
        RMsg_SetMessageStatus(p_port, RMSG_STATUS_ERROR);
      ++p_port;
      --v5;
    }
    while ( v5 );
    memset_0(v0, 0, 0x1610ui64);
    v0 = (netadr_t *)((char *)v0 + 5648);
    --v1;
  }
  while ( v1 );
}

/*
==============
RMsg_IsActiveAddr
==============
*/
bool RMsg_IsActiveAddr(const netadr_t *to, bool ignoreNetId)
{
  unsigned int v4; 

  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 164, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  v4 = 0;
  while ( NET_CompareAdrSigned(to, (netadr_t *)((char *)&s_reliableMsgClients + 5648 * v4), ignoreNetId) )
  {
    if ( ++v4 >= 0x18 )
      return 0;
  }
  return *((_DWORD *)&s_reliableMsgClients + 1412 * v4 + 10) != 0;
}

/*
==============
RMsg_IsHandleValid
==============
*/
_BOOL8 RMsg_IsHandleValid(const unsigned int *messageHandle)
{
  return *messageHandle != 0;
}

/*
==============
RMsg_MarkHandleMsgReceived
==============
*/
void RMsg_MarkHandleMsgReceived(const unsigned int messageHandle)
{
  RMsgSendHandler *SendHandler; 

  if ( messageHandle )
  {
    SendHandler = RMsg_GetSendHandler(messageHandle);
    if ( SendHandler->assignedHandle != messageHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 967, ASSERT_TYPE_ASSERT, "(handler->assignedHandle == messageHandle)", (const char *)&queryFormat, "handler->assignedHandle == messageHandle") )
      __debugbreak();
    RMsg_MarkSequenceReceived(&SendHandler->clientUID.addr, SendHandler->msgUID.sequence);
  }
}

/*
==============
RMsg_MarkOldestSequenceAcked
==============
*/
void RMsg_MarkOldestSequenceAcked(RMsgClient *client)
{
  unsigned int *p_sequenceNum; 
  unsigned int *v3; 
  unsigned int v4; 
  unsigned int v5; 
  const dvar_t *v6; 
  int addrHandleIndex; 
  const char *v8; 
  int v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  __int64 bytesAckd; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  netadr_t v40; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 871, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->bytesAckd >= 0xFA0u )
  {
    LODWORD(v34) = client->bytesAckd;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 872, ASSERT_TYPE_ASSERT, "(unsigned)( client->bytesAckd ) < (unsigned)( 4000 )", "client->bytesAckd doesn't index RMSG_BUF_SIZE_PER_CLIENT\n\t%i not in [0, %i)", v34, 4000) )
      __debugbreak();
  }
  p_sequenceNum = &client->msgs[0].sequenceNum;
  v3 = &client->msgs[0].sequenceNum;
  v4 = 0;
  v5 = -1;
  do
  {
    if ( *((_BYTE *)v3 - 12) && *v3 == client->oldestSequence )
    {
      v5 = v4;
      goto LABEL_13;
    }
    ++v4;
    v3 += 20;
  }
  while ( v4 < 0x14 );
  if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 879, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tcould not find the oldest sequence num even though we found a slot for the sequence", "success") )
    goto LABEL_14;
  __debugbreak();
LABEL_13:
  if ( v5 < 0x14 )
    goto LABEL_16;
LABEL_14:
  LODWORD(v35) = 20;
  LODWORD(v34) = v5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 882, ASSERT_TYPE_ASSERT, "(unsigned)( msgSlot ) < (unsigned)( 20 )", "msgSlot doesn't index RMSG_MAX_MSG_PER_CLIENT\n\t%i not in [0, %i)", v34, v35) )
    __debugbreak();
LABEL_16:
  if ( client->msgs[v5].msg.cursize <= 0 )
  {
    LODWORD(v34) = client->msgs[v5].msg.cursize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 883, ASSERT_TYPE_ASSERT, "( ( client->msgs[msgSlot].msg.cursize > 0 ) )", "( client->msgs[msgSlot].msg.cursize ) = %i", v34) )
      __debugbreak();
  }
  if ( client->oldestSequence != client->msgs[v5].sequenceNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 884, ASSERT_TYPE_ASSERT, "(client->oldestSequence == client->msgs[msgSlot].sequenceNum)", "%s\n\tShould only ack the oldest sequence, otherwise we'll stomp memory", "client->oldestSequence == client->msgs[msgSlot].sequenceNum") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_reliableDebug;
  if ( !DCONST_DVARBOOL_reliableDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    addrHandleIndex = client->addr.addrHandleIndex;
    *(_OWORD *)&v40.type = *(_OWORD *)&client->addr.type;
    v40.addrHandleIndex = addrHandleIndex;
    v8 = NET_AdrToString(&v40);
    Com_Printf(131097, "RMSG: Received reliable packet ack for sequence %i (slot %i) from %s\n", client->oldestSequence, v5, v8);
  }
  RMsg_SetMessageStatus(&client->msgs[v5], RMSG_STATUS_SUCCESS);
  client->bytesAckd += client->msgs[v5].msg.cursize;
  v9 = 0;
  client->msgs[v5].active = 0;
  v10 = 0;
  v11 = 0;
  client->oldestSequence = (unsigned __int8)(client->oldestSequence + 1);
  do
  {
    if ( *((_BYTE *)p_sequenceNum - 12) )
    {
      v9 = 1;
      v12 = *(_QWORD *)(p_sequenceNum + 3);
      bytesAckd = client->bytesAckd;
      if ( *p_sequenceNum == client->oldestSequence )
        v11 = 1;
      if ( v12 - (__int64)client - 48 < bytesAckd )
      {
        LODWORD(v39) = v10;
        LODWORD(v38) = bytesAckd - client->msgs[v5].msg.cursize;
        LODWORD(v37) = client->bytesAckd;
        LODWORD(v36) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 909, ASSERT_TYPE_ASSERT, "(client->msgs[tmpSlot].msg.data - client->reliableBuf >= client->bytesAckd)", "%s\n\tfor client %zi, acking msg slot %i is changing bytesAckd from %i to %i, but active msgSlot %i's buffer would get blown away by that because it spans from %zi to %zi", "client->msgs[tmpSlot].msg.data - client->reliableBuf >= client->bytesAckd", ((char *)client - (char *)&s_reliableMsgClients) / 5648, v36, v37, v38, v39, v12 - (_QWORD)client - 48, (int)p_sequenceNum[8] - (_QWORD)client + v12 - 48) )
          __debugbreak();
      }
    }
    ++v10;
    p_sequenceNum += 20;
  }
  while ( v10 < 0x14 );
  v14 = 0;
  if ( !v11 && v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 912, ASSERT_TYPE_ASSERT, "(oldestSequenceExists || !otherMessagesExist)", "%s\n\tMissing sequence number even though other messages exist", "oldestSequenceExists || !otherMessagesExist") )
    __debugbreak();
  if ( client->bytesAckd == client->bufferUsed )
  {
    *(_QWORD *)&client->bufferUsed = 0i64;
    LOBYTE(v14) = client->msgs[0].active;
    v15 = v14 + 1;
    if ( !client->msgs[1].active )
      v15 = v14;
    v16 = v15 + 1;
    if ( !client->msgs[2].active )
      v16 = v15;
    v17 = v16 + 1;
    if ( !client->msgs[3].active )
      v17 = v16;
    v18 = v17 + 1;
    if ( !client->msgs[4].active )
      v18 = v17;
    v19 = v18 + 1;
    if ( !client->msgs[5].active )
      v19 = v18;
    v20 = v19 + 1;
    if ( !client->msgs[6].active )
      v20 = v19;
    v21 = v20 + 1;
    if ( !client->msgs[7].active )
      v21 = v20;
    v22 = v21 + 1;
    if ( !client->msgs[8].active )
      v22 = v21;
    v23 = v22 + 1;
    if ( !client->msgs[9].active )
      v23 = v22;
    v24 = v23 + 1;
    if ( !client->msgs[10].active )
      v24 = v23;
    v25 = v24 + 1;
    if ( !client->msgs[11].active )
      v25 = v24;
    v26 = v25 + 1;
    if ( !client->msgs[12].active )
      v26 = v25;
    v27 = v26 + 1;
    if ( !client->msgs[13].active )
      v27 = v26;
    v28 = v27 + 1;
    if ( !client->msgs[14].active )
      v28 = v27;
    v29 = v28 + 1;
    if ( !client->msgs[15].active )
      v29 = v28;
    v30 = v29 + 1;
    if ( !client->msgs[16].active )
      v30 = v29;
    v31 = v30 + 1;
    if ( !client->msgs[17].active )
      v31 = v30;
    v32 = v31 + 1;
    if ( !client->msgs[18].active )
      v32 = v31;
    v33 = v32 + 1;
    if ( !client->msgs[19].active )
      v33 = v32;
    if ( v33 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 920, ASSERT_TYPE_ASSERT, "(RMsg_CountOutstandingMessages( client ) == 0)", (const char *)&queryFormat, "RMsg_CountOutstandingMessages( client ) == 0") )
        __debugbreak();
    }
  }
}

/*
==============
RMsg_MarkSequenceReceived
==============
*/
void RMsg_MarkSequenceReceived(netadr_t *from, unsigned int sequenceNum)
{
  unsigned int v4; 
  RMsgClient *v5; 
  int addrHandleIndex; 
  const char *v7; 
  int v8; 
  unsigned int *i; 
  int v10; 
  netsrc_t localNetID; 
  const char *v12; 
  char *fmt; 
  netadr_t v14; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 164, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  v4 = 0;
  while ( 1 )
  {
    v5 = (RMsgClient *)((char *)&s_reliableMsgClients + 5648 * v4);
    if ( !NET_CompareAdrSigned(from, &v5->addr, 0) )
      break;
    if ( ++v4 >= 0x18 )
    {
      addrHandleIndex = from->addrHandleIndex;
      *(_OWORD *)&v14.type = *(_OWORD *)&from->type;
      v14.addrHandleIndex = addrHandleIndex;
      v7 = NET_AdrToString(&v14);
      Com_Printf(131097, "Received reliable packet ack for sequence %i from unknown IP %s\n", sequenceNum, v7);
      return;
    }
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 142, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  v8 = 0;
  for ( i = &v5->msgs[0].sequenceNum; !*((_BYTE *)i - 12) || *i != sequenceNum; i += 20 )
  {
    if ( (unsigned int)++v8 >= 0x14 )
    {
      v10 = from->addrHandleIndex;
      localNetID = from->localNetID;
      *(_OWORD *)&v14.type = *(_OWORD *)&from->type;
      v14.addrHandleIndex = v10;
      v12 = NET_AdrToString(&v14);
      LODWORD(fmt) = localNetID;
      Com_Printf(131097, "Received reliable packet ack for sequence %i which does not exist from client at %s. LocalNetID %i Most likely already received\n", sequenceNum, v12, fmt);
      return;
    }
  }
  while ( sequenceNum != v5->oldestSequence )
    RMsg_MarkOldestSequenceAcked(v5);
  RMsg_MarkOldestSequenceAcked(v5);
  v5->sendCount = 0;
}

/*
==============
RMsg_ReleaseHandle
==============
*/
void RMsg_ReleaseHandle(unsigned int *messageHandle)
{
  unsigned int v2; 
  RMsgSendHandler *SendHandler; 
  unsigned int v4; 
  const netadr_t *v5; 
  unsigned int sequence; 
  unsigned int v7; 
  const netadr_t *v8; 

  v2 = *messageHandle;
  if ( v2 )
  {
    SendHandler = RMsg_GetSendHandler(v2);
    if ( (unsigned int)(SendHandler->status - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 346, ASSERT_TYPE_ASSERT, "( ( (handler->status == RMSG_STATUS_SUCCESS) || (handler->status == RMSG_STATUS_ERROR) ) )", "( handler->status ) = %i", SendHandler->status) )
      __debugbreak();
    v4 = 0;
    while ( 1 )
    {
      v5 = (netadr_t *)((char *)&s_reliableMsgClients + 5648 * v4);
      if ( !NET_CompareAdrSigned(&SendHandler->clientUID.addr, v5, 0) )
        break;
      if ( ++v4 >= 0x18 )
        goto LABEL_19;
    }
    sequence = SendHandler->msgUID.sequence;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 142, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
      __debugbreak();
    v7 = 0;
    v8 = v5 + 203;
    while ( !LOBYTE(v8[-1].port) || v8->type != sequence )
    {
      ++v7;
      v8 += 4;
      if ( v7 >= 0x14 )
        goto LABEL_19;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 348, ASSERT_TYPE_ASSERT, "(!RMsg_FindMessageFromHandler( handler ))", (const char *)&queryFormat, "!RMsg_FindMessageFromHandler( handler )") )
      __debugbreak();
LABEL_19:
    *(_QWORD *)&SendHandler->clientUID.addr.type = 0i64;
    *(_QWORD *)&SendHandler->clientUID.addr.port = 0i64;
    *(_QWORD *)&SendHandler->clientUID.addr.addrHandleIndex = 0i64;
    *(_QWORD *)&SendHandler->status = 0i64;
    SendHandler->timeCreated = 0;
    *messageHandle = 0;
  }
}

/*
==============
RMsg_SendMessages
==============
*/
void RMsg_SendMessages(void)
{
  int v0; 
  unsigned int *p_assignedHandle; 
  int v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  RMsgClient *v6; 
  __int64 v7; 
  int bufferUsed; 
  const dvar_t *v9; 
  int integer; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  int v14; 
  __int128 v15; 
  int addrHandleIndex; 
  int v17; 
  const char *v18; 
  unsigned int sendCount; 
  const char *v20; 
  int v21; 
  __int128 v22; 
  const char *v23; 
  int v24; 
  const char *v25; 
  char *fmt; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  netadr_t v30; 
  netadr_t v31; 
  msg_t buf; 

  v0 = 1;
  p_assignedHandle = &s_reliableMsgHandler[0].assignedHandle;
  v2 = Sys_Milliseconds();
  v3 = 50i64;
  do
  {
    if ( *(p_assignedHandle - 1) )
    {
      if ( *p_assignedHandle != v0 )
      {
        LODWORD(v29) = v0;
        LODWORD(v28) = *p_assignedHandle;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 377, ASSERT_TYPE_ASSERT, "( handler->assignedHandle ) == ( static_cast<RMsgSendHandle>( handlerIndex + 1 ) )", "%s == %s\n\t%i, %i", "handler->assignedHandle", "static_cast<RMsgSendHandle>( handlerIndex + 1 )", v28, v29) )
          __debugbreak();
      }
      if ( (int)(v2 - p_assignedHandle[1]) >= 60000 )
      {
        LODWORD(v29) = 60000;
        LODWORD(v28) = v2 - p_assignedHandle[1];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 378, ASSERT_TYPE_ASSERT, "( (now - handler->timeCreated) ) < ( (2*30000) )", "%s < %s\n\t%i, %i", "(now - handler->timeCreated)", "(2*RMSG_TIMEOUT_TIME)", v28, v29) )
          __debugbreak();
      }
    }
    ++v0;
    p_assignedHandle += 9;
    --v3;
  }
  while ( v3 );
  v4 = Sys_Milliseconds();
  if ( dword_14FF7EFDC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14FF7EFDC);
    if ( dword_14FF7EFDC == -1 )
    {
      lastCallTimer = v4;
      j__Init_thread_footer(&dword_14FF7EFDC);
    }
  }
  v5 = (unsigned int)(v4 - lastCallTimer);
  if ( (int)v5 > 300 )
    Com_Printf(131097, "RMsg_SendMessages() starved %ims\n", v5);
  lastCallTimer = v4;
  v6 = (RMsgClient *)&s_reliableMsgClients;
  v7 = 24i64;
  do
  {
    bufferUsed = v6->bufferUsed;
    if ( !bufferUsed )
      goto LABEL_49;
    if ( v6->sendCount <= 0 )
      goto LABEL_31;
    v9 = DCONST_DVARINT_reliableResendTimeMax;
    if ( !DCONST_DVARINT_reliableResendTimeMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableResendTimeMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    v11 = DCONST_DVARINT_reliableResendTimeMin;
    if ( !DCONST_DVARINT_reliableResendTimeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableResendTimeMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.integer;
    v13 = DCONST_DVARINT_reliableTimeoutTime;
    v14 = v12 << (LOBYTE(v6->sendCount) - 1);
    if ( v14 < integer )
      integer = v14;
    if ( !DCONST_DVARINT_reliableTimeoutTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableTimeoutTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v4 - v6->lastSendTime >= integer )
    {
      v15 = *(_OWORD *)&v6->addr.type;
      addrHandleIndex = v6->addr.addrHandleIndex;
      v17 = v4 - v6->lastAddTime;
      if ( v17 <= v13->current.integer )
      {
        sendCount = v6->sendCount;
        *(_OWORD *)&v31.type = *(_OWORD *)&v6->addr.type;
        v31.addrHandleIndex = addrHandleIndex;
        v20 = NET_AdrToString(&v31);
        LODWORD(v27) = v17;
        LODWORD(fmt) = integer;
        Com_Printf(131097, "RMSG: Resending to %s: count=%d, delay=%dms, queued=%dms\n", v20, sendCount, fmt, v27);
        bufferUsed = v6->bufferUsed;
LABEL_31:
        if ( bufferUsed == v6->bytesAckd )
        {
          LODWORD(v29) = v6->bytesAckd;
          LODWORD(v28) = bufferUsed;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 831, ASSERT_TYPE_ASSERT, "( client->bufferUsed ) != ( client->bytesAckd )", "%s != %s\n\t%i, %i", "client->bufferUsed", "client->bytesAckd", v28, v29) )
            __debugbreak();
        }
        ++v6->sendCount;
        v6->lastSendTime = v4;
        MSG_Init(&buf, s_msgBuildBuf, 1237);
        RMsg_AddRMsgsToPacket(v6, &buf);
        if ( !buf.cursize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 750, ASSERT_TYPE_ASSERT, "(msg.cursize)", (const char *)&queryFormat, "msg.cursize") )
          __debugbreak();
        if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 751, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
          __debugbreak();
        if ( NET_IsBotAddr(&v6->addr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 754, ASSERT_TYPE_ASSERT, "(!NET_IsBotAddr( client->addr ))", (const char *)&queryFormat, "!NET_IsBotAddr( client->addr )") )
          __debugbreak();
        if ( NET_IsConnectionEstablished(&v6->addr) )
        {
          NET_OutOfBandData(NS_MAXCLIENTS, &v6->addr, buf.data, buf.cursize, 1u);
          v21 = NET_OutOfBandData(NS_MAXCLIENTS, &v6->addr, buf.data, buf.cursize, 1u);
          if ( v21 >= 0 )
            goto LABEL_49;
          v22 = *(_OWORD *)&v6->addr.type;
          v30.addrHandleIndex = v6->addr.addrHandleIndex;
          *(_OWORD *)&v30.type = v22;
          v23 = NET_AdrToString(&v30);
          Com_PrintWarning(131097, "Dropping all reliable packets for client at '%s' since we got a packet error %d trying to send to them\n", v23, (unsigned int)v21);
        }
        else
        {
          if ( NET_IsConnectionActive(&v6->addr) )
            goto LABEL_49;
          v24 = v6->addr.addrHandleIndex;
          *(_OWORD *)&v30.type = *(_OWORD *)&v6->addr.type;
          v30.addrHandleIndex = v24;
          v25 = NET_AdrToString(&v30);
          Com_PrintWarning(131097, "Dropping all reliable packets for client at '%s' since connection no longer active.\n", v25);
        }
      }
      else
      {
        v30.addrHandleIndex = v6->addr.addrHandleIndex;
        *(_OWORD *)&v30.type = v15;
        v18 = NET_AdrToString(&v30);
        Com_PrintWarning(131097, "RMSG: Dropping all reliable packets for client at '%s' - connection timed out\n", v18);
      }
      RMsg_DropAllPacketsForClient(v6);
    }
LABEL_49:
    ++v6;
    --v7;
  }
  while ( v7 );
}

/*
==============
RMsg_SetInvalidHandle
==============
*/
void RMsg_SetInvalidHandle(unsigned int *outHandle)
{
  if ( outHandle )
    *outHandle = 0;
}

/*
==============
RMsg_SetMessageStatus
==============
*/
void RMsg_SetMessageStatus(RMsgMessage *message, const RMsgSendStatus status)
{
  unsigned int sendHandle; 
  RMsgSendHandler *SendHandler; 
  const dvar_t *v6; 
  int addrHandleIndex; 
  const char *v8; 
  char *fmt; 
  __int64 v10; 
  netadr_t v11; 

  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 257, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  if ( !message->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 258, ASSERT_TYPE_ASSERT, "(message->active)", (const char *)&queryFormat, "message->active") )
    __debugbreak();
  sendHandle = message->sendHandle;
  if ( sendHandle )
  {
    SendHandler = RMsg_GetSendHandler(sendHandle);
    if ( SendHandler->status != RMSG_STATUS_IN_PROGRESS )
    {
      LODWORD(v10) = SendHandler->status;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 264, ASSERT_TYPE_ASSERT, "( ( handler->status == RMSG_STATUS_IN_PROGRESS ) )", "( handler->status ) = %i", v10) )
        __debugbreak();
    }
    if ( (unsigned int)(status - 2) > 1 )
    {
      LODWORD(v10) = status;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 265, ASSERT_TYPE_ASSERT, "( ( (status == RMSG_STATUS_SUCCESS) || (status == RMSG_STATUS_ERROR) ) )", "( status ) = %i", v10) )
        __debugbreak();
    }
    v6 = DCONST_DVARBOOL_reliableDebug;
    if ( !DCONST_DVARBOOL_reliableDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reliableDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      addrHandleIndex = SendHandler->clientUID.addr.addrHandleIndex;
      *(_OWORD *)&v11.type = *(_OWORD *)&SendHandler->clientUID.addr.type;
      v11.addrHandleIndex = addrHandleIndex;
      v8 = NET_AdrToString(&v11);
      LODWORD(fmt) = message->sendHandle;
      Com_Printf(131097, "RMSG: Changing handle state from %i to %i for handle %i (client %s)\n", (unsigned int)SendHandler->status, (unsigned int)status, fmt, v8);
    }
    SendHandler->status = status;
    message->sendHandle = 0;
  }
}

/*
==============
RMsg_UpdateAddr
==============
*/
void RMsg_UpdateAddr(const netadr_t *addr, const netadr_t *newAddr)
{
  unsigned int v4; 
  netadr_t *v5; 

  if ( !addr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\reliablemsg.cpp", 164, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  v4 = 0;
  while ( 1 )
  {
    v5 = (netadr_t *)((char *)&s_reliableMsgClients + 5648 * v4);
    if ( !NET_CompareAdrSigned(addr, v5, 0) )
      break;
    if ( ++v4 >= 0x18 )
      return;
  }
  *(_OWORD *)&v5->type = *(_OWORD *)&newAddr->type;
  v5->addrHandleIndex = newAddr->addrHandleIndex;
}

