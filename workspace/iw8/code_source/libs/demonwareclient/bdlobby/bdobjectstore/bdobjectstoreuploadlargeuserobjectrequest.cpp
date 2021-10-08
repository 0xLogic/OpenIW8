/*
==============
bdObjectStoreUploadLargeUserObjectRequest::getContext
==============
*/

const char *__fastcall bdObjectStoreUploadLargeUserObjectRequest::getContext(bdObjectStoreUploadLargeUserObjectRequest *this)
{
  return ?getContext@bdObjectStoreUploadLargeUserObjectRequest@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::init
==============
*/

void __fastcall bdObjectStoreUploadLargeUserObjectRequest::init(bdObjectStoreUploadLargeUserObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *object)
{
  ?init@bdObjectStoreUploadLargeUserObjectRequest@@QEAAXQEBD0AEBVbdObjectStoreObject@@@Z(this, client, context, object);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest
==============
*/

void __fastcall bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest(bdObjectStoreUploadLargeUserObjectRequest *this, const char *const context, const bdObjectStoreObject *object)
{
  ??0bdObjectStoreUploadLargeUserObjectRequest@@QEAA@QEBDAEBVbdObjectStoreObject@@@Z(this, context, object);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest
==============
*/

void __fastcall bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest(bdObjectStoreUploadLargeUserObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *object)
{
  ??0bdObjectStoreUploadLargeUserObjectRequest@@QEAA@QEBD0AEBVbdObjectStoreObject@@@Z(this, client, context, object);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::deserialize
==============
*/

bool __fastcall bdObjectStoreUploadLargeUserObjectRequest::deserialize(bdObjectStoreUploadLargeUserObjectRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreUploadLargeUserObjectRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::init
==============
*/

void __fastcall bdObjectStoreUploadLargeUserObjectRequest::init(bdObjectStoreUploadLargeUserObjectRequest *this, const char *const context, const bdObjectStoreObject *object)
{
  ?init@bdObjectStoreUploadLargeUserObjectRequest@@QEAAXQEBDAEBVbdObjectStoreObject@@@Z(this, context, object);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::reset
==============
*/

void __fastcall bdObjectStoreUploadLargeUserObjectRequest::reset(bdObjectStoreUploadLargeUserObjectRequest *this)
{
  ?reset@bdObjectStoreUploadLargeUserObjectRequest@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::getObject
==============
*/

const bdObjectStoreObject *__fastcall bdObjectStoreUploadLargeUserObjectRequest::getObject(bdObjectStoreUploadLargeUserObjectRequest *this)
{
  return ?getObject@bdObjectStoreUploadLargeUserObjectRequest@@QEBAAEBVbdObjectStoreObject@@XZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest
==============
*/

void __fastcall bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest(bdObjectStoreUploadLargeUserObjectRequest *this)
{
  ??0bdObjectStoreUploadLargeUserObjectRequest@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdObjectStoreUploadLargeUserObjectRequest::serializeWithLobbyService(bdObjectStoreUploadLargeUserObjectRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdObjectStoreUploadLargeUserObjectRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest
==============
*/
void bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest(bdObjectStoreUploadLargeUserObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *object, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadLargeUserObjectRequest::`vbtable';
    *(_QWORD *)this->gapDE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapDE8[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadLargeUserObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadLargeUserObjectRequest_vtbl *)&bdObjectStoreUploadLargeUserObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadLargeUserObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadLargeUserObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObject::bdObjectStoreObject((bdObjectStoreObject *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreMetadata::operator=((bdObjectStoreMetadata *)(&this->bdStructBufferSerializable::__vftable + 2), &object->m_metadata);
  *(_QWORD *)&this->m_object[3472] = object->m_contentPtr;
  *(_QWORD *)&this->m_object[3480] = object->m_contentSize;
  *(_QWORD *)&this->m_object[3488] = object->m_downloadInterceptor;
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest
==============
*/
void bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest(bdObjectStoreUploadLargeUserObjectRequest *this, const char *const context, const bdObjectStoreObject *object, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadLargeUserObjectRequest::`vbtable';
    *(_QWORD *)this->gapDE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapDE8[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadLargeUserObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadLargeUserObjectRequest_vtbl *)&bdObjectStoreUploadLargeUserObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadLargeUserObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadLargeUserObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObject::bdObjectStoreObject((bdObjectStoreObject *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreMetadata::operator=((bdObjectStoreMetadata *)(&this->bdStructBufferSerializable::__vftable + 2), &object->m_metadata);
  *(_QWORD *)&this->m_object[3472] = object->m_contentPtr;
  *(_QWORD *)&this->m_object[3480] = object->m_contentSize;
  *(_QWORD *)&this->m_object[3488] = object->m_downloadInterceptor;
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest
==============
*/
void bdObjectStoreUploadLargeUserObjectRequest::bdObjectStoreUploadLargeUserObjectRequest(bdObjectStoreUploadLargeUserObjectRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadLargeUserObjectRequest::`vbtable';
    *(_QWORD *)this->gapDE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapDE8[8] = 0;
  }
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadLargeUserObjectRequest_vtbl *)&bdObjectStoreRequestBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreRequestBase::__vftable = (bdObjectStoreUploadLargeUserObjectRequest_vtbl *)&bdObjectStoreUploadLargeUserObjectRequest::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadLargeUserObjectRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadLargeUserObjectRequest::`vftable'{for `bdReferencable'};
  bdObjectStoreObject::bdObjectStoreObject((bdObjectStoreObject *)(&this->bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::reset(this);
  bdObjectStoreObject::reset((bdObjectStoreObject *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::deserialize
==============
*/
bool bdObjectStoreUploadLargeUserObjectRequest::deserialize(bdObjectStoreUploadLargeUserObjectRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadlargeuserobjectrequest.cpp", "bdObjectStoreUploadLargeUserObjectRequest::deserialize", 0x3Fu, "Cannot call deserialize on bdObjectStoreUploadLargeUserObjectRequest");
  return 0;
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::getContext
==============
*/
char *bdObjectStoreUploadLargeUserObjectRequest::getContext(bdObjectStoreUploadLargeUserObjectRequest *this)
{
  return this->m_context;
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::getObject
==============
*/
bdStructBufferSerializable_vtbl **bdObjectStoreUploadLargeUserObjectRequest::getObject(bdObjectStoreUploadLargeUserObjectRequest *this)
{
  return &this->bdStructBufferSerializable::__vftable + 2;
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::init
==============
*/
void bdObjectStoreUploadLargeUserObjectRequest::init(bdObjectStoreUploadLargeUserObjectRequest *this, const char *const client, const char *const context, const bdObjectStoreObject *object)
{
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreMetadata::operator=((bdObjectStoreMetadata *)(&this->bdStructBufferSerializable::__vftable + 2), &object->m_metadata);
  *(_QWORD *)&this->m_object[3472] = object->m_contentPtr;
  *(_QWORD *)&this->m_object[3480] = object->m_contentSize;
  *(_QWORD *)&this->m_object[3488] = object->m_downloadInterceptor;
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::init
==============
*/
void bdObjectStoreUploadLargeUserObjectRequest::init(bdObjectStoreUploadLargeUserObjectRequest *this, const char *const context, const bdObjectStoreObject *object)
{
  bdObjectStoreRequestBase::setContext(this, context);
  bdObjectStoreMetadata::operator=((bdObjectStoreMetadata *)(&this->bdStructBufferSerializable::__vftable + 2), &object->m_metadata);
  *(_QWORD *)&this->m_object[3472] = object->m_contentPtr;
  *(_QWORD *)&this->m_object[3480] = object->m_contentSize;
  *(_QWORD *)&this->m_object[3488] = object->m_downloadInterceptor;
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::reset
==============
*/
void bdObjectStoreUploadLargeUserObjectRequest::reset(bdObjectStoreUploadLargeUserObjectRequest *this)
{
  bdObjectStoreRequestBase::reset(this);
  bdObjectStoreObject::reset((bdObjectStoreObject *)(&this->bdStructBufferSerializable::__vftable + 2));
}

/*
==============
bdObjectStoreUploadLargeUserObjectRequest::serializeWithLobbyService
==============
*/
_BOOL8 bdObjectStoreUploadLargeUserObjectRequest::serializeWithLobbyService(bdObjectStoreUploadLargeUserObjectRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  const char *context; 
  const char *ClientIDFromAuthInfo; 
  bool v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  size_t v10; 
  size_t v11; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreMetadata *v13; 
  bool v14; 
  bdObjectStoreHTTPHeader v16; 
  bdObjectStoreHTTPHeader header; 
  char url[1024]; 

  context = &this[-1].m_object[3492];
  ClientIDFromAuthInfo = bdObjectStoreRequestBase::getClientIDFromAuthInfo((bdObjectStoreUploadLargeUserObjectRequest *)((char *)this - 32), lobbyService);
  bdObjectStoreRequestBase::buildUserUploadSessionURL((bdObjectStoreUploadLargeUserObjectRequest *)((char *)this - 32), url, 0x400u, ClientIDFromAuthInfo, context);
  v7 = bdStructBufferSerializer::writeString(serializer, 1u, "POST", 0x10u) && bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u);
  bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&v16);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v8 = -1i64;
  v9 = -1i64;
  do
    ++v9;
  while ( aContentType[v9] );
  v10 = 99i64;
  if ( v9 < 0x63 )
    v10 = v9;
  memcpy_0(&v16.__vftable + 2, "Content-Type", v10);
  v16.m_key[v10 - 16] = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v8;
  while ( aApplicationOct_1[v8] );
  v11 = 4095i64;
  if ( v8 < 0xFFF )
    v11 = v8;
  memcpy_0(v16.m_value, "application/octet-stream", v11);
  v16.m_value[v11] = 0;
  bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&header);
  v14 = 0;
  if ( v7 )
  {
    Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)&this->m_context[4]);
    if ( bdObjectStoreMetadata::serializeToHTTPHeader(Metadata, &header) )
    {
      v13 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata((bdObjectStoreObject *)&this->m_context[4]);
      if ( bdObjectStoreMetadata::serializeToHTTPHeader(v13, &header) && bdStructBufferSerializer::writeObject(serializer, 4u, &v16) && bdStructBufferSerializer::writeObject(serializer, 4u, &header) )
        v14 = 1;
    }
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&header.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&header.gap1074[4]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v16.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&v16.gap1074[4]);
  return v14;
}

