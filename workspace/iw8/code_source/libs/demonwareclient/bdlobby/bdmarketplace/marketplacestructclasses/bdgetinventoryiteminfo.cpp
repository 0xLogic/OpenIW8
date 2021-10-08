/*
==============
bdGetInventoryItemInfoRequest::setItemsPerPage
==============
*/

void __fastcall bdGetInventoryItemInfoRequest::setItemsPerPage(bdGetInventoryItemInfoRequest *this, const unsigned int itemsPerPage)
{
  ?setItemsPerPage@bdGetInventoryItemInfoRequest@@QEAAXI@Z(this, itemsPerPage);
}

/*
==============
bdGetInventoryItemInfoRequest::setContext
==============
*/

void __fastcall bdGetInventoryItemInfoRequest::setContext(bdGetInventoryItemInfoRequest *this, const char *context)
{
  ?setContext@bdGetInventoryItemInfoRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdGetInventoryItemInfoRequest::reset
==============
*/

void __fastcall bdGetInventoryItemInfoRequest::reset(bdGetInventoryItemInfoRequest *this)
{
  ?reset@bdGetInventoryItemInfoRequest@@UEAAXXZ(this);
}

/*
==============
bdGetInventoryItemInfoRequest::bdGetInventoryItemInfoRequest
==============
*/

void __fastcall bdGetInventoryItemInfoRequest::bdGetInventoryItemInfoRequest(bdGetInventoryItemInfoRequest *this)
{
  ??0bdGetInventoryItemInfoRequest@@QEAA@XZ(this);
}

/*
==============
bdGetInventoryItemInfoRequest::setPageToken
==============
*/

void __fastcall bdGetInventoryItemInfoRequest::setPageToken(bdGetInventoryItemInfoRequest *this, const char *pageToken)
{
  ?setPageToken@bdGetInventoryItemInfoRequest@@QEAAXPEBD@Z(this, pageToken);
}

/*
==============
bdGetInventoryItemInfoRequest::serialize
==============
*/

bool __fastcall bdGetInventoryItemInfoRequest::serialize(bdGetInventoryItemInfoRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdGetInventoryItemInfoRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdGetInventoryItemInfoResponse::bdGetInventoryItemInfoResponse
==============
*/

void __fastcall bdGetInventoryItemInfoResponse::bdGetInventoryItemInfoResponse(bdGetInventoryItemInfoResponse *this)
{
  ??0bdGetInventoryItemInfoResponse@@QEAA@XZ(this);
}

/*
==============
bdGetInventoryItemInfoResponse::reset
==============
*/

void __fastcall bdGetInventoryItemInfoResponse::reset(bdGetInventoryItemInfoResponse *this)
{
  ?reset@bdGetInventoryItemInfoResponse@@QEAAXXZ(this);
}

/*
==============
bdGetInventoryItemInfoResponse::deserialize
==============
*/

bool __fastcall bdGetInventoryItemInfoResponse::deserialize(bdGetInventoryItemInfoResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdGetInventoryItemInfoResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdGetInventoryItemInfoRequest::bdGetInventoryItemInfoRequest
==============
*/

void __fastcall bdGetInventoryItemInfoRequest::bdGetInventoryItemInfoRequest(bdGetInventoryItemInfoRequest *this, bdStructFixedSizeArray<unsigned int,1000> *itemIDs)
{
  ??0bdGetInventoryItemInfoRequest@@QEAA@V?$bdStructFixedSizeArray@I$0DOI@@@@Z(this, itemIDs);
}

/*
==============
bdGetInventoryItemInfoRequest::bdGetInventoryItemInfoRequest
==============
*/
void bdGetInventoryItemInfoRequest::bdGetInventoryItemInfoRequest(bdGetInventoryItemInfoRequest *this, bdStructFixedSizeArray<unsigned int,1000> *itemIDs, int a3)
{
  __int64 v5; 
  unsigned int m_size; 

  v5 = 0i64;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetInventoryItemInfoRequest::`vbtable';
    *(_QWORD *)(&this->m_itemIDs + 1) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_itemIDs + 1003) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetInventoryItemInfoRequest_vtbl *)&bdGetInventoryItemInfoRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetInventoryItemInfoRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetInventoryItemInfoRequest_vtbl *)&bdGetInventoryItemInfoRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<16>::bdStructFixedSizeString<16>((bdStructFixedSizeString<16> *)(&this->__vftable + 2));
  this->m_itemIDs.m_size = 0;
  bdStructFixedSizeString<16>::operator=((bdStructFixedSizeString<16> *)(&this->__vftable + 2), (const char *const)&queryFormat.fmt + 3);
  *(_QWORD *)this->m_pageToken = 0i64;
  *(_QWORD *)&this->m_pageToken[8] = 0i64;
  *(_QWORD *)&this->m_pageToken[16] = 0i64;
  *(_QWORD *)&this->m_pageToken[24] = 0i64;
  *(_QWORD *)&this->m_pageToken[32] = 0i64;
  *(_QWORD *)&this->m_pageToken[40] = 0i64;
  *(_QWORD *)&this->m_pageToken[48] = 0i64;
  *(_QWORD *)&this->m_pageToken[56] = 0i64;
  this->m_pageToken[64] = 0;
  this->m_itemsPerPage = 300;
  this->m_itemIDs.m_size = 0;
  if ( &this->m_itemIDs != itemIDs )
  {
    m_size = itemIDs->m_size;
    this->m_itemIDs.m_size = m_size;
    if ( m_size )
    {
      do
      {
        this->m_itemIDs.m_elements[v5] = itemIDs->m_elements[v5];
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < this->m_itemIDs.m_size );
    }
  }
}

/*
==============
bdGetInventoryItemInfoRequest::bdGetInventoryItemInfoRequest
==============
*/
void bdGetInventoryItemInfoRequest::bdGetInventoryItemInfoRequest(bdGetInventoryItemInfoRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetInventoryItemInfoRequest::`vbtable';
    *(_QWORD *)(&this->m_itemIDs + 1) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_itemIDs + 1003) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetInventoryItemInfoRequest_vtbl *)&bdGetInventoryItemInfoRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetInventoryItemInfoRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetInventoryItemInfoRequest_vtbl *)&bdGetInventoryItemInfoRequest::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<16>::bdStructFixedSizeString<16>((bdStructFixedSizeString<16> *)(&this->__vftable + 2));
  this->m_itemIDs.m_size = 0;
  bdStructFixedSizeString<16>::operator=((bdStructFixedSizeString<16> *)(&this->__vftable + 2), (const char *const)&queryFormat.fmt + 3);
  *(_QWORD *)this->m_pageToken = 0i64;
  *(_QWORD *)&this->m_pageToken[8] = 0i64;
  *(_QWORD *)&this->m_pageToken[16] = 0i64;
  *(_QWORD *)&this->m_pageToken[24] = 0i64;
  *(_QWORD *)&this->m_pageToken[32] = 0i64;
  *(_QWORD *)&this->m_pageToken[40] = 0i64;
  *(_QWORD *)&this->m_pageToken[48] = 0i64;
  *(_QWORD *)&this->m_pageToken[56] = 0i64;
  this->m_pageToken[64] = 0;
  this->m_itemsPerPage = 300;
  this->m_itemIDs.m_size = 0;
}

