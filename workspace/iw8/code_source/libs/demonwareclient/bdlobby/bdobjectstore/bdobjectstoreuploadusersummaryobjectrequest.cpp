/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::bdObjectStoreUploadUserSummaryObjectRequest
==============
*/

void __fastcall bdObjectStoreUploadUserSummaryObjectRequest::bdObjectStoreUploadUserSummaryObjectRequest(bdObjectStoreUploadUserSummaryObjectRequest *this, const char *const context, const bdObjectStoreObject *object)
{
  ??0bdObjectStoreUploadUserSummaryObjectRequest@@QEAA@QEBDAEBVbdObjectStoreObject@@@Z(this, context, object);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreUploadUserSummaryObjectRequest::serializeWithLobbyService(bdObjectStoreUploadUserSummaryObjectRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreUploadUserSummaryObjectRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::bdObjectStoreUploadUserSummaryObjectRequest
==============
*/

void __fastcall bdObjectStoreUploadUserSummaryObjectRequest::bdObjectStoreUploadUserSummaryObjectRequest(bdObjectStoreUploadUserSummaryObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *object)
{
  ??0bdObjectStoreUploadUserSummaryObjectRequest@@QEAA@QEBD0AEBVbdObjectStoreObject@@@Z(this, client, context, object);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::init
==============
*/

void __fastcall bdObjectStoreUploadUserSummaryObjectRequest::init(bdObjectStoreUploadUserSummaryObjectRequest *this, const char *const context, const bdObjectStoreObject *object)
{
  ?init@bdObjectStoreUploadUserSummaryObjectRequest@@QEAAXQEBDAEBVbdObjectStoreObject@@@Z(this, context, object);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::getObject
==============
*/

const bdObjectStoreObject *__fastcall bdObjectStoreUploadUserSummaryObjectRequest::getObject(bdObjectStoreUploadUserSummaryObjectRequest *this)
{
  return ?getObject@bdObjectStoreUploadUserSummaryObjectRequest@@QEBAAEBVbdObjectStoreObject@@XZ(this);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::reset
==============
*/

void __fastcall bdObjectStoreUploadUserSummaryObjectRequest::reset(bdObjectStoreUploadUserSummaryObjectRequest *this)
{
  ?reset@bdObjectStoreUploadUserSummaryObjectRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreUploadUserSummaryObjectRequest::deserialize(bdObjectStoreUploadUserSummaryObjectRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreUploadUserSummaryObjectRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::bdObjectStoreUploadUserSummaryObjectRequest
==============
*/
void bdObjectStoreUploadUserSummaryObjectRequest::bdObjectStoreUploadUserSummaryObjectRequest(bdObjectStoreUploadUserSummaryObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *object, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadUserSummaryObjectRequest::`vbtable';
    *(_QWORD *)this->gapDE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapDE8[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadUserSummaryObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadUserSummaryObjectRequest_vtbl *)&bdObjectStoreUploadUserSummaryObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserSummaryObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserSummaryObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObject::bdObjectStoreObject((bdObjectStoreObject *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreUploadUserSummaryObjectRequest::init(this, context, object);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::bdObjectStoreUploadUserSummaryObjectRequest
==============
*/
void bdObjectStoreUploadUserSummaryObjectRequest::bdObjectStoreUploadUserSummaryObjectRequest(bdObjectStoreUploadUserSummaryObjectRequest *this, const char *const context, const bdObjectStoreObject *object, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadUserSummaryObjectRequest::`vbtable';
    *(_QWORD *)this->gapDE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapDE8[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadUserSummaryObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadUserSummaryObjectRequest_vtbl *)&bdObjectStoreUploadUserSummaryObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserSummaryObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserSummaryObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObject::bdObjectStoreObject((bdObjectStoreObject *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreUploadUserSummaryObjectRequest::init(this, context, object);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::deserialize
==============
*/
bool bdObjectStoreUploadUserSummaryObjectRequest::deserialize(bdObjectStoreUploadUserSummaryObjectRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadusersummaryobjectrequest.cpp", "bdObjectStoreUploadUserSummaryObjectRequest::deserialize", 0x2Eu, "Cannot call deserialize on bdObjectStoreUploadUserSummaryObjectRequest");
  return 0;
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::getObject
==============
*/
bdStructBufferSerializable_vtbl **bdObjectStoreUploadUserSummaryObjectRequest::getObject(bdObjectStoreUploadUserSummaryObjectRequest *this)
{
  return &this->bdStructBufferSerializable::__vftable + 2;
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::init
==============
*/
void bdObjectStoreUploadUserSummaryObjectRequest::init(bdObjectStoreUploadUserSummaryObjectRequest *this, const char *const context, const bdObjectStoreObject *object)
{
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType OwnerType; 
  bdObjectStoreMetadata *v9; 
  bdObjectStoreObjectID *v10; 
  bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType v11; 
  bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType v12; 

  Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)object);
  ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
  OwnerType = bdObjectStoreObjectID::getOwnerType(ObjectID);
  v9 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)object);
  v10 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v9);
  v11 = bdObjectStoreObjectID::getOwnerType(v10);
  v12 = OwnerType;
  bdHandleAssert(v11 == USER_SUMMARY_OWNER_TYPE, "object.getMetadata().getObjectID().getOwnerType() == bdObjectStoreObjectID::USER_SUMMARY_OWNER_TYPE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadusersummaryobjectrequest.cpp", "bdObjectStoreUploadUserSummaryObjectRequest::init", 0x20u, "Object passed in is not a UserSummary Object. Type [%d]", v12);
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreMetadata::operator=((bdObjectStoreMetadata *)(&this->bdStructBufferSerializable::__vftable + 2), &object->m_metadata);
  *(_QWORD *)&this->m_object[3472] = object->m_contentPtr;
  *(_QWORD *)&this->m_object[3480] = object->m_contentSize;
  *(_QWORD *)&this->m_object[3488] = object->m_downloadInterceptor;
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::reset
==============
*/
void bdObjectStoreUploadUserSummaryObjectRequest::reset(bdObjectStoreUploadUserSummaryObjectRequest *this)
{
  bdObjectStoreRequestBase::reset(this);
  bdObjectStoreObject::reset((bdObjectStoreObject *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreUploadUserSummaryObjectRequest::serializeWithLobbyService
==============
*/
char bdObjectStoreUploadUserSummaryObjectRequest::serializeWithLobbyService(bdObjectStoreUploadUserSummaryObjectRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  const char *client; 
  const char *objectName; 
  const char *Owner; 
  char url[1024]; 

  Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)&this->m_context[4]);
  ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
  client = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreUploadUserSummaryObjectRequest *)((char *)this - 32), lobbyService);
  objectName = bdObjectStoreObjectID::getObjectName(ObjectID);
  Owner = bdObjectStoreObjectID::getOwner(ObjectID);
  bdObjectStoreRequestBase::buildUserSummaryObjectURL((bdObjectStoreUploadUserSummaryObjectRequest *)((char *)this - 32), url, 0x400u, Owner, objectName, client, &this[-1].m_object[3492]);
  if ( bdStructBufferSerializer::writeString(serializer, 1u, "PUT", 0x10u) )
    bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  return 1;
}

