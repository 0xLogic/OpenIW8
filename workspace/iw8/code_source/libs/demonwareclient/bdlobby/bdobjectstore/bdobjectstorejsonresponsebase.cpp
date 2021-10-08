/*
==============
bdObjectStoreJSONResponseBase::deserializeLargeObjectMetadataResponse
==============
*/

bool __fastcall bdObjectStoreJSONResponseBase::deserializeLargeObjectMetadataResponse(bdObjectStoreJSONResponseBase *this, bdStructBufferDeserializer *deserializer, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType, char *authorizationHeaderValue, bdObjectStoreObject *object)
{
  return ?deserializeLargeObjectMetadataResponse@bdObjectStoreJSONResponseBase@@IEAA_NAEAVbdStructBufferDeserializer@@W4bdObjectStoreObjectIDOwnerType@bdObjectStoreObjectID@@PEADAEAVbdObjectStoreObject@@@Z(this, deserializer, ownerType, authorizationHeaderValue, object);
}

/*
==============
bdObjectStoreJSONResponseBase::~bdObjectStoreJSONResponseBase
==============
*/

void __fastcall bdObjectStoreJSONResponseBase::~bdObjectStoreJSONResponseBase(bdObjectStoreJSONResponseBase *this)
{
  ??1bdObjectStoreJSONResponseBase@@UEAA@XZ(this);
}

/*
==============
bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse
==============
*/

bool __fastcall bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse(bdObjectStoreJSONResponseBase *this, bdStructBufferDeserializer *deserializer, char *authorizationHeaderValue, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  return ?deserializeVectorizedMetadataResponse@bdObjectStoreJSONResponseBase@@IEAA_NAEAVbdStructBufferDeserializer@@PEADPEAVbdObjectStoreErrorWrappedObject@@IW4bdObjectStoreObjectIDOwnerType@bdObjectStoreObjectID@@@Z(this, deserializer, authorizationHeaderValue, objectList, objectListSize, ownerType);
}

/*
==============
bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse
==============
*/

bool __fastcall bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse(bdObjectStoreJSONResponseBase *this, bdJSONDeserializer *json, bdStructBufferDeserializer *deserializer, char *authorizationHeaderValue)
{
  return ?getJSONObjectFromJSONResponse@bdObjectStoreJSONResponseBase@@IEBA_NPEAVbdJSONDeserializer@@AEAVbdStructBufferDeserializer@@PEAD@Z(this, json, deserializer, authorizationHeaderValue);
}

/*
==============
bdObjectStoreJSONResponseBase::populateMetadataFromHeaders
==============
*/

bool __fastcall bdObjectStoreJSONResponseBase::populateMetadataFromHeaders(bdObjectStoreJSONResponseBase *this, const bdRESTResponseMessage *reply, bdObjectStoreMetadata *metadata)
{
  return ?populateMetadataFromHeaders@bdObjectStoreJSONResponseBase@@IEAA_NAEBVbdRESTResponseMessage@@AEAVbdObjectStoreMetadata@@@Z(this, reply, metadata);
}

/*
==============
bdObjectStoreJSONResponseBase::extractNullTerminatedContentLengthFromHeaders
==============
*/

bool __fastcall bdObjectStoreJSONResponseBase::extractNullTerminatedContentLengthFromHeaders(bdObjectStoreJSONResponseBase *this, unsigned int *contentLength, const bdStructFixedSizeArray<bdObjectStoreHTTPHeader,16> *headers, unsigned int maxResponseSize)
{
  return ?extractNullTerminatedContentLengthFromHeaders@bdObjectStoreJSONResponseBase@@IEBA_NAEAIAEBV?$bdStructFixedSizeArray@VbdObjectStoreHTTPHeader@@$0BA@@@I@Z(this, contentLength, headers, maxResponseSize);
}

/*
==============
bdObjectStoreJSONResponseBase::populateMetadataFromHeaders
==============
*/

bool __fastcall bdObjectStoreJSONResponseBase::populateMetadataFromHeaders(bdObjectStoreJSONResponseBase *this, const bdArray<bdObjectStoreHTTPHeader> *headers, bdObjectStoreMetadata *metadata)
{
  return ?populateMetadataFromHeaders@bdObjectStoreJSONResponseBase@@IEAA_NAEBV?$bdArray@VbdObjectStoreHTTPHeader@@@@AEAVbdObjectStoreMetadata@@@Z(this, headers, metadata);
}

