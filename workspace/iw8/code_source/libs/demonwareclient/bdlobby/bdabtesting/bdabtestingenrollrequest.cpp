/*
==============
bdABTestingEnrollRequest::deserialize
==============
*/

bool __fastcall bdABTestingEnrollRequest::deserialize(bdABTestingEnrollRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdABTestingEnrollRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdABTestingEnrollRequest::restSerializeRequest
==============
*/

bool __fastcall bdABTestingEnrollRequest::restSerializeRequest(bdABTestingEnrollRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdABTestingEnrollRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdABTestingEnrollRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdABTestingEnrollRequest::serializeWithLobbyService(bdABTestingEnrollRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdABTestingEnrollRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdABTestingEnrollRequest::bdABTestingEnrollRequest
==============
*/

void __fastcall bdABTestingEnrollRequest::bdABTestingEnrollRequest(bdABTestingEnrollRequest *this)
{
  ??0bdABTestingEnrollRequest@@QEAA@XZ(this);
}

/*
==============
bdABTestingEnrollRequest::bdABTestingEnrollRequest
==============
*/
void bdABTestingEnrollRequest::bdABTestingEnrollRequest(bdABTestingEnrollRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdABTestingEnrollRequest::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdABTestingRequest::bdABTestingRequest(this);
  this->__vftable = (bdABTestingEnrollRequest_vtbl *)&bdABTestingEnrollRequest::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->__vftable + 2) = &bdABTestingEnrollRequest::`vftable';
  *(bdABTestingEnrollRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdABTestingEnrollRequest_vtbl *)&bdABTestingEnrollRequest::`vftable'{for `bdReferencable'};
}

/*
==============
bdABTestingEnrollRequest::deserialize
==============
*/
bool bdABTestingEnrollRequest::deserialize(bdABTestingEnrollRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdabtesting\\bdabtestingenrollrequest.cpp", "bdABTestingEnrollRequest::deserialize", 0x19u, "Cannot call deserialize on bdABTestingEnrollRequest");
  return 0;
}

/*
==============
bdABTestingEnrollRequest::restSerializeRequest
==============
*/
bool bdABTestingEnrollRequest::restSerializeRequest(bdABTestingEnrollRequest *this, bdRESTRequestBuilder *builder)
{
  bdLobbyService *v3; 
  bdAuthInfo *AuthInfo; 
  bdRESTURI *v5; 
  bdRESTHeaders *v6; 
  bool result; 
  int v8; 
  bdRESTURI::bdDummyArg v9; 
  char *in[2]; 
  bdRESTURI::bdDummyArg v11; 
  bdRESTURI::bdDummyArg v12; 

  v3 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v3);
  v5 = bdRESTRequestBuilder::uri(builder);
  in[0] = "abtesting/v2/users/{account_type}-{user_id}/enrollments/";
  v5->m_path[0] = 0;
  v5->m_pathLength = 0;
  bdRESTURI::appendNextBlock(v5, (const char **)in);
  bdRESTURI::operator<<(v5, AuthInfo->m_accountType);
  bdRESTURI::appendNextBlock(v5, (const char **)in);
  bdRESTURI::operator<<(v5, AuthInfo->m_userID);
  bdRESTURI::appendNextBlock(v5, (const char **)in);
  bdRESTURI::operator<<(v5, &v11);
  bdRESTURI::appendNextBlock(v5, (const char **)in);
  bdRESTURI::operator<<(v5, &v12);
  bdRESTURI::appendNextBlock(v5, (const char **)in);
  bdRESTURI::operator<<(v5, &v9);
  bdRESTURI::appendNextBlock(v5, (const char **)in);
  if ( !bdRESTURI::isOK(v5) )
  {
    v8 = 1024;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.inl", "bdRESTURI::formatPath", 0x38u, "Formatted URI would have been too long. Max is %d", v8);
    v5->m_path[0] = 0;
    v5->m_pathLength = 0;
  }
  result = 0;
  if ( bdRESTURI::isOK(v5) && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1347375956) )
  {
    v6 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldAccept(v6, BD_MIME_JSON) && bdRESTRequestBuilder::setResourceName(builder, "abtesting", "enroll") )
      return 1;
  }
  return result;
}

/*
==============
bdABTestingEnrollRequest::serializeWithLobbyService
==============
*/
bool bdABTestingEnrollRequest::serializeWithLobbyService(bdABTestingEnrollRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  bdAuthInfo *AuthInfo; 
  bool v7; 
  unsigned __int64 v8; 
  size_t v9; 
  bool v10; 
  bdHTTPProxyHeader header; 
  char v12[16]; 
  char buf[16]; 
  char url[1024]; 

  if ( lobbyService )
  {
    AuthInfo = bdLobbyService::getAuthInfo(lobbyService);
    v7 = bdHTTPProxyRequest::serializeMethod(this, serializer, "POST");
    bdHandleAssert(AuthInfo->m_accountType != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v8 = -1i64;
    do
      ++v8;
    while ( AuthInfo->m_accountType[v8] );
    v9 = 9i64;
    if ( v8 < 9 )
      v9 = v8;
    memcpy_0(v12, AuthInfo->m_accountType, v9);
    v12[v9] = 0;
    bdSnprintf(buf, 0x10ui64, "%I64u", AuthInfo->m_titleID);
    if ( v7 )
      v7 = (unsigned int)(bdSnprintf(url, 0x400ui64, "%s/v2/users/%s-%llu/enrollments/?client=%s&context=%s", "http:
    bdHTTPProxyHeader::bdHTTPProxyHeader(&header);
    v10 = v7 && bdHTTPProxyHeader::set(&header, "Content-Type", "application/json") && bdHTTPProxyRequest::serializeHeader(this, serializer, &header);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&header.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&header.gap844[4]);
    return v10;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdABTestingEnrollRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdabtesting\\bdabtestingenrollrequest.cpp", "bdABTestingEnrollRequest::serializeWithLobbyService", 0x24u, "lobbyService cannot be NULL");
    return 0;
  }
}

