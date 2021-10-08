/*
==============
bdGetFriendsRequest::setContext
==============
*/

void __fastcall bdGetFriendsRequest::setContext(bdGetFriendsRequest *this, const char *context)
{
  ?setContext@bdGetFriendsRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdGetFriendsRequest::restSerializeRequest
==============
*/

bool __fastcall bdGetFriendsRequest::restSerializeRequest(bdGetFriendsRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdGetFriendsRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdGetFriendsRequest::setPageToken
==============
*/

void __fastcall bdGetFriendsRequest::setPageToken(bdGetFriendsRequest *this, const char *pageToken)
{
  ?setPageToken@bdGetFriendsRequest@@QEAAXPEBD@Z(this, pageToken);
}

/*
==============
bdGetFriendsRequest::~bdGetFriendsRequest
==============
*/

void __fastcall bdGetFriendsRequest::~bdGetFriendsRequest(bdGetFriendsRequest *this)
{
  ??1bdGetFriendsRequest@@UEAA@XZ(this);
}

/*
==============
bdGetFriendsRequest::bdGetFriendsRequest
==============
*/

void __fastcall bdGetFriendsRequest::bdGetFriendsRequest(bdGetFriendsRequest *this, const char *const context, const char *const pageToken)
{
  ??0bdGetFriendsRequest@@QEAA@QEBD0@Z(this, context, pageToken);
}

/*
==============
bdGetFriendsRequest::bdGetFriendsRequest
==============
*/

void __fastcall bdGetFriendsRequest::bdGetFriendsRequest(bdGetFriendsRequest *this)
{
  ??0bdGetFriendsRequest@@QEAA@XZ(this);
}

/*
==============
bdGetFriendsRequest::bdGetFriendsRequest
==============
*/
void bdGetFriendsRequest::bdGetFriendsRequest(bdGetFriendsRequest *this, const char *const context, const char *const pageToken)
{
  this->__vftable = (bdGetFriendsRequest_vtbl *)&bdGetFriendsRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdStructFixedSizeString<1024>::copy(&this->m_pageToken, pageToken);
}

/*
==============
bdGetFriendsRequest::bdGetFriendsRequest
==============
*/
void bdGetFriendsRequest::bdGetFriendsRequest(bdGetFriendsRequest *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  this->__vftable = (bdGetFriendsRequest_vtbl *)&bdGetFriendsRequest::`vftable';
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
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdGetFriendsRequest *)-25i64 )
  {
    v6 = 1024i64;
    if ( v3 < 0x400 )
      v6 = v3;
    memcpy_0(&this->m_pageToken, (char *)&queryFormat.fmt + 3, v6);
    this->m_pageToken.m_buffer[v6] = 0;
  }
}

/*
==============
bdGetFriendsRequest::~bdGetFriendsRequest
==============
*/
void bdGetFriendsRequest::~bdGetFriendsRequest(bdGetFriendsRequest *this)
{
  this->__vftable = (bdGetFriendsRequest_vtbl *)&bdGetFriendsRequest::`vftable';
  bdStructFixedSizeString<1024>::~bdStructFixedSizeString<1024>(&this->m_pageToken);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
  bdRESTRequest::~bdRESTRequest(this);
}

/*
==============
bdGetFriendsRequest::restSerializeRequest
==============
*/
char bdGetFriendsRequest::restSerializeRequest(bdGetFriendsRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bool v5; 
  bdLobbyService *v6; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v8; 
  bdRESTURI *v9; 
  bdRESTURI *v10; 
  bdRESTURI *v11; 
  char v12; 
  bdStructFixedSizeString<1024> *v13; 
  bdRESTURI *v15; 
  int v16; 
  bdRESTURI::bdDummyArg v17; 
  bdRESTURI::bdDummyArg v18; 
  char *in; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "social-service") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) && bdRESTRequestBuilder::setResourceName(builder, "Friends", "get_friends_v1") )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldAccept(v4, BD_MIME_JSON) )
      v5 = 1;
  }
  v6 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v6);
  if ( !v5 )
    goto LABEL_15;
  v8 = bdRESTRequestBuilder::uri(builder);
  in = "/{api_version}/friends/{account_type}-{user_id}/";
  v8->m_path[0] = 0;
  v8->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, BD_CROSS_PLATFORM_SOCIAL_SERVICES_API_VERSION_0);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, AuthInfo->m_accountType);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, AuthInfo->m_userID);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v17);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v18);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  if ( !bdRESTURI::isOK(v8) )
  {
    v16 = 1024;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v16);
    v8->m_path[0] = 0;
    v8->m_pathLength = 0;
  }
  if ( bdRESTURI::isOK(v8) && (v9 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v9, "context", this->m_context.m_buffer)) && (v10 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v10, "client", AuthInfo->m_clientID)) && (v11 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v11, "titleID", AuthInfo->m_titleID)) )
    v12 = 1;
  else
LABEL_15:
    v12 = 0;
  v13 = (bdStructFixedSizeString<1024> *)memchr_0(&this->m_pageToken, 0, 0x400ui64);
  if ( v13 && v13 == &this->m_pageToken )
    return v12;
  if ( v12 )
  {
    v15 = bdRESTRequestBuilder::uri(builder);
    if ( bdRESTURI::addQueryParam(v15, "page", this->m_pageToken.m_buffer) )
      return 1;
  }
  return 0;
}

/*
==============
bdGetFriendsRequest::setContext
==============
*/
void bdGetFriendsRequest::setContext(bdGetFriendsRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdGetFriendsRequest::setPageToken
==============
*/
void bdGetFriendsRequest::setPageToken(bdGetFriendsRequest *this, const char *pageToken)
{
  bdStructFixedSizeString<1024>::copy(&this->m_pageToken, pageToken);
}

