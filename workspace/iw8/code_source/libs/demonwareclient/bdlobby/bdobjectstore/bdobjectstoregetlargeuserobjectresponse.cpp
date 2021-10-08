/*
==============
bdObjectStoreGetLargeUserObjectResponse::bdObjectStoreGetLargeUserObjectResponse
==============
*/

void __fastcall bdObjectStoreGetLargeUserObjectResponse::bdObjectStoreGetLargeUserObjectResponse(bdObjectStoreGetLargeUserObjectResponse *this)
{
  ??0bdObjectStoreGetLargeUserObjectResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::serialize
==============
*/

bool __fastcall bdObjectStoreGetLargeUserObjectResponse::serialize(bdObjectStoreGetLargeUserObjectResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreGetLargeUserObjectResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::getAuthorizationHeaderValue
==============
*/

const char *__fastcall bdObjectStoreGetLargeUserObjectResponse::getAuthorizationHeaderValue(bdObjectStoreGetLargeUserObjectResponse *this)
{
  return ?getAuthorizationHeaderValue@bdObjectStoreGetLargeUserObjectResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::bdObjectStoreGetLargeUserObjectResponse
==============
*/

void __fastcall bdObjectStoreGetLargeUserObjectResponse::bdObjectStoreGetLargeUserObjectResponse(bdObjectStoreGetLargeUserObjectResponse *this, bdObjectStoreObject *object)
{
  ??0bdObjectStoreGetLargeUserObjectResponse@@QEAA@AEAVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::getObject
==============
*/

bdObjectStoreObject *__fastcall bdObjectStoreGetLargeUserObjectResponse::getObject(bdObjectStoreGetLargeUserObjectResponse *this)
{
  return ?getObject@bdObjectStoreGetLargeUserObjectResponse@@QEAAAEAVbdObjectStoreObject@@XZ(this);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::setObject
==============
*/

void __fastcall bdObjectStoreGetLargeUserObjectResponse::setObject(bdObjectStoreGetLargeUserObjectResponse *this, bdObjectStoreObject *object)
{
  ?setObject@bdObjectStoreGetLargeUserObjectResponse@@QEAAXAEAVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::reset
==============
*/

void __fastcall bdObjectStoreGetLargeUserObjectResponse::reset(bdObjectStoreGetLargeUserObjectResponse *this)
{
  ?reset@bdObjectStoreGetLargeUserObjectResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreGetLargeUserObjectResponse::deserialize(bdObjectStoreGetLargeUserObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetLargeUserObjectResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::bdObjectStoreGetLargeUserObjectResponse
==============
*/
void bdObjectStoreGetLargeUserObjectResponse::bdObjectStoreGetLargeUserObjectResponse(bdObjectStoreGetLargeUserObjectResponse *this, bdObjectStoreObject *object, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetLargeUserObjectResponse::`vbtable';
    *(_QWORD *)this->gap1020 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1020[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetLargeUserObjectResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetLargeUserObjectResponse_vtbl *)&bdObjectStoreGetLargeUserObjectResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetLargeUserObjectResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetLargeUserObjectResponse::`vftable'{for `bdReferencable'};
  this->m_object = object;
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::bdObjectStoreGetLargeUserObjectResponse
==============
*/
void bdObjectStoreGetLargeUserObjectResponse::bdObjectStoreGetLargeUserObjectResponse(bdObjectStoreGetLargeUserObjectResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetLargeUserObjectResponse::`vbtable';
    *(_QWORD *)this->gap1020 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1020[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetLargeUserObjectResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetLargeUserObjectResponse_vtbl *)&bdObjectStoreGetLargeUserObjectResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetLargeUserObjectResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetLargeUserObjectResponse::`vftable'{for `bdReferencable'};
  this->m_object = NULL;
  memset_0(&this->bdStructBufferSerializable::__vftable + 2, 0, 0x1000ui64);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::deserialize
==============
*/
bool bdObjectStoreGetLargeUserObjectResponse::deserialize(bdObjectStoreGetLargeUserObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdObjectStoreJSONResponseBase::deserializeLargeObjectMetadataResponse((bdObjectStoreGetLargeUserObjectResponse *)((char *)this - 8), deserializer, USER_OWNER_TYPE, (char *)&this->bdStructBufferSerializable::__vftable + 8, *(bdObjectStoreObject **)&this->m_authorizationHeaderValue[4072]);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::getAuthorizationHeaderValue
==============
*/
bdStructBufferSerializable_vtbl **bdObjectStoreGetLargeUserObjectResponse::getAuthorizationHeaderValue(bdObjectStoreGetLargeUserObjectResponse *this)
{
  return &this->bdStructBufferSerializable::__vftable + 2;
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::getObject
==============
*/
bdObjectStoreObject *bdObjectStoreGetLargeUserObjectResponse::getObject(bdObjectStoreGetLargeUserObjectResponse *this)
{
  bdHandleAssert(this->m_object != NULL, "m_object != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetlargeuserobjectresponse.cpp", "bdObjectStoreGetLargeUserObjectResponse::getObject", 0x34u, "m_object is NULL and returning a reference to that");
  return this->m_object;
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::reset
==============
*/
void bdObjectStoreGetLargeUserObjectResponse::reset(bdObjectStoreGetLargeUserObjectResponse *this)
{
  this->m_object = NULL;
  memset_0(&this->bdStructBufferSerializable::__vftable + 2, 0, 0x1000ui64);
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::serialize
==============
*/
bool bdObjectStoreGetLargeUserObjectResponse::serialize(bdObjectStoreGetLargeUserObjectResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetlargeuserobjectresponse.cpp", "bdObjectStoreGetLargeUserObjectResponse::serialize", 0x2Eu, "Cannot call serialize on bdObjectStoreGetLargeUserObjectResponse");
  return 0;
}

/*
==============
bdObjectStoreGetLargeUserObjectResponse::setObject
==============
*/
void bdObjectStoreGetLargeUserObjectResponse::setObject(bdObjectStoreGetLargeUserObjectResponse *this, bdObjectStoreObject *object)
{
  this->m_object = object;
}

