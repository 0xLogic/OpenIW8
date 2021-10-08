/*
==============
DsLobbyMessage::Dispatch
==============
*/

void __fastcall DsLobbyMessage::Dispatch(DsLobbyMessage *message)
{
  ?Dispatch@DsLobbyMessage@@CAXAEAV1@@Z(message);
}

/*
==============
DsLobbyMessage::WriteHeader
==============
*/

void __fastcall DsLobbyMessage::WriteHeader(DsLobbyMessage *this)
{
  ?WriteHeader@DsLobbyMessage@@QEAAXXZ(this);
}

/*
==============
DsLobbyMessage::GetId
==============
*/

DsLobbyMessageId __fastcall DsLobbyMessage::GetId(DsLobbyMessage *this)
{
  return ?GetId@DsLobbyMessage@@QEBA?AW4DsLobbyMessageId@@XZ(this);
}

/*
==============
DsLobbyMessage::AddHandler
==============
*/

void __fastcall DsLobbyMessage::AddHandler(const DsLobbyMessageId messageId, void (__fastcall *messageHandler)(DsLobbyMessage *, void *), void *userData)
{
  ?AddHandler@DsLobbyMessage@@SAXW4DsLobbyMessageId@@P6AXAEAV1@PEAX@Z2@Z(messageId, messageHandler, userData);
}

/*
==============
DsLobbyMessage::GetStream
==============
*/

msg_t *__fastcall DsLobbyMessage::GetStream(DsLobbyMessage *this)
{
  return ?GetStream@DsLobbyMessage@@QEAAPEAUmsg_t@@XZ(this);
}

/*
==============
DsLobbyMessage::DsLobbyMessage
==============
*/

void __fastcall DsLobbyMessage::DsLobbyMessage(DsLobbyMessage *this, DsLobbyMessageId id)
{
  ??0DsLobbyMessage@@QEAA@W4DsLobbyMessageId@@@Z(this, id);
}

/*
==============
DsLobbyMessage::Handle
==============
*/

bool __fastcall DsLobbyMessage::Handle(const char *cmd, const netadr_t *from, msg_t *stream)
{
  return ?Handle@DsLobbyMessage@@SA_NPEBDAEBUnetadr_t@@PEAUmsg_t@@@Z(cmd, from, stream);
}

/*
==============
DsLobbyMessage::ReadHeader
==============
*/

bool __fastcall DsLobbyMessage::ReadHeader(DsLobbyMessage *this)
{
  return ?ReadHeader@DsLobbyMessage@@QEAA_NXZ(this);
}

/*
==============
DsLobbyMessage::DsLobbyMessage
==============
*/

void __fastcall DsLobbyMessage::DsLobbyMessage(DsLobbyMessage *this, msg_t *stream)
{
  ??0DsLobbyMessage@@QEAA@PEAUmsg_t@@@Z(this, stream);
}

/*
==============
DsLobbyMessage::DsLobbyMessage
==============
*/
void DsLobbyMessage::DsLobbyMessage(DsLobbyMessage *this, msg_t *stream)
{
  _RBX = stream;
  this->m_id = DS_LOBBY_MESSAGE_INVALID;
  _RDI = this;
  memset_0(this->m_buffer, 0, sizeof(this->m_buffer));
  *(_QWORD *)&_RDI->m_stream.overflowed = 0i64;
  _RDI->m_stream.data = NULL;
  _RDI->m_stream.splitData = NULL;
  *(_QWORD *)&_RDI->m_stream.maxsize = 0i64;
  *(_QWORD *)&_RDI->m_stream.splitSize = 0i64;
  *(_QWORD *)&_RDI->m_stream.bit = 0i64;
  *(_QWORD *)&_RDI->m_stream.targetLocalNetID = 0i64;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi+4C8h], ymm0
    vmovups xmm1, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rdi+4E8h], xmm1
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmovsd  qword ptr [rdi+4F8h], xmm0
  }
}

/*
==============
DsLobbyMessage::DsLobbyMessage
==============
*/
void DsLobbyMessage::DsLobbyMessage(DsLobbyMessage *this, DsLobbyMessageId id)
{
  this->m_id = id;
  memset_0(this->m_buffer, 0, sizeof(this->m_buffer));
  *(_QWORD *)&this->m_stream.overflowed = 0i64;
  this->m_stream.data = NULL;
  this->m_stream.splitData = NULL;
  *(_QWORD *)&this->m_stream.maxsize = 0i64;
  *(_QWORD *)&this->m_stream.splitSize = 0i64;
  *(_QWORD *)&this->m_stream.bit = 0i64;
  *(_QWORD *)&this->m_stream.targetLocalNetID = 0i64;
  MSG_Init(&this->m_stream, this->m_buffer, 1216);
}

