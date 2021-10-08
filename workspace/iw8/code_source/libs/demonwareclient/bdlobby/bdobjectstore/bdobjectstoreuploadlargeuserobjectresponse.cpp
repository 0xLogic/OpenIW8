/*
==============
bdObjectStoreUploadLargeUserObjectResponse::reset
==============
*/

void __fastcall bdObjectStoreUploadLargeUserObjectResponse::reset(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  ?reset@bdObjectStoreUploadLargeUserObjectResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreUploadLargeUserObjectResponse::deserialize(bdObjectStoreUploadLargeUserObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreUploadLargeUserObjectResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::setRequestData
==============
*/

void __fastcall bdObjectStoreUploadLargeUserObjectResponse::setRequestData(bdObjectStoreUploadLargeUserObjectResponse *this, const char *const context, unsigned __int64 contentSize, const bdObjectStoreMetadata *metadata)
{
  ?setRequestData@bdObjectStoreUploadLargeUserObjectResponse@@QEAAXQEBD_KAEBVbdObjectStoreMetadata@@@Z(this, context, contentSize, metadata);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getSessionID
==============
*/

const char *__fastcall bdObjectStoreUploadLargeUserObjectResponse::getSessionID(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return ?getSessionID@bdObjectStoreUploadLargeUserObjectResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getAuthorizationHeaderValue
==============
*/

const char *__fastcall bdObjectStoreUploadLargeUserObjectResponse::getAuthorizationHeaderValue(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return ?getAuthorizationHeaderValue@bdObjectStoreUploadLargeUserObjectResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getCompleteResponse
==============
*/

bdObjectStoreCompleteUploadSessionResponse *__fastcall bdObjectStoreUploadLargeUserObjectResponse::getCompleteResponse(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return ?getCompleteResponse@bdObjectStoreUploadLargeUserObjectResponse@@QEAAAEAVbdObjectStoreCompleteUploadSessionResponse@@XZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::bdObjectStoreUploadLargeUserObjectResponse
==============
*/

void __fastcall bdObjectStoreUploadLargeUserObjectResponse::bdObjectStoreUploadLargeUserObjectResponse(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  ??0bdObjectStoreUploadLargeUserObjectResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getUploadURL
==============
*/

const char *__fastcall bdObjectStoreUploadLargeUserObjectResponse::getUploadURL(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return ?getUploadURL@bdObjectStoreUploadLargeUserObjectResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::serialize
==============
*/

bool __fastcall bdObjectStoreUploadLargeUserObjectResponse::serialize(bdObjectStoreUploadLargeUserObjectResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreUploadLargeUserObjectResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getCompleteRequest
==============
*/

bdObjectStoreCompleteUploadSessionRequest *__fastcall bdObjectStoreUploadLargeUserObjectResponse::getCompleteRequest(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return ?getCompleteRequest@bdObjectStoreUploadLargeUserObjectResponse@@QEAAAEAVbdObjectStoreCompleteUploadSessionRequest@@XZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getMetadata
==============
*/

bdObjectStoreMetadata *__fastcall bdObjectStoreUploadLargeUserObjectResponse::getMetadata(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return ?getMetadata@bdObjectStoreUploadLargeUserObjectResponse@@QEAAAEAVbdObjectStoreMetadata@@XZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::bdObjectStoreUploadLargeUserObjectResponse
==============
*/
void bdObjectStoreUploadLargeUserObjectResponse::bdObjectStoreUploadLargeUserObjectResponse(bdObjectStoreUploadLargeUserObjectResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadLargeUserObjectResponse::`vbtable';
    *(_QWORD *)this->gap2268 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2268[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreUploadLargeUserObjectResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreUploadLargeUserObjectResponse_vtbl *)&bdObjectStoreUploadLargeUserObjectResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadLargeUserObjectResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadLargeUserObjectResponse::`vftable'{for `bdReferencable'};
  bdObjectStoreMetadata::bdObjectStoreMetadata(&this->m_metadata);
  bdObjectStoreCompleteUploadSessionRequest::bdObjectStoreCompleteUploadSessionRequest(&this->m_completeRequest);
  bdObjectStoreCompleteUploadSessionResponse::bdObjectStoreCompleteUploadSessionResponse(&this->m_completeResponse);
  bdObjectStoreMetadata::reset(&this->m_metadata);
  memset_0(&this->bdStructBufferSerializable::__vftable + 2, 0, 0x1400ui64);
  *(_QWORD *)this->m_sessionID = 0i64;
  *(_QWORD *)&this->m_sessionID[8] = 0i64;
  *(_QWORD *)&this->m_sessionID[16] = 0i64;
  *(_QWORD *)&this->m_sessionID[24] = 0i64;
  *(_DWORD *)&this->m_sessionID[32] = 0;
  this->m_sessionID[36] = 0;
  bdObjectStoreCompleteUploadSessionRequest::reset(&this->m_completeRequest);
  bdObjectStoreCompleteUploadSessionResponse::reset(&this->m_completeResponse);
  bdObjectStoreCompleteUploadSessionResponse::setMetadata(&this->m_completeResponse, &this->m_metadata);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::deserialize
==============
*/
_BOOL8 bdObjectStoreUploadLargeUserObjectResponse::deserialize(bdObjectStoreUploadLargeUserObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  bool v4; 
  bdJSONDeserializer json; 

  bdJSONDeserializer::bdJSONDeserializer(&json);
  v4 = bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse((bdObjectStoreUploadLargeUserObjectResponse *)((char *)this - 8), &json, deserializer, (char *)&this->bdStructBufferSerializable::__vftable + 8) && bdJSONDeserializer::getString(&json, "uploadUrl", &this->m_authorizationHeaderValue[4072], 0x400u) && bdJSONDeserializer::getString(&json, "sessionID", (char *const)&this->m_metadata.m_statistics.m_statistics[3].m_statisticValue, 0x400u);
  bdJSONDeserializer::~bdJSONDeserializer(&json);
  return v4;
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getAuthorizationHeaderValue
==============
*/
bdStructBufferSerializable_vtbl **bdObjectStoreUploadLargeUserObjectResponse::getAuthorizationHeaderValue(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return &this->bdStructBufferSerializable::__vftable + 2;
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getCompleteRequest
==============
*/
bdObjectStoreCompleteUploadSessionRequest *bdObjectStoreUploadLargeUserObjectResponse::getCompleteRequest(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return &this->m_completeRequest;
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getCompleteResponse
==============
*/
bdObjectStoreCompleteUploadSessionResponse *bdObjectStoreUploadLargeUserObjectResponse::getCompleteResponse(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return &this->m_completeResponse;
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getMetadata
==============
*/
bdObjectStoreMetadata *bdObjectStoreUploadLargeUserObjectResponse::getMetadata(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return &this->m_metadata;
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getSessionID
==============
*/
char *bdObjectStoreUploadLargeUserObjectResponse::getSessionID(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return this->m_sessionID;
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::getUploadURL
==============
*/
char *bdObjectStoreUploadLargeUserObjectResponse::getUploadURL(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  return this->m_uploadURL;
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::reset
==============
*/
void bdObjectStoreUploadLargeUserObjectResponse::reset(bdObjectStoreUploadLargeUserObjectResponse *this)
{
  bdObjectStoreMetadata::reset(&this->m_metadata);
  memset_0(&this->bdStructBufferSerializable::__vftable + 2, 0, 0x1400ui64);
  *(_QWORD *)this->m_sessionID = 0i64;
  *(_QWORD *)&this->m_sessionID[8] = 0i64;
  *(_QWORD *)&this->m_sessionID[16] = 0i64;
  *(_QWORD *)&this->m_sessionID[24] = 0i64;
  *(_DWORD *)&this->m_sessionID[32] = 0;
  this->m_sessionID[36] = 0;
  bdObjectStoreCompleteUploadSessionRequest::reset(&this->m_completeRequest);
  bdObjectStoreCompleteUploadSessionResponse::reset(&this->m_completeResponse);
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::serialize
==============
*/
bool bdObjectStoreUploadLargeUserObjectResponse::serialize(bdObjectStoreUploadLargeUserObjectResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadlargeuserobjectresponse.cpp", "bdObjectStoreUploadLargeUserObjectResponse::serialize", 0x48u, "Cannot call deserialize on bdObjectStoreUploadUserObjectRequest");
  return 0;
}

/*
==============
bdObjectStoreUploadLargeUserObjectResponse::setRequestData
==============
*/
void bdObjectStoreUploadLargeUserObjectResponse::setRequestData(bdObjectStoreUploadLargeUserObjectResponse *this, const char *const context, unsigned __int64 contentSize, const bdObjectStoreMetadata *metadata)
{
  bdObjectStoreCompleteUploadSessionRequest::setRequestData(&this->m_completeRequest, context, this->m_sessionID, contentSize, metadata);
}

