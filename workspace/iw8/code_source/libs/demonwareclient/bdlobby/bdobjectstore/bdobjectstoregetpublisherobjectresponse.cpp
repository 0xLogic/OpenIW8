/*
==============
bdObjectStoreGetPublisherObjectResponse::setObject
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectResponse::setObject(bdObjectStoreGetPublisherObjectResponse *this, bdObjectStoreObject *object)
{
  ?setObject@bdObjectStoreGetPublisherObjectResponse@@QEAAXAEAVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::serialize
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectResponse::serialize(bdObjectStoreGetPublisherObjectResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreGetPublisherObjectResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::getObject
==============
*/

bdObjectStoreObject *__fastcall bdObjectStoreGetPublisherObjectResponse::getObject(bdObjectStoreGetPublisherObjectResponse *this)
{
  return ?getObject@bdObjectStoreGetPublisherObjectResponse@@QEAAAEAVbdObjectStoreObject@@XZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::getAuthorizationHeaderValue
==============
*/

const char *__fastcall bdObjectStoreGetPublisherObjectResponse::getAuthorizationHeaderValue(bdObjectStoreGetPublisherObjectResponse *this)
{
  return ?getAuthorizationHeaderValue@bdObjectStoreGetPublisherObjectResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::reset
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectResponse::reset(bdObjectStoreGetPublisherObjectResponse *this)
{
  ?reset@bdObjectStoreGetPublisherObjectResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse(bdObjectStoreGetPublisherObjectResponse *this)
{
  ??0bdObjectStoreGetPublisherObjectResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse(bdObjectStoreGetPublisherObjectResponse *this, bdObjectStoreObject *object)
{
  ??0bdObjectStoreGetPublisherObjectResponse@@QEAA@AEAVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectResponse::deserialize(bdObjectStoreGetPublisherObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetPublisherObjectResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse
==============
*/
void bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse(bdObjectStoreGetPublisherObjectResponse *this, bdObjectStoreObject *object, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectResponse::`vbtable';
    *(_QWORD *)this->gap1020 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1020[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectResponse_vtbl *)&bdObjectStoreGetPublisherObjectResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectResponse::`vftable'{for `bdReferencable'};
  this->m_object = object;
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse
==============
*/
void bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse(bdObjectStoreGetPublisherObjectResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectResponse::`vbtable';
    *(_QWORD *)this->gap1020 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1020[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectResponse_vtbl *)&bdObjectStoreGetPublisherObjectResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectResponse::`vftable'{for `bdReferencable'};
  this->m_object = NULL;
  memset_0(&this->bdStructBufferSerializable::__vftable + 2, 0, 0x1000ui64);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::deserialize
==============
*/
bool bdObjectStoreGetPublisherObjectResponse::deserialize(bdObjectStoreGetPublisherObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdObjectStoreJSONResponseBase::deserializeLargeObjectMetadataResponse((bdObjectStoreGetPublisherObjectResponse *)((char *)this - 8), deserializer, PUBLISHER_OWNER_TYPE, (char *)&this->bdStructBufferSerializable::__vftable + 8, *(bdObjectStoreObject **)&this->m_authorizationHeaderValue[4072]);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::getAuthorizationHeaderValue
==============
*/
bdStructBufferSerializable_vtbl **bdObjectStoreGetPublisherObjectResponse::getAuthorizationHeaderValue(bdObjectStoreGetPublisherObjectResponse *this)
{
  return &this->bdStructBufferSerializable::__vftable + 2;
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::getObject
==============
*/
bdObjectStoreObject *bdObjectStoreGetPublisherObjectResponse::getObject(bdObjectStoreGetPublisherObjectResponse *this)
{
  bdHandleAssert(this->m_object != NULL, "m_object != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectresponse.cpp", "bdObjectStoreGetPublisherObjectResponse::getObject", 0x34u, "m_object is NULL and returning a reference to that");
  return this->m_object;
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::reset
==============
*/
void bdObjectStoreGetPublisherObjectResponse::reset(bdObjectStoreGetPublisherObjectResponse *this)
{
  this->m_object = NULL;
  memset_0(&this->bdStructBufferSerializable::__vftable + 2, 0, 0x1000ui64);
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::serialize
==============
*/
bool bdObjectStoreGetPublisherObjectResponse::serialize(bdObjectStoreGetPublisherObjectResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectresponse.cpp", "bdObjectStoreGetPublisherObjectResponse::serialize", 0x2Eu, "Cannot call deserialize on bdObjectStoreGetPublisherObjectResponse");
  return 0;
}

/*
==============
bdObjectStoreGetPublisherObjectResponse::setObject
==============
*/
void bdObjectStoreGetPublisherObjectResponse::setObject(bdObjectStoreGetPublisherObjectResponse *this, bdObjectStoreObject *object)
{
  this->m_object = object;
}

