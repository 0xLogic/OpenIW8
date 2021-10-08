/*
==============
bdObjectStoreGetPublisherObjectsRequest::setEnvironment
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsRequest::setEnvironment(bdObjectStoreGetPublisherObjectsRequest *this, bdEnvironment environment)
{
  ?setEnvironment@bdObjectStoreGetPublisherObjectsRequest@@QEBAXW4bdEnvironment@@@Z(this, environment);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::getObjectIDsSize
==============
*/

unsigned int __fastcall bdObjectStoreGetPublisherObjectsRequest::getObjectIDsSize(bdObjectStoreGetPublisherObjectsRequest *this)
{
  return ?getObjectIDsSize@bdObjectStoreGetPublisherObjectsRequest@@QEBAIXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::reset
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsRequest::reset(bdObjectStoreGetPublisherObjectsRequest *this)
{
  ?reset@bdObjectStoreGetPublisherObjectsRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest(bdObjectStoreGetPublisherObjectsRequest *this)
{
  ??0bdObjectStoreGetPublisherObjectsRequest@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::setObjectIDForRequest
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsRequest::setObjectIDForRequest(bdObjectStoreGetPublisherObjectsRequest *this, unsigned int objectIDIndex)
{
  ?setObjectIDForRequest@bdObjectStoreGetPublisherObjectsRequest@@QEAAXI@Z(this, objectIDIndex);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest(bdObjectStoreGetPublisherObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  ??0bdObjectStoreGetPublisherObjectsRequest@@QEAA@QEBD0QEBVbdObjectStoreObjectID@@I@Z(this, client, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectsRequest::serializeWithLobbyService(bdObjectStoreGetPublisherObjectsRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreGetPublisherObjectsRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectsRequest::deserialize(bdObjectStoreGetPublisherObjectsRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetPublisherObjectsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::getObjectIDs
==============
*/

const bdObjectStoreObjectID *__fastcall bdObjectStoreGetPublisherObjectsRequest::getObjectIDs(bdObjectStoreGetPublisherObjectsRequest *this)
{
  return ?getObjectIDs@bdObjectStoreGetPublisherObjectsRequest@@QEBAPEBVbdObjectStoreObjectID@@XZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::init
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsRequest::init(bdObjectStoreGetPublisherObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  ?init@bdObjectStoreGetPublisherObjectsRequest@@QEAAXQEBD0QEBVbdObjectStoreObjectID@@I@Z(this, client, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::init
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsRequest::init(bdObjectStoreGetPublisherObjectsRequest *this, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  ?init@bdObjectStoreGetPublisherObjectsRequest@@QEAAXQEBDQEBVbdObjectStoreObjectID@@I@Z(this, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest(bdObjectStoreGetPublisherObjectsRequest *this, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  ??0bdObjectStoreGetPublisherObjectsRequest@@QEAA@QEBDQEBVbdObjectStoreObjectID@@I@Z(this, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest
==============
*/
void bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest(bdObjectStoreGetPublisherObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectsRequest::`vbtable';
    *((_QWORD *)&this->m_request + 22) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_request + 46) = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectsRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectsRequest_vtbl *)&bdObjectStoreGetPublisherObjectsRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(&this->m_request);
  bdObjectStoreGetPublisherObjectsRequest::init(this, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest
==============
*/
void bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest(bdObjectStoreGetPublisherObjectsRequest *this, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectsRequest::`vbtable';
    *((_QWORD *)&this->m_request + 22) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_request + 46) = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectsRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectsRequest_vtbl *)&bdObjectStoreGetPublisherObjectsRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(&this->m_request);
  bdObjectStoreGetPublisherObjectsRequest::init(this, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest
==============
*/
void bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest(bdObjectStoreGetPublisherObjectsRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectsRequest::`vbtable';
    *((_QWORD *)&this->m_request + 22) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_request + 46) = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectsRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreGetPublisherObjectsRequest_vtbl *)&bdObjectStoreGetPublisherObjectsRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectsRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(&this->m_request);
  bdObjectStoreRequestBase::reset(this);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
  bdObjectStoreGetPublisherObjectRequest::reset(&this->m_request);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::deserialize
==============
*/
bool bdObjectStoreGetPublisherObjectsRequest::deserialize(bdObjectStoreGetPublisherObjectsRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectsrequest.cpp", "bdObjectStoreGetPublisherObjectsRequest::deserialize", 0x68u, "Cannot call deserialize on bdObjectStoreGetPublisherObjectsRequest");
  return 0;
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::getObjectIDs
==============
*/
const bdObjectStoreObjectID *bdObjectStoreGetPublisherObjectsRequest::getObjectIDs(bdObjectStoreGetPublisherObjectsRequest *this)
{
  return (const bdObjectStoreObjectID *)*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::getObjectIDsSize
==============
*/
__int64 bdObjectStoreGetPublisherObjectsRequest::getObjectIDsSize(bdObjectStoreGetPublisherObjectsRequest *this)
{
  return *((unsigned int *)&this->bdStructBufferSerializable::__vftable + 6);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::init
==============
*/
void bdObjectStoreGetPublisherObjectsRequest::init(bdObjectStoreGetPublisherObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  bdObjectStoreGetPublisherObjectsRequest::init(this, context, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::init
==============
*/
void bdObjectStoreGetPublisherObjectsRequest::init(bdObjectStoreGetPublisherObjectsRequest *this, const char *const context, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  unsigned int v8; 
  bdObjectStoreObjectID *v9; 
  bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType OwnerType; 
  int v11; 
  __int64 v12; 

  bdObjectStoreGetPublisherObjectRequest::reset(&this->m_request);
  bdObjectStoreGetPublisherObjectRequest::setContext(&this->m_request, context);
  bdObjectStoreRequestBase::setContext(this, context);
  v11 = 50;
  bdHandleAssert(objectIDsSize - 1 <= 0x31, "objectIDsSize > 0 && objectIDsSize <= BD_OBJECTSTORE_MAX_OBJECT_IDS_PER_REQUEST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectsrequest.cpp", "bdObjectStoreGetPublisherObjectsRequest::init", 0x35u, "Size of objectIDs should be > 0 and < %d", v11);
  v8 = 0;
  if ( objectIDsSize )
  {
    v9 = (bdObjectStoreObjectID *)objectIDs;
    do
    {
      OwnerType = bdObjectStoreObjectID::getOwnerType(v9);
      LODWORD(v12) = v8;
      bdHandleAssert(OwnerType == PUBLISHER_OWNER_TYPE, "objectIDs[i].getOwnerType() == bdObjectStoreObjectID::PUBLISHER_OWNER_TYPE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectsrequest.cpp", "bdObjectStoreGetPublisherObjectsRequest::init", 0x38u, "ObjectID at index [%d] should have an ownerType of PUBLISHER_OWNER_TYPE to use this API", v12);
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
bdObjectStoreGetPublisherObjectsRequest::reset
==============
*/
void bdObjectStoreGetPublisherObjectsRequest::reset(bdObjectStoreGetPublisherObjectsRequest *this)
{
  bdObjectStoreRequestBase::reset(this);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
  bdObjectStoreGetPublisherObjectRequest::reset(&this->m_request);
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::serializeWithLobbyService
==============
*/
_BOOL8 bdObjectStoreGetPublisherObjectsRequest::serializeWithLobbyService(bdObjectStoreGetPublisherObjectsRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  const char *context; 
  const char *ClientIDFromAuthInfo; 
  bool v7; 
  bool v8; 
  bdObjectStoreHTTPHeader objectIDsHeader; 
  char url[1024]; 

  context = &this[-1].m_request.gapA0[12];
  ClientIDFromAuthInfo = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreGetPublisherObjectsRequest *)((char *)this - 32), lobbyService);
  bdObjectStoreRequestBase::buildVectorizedPublisherObjectMetadataURL((bdObjectStoreGetPublisherObjectsRequest *)((char *)this - 32), url, 0x400u, ClientIDFromAuthInfo, context, "contentURL");
  v7 = bdStructBufferSerializer::writeString(serializer, 1u, "GET", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&objectIDsHeader);
  v8 = v7 && bdObjectStoreRequestBase::serializeObjectIDsToHTTPHeader((bdObjectStoreGetPublisherObjectsRequest *)((char *)this - 32), &objectIDsHeader, *(const bdObjectStoreObjectID **)&this->m_context[4], *(_DWORD *)&this->m_context[12]) && bdStructBufferSerializer::writeObject(serializer, 4u, &objectIDsHeader);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&objectIDsHeader.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&objectIDsHeader.gap1074[4]);
  return v8;
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::setEnvironment
==============
*/
void bdObjectStoreGetPublisherObjectsRequest::setEnvironment(bdObjectStoreGetPublisherObjectsRequest *this, bdEnvironment environment)
{
  this->m_environment = environment;
}

/*
==============
bdObjectStoreGetPublisherObjectsRequest::setObjectIDForRequest
==============
*/
void bdObjectStoreGetPublisherObjectsRequest::setObjectIDForRequest(bdObjectStoreGetPublisherObjectsRequest *this, unsigned int objectIDIndex)
{
  if ( objectIDIndex >= *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreGetPublisherObjectsRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectsrequest.cpp", "bdObjectStoreGetPublisherObjectsRequest::setObjectIDForRequest", 0x60u, "objectIDIndex exceeded indexable size.");
  else
    bdObjectStoreGetPublisherObjectRequest::setObjectID(&this->m_request, (const bdObjectStoreObjectID *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) + 112i64 * objectIDIndex));
}