/*
==============
DsLobbyMessage::AddHandler
==============
*/
void DsLobbyMessage::AddHandler(const DsLobbyMessageId messageId, void (*messageHandler)(DsLobbyMessage *, void *), void *userData)
{
  __int64 v3; 
  __int64 v6; 
  int v8; 

  v3 = messageId;
  if ( messageId )
  {
    v8 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ds\\ds_lobby_message.cpp", 19, ASSERT_TYPE_ASSERT, "(unsigned)( messageId ) < (unsigned)( DS_LOBBY_MESSAGE_COUNT )", "messageId doesn't index DS_LOBBY_MESSAGE_COUNT\n\t%i not in [0, %i)", messageId, v8) )
      __debugbreak();
  }
  v6 = v3;
  if ( s_handlers[v6].func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ds\\ds_lobby_message.cpp", 20, ASSERT_TYPE_ASSERT, "(s_handlers[messageId].func == nullptr)", (const char *)&queryFormat, "s_handlers[messageId].func == nullptr") )
    __debugbreak();
  s_handlers[v6].func = messageHandler;
  s_handlers[v6].userData = userData;
}

/*
==============
DsLobbyMessage::Dispatch
==============
*/
void DsLobbyMessage::Dispatch(DsLobbyMessage *message)
{
  __int64 Bits; 
  DsLobbyMessageHandler *v3; 

  if ( Lobby_GetPartyData()->inParty )
  {
    Bits = MSG_ReadBits(&message->m_stream, 1u);
    if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
      __debugbreak();
    if ( (unsigned int)Bits <= 1 )
    {
      v3 = &s_handlers[(int)Bits];
      message->m_id = Bits;
      if ( v3->func )
        v3->func(message, v3->userData);
    }
  }
}

/*
==============
DsLobbyMessage::GetId
==============
*/
__int64 DsLobbyMessage::GetId(DsLobbyMessage *this)
{
  return (unsigned int)this->m_id;
}

/*
==============
DsLobbyMessage::GetStream
==============
*/
msg_t *DsLobbyMessage::GetStream(DsLobbyMessage *this)
{
  return &this->m_stream;
}

/*
==============
DsLobbyMessage::Handle
==============
*/
char DsLobbyMessage::Handle(const char *cmd, const netadr_t *from, msg_t *stream)
{
  const char *v3; 
  __int64 v6; 
  signed __int64 v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  __int64 v14; 
  DsLobbyMessageHandler *v15; 
  int v17; 
  char v18[1220]; 
  msg_t msg; 

  v3 = "dslobby";
  _RBP = stream;
  v6 = 0x7FFFFFFFi64;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v7 = cmd - "dslobby";
  do
  {
    v8 = v3[v7];
    v9 = v6;
    v10 = *v3++;
    --v6;
    if ( !v9 )
      break;
    if ( v8 != v10 )
      return 0;
  }
  while ( v8 );
  v17 = -1;
  memset_0(v18, 0, 0x4C0ui64);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups xmm1, xmmword ptr [rbp+20h]
    vmovups ymmword ptr [rsp+568h+msg.overflowed], ymm0
    vmovsd  xmm0, qword ptr [rbp+30h]
    vmovsd  qword ptr [rsp+568h+msg.targetLocalNetID], xmm0
    vmovups xmmword ptr [rsp+568h+msg.splitSize], xmm1
  }
  if ( Lobby_GetPartyData()->inParty )
  {
    v14 = MSG_ReadBits(&msg, 1u);
    if ( (unsigned __int64)(v14 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v14, "signed", v14) )
      __debugbreak();
    if ( (unsigned int)v14 <= 1 )
    {
      v15 = &s_handlers[(int)v14];
      v17 = v14;
      if ( v15->func )
        v15->func((DsLobbyMessage *)&v17, v15->userData);
    }
  }
  return 1;
}

/*
==============
DsLobbyMessage::ReadHeader
==============
*/
char DsLobbyMessage::ReadHeader(DsLobbyMessage *this)
{
  __int64 Bits; 

  Bits = MSG_ReadBits(&this->m_stream, 1u);
  if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
    __debugbreak();
  if ( (unsigned int)Bits > 1 )
    return 0;
  this->m_id = Bits;
  return 1;
}

/*
==============
DsLobbyMessage::WriteHeader
==============
*/
void DsLobbyMessage::WriteHeader(DsLobbyMessage *this)
{
  if ( this->m_id == DS_LOBBY_MESSAGE_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ds\\ds_lobby_message.cpp", 75, ASSERT_TYPE_ASSERT, "(m_id != DS_LOBBY_MESSAGE_INVALID)", (const char *)&queryFormat, "m_id != DS_LOBBY_MESSAGE_INVALID") )
    __debugbreak();
  MSG_WriteString(&this->m_stream, "dslobby");
  MSG_WriteBits(&this->m_stream, this->m_id, 1u);
}

