/*
==============
bdSwitchReconciliationRequest::setContext
==============
*/

void __fastcall bdSwitchReconciliationRequest::setContext(bdSwitchReconciliationRequest *this, const char *context)
{
  ?setContext@bdSwitchReconciliationRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdSwitchReconciliationResponse::getNumRevokedFpskuIDs
==============
*/

unsigned int __fastcall bdSwitchReconciliationResponse::getNumRevokedFpskuIDs(bdSwitchReconciliationResponse *this)
{
  return ?getNumRevokedFpskuIDs@bdSwitchReconciliationResponse@@QEBAIXZ(this);
}

/*
==============
bdSwitchReconciliationResponse::deserialize
==============
*/

bool __fastcall bdSwitchReconciliationResponse::deserialize(bdSwitchReconciliationResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdSwitchReconciliationResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdSwitchReconciliationRequest::setNSAToken
==============
*/

void __fastcall bdSwitchReconciliationRequest::setNSAToken(bdSwitchReconciliationRequest *this, const char *nsaToken)
{
  ?setNSAToken@bdSwitchReconciliationRequest@@QEAAXPEBD@Z(this, nsaToken);
}

/*
==============
bdSwitchReconciliationResponse::getGrantedFpskuID
==============
*/

unsigned int __fastcall bdSwitchReconciliationResponse::getGrantedFpskuID(bdSwitchReconciliationResponse *this, unsigned int index)
{
  return ?getGrantedFpskuID@bdSwitchReconciliationResponse@@QEBAII@Z(this, index);
}

/*
==============
bdSwitchReconciliationRequest::bdSwitchReconciliationRequest
==============
*/

void __fastcall bdSwitchReconciliationRequest::bdSwitchReconciliationRequest(bdSwitchReconciliationRequest *this, const char *nsaToken)
{
  ??0bdSwitchReconciliationRequest@@QEAA@PEBD@Z(this, nsaToken);
}

/*
==============
bdSwitchReconciliationResponse::getMoreAvailable
==============
*/

bool __fastcall bdSwitchReconciliationResponse::getMoreAvailable(bdSwitchReconciliationResponse *this)
{
  return ?getMoreAvailable@bdSwitchReconciliationResponse@@QEBA_NXZ(this);
}

/*
==============
bdSwitchReconciliationResponse::bdSwitchReconciliationResponse
==============
*/

void __fastcall bdSwitchReconciliationResponse::bdSwitchReconciliationResponse(bdSwitchReconciliationResponse *this)
{
  ??0bdSwitchReconciliationResponse@@QEAA@XZ(this);
}

/*
==============
bdSwitchReconciliationResponse::getNumGrantedFpskuIDs
==============
*/

unsigned int __fastcall bdSwitchReconciliationResponse::getNumGrantedFpskuIDs(bdSwitchReconciliationResponse *this)
{
  return ?getNumGrantedFpskuIDs@bdSwitchReconciliationResponse@@QEBAIXZ(this);
}

/*
==============
bdSwitchReconciliationResponse::getRevokedFpskuID
==============
*/

unsigned int __fastcall bdSwitchReconciliationResponse::getRevokedFpskuID(bdSwitchReconciliationResponse *this, unsigned int index)
{
  return ?getRevokedFpskuID@bdSwitchReconciliationResponse@@QEBAII@Z(this, index);
}

/*
==============
bdSwitchReconciliationResponse::reset
==============
*/

void __fastcall bdSwitchReconciliationResponse::reset(bdSwitchReconciliationResponse *this)
{
  ?reset@bdSwitchReconciliationResponse@@QEAAXXZ(this);
}

/*
==============
bdSwitchReconciliationRequest::serialize
==============
*/

bool __fastcall bdSwitchReconciliationRequest::serialize(bdSwitchReconciliationRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdSwitchReconciliationRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdSwitchReconciliationRequest::bdSwitchReconciliationRequest
==============
*/
void bdSwitchReconciliationRequest::bdSwitchReconciliationRequest(bdSwitchReconciliationRequest *this, const char *nsaToken, int a3)
{
  unsigned __int64 v5; 
  size_t v6; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSwitchReconciliationRequest::`vbtable';
    *(_QWORD *)&this->gap822[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap822[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdSwitchReconciliationRequest_vtbl *)&bdSwitchReconciliationRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdSwitchReconciliationRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSwitchReconciliationRequest_vtbl *)&bdSwitchReconciliationRequest::`vftable'{for `bdReferencable'};
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v5 = -1i64;
  do
    ++v5;
  while ( *((_BYTE *)&queryFormat.fmt + v5 + 3) );
  if ( this != (bdSwitchReconciliationRequest *)-16i64 )
  {
    v6 = 16i64;
    if ( v5 < 0x10 )
      v6 = v5;
    memcpy_0(&this->__vftable + 2, (char *)&queryFormat.fmt + 3, v6);
    *((_BYTE *)&this->__vftable + v6 + 16) = 0;
  }
  bdStructFixedSizeString<2048>::copy(&this->m_nsaToken, nsaToken);
}

/*
==============
bdSwitchReconciliationResponse::bdSwitchReconciliationResponse
==============
*/
void bdSwitchReconciliationResponse::bdSwitchReconciliationResponse(bdSwitchReconciliationResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSwitchReconciliationResponse::`vbtable';
    *(_QWORD *)&this->gapE1[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapE1[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdSwitchReconciliationResponse_vtbl *)&bdSwitchReconciliationResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdSwitchReconciliationResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSwitchReconciliationResponse_vtbl *)&bdSwitchReconciliationResponse::`vftable'{for `bdReferencable'};
  *(_DWORD *)&this->m_grantedFpskuIDs[84] = 0;
  this->m_revokedFpskuIDs.m_size = 0;
  this->m_moreAvailable = 0;
}

/*
==============
bdSwitchReconciliationResponse::deserialize
==============
*/
bool bdSwitchReconciliationResponse::deserialize(bdSwitchReconciliationResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt32Array<25>(deserializer, 1u, (bdStructFixedSizeArray<unsigned int,25> *)(&this->__vftable + 2)) && bdStructBufferDeserializer::readUInt32Array<25>(deserializer, 2u, &this->m_revokedFpskuIDs) && bdStructBufferDeserializer::readBool(deserializer, 3u, &this->m_moreAvailable);
}

/*
==============
bdSwitchReconciliationResponse::getGrantedFpskuID
==============
*/
__int64 bdSwitchReconciliationResponse::getGrantedFpskuID(bdSwitchReconciliationResponse *this, unsigned int index)
{
  __int64 v3; 

  v3 = index;
  bdHandleAssert(index < *(_DWORD *)&this->m_grantedFpskuIDs[84], "index < m_grantedFpskuIDs.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdswitchreconciliation.cpp", "bdSwitchReconciliationResponse::getGrantedFpskuID", 0x45u, "getGrantedFpskuID index out of range");
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&this->m_grantedFpskuIDs[84], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned int,25>::operator []", 0x54u, "i is out of range");
  return *((unsigned int *)&this->__vftable + v3 + 4);
}

/*
==============
bdSwitchReconciliationResponse::getMoreAvailable
==============
*/
_BOOL8 bdSwitchReconciliationResponse::getMoreAvailable(bdSwitchReconciliationResponse *this)
{
  return this->m_moreAvailable;
}

/*
==============
bdSwitchReconciliationResponse::getNumGrantedFpskuIDs
==============
*/
__int64 bdSwitchReconciliationResponse::getNumGrantedFpskuIDs(bdSwitchReconciliationResponse *this)
{
  return *(unsigned int *)&this->m_grantedFpskuIDs[84];
}

/*
==============
bdSwitchReconciliationResponse::getNumRevokedFpskuIDs
==============
*/
__int64 bdSwitchReconciliationResponse::getNumRevokedFpskuIDs(bdSwitchReconciliationResponse *this)
{
  return this->m_revokedFpskuIDs.m_size;
}

/*
==============
bdSwitchReconciliationResponse::getRevokedFpskuID
==============
*/
__int64 bdSwitchReconciliationResponse::getRevokedFpskuID(bdSwitchReconciliationResponse *this, unsigned int index)
{
  __int64 v3; 

  v3 = index;
  bdHandleAssert(index < this->m_revokedFpskuIDs.m_size, "index < m_revokedFpskuIDs.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdswitchreconciliation.cpp", "bdSwitchReconciliationResponse::getRevokedFpskuID", 0x4Bu, "getRevokedFpskuID index out of range");
  bdHandleAssert((unsigned int)v3 < this->m_revokedFpskuIDs.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned int,25>::operator []", 0x54u, "i is out of range");
  return this->m_revokedFpskuIDs.m_elements[v3];
}

/*
==============
bdSwitchReconciliationResponse::reset
==============
*/
void bdSwitchReconciliationResponse::reset(bdSwitchReconciliationResponse *this)
{
  *(_DWORD *)&this->m_grantedFpskuIDs[84] = 0;
  this->m_revokedFpskuIDs.m_size = 0;
  this->m_moreAvailable = 0;
}

/*
==============
bdSwitchReconciliationRequest::serialize
==============
*/
bool bdSwitchReconciliationRequest::serialize(bdSwitchReconciliationRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 
  unsigned int v7; 
  void *v8; 

  v2 = (const char *)(&this->__vftable + 2);
  v5 = 16;
  v6 = memchr_0(&this->__vftable + 2, 0, 0x10ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  if ( !bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) )
    return 0;
  v7 = 2048;
  v8 = memchr_0(&this->m_nsaToken, 0, 0x800ui64);
  if ( v8 )
    v7 = (_DWORD)v8 - ((_DWORD)this + 33);
  return bdStructBufferSerializer::writeString(serializer, 2u, this->m_nsaToken.m_buffer, v7) && bdStructBufferSerializer::writeUByte8(serializer, 3u, 0x19u);
}

/*
==============
bdSwitchReconciliationRequest::setContext
==============
*/
void bdSwitchReconciliationRequest::setContext(bdSwitchReconciliationRequest *this, const char *context)
{
  if ( bdStrlcpy((char *const)&this->__vftable + 16, context, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

/*
==============
bdSwitchReconciliationRequest::setNSAToken
==============
*/
void bdSwitchReconciliationRequest::setNSAToken(bdSwitchReconciliationRequest *this, const char *nsaToken)
{
  bdStructFixedSizeString<2048>::copy(&this->m_nsaToken, nsaToken);
}

