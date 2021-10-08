/*
==============
bdGetUserListRequest::sortOrderToString
==============
*/

const char *__fastcall bdGetUserListRequest::sortOrderToString(bdGetUserListRequest *this, const bdGetUserListRequest::SortOrder *sortOrder)
{
  return ?sortOrderToString@bdGetUserListRequest@@IEBAPEBDAEBW4SortOrder@1@@Z(this, sortOrder);
}

/*
==============
bdGetUserListRequest::setSortOrder
==============
*/

void __fastcall bdGetUserListRequest::setSortOrder(bdGetUserListRequest *this, const bdGetUserListRequest::SortOrder sortOrder)
{
  ?setSortOrder@bdGetUserListRequest@@QEAAXW4SortOrder@1@@Z(this, sortOrder);
}

/*
==============
bdGetUserListRequest::setContext
==============
*/

void __fastcall bdGetUserListRequest::setContext(bdGetUserListRequest *this, const char *context)
{
  ?setContext@bdGetUserListRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdGetUserListRequest::setListName
==============
*/

void __fastcall bdGetUserListRequest::setListName(bdGetUserListRequest *this, const char *listName)
{
  ?setListName@bdGetUserListRequest@@QEAAXPEBD@Z(this, listName);
}

/*
==============
bdGetUserListRequest::setPageToken
==============
*/

void __fastcall bdGetUserListRequest::setPageToken(bdGetUserListRequest *this, const char *pageToken)
{
  ?setPageToken@bdGetUserListRequest@@QEAAXPEBD@Z(this, pageToken);
}

/*
==============
bdGetUserListRequest::bdGetUserListRequest
==============
*/

void __fastcall bdGetUserListRequest::bdGetUserListRequest(bdGetUserListRequest *this)
{
  ??0bdGetUserListRequest@@QEAA@XZ(this);
}

/*
==============
bdGetUserListRequest::bdGetUserListRequest
==============
*/

void __fastcall bdGetUserListRequest::bdGetUserListRequest(bdGetUserListRequest *this, const char *context, const char *listName, const bdGetUserListRequest::SortOrder sortOrder, const char *pageToken, const unsigned __int16 maxUsersInResponse)
{
  ??0bdGetUserListRequest@@QEAA@PEBD0W4SortOrder@0@0G@Z(this, context, listName, sortOrder, pageToken, maxUsersInResponse);
}

/*
==============
bdGetUserListRequest::setMaxUsersInResponse
==============
*/

void __fastcall bdGetUserListRequest::setMaxUsersInResponse(bdGetUserListRequest *this, const unsigned __int16 maxUsersInResponse)
{
  ?setMaxUsersInResponse@bdGetUserListRequest@@QEAAXG@Z(this, maxUsersInResponse);
}

/*
==============
bdGetUserListRequest::restSerializeRequest
==============
*/

bool __fastcall bdGetUserListRequest::restSerializeRequest(bdGetUserListRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdGetUserListRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdGetUserListRequest::bdGetUserListRequest
==============
*/
void bdGetUserListRequest::bdGetUserListRequest(bdGetUserListRequest *this, const char *context, const char *listName, const bdGetUserListRequest::SortOrder sortOrder, const char *pageToken, const unsigned __int16 maxUsersInResponse)
{
  this->__vftable = (bdGetUserListRequest_vtbl *)&bdGetUserListRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdStructFixedSizeString<100>::copy(&this->m_listName, listName);
  this->m_sortOrder = sortOrder;
  bdStructFixedSizeString<1024>::copy(&this->m_pageToken, pageToken);
  this->m_maxUsersInResponse = maxUsersInResponse;
}

/*
==============
bdGetUserListRequest::bdGetUserListRequest
==============
*/
void bdGetUserListRequest::bdGetUserListRequest(bdGetUserListRequest *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  unsigned __int64 v6; 
  size_t v7; 
  size_t v8; 

  this->__vftable = (bdGetUserListRequest_vtbl *)&bdGetUserListRequest::`vftable';
  p_m_context = &this->m_context;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
  if ( p_m_context )
  {
    v5 = 16i64;
    if ( v4 < 0x10 )
      v5 = v4;
    memcpy_0(p_m_context, (char *)&queryFormat.fmt + 3, v5);
    p_m_context->m_buffer[v5] = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  do
    ++v6;
  while ( *((_BYTE *)&queryFormat.fmt + v6 + 3) );
  if ( this != (bdGetUserListRequest *)-25i64 )
  {
    v7 = 100i64;
    if ( v6 < 0x64 )
      v7 = v6;
    memcpy_0(&this->m_listName, (char *)&queryFormat.fmt + 3, v7);
    this->m_listName.m_buffer[v7] = 0;
  }
  this->m_sortOrder = ASCENDING;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdGetUserListRequest *)-132i64 )
  {
    v8 = 1024i64;
    if ( v3 < 0x400 )
      v8 = v3;
    memcpy_0(&this->m_pageToken, (char *)&queryFormat.fmt + 3, v8);
    this->m_pageToken.m_buffer[v8] = 0;
  }
  this->m_maxUsersInResponse = 200;
}

/*
==============
bdGetUserListRequest::restSerializeRequest
==============
*/
char bdGetUserListRequest::restSerializeRequest(bdGetUserListRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bool v5; 
  bdLobbyService *v6; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v8; 
  bdRESTURI *v9; 
  bdRESTURI *v10; 
  bdRESTURI *v11; 
  bdRESTURI *v12; 
  bdGetUserListRequest::SortOrder m_sortOrder; 
  const char *v14; 
  bdGetUserListRequest *v15; 
  bdRESTURI *v16; 
  bdRESTURI *v17; 
  int v19; 
  bdRESTURI::bdDummyArg v20; 
  char *in; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "social-service") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) && bdRESTRequestBuilder::setResourceName(builder, "UserLists", "get_user_list") )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldAccept(v4, BD_MIME_JSON) )
      v5 = 1;
  }
  v6 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v6);
  if ( !v5 )
    return 0;
  v8 = bdRESTRequestBuilder::uri(builder);
  in = "/{api_version}/user/{account_type}-{user_id}/list/{list_name}/";
  v8->m_path[0] = 0;
  v8->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, BD_CROSS_PLATFORM_SOCIAL_SERVICES_API_VERSION_1);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, AuthInfo->m_accountType);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, AuthInfo->m_userID);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, this->m_listName.m_buffer);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v20);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  if ( !bdRESTURI::isOK(v8) )
  {
    v19 = 1024;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v19);
    v8->m_path[0] = 0;
    v8->m_pathLength = 0;
  }
  if ( !bdRESTURI::isOK(v8) )
    return 0;
  v9 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v9, "context", this->m_context.m_buffer) )
    return 0;
  v10 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v10, "client", AuthInfo->m_clientID) )
    return 0;
  v11 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v11, "titleID", AuthInfo->m_titleID) )
    return 0;
  v12 = bdRESTRequestBuilder::uri(builder);
  m_sortOrder = this->m_sortOrder;
  if ( m_sortOrder == ASCENDING || (v14 = "DESCENDING", m_sortOrder != DESCENDING) )
    v14 = "ASCENDING";
  if ( bdRESTURI::addQueryParam(v12, "sortOrder", v14) && ((v15 = (bdGetUserListRequest *)memchr_0(&this->m_pageToken, 0, 0x400ui64)) != NULL && v15 == (bdGetUserListRequest *)&this->m_pageToken || (v16 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v16, "pageToken", this->m_pageToken.m_buffer))) && (v17 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v17, "maxUsersInResponse", this->m_maxUsersInResponse)) )
    return 1;
  else
    return 0;
}

/*
==============
bdGetUserListRequest::setContext
==============
*/
void bdGetUserListRequest::setContext(bdGetUserListRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdGetUserListRequest::setListName
==============
*/
void bdGetUserListRequest::setListName(bdGetUserListRequest *this, const char *listName)
{
  bdStructFixedSizeString<100>::copy(&this->m_listName, listName);
}

/*
==============
bdGetUserListRequest::setMaxUsersInResponse
==============
*/
void bdGetUserListRequest::setMaxUsersInResponse(bdGetUserListRequest *this, const unsigned __int16 maxUsersInResponse)
{
  this->m_maxUsersInResponse = maxUsersInResponse;
}

/*
==============
bdGetUserListRequest::setPageToken
==============
*/
void bdGetUserListRequest::setPageToken(bdGetUserListRequest *this, const char *pageToken)
{
  bdStructFixedSizeString<1024>::copy(&this->m_pageToken, pageToken);
}

/*
==============
bdGetUserListRequest::setSortOrder
==============
*/
void bdGetUserListRequest::setSortOrder(bdGetUserListRequest *this, const bdGetUserListRequest::SortOrder sortOrder)
{
  this->m_sortOrder = sortOrder;
}

/*
==============
bdGetUserListRequest::sortOrderToString
==============
*/
const char *bdGetUserListRequest::sortOrderToString(bdGetUserListRequest *this, const bdGetUserListRequest::SortOrder *sortOrder)
{
  const char *result; 

  if ( *sortOrder == ASCENDING )
    return "ASCENDING";
  result = "DESCENDING";
  if ( *sortOrder != DESCENDING )
    return "ASCENDING";
  return result;
}

