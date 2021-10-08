/*
==============
bdSetUserPresenceRequestV3::bdSetUserPresenceRequestV3
==============
*/

void __fastcall bdSetUserPresenceRequestV3::bdSetUserPresenceRequestV3(bdSetUserPresenceRequestV3 *this)
{
  ??0bdSetUserPresenceRequestV3@@QEAA@XZ(this);
}

/*
==============
bdSetUserPresenceRequestV3::bdSetUserPresenceRequestV3
==============
*/

void __fastcall bdSetUserPresenceRequestV3::bdSetUserPresenceRequestV3(bdSetUserPresenceRequestV3 *this, const bdUserPresenceV3 *userPresence)
{
  ??0bdSetUserPresenceRequestV3@@QEAA@AEBVbdUserPresenceV3@@@Z(this, userPresence);
}

/*
==============
bdSetUserPresenceRequestV3::setUserPresence
==============
*/

void __fastcall bdSetUserPresenceRequestV3::setUserPresence(bdSetUserPresenceRequestV3 *this, const bdUserPresenceV3 *userPresence)
{
  ?setUserPresence@bdSetUserPresenceRequestV3@@QEAAXAEBVbdUserPresenceV3@@@Z(this, userPresence);
}

/*
==============
bdSetUserPresenceRequestV3::restSerializeRequest
==============
*/

