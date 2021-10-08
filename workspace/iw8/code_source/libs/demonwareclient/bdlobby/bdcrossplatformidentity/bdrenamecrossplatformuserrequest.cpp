/*
==============
bdRenameCrossPlatformUserRequest::bdRenameCrossPlatformUserRequest
==============
*/

void __fastcall bdRenameCrossPlatformUserRequest::bdRenameCrossPlatformUserRequest(bdRenameCrossPlatformUserRequest *this)
{
  ??0bdRenameCrossPlatformUserRequest@@QEAA@XZ(this);
}

/*
==============
bdRenameCrossPlatformUserRequest::setUsername
==============
*/

bool __fastcall bdRenameCrossPlatformUserRequest::setUsername(bdRenameCrossPlatformUserRequest *this, const char *newUsername)
{
  return ?setUsername@bdRenameCrossPlatformUserRequest@@QEAA_NPEBD@Z(this, newUsername);
}

/*
==============
bdRenameCrossPlatformUserRequest::setUnoID
==============
*/

void __fastcall bdRenameCrossPlatformUserRequest::setUnoID(bdRenameCrossPlatformUserRequest *this, unsigned __int64 unoID)
{
  ?setUnoID@bdRenameCrossPlatformUserRequest@@QEAAX_K@Z(this, unoID);
}

/*
==============
bdRenameCrossPlatformUserRequest::getUsername
==============
*/

