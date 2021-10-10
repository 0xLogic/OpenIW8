/*
==============
bdObjectStoreGetUserSummaryObjectRequest::setObjectID
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectRequest::setObjectID(bdObjectStoreGetUserSummaryObjectRequest *this, const bdObjectStoreObjectID *objectID)
{
  ?setObjectID@bdObjectStoreGetUserSummaryObjectRequest@@QEAAXAEBVbdObjectStoreObjectID@@@Z(this, objectID);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::reset
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectRequest::reset(bdObjectStoreGetUserSummaryObjectRequest *this)
{
  ?reset@bdObjectStoreGetUserSummaryObjectRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::init
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectRequest::init(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const context)
{
  ?init@bdObjectStoreGetUserSummaryObjectRequest@@QEAAXQEBD@Z(this, context);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectID)
{
  ??0bdObjectStoreGetUserSummaryObjectRequest@@QEAA@QEBD0AEBVbdObjectStoreObjectID@@@Z(this, client, context, objectID);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const client, const char *const context)
{
  ??0bdObjectStoreGetUserSummaryObjectRequest@@QEAA@QEBD0@Z(this, client, context);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this)
{
  ??0bdObjectStoreGetUserSummaryObjectRequest@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreGetUserSummaryObjectRequest::serializeWithLobbyService(bdObjectStoreGetUserSummaryObjectRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreGetUserSummaryObjectRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::init
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectRequest::init(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const context, const bdObjectStoreObjectID *objectID)
{
  ?init@bdObjectStoreGetUserSummaryObjectRequest@@QEAAXQEBDAEBVbdObjectStoreObjectID@@@Z(this, context, objectID);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreGetUserSummaryObjectRequest::deserialize(bdObjectStoreGetUserSummaryObjectRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetUserSummaryObjectRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const context)
{
  ??0bdObjectStoreGetUserSummaryObjectRequest@@QEAA@QEBD@Z(this, context);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const context, const bdObjectStoreObjectID *objectID)
{
  ??0bdObjectStoreGetUserSummaryObjectRequest@@QEAA@QEBDAEBVbdObjectStoreObjectID@@@Z(this, context, objectID);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/
void bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const client, const char *const context, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/
void bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectID, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreGetUserSummaryObjectRequest::init(this, context, objectID);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/
void bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const context, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/
void bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const context, const bdObjectStoreObjectID *objectID, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreGetUserSummaryObjectRequest::init(this, context, objectID);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest
==============
*/
void bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(bdObjectStoreGetUserSummaryObjectRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectRequest::`vbtable';
    *(_QWORD *)this->gapA0 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapA0[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectRequest_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObjectID::bdObjectStoreObjectID((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::reset(this);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::deserialize
==============
*/
bool bdObjectStoreGetUserSummaryObjectRequest::deserialize(bdObjectStoreGetUserSummaryObjectRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectrequest.cpp", "bdObjectStoreGetUserSummaryObjectRequest::deserialize", 0x4Bu, "Cannot call deserialize on bdObjectStoreGetUserSummaryObjectRequest");
  return 0;
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::init
==============
*/
void bdObjectStoreGetUserSummaryObjectRequest::init(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const context)
{
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::init
==============
*/
void bdObjectStoreGetUserSummaryObjectRequest::init(bdObjectStoreGetUserSummaryObjectRequest *this, const char *const context, const bdObjectStoreObjectID *objectID)
{
  bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType OwnerType; 

  bdObjectStoreRequestBase::setContext(this, context);
  OwnerType = bdObjectStoreObjectID::getOwnerType((bdObjectStoreObjectID *)objectID);
  bdHandleAssert(OwnerType == USER_SUMMARY_OWNER_TYPE, "objectID.getOwnerType() == bdObjectStoreObjectID::USER_SUMMARY_OWNER_TYPE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectrequest.cpp", "bdObjectStoreGetUserSummaryObjectRequest::init", 0x32u, "ObjectID should have an ownerType of USER_SUMMARY_OWNER_TYPE to use this API");
  *(bdStructBufferSerializable *)((char *)&this->bdStructBufferSerializable + 16) = *(bdStructBufferSerializable *)&objectID->m_ownerType;
  *(__m256i *)&this->m_objectID[16] = *(__m256i *)&objectID->m_owner[28];
  *(__m256i *)&this->m_objectID[48] = *(__m256i *)&objectID->m_objectName[30];
  *(_OWORD *)&this->m_objectID[80] = *(_OWORD *)&objectID->m_objectName[62];
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::reset
==============
*/
void bdObjectStoreGetUserSummaryObjectRequest::reset(bdObjectStoreGetUserSummaryObjectRequest *this)
{
  bdObjectStoreRequestBase::reset(this);
  bdObjectStoreObjectID::reset((bdObjectStoreObjectID *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::serializeWithLobbyService
==============
*/
bool bdObjectStoreGetUserSummaryObjectRequest::serializeWithLobbyService(bdObjectStoreGetUserSummaryObjectRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  const char *client; 
  const char *objectName; 
  const char *Owner; 
  char url[1024]; 

  client = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreGetUserSummaryObjectRequest *)((char *)this - 32), lobbyService);
  objectName = bdObjectStoreObjectID::getObjectName((bdObjectStoreObjectID *)&this->m_context[4]);
  Owner = bdObjectStoreObjectID::getOwner((bdObjectStoreObjectID *)&this->m_context[4]);
  bdObjectStoreRequestBase::buildUserSummaryObjectMetadataURL((bdObjectStoreGetUserSummaryObjectRequest *)((char *)this - 32), url, 0x400u, Owner, objectName, client, &this[-1].m_objectID[92], "contentURL");
  return bdStructBufferSerializer::writeString(serializer, 1u, "GET", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
}

/*
==============
bdObjectStoreGetUserSummaryObjectRequest::setObjectID
==============
*/
void bdObjectStoreGetUserSummaryObjectRequest::setObjectID(bdObjectStoreGetUserSummaryObjectRequest *this, const bdObjectStoreObjectID *objectID)
{
  *(bdStructBufferSerializable *)((char *)&this->bdStructBufferSerializable + 16) = *(bdStructBufferSerializable *)&objectID->m_ownerType;
  *(__m256i *)&this->m_objectID[16] = *(__m256i *)&objectID->m_owner[28];
  *(__m256i *)&this->m_objectID[48] = *(__m256i *)&objectID->m_objectName[30];
  *(_OWORD *)&this->m_objectID[80] = *(_OWORD *)&objectID->m_objectName[62];
}

