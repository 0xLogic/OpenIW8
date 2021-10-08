/*
==============
bdGetPendingFriendsRequest::setDirection
==============
*/

void __fastcall bdGetPendingFriendsRequest::setDirection(bdGetPendingFriendsRequest *this, const bdGetPendingFriendsRequest::Direction direction)
{
  ?setDirection@bdGetPendingFriendsRequest@@QEAAXW4Direction@1@@Z(this, direction);
}

/*
==============
bdGetPendingFriendsRequest::bdGetPendingFriendsRequest
==============
*/

void __fastcall bdGetPendingFriendsRequest::bdGetPendingFriendsRequest(bdGetPendingFriendsRequest *this, const char *const context, const bdGetPendingFriendsRequest::Direction direction, const char *const pageToken)
{
  ??0bdGetPendingFriendsRequest@@QEAA@QEBDW4Direction@0@0@Z(this, context, direction, pageToken);
}

/*
==============
bdGetPendingFriendsRequest::bdGetPendingFriendsRequest
==============
*/

void __fastcall bdGetPendingFriendsRequest::bdGetPendingFriendsRequest(bdGetPendingFriendsRequest *this)
{
  ??0bdGetPendingFriendsRequest@@QEAA@XZ(this);
}

/*
==============
bdGetPendingFriendsRequest::restSerializeRequest
==============
*/