const char *__fastcall bdRenameCrossPlatformUserRequest::getUsername(bdRenameCrossPlatformUserRequest *this)
{
  return ?getUsername@bdRenameCrossPlatformUserRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdRenameCrossPlatformUserRequest::getUnoID
==============
*/

unsigned __int64 __fastcall bdRenameCrossPlatformUserRequest::getUnoID(bdRenameCrossPlatformUserRequest *this)
{
  return ?getUnoID@bdRenameCrossPlatformUserRequest@@QEBA_KXZ(this);
}

/*
==============
bdRenameCrossPlatformUserRequest::restSerializeRequest
==============
*/

bool __fastcall bdRenameCrossPlatformUserRequest::restSerializeRequest(bdRenameCrossPlatformUserRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdRenameCrossPlatformUserRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdRenameCrossPlatformUserRequest::setAuthToken
==============
*/

bool __fastcall bdRenameCrossPlatformUserRequest::setAuthToken(bdRenameCrossPlatformUserRequest *this, const char *authToken)
{
  return ?setAuthToken@bdRenameCrossPlatformUserRequest@@QEAA_NPEBD@Z(this, authToken);
}

/*
==============
bdRenameCrossPlatformUserRequest::getAuthToken
==============
*/

const char *__fastcall bdRenameCrossPlatformUserRequest::getAuthToken(bdRenameCrossPlatformUserRequest *this)
{
  return ?getAuthToken@bdRenameCrossPlatformUserRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdRenameCrossPlatformUserRequest::bdRenameCrossPlatformUserRequest
==============
*/
void bdRenameCrossPlatformUserRequest::bdRenameCrossPlatformUserRequest(bdRenameCrossPlatformUserRequest *this)
{
  this->m_unoID = 0i64;
  this->__vftable = (bdRenameCrossPlatformUserRequest_vtbl *)&bdRenameCrossPlatformUserRequest::`vftable';
  memset_0(this->m_authToken, 0, 0x1AC1ui64);
}

/*
==============
bdRenameCrossPlatformUserRequest::getAuthToken
==============
*/
char *bdRenameCrossPlatformUserRequest::getAuthToken(bdRenameCrossPlatformUserRequest *this)
{
  return this->m_authToken;
}

/*
==============
bdRenameCrossPlatformUserRequest::getUnoID
==============
*/
unsigned __int64 bdRenameCrossPlatformUserRequest::getUnoID(bdRenameCrossPlatformUserRequest *this)
{
  return this->m_unoID;
}

/*
==============
bdRenameCrossPlatformUserRequest::getUsername
==============
*/
char *bdRenameCrossPlatformUserRequest::getUsername(bdRenameCrossPlatformUserRequest *this)
{
  return this->m_username;
}

/*
==============
bdRenameCrossPlatformUserRequest::restSerializeRequest
==============
*/
char bdRenameCrossPlatformUserRequest::restSerializeRequest(bdRenameCrossPlatformUserRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bdRESTHeaders *v5; 
  bool v6; 
  bdRESTHeaders *v7; 
  bdRESTURI *v8; 
  bdLobbyService *v9; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v11; 
  bdLobbyService *v12; 
  bdAuthInfo *v13; 
  int v15; 
  char *in; 
  bdRESTURI::bdDummyArg v17; 
  bdRESTURI::bdDummyArg v18; 
  bdRESTURI::bdDummyArg v19; 
  bdRESTURI::bdDummyArg v20; 
  char buf[6784]; 

  v6 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "uno") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)5264724) )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldContentType(v4, BD_MIME_JSON) )
    {
      v5 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v5, BD_MIME_JSON) && bdRESTRequestBuilder::setResourceName(builder, "UserResource", "renameUsername") )
        v6 = 1;
    }
  }
  bdSnprintf(buf, 0x1A80ui64, "Bearer  %s", this->m_authToken);
  if ( !v6 )
    return 0;
  v7 = bdRESTRequestBuilder::headers(builder);
  if ( !bdRESTHeaders::addField(v7, "Authorization", buf) )
    return 0;
  v8 = bdRESTRequestBuilder::uri(builder);
  v9 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v9);
  v8->m_path[0] = 0;
  v8->m_pathLength = 0;
  in = "/v1.0/users/{uno_id}/securedfields/";
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, AuthInfo->m_userID);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v17);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v18);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v19);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v20);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  if ( !bdRESTURI::isOK(v8) )
  {
    v15 = 1024;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v15);
    v8->m_path[0] = 0;
    v8->m_pathLength = 0;
  }
  if ( bdRESTURI::isOK(v8) && (v11 = bdRESTRequestBuilder::uri(builder), v12 = bdRESTRequestBuilder::lobbyService(builder), v13 = bdLobbyService::getAuthInfo(v12), bdRESTURI::addQueryParam(v11, "client", v13->m_clientID)) && (in = NULL, bdRESTRequestBuilder::getBodyJSONSerializer(builder, (bdJSONSerializer **)&in)) && bdJSONSerializer::writeBeginObject((bdJSONSerializer *)in) && bdJSONSerializer::writeString((bdJSONSerializer *)in, "userName", this->m_username) && bdJSONSerializer::writeEndObject((bdJSONSerializer *)in) )
    return 1;
  else
    return 0;
}

/*
==============
bdRenameCrossPlatformUserRequest::setAuthToken
==============
*/
char bdRenameCrossPlatformUserRequest::setAuthToken(bdRenameCrossPlatformUserRequest *this, const char *authToken)
{
  unsigned __int64 v4; 

  bdHandleAssert(authToken != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( authToken[v4] );
  if ( v4 > 0x1A80 )
    return 0;
  bdStrlcpy(this->m_authToken, authToken, 0x1A80ui64);
  return 1;
}

/*
==============
bdRenameCrossPlatformUserRequest::setUnoID
==============
*/
void bdRenameCrossPlatformUserRequest::setUnoID(bdRenameCrossPlatformUserRequest *this, unsigned __int64 unoID)
{
  this->m_unoID = unoID;
}

/*
==============
bdRenameCrossPlatformUserRequest::setUsername
==============
*/
char bdRenameCrossPlatformUserRequest::setUsername(bdRenameCrossPlatformUserRequest *this, const char *newUsername)
{
  unsigned __int64 v4; 

  bdHandleAssert(newUsername != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( newUsername[v4] );
  if ( v4 > 0x41 )
    return 0;
  bdStrlcpy(this->m_username, newUsername, 0x41ui64);
  return 1;
}

