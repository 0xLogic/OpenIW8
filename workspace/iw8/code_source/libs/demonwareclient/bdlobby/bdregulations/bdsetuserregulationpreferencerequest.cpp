/*
==============
bdSetUserRegulationPreferenceRequest::bdSetUserRegulationPreferenceRequest
==============
*/

void __fastcall bdSetUserRegulationPreferenceRequest::bdSetUserRegulationPreferenceRequest(bdSetUserRegulationPreferenceRequest *this, const bdUserAccountID *userAccount, const bdRegulationPreference *regulationPreference, const char *authToken)
{
  ??0bdSetUserRegulationPreferenceRequest@@QEAA@AEBVbdUserAccountID@@AEBVbdRegulationPreference@@PEBD@Z(this, userAccount, regulationPreference, authToken);
}

/*
==============
bdSetUserRegulationPreferenceRequest::restSerializeRequest
==============
*/

bool __fastcall bdSetUserRegulationPreferenceRequest::restSerializeRequest(bdSetUserRegulationPreferenceRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdSetUserRegulationPreferenceRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdSetUserRegulationPreferenceRequest::bdSetUserRegulationPreferenceRequest
==============
*/
void bdSetUserRegulationPreferenceRequest::bdSetUserRegulationPreferenceRequest(bdSetUserRegulationPreferenceRequest *this, const bdUserAccountID *userAccount, const bdRegulationPreference *regulationPreference, const char *authToken)
{
  _RBX = regulationPreference;
  _RSI = this;
  this->__vftable = (bdSetUserRegulationPreferenceRequest_vtbl *)&bdSetUserRegulationPreferenceRequest::`vftable';
  bdUserAccountID::bdUserAccountID(&this->m_userAccount, userAccount);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsi+50h], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rsi+70h], ymm1
  }
  bdHandleAssert(authToken != NULL, "authToken != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdregulations\\bdsetuserregulationpreferencerequest.cpp", "bdSetUserRegulationPreferenceRequest::bdSetUserRegulationPreferenceRequest", 0x12u, "Must instantiate bdSetUserRegulationPreferenceRequest with a valid authorization token.", -2i64);
  bdStrlcpy(_RSI->m_authToken, authToken, 0x1A80ui64);
}

/*
==============
bdSetUserRegulationPreferenceRequest::restSerializeRequest
==============
*/
bool bdSetUserRegulationPreferenceRequest::restSerializeRequest(bdSetUserRegulationPreferenceRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bdRESTHeaders *v5; 
  bool v6; 
  bdRESTHeaders *v7; 
  bool v8; 
  unsigned __int64 UserID; 
  const char *AccountType; 
  bdRESTURI *v11; 
  bdRESTURI *v12; 
  bdLobbyService *v13; 
  bdAuthInfo *AuthInfo; 
  bool result; 
  bdJSONSerializer *serializer; 
  char formatString[208]; 
  char buf[6784]; 

  v6 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "umbrella") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)5264724) )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldContentType(v4, BD_MIME_JSON) )
    {
      v5 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v5, BD_MIME_JSON, BD_MIME_RAW) )
        v6 = 1;
    }
  }
  bdSnprintf(buf, 0x1A80ui64, "Bearer  %s", this->m_authToken);
  v8 = 0;
  if ( v6 )
  {
    v7 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::addField(v7, "Authorization", buf) && bdRESTRequestBuilder::setResourceName(builder, "Regulations", "setUserPreference") )
      v8 = 1;
  }
  UserID = bdUserAccountID::getUserID(&this->m_userAccount);
  AccountType = bdUserAccountID::getAccountType(&this->m_userAccount);
  bdSnprintf(formatString, 0xC8ui64, "/v1.0/accounts/%s/%llu/optouts/", AccountType, UserID);
  result = 0;
  if ( v8 )
  {
    v11 = bdRESTRequestBuilder::uri(builder);
    if ( bdRESTURI::formatPath(v11, formatString) )
    {
      v12 = bdRESTRequestBuilder::uri(builder);
      v13 = bdRESTRequestBuilder::lobbyService(builder);
      AuthInfo = bdLobbyService::getAuthInfo(v13);
      if ( bdRESTURI::addQueryParam(v12, "client", AuthInfo->m_clientID) )
      {
        serializer = NULL;
        if ( bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer) && bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeBeginObject(serializer, "regulation") && bdJSONSerializer::writeString(serializer, (const char *)&stru_143C9A1A4, this->m_regulationPreference.m_regulation.m_name) && bdJSONSerializer::writeUInt64(serializer, "version", 0i64, 0) && bdJSONSerializer::writeEndObject(serializer) && bdJSONSerializer::writeUInt64(serializer, "clientMessageVersion", this->m_regulationPreference.m_clientMessageVersion, 0) && bdJSONSerializer::writeBoolean(serializer, (const char *)&stru_143CE7590, this->m_regulationPreference.m_value) && bdJSONSerializer::writeEndObject(serializer) )
          return 1;
      }
    }
  }
  return result;
}

