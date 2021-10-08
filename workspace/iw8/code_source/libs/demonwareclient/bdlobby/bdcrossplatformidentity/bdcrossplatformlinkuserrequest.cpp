/*
==============
bdCrossPlatformLinkUserRequest::bdCrossPlatformLinkUserRequest
==============
*/

void __fastcall bdCrossPlatformLinkUserRequest::bdCrossPlatformLinkUserRequest(bdCrossPlatformLinkUserRequest *this)
{
  ??0bdCrossPlatformLinkUserRequest@@QEAA@XZ(this);
}

/*
==============
bdCrossPlatformLinkUserRequest::setUnoAccessToken
==============
*/

void __fastcall bdCrossPlatformLinkUserRequest::setUnoAccessToken(bdCrossPlatformLinkUserRequest *this, const char *accessToken)
{
  ?setUnoAccessToken@bdCrossPlatformLinkUserRequest@@QEAAXPEBD@Z(this, accessToken);
}

/*
==============
bdCrossPlatformLinkUserRequest::getUnoToken
==============
*/

const char *__fastcall bdCrossPlatformLinkUserRequest::getUnoToken(bdCrossPlatformLinkUserRequest *this)
{
  return ?getUnoToken@bdCrossPlatformLinkUserRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdCrossPlatformLinkUserRequest::setUmbrellaID
==============
*/

void __fastcall bdCrossPlatformLinkUserRequest::setUmbrellaID(bdCrossPlatformLinkUserRequest *this, unsigned __int64 umbrellaID)
{
  ?setUmbrellaID@bdCrossPlatformLinkUserRequest@@QEAAX_K@Z(this, umbrellaID);
}

/*
==============
bdCrossPlatformLinkUserRequest::setUnoToken
==============
*/

void __fastcall bdCrossPlatformLinkUserRequest::setUnoToken(bdCrossPlatformLinkUserRequest *this, const char *unoIDToken)
{
  ?setUnoToken@bdCrossPlatformLinkUserRequest@@QEAAXPEBD@Z(this, unoIDToken);
}

/*
==============
bdCrossPlatformLinkUserRequest::restSerializeRequest
==============
*/

bool __fastcall bdCrossPlatformLinkUserRequest::restSerializeRequest(bdCrossPlatformLinkUserRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdCrossPlatformLinkUserRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdCrossPlatformLinkUserRequest::setUnoRefreshToken
==============
*/

void __fastcall bdCrossPlatformLinkUserRequest::setUnoRefreshToken(bdCrossPlatformLinkUserRequest *this, const char *refreshToken)
{
  ?setUnoRefreshToken@bdCrossPlatformLinkUserRequest@@QEAAXPEBD@Z(this, refreshToken);
}

/*
==============
bdCrossPlatformLinkUserRequest::setAuthToken
==============
*/

bool __fastcall bdCrossPlatformLinkUserRequest::setAuthToken(bdCrossPlatformLinkUserRequest *this, const char *token)
{
  return ?setAuthToken@bdCrossPlatformLinkUserRequest@@QEAA_NPEBD@Z(this, token);
}

/*
==============
bdCrossPlatformLinkUserRequest::bdCrossPlatformLinkUserRequest
==============
*/
void bdCrossPlatformLinkUserRequest::bdCrossPlatformLinkUserRequest(bdCrossPlatformLinkUserRequest *this)
{
  this->m_umbrellaID = 0i64;
  this->__vftable = (bdCrossPlatformLinkUserRequest_vtbl *)&bdCrossPlatformLinkUserRequest::`vftable';
  memset_0(this->m_accessToken, 0, 0x3500ui64);
  memset_0(this->m_authToken, 0, sizeof(this->m_authToken));
  memset_0(this->m_unoIDToken, 0, sizeof(this->m_unoIDToken));
}

/*
==============
bdCrossPlatformLinkUserRequest::getUnoToken
==============
*/
char *bdCrossPlatformLinkUserRequest::getUnoToken(bdCrossPlatformLinkUserRequest *this)
{
  return this->m_unoIDToken;
}

/*
==============
bdCrossPlatformLinkUserRequest::restSerializeRequest
==============
*/
char bdCrossPlatformLinkUserRequest::restSerializeRequest(bdCrossPlatformLinkUserRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bdRESTHeaders *v5; 
  bool v6; 
  bdRESTHeaders *v7; 
  bdRESTURI *v8; 
  bdRESTURI *v9; 
  bdLobbyService *v10; 
  bdAuthInfo *AuthInfo; 
  int v13; 
  bdRESTURI::bdDummyArg v14; 
  bdRESTURI::bdDummyArg v15; 
  bdRESTURI::bdDummyArg v16; 
  bdRESTURI::bdDummyArg v17; 
  char *in; 
  bdJSONSerializer *serializer; 
  char buf[6784]; 

  v6 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "umbrella") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)5264724) )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldContentType(v4, BD_MIME_JSON) )
    {
      v5 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v5, BD_MIME_JSON) && bdRESTRequestBuilder::setResourceName(builder, "UserResource", "linkUser") )
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
  in = "/v1.0/users/crossplatform/{m_umbrellaID}/";
  v8->m_path[0] = 0;
  v8->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, this->m_umbrellaID);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v14);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v15);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v16);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  bdRESTURI::operator<<(v8, &v17);
  bdRESTURI::appendNextBlock(v8, (const char **)&in);
  if ( !bdRESTURI::isOK(v8) )
  {
    v13 = 1024;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v13);
    v8->m_path[0] = 0;
    v8->m_pathLength = 0;
  }
  if ( bdRESTURI::isOK(v8) && (v9 = bdRESTRequestBuilder::uri(builder), v10 = bdRESTRequestBuilder::lobbyService(builder), AuthInfo = bdLobbyService::getAuthInfo(v10), bdRESTURI::addQueryParam(v9, "client", AuthInfo->m_clientID)) && (serializer = NULL, bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer)) && bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeString(serializer, "unoIDToken", this->m_unoIDToken) && bdJSONSerializer::writeString(serializer, "accessToken", this->m_accessToken) && bdJSONSerializer::writeString(serializer, "refreshToken", this->m_refreshToken) && bdJSONSerializer::writeEndObject(serializer) )
    return 1;
  else
    return 0;
}

/*
==============
bdCrossPlatformLinkUserRequest::setAuthToken
==============
*/
char bdCrossPlatformLinkUserRequest::setAuthToken(bdCrossPlatformLinkUserRequest *this, const char *token)
{
  unsigned __int64 v4; 

  bdHandleAssert(token != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( token[v4] );
  if ( v4 > 0x1A80 )
    return 0;
  memcpy_0(this->m_authToken, token, sizeof(this->m_authToken));
  return 1;
}

/*
==============
bdCrossPlatformLinkUserRequest::setUmbrellaID
==============
*/
void bdCrossPlatformLinkUserRequest::setUmbrellaID(bdCrossPlatformLinkUserRequest *this, unsigned __int64 umbrellaID)
{
  this->m_umbrellaID = umbrellaID;
}

/*
==============
bdCrossPlatformLinkUserRequest::setUnoAccessToken
==============
*/
void bdCrossPlatformLinkUserRequest::setUnoAccessToken(bdCrossPlatformLinkUserRequest *this, const char *accessToken)
{
  bdStrlcpy(this->m_accessToken, accessToken, 0x1A80ui64);
}

/*
==============
bdCrossPlatformLinkUserRequest::setUnoRefreshToken
==============
*/
void bdCrossPlatformLinkUserRequest::setUnoRefreshToken(bdCrossPlatformLinkUserRequest *this, const char *refreshToken)
{
  bdStrlcpy(this->m_refreshToken, refreshToken, 0x1A80ui64);
}

/*
==============
bdCrossPlatformLinkUserRequest::setUnoToken
==============
*/
void bdCrossPlatformLinkUserRequest::setUnoToken(bdCrossPlatformLinkUserRequest *this, const char *unoIDToken)
{
  bdStrlcpy(this->m_unoIDToken, unoIDToken, 0x400ui64);
}

