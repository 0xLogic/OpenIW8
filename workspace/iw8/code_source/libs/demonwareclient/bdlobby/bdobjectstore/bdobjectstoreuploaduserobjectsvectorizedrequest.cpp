/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::reset
==============
*/

void __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::reset(bdObjectStoreUploadUserObjectsVectorizedRequest *this)
{
  ?reset@bdObjectStoreUploadUserObjectsVectorizedRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::restSerializeRequest
==============
*/

bool __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::restSerializeRequest(bdObjectStoreUploadUserObjectsVectorizedRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdObjectStoreUploadUserObjectsVectorizedRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::bdObjectStoreUploadUserObjectsVectorizedRequest
==============
*/

void __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::bdObjectStoreUploadUserObjectsVectorizedRequest(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const char *const context)
{
  ??0bdObjectStoreUploadUserObjectsVectorizedRequest@@QEAA@QEBD@Z(this, context);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::hasTags
==============
*/

bool __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::hasTags(bdObjectStoreUploadUserObjectsVectorizedRequest *this)
{
  return ?hasTags@bdObjectStoreUploadUserObjectsVectorizedRequest@@IEBA_NXZ(this);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::addObjectToRequestWindow
==============
*/

bdObjectStoreUploadUserObjectsVectorizedRequest::AddObjectToRequestWindowResponse __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::addObjectToRequestWindow(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const bdObjectStoreObject *object)
{
  return ?addObjectToRequestWindow@bdObjectStoreUploadUserObjectsVectorizedRequest@@QEAA?AW4AddObjectToRequestWindowResponse@1@AEBVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::init
==============
*/

void __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::init(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const char *const context)
{
  ?init@bdObjectStoreUploadUserObjectsVectorizedRequest@@QEAAXQEBD@Z(this, context);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::serializeWithLobbyService(bdObjectStoreUploadUserObjectsVectorizedRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreUploadUserObjectsVectorizedRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::includeInResponse
==============
*/

void __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::includeInResponse(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const bdObjectStoreExtra extra)
{
  ?includeInResponse@bdObjectStoreUploadUserObjectsVectorizedRequest@@QEAAXW4bdObjectStoreExtra@@@Z(this, extra);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::bdObjectStoreUploadUserObjectsVectorizedRequest
==============
*/

void __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::bdObjectStoreUploadUserObjectsVectorizedRequest(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const char *const client, const char *const context)
{
  ??0bdObjectStoreUploadUserObjectsVectorizedRequest@@QEAA@QEBD0@Z(this, client, context);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::deserialize(bdObjectStoreUploadUserObjectsVectorizedRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreUploadUserObjectsVectorizedRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::calculateWindowSpaceNeededForObject
==============
*/

unsigned __int64 __fastcall bdObjectStoreUploadUserObjectsVectorizedRequest::calculateWindowSpaceNeededForObject(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const bdObjectStoreObject *object)
{
  return ?calculateWindowSpaceNeededForObject@bdObjectStoreUploadUserObjectsVectorizedRequest@@IEAA_KAEBVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::bdObjectStoreUploadUserObjectsVectorizedRequest
==============
*/
void bdObjectStoreUploadUserObjectsVectorizedRequest::bdObjectStoreUploadUserObjectsVectorizedRequest(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const char *const client, const char *const context, int a4)
{
  bdObjectStoreObject *v6; 
  bdArray<bdObjectStoreObject> a; 

  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadUserObjectsVectorizedRequest::`vbtable';
    *(_QWORD *)&this->gap51[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap51[15] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadUserObjectsVectorizedRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadUserObjectsVectorizedRequest_vtbl *)&bdObjectStoreUploadUserObjectsVectorizedRequest::`vftable'{for `bdObjectStoreRequestBase'};
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserObjectsVectorizedRequest::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = &bdObjectStoreUploadUserObjectsVectorizedRequest::`vftable'{for `bdRESTRequest'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserObjectsVectorizedRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = 0i64;
  *(_QWORD *)this->m_objects = 0i64;
  bdObjectStoreRequestBase::setContext(this, context);
  this->m_windowSpaceRemaining = 64020i64;
  *(_QWORD *)&a.m_capacity = 1i64;
  v6 = (bdObjectStoreObject *)bdMemory::allocate(0xDB8ui64);
  a.m_data = v6;
  bdArray<bdObjectStoreObject>::operator=((bdArray<bdObjectStoreObject> *)(&this->bdStructBufferSerializable::__vftable + 3), &a);
  bdMemory::deallocate(v6);
  this->m_requestValidationToken = 0;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::bdObjectStoreUploadUserObjectsVectorizedRequest
==============
*/
void bdObjectStoreUploadUserObjectsVectorizedRequest::bdObjectStoreUploadUserObjectsVectorizedRequest(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const char *const context, int a3)
{
  bdObjectStoreObject *v5; 
  bdArray<bdObjectStoreObject> a; 

  if ( a3 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadUserObjectsVectorizedRequest::`vbtable';
    *(_QWORD *)&this->gap51[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap51[15] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadUserObjectsVectorizedRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadUserObjectsVectorizedRequest_vtbl *)&bdObjectStoreUploadUserObjectsVectorizedRequest::`vftable'{for `bdObjectStoreRequestBase'};
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserObjectsVectorizedRequest::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = &bdObjectStoreUploadUserObjectsVectorizedRequest::`vftable'{for `bdRESTRequest'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserObjectsVectorizedRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = 0i64;
  *(_QWORD *)this->m_objects = 0i64;
  bdObjectStoreRequestBase::setContext(this, context);
  this->m_windowSpaceRemaining = 64020i64;
  *(_QWORD *)&a.m_capacity = 1i64;
  v5 = (bdObjectStoreObject *)bdMemory::allocate(0xDB8ui64);
  a.m_data = v5;
  bdArray<bdObjectStoreObject>::operator=((bdArray<bdObjectStoreObject> *)(&this->bdStructBufferSerializable::__vftable + 3), &a);
  bdMemory::deallocate(v5);
  this->m_requestValidationToken = 0;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::addObjectToRequestWindow
==============
*/
__int64 bdObjectStoreUploadUserObjectsVectorizedRequest::addObjectToRequestWindow(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const bdObjectStoreObject *object)
{
  unsigned __int64 ContentSize; 
  bdObjectStoreMetadata *Metadata; 
  unsigned __int64 v6; 
  unsigned __int64 m_windowSpaceRemaining; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  bdObjectStoreObject *v12; 

  ContentSize = bdObjectStoreObject::getContentSize((bdObjectStoreObject *)object);
  Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)object);
  v6 = 4 * ((ContentSize + 2) / 3 + 23i64 * bdObjectStoreMetadata::getTagsSize(Metadata)) + 3106;
  if ( v6 <= 0xFA14 )
  {
    m_windowSpaceRemaining = this->m_windowSpaceRemaining;
    if ( v6 < m_windowSpaceRemaining )
    {
      this->m_windowSpaceRemaining = m_windowSpaceRemaining - v6;
      v9 = *(_DWORD *)&this->m_objects[4] + 1;
      v10 = *(_DWORD *)this->m_objects;
      if ( v10 < v9 )
        bdArray<bdObjectStoreObject>::increaseCapacity((bdArray<bdObjectStoreObject> *)(&this->bdStructBufferSerializable::__vftable + 3), v9 - v10);
      v11 = *(_DWORD *)&this->m_objects[4];
      if ( v11 == *(_DWORD *)this->m_objects )
      {
        bdArray<bdObjectStoreObject>::increaseCapacity((bdArray<bdObjectStoreObject> *)(&this->bdStructBufferSerializable::__vftable + 3), 1u);
        v11 = *(_DWORD *)&this->m_objects[4];
      }
      v12 = (bdObjectStoreObject *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) + 3512i64 * v11);
      if ( v12 )
      {
        bdObjectStoreObject::bdObjectStoreObject(v12, object);
        v11 = *(_DWORD *)&this->m_objects[4];
      }
      *(_DWORD *)&this->m_objects[4] = v11 + 1;
      return 0i64;
    }
    else
    {
      return 2i64;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreUploadUserObjectsVectorizedRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploaduserobjectsvectorizedrequest.cpp", "bdObjectStoreUploadUserObjectsVectorizedRequest::addObjectToRequestWindow", 0x44u, "Object is larger than upload request window.");
    return 1i64;
  }
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::calculateWindowSpaceNeededForObject
==============
*/
unsigned __int64 bdObjectStoreUploadUserObjectsVectorizedRequest::calculateWindowSpaceNeededForObject(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const bdObjectStoreObject *object)
{
  unsigned __int64 ContentSize; 
  bdObjectStoreMetadata *Metadata; 

  ContentSize = bdObjectStoreObject::getContentSize((bdObjectStoreObject *)object);
  Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)object);
  return 4 * ((ContentSize + 2) / 3 + 23i64 * bdObjectStoreMetadata::getTagsSize(Metadata)) + 3106;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::deserialize
==============
*/
bool bdObjectStoreUploadUserObjectsVectorizedRequest::deserialize(bdObjectStoreUploadUserObjectsVectorizedRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploaduserobjectsvectorizedrequest.cpp", "bdObjectStoreUploadUserObjectsVectorizedRequest::deserialize", 0x65u, "Cannot call deserialize on bdObjectStoreUploadUserObjectRequest");
  return 0;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::hasTags
==============
*/
char bdObjectStoreUploadUserObjectsVectorizedRequest::hasTags(bdObjectStoreUploadUserObjectsVectorizedRequest *this)
{
  unsigned int i; 
  bdObjectStoreMetadata *Metadata; 

  for ( i = 0; i < *(_DWORD *)&this->m_objects[4]; ++i )
  {
    bdHandleAssert(i < *(_DWORD *)&this->m_objects[4], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) + 3512i64 * i));
    if ( bdObjectStoreMetadata::hasTags(Metadata) )
      return 1;
  }
  return 0;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::includeInResponse
==============
*/
void bdObjectStoreUploadUserObjectsVectorizedRequest::includeInResponse(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const bdObjectStoreExtra extra)
{
  if ( extra == BD_OBJECTSTORE_EXTRA_VALIDATION_TOKEN )
  {
    this->m_requestValidationToken = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore/bdObjectStoreUploadUserObjectRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploaduserobjectsvectorizedrequest.cpp", "bdObjectStoreUploadUserObjectsVectorizedRequest::includeInResponse", 0xFEu, "bdObjectStoreExtra type is not supported");
    bdHandleAssert(0, "extra == BD_OBJECTSTORE_EXTRA_VALIDATION_TOKEN", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploaduserobjectsvectorizedrequest.cpp", "bdObjectStoreUploadUserObjectsVectorizedRequest::includeInResponse", 0xFFu, "Invalid bdObjectStoreExtra type");
  }
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::init
==============
*/
void bdObjectStoreUploadUserObjectsVectorizedRequest::init(bdObjectStoreUploadUserObjectsVectorizedRequest *this, const char *const context)
{
  bdObjectStoreObject *v3; 
  bdArray<bdObjectStoreObject> a; 

  bdObjectStoreRequestBase::setContext(this, context);
  this->m_windowSpaceRemaining = 64020i64;
  *(_QWORD *)&a.m_capacity = 1i64;
  v3 = (bdObjectStoreObject *)bdMemory::allocate(0xDB8ui64);
  a.m_data = v3;
  bdArray<bdObjectStoreObject>::operator=((bdArray<bdObjectStoreObject> *)(&this->bdStructBufferSerializable::__vftable + 3), &a);
  bdMemory::deallocate(v3);
  this->m_requestValidationToken = 0;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::reset
==============
*/
void bdObjectStoreUploadUserObjectsVectorizedRequest::reset(bdObjectStoreUploadUserObjectsVectorizedRequest *this)
{
  bdObjectStoreRequestBase::reset(this);
  bdArray<bdObjectStoreObject>::clear((bdArray<bdObjectStoreObject> *)(&this->bdStructBufferSerializable::__vftable + 3));
  this->m_windowSpaceRemaining = 64020i64;
  this->m_requestValidationToken = 0;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::restSerializeRequest
==============
*/
bool bdObjectStoreUploadUserObjectsVectorizedRequest::restSerializeRequest(bdObjectStoreUploadUserObjectsVectorizedRequest *this, bdRESTRequestBuilder *builder)
{
  bdLobbyService *v4; 
  bdAuthInfo *AuthInfo; 
  char v6; 
  unsigned int v7; 
  unsigned int i; 
  bdObjectStoreMetadata *Metadata; 
  const char *BaseRestUrl; 
  bdRESTURI *v11; 
  char v12; 
  bdRESTURI *v13; 
  bdRESTHeaders *v14; 
  bool v15; 
  bdRESTURI *v16; 
  bdRESTURI *v17; 
  bdRESTURI *v18; 
  bool v19; 
  __int64 v20; 
  unsigned int ContentSize; 
  const unsigned __int8 *Content; 
  bdObjectStoreMetadata *v23; 
  bool v24; 
  bdObjectStoreMetadata *v25; 
  bool hasTags; 
  bdObjectStoreMetadata *v27; 
  bdJSONSerializer *serializer; 
  char dest[65536]; 

  v4 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v4);
  if ( *(_DWORD *)&this->m_context[8] )
  {
    BaseRestUrl = bdObjectStoreRequestBase::getBaseRestUrl((bdObjectStoreUploadUserObjectsVectorizedRequest *)((char *)this - 48));
    if ( bdRESTRequestBuilder::setServiceName(builder, BaseRestUrl) )
    {
      v6 = 1;
      goto LABEL_4;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectSToreUploadUserObjectVectorizedRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploaduserobjectsvectorizedrequest.cpp", "bdObjectStoreUploadUserObjectsVectorizedRequest::restSerializeRequest", 0xBAu, "List of objects cannot be empty.");
  }
  v6 = 0;
LABEL_4:
  v7 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)&this->m_context[8] )
    {
      if ( !v6 )
        goto LABEL_12;
      v16 = bdRESTRequestBuilder::uri(builder);
      if ( !bdRESTURI::formatPath(v16, "/v2/core/users/objects/") )
        goto LABEL_12;
      goto LABEL_25;
    }
    bdHandleAssert(i < *(_DWORD *)&this->m_context[8], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(*(_QWORD *)&this->m_environment + 3512i64 * i));
    if ( bdObjectStoreMetadata::hasTags(Metadata) )
      break;
  }
  if ( !v6 )
    goto LABEL_12;
  v11 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::formatPath(v11, "/v2/users/objects/") )
    goto LABEL_12;
LABEL_25:
  v17 = bdRESTRequestBuilder::uri(builder);
  if ( !bdRESTURI::addQueryParam(v17, "client", AuthInfo->m_clientID) || (v18 = bdRESTRequestBuilder::uri(builder), !bdRESTURI::addQueryParam(v18, "context", &this[-1].m_objects[4])) )
  {
LABEL_12:
    v12 = 0;
    goto LABEL_13;
  }
  v12 = 1;
LABEL_13:
  if ( v12 && (LOBYTE(this->bdStructBufferSerializable::__vftable) || (v13 = bdRESTRequestBuilder::uri(builder), bdRESTURI::addQueryParam(v13, "extra", "validationToken"))) && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)5264724) && bdRESTRequestBuilder::setResourceName(builder, "ObjectsVectorizedResourceUsers", "put_objects") && (v14 = bdRESTRequestBuilder::headers(builder), bdRESTHeaders::setFieldAccept(v14, BD_MIME_JSON)) )
  {
    serializer = NULL;
    if ( bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer) && bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeBeginArray(serializer, "objects") )
    {
      v15 = 1;
      goto LABEL_30;
    }
  }
  else
  {
    serializer = NULL;
  }
  v15 = 0;
LABEL_30:
  if ( *(_DWORD *)&this->m_context[8] )
  {
    do
    {
      v19 = v15 && bdJSONSerializer::writeBeginObject(serializer);
      bdHandleAssert(v7 < *(_DWORD *)&this->m_context[8], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v20 = 3512i64 * v7;
      ContentSize = bdObjectStoreObject::getContentSize((bdObjectStoreObject *)(v20 + *(_QWORD *)&this->m_environment));
      bdHandleAssert(v7 < *(_DWORD *)&this->m_context[8], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      Content = bdObjectStoreObject::getContent((bdObjectStoreObject *)(v20 + *(_QWORD *)&this->m_environment));
      bdBase64::encode(Content, ContentSize, dest, 0xFFFFu);
      v24 = 0;
      if ( v19 && bdJSONSerializer::writeString(serializer, "content", dest) )
      {
        bdHandleAssert(v7 < *(_DWORD *)&this->m_context[8], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
        v23 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(v20 + *(_QWORD *)&this->m_environment));
        if ( bdObjectStoreMetadata::serializeToJSON(v23, serializer, "metadata", 0) )
          v24 = 1;
      }
      bdHandleAssert(v7 < *(_DWORD *)&this->m_context[8], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v25 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(v20 + *(_QWORD *)&this->m_environment));
      hasTags = bdObjectStoreMetadata::hasTags(v25);
      v15 = v24 && (!hasTags || (bdHandleAssert(v7++ < *(_DWORD *)&this->m_context[8], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed"), v27 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(v20 + *(_QWORD *)&this->m_environment)), bdObjectStoreMetadata::serializeTagsToJSON(v27, serializer, "tags"))) && bdJSONSerializer::writeEndObject(serializer);
    }
    while ( v7 < *(_DWORD *)&this->m_context[8] );
  }
  return v15 && bdJSONSerializer::writeEndArray(serializer) && bdJSONSerializer::writeEndObject(serializer);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedRequest::serializeWithLobbyService
==============
*/
_BOOL8 bdObjectStoreUploadUserObjectsVectorizedRequest::serializeWithLobbyService(bdObjectStoreUploadUserObjectsVectorizedRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  bool v6; 
  char requestValidationToken; 
  bool includeTags; 
  const char *ClientIDFromAuthInfo; 
  bool v10; 
  bool v11; 
  unsigned int i; 
  bool v13; 
  __int64 v14; 
  unsigned int ContentSize; 
  const unsigned __int8 *Content; 
  bdObjectStoreMetadata *Metadata; 
  bool v18; 
  bdObjectStoreMetadata *v19; 
  bdObjectStoreMetadata *v20; 
  bool v21; 
  unsigned int v22; 
  bool v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  size_t v26; 
  size_t v27; 
  bool v28; 
  bdJSONSerializer json; 
  bdObjectStoreHTTPHeader v31; 
  char url[1024]; 
  char buffer[64048]; 
  char dest[65536]; 

  v6 = bdStructBufferSerializer::writeString(serializer, 1u, "PUT", 0x10u);
  requestValidationToken = *((_BYTE *)&this->bdStructBufferSerializable::__vftable + 16);
  includeTags = bdObjectStoreUploadUserObjectsVectorizedRequest::hasTags((bdObjectStoreUploadUserObjectsVectorizedRequest *)((char *)this - 32));
  ClientIDFromAuthInfo = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreUploadUserObjectsVectorizedRequest *)((char *)this - 32), lobbyService);
  bdObjectStoreRequestBase::buildUserObjectsVectorizedURL((bdObjectStoreUploadUserObjectsVectorizedRequest *)((char *)this - 32), url, 0x400u, ClientIDFromAuthInfo, &this[-1].gap51[3], includeTags, requestValidationToken);
  v10 = v6 && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  if ( !HIDWORD(this->bdStructBufferSerializable::__vftable) )
  {
    v10 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectSToreUploadUserObjectVectorizedRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploaduserobjectsvectorizedrequest.cpp", "bdObjectStoreUploadUserObjectsVectorizedRequest::serializeWithLobbyService", 0x88u, "List of objects cannot be empty.");
  }
  memset_0(buffer, 0, 0xFA23ui64);
  bdJSONSerializer::bdJSONSerializer(&json, buffer, 0xFA23u);
  v11 = v10 && bdJSONSerializer::writeBeginObject(&json) && bdJSONSerializer::writeBeginArray(&json, "objects");
  for ( i = 0; i < HIDWORD(this->bdStructBufferSerializable::__vftable); ++i )
  {
    v13 = v11 && bdJSONSerializer::writeBeginObject(&json);
    bdHandleAssert(i < HIDWORD(this->bdStructBufferSerializable::__vftable), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    v14 = 3512i64 * i;
    ContentSize = bdObjectStoreObject::getContentSize((bdObjectStoreObject *)(v14 + *(_QWORD *)&this->m_context[12]));
    bdHandleAssert(i < HIDWORD(this->bdStructBufferSerializable::__vftable), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    Content = bdObjectStoreObject::getContent((bdObjectStoreObject *)(v14 + *(_QWORD *)&this->m_context[12]));
    bdBase64::encode(Content, ContentSize, dest, 0xFFFFu);
    v18 = 0;
    if ( v13 && bdJSONSerializer::writeString(&json, "content", dest) )
    {
      bdHandleAssert(i < HIDWORD(this->bdStructBufferSerializable::__vftable), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(v14 + *(_QWORD *)&this->m_context[12]));
      if ( bdObjectStoreMetadata::serializeToJSON(Metadata, &json, "metadata", 0) )
        v18 = 1;
    }
    bdHandleAssert(i < HIDWORD(this->bdStructBufferSerializable::__vftable), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    v19 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(v14 + *(_QWORD *)&this->m_context[12]));
    if ( bdObjectStoreMetadata::hasTags(v19) )
    {
      if ( !v18 )
        goto LABEL_29;
      bdHandleAssert(i < HIDWORD(this->bdStructBufferSerializable::__vftable), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v20 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(v14 + *(_QWORD *)&this->m_context[12]));
      v21 = !bdObjectStoreMetadata::serializeTagsToJSON(v20, &json, "tags");
    }
    else
    {
      v21 = !v18;
    }
    if ( v21 || !bdJSONSerializer::writeEndObject(&json) )
    {
LABEL_29:
      v11 = 0;
      continue;
    }
    v11 = 1;
  }
  v23 = 0;
  if ( v11 && bdJSONSerializer::writeEndArray(&json) && bdJSONSerializer::writeEndObject(&json) )
  {
    v22 = bdJSONSerializer::length(&json);
    if ( bdStructBufferSerializer::writeBlob(serializer, 3u, buffer, v22) )
      v23 = 1;
  }
  bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&v31);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v24 = -1i64;
  v25 = -1i64;
  do
    ++v25;
  while ( aContentType[v25] );
  v26 = 99i64;
  if ( v25 < 0x63 )
    v26 = v25;
  memcpy_0(&v31.__vftable + 2, "Content-Type", v26);
  v31.m_key[v26 - 16] = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v24;
  while ( aApplicationJso_0[v24] );
  v27 = 4095i64;
  if ( v24 < 0xFFF )
    v27 = v24;
  memcpy_0(v31.m_value, "application/json", v27);
  v31.m_value[v27] = 0;
  v28 = v23 && bdStructBufferSerializer::writeObject(serializer, 4u, &v31);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v31.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&v31.gap1074[4]);
  bdJSONSerializer::~bdJSONSerializer(&json);
  return v28;
}

