/*
==============
bdObjectStoreCompleteUploadSessionRequest::reset
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionRequest::reset(bdObjectStoreCompleteUploadSessionRequest *this)
{
  ?reset@bdObjectStoreCompleteUploadSessionRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionRequest::serializeWithLobbyService(bdObjectStoreCompleteUploadSessionRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreCompleteUploadSessionRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreCompleteUploadSessionRequest::setRequestData
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionRequest::setRequestData(bdObjectStoreCompleteUploadSessionRequest *this, const char *const context, char *sessionID, unsigned __int64 contentSize, const bdObjectStoreMetadata *metadata)
{
  ?setRequestData@bdObjectStoreCompleteUploadSessionRequest@@QEAAXQEBDPEAD_KAEBVbdObjectStoreMetadata@@@Z(this, context, sessionID, contentSize, metadata);
}

/*
==============
bdObjectStoreCompleteUploadSessionRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionRequest::deserialize(bdObjectStoreCompleteUploadSessionRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreCompleteUploadSessionRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreCompleteUploadSessionRequest::bdObjectStoreCompleteUploadSessionRequest
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionRequest::bdObjectStoreCompleteUploadSessionRequest(bdObjectStoreCompleteUploadSessionRequest *this)
{
  ??0bdObjectStoreCompleteUploadSessionRequest@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionRequest::bdObjectStoreCompleteUploadSessionRequest
==============
*/
void bdObjectStoreCompleteUploadSessionRequest::bdObjectStoreCompleteUploadSessionRequest(bdObjectStoreCompleteUploadSessionRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreCompleteUploadSessionRequest::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreCompleteUploadSessionRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreCompleteUploadSessionRequest_vtbl *)&bdObjectStoreCompleteUploadSessionRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreCompleteUploadSessionRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreCompleteUploadSessionRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreRequestBase::reset(this);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = 0i64;
  this->m_metadata = NULL;
}

/*
==============
bdObjectStoreCompleteUploadSessionRequest::deserialize
==============
*/
bool bdObjectStoreCompleteUploadSessionRequest::deserialize(bdObjectStoreCompleteUploadSessionRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionrequest.cpp", "bdObjectStoreCompleteUploadSessionRequest::deserialize", 0x2Au, "Cannot call deserialize on bdObjectStoreCompleteUploadSessionRequest");
  return 0;
}

/*
==============
bdObjectStoreCompleteUploadSessionRequest::reset
==============
*/
void bdObjectStoreCompleteUploadSessionRequest::reset(bdObjectStoreCompleteUploadSessionRequest *this)
{
  bdObjectStoreRequestBase::reset(this);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = 0i64;
  this->m_metadata = NULL;
}

/*
==============
bdObjectStoreCompleteUploadSessionRequest::serializeWithLobbyService
==============
*/
_BOOL8 bdObjectStoreCompleteUploadSessionRequest::serializeWithLobbyService(bdObjectStoreCompleteUploadSessionRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  bool orchestration; 
  const char *ClientIDFromAuthInfo; 
  bool v8; 
  bool v9; 
  bool v10; 
  unsigned int v11; 
  char v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  size_t v15; 
  size_t v16; 
  bool v17; 
  bdJSONSerializer json; 
  bdObjectStoreHTTPHeader v20; 
  char url[1024]; 
  char buffer[65536]; 

  bdHandleAssert(this->bdStructBufferSerializable::__vftable != NULL, "m_metadata != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionrequest.cpp", "bdObjectStoreCompleteUploadSessionRequest::serializeWithLobbyService", 0x32u, "metadata has not been set");
  orchestration = bdObjectStoreRequestBase::requiresOrchestration((bdObjectStoreCompleteUploadSessionRequest *)((char *)this - 32), (const bdObjectStoreMetadata *)this->bdStructBufferSerializable::__vftable);
  ClientIDFromAuthInfo = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreCompleteUploadSessionRequest *)((char *)this - 32), lobbyService);
  bdObjectStoreRequestBase::buildCompleteUploadSessionURL((bdObjectStoreCompleteUploadSessionRequest *)((char *)this - 32), url, 0x400u, *(const char **)&this->m_context[4], ClientIDFromAuthInfo, (const char *)&this[-1].m_metadata + 4, orchestration);
  v8 = bdStructBufferSerializer::writeString(serializer, 1u, "POST", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  memset_0(buffer, 0, 0xFFFFui64);
  bdJSONSerializer::bdJSONSerializer(&json, buffer, 0xFFFFu);
  v9 = v8 && bdJSONSerializer::writeBeginObject(&json) && bdJSONSerializer::writeUInt64(&json, "finalContentLength", *(_QWORD *)&this->m_context[12], 0);
  if ( bdObjectStoreMetadata::hasTags((bdObjectStoreMetadata *)this->bdStructBufferSerializable::__vftable) )
  {
    if ( !v9 )
    {
LABEL_18:
      v12 = 0;
      goto LABEL_19;
    }
    v10 = !bdObjectStoreMetadata::serializeTagsToJSON((bdObjectStoreMetadata *)this->bdStructBufferSerializable::__vftable, &json, "tags");
  }
  else
  {
    v10 = !v9;
  }
  if ( v10 )
    goto LABEL_18;
  if ( !bdJSONSerializer::writeEndObject(&json) )
    goto LABEL_18;
  v11 = bdJSONSerializer::length(&json);
  if ( !bdStructBufferSerializer::writeBlob(serializer, 3u, buffer, v11) )
    goto LABEL_18;
  v12 = 1;
LABEL_19:
  bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&v20);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v13 = -1i64;
  v14 = -1i64;
  do
    ++v14;
  while ( aContentType[v14] );
  v15 = 99i64;
  if ( v14 < 0x63 )
    v15 = v14;
  memcpy_0(&v20.__vftable + 2, "Content-Type", v15);
  v20.m_key[v15 - 16] = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v13;
  while ( aApplicationJso_0[v13] );
  v16 = 4095i64;
  if ( v13 < 0xFFF )
    v16 = v13;
  memcpy_0(v20.m_value, "application/json", v16);
  v20.m_value[v16] = 0;
  v17 = v12 && bdStructBufferSerializer::writeObject(serializer, 4u, &v20);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v20.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&v20.gap1074[4]);
  bdJSONSerializer::~bdJSONSerializer(&json);
  return v17;
}

/*
==============
bdObjectStoreCompleteUploadSessionRequest::setRequestData
==============
*/
void bdObjectStoreCompleteUploadSessionRequest::setRequestData(bdObjectStoreCompleteUploadSessionRequest *this, const char *const context, char *sessionID, unsigned __int64 contentSize, const bdObjectStoreMetadata *metadata)
{
  bdObjectStoreRequestBase::setContext(this, context);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = contentSize;
  this->m_metadata = metadata;
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = sessionID;
}

