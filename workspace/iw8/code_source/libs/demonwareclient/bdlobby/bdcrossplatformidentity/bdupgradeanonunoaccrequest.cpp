/*
==============
bdUpgradeAnonUnoAccRequest::getEmail
==============
*/

const char *__fastcall bdUpgradeAnonUnoAccRequest::getEmail(bdUpgradeAnonUnoAccRequest *this)
{
  return ?getEmail@bdUpgradeAnonUnoAccRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdUpgradeAnonUnoAccRequest::restSerializeRequest
==============
*/

bool __fastcall bdUpgradeAnonUnoAccRequest::restSerializeRequest(bdUpgradeAnonUnoAccRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdUpgradeAnonUnoAccRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setAuthToken
==============
*/

void __fastcall bdUpgradeAnonUnoAccRequest::setAuthToken(bdUpgradeAnonUnoAccRequest *this, const char *authToken)
{
  ?setAuthToken@bdUpgradeAnonUnoAccRequest@@QEAAXPEBD@Z(this, authToken);
}

/*
==============
bdUpgradeAnonUnoAccRequest::getAuthToken
==============
*/

const char *__fastcall bdUpgradeAnonUnoAccRequest::getAuthToken(bdUpgradeAnonUnoAccRequest *this)
{
  return ?getAuthToken@bdUpgradeAnonUnoAccRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setAccountInfo
==============
*/

void __fastcall bdUpgradeAnonUnoAccRequest::setAccountInfo(bdUpgradeAnonUnoAccRequest *this, const bdUnoAccountInfo *accountInfo)
{
  ?setAccountInfo@bdUpgradeAnonUnoAccRequest@@QEAAXAEBVbdUnoAccountInfo@@@Z(this, accountInfo);
}

/*
==============
bdUpgradeAnonUnoAccRequest::getUnoID
==============
*/

unsigned __int64 __fastcall bdUpgradeAnonUnoAccRequest::getUnoID(bdUpgradeAnonUnoAccRequest *this)
{
  return ?getUnoID@bdUpgradeAnonUnoAccRequest@@QEBA_KXZ(this);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setEmail
==============
*/

void __fastcall bdUpgradeAnonUnoAccRequest::setEmail(bdUpgradeAnonUnoAccRequest *this, const char *email)
{
  ?setEmail@bdUpgradeAnonUnoAccRequest@@QEAAXPEBD@Z(this, email);
}

/*
==============
bdUpgradeAnonUnoAccRequest::bdUpgradeAnonUnoAccRequest
==============
*/

void __fastcall bdUpgradeAnonUnoAccRequest::bdUpgradeAnonUnoAccRequest(bdUpgradeAnonUnoAccRequest *this)
{
  ??0bdUpgradeAnonUnoAccRequest@@QEAA@XZ(this);
}

/*
==============
bdUpgradeAnonUnoAccRequest::getClient
==============
*/

const char *__fastcall bdUpgradeAnonUnoAccRequest::getClient(bdUpgradeAnonUnoAccRequest *this)
{
  return ?getClient@bdUpgradeAnonUnoAccRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setUnoID
==============
*/

void __fastcall bdUpgradeAnonUnoAccRequest::setUnoID(bdUpgradeAnonUnoAccRequest *this, const unsigned __int64 unoID)
{
  ?setUnoID@bdUpgradeAnonUnoAccRequest@@QEAAX_K@Z(this, unoID);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setClient
==============
*/

void __fastcall bdUpgradeAnonUnoAccRequest::setClient(bdUpgradeAnonUnoAccRequest *this, const char *client)
{
  ?setClient@bdUpgradeAnonUnoAccRequest@@QEAAXPEBD@Z(this, client);
}

/*
==============
bdUpgradeAnonUnoAccRequest::bdUpgradeAnonUnoAccRequest
==============
*/
void bdUpgradeAnonUnoAccRequest::bdUpgradeAnonUnoAccRequest(bdUpgradeAnonUnoAccRequest *this)
{
  this->__vftable = (bdUpgradeAnonUnoAccRequest_vtbl *)&bdUpgradeAnonUnoAccRequest::`vftable';
  this->m_unoID = 0i64;
  bdUnoAccountInfo::bdUnoAccountInfo(&this->m_accountInfo);
  memset_0(this->m_client, 0, 0x1BA0ui64);
}

/*
==============
bdUpgradeAnonUnoAccRequest::getAuthToken
==============
*/
char *bdUpgradeAnonUnoAccRequest::getAuthToken(bdUpgradeAnonUnoAccRequest *this)
{
  return this->m_authToken;
}

/*
==============
bdUpgradeAnonUnoAccRequest::getClient
==============
*/
char *bdUpgradeAnonUnoAccRequest::getClient(bdUpgradeAnonUnoAccRequest *this)
{
  return this->m_client;
}

/*
==============
bdUpgradeAnonUnoAccRequest::getEmail
==============
*/
char *bdUpgradeAnonUnoAccRequest::getEmail(bdUpgradeAnonUnoAccRequest *this)
{
  return this->m_email;
}

/*
==============
bdUpgradeAnonUnoAccRequest::getUnoID
==============
*/
unsigned __int64 bdUpgradeAnonUnoAccRequest::getUnoID(bdUpgradeAnonUnoAccRequest *this)
{
  return this->m_unoID;
}

/*
==============
bdUpgradeAnonUnoAccRequest::restSerializeRequest
==============
*/
bool bdUpgradeAnonUnoAccRequest::restSerializeRequest(bdUpgradeAnonUnoAccRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bdRESTHeaders *v5; 
  bool v6; 
  bdRESTHeaders *v7; 
  bool v8; 
  bdRESTURI *v9; 
  bdRESTURI *v10; 
  bdLobbyService *v11; 
  bdAuthInfo *AuthInfo; 
  bool v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  bool v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  bdJSONSerializer *serializer; 
  char formatString[512]; 
  char buf[6784]; 

  v6 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "uno") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)5264724) )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldContentType(v4, BD_MIME_JSON) )
    {
      v5 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v5, BD_MIME_JSON) && bdRESTRequestBuilder::setResourceName(builder, "UnoRes", "updatesecuredfields") )
        v6 = 1;
    }
  }
  bdSnprintf(buf, 0x1A80ui64, "Bearer %s", this->m_authToken);
  v8 = 0;
  if ( v6 )
  {
    v7 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::addField(v7, "Authorization", buf) )
      v8 = 1;
  }
  bdSnprintf(formatString, 0x200ui64, "/v1.0/users/%llu/securedfields/", this->m_unoID);
  if ( !v8 )
    return 0;
  v9 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::formatPath(v9, formatString) )
    return 0;
  v10 = bdRESTRequestBuilder::uri(builder);
  v11 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v11);
  if ( !bdRESTURI::addQueryParam(v10, "client", AuthInfo->m_clientID) )
    return 0;
  serializer = NULL;
  v13 = bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer) && bdJSONSerializer::writeBeginObject(serializer);
  bdHandleAssert(this->m_accountInfo.m_username != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v14 = -1i64;
  v15 = -1i64;
  do
    ++v15;
  while ( this->m_accountInfo.m_username[v15] );
  if ( v15 )
    v13 = v13 && bdJSONSerializer::writeString(serializer, "userName", this->m_accountInfo.m_username);
  bdHandleAssert(this->m_accountInfo.m_email != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v16 = -1i64;
  do
    ++v16;
  while ( this->m_accountInfo.m_email[v16] );
  v17 = v13 && (!v16 || bdJSONSerializer::writeString(serializer, "email", this->m_accountInfo.m_email)) && bdJSONSerializer::writeString(serializer, "accountType", "full");
  bdHandleAssert(this->m_accountInfo.m_password != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v18 = -1i64;
  do
    ++v18;
  while ( this->m_accountInfo.m_password[v18] );
  if ( v18 )
    v17 = v17 && bdJSONSerializer::writeString(serializer, "password", this->m_accountInfo.m_password);
  bdHandleAssert(this->m_accountInfo.m_firstName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v19 = -1i64;
  do
    ++v19;
  while ( this->m_accountInfo.m_firstName[v19] );
  if ( v19 )
    v17 = v17 && bdJSONSerializer::writeString(serializer, "firstName", this->m_accountInfo.m_firstName);
  bdHandleAssert(this->m_accountInfo.m_lastName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v20 = -1i64;
  do
    ++v20;
  while ( this->m_accountInfo.m_lastName[v20] );
  if ( v20 )
    v17 = v17 && bdJSONSerializer::writeString(serializer, "lastName", this->m_accountInfo.m_lastName);
  bdHandleAssert(this->m_accountInfo.m_dateOfBirth != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v21 = -1i64;
  do
    ++v21;
  while ( this->m_accountInfo.m_dateOfBirth[v21] );
  if ( v21 )
    v17 = v17 && bdJSONSerializer::writeString(serializer, "dateOfBirth", this->m_accountInfo.m_dateOfBirth);
  bdHandleAssert(this->m_accountInfo.m_country != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v14;
  while ( this->m_accountInfo.m_country[v14] );
  return v17 && (!v14 || bdJSONSerializer::writeString(serializer, "country", this->m_accountInfo.m_country)) && bdJSONSerializer::writeBoolean(serializer, "subscriptionOptIn", this->m_accountInfo.m_subscriptionOptIn) && bdJSONSerializer::writeEndObject(serializer);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setAccountInfo
==============
*/
void bdUpgradeAnonUnoAccRequest::setAccountInfo(bdUpgradeAnonUnoAccRequest *this, const bdUnoAccountInfo *accountInfo)
{
  bdUnoAccountInfo::operator=(&this->m_accountInfo, accountInfo);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setAuthToken
==============
*/
void bdUpgradeAnonUnoAccRequest::setAuthToken(bdUpgradeAnonUnoAccRequest *this, const char *authToken)
{
  bdStrlcpy(this->m_authToken, authToken, 0x1A80ui64);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setClient
==============
*/
void bdUpgradeAnonUnoAccRequest::setClient(bdUpgradeAnonUnoAccRequest *this, const char *client)
{
  bdStrlcpy(this->m_client, client, 0x20ui64);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setEmail
==============
*/
void bdUpgradeAnonUnoAccRequest::setEmail(bdUpgradeAnonUnoAccRequest *this, const char *email)
{
  bdStrlcpy(this->m_email, email, 0x100ui64);
}

/*
==============
bdUpgradeAnonUnoAccRequest::setUnoID
==============
*/
void bdUpgradeAnonUnoAccRequest::setUnoID(bdUpgradeAnonUnoAccRequest *this, const unsigned __int64 unoID)
{
  this->m_unoID = unoID;
}

