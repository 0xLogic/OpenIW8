/*
==============
bdFetchRegulationsRequest::restSerializeRequest
==============
*/

bool __fastcall bdFetchRegulationsRequest::restSerializeRequest(bdFetchRegulationsRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdFetchRegulationsRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdFetchRegulationsRequest::bdFetchRegulationsRequest
==============
*/

void __fastcall bdFetchRegulationsRequest::bdFetchRegulationsRequest(bdFetchRegulationsRequest *this, const char *authToken)
{
  ??0bdFetchRegulationsRequest@@QEAA@PEBD@Z(this, authToken);
}

/*
==============
bdFetchRegulationsRequest::bdFetchRegulationsRequest
==============
*/
void bdFetchRegulationsRequest::bdFetchRegulationsRequest(bdFetchRegulationsRequest *this, const char *authToken)
{
  this->__vftable = (bdFetchRegulationsRequest_vtbl *)&bdFetchRegulationsRequest::`vftable';
  bdHandleAssert(authToken != NULL, "authToken != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdregulations\\bdfetchregulationsrequest.cpp", "bdFetchRegulationsRequest::bdFetchRegulationsRequest", 0xEu, "Must instantiate bdFetchRegulationsRequest with a valid authorization token.", -2i64);
  bdStrlcpy(this->m_authToken, authToken, 0x1A80ui64);
}

/*
==============
bdFetchRegulationsRequest::restSerializeRequest
==============
*/
bool bdFetchRegulationsRequest::restSerializeRequest(bdFetchRegulationsRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bool v5; 
  bdRESTHeaders *v6; 
  bdRESTURI *v7; 
  bdRESTURI *v8; 
  bdLobbyService *v9; 
  bdAuthInfo *AuthInfo; 
  bool result; 
  char buf[6784]; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "umbrella") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldAccept(v4, BD_MIME_JSON) )
      v5 = 1;
  }
  bdSnprintf(buf, 0x1A80ui64, "Bearer  %s", this->m_authToken);
  result = 0;
  if ( v5 )
  {
    v6 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::addField(v6, "Authorization", buf) && bdRESTRequestBuilder::setResourceName(builder, "Regulations", "fetchRegulations") )
    {
      v7 = bdRESTRequestBuilder::uri(builder);
      if ( bdRESTURI::formatPath(v7, "/v1.0/regulations/") )
      {
        v8 = bdRESTRequestBuilder::uri(builder);
        v9 = bdRESTRequestBuilder::lobbyService(builder);
        AuthInfo = bdLobbyService::getAuthInfo(v9);
        if ( bdRESTURI::addQueryParam(v8, "client", AuthInfo->m_clientID) )
          return 1;
      }
    }
  }
  return result;
}