/*
==============
bdObjectStoreJSONResponseBase::extractAuthorizationHeaderFromHeaders
==============
*/

bool __fastcall bdObjectStoreJSONResponseBase::extractAuthorizationHeaderFromHeaders(bdObjectStoreJSONResponseBase *this, char *authorizationHeaderValue, const bdStructFixedSizeArray<bdObjectStoreHTTPHeader,16> *headers)
{
  return ?extractAuthorizationHeaderFromHeaders@bdObjectStoreJSONResponseBase@@IEBA_NPEADAEBV?$bdStructFixedSizeArray@VbdObjectStoreHTTPHeader@@$0BA@@@@Z(this, authorizationHeaderValue, headers);
}

/*
==============
bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse
==============
*/

bool __fastcall bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse(bdObjectStoreJSONResponseBase *this, bdStructBufferDeserializer *deserializer, bdObjectStoreErrorWrappedMetadata *metadataList, unsigned int metadataListSize, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  return ?deserializeVectorizedMetadataResponse@bdObjectStoreJSONResponseBase@@IEAA_NAEAVbdStructBufferDeserializer@@PEAVbdObjectStoreErrorWrappedMetadata@@IW4bdObjectStoreObjectIDOwnerType@bdObjectStoreObjectID@@@Z(this, deserializer, metadataList, metadataListSize, ownerType);
}

/*
==============
bdObjectStoreJSONResponseBase::~bdObjectStoreJSONResponseBase
==============
*/
void bdObjectStoreJSONResponseBase::~bdObjectStoreJSONResponseBase(bdObjectStoreJSONResponseBase *this)
{
  this->__vftable = (bdObjectStoreJSONResponseBase_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
}

/*
==============
bdObjectStoreJSONResponseBase::deserializeLargeObjectMetadataResponse
==============
*/
_BOOL8 bdObjectStoreJSONResponseBase::deserializeLargeObjectMetadataResponse(bdObjectStoreJSONResponseBase *this, bdStructBufferDeserializer *deserializer, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType, char *authorizationHeaderValue, bdObjectStoreObject *object)
{
  bdObjectStoreMetadata *Metadata; 
  bool v10; 
  bdJSONDeserializer json; 

  bdJSONDeserializer::bdJSONDeserializer(&json);
  v10 = 0;
  if ( bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse(this, &json, deserializer, authorizationHeaderValue) )
  {
    Metadata = bdObjectStoreObject::getMetadata(object);
    if ( bdObjectStoreMetadata::deserializeFromJSON(Metadata, &json, ownerType) )
      v10 = 1;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&json);
  return v10;
}

/*
==============
bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse
==============
*/
__int64 bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse(bdObjectStoreJSONResponseBase *this, bdStructBufferDeserializer *deserializer, char *authorizationHeaderValue, bdObjectStoreErrorWrappedObject *objectList, unsigned int objectListSize, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  unsigned int v10; 
  unsigned int i; 
  unsigned __int8 v12; 
  bdObjectStoreObject *Object; 
  bdObjectStoreMetadata *Metadata; 
  unsigned int v16; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer v18; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v20; 
  bdJSONDeserializer json; 
  __int64 v22; 

  v22 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::bdJSONDeserializer(&v18);
  bdJSONDeserializer::bdJSONDeserializer(&json);
  if ( bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse(this, &json, deserializer, authorizationHeaderValue) && bdJSONDeserializer::getArray(&json, "objects", &value) && bdJSONDeserializer::getArray(&json, "errors", &v18) && value.m_count + v18.m_count == objectListSize )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v17);
    v10 = 0;
    v16 = 0;
    for ( i = 0; ; ++i )
    {
      v12 = 1;
      if ( i >= value.m_count )
        break;
      if ( bdJSONDeserializer::getObject(&value, i, &v17) && bdJSONDeserializer::getUInt32(&v17, "requestIndex", &v16) && v16 < objectListSize && bdJSONDeserializer::getObject(&v17, "metadata", &v17) )
      {
        Object = bdObjectStoreErrorWrappedObject::getObject(&objectList[v16]);
        Metadata = bdObjectStoreObject::getMetadata(Object);
        if ( bdObjectStoreMetadata::deserializeFromJSON(Metadata, &v17, ownerType) )
          continue;
      }
      v12 = 0;
      break;
    }
    bdJSONDeserializer::bdJSONDeserializer(&v20);
    if ( v12 )
    {
      while ( v10 < v18.m_count )
      {
        if ( !bdJSONDeserializer::getObject(&v18, v10, &v20) || !bdJSONDeserializer::getUInt32(&v20, "requestIndex", &v16) || v16 >= objectListSize || !bdObjectStoreErrorWrappedObject::deserializeErrorFromJSON(&objectList[v16], &v20, ownerType) )
        {
          v12 = 0;
          break;
        }
        v12 = 1;
        ++v10;
      }
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v20);
    bdJSONDeserializer::~bdJSONDeserializer(&v17);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse", 0xA1u, "Unexpected error retrieving Metadata JSON content");
    v12 = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&json);
  bdJSONDeserializer::~bdJSONDeserializer(&v18);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return v12;
}

