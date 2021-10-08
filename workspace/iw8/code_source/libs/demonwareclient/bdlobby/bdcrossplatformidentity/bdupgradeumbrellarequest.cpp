/*
==============
bdUpgradeUmbrellaRequest::setUnoID
==============
*/

void __fastcall bdUpgradeUmbrellaRequest::setUnoID(bdUpgradeUmbrellaRequest *this, const unsigned __int64 unoID)
{
  ?setUnoID@bdUpgradeUmbrellaRequest@@QEAAX_K@Z(this, unoID);
}

/*
==============
bdUpgradeUmbrellaRequest::setRefreshToken
==============
*/

bool __fastcall bdUpgradeUmbrellaRequest::setRefreshToken(bdUpgradeUmbrellaRequest *this, const char *refreshToken)
{
  return ?setRefreshToken@bdUpgradeUmbrellaRequest@@QEAA_NPEBD@Z(this, refreshToken);
}

/*
==============
bdUpgradeUmbrellaRequest::setUnoToken
==============
*/

bool __fastcall bdUpgradeUmbrellaRequest::setUnoToken(bdUpgradeUmbrellaRequest *this, const char *unoToken)
{
  return ?setUnoToken@bdUpgradeUmbrellaRequest@@QEAA_NPEBD@Z(this, unoToken);
}

/*
==============
bdUpgradeUmbrellaRequest::bdUpgradeUmbrellaRequest
==============
*/

void __fastcall bdUpgradeUmbrellaRequest::bdUpgradeUmbrellaRequest(bdUpgradeUmbrellaRequest *this)
{
  ??0bdUpgradeUmbrellaRequest@@QEAA@XZ(this);
}

/*
==============
bdUpgradeUmbrellaRequest::getUnoToken
==============
*/

const char *__fastcall bdUpgradeUmbrellaRequest::getUnoToken(bdUpgradeUmbrellaRequest *this)
{
  return ?getUnoToken@bdUpgradeUmbrellaRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdUpgradeUmbrellaRequest::getUnoID
==============
*/

unsigned __int64 __fastcall bdUpgradeUmbrellaRequest::getUnoID(bdUpgradeUmbrellaRequest *this)
{
  return ?getUnoID@bdUpgradeUmbrellaRequest@@QEBA_KXZ(this);
}

/*
==============
bdUpgradeUmbrellaRequest::restSerializeRequest
==============
*/

bool __fastcall bdUpgradeUmbrellaRequest::restSerializeRequest(bdUpgradeUmbrellaRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdUpgradeUmbrellaRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdUpgradeUmbrellaRequest::bdUpgradeUmbrellaRequest
==============
*/
void bdUpgradeUmbrellaRequest::bdUpgradeUmbrellaRequest(bdUpgradeUmbrellaRequest *this)
{
  this->m_unoID = 0i64;
  this->__vftable = (bdUpgradeUmbrellaRequest_vtbl *)&bdUpgradeUmbrellaRequest::`vftable';
  memset_0(this->m_unoToken, 0, sizeof(this->m_unoToken));
}

/*
==============
bdUpgradeUmbrellaRequest::getUnoID
==============
*/
unsigned __int64 bdUpgradeUmbrellaRequest::getUnoID(bdUpgradeUmbrellaRequest *this)
{
  return this->m_unoID;
}

/*
==============
bdUpgradeUmbrellaRequest::getUnoToken
==============
*/
char *bdUpgradeUmbrellaRequest::getUnoToken(bdUpgradeUmbrellaRequest *this)
{
  return this->m_unoToken;
}

/*
==============
bdUpgradeUmbrellaRequest::restSerializeRequest
==============
*/
bool bdUpgradeUmbrellaRequest::restSerializeRequest(bdUpgradeUmbrellaRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bdRESTHeaders *v5; 
  bool v6; 
  bdRESTURI *v7; 
  bdRESTURI *v8; 
  bdLobbyService *v9; 
  bdAuthInfo *AuthInfo; 
  bool result; 
  bdJSONSerializer *serializer; 
  char buf[512]; 

  v6 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "umbrella") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1347375956) )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldContentType(v4, BD_MIME_JSON) )
    {
      v5 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v5, BD_MIME_JSON) && bdRESTRequestBuilder::setResourceName(builder, "Umbrella", "updateUmbrellaAccount") )
        v6 = 1;
    }
  }
  bdSnprintf(buf, 0x200ui64, "/v1.0/tokens/uno/");
  result = 0;
  if ( v6 )
  {
    v7 = bdRESTRequestBuilder::uri(builder);
    if ( bdRESTURI::formatPath(v7, buf) )
    {
      v8 = bdRESTRequestBuilder::uri(builder);
      v9 = bdRESTRequestBuilder::lobbyService(builder);
      AuthInfo = bdLobbyService::getAuthInfo(v9);
      if ( bdRESTURI::addQueryParam(v8, "client", AuthInfo->m_clientID) )
      {
        serializer = NULL;
        if ( bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer) && bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeUInt64(serializer, "accountID", this->m_unoID, 0) && bdJSONSerializer::writeBeginObject(serializer, "tokens") && bdJSONSerializer::writeString(serializer, "accessToken", this->m_unoToken) && bdJSONSerializer::writeString(serializer, "refreshToken", this->m_refreshToken) && bdJSONSerializer::writeEndObject(serializer) && bdJSONSerializer::writeEndObject(serializer) )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
bdUpgradeUmbrellaRequest::setRefreshToken
==============
*/
char bdUpgradeUmbrellaRequest::setRefreshToken(bdUpgradeUmbrellaRequest *this, const char *refreshToken)
{
  unsigned __int64 v4; 

  bdHandleAssert(refreshToken != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( refreshToken[v4] );
  if ( v4 > 0x1A80 )
    return 0;
  bdStrlcpy(this->m_refreshToken, refreshToken, 0x1A80ui64);
  return 1;
}

/*
==============
bdUpgradeUmbrellaRequest::setUnoID
==============
*/
void bdUpgradeUmbrellaRequest::setUnoID(bdUpgradeUmbrellaRequest *this, const unsigned __int64 unoID)
{
  this->m_unoID = unoID;
}

/*
==============
bdUpgradeUmbrellaRequest::setUnoToken
==============
*/
char bdUpgradeUmbrellaRequest::setUnoToken(bdUpgradeUmbrellaRequest *this, const char *unoToken)
{
  unsigned __int64 v4; 

  bdHandleAssert(unoToken != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( unoToken[v4] );
  if ( v4 > 0x400 )
    return 0;
  bdStrlcpy(this->m_unoToken, unoToken, 0x400ui64);
  return 1;
}

