/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest
==============
*/

void __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest(bdObjectStoreUploadMultipleLargeObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize)
{
  ??0bdObjectStoreUploadMultipleLargeObjectsRequest@@QEAA@QEBD0PEBVbdObjectStoreObject@@I@Z(this, client, context, objects, objectsSize);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::getContext
==============
*/

const char *__fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::getContext(bdObjectStoreUploadMultipleLargeObjectsRequest *this)
{
  return ?getContext@bdObjectStoreUploadMultipleLargeObjectsRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::init
==============
*/

void __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::init(bdObjectStoreUploadMultipleLargeObjectsRequest *this, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize)
{
  ?init@bdObjectStoreUploadMultipleLargeObjectsRequest@@QEAAXQEBDPEBVbdObjectStoreObject@@I@Z(this, context, objects, objectsSize);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::getObjects
==============
*/

const bdObjectStoreObject *__fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::getObjects(bdObjectStoreUploadMultipleLargeObjectsRequest *this)
{
  return ?getObjects@bdObjectStoreUploadMultipleLargeObjectsRequest@@QEBAPEBVbdObjectStoreObject@@XZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest
==============
*/

void __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest(bdObjectStoreUploadMultipleLargeObjectsRequest *this, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize)
{
  ??0bdObjectStoreUploadMultipleLargeObjectsRequest@@QEAA@QEBDPEBVbdObjectStoreObject@@I@Z(this, context, objects, objectsSize);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::deserialize(bdObjectStoreUploadMultipleLargeObjectsRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreUploadMultipleLargeObjectsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::init
==============
*/

void __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::init(bdObjectStoreUploadMultipleLargeObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize)
{
  ?init@bdObjectStoreUploadMultipleLargeObjectsRequest@@QEAAXQEBD0PEBVbdObjectStoreObject@@I@Z(this, client, context, objects, objectsSize);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::serializeWithLobbyService(bdObjectStoreUploadMultipleLargeObjectsRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreUploadMultipleLargeObjectsRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::serializeRequestBody
==============
*/

bool __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::serializeRequestBody(bdObjectStoreUploadMultipleLargeObjectsRequest *this, bdJSONSerializer *json)
{
  return ?serializeRequestBody@bdObjectStoreUploadMultipleLargeObjectsRequest@@IEBA_NPEAVbdJSONSerializer@@@Z(this, json);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest
==============
*/

void __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest(bdObjectStoreUploadMultipleLargeObjectsRequest *this)
{
  ??0bdObjectStoreUploadMultipleLargeObjectsRequest@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::getObjectSize
==============
*/

unsigned int __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::getObjectSize(bdObjectStoreUploadMultipleLargeObjectsRequest *this)
{
  return ?getObjectSize@bdObjectStoreUploadMultipleLargeObjectsRequest@@QEBAIXZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::reset
==============
*/

void __fastcall bdObjectStoreUploadMultipleLargeObjectsRequest::reset(bdObjectStoreUploadMultipleLargeObjectsRequest *this)
{
  ?reset@bdObjectStoreUploadMultipleLargeObjectsRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest
==============
*/
void bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest(bdObjectStoreUploadMultipleLargeObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadMultipleLargeObjectsRequest::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadMultipleLargeObjectsRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadMultipleLargeObjectsRequest_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreUploadMultipleLargeObjectsRequest::init(this, context, objects, objectsSize);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest
==============
*/
void bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest(bdObjectStoreUploadMultipleLargeObjectsRequest *this, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadMultipleLargeObjectsRequest::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadMultipleLargeObjectsRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadMultipleLargeObjectsRequest_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreUploadMultipleLargeObjectsRequest::init(this, context, objects, objectsSize);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest
==============
*/
void bdObjectStoreUploadMultipleLargeObjectsRequest::bdObjectStoreUploadMultipleLargeObjectsRequest(bdObjectStoreUploadMultipleLargeObjectsRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadMultipleLargeObjectsRequest::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadMultipleLargeObjectsRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadMultipleLargeObjectsRequest_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadMultipleLargeObjectsRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::deserialize
==============
*/
bool bdObjectStoreUploadMultipleLargeObjectsRequest::deserialize(bdObjectStoreUploadMultipleLargeObjectsRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadmultiplelargeobjectsrequest.cpp", "bdObjectStoreUploadMultipleLargeObjectsRequest::deserialize", 0x49u, "Cannot call deserialize on bdObjectStoreUploadMultipleLargeObjectsRequest");
  return 0;
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::getContext
==============
*/
char *bdObjectStoreUploadMultipleLargeObjectsRequest::getContext(bdObjectStoreUploadMultipleLargeObjectsRequest *this)
{
  return this->m_context;
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::getObjectSize
==============
*/
__int64 bdObjectStoreUploadMultipleLargeObjectsRequest::getObjectSize(bdObjectStoreUploadMultipleLargeObjectsRequest *this)
{
  return *((unsigned int *)&this->bdStructBufferSerializable::__vftable + 6);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::getObjects
==============
*/
const bdObjectStoreObject *bdObjectStoreUploadMultipleLargeObjectsRequest::getObjects(bdObjectStoreUploadMultipleLargeObjectsRequest *this)
{
  return (const bdObjectStoreObject *)*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::init
==============
*/
void bdObjectStoreUploadMultipleLargeObjectsRequest::init(bdObjectStoreUploadMultipleLargeObjectsRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize)
{
  bdObjectStoreUploadMultipleLargeObjectsRequest::init(this, context, objects, objectsSize);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::init
==============
*/
void bdObjectStoreUploadMultipleLargeObjectsRequest::init(bdObjectStoreUploadMultipleLargeObjectsRequest *this, const char *const context, const bdObjectStoreObject *objects, unsigned int objectsSize)
{
  int v8; 

  bdHandleAssert(objects != NULL, "objects != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadmultiplelargeobjectsrequest.cpp", "bdObjectStoreUploadMultipleLargeObjectsRequest::init", 0x34u, "objects cannot be BD_NULL");
  v8 = 10;
  bdHandleAssert(objectsSize - 1 <= 9, "objectsSizeOk", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadmultiplelargeobjectsrequest.cpp", "bdObjectStoreUploadMultipleLargeObjectsRequest::init", 0x39u, "objectsSize cannot be 0 or greater than [%s]", v8);
  bdObjectStoreRequestBase::setContext(this, context);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = objects;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = objectsSize;
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::reset
==============
*/
void bdObjectStoreUploadMultipleLargeObjectsRequest::reset(bdObjectStoreUploadMultipleLargeObjectsRequest *this)
{
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::serializeRequestBody
==============
*/
bool bdObjectStoreUploadMultipleLargeObjectsRequest::serializeRequestBody(bdObjectStoreUploadMultipleLargeObjectsRequest *this, bdJSONSerializer *json)
{
  bool v4; 
  unsigned int i; 
  bdObjectStoreMetadata *Metadata; 

  v4 = bdJSONSerializer::writeBeginObject(json) && bdJSONSerializer::writeBeginArray(json, "objects");
  for ( i = 0; i < *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6); ++i )
    v4 = v4 && bdJSONSerializer::writeBeginObject(json) && (Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) + 3512i64 * i)), bdObjectStoreMetadata::serializeToJSON(Metadata, json, "metadata", 1)) && bdJSONSerializer::writeEndObject(json);
  return v4 && bdJSONSerializer::writeEndArray(json) && bdJSONSerializer::writeEndObject(json);
}

/*
==============
bdObjectStoreUploadMultipleLargeObjectsRequest::serializeWithLobbyService
==============
*/
_BOOL8 bdObjectStoreUploadMultipleLargeObjectsRequest::serializeWithLobbyService(bdObjectStoreUploadMultipleLargeObjectsRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  const char *context; 
  const char *ClientIDFromAuthInfo; 
  bool v7; 
  bool v8; 
  unsigned int i; 
  bdObjectStoreMetadata *Metadata; 
  unsigned int v11; 
  char v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  size_t v15; 
  size_t v16; 
  bool v17; 
  bdJSONSerializer json; 
  bdObjectStoreHTTPHeader v20; 
  char url[1024]; 
  char buffer[65536]; 

  context = (char *)&this[-1].bdStructBufferSerializable::__vftable + 28;
  ClientIDFromAuthInfo = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreUploadMultipleLargeObjectsRequest *)((char *)this - 32), lobbyService);
  bdObjectStoreRequestBase::buildCreateUploadSessionsURL((bdObjectStoreUploadMultipleLargeObjectsRequest *)((char *)this - 32), url, 0x400u, ClientIDFromAuthInfo, context);
  v7 = bdStructBufferSerializer::writeString(serializer, 1u, "POST", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  memset_0(buffer, 0, 0xFFFFui64);
  bdJSONSerializer::bdJSONSerializer(&json, buffer, 0xFFFFu);
  if ( !v7 )
    goto LABEL_23;
  v8 = bdJSONSerializer::writeBeginObject(&json) && bdJSONSerializer::writeBeginArray(&json, "objects");
  for ( i = 0; i < *(_DWORD *)&this->m_context[12]; ++i )
    v8 = v8 && bdJSONSerializer::writeBeginObject(&json) && (Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)(*(_QWORD *)&this->m_context[4] + 3512i64 * i)), bdObjectStoreMetadata::serializeToJSON(Metadata, &json, "metadata", 1)) && bdJSONSerializer::writeEndObject(&json);
  if ( v8 && bdJSONSerializer::writeEndArray(&json) && bdJSONSerializer::writeEndObject(&json) && (v11 = bdJSONSerializer::length(&json), bdStructBufferSerializer::writeBlob(serializer, 3u, buffer, v11)) )
    v12 = 1;
  else
LABEL_23:
    v12 = 0;
  bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&v20);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v13 = -1i64;
  v14 = -1i64;
  do
    ++v14;
  while ( aContentType[v14] );
  v15 = 99i64;
  if ( v14 < 0x63 )
    v15 = v14;
  memcpy_0(&v20.__vftable + 2, "Content-Type", v15);
  v20.m_key[v15 - 16] = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v13;
  while ( aApplicationJso_0[v13] );
  v16 = 4095i64;
  if ( v13 < 0xFFF )
    v16 = v13;
  memcpy_0(v20.m_value, "application/json", v16);
  v20.m_value[v16] = 0;
  v17 = v12 && bdStructBufferSerializer::writeObject(serializer, 4u, &v20);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v20.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&v20.gap1074[4]);
  bdJSONSerializer::~bdJSONSerializer(&json);
  return v17;
}

