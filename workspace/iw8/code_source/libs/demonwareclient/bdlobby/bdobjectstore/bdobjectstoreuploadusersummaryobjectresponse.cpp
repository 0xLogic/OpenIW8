/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::getAuthorizationHeaderValue
==============
*/

const char *__fastcall bdObjectStoreUploadUserSummaryObjectResponse::getAuthorizationHeaderValue(bdObjectStoreUploadUserSummaryObjectResponse *this)
{
  return ?getAuthorizationHeaderValue@bdObjectStoreUploadUserSummaryObjectResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::getMetadata
==============
*/

bdObjectStoreMetadata *__fastcall bdObjectStoreUploadUserSummaryObjectResponse::getMetadata(bdObjectStoreUploadUserSummaryObjectResponse *this)
{
  return ?getMetadata@bdObjectStoreUploadUserSummaryObjectResponse@@QEAAAEAVbdObjectStoreMetadata@@XZ(this);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::serialize
==============
*/

bool __fastcall bdObjectStoreUploadUserSummaryObjectResponse::serialize(bdObjectStoreUploadUserSummaryObjectResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreUploadUserSummaryObjectResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::reset
==============
*/

void __fastcall bdObjectStoreUploadUserSummaryObjectResponse::reset(bdObjectStoreUploadUserSummaryObjectResponse *this)
{
  ?reset@bdObjectStoreUploadUserSummaryObjectResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreUploadUserSummaryObjectResponse::deserialize(bdObjectStoreUploadUserSummaryObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreUploadUserSummaryObjectResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::getUploadURL
==============
*/

const char *__fastcall bdObjectStoreUploadUserSummaryObjectResponse::getUploadURL(bdObjectStoreUploadUserSummaryObjectResponse *this)
{
  return ?getUploadURL@bdObjectStoreUploadUserSummaryObjectResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::bdObjectStoreUploadUserSummaryObjectResponse
==============
*/

void __fastcall bdObjectStoreUploadUserSummaryObjectResponse::bdObjectStoreUploadUserSummaryObjectResponse(bdObjectStoreUploadUserSummaryObjectResponse *this)
{
  ??0bdObjectStoreUploadUserSummaryObjectResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::bdObjectStoreUploadUserSummaryObjectResponse
==============
*/
void bdObjectStoreUploadUserSummaryObjectResponse::bdObjectStoreUploadUserSummaryObjectResponse(bdObjectStoreUploadUserSummaryObjectResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdObjectStoreUploadUserSummaryObjectResponse::`vbtable';
    *((_QWORD *)&this->m_metadata + 436) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_metadata + 874) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdObjectStoreUploadUserSummaryObjectResponse_vtbl *)&bdObjectStoreUploadUserSummaryObjectResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdObjectStoreUploadUserSummaryObjectResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdObjectStoreUploadUserSummaryObjectResponse_vtbl *)&bdObjectStoreUploadUserSummaryObjectResponse::`vftable'{for `bdReferencable'};
  bdObjectStoreMetadata::bdObjectStoreMetadata(&this->m_metadata);
  bdObjectStoreMetadata::reset(&this->m_metadata);
  memset_0(&this->__vftable + 2, 0, 0x1400ui64);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::deserialize
==============
*/
__int64 bdObjectStoreUploadUserSummaryObjectResponse::deserialize(bdObjectStoreUploadUserSummaryObjectResponse *this, bdStructBufferDeserializer *deserializer)
{
  unsigned __int8 v4; 
  int v5; 
  unsigned int v6; 
  char v7; 
  unsigned int v8; 
  __int64 v9; 
  char *v10; 
  unsigned __int64 v11; 
  size_t v12; 
  bdObjectStoreHTTPHeader *v13; 
  __int64 v15; 
  __int64 v16; 
  char v17; 
  bdObjectStoreHTTPHeader __that; 
  _QWORD ptr[2]; 
  char Str1[67696]; 
  unsigned int v21; 

  `eh vector vbase constructor iterator'(ptr, 0x1088ui64, 0x10ui64, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::`vbase destructor);
  v4 = 1;
  v17 = 1;
  v5 = 0;
  v6 = 0;
  v21 = 0;
  v7 = 0;
  while ( !v7 )
  {
    bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&__that);
    if ( !bdStructBufferDeserializer::readObject(deserializer, 1u, &__that) )
      goto LABEL_8;
    v4 = 1;
    v17 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      if ( v21 < 0x10 )
      {
        bdHandleAssert(1, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::pushBack", 0x40u, "No more capacity for pushBack");
        if ( v21 < 0x10 )
        {
          v13 = (bdObjectStoreHTTPHeader *)&ptr[529 * v21++];
          bdObjectStoreHTTPHeader::operator=(v13, &__that);
        }
        goto LABEL_9;
      }
      LODWORD(v16) = 16;
      LODWORD(v15) = 1;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.inl", "bdStructBufferDeserializer::readObjectArray", 0x61u, "No capacity to push back deserialized object. tag=%d , capacity=%d", v15, v16);
LABEL_8:
      v4 = 0;
      v17 = 0;
      goto LABEL_9;
    }
    v7 = 1;
LABEL_9:
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&__that.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&__that.gap1074[4]);
    v6 = v21;
    if ( !v4 )
      break;
  }
  v8 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( v5 == 2 )
      {
LABEL_25:
        v4 = v17;
        goto LABEL_26;
      }
      bdHandleAssert(v8 < v6, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x4Du, "i is out of range");
      v9 = 4232i64 * v8;
      if ( !strncmp(&Str1[v9], "Authorization", 0x64ui64) )
        break;
      bdHandleAssert(v8 < v21, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x4Du, "i is out of range");
      if ( !strncmp(&Str1[v9], "Dw-ObjectStore-URL-Rewrite", 0x64ui64) )
      {
        bdHandleAssert(v8 < v21, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x4Du, "i is out of range");
        bdStrlcpy(this->m_url, &Str1[v9 + 100], 0x400ui64);
LABEL_23:
        ++v5;
      }
      ++v8;
      v6 = v21;
      if ( v8 >= v21 )
        goto LABEL_25;
    }
    bdHandleAssert(v8 < v21, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x4Du, "i is out of range");
    v10 = &Str1[v9 + 100];
    bdHandleAssert(&Str1[v9 + 100] != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v11 = -1i64;
    do
      ++v11;
    while ( v10[v11] );
    if ( this != (bdObjectStoreUploadUserSummaryObjectResponse *)-16i64 )
    {
      v12 = 4095i64;
      if ( v11 < 0xFFF )
        v12 = v11;
      memcpy_0(&this->__vftable + 2, v10, v12);
      *((_BYTE *)&this->__vftable + v12 + 16) = 0;
    }
    goto LABEL_23;
  }
LABEL_26:
  if ( v4 && v5 != 2 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreUploadLargeUserObjectResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadusersummaryobjectresponse.cpp", "bdObjectStoreUploadUserSummaryObjectResponse::deserialize", 0x36u, "No Auth or Rewrite URL Header was found in headers.");
    v4 = 0;
  }
  `eh vector destructor iterator'(ptr, 0x1088ui64, 0x10ui64, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::`vbase destructor);
  return v4;
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::getAuthorizationHeaderValue
==============
*/
bdObjectStoreUploadUserSummaryObjectResponse_vtbl **bdObjectStoreUploadUserSummaryObjectResponse::getAuthorizationHeaderValue(bdObjectStoreUploadUserSummaryObjectResponse *this)
{
  return &this->__vftable + 2;
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::getMetadata
==============
*/
bdObjectStoreMetadata *bdObjectStoreUploadUserSummaryObjectResponse::getMetadata(bdObjectStoreUploadUserSummaryObjectResponse *this)
{
  return &this->m_metadata;
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::getUploadURL
==============
*/
char *bdObjectStoreUploadUserSummaryObjectResponse::getUploadURL(bdObjectStoreUploadUserSummaryObjectResponse *this)
{
  return this->m_url;
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::reset
==============
*/
void bdObjectStoreUploadUserSummaryObjectResponse::reset(bdObjectStoreUploadUserSummaryObjectResponse *this)
{
  bdObjectStoreMetadata::reset(&this->m_metadata);
  memset_0(&this->__vftable + 2, 0, 0x1400ui64);
}

/*
==============
bdObjectStoreUploadUserSummaryObjectResponse::serialize
==============
*/
bool bdObjectStoreUploadUserSummaryObjectResponse::serialize(bdObjectStoreUploadUserSummaryObjectResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadusersummaryobjectresponse.cpp", "bdObjectStoreUploadUserSummaryObjectResponse::serialize", 0x46u, "Cannot call deserialize on bdObjectStoreUploadUserObjectRequest");
  return 0;
}