/*
==============
bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse
==============
*/
__int64 bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse(bdObjectStoreJSONResponseBase *this, bdStructBufferDeserializer *deserializer, bdObjectStoreErrorWrappedMetadata *metadataList, unsigned int metadataListSize, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  unsigned int v9; 
  unsigned int i; 
  unsigned __int8 v11; 
  unsigned int v13; 
  bdJSONDeserializer v14; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v16; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer json; 
  __int64 v19; 

  v19 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::bdJSONDeserializer(&v14);
  bdJSONDeserializer::bdJSONDeserializer(&json);
  if ( bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse(this, &json, deserializer, NULL) && bdJSONDeserializer::getArray(&json, "objects", &value) && bdJSONDeserializer::getArray(&json, "errors", &v14) && v14.m_count + value.m_count == metadataListSize )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v17);
    v9 = 0;
    v13 = 0;
    for ( i = 0; ; ++i )
    {
      v11 = 1;
      if ( i >= value.m_count )
        break;
      if ( !bdJSONDeserializer::getObject(&value, i, &v17) || !bdJSONDeserializer::getUInt32(&v17, "requestIndex", &v13) || v13 >= metadataListSize || !bdObjectStoreErrorWrappedMetadata::deserializeFromJSON(&metadataList[v13], &v17, ownerType) )
      {
        v11 = 0;
        break;
      }
    }
    bdJSONDeserializer::bdJSONDeserializer(&v16);
    if ( v11 )
    {
      while ( v9 < v14.m_count )
      {
        if ( !bdJSONDeserializer::getObject(&v14, v9, &v16) || !bdJSONDeserializer::getUInt32(&v16, "requestIndex", &v13) || v13 >= metadataListSize || !bdObjectStoreErrorWrappedMetadata::deserializeErrorFromJSON(&metadataList[v13], &v16, ownerType) )
        {
          v11 = 0;
          break;
        }
        v11 = 1;
        ++v9;
      }
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v16);
    bdJSONDeserializer::~bdJSONDeserializer(&v17);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse", 0xDEu, "Unexpected error retrieving Metadata JSON content");
    v11 = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&json);
  bdJSONDeserializer::~bdJSONDeserializer(&v14);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return v11;
}

