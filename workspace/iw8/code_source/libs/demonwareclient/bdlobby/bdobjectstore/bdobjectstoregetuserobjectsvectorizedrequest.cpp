/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::init
==============
*/

void __fastcall bdObjectStoreGetUserObjectsVectorizedRequest::init(bdObjectStoreGetUserObjectsVectorizedRequest *this, const char *const context, const bdArray<bdObjectStoreCacheAwareObjectID> *objectIDs)
{
  ?init@bdObjectStoreGetUserObjectsVectorizedRequest@@QEAAXQEBDAEBV?$bdArray@VbdObjectStoreCacheAwareObjectID@@@@@Z(this, context, objectIDs);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::bdObjectStoreGetUserObjectsVectorizedRequest
==============
*/

void __fastcall bdObjectStoreGetUserObjectsVectorizedRequest::bdObjectStoreGetUserObjectsVectorizedRequest(bdObjectStoreGetUserObjectsVectorizedRequest *this, const char *const context, const bdArray<bdObjectStoreCacheAwareObjectID> *objectIDs)
{
  ??0bdObjectStoreGetUserObjectsVectorizedRequest@@QEAA@QEBDAEBV?$bdArray@VbdObjectStoreCacheAwareObjectID@@@@@Z(this, context, objectIDs);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::reset
==============
*/

void __fastcall bdObjectStoreGetUserObjectsVectorizedRequest::reset(bdObjectStoreGetUserObjectsVectorizedRequest *this)
{
  ?reset@bdObjectStoreGetUserObjectsVectorizedRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::restSerializeRequest
==============
*/

bool __fastcall bdObjectStoreGetUserObjectsVectorizedRequest::restSerializeRequest(bdObjectStoreGetUserObjectsVectorizedRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdObjectStoreGetUserObjectsVectorizedRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreGetUserObjectsVectorizedRequest::deserialize(bdObjectStoreGetUserObjectsVectorizedRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetUserObjectsVectorizedRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreGetUserObjectsVectorizedRequest::serializeWithLobbyService(bdObjectStoreGetUserObjectsVectorizedRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreGetUserObjectsVectorizedRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::bdObjectStoreGetUserObjectsVectorizedRequest
==============
*/

void __fastcall bdObjectStoreGetUserObjectsVectorizedRequest::bdObjectStoreGetUserObjectsVectorizedRequest(bdObjectStoreGetUserObjectsVectorizedRequest *this, const char *const client, const char *const context, const bdArray<bdObjectStoreCacheAwareObjectID> *objectIDs)
{
  ??0bdObjectStoreGetUserObjectsVectorizedRequest@@QEAA@QEBD0AEBV?$bdArray@VbdObjectStoreCacheAwareObjectID@@@@@Z(this, client, context, objectIDs);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::bdObjectStoreGetUserObjectsVectorizedRequest
==============
*/
void bdObjectStoreGetUserObjectsVectorizedRequest::bdObjectStoreGetUserObjectsVectorizedRequest(bdObjectStoreGetUserObjectsVectorizedRequest *this, const char *const client, const char *const context, const bdArray<bdObjectStoreCacheAwareObjectID> *objectIDs, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserObjectsVectorizedRequest::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserObjectsVectorizedRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserObjectsVectorizedRequest_vtbl *)&bdObjectStoreGetUserObjectsVectorizedRequest::`vftable'{for `bdObjectStoreRequestBase'};
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserObjectsVectorizedRequest::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = &bdObjectStoreGetUserObjectsVectorizedRequest::`vftable'{for `bdRESTRequest'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserObjectsVectorizedRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = 0i64;
  *(_QWORD *)this->m_objectIDs = 0i64;
  bdObjectStoreRequestBase::setContext(this, context);
  bdArray<bdObjectStoreCacheAwareObjectID>::operator=((bdArray<bdObjectStoreCacheAwareObjectID> *)(&this->bdStructBufferSerializable::__vftable + 3), objectIDs);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::bdObjectStoreGetUserObjectsVectorizedRequest
==============
*/
void bdObjectStoreGetUserObjectsVectorizedRequest::bdObjectStoreGetUserObjectsVectorizedRequest(bdObjectStoreGetUserObjectsVectorizedRequest *this, const char *const context, const bdArray<bdObjectStoreCacheAwareObjectID> *objectIDs, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserObjectsVectorizedRequest::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserObjectsVectorizedRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserObjectsVectorizedRequest_vtbl *)&bdObjectStoreGetUserObjectsVectorizedRequest::`vftable'{for `bdObjectStoreRequestBase'};
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserObjectsVectorizedRequest::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = &bdObjectStoreGetUserObjectsVectorizedRequest::`vftable'{for `bdRESTRequest'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserObjectsVectorizedRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = 0i64;
  *(_QWORD *)this->m_objectIDs = 0i64;
  bdObjectStoreRequestBase::setContext(this, context);
  bdArray<bdObjectStoreCacheAwareObjectID>::operator=((bdArray<bdObjectStoreCacheAwareObjectID> *)(&this->bdStructBufferSerializable::__vftable + 3), objectIDs);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::deserialize
==============
*/
bool bdObjectStoreGetUserObjectsVectorizedRequest::deserialize(bdObjectStoreGetUserObjectsVectorizedRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetuserobjectsvectorizedrequest.cpp", "bdObjectStoreGetUserObjectsVectorizedRequest::deserialize", 0x2Fu, "Cannot call deserialize on bdObjectStoreUploadUserObjectRequest");
  return 0;
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::init
==============
*/
void bdObjectStoreGetUserObjectsVectorizedRequest::init(bdObjectStoreGetUserObjectsVectorizedRequest *this, const char *const context, const bdArray<bdObjectStoreCacheAwareObjectID> *objectIDs)
{
  bdObjectStoreRequestBase::setContext(this, context);
  bdArray<bdObjectStoreCacheAwareObjectID>::operator=((bdArray<bdObjectStoreCacheAwareObjectID> *)(&this->bdStructBufferSerializable::__vftable + 3), objectIDs);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::reset
==============
*/
void bdObjectStoreGetUserObjectsVectorizedRequest::reset(bdObjectStoreGetUserObjectsVectorizedRequest *this)
{
  unsigned int v2; 
  bdObjectStoreCacheAwareObjectID *v3; 
  __int64 v4; 

  bdObjectStoreRequestBase::reset(this);
  v2 = *(_DWORD *)&this->m_objectIDs[4];
  v3 = (bdObjectStoreCacheAwareObjectID *)*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3);
  if ( v2 )
  {
    v4 = v2;
    do
    {
      bdObjectStoreCacheAwareObjectID::~bdObjectStoreCacheAwareObjectID(v3++);
      --v4;
    }
    while ( v4 );
    v3 = (bdObjectStoreCacheAwareObjectID *)*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3);
  }
  bdMemory::deallocate(v3);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = 0i64;
  *(_QWORD *)this->m_objectIDs = 0i64;
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::restSerializeRequest
==============
*/
_BOOL8 bdObjectStoreGetUserObjectsVectorizedRequest::restSerializeRequest(bdObjectStoreGetUserObjectsVectorizedRequest *this, bdRESTRequestBuilder *builder)
{
  bdLobbyService *v4; 
  bdAuthInfo *AuthInfo; 
  const char *BaseRestUrl; 
  bdRESTURI *v7; 
  bdRESTURI *v8; 
  bdRESTURI *v9; 
  bdRESTHeaders *v10; 
  bool v11; 
  bool v12; 
  unsigned int i; 
  bdRESTHeaders *v14; 
  bool v15; 
  __int64 v17; 
  bdJSONSerializer json; 
  char buffer[4096]; 

  v17 = -2i64;
  v4 = bdRESTRequestBuilder::lobbyService(builder);
  AuthInfo = bdLobbyService::getAuthInfo(v4);
  v11 = 0;
  if ( bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)4670804) )
  {
    BaseRestUrl = bdObjectStoreRequestBase::getBaseRestUrl((bdObjectStoreGetUserObjectsVectorizedRequest *)((char *)this - 48));
    if ( bdRESTRequestBuilder::setServiceName(builder, BaseRestUrl) )
    {
      v7 = bdRESTRequestBuilder::uri(builder);
      if ( bdRESTURI::formatPath(v7, "/v2/core/users/objects/") )
      {
        v8 = bdRESTRequestBuilder::uri(builder);
        if ( bdRESTURI::addQueryParam(v8, "client", AuthInfo->m_clientID) )
        {
          v9 = bdRESTRequestBuilder::uri(builder);
          if ( bdRESTURI::addQueryParam(v9, "context", (const char *)&this[-1].bdStructBufferSerializable::__vftable + 20) && bdRESTRequestBuilder::setResourceName(builder, "ObjectsVectorizedResourceUsers", "get_objects") )
          {
            v10 = bdRESTRequestBuilder::headers(builder);
            if ( bdRESTHeaders::setFieldAccept(v10, BD_MIME_JSON) )
              v11 = 1;
          }
        }
      }
    }
  }
  bdJSONSerializer::bdJSONSerializer(&json, buffer, 0x1000u);
  v12 = v11 && bdJSONSerializer::writeBeginArray(&json);
  for ( i = 0; i < *(_DWORD *)&this->m_context[8]; ++i )
    v12 = v12 && (bdHandleAssert(i < *(_DWORD *)&this->m_context[8], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreCacheAwareObjectID>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed", v17), bdObjectStoreCacheAwareObjectID::serializeToJSON((bdObjectStoreCacheAwareObjectID *)(*(_QWORD *)&this->m_environment + 184i64 * i), &json));
  v15 = 0;
  if ( v12 && bdJSONSerializer::writeEndArray(&json) )
  {
    v14 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::addField(v14, "DW-Objectstore-ObjectIDs", buffer) )
      v15 = 1;
  }
  bdJSONSerializer::~bdJSONSerializer(&json);
  return v15;
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedRequest::serializeWithLobbyService
==============
*/
_BOOL8 bdObjectStoreGetUserObjectsVectorizedRequest::serializeWithLobbyService(bdObjectStoreGetUserObjectsVectorizedRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  bdObjectStoreRequestBase *v5; 
  const char *context; 
  const char *ClientIDFromAuthInfo; 
  bool v8; 
  bool v9; 
  unsigned int v10; 
  bool v11; 
  bool v12; 
  unsigned __int64 v13; 
  size_t v14; 
  bool v15; 
  bdJSONSerializer json; 
  bdObjectStoreCacheAwareObjectID v18; 
  bdObjectStoreHTTPHeader v19; 
  char url[1024]; 

  v5 = (bdObjectStoreGetUserObjectsVectorizedRequest *)((char *)this - 32);
  context = &this[-1].m_objectIDs[4];
  ClientIDFromAuthInfo = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreGetUserObjectsVectorizedRequest *)((char *)this - 32), lobbyService);
  bdObjectStoreRequestBase::buildUserObjectsVectorizedURL(v5, url, 0x400u, ClientIDFromAuthInfo, context, 0, 0);
  v8 = bdStructBufferSerializer::writeString(serializer, 1u, "GET", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&v19);
  bdJSONSerializer::bdJSONSerializer(&json, v19.m_value, 0x1000u);
  v9 = v8 && bdJSONSerializer::writeBeginArray(&json);
  v10 = 0;
  if ( HIDWORD(this->bdStructBufferSerializable::__vftable) )
  {
    v11 = HIDWORD(this->bdStructBufferSerializable::__vftable) != 0;
    do
    {
      bdHandleAssert(v11, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreCacheAwareObjectID>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v18 = *(bdObjectStoreCacheAwareObjectID *)(184i64 * v10 + *(_QWORD *)&this->m_context[12]);
      v9 = v9 && bdObjectStoreCacheAwareObjectID::serializeToJSON(&v18, &json);
      bdObjectStoreCacheAwareObjectID::~bdObjectStoreCacheAwareObjectID(&v18);
      v11 = ++v10 < HIDWORD(this->bdStructBufferSerializable::__vftable);
    }
    while ( v10 < HIDWORD(this->bdStructBufferSerializable::__vftable) );
  }
  v12 = v9 && bdJSONSerializer::writeEndArray(&json);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v13 = -1i64;
  do
    ++v13;
  while ( aDwObjectstoreO[v13] );
  v14 = 99i64;
  if ( v13 < 0x63 )
    v14 = v13;
  memcpy_0(&v19.__vftable + 2, "DW-Objectstore-ObjectIDs", v14);
  v19.m_key[v14 - 16] = 0;
  v15 = v12 && bdStructBufferSerializer::writeObject(serializer, 4u, &v19);
  bdJSONSerializer::~bdJSONSerializer(&json);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v19.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&v19.gap1074[4]);
  return v15;
}

