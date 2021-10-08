/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreListPublisherObjectsByCategoryRequest::deserialize(bdObjectStoreListPublisherObjectsByCategoryRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreListPublisherObjectsByCategoryRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::restSerializeRequest
==============
*/

bool __fastcall bdObjectStoreListPublisherObjectsByCategoryRequest::restSerializeRequest(bdObjectStoreListPublisherObjectsByCategoryRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdObjectStoreListPublisherObjectsByCategoryRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::bdObjectStoreListPublisherObjectsByCategoryRequest
==============
*/

void __fastcall bdObjectStoreListPublisherObjectsByCategoryRequest::bdObjectStoreListPublisherObjectsByCategoryRequest(bdObjectStoreListPublisherObjectsByCategoryRequest *this, const char *const context, const char *publisher, const char *const category, unsigned int limit, const char *pageToken)
{
  ??0bdObjectStoreListPublisherObjectsByCategoryRequest@@QEAA@QEBDPEBD0I1@Z(this, context, publisher, category, limit, pageToken);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::init
==============
*/

void __fastcall bdObjectStoreListPublisherObjectsByCategoryRequest::init(bdObjectStoreListPublisherObjectsByCategoryRequest *this, const char *const context, const char *publisher, const char *const category, unsigned int limit, const char *pageToken)
{
  ?init@bdObjectStoreListPublisherObjectsByCategoryRequest@@QEAAXQEBDPEBD0I1@Z(this, context, publisher, category, limit, pageToken);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::bdObjectStoreListPublisherObjectsByCategoryRequest
==============
*/

void __fastcall bdObjectStoreListPublisherObjectsByCategoryRequest::bdObjectStoreListPublisherObjectsByCategoryRequest(bdObjectStoreListPublisherObjectsByCategoryRequest *this, const char *const client, const char *const context, const char *publisher, const char *const category, unsigned int limit, const char *pageToken)
{
  ??0bdObjectStoreListPublisherObjectsByCategoryRequest@@QEAA@QEBD0PEBD0I1@Z(this, client, context, publisher, category, limit, pageToken);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreListPublisherObjectsByCategoryRequest::serializeWithLobbyService(bdObjectStoreListPublisherObjectsByCategoryRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreListPublisherObjectsByCategoryRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::reset
==============
*/

void __fastcall bdObjectStoreListPublisherObjectsByCategoryRequest::reset(bdObjectStoreListPublisherObjectsByCategoryRequest *this)
{
  ?reset@bdObjectStoreListPublisherObjectsByCategoryRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::bdObjectStoreListPublisherObjectsByCategoryRequest
==============
*/
void bdObjectStoreListPublisherObjectsByCategoryRequest::bdObjectStoreListPublisherObjectsByCategoryRequest(bdObjectStoreListPublisherObjectsByCategoryRequest *this, const char *const client, const char *const context, const char *publisher, const char *const category, unsigned int limit, const char *pageToken, int a8)
{
  if ( a8 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreListPublisherObjectsByCategoryRequest::`vbtable';
    *(_QWORD *)&this->gap23D[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap23D[11] = 0;
  }
  this->bdObjectStorePaginatedRequestBase::bdObjectStoreRequestBase::__vftable = (bdObjectStoreListPublisherObjectsByCategoryRequest_vtbl *)&bdObjectStorePaginatedRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStorePaginatedRequestBase::bdObjectStoreRequestBase::__vftable = (bdObjectStoreListPublisherObjectsByCategoryRequest_vtbl *)&bdObjectStoreListPublisherObjectsByCategoryRequest::`vftable'{for `bdObjectStorePaginatedRequestBase'};
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreListPublisherObjectsByCategoryRequest::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = &bdObjectStoreListPublisherObjectsByCategoryRequest::`vftable'{for `bdRESTRequest'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreListPublisherObjectsByCategoryRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreListPublisherObjectsByCategoryRequest::init(this, context, publisher, category, limit, pageToken);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::bdObjectStoreListPublisherObjectsByCategoryRequest
==============
*/
void bdObjectStoreListPublisherObjectsByCategoryRequest::bdObjectStoreListPublisherObjectsByCategoryRequest(bdObjectStoreListPublisherObjectsByCategoryRequest *this, const char *const context, const char *publisher, const char *const category, unsigned int limit, const char *pageToken, int a7)
{
  if ( a7 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreListPublisherObjectsByCategoryRequest::`vbtable';
    *(_QWORD *)&this->gap23D[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap23D[11] = 0;
  }
  this->bdObjectStorePaginatedRequestBase::bdObjectStoreRequestBase::__vftable = (bdObjectStoreListPublisherObjectsByCategoryRequest_vtbl *)&bdObjectStorePaginatedRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStorePaginatedRequestBase::bdObjectStoreRequestBase::__vftable = (bdObjectStoreListPublisherObjectsByCategoryRequest_vtbl *)&bdObjectStoreListPublisherObjectsByCategoryRequest::`vftable'{for `bdObjectStorePaginatedRequestBase'};
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreListPublisherObjectsByCategoryRequest::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = &bdObjectStoreListPublisherObjectsByCategoryRequest::`vftable'{for `bdRESTRequest'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreListPublisherObjectsByCategoryRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreListPublisherObjectsByCategoryRequest::init(this, context, publisher, category, limit, pageToken);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::deserialize
==============
*/
bool bdObjectStoreListPublisherObjectsByCategoryRequest::deserialize(bdObjectStoreListPublisherObjectsByCategoryRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorelistpublisherobjectsbycategoryrequest.cpp", "bdObjectStoreListPublisherObjectsByCategoryRequest::deserialize", 0x3Fu, "Cannot call deserialize on bdObjectStoreListPublisherObjectsByCategoryRequest");
  return 0;
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::init
==============
*/
void bdObjectStoreListPublisherObjectsByCategoryRequest::init(bdObjectStoreListPublisherObjectsByCategoryRequest *this, const char *const context, const char *publisher, const char *const category, unsigned int limit, const char *pageToken)
{
  _BYTE *v9; 
  unsigned __int64 v10; 
  _BYTE *v11; 
  unsigned __int64 v12; 
  __int64 v13; 

  bdObjectStoreRequestBase::setContext(this, context);
  v9 = memchr_0(publisher, 0, 0x14ui64);
  v10 = 20i64;
  if ( v9 )
    v10 = v9 - publisher;
  bdHandleAssert(v10 < 0x14, "(bdStrnlen(publisher, BD_OBJECTSTORE_MAX_PUBLISHER_LENGTH) < BD_OBJECTSTORE_MAX_PUBLISHER_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorelistpublisherobjectsbycategoryrequest.cpp", "bdObjectStoreListPublisherObjectsByCategoryRequest::init", 0x2Bu, "Publisher is too long. Max length is %d", 19);
  v11 = memchr_0(category, 0, 0x41ui64);
  LODWORD(v13) = 64;
  v12 = 65i64;
  if ( v11 )
    v12 = v11 - category;
  bdHandleAssert(v12 < 0x41, "(bdStrnlen(category, BD_OBJECTSTORE_MAX_CATEGORY_LENGTH) < BD_OBJECTSTORE_MAX_CATEGORY_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorelistpublisherobjectsbycategoryrequest.cpp", "bdObjectStoreListPublisherObjectsByCategoryRequest::init", 0x2Du, "Category is too long. Max length is %d", v13);
  bdStrlcpy(this->m_publisher, publisher, 0x14ui64);
  bdStrlcpy((char *const)&this->bdStructBufferSerializable::__vftable + 24, category, 0x41ui64);
  bdObjectStorePaginatedRequestBase::setPageToken(this, pageToken);
  bdObjectStorePaginatedRequestBase::setLimit(this, limit);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::reset
==============
*/
void bdObjectStoreListPublisherObjectsByCategoryRequest::reset(bdObjectStoreListPublisherObjectsByCategoryRequest *this)
{
  bdObjectStorePaginatedRequestBase::reset(this);
  memset_0(&this->bdStructBufferSerializable::__vftable + 3, 0, 0x55ui64);
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::restSerializeRequest
==============
*/
char bdObjectStoreListPublisherObjectsByCategoryRequest::restSerializeRequest(bdObjectStoreListPublisherObjectsByCategoryRequest *this, bdRESTRequestBuilder *builder)
{
  bdLobbyService *v4; 
  bdAuthInfo *AuthInfo; 
  const char *BaseRestUrl; 
  bdRESTHeaders *v7; 
  bdRESTURI *v8; 
  bdRESTURI *v9; 
  bdRESTURI *v10; 
  bdRESTURI *v11; 
  bdRESTURI *v12; 
  char v13; 
  bdRESTURI *v14; 
  int v16; 
  bdRESTURI::bdDummyArg v17; 
  char *in[4]; 
  bdRESTURI::bdDummyArg v19; 
  bdRESTURI::bdDummyArg v20; 
  bdRESTURI::bdDummyArg v21; 

  v4 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v4);
  if ( !bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) )
    goto LABEL_13;
  BaseRestUrl = bdObjectStoreRequestBase::getBaseRestUrl((bdObjectStoreListPublisherObjectsByCategoryRequest *)((char *)this - 480));
  if ( !bdRESTRequestBuilder::setServiceName(builder, BaseRestUrl) )
    goto LABEL_13;
  if ( !bdRESTRequestBuilder::setResourceName(builder, "ObjectsResourcePublishers", "get_metadata") )
    goto LABEL_13;
  v7 = bdRESTRequestBuilder::headers(builder);
  if ( !bdRESTHeaders::setFieldAccept(v7, BD_MIME_JSON) )
    goto LABEL_13;
  v8 = bdRESTRequestBuilder::uri(builder);
  in[0] = "/v2/core/publishers/{publisher}/objects/";
  v8->m_path[0] = 0;
  v8->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, &this->m_pageToken[37]);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, &v19);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, &v20);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, &v21);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, &v17);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  if ( !bdRESTURI::isOK(v8) )
  {
    v16 = 1024;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v16);
    v8->m_path[0] = 0;
    v8->m_pathLength = 0;
  }
  if ( bdRESTURI::isOK(v8) && (v9 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v9, "client", AuthInfo->m_clientID)) && (v10 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v10, "context", &this[-1].m_pageToken[88])) && (v11 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v11, "category", (const char *)&this->m_environment)) && (v12 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v12, "limit", *(_DWORD *)&this[-1].m_pageToken[108])) )
    v13 = 1;
  else
LABEL_13:
    v13 = 0;
  if ( !bdObjectStorePaginatedRequestBase::hasPageToken((bdObjectStoreListPublisherObjectsByCategoryRequest *)((char *)this - 480)) )
    return v13;
  if ( v13 )
  {
    v14 = bdRESTRequestBuilder::uri(builder);
    if ( bdRESTURI::addQueryParam(v14, "pageToken", &this[-1].m_pageToken[112]) )
      return 1;
  }
  return 0;
}