/*
==============
bdObjectStoreJSONResponseBase::extractAuthorizationHeaderFromHeaders
==============
*/
char bdObjectStoreJSONResponseBase::extractAuthorizationHeaderFromHeaders(bdObjectStoreJSONResponseBase *this, char *authorizationHeaderValue, const bdStructFixedSizeArray<bdObjectStoreHTTPHeader,16> *headers)
{
  unsigned int m_size; 
  char v4; 
  unsigned int v5; 
  bdObjectStoreHTTPHeader *v8; 
  bool v9; 
  char *m_value; 
  unsigned __int64 v11; 
  size_t v12; 

  m_size = headers->m_size;
  v4 = 0;
  v5 = 0;
  if ( m_size )
  {
    while ( !v4 )
    {
      bdHandleAssert(v5 < m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x54u, "i is out of range");
      v8 = &headers->m_elements[v5];
      if ( !strncmp((const char *)&v8->__vftable + 16, "Authorization", 0x64ui64) )
      {
        bdHandleAssert(v5 < headers->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x54u, "i is out of range");
        v9 = v8->m_value == NULL;
        m_value = v8->m_value;
        bdHandleAssert(!v9, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v11 = -1i64;
        do
          ++v11;
        while ( m_value[v11] );
        if ( authorizationHeaderValue )
        {
          v12 = 4095i64;
          if ( v11 < 0xFFF )
            v12 = v11;
          memcpy_0(authorizationHeaderValue, m_value, v12);
          authorizationHeaderValue[v12] = 0;
        }
        v4 = 1;
      }
      m_size = headers->m_size;
      if ( ++v5 >= m_size )
      {
        if ( !v4 )
          goto LABEL_14;
        return 1;
      }
    }
    return 1;
  }
  else
  {
LABEL_14:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::extractAuthorizationHeaderFromHeaders", 0x56u, "No Auth Header was found in headers.");
    return 0;
  }
}

/*
==============
bdObjectStoreJSONResponseBase::extractNullTerminatedContentLengthFromHeaders
==============
*/
char bdObjectStoreJSONResponseBase::extractNullTerminatedContentLengthFromHeaders(bdObjectStoreJSONResponseBase *this, unsigned int *contentLength, const bdStructFixedSizeArray<bdObjectStoreHTTPHeader,16> *headers, unsigned int maxResponseSize)
{
  unsigned int v4; 
  unsigned int m_size; 
  char v8; 
  bool v10; 
  __int64 v11; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 

  v4 = 0;
  *contentLength = 0;
  m_size = headers->m_size;
  v8 = 1;
  if ( m_size )
  {
    v10 = m_size != 0;
    while ( 1 )
    {
      bdHandleAssert(v10, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x54u, "i is out of range");
      v11 = v4;
      v12 = strncmp((const char *)&headers->m_elements[v11].__vftable + 16, "Content-Length", 0x64ui64);
      v13 = headers->m_size;
      if ( !v12 )
        break;
      v10 = ++v4 < v13;
      if ( v4 >= v13 )
        goto LABEL_7;
    }
    bdHandleAssert(v4 < v13, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x54u, "i is out of range");
    *contentLength = strtoul(headers->m_elements[v11].m_value, NULL, 0);
  }
LABEL_7:
  v14 = *contentLength;
  if ( !*contentLength )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::extractNullTerminatedContentLengthFromHeaders", 0x70u, "Empty content-length in response - unable to continue.");
    v14 = *contentLength;
    v8 = 0;
  }
  v15 = v14 + 1;
  *contentLength = v15;
  if ( v15 <= maxResponseSize )
    return v8;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::extractNullTerminatedContentLengthFromHeaders", 0x79u, "Response is too large to deserialize.");
  return 0;
}

/*
==============
bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse
==============
*/
__int64 bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse(bdObjectStoreJSONResponseBase *this, bdJSONDeserializer *json, bdStructBufferDeserializer *deserializer, char *authorizationHeaderValue)
{
  char v5; 
  unsigned int v6; 
  char v7; 
  void *v8; 
  char v9; 
  unsigned __int8 v10; 
  bdObjectStoreHTTPHeader *v12; 
  unsigned int v13; 
  char v14; 
  unsigned int v15; 
  bool v16; 
  __int64 v17; 
  char v18; 
  char v19; 
  unsigned int v20; 
  __int64 v21; 
  char *v22; 
  unsigned __int64 v23; 
  size_t v24; 
  bool v25; 
  char v26; 
  bdJSONDeserializer *v27; 
  char *format; 
  __int64 v29; 
  __int64 v30; 
  unsigned int readSize; 
  unsigned int value; 
  unsigned __int8 *blob; 
  void *v34; 
  bdJSONDeserializer *v35; 
  __int64 v36; 
  bdObjectStoreHTTPHeader __that; 
  _QWORD ptr[2]; 
  char Str1[67696]; 
  unsigned int v40; 

  v36 = -2i64;
  v34 = authorizationHeaderValue;
  v35 = json;
  `eh vector vbase constructor iterator'(ptr, 0x1088ui64, 0x10ui64, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::`vbase destructor);
  v5 = 1;
  v6 = 0;
  v40 = 0;
  v7 = 0;
  while ( !v7 )
  {
    bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&__that);
    if ( !bdStructBufferDeserializer::readObject(deserializer, 1u, &__that) )
      goto LABEL_8;
    v5 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      if ( v40 < 0x10 )
      {
        bdHandleAssert(1, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::pushBack", 0x40u, "No more capacity for pushBack");
        if ( v40 < 0x10 )
        {
          v12 = (bdObjectStoreHTTPHeader *)&ptr[529 * v40++];
          bdObjectStoreHTTPHeader::operator=(v12, &__that);
        }
        goto LABEL_9;
      }
      LODWORD(v30) = 16;
      LODWORD(v29) = 1;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.inl", "bdStructBufferDeserializer::readObjectArray", 0x61u, "No capacity to push back deserialized object. tag=%d , capacity=%d", v29, v30);
LABEL_8:
      v5 = 0;
      goto LABEL_9;
    }
    v7 = 1;
