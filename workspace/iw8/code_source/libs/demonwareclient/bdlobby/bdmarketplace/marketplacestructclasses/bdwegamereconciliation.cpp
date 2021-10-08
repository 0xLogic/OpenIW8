/*
==============
bdWeGameReconciliationResponse::deserialize
==============
*/

bool __fastcall bdWeGameReconciliationResponse::deserialize(bdWeGameReconciliationResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdWeGameReconciliationResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdWeGameReconciliationResponse::getGrantedFpskuID
==============
*/

unsigned int __fastcall bdWeGameReconciliationResponse::getGrantedFpskuID(bdWeGameReconciliationResponse *this, unsigned int index)
{
  return ?getGrantedFpskuID@bdWeGameReconciliationResponse@@QEBAII@Z(this, index);
}

/*
==============
bdWeGameReconciliationRequest::setContext
==============
*/

void __fastcall bdWeGameReconciliationRequest::setContext(bdWeGameReconciliationRequest *this, const char *context)
{
  ?setContext@bdWeGameReconciliationRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdWeGameReconciliationRequest::bdWeGameReconciliationRequest
==============
*/

void __fastcall bdWeGameReconciliationRequest::bdWeGameReconciliationRequest(bdWeGameReconciliationRequest *this)
{
  ??0bdWeGameReconciliationRequest@@QEAA@XZ(this);
}

/*
==============
bdWeGameReconciliationRequest::serialize
==============
*/

bool __fastcall bdWeGameReconciliationRequest::serialize(bdWeGameReconciliationRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdWeGameReconciliationRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdWeGameReconciliationResponse::bdWeGameReconciliationResponse
==============
*/

void __fastcall bdWeGameReconciliationResponse::bdWeGameReconciliationResponse(bdWeGameReconciliationResponse *this)
{
  ??0bdWeGameReconciliationResponse@@QEAA@XZ(this);
}

/*
==============
bdWeGameReconciliationResponse::getNumGrantedFpskuIDs
==============
*/

unsigned int __fastcall bdWeGameReconciliationResponse::getNumGrantedFpskuIDs(bdWeGameReconciliationResponse *this)
{
  return ?getNumGrantedFpskuIDs@bdWeGameReconciliationResponse@@QEBAIXZ(this);
}

/*
==============
bdWeGameReconciliationResponse::getRevokedFpskuID
==============
*/

unsigned int __fastcall bdWeGameReconciliationResponse::getRevokedFpskuID(bdWeGameReconciliationResponse *this, unsigned int index)
{
  return ?getRevokedFpskuID@bdWeGameReconciliationResponse@@QEBAII@Z(this, index);
}

/*
==============
bdWeGameReconciliationResponse::getNumRevokedFpskuIDs
==============
*/

unsigned int __fastcall bdWeGameReconciliationResponse::getNumRevokedFpskuIDs(bdWeGameReconciliationResponse *this)
{
  return ?getNumRevokedFpskuIDs@bdWeGameReconciliationResponse@@QEBAIXZ(this);
}

/*
==============
bdWeGameReconciliationResponse::reset
==============
*/

void __fastcall bdWeGameReconciliationResponse::reset(bdWeGameReconciliationResponse *this)
{
  ?reset@bdWeGameReconciliationResponse@@QEAAXXZ(this);
}

/*
==============
bdWeGameReconciliationResponse::getMoreAvailable
==============
*/

bool __fastcall bdWeGameReconciliationResponse::getMoreAvailable(bdWeGameReconciliationResponse *this)
{
  return ?getMoreAvailable@bdWeGameReconciliationResponse@@QEBA_NXZ(this);
}

/*
==============
bdWeGameReconciliationRequest::bdWeGameReconciliationRequest
==============
*/
void bdWeGameReconciliationRequest::bdWeGameReconciliationRequest(bdWeGameReconciliationRequest *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdWeGameReconciliationRequest::`vbtable';
    *(_QWORD *)&this->gap21[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap21[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdWeGameReconciliationRequest_vtbl *)&bdWeGameReconciliationRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdWeGameReconciliationRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdWeGameReconciliationRequest_vtbl *)&bdWeGameReconciliationRequest::`vftable'{for `bdReferencable'};
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdWeGameReconciliationRequest *)-16i64 )
  {
    v4 = 16i64;
    if ( v3 < 0x10 )
      v4 = v3;
    memcpy_0(&this->__vftable + 2, (char *)&queryFormat.fmt + 3, v4);
    *((_BYTE *)&this->__vftable + v4 + 16) = 0;
  }
}

