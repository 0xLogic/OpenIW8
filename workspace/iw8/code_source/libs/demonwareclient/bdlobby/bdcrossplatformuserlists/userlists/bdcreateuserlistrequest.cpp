/*
==============
bdCreateUserListRequest::bdCreateUserListRequest
==============
*/

void __fastcall bdCreateUserListRequest::bdCreateUserListRequest(bdCreateUserListRequest *this)
{
  ??0bdCreateUserListRequest@@QEAA@XZ(this);
}

/*
==============
bdCreateUserListRequest::restSerializeRequest
==============
*/

bool __fastcall bdCreateUserListRequest::restSerializeRequest(bdCreateUserListRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdCreateUserListRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdCreateUserListRequest::bdCreateUserListRequest
==============
*/

void __fastcall bdCreateUserListRequest::bdCreateUserListRequest(bdCreateUserListRequest *this, const char *context, const char *listName)
{
  ??0bdCreateUserListRequest@@QEAA@PEBD0@Z(this, context, listName);
}

/*
==============
bdCreateUserListRequest::setContext
==============
*/

void __fastcall bdCreateUserListRequest::setContext(bdCreateUserListRequest *this, const char *context)
{
  ?setContext@bdCreateUserListRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdCreateUserListRequest::setListName
==============
*/

void __fastcall bdCreateUserListRequest::setListName(bdCreateUserListRequest *this, const char *listName)
{
  ?setListName@bdCreateUserListRequest@@QEAAXPEBD@Z(this, listName);
}

/*
==============
bdCreateUserListRequest::bdCreateUserListRequest
==============
*/
void bdCreateUserListRequest::bdCreateUserListRequest(bdCreateUserListRequest *this, const char *context, const char *listName)
{
  this->__vftable = (bdCreateUserListRequest_vtbl *)&bdCreateUserListRequest::`vftable';
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdStructFixedSizeString<100>::copy(&this->m_listName, listName);
}

/*
==============
bdCreateUserListRequest::bdCreateUserListRequest
==============
*/
void bdCreateUserListRequest::bdCreateUserListRequest(bdCreateUserListRequest *this)
{
  bdStructFixedSizeString<16> *p_m_context; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  this->__vftable = (bdCreateUserListRequest_vtbl *)&bdCreateUserListRequest::`vftable';
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
  if ( this != (bdCreateUserListRequest *)-25i64 )
  {
    v6 = 100i64;
    if ( v3 < 0x64 )
      v6 = v3;
    memcpy_0(&this->m_listName, (char *)&queryFormat.fmt + 3, v6);
    this->m_listName.m_buffer[v6] = 0;
  }
}

/*
==============
bdCreateUserListRequest::restSerializeRequest
==============
*/
char bdCreateUserListRequest::restSerializeRequest(bdCreateUserListRequest *this, bdRESTRequestBuilder *builder)
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
  char *in[5]; 
  bdRESTURI::bdDummyArg v15; 
  bdRESTURI::bdDummyArg v16; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "userlists") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1347375956) && bdRESTRequestBuilder::setResourceName(builder, "UserLists", "create_user_list") )
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
  in[0] = "/v3/user/{account_type}-{user_id}/list/{list_name}/";
  v8->m_path[0] = 0;
  v8->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, AuthInfo->m_accountType);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, AuthInfo->m_userID);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, this->m_listName.m_buffer);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, &v15);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
  bdRESTURI::operator<<(v8, &v16);
  bdRESTURI::appendNextBlock(v8, (const char **)in);
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
bdCreateUserListRequest::setContext
==============
*/
void bdCreateUserListRequest::setContext(bdCreateUserListRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdCreateUserListRequest::setListName
==============
*/
void bdCreateUserListRequest::setListName(bdCreateUserListRequest *this, const char *listName)
{
  bdStructFixedSizeString<100>::copy(&this->m_listName, listName);
}

