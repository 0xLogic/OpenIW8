/*
==============
bdBnetReconciliationResponse::getNumGrantedFpskuIDs
==============
*/

unsigned int __fastcall bdBnetReconciliationResponse::getNumGrantedFpskuIDs(bdBnetReconciliationResponse *this)
{
  return ?getNumGrantedFpskuIDs@bdBnetReconciliationResponse@@QEBAIXZ(this);
}

/*
==============
bdBnetReconciliationRequest::setContext
==============
*/

void __fastcall bdBnetReconciliationRequest::setContext(bdBnetReconciliationRequest *this, const char *context)
{
  ?setContext@bdBnetReconciliationRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdBnetReconciliationResponse::bdBnetReconciliationResponse
==============
*/

void __fastcall bdBnetReconciliationResponse::bdBnetReconciliationResponse(bdBnetReconciliationResponse *this)
{
  ??0bdBnetReconciliationResponse@@QEAA@XZ(this);
}

/*
==============
bdBnetReconciliationResponse::getMoreAvailable
==============
*/

bool __fastcall bdBnetReconciliationResponse::getMoreAvailable(bdBnetReconciliationResponse *this)
{
  return ?getMoreAvailable@bdBnetReconciliationResponse@@QEBA_NXZ(this);
}

/*
==============
bdBnetReconciliationRequest::serialize
==============
*/

bool __fastcall bdBnetReconciliationRequest::serialize(bdBnetReconciliationRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdBnetReconciliationRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdBnetReconciliationResponse::deserialize
==============
*/

bool __fastcall bdBnetReconciliationResponse::deserialize(bdBnetReconciliationResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdBnetReconciliationResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdBnetReconciliationResponse::getNumRevokedFpskuIDs
==============
*/

unsigned int __fastcall bdBnetReconciliationResponse::getNumRevokedFpskuIDs(bdBnetReconciliationResponse *this)
{
  return ?getNumRevokedFpskuIDs@bdBnetReconciliationResponse@@QEBAIXZ(this);
}

/*
==============
bdBnetReconciliationRequest::bdBnetReconciliationRequest
==============
*/

void __fastcall bdBnetReconciliationRequest::bdBnetReconciliationRequest(bdBnetReconciliationRequest *this, const char *ssoToken, const char *region, const char *bgsAccountToken, const unsigned int bgsAccountTokenSize)
{
  ??0bdBnetReconciliationRequest@@QEAA@PEBD00I@Z(this, ssoToken, region, bgsAccountToken, bgsAccountTokenSize);
}

/*
==============
bdBnetReconciliationResponse::reset
==============
*/

void __fastcall bdBnetReconciliationResponse::reset(bdBnetReconciliationResponse *this)
{
  ?reset@bdBnetReconciliationResponse@@QEAAXXZ(this);
}

/*
==============
bdBnetReconciliationRequest::isRequestValid
==============
*/

bool __fastcall bdBnetReconciliationRequest::isRequestValid(bdBnetReconciliationRequest *this)
{
  return ?isRequestValid@bdBnetReconciliationRequest@@QEBA_NXZ(this);
}

/*
==============
bdBnetReconciliationResponse::getRevokedFpskuID
==============
*/

unsigned int __fastcall bdBnetReconciliationResponse::getRevokedFpskuID(bdBnetReconciliationResponse *this, const unsigned int index)
{
  return ?getRevokedFpskuID@bdBnetReconciliationResponse@@QEBAII@Z(this, index);
}

/*
==============
bdBnetReconciliationResponse::getGrantedFpskuID
==============
*/

unsigned int __fastcall bdBnetReconciliationResponse::getGrantedFpskuID(bdBnetReconciliationResponse *this, const unsigned int index)
{
  return ?getGrantedFpskuID@bdBnetReconciliationResponse@@QEBAII@Z(this, index);
}

/*
==============
bdBnetReconciliationRequest::bdBnetReconciliationRequest
==============
*/
void bdBnetReconciliationRequest::bdBnetReconciliationRequest(bdBnetReconciliationRequest *this, const char *ssoToken, const char *region, const char *bgsAccountToken, const unsigned int bgsAccountTokenSize, int a6)
{
  unsigned __int64 v10; 
  size_t v11; 

  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdBnetReconciliationRequest::`vbtable';
    *(_QWORD *)&this->gapA4[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA4[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdBnetReconciliationRequest_vtbl *)&bdBnetReconciliationRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdBnetReconciliationRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdBnetReconciliationRequest_vtbl *)&bdBnetReconciliationRequest::`vftable'{for `bdReferencable'};
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v10 = -1i64;
  do
    ++v10;
  while ( *((_BYTE *)&queryFormat.fmt + v10 + 3) );
  if ( this != (bdBnetReconciliationRequest *)-16i64 )
  {
    v11 = 16i64;
    if ( v10 < 0x10 )
      v11 = v10;
    memcpy_0(&this->__vftable + 2, (char *)&queryFormat.fmt + 3, v11);
    *((_BYTE *)&this->__vftable + v11 + 16) = 0;
  }
  if ( bdStrlcpy(this->m_ssoToken.m_buffer, ssoToken, 0x71ui64) > 0x70 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<112>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<112>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  if ( bdStrlcpy(this->m_region.m_buffer, region, 4ui64) > 3 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<3>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<3>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_bgsAccountToken = bgsAccountToken;
  this->m_bgsAccountTokenSize = bgsAccountTokenSize;
}

/*
==============
bdBnetReconciliationResponse::bdBnetReconciliationResponse
==============
*/
void bdBnetReconciliationResponse::bdBnetReconciliationResponse(bdBnetReconciliationResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdBnetReconciliationResponse::`vbtable';
    *(_QWORD *)&this->gapE1[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapE1[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdBnetReconciliationResponse_vtbl *)&bdBnetReconciliationResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdBnetReconciliationResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdBnetReconciliationResponse_vtbl *)&bdBnetReconciliationResponse::`vftable'{for `bdReferencable'};
  *(_DWORD *)&this->m_grantedFpskuIDs[84] = 0;
  this->m_revokedFpskuIDs.m_size = 0;
  this->m_moreAvailable = 0;
}

/*
==============
bdBnetReconciliationResponse::deserialize
==============
*/
bool bdBnetReconciliationResponse::deserialize(bdBnetReconciliationResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt32Array<25>(deserializer, 1u, (bdStructFixedSizeArray<unsigned int,25> *)(&this->__vftable + 2)) && bdStructBufferDeserializer::readUInt32Array<25>(deserializer, 2u, &this->m_revokedFpskuIDs) && bdStructBufferDeserializer::readBool(deserializer, 3u, &this->m_moreAvailable);
}

/*
==============
bdBnetReconciliationResponse::getGrantedFpskuID
==============
*/
__int64 bdBnetReconciliationResponse::getGrantedFpskuID(bdBnetReconciliationResponse *this, const unsigned int index)
{
  __int64 v3; 

  v3 = index;
  bdHandleAssert(index < *(_DWORD *)&this->m_grantedFpskuIDs[84], "index < m_grantedFpskuIDs.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdbnetreconciliation.cpp", "bdBnetReconciliationResponse::getGrantedFpskuID", 0x63u, "getGrantedFpskuID out of range");
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&this->m_grantedFpskuIDs[84], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned int,25>::operator []", 0x54u, "i is out of range");
  return *((unsigned int *)&this->__vftable + v3 + 4);
}

/*
==============
bdBnetReconciliationResponse::getMoreAvailable
==============
*/
_BOOL8 bdBnetReconciliationResponse::getMoreAvailable(bdBnetReconciliationResponse *this)
{
  return this->m_moreAvailable;
}

/*
==============
bdBnetReconciliationResponse::getNumGrantedFpskuIDs
==============
*/
__int64 bdBnetReconciliationResponse::getNumGrantedFpskuIDs(bdBnetReconciliationResponse *this)
{
  return *(unsigned int *)&this->m_grantedFpskuIDs[84];
}

/*
==============
bdBnetReconciliationResponse::getNumRevokedFpskuIDs
==============
*/
__int64 bdBnetReconciliationResponse::getNumRevokedFpskuIDs(bdBnetReconciliationResponse *this)
{
  return this->m_revokedFpskuIDs.m_size;
}

/*
==============
bdBnetReconciliationResponse::getRevokedFpskuID
==============
*/
__int64 bdBnetReconciliationResponse::getRevokedFpskuID(bdBnetReconciliationResponse *this, const unsigned int index)
{
  __int64 v3; 

  v3 = index;
  bdHandleAssert(index < this->m_revokedFpskuIDs.m_size, "index < m_revokedFpskuIDs.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdbnetreconciliation.cpp", "bdBnetReconciliationResponse::getRevokedFpskuID", 0x69u, "getRevokedFpskuID out of range");
  bdHandleAssert((unsigned int)v3 < this->m_revokedFpskuIDs.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned int,25>::operator []", 0x54u, "i is out of range");
  return this->m_revokedFpskuIDs.m_elements[v3];
}

/*
==============
bdBnetReconciliationRequest::isRequestValid
==============
*/
char bdBnetReconciliationRequest::isRequestValid(bdBnetReconciliationRequest *this)
{
  unsigned int m_bgsAccountTokenSize; 

  if ( !strncmp(this->m_ssoToken.m_buffer, (const char *)&queryFormat.fmt + 3, 0x70ui64) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/bdBnetReconciliation", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdbnetreconciliation.cpp", "bdBnetReconciliationRequest::isRequestValid", 0x2Bu, "Cannot call bnetReconciliation() without providing an SSO token");
  }
  else if ( !strncmp(this->m_region.m_buffer, (const char *)&queryFormat.fmt + 3, 3ui64) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/bdBnetReconciliation", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdbnetreconciliation.cpp", "bdBnetReconciliationRequest::isRequestValid", 0x31u, "Cannot call bnetReconciliation() without providing a Battle.net region");
  }
  else if ( this->m_bgsAccountToken && (m_bgsAccountTokenSize = this->m_bgsAccountTokenSize) != 0 )
  {
    if ( m_bgsAccountTokenSize <= 0x4000 )
      return 1;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/bdBnetReconciliation", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdbnetreconciliation.cpp", "bdBnetReconciliationRequest::isRequestValid", 0x3Du, "Signed BGS token provided to bnetReconciliation() is too large");
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/bdBnetReconciliation", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdbnetreconciliation.cpp", "bdBnetReconciliationRequest::isRequestValid", 0x37u, "Cannot call bnetReconciliation() without providing a signed BGS token");
  }
  return 0;
}