/*
==============
bdGetInventoryItemInfoResponse::bdGetInventoryItemInfoResponse
==============
*/
void bdGetInventoryItemInfoResponse::bdGetInventoryItemInfoResponse(bdGetInventoryItemInfoResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetInventoryItemInfoResponse::`vbtable';
    *(_QWORD *)this->gapEE548 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapEE548[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetInventoryItemInfoResponse_vtbl *)&bdGetInventoryItemInfoResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetInventoryItemInfoResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetInventoryItemInfoResponse_vtbl *)&bdGetInventoryItemInfoResponse::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&this->__vftable + 2));
  bdStructFixedSizeString<16>::bdStructFixedSizeString<16>(&this->m_context);
  `eh vector vbase constructor iterator'(&this->m_inventoryItems, 0x3D0ui64, 0x3E8ui64, (void (__fastcall *)(void *))bdMarketplaceInventoryItemInfoV2::bdMarketplaceInventoryItemInfoV2, (void (__fastcall *)(void *))bdMarketplaceInventoryItemInfoV2::`vbase destructor);
  this->m_inventoryItems.m_size = 0;
  bdUserAccountID::reset((bdUserAccountID *)(&this->__vftable + 2));
  bdStructFixedSizeString<16>::operator=(&this->m_context, (const char *const)&queryFormat.fmt + 3);
  *(_QWORD *)this->m_nextPageToken = 0i64;
  *(_QWORD *)&this->m_nextPageToken[8] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[16] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[24] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[32] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[40] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[48] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[56] = 0i64;
  this->m_nextPageToken[64] = 0;
  this->m_inventoryItems.m_size = 0;
}

