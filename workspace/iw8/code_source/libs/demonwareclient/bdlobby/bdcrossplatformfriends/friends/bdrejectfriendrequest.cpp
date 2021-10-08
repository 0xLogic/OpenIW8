/*
==============
bdRejectFriendRequest::setContext
==============
*/

void __fastcall bdRejectFriendRequest::setContext(bdRejectFriendRequest *this, const char *context)
{
  ?setContext@bdRejectFriendRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdRejectFriendRequest::restSerializeRequest
==============
*/

bool __fastcall bdRejectFriendRequest::restSerializeRequest(bdRejectFriendRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdRejectFriendRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdRejectFriendRequest::bdRejectFriendRequest
==============
*/

void __fastcall bdRejectFriendRequest::bdRejectFriendRequest(bdRejectFriendRequest *this, const char *const context, const bdUserAccountID *user)
{
  ??0bdRejectFriendRequest@@QEAA@QEBDAEBVbdUserAccountID@@@Z(this, context, user);
}

/*
==============
bdRejectFriendRequest::setUser
==============
*/

void __fastcall bdRejectFriendRequest::setUser(bdRejectFriendRequest *this, const bdUserAccountID *user)
{
  ?setUser@bdRejectFriendRequest@@QEAAXAEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdRejectFriendRequest::bdRejectFriendRequest
==============
*/

void __fastcall bdRejectFriendRequest::bdRejectFriendRequest(bdRejectFriendRequest *this)
{
  ??0bdRejectFriendRequest@@QEAA@XZ(this);
}

/*
==============
bdRejectFriendRequest::~bdRejectFriendRequest
==============
*/

void __fastcall bdRejectFriendRequest::~bdRejectFriendRequest(bdRejectFriendRequest *this)
{
  ??1bdRejectFriendRequest@@UEAA@XZ(this);
}

/*
==============
bdRejectFriendRequest::bdRejectFriendRequest
==============
*/
void bdRejectFriendRequest::bdRejectFriendRequest(bdRejectFriendRequest *this, const char *const context, const bdUserAccountID *user)
{
  this->__vftable = (bdRejectFriendRequest_vtbl *)&bdRejectFriendRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user, user);
}

/*
==============
bdRejectFriendRequest::bdRejectFriendRequest
==============
*/
void bdRejectFriendRequest::bdRejectFriendRequest(bdRejectFriendRequest *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  size_t v4; 

  this->__vftable = (bdRejectFriendRequest_vtbl *)&bdRejectFriendRequest::`vftable';
  p_m_context = &this->m_context;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( p_m_context )
  {
    v4 = 16i64;
    if ( v3 < 0x10 )
      v4 = v3;
    memcpy_0(p_m_context, (char *)&queryFormat.fmt + 3, v4);
    p_m_context->m_buffer[v4] = 0;
  }
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user);
}

/*
==============
bdRejectFriendRequest::~bdRejectFriendRequest
==============
*/
void bdRejectFriendRequest::~bdRejectFriendRequest(bdRejectFriendRequest *this)
{
  this->__vftable = (bdRejectFriendRequest_vtbl *)&bdRejectFriendRequest::`vftable';
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)this->m_user._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this->m_user.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)this->m_user._bytes_48);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
  bdRESTRequest::~bdRESTRequest(this);
}

/*
==============
bdRejectFriendRequest::restSerializeRequest
==============
*/
char bdRejectFriendRequest::restSerializeRequest(bdRejectFriendRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bool v5; 
  bdLobbyService *v6; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v8; 
  bdRESTURI *v9; 
  bdRESTURI *v10; 
  bdRESTURI *v11; 
  int v13; 
  bdRESTURI::bdDummyArg v14; 
  char *in; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "friends") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1145392197) && bdRESTRequestBuilder::setResourceName(builder, "Friends", "reject_friend_request") )
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
  in = "/v1/friends/{account_type}-{user_id}/{account_type}-{user_id}/";
  v8->m_path[0] = 0;
  v8->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, AuthInfo->m_accountType);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, AuthInfo->m_userID);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, this->m_user._bytes_20);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, this->m_user.m_userID);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v14);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  if ( !bdRESTURI::isOK(v8) )
  {
    v13 = 1024;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v13);
    v8->m_path[0] = 0;
    v8->m_pathLength = 0;
  }
  if ( bdRESTURI::isOK(v8) && (v9 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v9, "context", this->m_context.m_buffer)) && (v10 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v10, "client", AuthInfo->m_clientID)) && (v11 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v11, "titleID", AuthInfo->m_titleID)) )
    return 1;
  else
    return 0;
}

/*
==============
bdRejectFriendRequest::setContext
==============
*/
void bdRejectFriendRequest::setContext(bdRejectFriendRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdRejectFriendRequest::setUser
==============
*/
void bdRejectFriendRequest::setUser(bdRejectFriendRequest *this, const bdUserAccountID *user)
{
  bdStructUserAccountID v3; 

  bdStructUserAccountID::bdStructUserAccountID(&v3, user);
  bdUserAccountID::operator=(&this->m_user, &v3);
  bdReferencable::operator=((bdReferencable *)&this->m_user.gap38[*(int *)(*(_QWORD *)&this->m_user.gap38[8] + 4i64) + 8], (const bdReferencable *)&v3.gap38[*(int *)(*(_QWORD *)&v3.gap38[8] + 4i64) + 8]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v3._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v3.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v3._bytes_48);
}