bool __fastcall bdSetUserPresenceRequestV3::restSerializeRequest(bdSetUserPresenceRequestV3 *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdSetUserPresenceRequestV3@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdSetUserPresenceRequestV3::bdSetUserPresenceRequestV3
==============
*/
void bdSetUserPresenceRequestV3::bdSetUserPresenceRequestV3(bdSetUserPresenceRequestV3 *this, const bdUserPresenceV3 *userPresence)
{
  const bdUserPresenceV3 *v2; 
  bdStructFixedSizeArray<bdUserPresenceInfoV3,3> *p_m_presences; 
  bdUserPresenceV3 *p_m_userPresence; 

  v2 = userPresence;
  this->__vftable = (bdSetUserPresenceRequestV3_vtbl *)&bdSetUserPresenceRequestV3::`vftable';
  p_m_userPresence = &this->m_userPresence;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rdi], xmm0
  }
  this->m_userPresence.m_context.m_buffer[16] = userPresence->m_context.m_buffer[16];
  p_m_presences = &this->m_userPresence.m_presences;
  `eh vector constructor iterator'(&this->m_userPresence.m_presences, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
  p_m_presences->m_size = 0;
  bdStructFixedSizeArray<bdUserPresenceInfoV3,3>::copy(p_m_presences, &v2->m_presences);
  bdUserDetails::bdUserDetails(&p_m_userPresence->m_userDetails, &v2->m_userDetails);
}

/*
==============
bdSetUserPresenceRequestV3::bdSetUserPresenceRequestV3
==============
*/
void bdSetUserPresenceRequestV3::bdSetUserPresenceRequestV3(bdSetUserPresenceRequestV3 *this)
{
  this->__vftable = (bdSetUserPresenceRequestV3_vtbl *)&bdSetUserPresenceRequestV3::`vftable';
  bdUserPresenceV3::bdUserPresenceV3(&this->m_userPresence);
}

/*
==============
bdSetUserPresenceRequestV3::restSerializeRequest
==============
*/
bool bdSetUserPresenceRequestV3::restSerializeRequest(bdSetUserPresenceRequestV3 *this, bdRESTRequestBuilder *builder)
{
  bdRESTHeaders *v4; 
  bdRESTHeaders *v5; 
  bool v6; 
  bdLobbyService *v7; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v9; 
  bdRESTURI *v10; 
  const char *Context; 
  bdRESTURI *v12; 
  bdRESTURI *v13; 
  bool v16; 
  char *in; 
  bdRESTURI::bdDummyArg v19; 
  bdRESTURI::bdDummyArg v20; 
  bdRESTURI::bdDummyArg v21; 
  __int64 v22; 
  _WORD v23[339]; 

  v22 = -2i64;
  v6 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "presence") && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)5264724) && bdRESTRequestBuilder::setResourceName(builder, "UserPresence", "set_user_presence_v3") )
  {
    v4 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldContentType(v4, BD_MIME_JSON) )
    {
      v5 = bdRESTRequestBuilder::headers(builder);
      if ( bdRESTHeaders::setFieldAccept(v5, BD_MIME_JSON) )
        v6 = 1;
    }
  }
  v7 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v7);
  if ( !v6 )
    return 0;
  v9 = bdRESTRequestBuilder::uri(builder);
  in = "/v3/users/{account_type}-{user_id}/presence/";
  v9->m_path[0] = 0;
  v9->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v9, (const char **)&in);
  bdRESTURI::operator<<(v9, AuthInfo->m_accountType);
  bdRESTURI::appendNextBlock(v9, (const char **)&in);
  bdRESTURI::operator<<(v9, AuthInfo->m_userID);
  bdRESTURI::appendNextBlock(v9, (const char **)&in);
  bdRESTURI::operator<<(v9, &v19);
  bdRESTURI::appendNextBlock(v9, (const char **)&in);
  bdRESTURI::operator<<(v9, &v20);
  bdRESTURI::appendNextBlock(v9, (const char **)&in);
  bdRESTURI::operator<<(v9, &v21);
  bdRESTURI::appendNextBlock(v9, (const char **)&in);
  if ( !bdRESTURI::isOK(v9) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", 1024);
    v9->m_path[0] = 0;
    v9->m_pathLength = 0;
  }
  if ( !bdRESTURI::isOK(v9) )
    return 0;
  v10 = bdRESTRequestBuilder::uri(builder);
  Context = bdUserPresenceV3::getContext(&this->m_userPresence);
  if ( !bdRESTURI::addQueryParam(v10, "context", Context) )
    return 0;
  v12 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v12, "client", AuthInfo->m_clientID) )
    return 0;
  v13 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v13, "titleID", AuthInfo->m_titleID) )
    return 0;
  _RBX = bdUserPresenceV3::getPresence(&this->m_userPresence, 0);
  v23[3] = *(_WORD *)&_RBX->m_online;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+2]
    vmovups xmmword ptr [rsp+320h+var_2C6+8], xmm0
  }
  LOBYTE(v23[12]) = _RBX->m_platform.m_value.m_buffer[16];
  bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>((bdStructOptionalObject<bdLocalizationToken> *)&v23[15], &_RBX->m_titleToken);
  bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>((bdStructOptionalObject<bdLocalizationToken> *)&v23[163], &_RBX->m_presenceToken);
  LOBYTE(v23[311]) = _RBX->m_titleID.m_hasValue;
  *(_DWORD *)&v23[313] = _RBX->m_titleID.m_value;
  LOBYTE(v23[315]) = _RBX->m_data.m_hasValue;
  bdPresenceData::bdPresenceData((bdPresenceData *)&v23[319], &_RBX->m_data.m_value);
  LOBYTE(v23[331]) = _RBX->m_updateTime.m_hasValue;
  *(_QWORD *)&v23[335] = _RBX->m_updateTime.m_value;
  in = NULL;
  v16 = bdRESTRequestBuilder::getBodyJSONSerializer(builder, (bdJSONSerializer **)&in) && bdUserPresenceInfoV3::serialize((bdUserPresenceInfoV3 *)&v23[3], (bdJSONSerializer *)in);
  bdUserPresenceInfoV3::~bdUserPresenceInfoV3((bdUserPresenceInfoV3 *)&v23[3]);
  return v16;
}

/*
==============
bdSetUserPresenceRequestV3::setUserPresence
==============
*/
void bdSetUserPresenceRequestV3::setUserPresence(bdSetUserPresenceRequestV3 *this, const bdUserPresenceV3 *userPresence)
{
  const bdUserPresenceV3 *v3; 
  bdSetUserPresenceRequestV3 *v4; 
  bdStructFixedSizeArray<bdUserPresenceInfoV3,3> *p_m_presences; 
  bdStructFixedSizeArray<bdUserPresenceInfoV3,3> *v6; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx+8], xmm0
  }
  v3 = userPresence;
  this->m_userPresence.m_context.m_buffer[16] = userPresence->m_context.m_buffer[16];
  v4 = this;
  p_m_presences = &this->m_userPresence.m_presences;
  v6 = &userPresence->m_presences;
  if ( p_m_presences != v6 )
    bdStructFixedSizeArray<bdUserPresenceInfoV3,3>::copy(p_m_presences, v6);
  bdUserDetails::operator=(&v4->m_userPresence.m_userDetails, &v3->m_userDetails);
}

