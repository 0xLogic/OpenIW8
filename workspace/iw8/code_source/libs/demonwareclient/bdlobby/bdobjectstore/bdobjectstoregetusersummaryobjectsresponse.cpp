/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::getObjectListSize
==============
*/

unsigned int __fastcall bdObjectStoreGetUserSummaryObjectsResponse::getObjectListSize(bdObjectStoreGetUserSummaryObjectsResponse *this)
{
  return ?getObjectListSize@bdObjectStoreGetUserSummaryObjectsResponse@@QEBAIXZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::reset
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsResponse::reset(bdObjectStoreGetUserSummaryObjectsResponse *this)
{
  ?reset@bdObjectStoreGetUserSummaryObjectsResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::getAuthorizationHeaderValue
==============
*/

const char *__fastcall bdObjectStoreGetUserSummaryObjectsResponse::getAuthorizationHeaderValue(bdObjectStoreGetUserSummaryObjectsResponse *this)
{
  return ?getAuthorizationHeaderValue@bdObjectStoreGetUserSummaryObjectsResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::setObjectForResponse
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsResponse::setObjectForResponse(bdObjectStoreGetUserSummaryObjectsResponse *this, unsigned int objectListIndex)
{
  ?setObjectForResponse@bdObjectStoreGetUserSummaryObjectsResponse@@QEAAXI@Z(this, objectListIndex);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::serialize
==============
*/

bool __fastcall bdObjectStoreGetUserSummaryObjectsResponse::serialize(bdObjectStoreGetUserSummaryObjectsResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreGetUserSummaryObjectsResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex
==============
*/

bdObjectStoreObject *__fastcall bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(bdObjectStoreGetUserSummaryObjectsResponse *this, unsigned int objectListIndex)
{
  return ?getObjectAtIndex@bdObjectStoreGetUserSummaryObjectsResponse@@QEAAAEAVbdObjectStoreObject@@I@Z(this, objectListIndex);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::bdObjectStoreGetUserSummaryObjectsResponse
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsResponse::bdObjectStoreGetUserSummaryObjectsResponse(bdObjectStoreGetUserSummaryObjectsResponse *this)
{
  ??0bdObjectStoreGetUserSummaryObjectsResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::hasMoreObjects
==============
*/

bool __fastcall bdObjectStoreGetUserSummaryObjectsResponse::hasMoreObjects(bdObjectStoreGetUserSummaryObjectsResponse *this, unsigned int objectListIndex)
{
  return ?hasMoreObjects@bdObjectStoreGetUserSummaryObjectsResponse@@IEBA_NI@Z(this, objectListIndex);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::getObjectList
==============
*/

bdObjectStoreErrorWrappedObject *__fastcall bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(bdObjectStoreGetUserSummaryObjectsResponse *this)
{
  return ?getObjectList@bdObjectStoreGetUserSummaryObjectsResponse@@QEAAPEAVbdObjectStoreErrorWrappedObject@@XZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::setObjectList
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsResponse::setObjectList(bdObjectStoreGetUserSummaryObjectsResponse *this, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize)
{
  ?setObjectList@bdObjectStoreGetUserSummaryObjectsResponse@@QEAAXPEAVbdObjectStoreErrorWrappedObject@@I@Z(this, objectList, objectListSize);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreGetUserSummaryObjectsResponse::deserialize(bdObjectStoreGetUserSummaryObjectsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetUserSummaryObjectsResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::bdObjectStoreGetUserSummaryObjectsResponse
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsResponse::bdObjectStoreGetUserSummaryObjectsResponse(bdObjectStoreGetUserSummaryObjectsResponse *this, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize)
{
  ??0bdObjectStoreGetUserSummaryObjectsResponse@@QEAA@PEAVbdObjectStoreErrorWrappedObject@@I@Z(this, objectList, objectListSize);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::bdObjectStoreGetUserSummaryObjectsResponse
==============
*/
void bdObjectStoreGetUserSummaryObjectsResponse::bdObjectStoreGetUserSummaryObjectsResponse(bdObjectStoreGetUserSummaryObjectsResponse *this, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize, int a4)
{
  int v7; 

  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectsResponse::`vbtable';
    *(_QWORD *)this->gap2058 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2058[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserSummaryObjectsResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserSummaryObjectsResponse_vtbl *)&bdObjectStoreGetUserSummaryObjectsResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectsResponse::`vftable'{for `bdReferencable'};
  bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse(&this->m_response);
  memset_0(this->m_authorizationHeaderValue, 0, sizeof(this->m_authorizationHeaderValue));
  v7 = 50;
  bdHandleAssert(objectListSize - 1 <= 0x31, "objectListSize > 0 && objectListSize <= BD_OBJECTSTORE_MAX_OBJECT_IDS_PER_REQUEST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectsresponse.cpp", "bdObjectStoreGetUserSummaryObjectsResponse::setObjectList", 0x47u, "Length of objectList should be > 0 and <= %d", v7);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = objectList;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = objectListSize;
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::bdObjectStoreGetUserSummaryObjectsResponse
==============
*/
void bdObjectStoreGetUserSummaryObjectsResponse::bdObjectStoreGetUserSummaryObjectsResponse(bdObjectStoreGetUserSummaryObjectsResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectsResponse::`vbtable';
    *(_QWORD *)this->gap2058 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2058[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserSummaryObjectsResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserSummaryObjectsResponse_vtbl *)&bdObjectStoreGetUserSummaryObjectsResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectsResponse::`vftable'{for `bdReferencable'};
  bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse(&this->m_response);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
  bdObjectStoreGetUserSummaryObjectResponse::reset(&this->m_response);
  memset_0(this->m_authorizationHeaderValue, 0, sizeof(this->m_authorizationHeaderValue));
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::deserialize
==============
*/
bool bdObjectStoreGetUserSummaryObjectsResponse::deserialize(bdObjectStoreGetUserSummaryObjectsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse((bdObjectStoreGetUserSummaryObjectsResponse *)((char *)this - 8), deserializer, &this->m_response.gap1020[8], *((bdObjectStoreErrorWrappedObject **)&this->bdStructBufferSerializable::__vftable + 1), *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 4), USER_SUMMARY_OWNER_TYPE);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::getAuthorizationHeaderValue
==============
*/
char *bdObjectStoreGetUserSummaryObjectsResponse::getAuthorizationHeaderValue(bdObjectStoreGetUserSummaryObjectsResponse *this)
{
  return this->m_authorizationHeaderValue;
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex
==============
*/
bdObjectStoreObject *bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(bdObjectStoreGetUserSummaryObjectsResponse *this, unsigned int objectListIndex)
{
  if ( objectListIndex < *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) )
    return bdObjectStoreErrorWrappedObject::getObject((bdObjectStoreErrorWrappedObject *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) + 3528i64 * objectListIndex));
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreGetUserSummaryObjectsResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectsresponse.cpp", "bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex", 0x35u, "getObjectAtIndex called when no more objects are available, returning first object");
  return bdObjectStoreErrorWrappedObject::getObject(*((bdObjectStoreErrorWrappedObject **)&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::getObjectList
==============
*/
bdObjectStoreErrorWrappedObject *bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(bdObjectStoreGetUserSummaryObjectsResponse *this)
{
  return (bdObjectStoreErrorWrappedObject *)*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::getObjectListSize
==============
*/
__int64 bdObjectStoreGetUserSummaryObjectsResponse::getObjectListSize(bdObjectStoreGetUserSummaryObjectsResponse *this)
{
  return *((unsigned int *)&this->bdStructBufferSerializable::__vftable + 6);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::hasMoreObjects
==============
*/
bool bdObjectStoreGetUserSummaryObjectsResponse::hasMoreObjects(bdObjectStoreGetUserSummaryObjectsResponse *this, unsigned int objectListIndex)
{
  return objectListIndex < *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::reset
==============
*/
void bdObjectStoreGetUserSummaryObjectsResponse::reset(bdObjectStoreGetUserSummaryObjectsResponse *this)
{
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
  bdObjectStoreGetUserSummaryObjectResponse::reset(&this->m_response);
  memset_0(this->m_authorizationHeaderValue, 0, sizeof(this->m_authorizationHeaderValue));
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::serialize
==============
*/
bool bdObjectStoreGetUserSummaryObjectsResponse::serialize(bdObjectStoreGetUserSummaryObjectsResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectsresponse.cpp", "bdObjectStoreGetUserSummaryObjectsResponse::serialize", 0x5Cu, "Cannot call serialize on bdObjectStoreGetUserSummaryObjectsResponse");
  return 0;
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::setObjectForResponse
==============
*/
void bdObjectStoreGetUserSummaryObjectsResponse::setObjectForResponse(bdObjectStoreGetUserSummaryObjectsResponse *this, unsigned int objectListIndex)
{
  bdObjectStoreObject *Object; 

  Object = bdObjectStoreErrorWrappedObject::getObject((bdObjectStoreErrorWrappedObject *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) + 3528i64 * objectListIndex));
  bdObjectStoreGetUserSummaryObjectResponse::setObject(&this->m_response, Object);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsResponse::setObjectList
==============
*/
void bdObjectStoreGetUserSummaryObjectsResponse::setObjectList(bdObjectStoreGetUserSummaryObjectsResponse *this, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize)
{
  int v6; 

  v6 = 50;
  bdHandleAssert(objectListSize - 1 <= 0x31, "objectListSize > 0 && objectListSize <= BD_OBJECTSTORE_MAX_OBJECT_IDS_PER_REQUEST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectsresponse.cpp", "bdObjectStoreGetUserSummaryObjectsResponse::setObjectList", 0x47u, "Length of objectList should be > 0 and <= %d", v6);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = objectList;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = objectListSize;
}

