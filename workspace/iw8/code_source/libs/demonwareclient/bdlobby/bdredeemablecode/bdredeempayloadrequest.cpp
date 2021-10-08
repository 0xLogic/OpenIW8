/*
==============
bdRedeemPayloadRequest::init
==============
*/

void __fastcall bdRedeemPayloadRequest::init(bdRedeemPayloadRequest *this, const char *context, const char *clientTransactionId, const char *payload, const char *payloadSignature)
{
  ?init@bdRedeemPayloadRequest@@QEAAXPEBD000@Z(this, context, clientTransactionId, payload, payloadSignature);
}

/*
==============
bdRedeemPayloadRequest::bdRedeemPayloadRequest
==============
*/

void __fastcall bdRedeemPayloadRequest::bdRedeemPayloadRequest(bdRedeemPayloadRequest *this)
{
  ??0bdRedeemPayloadRequest@@QEAA@XZ(this);
}

/*
==============
bdRedeemPayloadRequest::deserialize
==============
*/

bool __fastcall bdRedeemPayloadRequest::deserialize(bdRedeemPayloadRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdRedeemPayloadRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdRedeemPayloadRequest::serialize
==============
*/

bool __fastcall bdRedeemPayloadRequest::serialize(bdRedeemPayloadRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdRedeemPayloadRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdRedeemPayloadRequest::bdRedeemPayloadRequest
==============
*/
void bdRedeemPayloadRequest::bdRedeemPayloadRequest(bdRedeemPayloadRequest *this, int a2)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  unsigned __int64 v6; 
  size_t v7; 
  unsigned __int64 v8; 
  size_t v9; 
  size_t v10; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRedeemPayloadRequest::`vbtable';
    *(_QWORD *)&this->gap47D[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap47D[11] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRedeemPayloadRequest_vtbl *)&bdRedeemPayloadRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdRedeemPayloadRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRedeemPayloadRequest_vtbl *)&bdRedeemPayloadRequest::`vftable'{for `bdReferencable'};
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
  if ( this != (bdRedeemPayloadRequest *)-16i64 )
  {
    v5 = 16i64;
    if ( v4 < 0x10 )
      v5 = v4;
    memcpy_0(&this->__vftable + 2, (char *)&queryFormat.fmt + 3, v5);
    *((_BYTE *)&this->__vftable + v5 + 16) = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  do
    ++v6;
  while ( *((_BYTE *)&queryFormat.fmt + v6 + 3) );
  if ( this != (bdRedeemPayloadRequest *)-33i64 )
  {
    v7 = 25i64;
    if ( v6 < 0x19 )
      v7 = v6;
    memcpy_0(&this->m_clientTransactionId, (char *)&queryFormat.fmt + 3, v7);
    this->m_clientTransactionId.m_buffer[v7] = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v8 = -1i64;
  do
    ++v8;
  while ( *((_BYTE *)&queryFormat.fmt + v8 + 3) );
  if ( this != (bdRedeemPayloadRequest *)-59i64 )
  {
    v9 = 1024i64;
    if ( v8 < 0x400 )
      v9 = v8;
    memcpy_0(&this->m_payload, (char *)&queryFormat.fmt + 3, v9);
    this->m_payload.m_buffer[v9] = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdRedeemPayloadRequest *)-1084i64 )
  {
    v10 = 64i64;
    if ( v3 < 0x40 )
      v10 = v3;
    memcpy_0(&this->m_payloadSignature, (char *)&queryFormat.fmt + 3, v10);
    this->m_payloadSignature.m_buffer[v10] = 0;
  }
}

/*
==============
bdRedeemPayloadRequest::deserialize
==============
*/
bool bdRedeemPayloadRequest::deserialize(bdRedeemPayloadRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdredeemablecode\\bdredeempayloadrequest.cpp", "bdRedeemPayloadRequest::deserialize", 0x27u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdRedeemPayloadRequest::init
==============
*/
void bdRedeemPayloadRequest::init(bdRedeemPayloadRequest *this, const char *context, const char *clientTransactionId, const char *payload, const char *payloadSignature)
{
  if ( bdStrlcpy((char *const)&this->__vftable + 16, context, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  if ( bdStrlcpy(this->m_clientTransactionId.m_buffer, clientTransactionId, 0x1Aui64) > 0x19 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<25>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<25>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  if ( bdStrlcpy(this->m_payload.m_buffer, payload, 0x401ui64) > 0x400 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  if ( bdStrlcpy(this->m_payloadSignature.m_buffer, payloadSignature, 0x41ui64) > 0x40 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<64>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<64>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

/*
==============
bdRedeemPayloadRequest::serialize
==============
*/
bool bdRedeemPayloadRequest::serialize(bdRedeemPayloadRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 
  unsigned int v7; 
  void *v8; 
  unsigned int v9; 
  void *v10; 
  unsigned int v11; 
  void *v12; 

  v2 = (const char *)(&this->__vftable + 2);
  v5 = 16;
  v6 = memchr_0(&this->__vftable + 2, 0, 0x10ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  if ( !bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) )
    return 0;
  v7 = 25;
  v8 = memchr_0(&this->m_clientTransactionId, 0, 0x19ui64);
  if ( v8 )
    v7 = (_DWORD)v8 - ((_DWORD)this + 33);
  if ( !bdStructBufferSerializer::writeString(serializer, 2u, this->m_clientTransactionId.m_buffer, v7) )
    return 0;
  v9 = 1024;
  v10 = memchr_0(&this->m_payload, 0, 0x400ui64);
  if ( v10 )
    v9 = (_DWORD)v10 - ((_DWORD)this + 59);
  if ( !bdStructBufferSerializer::writeString(serializer, 3u, this->m_payload.m_buffer, v9) )
    return 0;
  v11 = 64;
  v12 = memchr_0(&this->m_payloadSignature, 0, 0x40ui64);
  if ( v12 )
    v11 = (_DWORD)v12 - ((_DWORD)this + 1084);
  return bdStructBufferSerializer::writeString(serializer, 4u, this->m_payloadSignature.m_buffer, v11);
}