LABEL_9:
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&__that.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&__that.gap1074[4]);
    if ( !v5 )
      break;
  }
  value = 0;
  v8 = v34;
  if ( v5 && bdStructBufferDeserializer::readUInt32(deserializer, 2u, &value) )
  {
    v9 = 1;
    if ( value - 200 > 0x63 )
    {
      LODWORD(v29) = value;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse", 0x28u, "NON-2XX Status Code Received. Unhandled Error with Status Code [%d].", v29);
      goto LABEL_14;
    }
  }
  else
  {
    v9 = 0;
  }
  v13 = 0;
  if ( !v9 )
    goto LABEL_29;
  v14 = 1;
  v15 = 0;
  if ( !v40 )
    goto LABEL_26;
  v16 = v40 != 0;
  while ( 1 )
  {
    bdHandleAssert(v16, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x54u, "i is out of range");
    v17 = 4232i64 * v15;
    if ( !strncmp(&Str1[v17], "Content-Length", 0x64ui64) )
      break;
    v16 = ++v15 < v40;
    if ( v15 >= v40 )
      goto LABEL_26;
  }
  bdHandleAssert(v15 < v40, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x54u, "i is out of range");
  v13 = strtoul(&Str1[v17 + 100], NULL, 0);
  if ( !v13 )
  {
LABEL_26:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::extractNullTerminatedContentLengthFromHeaders", 0x70u, "Empty content-length in response - unable to continue.");
    v14 = 0;
  }
  if ( ++v13 > 0xFFFF )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::extractNullTerminatedContentLengthFromHeaders", 0x79u, "Response is too large to deserialize.");
    goto LABEL_29;
  }
  if ( v14 )
    v18 = 1;
  else