/*
==============
bdBnetReconciliationResponse::reset
==============
*/
void bdBnetReconciliationResponse::reset(bdBnetReconciliationResponse *this)
{
  *(_DWORD *)&this->m_grantedFpskuIDs[84] = 0;
  this->m_revokedFpskuIDs.m_size = 0;
  this->m_moreAvailable = 0;
}

/*
==============
bdBnetReconciliationRequest::serialize
==============
*/
bool bdBnetReconciliationRequest::serialize(bdBnetReconciliationRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 
  unsigned int v7; 
  void *v8; 
  void *v9; 
  unsigned int v10; 

  v2 = (const char *)(&this->__vftable + 2);
  v5 = 16;
  v6 = memchr_0(&this->__vftable + 2, 0, 0x10ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  if ( !bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) )
    return 0;
  v7 = 112;
  v8 = memchr_0(&this->m_ssoToken, 0, 0x70ui64);
  if ( v8 )
    v7 = (_DWORD)v8 - ((_DWORD)this + 33);
  if ( !bdStructBufferSerializer::writeString(serializer, 2u, this->m_ssoToken.m_buffer, v7) )
    return 0;
  v9 = memchr_0(&this->m_region, 0, 3ui64);
  v10 = 3;
  if ( v9 )
    v10 = (_DWORD)v9 - ((_DWORD)this + 146);
  return bdStructBufferSerializer::writeString(serializer, 3u, this->m_region.m_buffer, v10) && bdStructBufferSerializer::writeUByte8(serializer, 4u, 0x19u) && bdStructBufferSerializer::writeString(serializer, 5u, this->m_bgsAccountToken, this->m_bgsAccountTokenSize);
}

/*
==============
bdBnetReconciliationRequest::setContext
==============
*/
void bdBnetReconciliationRequest::setContext(bdBnetReconciliationRequest *this, const char *context)
{
  if ( bdStrlcpy((char *const)&this->__vftable + 16, context, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