/*
==============
bdGetInventoryItemInfoResponse::deserialize
==============
*/
bool bdGetInventoryItemInfoResponse::deserialize(bdGetInventoryItemInfoResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)&this->m_userAccount[40]) && bdStructBufferDeserializer::readString(deserializer, 2u, this->m_context.m_buffer, 0x11u) && bdStructBufferDeserializer::readString(deserializer, 3u, this->m_nextPageToken, 0x41u) && bdStructBufferDeserializer::readObjectArray<bdMarketplaceInventoryItemInfoV2,1000>(deserializer, 4u, &this->m_inventoryItems);
}

/*
==============
bdGetInventoryItemInfoRequest::reset
==============
*/
void bdGetInventoryItemInfoRequest::reset(bdGetInventoryItemInfoRequest *this)
{
  bdStructFixedSizeString<16>::operator=((bdStructFixedSizeString<16> *)(&this->__vftable + 2), (const char *const)&queryFormat.fmt + 3);
  *(_QWORD *)this->m_pageToken = 0i64;
  *(_QWORD *)&this->m_pageToken[8] = 0i64;
  *(_QWORD *)&this->m_pageToken[16] = 0i64;
  *(_QWORD *)&this->m_pageToken[24] = 0i64;
  *(_QWORD *)&this->m_pageToken[32] = 0i64;
  *(_QWORD *)&this->m_pageToken[40] = 0i64;
  *(_QWORD *)&this->m_pageToken[48] = 0i64;
  *(_QWORD *)&this->m_pageToken[56] = 0i64;
  this->m_pageToken[64] = 0;
  this->m_itemsPerPage = 300;
  this->m_itemIDs.m_size = 0;
}

/*
==============
bdGetInventoryItemInfoResponse::reset
==============
*/
void bdGetInventoryItemInfoResponse::reset(bdGetInventoryItemInfoResponse *this)
{
  bdUserAccountID::reset((bdUserAccountID *)(&this->__vftable + 2));
  bdStructFixedSizeString<16>::operator=(&this->m_context, (const char *const)&queryFormat.fmt + 3);
  *(_QWORD *)this->m_nextPageToken = 0i64;
  *(_QWORD *)&this->m_nextPageToken[8] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[16] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[24] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[32] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[40] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[48] = 0i64;
  *(_QWORD *)&this->m_nextPageToken[56] = 0i64;
  this->m_nextPageToken[64] = 0;
  this->m_inventoryItems.m_size = 0;
}

/*
==============
bdGetInventoryItemInfoRequest::serialize
==============
*/
bool bdGetInventoryItemInfoRequest::serialize(bdGetInventoryItemInfoRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 
  bool result; 
  __int64 i; 

  v2 = (const char *)(&this->__vftable + 2);
  v5 = 16;
  v6 = memchr_0(&this->__vftable + 2, 0, 0x10ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  result = bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) && bdStructBufferSerializer::writeString(serializer, 2u, this->m_pageToken, 0x41u) && bdStructBufferSerializer::writeUInt32(serializer, 3u, this->m_itemsPerPage);
  for ( i = 0i64; (unsigned int)i < this->m_itemIDs.m_size; i = (unsigned int)(i + 1) )
    result = result && (bdHandleAssert((unsigned int)i < this->m_itemIDs.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned int,1000>::operator []", 0x54u, "i is out of range"), bdStructBufferSerializer::writeUInt32(serializer, 4u, this->m_itemIDs.m_elements[i]));
  return result;
}

/*
==============
bdGetInventoryItemInfoRequest::setContext
==============
*/
void bdGetInventoryItemInfoRequest::setContext(bdGetInventoryItemInfoRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::operator=((bdStructFixedSizeString<16> *)(&this->__vftable + 2), context);
}

/*
==============
bdGetInventoryItemInfoRequest::setItemsPerPage
==============
*/
void bdGetInventoryItemInfoRequest::setItemsPerPage(bdGetInventoryItemInfoRequest *this, const unsigned int itemsPerPage)
{
  bdHandleAssert(itemsPerPage - 1 <= 0x3E7, "(itemsPerPage > 0 && itemsPerPage <= BD_MAX_INVENTORY_ITEMS_PER_PAGE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdgetinventoryiteminfo.cpp", "bdGetInventoryItemInfoRequest::setItemsPerPage", 0x23u, "itemsPerPage must be between 1 and BD_MAX_INVENTORY_ITEMS_PER_PAGE");
  this->m_itemsPerPage = itemsPerPage;
}

/*
==============
bdGetInventoryItemInfoRequest::setPageToken
==============
*/
void bdGetInventoryItemInfoRequest::setPageToken(bdGetInventoryItemInfoRequest *this, const char *pageToken)
{
  bdStrlcpy(this->m_pageToken, pageToken, 0x41ui64);
}

