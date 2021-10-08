/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::reset
==============
*/

void __fastcall bdObjectStoreUploadMultipleLargeObjectsResponse::reset(bdObjectStoreUploadMultipleLargeObjectsResponse *this)
{
  ?reset@bdObjectStoreUploadMultipleLargeObjectsResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::getMetadataList
==============
*/

const bdArray<bdObjectStoreMetadata> *__fastcall bdObjectStoreUploadMultipleLargeObjectsResponse::getMetadataList(bdObjectStoreUploadMultipleLargeObjectsResponse *this)
{
  return ?getMetadataList@bdObjectStoreUploadMultipleLargeObjectsResponse@@QEBAAEBV?$bdArray@VbdObjectStoreMetadata@@@@XZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreUploadMultipleLargeObjectsResponse::deserialize(bdObjectStoreUploadMultipleLargeObjectsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreUploadMultipleLargeObjectsResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::bdObjectStoreUploadMultipleLargeObjectsResponse
==============
*/

void __fastcall bdObjectStoreUploadMultipleLargeObjectsResponse::bdObjectStoreUploadMultipleLargeObjectsResponse(bdObjectStoreUploadMultipleLargeObjectsResponse *this)
{
  ??0bdObjectStoreUploadMultipleLargeObjectsResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteRequest
==============
*/

bdObjectStoreCompleteUploadSessionsRequest *__fastcall bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteRequest(bdObjectStoreUploadMultipleLargeObjectsResponse *this)
{
  return ?getCompleteRequest@bdObjectStoreUploadMultipleLargeObjectsResponse@@QEAAAEAVbdObjectStoreCompleteUploadSessionsRequest@@XZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteResponse
==============
*/

bdObjectStoreCompleteUploadSessionsResponse *__fastcall bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteResponse(bdObjectStoreUploadMultipleLargeObjectsResponse *this)
{
  return ?getCompleteResponse@bdObjectStoreUploadMultipleLargeObjectsResponse@@QEAAAEAVbdObjectStoreCompleteUploadSessionsResponse@@XZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::serialize
==============
*/

bool __fastcall bdObjectStoreUploadMultipleLargeObjectsResponse::serialize(bdObjectStoreUploadMultipleLargeObjectsResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreUploadMultipleLargeObjectsResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::bdObjectStoreUploadMultipleLargeObjectsResponse
==============
*/
void bdObjectStoreUploadMultipleLargeObjectsResponse::bdObjectStoreUploadMultipleLargeObjectsResponse(bdObjectStoreUploadMultipleLargeObjectsResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadMultipleLargeObjectsResponse::`vbtable';
    *(_QWORD *)this->gap3A20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap3A20[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreUploadMultipleLargeObjectsResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreUploadMultipleLargeObjectsResponse_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsResponse::`vftable'{for `bdReferencable'};
  bdObjectStoreCompleteUploadSessionsRequest::bdObjectStoreCompleteUploadSessionsRequest((bdObjectStoreCompleteUploadSessionsRequest *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreCompleteUploadSessionsResponse::bdObjectStoreCompleteUploadSessionsResponse(&this->m_completeResponse);
  bdObjectStoreCompleteUploadSessionsRequest::reset((bdObjectStoreCompleteUploadSessionsRequest *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreCompleteUploadSessionsResponse::reset(&this->m_completeResponse);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::deserialize
==============
*/
_BOOL8 bdObjectStoreUploadMultipleLargeObjectsResponse::deserialize(bdObjectStoreUploadMultipleLargeObjectsResponse *this, bdStructBufferDeserializer *deserializer)
{
  bdObjectStoreJSONResponseBase *v4; 
  bdObjectStoreCompleteUploadSessionsRequest *v5; 
  char *AuthorizationHeaderValue; 
  bool v7; 
  bdJSONDeserializer json; 

  bdJSONDeserializer::bdJSONDeserializer(&json);
  v4 = (bdObjectStoreUploadMultipleLargeObjectsResponse *)((char *)this - 8);
  v5 = (bdObjectStoreCompleteUploadSessionsRequest *)(&this->bdStructBufferSerializable::__vftable + 1);
  AuthorizationHeaderValue = bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue(v5);
  v7 = bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse(v4, &json, deserializer, AuthorizationHeaderValue) && bdObjectStoreCompleteUploadSessionsRequest::deserializeFromJSON(v5, &json);
  bdJSONDeserializer::~bdJSONDeserializer(&json);
  return v7;
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteRequest
==============
*/
bdStructBufferSerializable_vtbl **bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteRequest(bdObjectStoreUploadMultipleLargeObjectsResponse *this)
{
  return &this->bdStructBufferSerializable::__vftable + 2;
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteResponse
==============
*/
bdObjectStoreCompleteUploadSessionsResponse *bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteResponse(bdObjectStoreUploadMultipleLargeObjectsResponse *this)
{
  return &this->m_completeResponse;
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::getMetadataList
==============
*/
const bdArray<bdObjectStoreMetadata> *bdObjectStoreUploadMultipleLargeObjectsResponse::getMetadataList(bdObjectStoreUploadMultipleLargeObjectsResponse *this)
{
  return bdObjectStoreCompleteUploadSessionsResponse::getMetadataList(&this->m_completeResponse);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::reset
==============
*/
void bdObjectStoreUploadMultipleLargeObjectsResponse::reset(bdObjectStoreUploadMultipleLargeObjectsResponse *this)
{
  bdObjectStoreCompleteUploadSessionsRequest::reset((bdObjectStoreCompleteUploadSessionsRequest *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreCompleteUploadSessionsResponse::reset(&this->m_completeResponse);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsResponse::serialize
==============
*/
bool bdObjectStoreUploadMultipleLargeObjectsResponse::serialize(bdObjectStoreUploadMultipleLargeObjectsResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadmultiplelargeobjectsresponse.cpp", "bdObjectStoreUploadMultipleLargeObjectsResponse::serialize", 0x26u, "Cannot call deserialize on bdObjectStoreUploadMultipleLargeObjectsResponse");
  return 0;
}

