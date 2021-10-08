/*
==============
bdRedeemCodeRequest::bdRedeemCodeRequest
==============
*/

void __fastcall bdRedeemCodeRequest::bdRedeemCodeRequest(bdRedeemCodeRequest *this)
{
  ??0bdRedeemCodeRequest@@QEAA@XZ(this);
}

/*
==============
bdRedeemCodeRequest::serialize
==============
*/

bool __fastcall bdRedeemCodeRequest::serialize(bdRedeemCodeRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdRedeemCodeRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdRedeemCodeRequest::init
==============
*/

void __fastcall bdRedeemCodeRequest::init(bdRedeemCodeRequest *this, const char *context, const char *clientTransactionId, const char *code)
{
  ?init@bdRedeemCodeRequest@@QEAAXPEBD00@Z(this, context, clientTransactionId, code);
}

/*
==============
bdRedeemCodeRequest::deserialize
==============
*/

bool __fastcall bdRedeemCodeRequest::deserialize(bdRedeemCodeRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdRedeemCodeRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdRedeemCodeRequest::bdRedeemCodeRequest
==============
*/
void bdRedeemCodeRequest::bdRedeemCodeRequest(bdRedeemCodeRequest *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRedeemCodeRequest::`vbtable';
    *(_QWORD *)&this->gap55[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap55[11] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRedeemCodeRequest_vtbl *)&bdRedeemCodeRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdRedeemCodeRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRedeemCodeRequest_vtbl *)&bdRedeemCodeRequest::`vftable'{for `bdReferencable'};
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdRedeemCodeRequest *)-16i64 )
  {
    v4 = 16i64;
    if ( v3 < 0x10 )
      v4 = v3;
    memcpy_0(&this->__vftable + 2, (char *)&queryFormat.fmt + 3, v4);
    *((_BYTE *)&this->__vftable + v4 + 16) = 0;
  }
  bdStructFixedSizeString<25>::bdStructFixedSizeString<25>(&this->m_clientTransactionId);
  bdStructFixedSizeString<25>::bdStructFixedSizeString<25>(&this->m_code);
}

/*
==============
bdRedeemCodeRequest::deserialize
==============
*/
bool bdRedeemCodeRequest::deserialize(bdRedeemCodeRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdredeemablecode\\bdredeemcoderequest.cpp", "bdRedeemCodeRequest::deserialize", 0x24u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdRedeemCodeRequest::init
==============
*/
void bdRedeemCodeRequest::init(bdRedeemCodeRequest *this, const char *context, const char *clientTransactionId, const char *code)
{
  if ( bdStrlcpy((char *const)&this->__vftable + 16, context, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  bdStructFixedSizeString<25>::operator=(&this->m_clientTransactionId, clientTransactionId);
  bdStructFixedSizeString<25>::operator=(&this->m_code, code);
}

/*
==============
bdRedeemCodeRequest::serialize
==============
*/
bool bdRedeemCodeRequest::serialize(bdRedeemCodeRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 
  unsigned int v7; 
  void *v8; 
  unsigned int v9; 
  void *v10; 

  v2 = (const char *)(&this->__vftable + 2);
  v5 = 16;
  v6 = memchr_0(&this->__vftable + 2, 0, 0x10ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  if ( !bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) )
    return 0;
  v7 = 25;
  v8 = memchr_0(&this->m_clientTransactionId, 0, 0x19ui64);
  v9 = 25;
  if ( v8 )
    v9 = (_DWORD)v8 - ((_DWORD)this + 33);
  if ( !bdStructBufferSerializer::writeString(serializer, 2u, this->m_clientTransactionId.m_buffer, v9) )
    return 0;
  v10 = memchr_0(&this->m_code, 0, 0x19ui64);
  if ( v10 )
    v7 = (_DWORD)v10 - ((_DWORD)this + 59);
  return bdStructBufferSerializer::writeString(serializer, 3u, this->m_code.m_buffer, v7);
}