/*
==============
bdObjectStoreListPublisherObjectsByCategoryRequest::serializeWithLobbyService
==============
*/
bool bdObjectStoreListPublisherObjectsByCategoryRequest::serializeWithLobbyService(bdObjectStoreListPublisherObjectsByCategoryRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  bool hasPageToken; 
  const char *client; 
  const char *v8; 
  unsigned int limit; 
  char url[1024]; 

  hasPageToken = bdObjectStorePaginatedRequestBase::hasPageToken((bdObjectStoreListPublisherObjectsByCategoryRequest *)((char *)this - 464));
  limit = *(_DWORD *)&this[-1].m_pageToken[124];
  client = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreListPublisherObjectsByCategoryRequest *)((char *)this - 464), lobbyService);
  v8 = &this->m_pageToken[53];
  if ( hasPageToken )
    bdObjectStoreRequestBase::buildListPublisherObjectsByCategory((bdObjectStoreListPublisherObjectsByCategoryRequest *)((char *)this - 464), url, 0x400u, v8, client, &this[-1].m_pageToken[104], &this->m_context[12], limit, &this[-1].m_pageToken[128]);
  else
    bdObjectStoreRequestBase::buildListPublisherObjectsByCategory((bdObjectStoreListPublisherObjectsByCategoryRequest *)((char *)this - 464), url, 0x400u, v8, client, &this[-1].m_pageToken[104], &this->m_context[12], limit);
  return bdStructBufferSerializer::writeString(serializer, 1u, "GET", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
}

