/*
==============
bdObjectStoreGetPublisherObjectsResponse::reset
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsResponse::reset(bdObjectStoreGetPublisherObjectsResponse *this)
{
  ?reset@bdObjectStoreGetPublisherObjectsResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse(bdObjectStoreGetPublisherObjectsResponse *this, const bdObjectStoreGetPublisherObjectsResponse *__that)
{
  ??0bdObjectStoreGetPublisherObjectsResponse@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::setObjectList
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsResponse::setObjectList(bdObjectStoreGetPublisherObjectsResponse *this, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize)
{
  ?setObjectList@bdObjectStoreGetPublisherObjectsResponse@@QEAAXPEAVbdObjectStoreErrorWrappedObject@@I@Z(this, objectList, objectListSize);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex
==============
*/

bdObjectStoreObject *__fastcall bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(bdObjectStoreGetPublisherObjectsResponse *this, unsigned int objectListIndex)
{
  return ?getObjectAtIndex@bdObjectStoreGetPublisherObjectsResponse@@QEAAAEAVbdObjectStoreObject@@I@Z(this, objectListIndex);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectsResponse::deserialize(bdObjectStoreGetPublisherObjectsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetPublisherObjectsResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse(bdObjectStoreGetPublisherObjectsResponse *this)
{
  ??0bdObjectStoreGetPublisherObjectsResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::serialize
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectsResponse::serialize(bdObjectStoreGetPublisherObjectsResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreGetPublisherObjectsResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::getObjectList
==============
*/

bdObjectStoreErrorWrappedObject *__fastcall bdObjectStoreGetPublisherObjectsResponse::getObjectList(bdObjectStoreGetPublisherObjectsResponse *this)
{
  return ?getObjectList@bdObjectStoreGetPublisherObjectsResponse@@QEAAPEAVbdObjectStoreErrorWrappedObject@@XZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse(bdObjectStoreGetPublisherObjectsResponse *this, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize)
{
  ??0bdObjectStoreGetPublisherObjectsResponse@@QEAA@PEAVbdObjectStoreErrorWrappedObject@@I@Z(this, objectList, objectListSize);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::setObjectForResponse
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsResponse::setObjectForResponse(bdObjectStoreGetPublisherObjectsResponse *this, unsigned int objectListIndex)
{
  ?setObjectForResponse@bdObjectStoreGetPublisherObjectsResponse@@QEAAXI@Z(this, objectListIndex);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::getAuthorizationHeaderValue
==============
*/

const char *__fastcall bdObjectStoreGetPublisherObjectsResponse::getAuthorizationHeaderValue(bdObjectStoreGetPublisherObjectsResponse *this)
{
  return ?getAuthorizationHeaderValue@bdObjectStoreGetPublisherObjectsResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::hasMoreObjects
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectsResponse::hasMoreObjects(bdObjectStoreGetPublisherObjectsResponse *this, unsigned int objectListIndex)
{
  return ?hasMoreObjects@bdObjectStoreGetPublisherObjectsResponse@@IEBA_NI@Z(this, objectListIndex);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::getObjectListSize
==============
*/

unsigned int __fastcall bdObjectStoreGetPublisherObjectsResponse::getObjectListSize(bdObjectStoreGetPublisherObjectsResponse *this)
{
  return ?getObjectListSize@bdObjectStoreGetPublisherObjectsResponse@@QEBAIXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse
==============
*/
void bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse(bdObjectStoreGetPublisherObjectsResponse *this, const bdObjectStoreGetPublisherObjectsResponse *__that, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectsResponse::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)this->gap2058, (const bdReferencable *)((char *)&__that->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&__that->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8));
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectsResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable, &__that->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectsResponse_vtbl *)&bdObjectStoreGetPublisherObjectsResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = *((_QWORD *)&__that->bdStructBufferSerializable::__vftable + 2);
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = *((_DWORD *)&__that->bdStructBufferSerializable::__vftable + 6);
  *((_QWORD *)&this->m_response.__vftable + 1) = &bdObjectStoreGetPublisherObjectResponse::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)this->m_response.gap1020, (const bdReferencable *)((char *)&__that->m_response.__vftable + *(int *)(*((_QWORD *)&__that->m_response.__vftable + 1) + 4i64) + 8));
  this->m_response.__vftable = (bdObjectStoreGetPublisherObjectResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->m_response.bdStructBufferSerializable, &__that->m_response.bdStructBufferSerializable);
  this->m_response.__vftable = (bdObjectStoreGetPublisherObjectResponse_vtbl *)&bdObjectStoreGetPublisherObjectResponse::`vftable';
  this->m_response.__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->m_response.__vftable + *(int *)(*((_QWORD *)&this->m_response.__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectResponse::`vftable'{for `bdReferencable'};
  memcpy_0(&this->m_response.__vftable + 2, &__that->m_response.__vftable + 2, 0x1000ui64);
  this->m_response.m_object = __that->m_response.m_object;
  memcpy_0(this->m_authorizationHeaderValue, __that->m_authorizationHeaderValue, sizeof(this->m_authorizationHeaderValue));
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse
==============
*/
void bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse(bdObjectStoreGetPublisherObjectsResponse *this, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize, int a4)
{
  int v7; 

  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectsResponse::`vbtable';
    *(_QWORD *)this->gap2058 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2058[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectsResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectsResponse_vtbl *)&bdObjectStoreGetPublisherObjectsResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsResponse::`vftable'{for `bdReferencable'};
  bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse(&this->m_response);
  memset_0(this->m_authorizationHeaderValue, 0, sizeof(this->m_authorizationHeaderValue));
  v7 = 50;
  bdHandleAssert(objectListSize - 1 <= 0x31, "objectListSize > 0 && objectListSize <= BD_OBJECTSTORE_MAX_OBJECT_IDS_PER_REQUEST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectsresponse.cpp", "bdObjectStoreGetPublisherObjectsResponse::setObjectList", 0x48u, "Length of objectList should be > 0 or <= %d", v7);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = objectList;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = objectListSize;
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse
==============
*/
void bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse(bdObjectStoreGetPublisherObjectsResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectsResponse::`vbtable';
    *(_QWORD *)this->gap2058 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2058[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectsResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectsResponse_vtbl *)&bdObjectStoreGetPublisherObjectsResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsResponse::`vftable'{for `bdReferencable'};
  bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse(&this->m_response);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
  bdObjectStoreGetPublisherObjectResponse::reset(&this->m_response);
  memset_0(this->m_authorizationHeaderValue, 0, sizeof(this->m_authorizationHeaderValue));
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::deserialize
==============
*/
bool bdObjectStoreGetPublisherObjectsResponse::deserialize(bdObjectStoreGetPublisherObjectsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse((bdObjectStoreGetPublisherObjectsResponse *)((char *)this - 8), deserializer, &this->m_response.gap1020[8], *((bdObjectStoreErrorWrappedObject **)&this->bdStructBufferSerializable::__vftable + 1), *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 4), PUBLISHER_OWNER_TYPE);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::getAuthorizationHeaderValue
==============
*/
char *bdObjectStoreGetPublisherObjectsResponse::getAuthorizationHeaderValue(bdObjectStoreGetPublisherObjectsResponse *this)
{
  return this->m_authorizationHeaderValue;
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex
==============
*/
bdObjectStoreObject *bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(bdObjectStoreGetPublisherObjectsResponse *this, unsigned int objectListIndex)
{
  if ( objectListIndex < *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) )
    return bdObjectStoreErrorWrappedObject::getObject((bdObjectStoreErrorWrappedObject *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) + 3528i64 * objectListIndex));
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreGetPublisherObjectsResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectsresponse.cpp", "bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex", 0x36u, "getObjectAtIndex called when no more objects are available, returning first object");
  return bdObjectStoreErrorWrappedObject::getObject(*((bdObjectStoreErrorWrappedObject **)&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::getObjectList
==============
*/
bdObjectStoreErrorWrappedObject *bdObjectStoreGetPublisherObjectsResponse::getObjectList(bdObjectStoreGetPublisherObjectsResponse *this)
{
  return (bdObjectStoreErrorWrappedObject *)*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::getObjectListSize
==============
*/
__int64 bdObjectStoreGetPublisherObjectsResponse::getObjectListSize(bdObjectStoreGetPublisherObjectsResponse *this)
{
  return *((unsigned int *)&this->bdStructBufferSerializable::__vftable + 6);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::hasMoreObjects
==============
*/
bool bdObjectStoreGetPublisherObjectsResponse::hasMoreObjects(bdObjectStoreGetPublisherObjectsResponse *this, unsigned int objectListIndex)
{
  return objectListIndex < *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::reset
==============
*/
void bdObjectStoreGetPublisherObjectsResponse::reset(bdObjectStoreGetPublisherObjectsResponse *this)
{
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
  bdObjectStoreGetPublisherObjectResponse::reset(&this->m_response);
  memset_0(this->m_authorizationHeaderValue, 0, sizeof(this->m_authorizationHeaderValue));
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::serialize
==============
*/
bool bdObjectStoreGetPublisherObjectsResponse::serialize(bdObjectStoreGetPublisherObjectsResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectsresponse.cpp", "bdObjectStoreGetPublisherObjectsResponse::serialize", 0x5Du, "Cannot call serialize on bdObjectStoreGetPublisherObjectsResponse");
  return 0;
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::setObjectForResponse
==============
*/
void bdObjectStoreGetPublisherObjectsResponse::setObjectForResponse(bdObjectStoreGetPublisherObjectsResponse *this, unsigned int objectListIndex)
{
  bdObjectStoreObject *Object; 

  Object = bdObjectStoreErrorWrappedObject::getObject((bdObjectStoreErrorWrappedObject *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) + 3528i64 * objectListIndex));
  bdObjectStoreGetPublisherObjectResponse::setObject(&this->m_response, Object);
}

/*
==============
bdObjectStoreGetPublisherObjectsResponse::setObjectList
==============
*/
void bdObjectStoreGetPublisherObjectsResponse::setObjectList(bdObjectStoreGetPublisherObjectsResponse *this, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize)
{
  int v6; 

  v6 = 50;
  bdHandleAssert(objectListSize - 1 <= 0x31, "objectListSize > 0 && objectListSize <= BD_OBJECTSTORE_MAX_OBJECT_IDS_PER_REQUEST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectsresponse.cpp", "bdObjectStoreGetPublisherObjectsResponse::setObjectList", 0x48u, "Length of objectList should be > 0 or <= %d", v6);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = objectList;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = objectListSize;
}

