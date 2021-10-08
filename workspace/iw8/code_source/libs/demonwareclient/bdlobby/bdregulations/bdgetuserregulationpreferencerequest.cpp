/*
==============
bdGetUserRegulationPreferenceRequest::restSerializeRequest
==============
*/

bool __fastcall bdGetUserRegulationPreferenceRequest::restSerializeRequest(bdGetUserRegulationPreferenceRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdGetUserRegulationPreferenceRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdGetUserRegulationPreferenceRequest::bdGetUserRegulationPreferenceRequest
==============
*/

void __fastcall bdGetUserRegulationPreferenceRequest::bdGetUserRegulationPreferenceRequest(bdGetUserRegulationPreferenceRequest *this, bdUserAccountID *userAccount, const char *authToken)
{
  ??0bdGetUserRegulationPreferenceRequest@@QEAA@VbdUserAccountID@@PEBD@Z(this, userAccount, authToken);
}

/*
==============
bdGetUserRegulationPreferenceRequest::bdGetUserRegulationPreferenceRequest
==============
*/
void bdGetUserRegulationPreferenceRequest::bdGetUserRegulationPreferenceRequest(bdGetUserRegulationPreferenceRequest *this, bdUserAccountID *userAccount, const char *authToken)
{
  this->__vftable = (bdGetUserRegulationPreferenceRequest_vtbl *)&bdGetUserRegulationPreferenceRequest::`vftable';
  bdUserAccountID::bdUserAccountID(&this->m_userAccount, userAccount);
  bdHandleAssert(authToken != NULL, "authToken != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdregulations\\bdgetuserregulationpreferencerequest.cpp", "bdGetUserRegulationPreferenceRequest::bdGetUserRegulationPreferenceRequest", 0x11u, "Must instantiate bdGetUserRegulationPreferenceRequest with a valid authorization token.", -2i64, this, userAccount);
  bdStrlcpy(this->m_authToken, authToken, 0x1A80ui64);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userAccount->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userAccount->gap38);
}

/*
==============
bdGetUserRegulationPreferenceRequest::restSerializeRequest
==============
*/
bool bdGetUserRegulationPreferenceRequest::restSerializeRequest(bdGetUserRegulationPreferenceRequest *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bool v5; 
  bdRESTHeaders *v6; 
  bool v7; 
  unsigned __int64 UserID; 
  bdUserAccountID *p_m_userAccount; 
  unsigned __int64 v10; 
  const char *AccountType; 
  bdRESTURI *v12; 
  bdRESTURI *v13; 
  bdLobbyService *v14; 
  bdAuthInfo *AuthInfo; 
  bool result; 
  char formatString[208]; 
  char buf[6784]; 

  v5 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "umbrella") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldAccept(v4, BD_MIME_JSON, BD_MIME_RAW) )
      v5 = 1;
  }
  bdSnprintf(buf, 0x1A80ui64, "Bearer  %s", this->m_authToken);
  v7 = 0;
  if ( v5 )
  {
    v6 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::addField(v6, "Authorization", buf) && bdRESTRequestBuilder::setResourceName(builder, "Regulations", "getUserPreference") )
      v7 = 1;
  }
  UserID = bdUserAccountID::getUserID(&this->m_userAccount);
  p_m_userAccount = &this->m_userAccount;
  v10 = UserID;
  AccountType = bdUserAccountID::getAccountType(p_m_userAccount);
  bdSnprintf(formatString, 0xC8ui64, "/v1.0/accounts/%s/%llu/optouts/", AccountType, v10);
  result = 0;
  if ( v7 )
  {
    v12 = bdRESTRequestBuilder::uri(builder);
    if ( bdRESTURI::formatPath(v12, formatString) )
    {
      v13 = bdRESTRequestBuilder::uri(builder);
      v14 = bdRESTRequestBuilder::lobbyService(builder);
      AuthInfo = bdLobbyService::getAuthInfo(v14);
      if ( bdRESTURI::addQueryParam(v13, "client", AuthInfo->m_clientID) )
        return 1;
    }
  }
  return result;
}

