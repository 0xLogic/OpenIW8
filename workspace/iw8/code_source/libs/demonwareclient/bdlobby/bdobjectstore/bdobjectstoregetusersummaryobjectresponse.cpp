/*
==============
bdObjectStoreGetUserSummaryObjectResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreGetUserSummaryObjectResponse::deserialize(bdObjectStoreGetUserSummaryObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetUserSummaryObjectResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::reset
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectResponse::reset(bdObjectStoreGetUserSummaryObjectResponse *this)
{
  ?reset@bdObjectStoreGetUserSummaryObjectResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::getObject
==============
*/

bdObjectStoreObject *__fastcall bdObjectStoreGetUserSummaryObjectResponse::getObject(bdObjectStoreGetUserSummaryObjectResponse *this)
{
  return ?getObject@bdObjectStoreGetUserSummaryObjectResponse@@QEAAAEAVbdObjectStoreObject@@XZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::setObject
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectResponse::setObject(bdObjectStoreGetUserSummaryObjectResponse *this, bdObjectStoreObject *object)
{
  ?setObject@bdObjectStoreGetUserSummaryObjectResponse@@QEAAXAEAVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::serialize
==============
*/

bool __fastcall bdObjectStoreGetUserSummaryObjectResponse::serialize(bdObjectStoreGetUserSummaryObjectResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreGetUserSummaryObjectResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::getAuthorizationHeaderValue
==============
*/

const char *__fastcall bdObjectStoreGetUserSummaryObjectResponse::getAuthorizationHeaderValue(bdObjectStoreGetUserSummaryObjectResponse *this)
{
  return ?getAuthorizationHeaderValue@bdObjectStoreGetUserSummaryObjectResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse(bdObjectStoreGetUserSummaryObjectResponse *this)
{
  ??0bdObjectStoreGetUserSummaryObjectResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse(bdObjectStoreGetUserSummaryObjectResponse *this, bdObjectStoreObject *object)
{
  ??0bdObjectStoreGetUserSummaryObjectResponse@@QEAA@AEAVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse
==============
*/
void bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse(bdObjectStoreGetUserSummaryObjectResponse *this, bdObjectStoreObject *object, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectResponse::`vbtable';
    *(_QWORD *)this->gap1020 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1020[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserSummaryObjectResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserSummaryObjectResponse_vtbl *)&bdObjectStoreGetUserSummaryObjectResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectResponse::`vftable'{for `bdReferencable'};
  this->m_object = object;
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse
==============
*/
void bdObjectStoreGetUserSummaryObjectResponse::bdObjectStoreGetUserSummaryObjectResponse(bdObjectStoreGetUserSummaryObjectResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectResponse::`vbtable';
    *(_QWORD *)this->gap1020 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1020[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserSummaryObjectResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserSummaryObjectResponse_vtbl *)&bdObjectStoreGetUserSummaryObjectResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectResponse::`vftable'{for `bdReferencable'};
  this->m_object = NULL;
  memset_0(&this->bdStructBufferSerializable::__vftable + 2, 0, 0x1000ui64);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::deserialize
==============
*/
bool bdObjectStoreGetUserSummaryObjectResponse::deserialize(bdObjectStoreGetUserSummaryObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdObjectStoreJSONResponseBase::deserializeLargeObjectMetadataResponse((bdObjectStoreGetUserSummaryObjectResponse *)((char *)this - 8), deserializer, USER_SUMMARY_OWNER_TYPE, (char *)&this->bdStructBufferSerializable::__vftable + 8, *(bdObjectStoreObject **)&this->m_authorizationHeaderValue[4072]);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::getAuthorizationHeaderValue
==============
*/
bdStructBufferSerializable_vtbl **bdObjectStoreGetUserSummaryObjectResponse::getAuthorizationHeaderValue(bdObjectStoreGetUserSummaryObjectResponse *this)
{
  return &this->bdStructBufferSerializable::__vftable + 2;
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::getObject
==============
*/
bdObjectStoreObject *bdObjectStoreGetUserSummaryObjectResponse::getObject(bdObjectStoreGetUserSummaryObjectResponse *this)
{
  bdHandleAssert(this->m_object != NULL, "m_object != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectresponse.cpp", "bdObjectStoreGetUserSummaryObjectResponse::getObject", 0x33u, "m_object is NULL and returning a reference to that");
  return this->m_object;
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::reset
==============
*/
void bdObjectStoreGetUserSummaryObjectResponse::reset(bdObjectStoreGetUserSummaryObjectResponse *this)
{
  this->m_object = NULL;
  memset_0(&this->bdStructBufferSerializable::__vftable + 2, 0, 0x1000ui64);
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::serialize
==============
*/
bool bdObjectStoreGetUserSummaryObjectResponse::serialize(bdObjectStoreGetUserSummaryObjectResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectresponse.cpp", "bdObjectStoreGetUserSummaryObjectResponse::serialize", 0x2Du, "Cannot call serialize on bdObjectStoreGetUserSummaryObjectResponse");
  return 0;
}

/*
==============
bdObjectStoreGetUserSummaryObjectResponse::setObject
==============
*/
void bdObjectStoreGetUserSummaryObjectResponse::setObject(bdObjectStoreGetUserSummaryObjectResponse *this, bdObjectStoreObject *object)
{
  this->m_object = object;
}

