/*
==============
bdAuthenticateCrossPlatformUserRequest::getEmail
==============
*/

const char *__fastcall bdAuthenticateCrossPlatformUserRequest::getEmail(bdAuthenticateCrossPlatformUserRequest *this)
{
  return ?getEmail@bdAuthenticateCrossPlatformUserRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::setEmail
==============
*/

bool __fastcall bdAuthenticateCrossPlatformUserRequest::setEmail(bdAuthenticateCrossPlatformUserRequest *this, const char *email)
{
  return ?setEmail@bdAuthenticateCrossPlatformUserRequest@@QEAA_NPEBD@Z(this, email);
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::restSerializeRequest
==============
*/

bool __fastcall bdAuthenticateCrossPlatformUserRequest::restSerializeRequest(bdAuthenticateCrossPlatformUserRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdAuthenticateCrossPlatformUserRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::bdAuthenticateCrossPlatformUserRequest
==============
*/

void __fastcall bdAuthenticateCrossPlatformUserRequest::bdAuthenticateCrossPlatformUserRequest(bdAuthenticateCrossPlatformUserRequest *this)
{
  ??0bdAuthenticateCrossPlatformUserRequest@@QEAA@XZ(this);
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::getPassword
==============
*/

const char *__fastcall bdAuthenticateCrossPlatformUserRequest::getPassword(bdAuthenticateCrossPlatformUserRequest *this)
{
  return ?getPassword@bdAuthenticateCrossPlatformUserRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::setPassword
==============
*/

bool __fastcall bdAuthenticateCrossPlatformUserRequest::setPassword(bdAuthenticateCrossPlatformUserRequest *this, const char *password)
{
  return ?setPassword@bdAuthenticateCrossPlatformUserRequest@@QEAA_NPEBD@Z(this, password);
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::bdAuthenticateCrossPlatformUserRequest
==============
*/
void bdAuthenticateCrossPlatformUserRequest::bdAuthenticateCrossPlatformUserRequest(bdAuthenticateCrossPlatformUserRequest *this)
{
  this->__vftable = (bdAuthenticateCrossPlatformUserRequest_vtbl *)&bdAuthenticateCrossPlatformUserRequest::`vftable';
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::getEmail
==============
*/
char *bdAuthenticateCrossPlatformUserRequest::getEmail(bdAuthenticateCrossPlatformUserRequest *this)
{
  return this->m_email;
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::getPassword
==============
*/
char *bdAuthenticateCrossPlatformUserRequest::getPassword(bdAuthenticateCrossPlatformUserRequest *this)
{
  return this->m_password;
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::restSerializeRequest
==============
*/
bool bdAuthenticateCrossPlatformUserRequest::restSerializeRequest(bdAuthenticateCrossPlatformUserRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bdRESTHeaders *v5; 
  bdRESTURI *v6; 
  bdRESTURI *v7; 
  bdLobbyService *v8; 
  bdAuthInfo *AuthInfo; 
  bool result; 
  bdJSONSerializer *serializer; 

  result = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "uno") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1347375956) )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldContentType(v4, BD_MIME_JSON) )
    {
      v5 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v5, BD_MIME_JSON) && bdRESTRequestBuilder::setResourceName(builder, "UserResource", "authenticateUser") )
      {
        v6 = bdRESTRequestBuilder::uri(builder);
        if ( bdRESTURI::formatPath(v6, "/v1.0/auth/") )
        {
          v7 = bdRESTRequestBuilder::uri(builder);
          v8 = bdRESTRequestBuilder::lobbyService(builder);
          AuthInfo = bdLobbyService::getAuthInfo(v8);
          if ( bdRESTURI::addQueryParam(v7, "client", AuthInfo->m_clientID) )
          {
            serializer = NULL;
            if ( bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer) && bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeString(serializer, "email", this->m_email) && bdJSONSerializer::writeString(serializer, "password", this->m_password) && bdJSONSerializer::writeString(serializer, "grantType", "password") && bdJSONSerializer::writeEndObject(serializer) )
              return 1;
          }
        }
      }
    }
  }
  return result;
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::setEmail
==============
*/
char bdAuthenticateCrossPlatformUserRequest::setEmail(bdAuthenticateCrossPlatformUserRequest *this, const char *email)
{
  unsigned __int64 v4; 

  bdHandleAssert(email != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( email[v4] );
  if ( v4 > 0x100 )
    return 0;
  bdStrlcpy(this->m_email, email, 0x100ui64);
  return 1;
}

/*
==============
bdAuthenticateCrossPlatformUserRequest::setPassword
==============
*/
char bdAuthenticateCrossPlatformUserRequest::setPassword(bdAuthenticateCrossPlatformUserRequest *this, const char *password)
{
  unsigned __int64 v4; 

  bdHandleAssert(password != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( password[v4] );
  if ( v4 > 0x65 )
    return 0;
  bdStrlcpy(this->m_password, password, 0x65ui64);
  return 1;
}