/*
==============
bdWeGameReconciliationResponse::bdWeGameReconciliationResponse
==============
*/
void bdWeGameReconciliationResponse::bdWeGameReconciliationResponse(bdWeGameReconciliationResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdWeGameReconciliationResponse::`vbtable';
    *(_QWORD *)&this->gapE1[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapE1[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdWeGameReconciliationResponse_vtbl *)&bdWeGameReconciliationResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdWeGameReconciliationResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdWeGameReconciliationResponse_vtbl *)&bdWeGameReconciliationResponse::`vftable'{for `bdReferencable'};
  *(_DWORD *)&this->m_grantedFpskuIDs[84] = 0;
  this->m_revokedFpskuIDs.m_size = 0;
  this->m_moreAvailable = 0;
}

/*
==============
bdWeGameReconciliationResponse::deserialize
==============
*/
bool bdWeGameReconciliationResponse::deserialize(bdWeGameReconciliationResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt32Array<25>(deserializer, 1u, (bdStructFixedSizeArray<unsigned int,25> *)(&this->__vftable + 2)) && bdStructBufferDeserializer::readUInt32Array<25>(deserializer, 2u, &this->m_revokedFpskuIDs) && bdStructBufferDeserializer::readBool(deserializer, 3u, &this->m_moreAvailable);
}

/*
==============
bdWeGameReconciliationResponse::getGrantedFpskuID
==============
*/
__int64 bdWeGameReconciliationResponse::getGrantedFpskuID(bdWeGameReconciliationResponse *this, unsigned int index)
{
  __int64 v3; 

  v3 = index;
  bdHandleAssert(index < *(_DWORD *)&this->m_grantedFpskuIDs[84], "index < m_grantedFpskuIDs.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdwegamereconciliation.cpp", "bdWeGameReconciliationResponse::getGrantedFpskuID", 0x3Eu, "getGrantedFpskuID index out of range");
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&this->m_grantedFpskuIDs[84], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned int,25>::operator []", 0x54u, "i is out of range");
  return *((unsigned int *)&this->__vftable + v3 + 4);
}

/*
==============
bdWeGameReconciliationResponse::getMoreAvailable
==============
*/
_BOOL8 bdWeGameReconciliationResponse::getMoreAvailable(bdWeGameReconciliationResponse *this)
{
  return this->m_moreAvailable;
}

/*
==============
bdWeGameReconciliationResponse::getNumGrantedFpskuIDs
==============
*/
__int64 bdWeGameReconciliationResponse::getNumGrantedFpskuIDs(bdWeGameReconciliationResponse *this)
{
  return *(unsigned int *)&this->m_grantedFpskuIDs[84];
}

/*
==============
bdWeGameReconciliationResponse::getNumRevokedFpskuIDs
==============
*/
__int64 bdWeGameReconciliationResponse::getNumRevokedFpskuIDs(bdWeGameReconciliationResponse *this)
{
  return this->m_revokedFpskuIDs.m_size;
}

/*
==============
bdWeGameReconciliationResponse::getRevokedFpskuID
==============
*/
__int64 bdWeGameReconciliationResponse::getRevokedFpskuID(bdWeGameReconciliationResponse *this, unsigned int index)
{
  __int64 v3; 

  v3 = index;
  bdHandleAssert(index < this->m_revokedFpskuIDs.m_size, "index < m_revokedFpskuIDs.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdwegamereconciliation.cpp", "bdWeGameReconciliationResponse::getRevokedFpskuID", 0x44u, "getRevokedFpskuID index out of range");
  bdHandleAssert((unsigned int)v3 < this->m_revokedFpskuIDs.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned int,25>::operator []", 0x54u, "i is out of range");
  return this->m_revokedFpskuIDs.m_elements[v3];
}

/*
==============
bdWeGameReconciliationResponse::reset
==============
*/
void bdWeGameReconciliationResponse::reset(bdWeGameReconciliationResponse *this)
{
  *(_DWORD *)&this->m_grantedFpskuIDs[84] = 0;
  this->m_revokedFpskuIDs.m_size = 0;
  this->m_moreAvailable = 0;
}

/*
==============
bdWeGameReconciliationRequest::serialize
==============
*/
bool bdWeGameReconciliationRequest::serialize(bdWeGameReconciliationRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v4; 
  void *v5; 

  v2 = (const char *)(&this->__vftable + 2);
  v4 = 16;
  v5 = memchr_0(&this->__vftable + 2, 0, 0x10ui64);
  if ( v5 )
    v4 = (_DWORD)v5 - (_DWORD)v2;
  return bdStructBufferSerializer::writeString(serializer, 1u, v2, v4) && bdStructBufferSerializer::writeUByte8(serializer, 2u, 0x19u);
}

/*
==============
bdWeGameReconciliationRequest::setContext
==============
*/
void bdWeGameReconciliationRequest::setContext(bdWeGameReconciliationRequest *this, const char *context)
{
  if ( bdStrlcpy((char *const)&this->__vftable + 16, context, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

