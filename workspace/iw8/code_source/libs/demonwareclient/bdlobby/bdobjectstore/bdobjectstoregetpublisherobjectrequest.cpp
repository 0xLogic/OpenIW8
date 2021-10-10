/*
==============
bdObjectStoreGetPublisherObjectRequest::reset
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::reset(bdObjectStoreGetPublisherObjectRequest *this)
{
  ?reset@bdObjectStoreGetPublisherObjectRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectRequest::deserialize(bdObjectStoreGetPublisherObjectRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetPublisherObjectRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this)
{
  ??0bdObjectStoreGetPublisherObjectRequest@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectRequest::serializeWithLobbyService(bdObjectStoreGetPublisherObjectRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreGetPublisherObjectRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::init
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::init(bdObjectStoreGetPublisherObjectRequest *this, const char *const context)
{
  ?init@bdObjectStoreGetPublisherObjectRequest@@QEAAXQEBD@Z(this, context);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::setObjectID
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::setObjectID(bdObjectStoreGetPublisherObjectRequest *this, const bdObjectStoreObjectID *objectID)
{
  ?setObjectID@bdObjectStoreGetPublisherObjectRequest@@QEAAXAEBVbdObjectStoreObjectID@@@Z(this, objectID);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectID)
{
  ??0bdObjectStoreGetPublisherObjectRequest@@QEAA@QEBD0AEBVbdObjectStoreObjectID@@@Z(this, client, context, objectID);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::init
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::init(bdObjectStoreGetPublisherObjectRequest *this, const char *const context, const bdObjectStoreObjectID *objectID)
{
  ?init@bdObjectStoreGetPublisherObjectRequest@@QEAAXQEBDAEBVbdObjectStoreObjectID@@@Z(this, context, objectID);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::setClient
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::setClient(bdObjectStoreGetPublisherObjectRequest *this, const char *const client)
{
  ?setClient@bdObjectStoreGetPublisherObjectRequest@@QEAAXQEBD@Z(this, client);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::setContext
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::setContext(bdObjectStoreGetPublisherObjectRequest *this, const char *const context)
{
  ?setContext@bdObjectStoreGetPublisherObjectRequest@@QEAAXQEBD@Z(this, context);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this, const char *const client, const char *const context)
{
  ??0bdObjectStoreGetPublisherObjectRequest@@QEAA@QEBD0@Z(this, client, context);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this, const char *const context, const bdObjectStoreObjectID *objectID)
{
  ??0bdObjectStoreGetPublisherObjectRequest@@QEAA@QEBDAEBVbdObjectStoreObjectID@@@Z(this, context, objectID);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this, const char *const context)
{
  ??0bdObjectStoreGetPublisherObjectRequest@@QEAA@QEBD@Z(this, context);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/
void bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this, const char *const client, const char *const context, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/
void bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectID, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreGetPublisherObjectRequest::init(this, context, objectID);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/
void bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this, const char *const context, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/
void bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this, const char *const context, const bdObjectStoreObjectID *objectID, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreGetPublisherObjectRequest::init(this, context, objectID);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest
==============
*/
void bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(bdObjectStoreGetPublisherObjectRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectRequest_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::reset(this);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::deserialize
==============
*/
bool bdObjectStoreGetPublisherObjectRequest::deserialize(bdObjectStoreGetPublisherObjectRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectrequest.cpp", "bdObjectStoreGetPublisherObjectRequest::deserialize", 0x57u, "Cannot call deserialize on bdObjectStoreUploadUserObjectRequest");
  return 0;
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::init
==============
*/
void bdObjectStoreGetPublisherObjectRequest::init(bdObjectStoreGetPublisherObjectRequest *this, const char *const context)
{
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::init
==============
*/
void bdObjectStoreGetPublisherObjectRequest::init(bdObjectStoreGetPublisherObjectRequest *this, const char *const context, const bdObjectStoreObjectID *objectID)
{
  bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType OwnerType; 

  bdObjectStoreRequestBase::setContext(this, context);
  OwnerType = bdObjectStoreObjectID::getOwnerType((bdObjectStoreObjectID *)objectID);
  bdHandleAssert(OwnerType == PUBLISHER_OWNER_TYPE, "objectID.getOwnerType() == bdObjectStoreObjectID::PUBLISHER_OWNER_TYPE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectrequest.cpp", "bdObjectStoreGetPublisherObjectRequest::init", 0x33u, "ObjectID should have an ownerType of PUBLISHER_OWNER_TYPE to use this API");
  *(bdStructBufferSerializable *)((char *)&this->bdStructBufferSerializable + 16) = *(bdStructBufferSerializable *)&objectID->m_ownerType;
  *(__m256i *)&this->m_objectID[16] = *(__m256i *)&objectID->m_owner[28];
  *(__m256i *)&this->m_objectID[48] = *(__m256i *)&objectID->m_objectName[30];
  *(_OWORD *)&this->m_objectID[80] = *(_OWORD *)&objectID->m_objectName[62];
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::reset
==============
*/
void bdObjectStoreGetPublisherObjectRequest::reset(bdObjectStoreGetPublisherObjectRequest *this)
{
  bdObjectStoreRequestBase::reset(this);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::serializeWithLobbyService
==============
*/
bool bdObjectStoreGetPublisherObjectRequest::serializeWithLobbyService(bdObjectStoreGetPublisherObjectRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  const char *client; 
  const char *objectName; 
  const char *Owner; 
  char url[1024]; 

  client = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreGetPublisherObjectRequest *)((char *)this - 32), lobbyService);
  objectName = bdObjectStoreObjectID::getObjectName((bdObjectStoreObjectID *)&this->m_context[4]);
  Owner = bdObjectStoreObjectID::getOwner((bdObjectStoreObjectID *)&this->m_context[4]);
  bdObjectStoreRequestBase::buildPublisherObjectMetadataURL((bdObjectStoreGetPublisherObjectRequest *)((char *)this - 32), url, 0x400u, Owner, objectName, client, &this[-1].m_objectID[92], "contentURL");
  return bdStructBufferSerializer::writeString(serializer, 1u, "GET", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::setClient
==============
*/
void bdObjectStoreGetPublisherObjectRequest::setClient(bdObjectStoreGetPublisherObjectRequest *this, const char *const client)
{
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStoreGetPublisherObjectRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectrequest.cpp", "bdObjectStoreGetPublisherObjectRequest::setClient", 0x40u, "bdObjectStoreGetPublisherObjectRequest::setClient is deprecated.");
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::setContext
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectRequest::setContext(bdObjectStoreGetPublisherObjectRequest *this, const char *const context)
{
  bdObjectStoreRequestBase::setContext(this, context);
}

/*
==============
bdObjectStoreGetPublisherObjectRequest::setObjectID
==============
*/
void bdObjectStoreGetPublisherObjectRequest::setObjectID(bdObjectStoreGetPublisherObjectRequest *this, const bdObjectStoreObjectID *objectID)
{
  *(bdStructBufferSerializable *)((char *)&this->bdStructBufferSerializable + 16) = *(bdStructBufferSerializable *)&objectID->m_ownerType;
  *(__m256i *)&this->m_objectID[16] = *(__m256i *)&objectID->m_owner[28];
  *(__m256i *)&this->m_objectID[48] = *(__m256i *)&objectID->m_objectName[30];
  *(_OWORD *)&this->m_objectID[80] = *(_OWORD *)&objectID->m_objectName[62];
}