LABEL_29:
    v18 = 0;
  if ( !v8 )
    goto LABEL_47;
  if ( !v18 )
  {
LABEL_46:
    v18 = 0;
LABEL_47:
    blob = NULL;
    readSize = 0;
    if ( v18 )
      goto LABEL_48;
LABEL_50:
    v26 = 0;
    goto LABEL_51;
  }
  v19 = 0;
  v20 = 0;
  if ( !v40 )
  {
LABEL_45:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::extractAuthorizationHeaderFromHeaders", 0x56u, "No Auth Header was found in headers.");
    goto LABEL_46;
  }
  while ( !v19 )
  {
    bdHandleAssert(v20 < v40, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x54u, "i is out of range");
    v21 = 4232i64 * v20;
    if ( !strncmp(&Str1[v21], "Authorization", 0x64ui64) )
    {
      bdHandleAssert(v20 < v40, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdObjectStoreHTTPHeader,16>::operator []", 0x54u, "i is out of range");
      v22 = &Str1[v21 + 100];
      bdHandleAssert(v22 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v23 = -1i64;
      do
        ++v23;
      while ( v22[v23] );
      v24 = 4095i64;
      if ( v23 < 0xFFF )
        v24 = v23;
      memcpy_0(v8, v22, v24);
      *((_BYTE *)v8 + v24) = 0;
      v19 = 1;
    }
    if ( ++v20 >= v40 )
    {
      if ( !v19 )
        goto LABEL_45;
      break;
    }
  }
  blob = NULL;
  readSize = 0;
LABEL_48:
  v25 = bdStructBufferDeserializer::readBlobPointer(deserializer, 3u, (const unsigned __int8 **)&blob, v13, &readSize);
  v6 = readSize;
  if ( !v25 )
    goto LABEL_50;
  v26 = 1;
LABEL_51:
  LODWORD(v29) = v13;
  LODWORD(format) = v6;
  bdHandleAssert(v6 + 1 == v13, "(contentLength + 1) == nullTerminatedContentLength", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse", 0x40u, "Content Length [%d] Max JSON Response Size [%d]", format, v29);
  if ( v26 && (v27 = v35, bdJSONDeserializer::parse(v35, (const char *)blob)) && bdJSONDeserializer::isObject(v27) )
    v10 = 1;
  else
LABEL_14:
    v10 = 0;
  `eh vector destructor iterator'(ptr, 0x1088ui64, 0x10ui64, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::`vbase destructor);
  return v10;
}

/*
==============
bdObjectStoreJSONResponseBase::populateMetadataFromHeaders
==============
*/
char bdObjectStoreJSONResponseBase::populateMetadataFromHeaders(bdObjectStoreJSONResponseBase *this, const bdArray<bdObjectStoreHTTPHeader> *headers, bdObjectStoreMetadata *metadata)
{
  bool v5; 
  char v6; 
  unsigned int v7; 
  __int64 v8; 
  const bdObjectStoreHTTPHeader *v9; 
  bdJSONDeserializer json; 

  v5 = 1;
  v6 = 0;
  v7 = 0;
  while ( v7 < headers->m_size )
  {
    bdHandleAssert(1, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreHTTPHeader>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    v8 = v7;
    if ( !strncmp((const char *)&headers->m_data[v8].__vftable + 16, "Dw-Objectstore-Metadata", 0x64ui64) )
    {
      bdHandleAssert(v7 < headers->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreHTTPHeader>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      bdJSONDeserializer::bdJSONDeserializer(&json, headers->m_data[v8].m_value);
      v5 = bdObjectStoreMetadata::deserializeFromJSON(metadata, &json, USER_OWNER_TYPE);
      v6 = 1;
LABEL_9:
      bdJSONDeserializer::~bdJSONDeserializer(&json);
      goto LABEL_10;
    }
    bdHandleAssert(v7 < headers->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreHTTPHeader>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    if ( !strncmp((const char *)&headers->m_data[v8].__vftable + 16, "Dw-Objectstore-Tags", 0x64ui64) )
    {
      bdHandleAssert(v7 < headers->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreHTTPHeader>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      bdJSONDeserializer::bdJSONDeserializer(&json, headers->m_data[v8].m_value);
      v5 = bdObjectStoreMetadata::deserializeTagsFromJSON(metadata, &json);
      goto LABEL_9;
    }
    bdHandleAssert(v7 < headers->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreHTTPHeader>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    if ( !strncmp((const char *)&headers->m_data[v8].__vftable + 16, "DW-Objectstore-Statistics", 0x64ui64) )
    {
      v9 = bdArray<bdObjectStoreHTTPHeader>::operator[]((bdArray<bdObjectStoreHTTPHeader> *)headers, v7);
      bdJSONDeserializer::bdJSONDeserializer(&json, v9->m_value);
      v5 = bdObjectStoreMetadata::deserializeStatisticsFromJSON(metadata, &json);
      goto LABEL_9;
    }
LABEL_10:
    ++v7;
    if ( !v5 )
      goto LABEL_11;
  }
  if ( !v6 )
  {
LABEL_11:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::populateMetadataFromHeaders", 0x128u, "ObjectStore Metadata and/or tags header not present, or unparseable.");
    return 0;
  }
  return 1;
}

/*
==============
bdObjectStoreJSONResponseBase::populateMetadataFromHeaders
==============
*/
_BOOL8 bdObjectStoreJSONResponseBase::populateMetadataFromHeaders(bdObjectStoreJSONResponseBase *this, const bdRESTResponseMessage *reply, bdObjectStoreMetadata *metadata)
{
  const char *v5; 
  const char *v6; 
  const char *v7; 
  bool v8; 
  bdJSONDeserializer json; 

  v5 = bdRESTResponseMessage::headerFieldValue((bdRESTResponseMessage *)reply, "Dw-Objectstore-Metadata");
  v6 = bdRESTResponseMessage::headerFieldValue((bdRESTResponseMessage *)reply, "Dw-Objectstore-Tags");
  v7 = bdRESTResponseMessage::headerFieldValue((bdRESTResponseMessage *)reply, "DW-Objectstore-Statistics");
  v8 = v5 != NULL;
  if ( v5 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&json, v5);
    v8 = bdObjectStoreMetadata::deserializeFromJSON(metadata, &json, USER_OWNER_TYPE);
    bdJSONDeserializer::~bdJSONDeserializer(&json);
  }
  if ( !v8 )
    goto LABEL_10;
  if ( v6 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&json, v6);
    v8 = bdObjectStoreMetadata::deserializeTagsFromJSON(metadata, &json);
    bdJSONDeserializer::~bdJSONDeserializer(&json);
  }
  if ( !v8 )
    goto LABEL_10;
  if ( v7 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&json, v6);
    v8 = bdObjectStoreMetadata::deserializeStatisticsFromJSON(metadata, &json);
    bdJSONDeserializer::~bdJSONDeserializer(&json);
  }
  if ( !v8 )
LABEL_10:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreJSONResponseBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorejsonresponsebase.cpp", "bdObjectStoreJSONResponseBase::populateMetadataFromHeaders", 0x14Au, "ObjectStore Metadata and/or tags header not present, or unparseable.");
  return v8;
}