bool __fastcall bdGetPendingFriendsRequest::restSerializeRequest(bdGetPendingFriendsRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdGetPendingFriendsRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdGetPendingFriendsRequest::~bdGetPendingFriendsRequest
==============
*/

void __fastcall bdGetPendingFriendsRequest::~bdGetPendingFriendsRequest(bdGetPendingFriendsRequest *this)
{
  ??1bdGetPendingFriendsRequest@@UEAA@XZ(this);
}

/*
==============
bdGetPendingFriendsRequest::setContext
==============
*/

void __fastcall bdGetPendingFriendsRequest::setContext(bdGetPendingFriendsRequest *this, const char *context)
{
  ?setContext@bdGetPendingFriendsRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdGetPendingFriendsRequest::setPageToken
==============
*/

void __fastcall bdGetPendingFriendsRequest::setPageToken(bdGetPendingFriendsRequest *this, const char *pageToken)
{
  ?setPageToken@bdGetPendingFriendsRequest@@QEAAXPEBD@Z(this, pageToken);
}

/*
==============
bdGetPendingFriendsRequest::directionToString
==============
*/

const char *__fastcall bdGetPendingFriendsRequest::directionToString(bdGetPendingFriendsRequest *this, const bdGetPendingFriendsRequest::Direction direction)
{
  return ?directionToString@bdGetPendingFriendsRequest@@IEBAPEBDW4Direction@1@@Z(this, direction);
}

/*
==============
bdGetPendingFriendsRequest::bdGetPendingFriendsRequest
==============
*/
void bdGetPendingFriendsRequest::bdGetPendingFriendsRequest(bdGetPendingFriendsRequest *this, const char *const context, const bdGetPendingFriendsRequest::Direction direction, const char *const pageToken)
{
  this->__vftable = (bdGetPendingFriendsRequest_vtbl *)&bdGetPendingFriendsRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  this->m_direction = direction;
  bdStructFixedSizeString<1024>::copy(&this->m_pageToken, pageToken);
}

/*
==============
bdGetPendingFriendsRequest::bdGetPendingFriendsRequest
==============
*/
void bdGetPendingFriendsRequest::bdGetPendingFriendsRequest(bdGetPendingFriendsRequest *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  this->__vftable = (bdGetPendingFriendsRequest_vtbl *)&bdGetPendingFriendsRequest::`vftable';
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
  this->m_direction = INCOMING;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdGetPendingFriendsRequest *)-32i64 )
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
bdGetPendingFriendsRequest::~bdGetPendingFriendsRequest
==============
*/
void bdGetPendingFriendsRequest::~bdGetPendingFriendsRequest(bdGetPendingFriendsRequest *this)
{
  this->__vftable = (bdGetPendingFriendsRequest_vtbl *)&bdGetPendingFriendsRequest::`vftable';
  bdStructFixedSizeString<1024>::~bdStructFixedSizeString<1024>(&this->m_pageToken);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
  bdRESTRequest::~bdRESTRequest(this);
}

/*
==============
bdGetPendingFriendsRequest::directionToString
==============
*/
const char *bdGetPendingFriendsRequest::directionToString(bdGetPendingFriendsRequest *this, const bdGetPendingFriendsRequest::Direction direction)
{
  if ( direction == INCOMING )
    return "INCOMING";
  if ( direction == OUTGOING )
    return "OUTGOING";
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
bdGetPendingFriendsRequest::restSerializeRequest
==============
*/
char bdGetPendingFriendsRequest::restSerializeRequest(bdGetPendingFriendsRequest *this, bdRESTRequestBuilder *builder)
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
  bdGetPendingFriendsRequest::Direction m_direction; 
  const char *v14; 
  char v15; 
  bdStructFixedSizeString<1024> *p_m_pageToken; 
  bdStructFixedSizeString<1024> *v17; 
  bdRESTURI *v19; 
  bdRESTURI::bdDummyArg v20; 
  bdRESTURI::bdDummyArg v21; 
  char *in; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "social-service") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) && bdRESTRequestBuilder::setResourceName(builder, "Friends", "get_pending_friend_requests_v1") )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldAccept(v4, BD_MIME_JSON) )
      v5 = 1;
  }
  v6 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v6);
  if ( !v5 )
    goto LABEL_21;
  v8 = bdRESTRequestBuilder::uri(builder);
  in = "/{api_version}/friends/{account_type}-{user_id}/pending/";
  v8->m_path[0] = 0;
  v8->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, BD_CROSS_PLATFORM_SOCIAL_SERVICES_API_VERSION);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, AuthInfo->m_accountType);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, AuthInfo->m_userID);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v20);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v21);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  if ( !bdRESTURI::isOK(v8) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", 1024);
    v8->m_path[0] = 0;
    v8->m_pathLength = 0;
  }
  if ( bdRESTURI::isOK(v8) && (v9 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v9, "context", this->m_context.m_buffer)) && (v10 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v10, "client", AuthInfo->m_clientID)) && (v11 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v11, "titleID", AuthInfo->m_titleID)) && ((v12 = bdRESTRequestBuilder::uri(builder), (m_direction = this->m_direction) == INCOMING) ? (v14 = "INCOMING") : m_direction == OUTGOING ? (v14 = "OUTGOING") : (v14 = (char *)&queryFormat.fmt + 3), bdRESTURI::addQueryParam(v12, "direction", v14)) )
    v15 = 1;
  else
LABEL_21:
    v15 = 0;
  p_m_pageToken = &this->m_pageToken;
  v17 = (bdStructFixedSizeString<1024> *)memchr_0(p_m_pageToken, 0, 0x400ui64);
  if ( v17 && v17 == p_m_pageToken )
    return v15;
  if ( v15 )
  {
    v19 = bdRESTRequestBuilder::uri(builder);
    if ( bdRESTURI::addQueryParam(v19, "page", p_m_pageToken->m_buffer) )
      return 1;
  }
  return 0;
}

/*
==============
bdGetPendingFriendsRequest::setContext
==============
*/
void bdGetPendingFriendsRequest::setContext(bdGetPendingFriendsRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdGetPendingFriendsRequest::setDirection
==============
*/
void bdGetPendingFriendsRequest::setDirection(bdGetPendingFriendsRequest *this, const bdGetPendingFriendsRequest::Direction direction)
{
  this->m_direction = direction;
}

/*
==============
bdGetPendingFriendsRequest::setPageToken
==============
*/
void bdGetPendingFriendsRequest::setPageToken(bdGetPendingFriendsRequest *this, const char *pageToken)
{
  bdStructFixedSizeString<1024>::copy(&this->m_pageToken, pageToken);
}

