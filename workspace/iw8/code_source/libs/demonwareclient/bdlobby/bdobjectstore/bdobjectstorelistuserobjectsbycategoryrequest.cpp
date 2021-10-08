/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::bdObjectStoreListUserObjectsByCategoryRequest
==============
*/

void __fastcall bdObjectStoreListUserObjectsByCategoryRequest::bdObjectStoreListUserObjectsByCategoryRequest(bdObjectStoreListUserObjectsByCategoryRequest *this, const char *const client, const char *const context, const bdStructUserAccountID *userID, const char *const category, unsigned int limit, const char *pageToken)
{
  ??0bdObjectStoreListUserObjectsByCategoryRequest@@QEAA@QEBD0AEBVbdStructUserAccountID@@0IPEBD@Z(this, client, context, userID, category, limit, pageToken);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::includeInResponse
==============
*/

void __fastcall bdObjectStoreListUserObjectsByCategoryRequest::includeInResponse(bdObjectStoreListUserObjectsByCategoryRequest *this, const bdObjectStoreExtra extra)
{
  ?includeInResponse@bdObjectStoreListUserObjectsByCategoryRequest@@QEAAXW4bdObjectStoreExtra@@@Z(this, extra);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreListUserObjectsByCategoryRequest::deserialize(bdObjectStoreListUserObjectsByCategoryRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreListUserObjectsByCategoryRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::init
==============
*/

void __fastcall bdObjectStoreListUserObjectsByCategoryRequest::init(bdObjectStoreListUserObjectsByCategoryRequest *this, const char *const context, const bdStructUserAccountID *userID, const char *const category, unsigned int limit, const char *pageToken)
{
  ?init@bdObjectStoreListUserObjectsByCategoryRequest@@QEAAXQEBDAEBVbdStructUserAccountID@@0IPEBD@Z(this, context, userID, category, limit, pageToken);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::bdObjectStoreListUserObjectsByCategoryRequest
==============
*/

void __fastcall bdObjectStoreListUserObjectsByCategoryRequest::bdObjectStoreListUserObjectsByCategoryRequest(bdObjectStoreListUserObjectsByCategoryRequest *this, const char *const context, const bdStructUserAccountID *userID, const char *const category, unsigned int limit, const char *pageToken)
{
  ??0bdObjectStoreListUserObjectsByCategoryRequest@@QEAA@QEBDAEBVbdStructUserAccountID@@0IPEBD@Z(this, context, userID, category, limit, pageToken);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::reset
==============
*/

void __fastcall bdObjectStoreListUserObjectsByCategoryRequest::reset(bdObjectStoreListUserObjectsByCategoryRequest *this)
{
  ?reset@bdObjectStoreListUserObjectsByCategoryRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreListUserObjectsByCategoryRequest::serializeWithLobbyService(bdObjectStoreListUserObjectsByCategoryRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreListUserObjectsByCategoryRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::bdObjectStoreListUserObjectsByCategoryRequest
==============
*/
void bdObjectStoreListUserObjectsByCategoryRequest::bdObjectStoreListUserObjectsByCategoryRequest(bdObjectStoreListUserObjectsByCategoryRequest *this, const char *const client, const char *const context, const bdStructUserAccountID *userID, const char *const category, unsigned int limit, const char *pageToken, int a8)
{
  if ( a8 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreListUserObjectsByCategoryRequest::`vbtable';
    *(_QWORD *)&this->gap282[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap282[14] = 0;
  }
  this->bdObjectStorePaginatedRequestBase::bdObjectStoreRequestBase::__vftable = (bdObjectStoreListUserObjectsByCategoryRequest_vtbl *)&bdObjectStorePaginatedRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStorePaginatedRequestBase::bdObjectStoreRequestBase::__vftable = (bdObjectStoreListUserObjectsByCategoryRequest_vtbl *)&bdObjectStoreListUserObjectsByCategoryRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreListUserObjectsByCategoryRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreListUserObjectsByCategoryRequest::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID(&this->m_userID);
  bdObjectStoreListUserObjectsByCategoryRequest::init(this, context, userID, category, limit, pageToken);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::bdObjectStoreListUserObjectsByCategoryRequest
==============
*/
void bdObjectStoreListUserObjectsByCategoryRequest::bdObjectStoreListUserObjectsByCategoryRequest(bdObjectStoreListUserObjectsByCategoryRequest *this, const char *const context, const bdStructUserAccountID *userID, const char *const category, unsigned int limit, const char *pageToken, int a7)
{
  if ( a7 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreListUserObjectsByCategoryRequest::`vbtable';
    *(_QWORD *)&this->gap282[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap282[14] = 0;
  }
  this->bdObjectStorePaginatedRequestBase::bdObjectStoreRequestBase::__vftable = (bdObjectStoreListUserObjectsByCategoryRequest_vtbl *)&bdObjectStorePaginatedRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStorePaginatedRequestBase::bdObjectStoreRequestBase::__vftable = (bdObjectStoreListUserObjectsByCategoryRequest_vtbl *)&bdObjectStoreListUserObjectsByCategoryRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreListUserObjectsByCategoryRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreListUserObjectsByCategoryRequest::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID(&this->m_userID);
  bdObjectStoreListUserObjectsByCategoryRequest::init(this, context, userID, category, limit, pageToken);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::deserialize
==============
*/
bool bdObjectStoreListUserObjectsByCategoryRequest::deserialize(bdObjectStoreListUserObjectsByCategoryRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorelistuserobjectsbycategoryrequest.cpp", "bdObjectStoreListUserObjectsByCategoryRequest::deserialize", 0x5Du, "Cannot call deserialize on bdObjectStoreListUserObjectsByCategoryRequest");
  return 0;
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::includeInResponse
==============
*/
void bdObjectStoreListUserObjectsByCategoryRequest::includeInResponse(bdObjectStoreListUserObjectsByCategoryRequest *this, const bdObjectStoreExtra extra)
{
  unsigned int Limit; 

  if ( extra )
  {
    if ( extra == BD_OBJECTSTORE_EXTRA_STATISTICS )
      this->m_includeStatistics = 1;
  }
  else
  {
    this->m_includeTags = 1;
    if ( bdObjectStorePaginatedRequestBase::getLimit(this) > 0x1E )
    {
      Limit = bdObjectStorePaginatedRequestBase::getLimit(this);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreListUserObjectsRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorelistuserobjectsbycategoryrequest.cpp", "bdObjectStoreListUserObjectsByCategoryRequest::includeInResponse", 0x4Au, "Downsizing limit [%d] to [%d] in order to allow for tags in response.", Limit, 30);
      bdObjectStorePaginatedRequestBase::setLimit(this, 0x1Eu);
    }
  }
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::init
==============
*/
void bdObjectStoreListUserObjectsByCategoryRequest::init(bdObjectStoreListUserObjectsByCategoryRequest *this, const char *const context, const bdStructUserAccountID *userID, const char *const category, unsigned int limit, const char *pageToken)
{
  _BYTE *v9; 
  unsigned __int64 v10; 
  int v11; 

  *(_WORD *)&this->m_includeTags = 0;
  bdObjectStoreRequestBase::setContext(this, context);
  v9 = memchr_0(category, 0, 0x41ui64);
  v11 = 64;
  v10 = 65i64;
  if ( v9 )
    v10 = v9 - category;
  bdHandleAssert(v10 < 0x41, "(bdStrnlen(category, BD_OBJECTSTORE_MAX_CATEGORY_LENGTH) < BD_OBJECTSTORE_MAX_CATEGORY_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorelistuserobjectsbycategoryrequest.cpp", "bdObjectStoreListUserObjectsByCategoryRequest::init", 0x2Du, "Category is too long. Max length is %d", v11);
  bdStrlcpy((char *const)&this->bdStructBufferSerializable::__vftable + 16, category, 0x41ui64);
  bdObjectStorePaginatedRequestBase::setPageToken(this, pageToken);
  bdObjectStorePaginatedRequestBase::setLimit(this, limit);
  bdUserAccountID::operator=(&this->m_userID, userID);
  bdReferencable::operator=((bdReferencable *)&this->m_userID.gap38[*(int *)(*(_QWORD *)&this->m_userID.gap38[8] + 4i64) + 8], (const bdReferencable *)&userID->gap38[*(int *)(*(_QWORD *)&userID->gap38[8] + 4i64) + 8]);
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::reset
==============
*/
void bdObjectStoreListUserObjectsByCategoryRequest::reset(bdObjectStoreListUserObjectsByCategoryRequest *this)
{
  bdObjectStorePaginatedRequestBase::reset(this);
  bdUserAccountID::reset(&this->m_userID);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = 0i64;
  *(_QWORD *)this->m_category = 0i64;
  *(_QWORD *)&this->m_category[8] = 0i64;
  *(_QWORD *)&this->m_category[16] = 0i64;
  *(_QWORD *)&this->m_category[24] = 0i64;
  *(_QWORD *)&this->m_category[32] = 0i64;
  *(_QWORD *)&this->m_category[40] = 0i64;
  this->m_category[48] = 0;
  *(_WORD *)&this->m_includeTags = 0;
}

/*
==============
bdObjectStoreListUserObjectsByCategoryRequest::serializeWithLobbyService
==============
*/
char bdObjectStoreListUserObjectsByCategoryRequest::serializeWithLobbyService(bdObjectStoreListUserObjectsByCategoryRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  bool hasPageToken; 
  const char *client; 
  const bdStructUserAccountID *v8; 
  char includeStatistics; 
  char includeTags; 
  unsigned int limit; 
  char url[1024]; 

  hasPageToken = bdObjectStorePaginatedRequestBase::hasPageToken((bdObjectStoreListUserObjectsByCategoryRequest *)((char *)this - 464));
  includeStatistics = this->m_pageToken[141];
  includeTags = this->m_pageToken[140];
  limit = *(_DWORD *)&this[-1].m_pageToken[196];
  client = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreListUserObjectsByCategoryRequest *)((char *)this - 464), lobbyService);
  v8 = (const bdStructUserAccountID *)&this->m_pageToken[52];
  if ( hasPageToken )
    bdObjectStoreRequestBase::buildListUserObjectsByCategory((bdObjectStoreListUserObjectsByCategoryRequest *)((char *)this - 464), url, 0x400u, v8, client, &this[-1].m_pageToken[176], &this->m_context[4], limit, &this[-1].m_pageToken[200], includeTags, includeStatistics);
  else
    bdObjectStoreRequestBase::buildListUserObjectsByCategory((bdObjectStoreListUserObjectsByCategoryRequest *)((char *)this - 464), url, 0x400u, v8, client, &this[-1].m_pageToken[176], &this->m_context[4], limit, includeTags, includeStatistics);
  if ( bdStructBufferSerializer::writeString(serializer, 1u, "GET", 0x10u) )
    bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  return 1;
}

