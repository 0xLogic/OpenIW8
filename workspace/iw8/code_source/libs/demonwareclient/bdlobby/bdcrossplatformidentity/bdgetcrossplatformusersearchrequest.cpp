/*
==============
bdGetCrossPlatformUserSearchRequest::getIsSubstringSearch
==============
*/

bool __fastcall bdGetCrossPlatformUserSearchRequest::getIsSubstringSearch(bdGetCrossPlatformUserSearchRequest *this)
{
  return ?getIsSubstringSearch@bdGetCrossPlatformUserSearchRequest@@QEBA_NXZ(this);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setClient
==============
*/

void __fastcall bdGetCrossPlatformUserSearchRequest::setClient(bdGetCrossPlatformUserSearchRequest *this, const char *client)
{
  ?setClient@bdGetCrossPlatformUserSearchRequest@@QEAAXPEBD@Z(this, client);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::getProvider
==============
*/

const char *__fastcall bdGetCrossPlatformUserSearchRequest::getProvider(bdGetCrossPlatformUserSearchRequest *this)
{
  return ?getProvider@bdGetCrossPlatformUserSearchRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::getAuthToken
==============
*/

const char *__fastcall bdGetCrossPlatformUserSearchRequest::getAuthToken(bdGetCrossPlatformUserSearchRequest *this)
{
  return ?getAuthToken@bdGetCrossPlatformUserSearchRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setUserName
==============
*/

void __fastcall bdGetCrossPlatformUserSearchRequest::setUserName(bdGetCrossPlatformUserSearchRequest *this, const char *username)
{
  ?setUserName@bdGetCrossPlatformUserSearchRequest@@QEAAXPEBD@Z(this, username);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::getClient
==============
*/

const char *__fastcall bdGetCrossPlatformUserSearchRequest::getClient(bdGetCrossPlatformUserSearchRequest *this)
{
  return ?getClient@bdGetCrossPlatformUserSearchRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setAuthToken
==============
*/

void __fastcall bdGetCrossPlatformUserSearchRequest::setAuthToken(bdGetCrossPlatformUserSearchRequest *this, const char *authToken)
{
  ?setAuthToken@bdGetCrossPlatformUserSearchRequest@@QEAAXPEBD@Z(this, authToken);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setProvider
==============
*/

void __fastcall bdGetCrossPlatformUserSearchRequest::setProvider(bdGetCrossPlatformUserSearchRequest *this, const char *provider)
{
  ?setProvider@bdGetCrossPlatformUserSearchRequest@@QEAAXPEBD@Z(this, provider);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::getUserName
==============
*/

const char *__fastcall bdGetCrossPlatformUserSearchRequest::getUserName(bdGetCrossPlatformUserSearchRequest *this)
{
  return ?getUserName@bdGetCrossPlatformUserSearchRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::bdGetCrossPlatformUserSearchRequest
==============
*/

void __fastcall bdGetCrossPlatformUserSearchRequest::bdGetCrossPlatformUserSearchRequest(bdGetCrossPlatformUserSearchRequest *this)
{
  ??0bdGetCrossPlatformUserSearchRequest@@QEAA@XZ(this);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::restSerializeRequest
==============
*/

bool __fastcall bdGetCrossPlatformUserSearchRequest::restSerializeRequest(bdGetCrossPlatformUserSearchRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdGetCrossPlatformUserSearchRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setIsSubstringSearch
==============
*/

void __fastcall bdGetCrossPlatformUserSearchRequest::setIsSubstringSearch(bdGetCrossPlatformUserSearchRequest *this, bool isSubstring)
{
  ?setIsSubstringSearch@bdGetCrossPlatformUserSearchRequest@@QEAAX_N@Z(this, isSubstring);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::bdGetCrossPlatformUserSearchRequest
==============
*/
void bdGetCrossPlatformUserSearchRequest::bdGetCrossPlatformUserSearchRequest(bdGetCrossPlatformUserSearchRequest *this)
{
  this->m_isSubstringSearch = 0;
  this->__vftable = (bdGetCrossPlatformUserSearchRequest_vtbl *)&bdGetCrossPlatformUserSearchRequest::`vftable';
  memset_0(this->m_client, 0, 0x1BABui64);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::getAuthToken
==============
*/
char *bdGetCrossPlatformUserSearchRequest::getAuthToken(bdGetCrossPlatformUserSearchRequest *this)
{
  return this->m_authToken;
}

/*
==============
bdGetCrossPlatformUserSearchRequest::getClient
==============
*/
char *bdGetCrossPlatformUserSearchRequest::getClient(bdGetCrossPlatformUserSearchRequest *this)
{
  return this->m_client;
}

/*
==============
bdGetCrossPlatformUserSearchRequest::getIsSubstringSearch
==============
*/
_BOOL8 bdGetCrossPlatformUserSearchRequest::getIsSubstringSearch(bdGetCrossPlatformUserSearchRequest *this)
{
  return this->m_isSubstringSearch;
}

/*
==============
bdGetCrossPlatformUserSearchRequest::getProvider
==============
*/
char *bdGetCrossPlatformUserSearchRequest::getProvider(bdGetCrossPlatformUserSearchRequest *this)
{
  return this->m_provider;
}

/*
==============
bdGetCrossPlatformUserSearchRequest::getUserName
==============
*/
char *bdGetCrossPlatformUserSearchRequest::getUserName(bdGetCrossPlatformUserSearchRequest *this)
{
  return this->m_username;
}

/*
==============
bdGetCrossPlatformUserSearchRequest::restSerializeRequest
==============
*/
bool bdGetCrossPlatformUserSearchRequest::restSerializeRequest(bdGetCrossPlatformUserSearchRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bool v5; 
  bdRESTHeaders *v6; 
  bdRESTURI *v7; 
  bdRESTURI *v8; 
  bdRESTURI *v9; 
  bdRESTURI *v10; 
  bdRESTURI *v12; 
  bdRESTURI *v13; 
  char value[256]; 
  char buf[6784]; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "umbrella") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldAccept(v4, BD_MIME_JSON) && bdRESTRequestBuilder::setResourceName(builder, "UserResource", "usernamesearch") )
      v5 = 1;
  }
  bdSnprintf(buf, 0x1A80ui64, "Bearer  %s", this->m_authToken);
  if ( !v5 )
    return 0;
  v6 = bdRESTRequestBuilder::headers(builder);
  if ( !bdRESTHeaders::addField(v6, "Authorization", buf) )
    return 0;
  v7 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::formatPath(v7, "/v1.0/users/") )
    return 0;
  v8 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v8, "client", this->m_client) )
    return 0;
  v9 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v9, "searchType", "username") )
    return 0;
  if ( this->m_isSubstringSearch )
  {
    bdSnprintf(value, 0x100ui64, "%s%%", this->m_username);
    v10 = bdRESTRequestBuilder::uri(builder);
    if ( !bdRESTURI::addQueryParam(v10, "username", value) )
      return 0;
  }
  else
  {
    v12 = bdRESTRequestBuilder::uri(builder);
    if ( !bdRESTURI::addQueryParam(v12, "username", this->m_username) )
      return 0;
  }
  if ( !this->m_provider[0] )
    return 1;
  v13 = bdRESTRequestBuilder::uri(builder);
  return bdRESTURI::addQueryParam(v13, "provider", this->m_provider);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setAuthToken
==============
*/
void bdGetCrossPlatformUserSearchRequest::setAuthToken(bdGetCrossPlatformUserSearchRequest *this, const char *authToken)
{
  bdStrlcpy(this->m_authToken, authToken, 0x1A80ui64);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setClient
==============
*/
void bdGetCrossPlatformUserSearchRequest::setClient(bdGetCrossPlatformUserSearchRequest *this, const char *client)
{
  bdStrlcpy(this->m_client, client, 0x100ui64);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setIsSubstringSearch
==============
*/
void bdGetCrossPlatformUserSearchRequest::setIsSubstringSearch(bdGetCrossPlatformUserSearchRequest *this, bool isSubstring)
{
  this->m_isSubstringSearch = isSubstring;
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setProvider
==============
*/
void bdGetCrossPlatformUserSearchRequest::setProvider(bdGetCrossPlatformUserSearchRequest *this, const char *provider)
{
  bdStrlcpy(this->m_provider, provider, 0xBui64);
}

/*
==============
bdGetCrossPlatformUserSearchRequest::setUserName
==============
*/
void bdGetCrossPlatformUserSearchRequest::setUserName(bdGetCrossPlatformUserSearchRequest *this, const char *username)
{
  bdStrlcpy(this->m_username, username, 0x100ui64);
}

