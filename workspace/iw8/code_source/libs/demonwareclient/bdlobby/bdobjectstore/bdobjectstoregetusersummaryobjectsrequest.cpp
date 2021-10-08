/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::init
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsRequest::init(bdObjectStoreGetUserSummaryObjectsRequest *this, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  ?init@bdObjectStoreGetUserSummaryObjectsRequest@@QEAAXQEBDQEBVbdObjectStoreObjectID@@I@Z(this, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreGetUserSummaryObjectsRequest::serializeWithLobbyService(bdObjectStoreGetUserSummaryObjectsRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreGetUserSummaryObjectsRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDs
==============
*/

const bdObjectStoreObjectID *__fastcall bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDs(bdObjectStoreGetUserSummaryObjectsRequest *this)
{
  return ?getObjectIDs@bdObjectStoreGetUserSummaryObjectsRequest@@QEBAPEBVbdObjectStoreObjectID@@XZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::bdObjectStoreGetUserSummaryObjectsRequest
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsRequest::bdObjectStoreGetUserSummaryObjectsRequest(bdObjectStoreGetUserSummaryObjectsRequest *this, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  ??0bdObjectStoreGetUserSummaryObjectsRequest@@QEAA@QEBDQEBVbdObjectStoreObjectID@@I@Z(this, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::setEnvironment
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsRequest::setEnvironment(bdObjectStoreGetUserSummaryObjectsRequest *this, bdEnvironment environment)
{
  ?setEnvironment@bdObjectStoreGetUserSummaryObjectsRequest@@QEBAXW4bdEnvironment@@@Z(this, environment);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreGetUserSummaryObjectsRequest::deserialize(bdObjectStoreGetUserSummaryObjectsRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetUserSummaryObjectsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDsSize
==============
*/

unsigned int __fastcall bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDsSize(bdObjectStoreGetUserSummaryObjectsRequest *this)
{
  return ?getObjectIDsSize@bdObjectStoreGetUserSummaryObjectsRequest@@QEBAIXZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::setObjectIDForRequest
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsRequest::setObjectIDForRequest(bdObjectStoreGetUserSummaryObjectsRequest *this, unsigned int objectIDIndex)
{
  ?setObjectIDForRequest@bdObjectStoreGetUserSummaryObjectsRequest@@QEAAXI@Z(this, objectIDIndex);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::reset
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsRequest::reset(bdObjectStoreGetUserSummaryObjectsRequest *this)
{
  ?reset@bdObjectStoreGetUserSummaryObjectsRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::bdObjectStoreGetUserSummaryObjectsRequest
==============
*/

void __fastcall bdObjectStoreGetUserSummaryObjectsRequest::bdObjectStoreGetUserSummaryObjectsRequest(bdObjectStoreGetUserSummaryObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  ??0bdObjectStoreGetUserSummaryObjectsRequest@@QEAA@QEBD0QEBVbdObjectStoreObjectID@@I@Z(this, client, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::bdObjectStoreGetUserSummaryObjectsRequest
==============
*/
void bdObjectStoreGetUserSummaryObjectsRequest::bdObjectStoreGetUserSummaryObjectsRequest(bdObjectStoreGetUserSummaryObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectsRequest::`vbtable';
    *((_QWORD *)&this->m_request + 22) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_request + 46) = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectsRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectsRequest_vtbl *)&bdObjectStoreGetUserSummaryObjectsRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectsRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(&this->m_request);
  bdObjectStoreGetUserSummaryObjectsRequest::init(this, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::bdObjectStoreGetUserSummaryObjectsRequest
==============
*/
void bdObjectStoreGetUserSummaryObjectsRequest::bdObjectStoreGetUserSummaryObjectsRequest(bdObjectStoreGetUserSummaryObjectsRequest *this, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserSummaryObjectsRequest::`vbtable';
    *((_QWORD *)&this->m_request + 22) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_request + 46) = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectsRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetUserSummaryObjectsRequest_vtbl *)&bdObjectStoreGetUserSummaryObjectsRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserSummaryObjectsRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreGetUserSummaryObjectRequest::bdObjectStoreGetUserSummaryObjectRequest(&this->m_request);
  bdObjectStoreGetUserSummaryObjectsRequest::init(this, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::deserialize
==============
*/
bool bdObjectStoreGetUserSummaryObjectsRequest::deserialize(bdObjectStoreGetUserSummaryObjectsRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectsrequest.cpp", "bdObjectStoreGetUserSummaryObjectsRequest::deserialize", 0x55u, "Cannot call deserialize on bdObjectStoreGetUserSummaryObjectsRequest");
  return 0;
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDs
==============
*/
const bdObjectStoreObjectID *bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDs(bdObjectStoreGetUserSummaryObjectsRequest *this)
{
  return (const bdObjectStoreObjectID *)*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDsSize
==============
*/
__int64 bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDsSize(bdObjectStoreGetUserSummaryObjectsRequest *this)
{
  return *((unsigned int *)&this->bdStructBufferSerializable::__vftable + 6);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::init
==============
*/
void bdObjectStoreGetUserSummaryObjectsRequest::init(bdObjectStoreGetUserSummaryObjectsRequest *this, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  unsigned int v8; 
  bdObjectStoreObjectID *v9; 
  bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType OwnerType; 
  int v11; 
  __int64 v12; 

  bdObjectStoreGetUserSummaryObjectRequest::init(&this->m_request, context);
  bdObjectStoreRequestBase::setContext(this, context);
  v11 = 50;
  bdHandleAssert(objectIDsSize - 1 <= 0x31, "objectIDsSize > 0 && objectIDsSize <= BD_OBJECTSTORE_MAX_OBJECT_IDS_PER_REQUEST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectsrequest.cpp", "bdObjectStoreGetUserSummaryObjectsRequest::init", 0x25u, "Size of objectIDs should be > 0 and <= %d", v11);
  v8 = 0;
  if ( objectIDsSize )
  {
    v9 = (bdObjectStoreObjectID *)objectIDs;
    do
    {
      OwnerType = bdObjectStoreObjectID::getOwnerType(v9);
      LODWORD(v12) = v8;
      bdHandleAssert(OwnerType == USER_SUMMARY_OWNER_TYPE, "objectIDs[i].getOwnerType() == bdObjectStoreObjectID::USER_SUMMARY_OWNER_TYPE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectsrequest.cpp", "bdObjectStoreGetUserSummaryObjectsRequest::init", 0x28u, "ObjectID at index [%d] should have an ownerType of USER_SUMMARY_OWNER_TYPE to use this API", v12);
      ++v8;
      ++v9;
    }
    while ( v8 < objectIDsSize );
  }
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = objectIDsSize;
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = objectIDs;
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::reset
==============
*/
void bdObjectStoreGetUserSummaryObjectsRequest::reset(bdObjectStoreGetUserSummaryObjectsRequest *this)
{
  bdObjectStoreRequestBase::reset(this);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
  bdObjectStoreGetUserSummaryObjectRequest::reset(&this->m_request);
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::serializeWithLobbyService
==============
*/
_BOOL8 bdObjectStoreGetUserSummaryObjectsRequest::serializeWithLobbyService(bdObjectStoreGetUserSummaryObjectsRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  const char *context; 
  const char *ClientIDFromAuthInfo; 
  bool v7; 
  bool v8; 
  bdObjectStoreHTTPHeader objectIDsHeader; 
  char url[1024]; 

  context = &this[-1].m_request.gapA0[12];
  ClientIDFromAuthInfo = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreGetUserSummaryObjectsRequest *)((char *)this - 32), lobbyService);
  bdObjectStoreRequestBase::buildVectorizedUserSummaryObjectMetadataURL((bdObjectStoreGetUserSummaryObjectsRequest *)((char *)this - 32), url, 0x400u, ClientIDFromAuthInfo, context, "contentURL");
  v7 = bdStructBufferSerializer::writeString(serializer, 1u, "GET", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&objectIDsHeader);
  v8 = v7 && bdObjectStoreRequestBase::serializeObjectIDsToHTTPHeader((bdObjectStoreGetUserSummaryObjectsRequest *)((char *)this - 32), &objectIDsHeader, *(const bdObjectStoreObjectID **)&this->m_context[4], *(_DWORD *)&this->m_context[12]) && bdStructBufferSerializer::writeObject(serializer, 4u, &objectIDsHeader);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&objectIDsHeader.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&objectIDsHeader.gap1074[4]);
  return v8;
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::setEnvironment
==============
*/
void bdObjectStoreGetUserSummaryObjectsRequest::setEnvironment(bdObjectStoreGetUserSummaryObjectsRequest *this, bdEnvironment environment)
{
  this->m_environment = environment;
}

/*
==============
bdObjectStoreGetUserSummaryObjectsRequest::setObjectIDForRequest
==============
*/
void bdObjectStoreGetUserSummaryObjectsRequest::setObjectIDForRequest(bdObjectStoreGetUserSummaryObjectsRequest *this, unsigned int objectIDIndex)
{
  if ( objectIDIndex >= *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreGetUserSummaryObjectsRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetusersummaryobjectsrequest.cpp", "bdObjectStoreGetUserSummaryObjectsRequest::setObjectIDForRequest", 0x4Du, "objectIDIndex exceeded indexable size.");
  else
    bdObjectStoreGetUserSummaryObjectRequest::setObjectID(&this->m_request, (const bdObjectStoreObjectID *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) + 112i64 * objectIDIndex));
}

