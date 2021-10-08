/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdObjectStoreUploadUserObjectsVectorizedResponse::handleReplySuccess(bdObjectStoreUploadUserObjectsVectorizedResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdObjectStoreUploadUserObjectsVectorizedResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::serialize
==============
*/

bool __fastcall bdObjectStoreUploadUserObjectsVectorizedResponse::serialize(bdObjectStoreUploadUserObjectsVectorizedResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreUploadUserObjectsVectorizedResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::getValidationTokenList
==============
*/

const bdArray<bdObjectStoreValidationToken> *__fastcall bdObjectStoreUploadUserObjectsVectorizedResponse::getValidationTokenList(bdObjectStoreUploadUserObjectsVectorizedResponse *this)
{
  return ?getValidationTokenList@bdObjectStoreUploadUserObjectsVectorizedResponse@@QEBAAEBV?$bdArray@VbdObjectStoreValidationToken@@@@XZ(this);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::reset
==============
*/

void __fastcall bdObjectStoreUploadUserObjectsVectorizedResponse::reset(bdObjectStoreUploadUserObjectsVectorizedResponse *this)
{
  ?reset@bdObjectStoreUploadUserObjectsVectorizedResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreUploadUserObjectsVectorizedResponse::deserialize(bdObjectStoreUploadUserObjectsVectorizedResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreUploadUserObjectsVectorizedResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::getMetadataList
==============
*/

const bdArray<bdObjectStoreErrorWrappedMetadata> *__fastcall bdObjectStoreUploadUserObjectsVectorizedResponse::getMetadataList(bdObjectStoreUploadUserObjectsVectorizedResponse *this)
{
  return ?getMetadataList@bdObjectStoreUploadUserObjectsVectorizedResponse@@QEBAAEBV?$bdArray@VbdObjectStoreErrorWrappedMetadata@@@@XZ(this);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::bdObjectStoreUploadUserObjectsVectorizedResponse
==============
*/

void __fastcall bdObjectStoreUploadUserObjectsVectorizedResponse::bdObjectStoreUploadUserObjectsVectorizedResponse(bdObjectStoreUploadUserObjectsVectorizedResponse *this)
{
  ??0bdObjectStoreUploadUserObjectsVectorizedResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::bdObjectStoreUploadUserObjectsVectorizedResponse
==============
*/
void bdObjectStoreUploadUserObjectsVectorizedResponse::bdObjectStoreUploadUserObjectsVectorizedResponse(bdObjectStoreUploadUserObjectsVectorizedResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreUploadUserObjectsVectorizedResponse::`vbtable';
    *(_QWORD *)this->gap60 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap60[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreUploadUserObjectsVectorizedResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  bdRESTResponse::bdRESTResponse((bdRESTResponse *)(&this->bdStructBufferSerializable::__vftable + 2));
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreUploadUserObjectsVectorizedResponse_vtbl *)&bdObjectStoreUploadUserObjectsVectorizedResponse::`vftable'{for `bdObjectStoreJSONResponseBase'};
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserObjectsVectorizedResponse::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = &bdObjectStoreUploadUserObjectsVectorizedResponse::`vftable'{for `bdObjectStoreRestResponseBase'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreUploadUserObjectsVectorizedResponse::`vftable'{for `bdReferencable'};
  this->m_metadataList.m_data = NULL;
  *(_QWORD *)&this->m_metadataList.m_capacity = 0i64;
  this->m_validationTokenList.m_data = NULL;
  *(_QWORD *)&this->m_validationTokenList.m_capacity = 0i64;
  bdArray<bdObjectStoreErrorWrappedMetadata>::clear(&this->m_metadataList);
  bdArray<bdObjectStoreValidationToken>::clear(&this->m_validationTokenList);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::deserialize
==============
*/
_BOOL8 bdObjectStoreUploadUserObjectsVectorizedResponse::deserialize(bdObjectStoreUploadUserObjectsVectorizedResponse *this, bdStructBufferDeserializer *deserializer)
{
  bool UInt32; 
  unsigned int m_count; 
  unsigned int m_data; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int m_data_high; 
  __int64 v11; 
  bool v12; 
  bdObjectStoreErrorWrappedMetadata *v13; 
  unsigned int v14; 
  bool v15; 
  char *ObjectName; 
  bool v17; 
  unsigned int v18; 
  __int64 v19; 
  bdObjectStoreErrorWrappedMetadata *v20; 
  unsigned int v21; 
  __int64 v22; 
  bdObjectStoreValidationToken *v23; 
  bdLobbyErrorCode errorCode[2]; 
  bdJSONDeserializer v26; 
  void *v27; 
  bdJSONDeserializer v28; 
  bdJSONDeserializer v29; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v31; 
  bdJSONDeserializer json; 
  __int64 v33; 
  bdObjectStoreObjectID objectID; 
  bdObjectStoreMetadata metadata; 
  bdObjectStoreValidationToken __that; 
  bdJSONDeserializer v37; 
  char errorName[112]; 

  v33 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&json);
  LOBYTE(deserializer) = bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse((bdObjectStoreUploadUserObjectsVectorizedResponse *)((char *)this - 8), &json, deserializer, NULL);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::bdJSONDeserializer(&v31);
  bdJSONDeserializer::bdJSONDeserializer(&v29);
  UInt32 = (_BYTE)deserializer && bdJSONDeserializer::getArray(&json, "objects", &value) && bdJSONDeserializer::getArray(&json, "errors", &v31) && bdJSONDeserializer::getArray(&json, "validationTokens", &v29);
  m_count = value.m_count;
  m_data = (unsigned int)this->m_metadataList.m_data;
  if ( m_data < value.m_count + v31.m_count )
  {
    bdArray<bdObjectStoreErrorWrappedMetadata>::increaseCapacity((bdArray<bdObjectStoreErrorWrappedMetadata> *)&this->_bytes_28[16], value.m_count + v31.m_count - m_data);
    m_count = value.m_count;
  }
  bdHandleAssert(v29.m_count <= m_count, "validationTokensArray.getCount() <= objectsArray.getCount()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploaduserobjectsvectorizedresponse.cpp", "bdObjectStoreUploadUserObjectsVectorizedResponse::deserialize", 0x37u, "Received more validation tokens than object metadata in response");
  v7 = (unsigned int)this->m_validationTokenList.m_data;
  if ( v7 < v29.m_count )
    bdArray<bdObjectStoreValidationToken>::increaseCapacity((bdArray<bdObjectStoreValidationToken> *)&this->m_metadataList.m_capacity, v29.m_count - v7);
  if ( UInt32 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      if ( v9 >= value.m_count )
        break;
      bdObjectStoreMetadata::bdObjectStoreMetadata(&metadata);
      bdJSONDeserializer::bdJSONDeserializer(&v26);
      bdJSONDeserializer::bdJSONDeserializer(&v28);
      bdJSONDeserializer::bdJSONDeserializer(&v37);
      UInt32 = bdJSONDeserializer::getObject(&value, v9, &v26) && bdJSONDeserializer::getObject(&v26, "metadata", &v28) && bdObjectStoreMetadata::deserializeFromJSON(&metadata, &v28, USER_OWNER_TYPE);
      if ( bdJSONDeserializer::hasKey(&v26, "tags") )
        UInt32 = UInt32 && bdJSONDeserializer::getArray(&v26, "tags", &v37) && bdObjectStoreMetadata::deserializeTagsFromJSON(&metadata, &v37);
      bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata((bdObjectStoreErrorWrappedMetadata *)&__that, &metadata);
      m_data_high = HIDWORD(this->m_metadataList.m_data);
      if ( m_data_high == LODWORD(this->m_metadataList.m_data) )
      {
        bdArray<bdObjectStoreErrorWrappedMetadata>::increaseCapacity((bdArray<bdObjectStoreErrorWrappedMetadata> *)&this->_bytes_28[16], 1u);
        m_data_high = HIDWORD(this->m_metadataList.m_data);
      }
      v11 = 3504i64 * m_data_high;
      v12 = *(_QWORD *)&this->_bytes_28[16] + v11 == 0;
      v13 = (bdObjectStoreErrorWrappedMetadata *)(*(_QWORD *)&this->_bytes_28[16] + v11);
      *(_QWORD *)errorCode = v13;
      v27 = v13;
      if ( !v12 )
      {
        bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(v13, (const bdObjectStoreErrorWrappedMetadata *)&__that);
        m_data_high = HIDWORD(this->m_metadataList.m_data);
      }
      HIDWORD(this->m_metadataList.m_data) = m_data_high + 1;
      bdMemory::deallocate(*(void **)&__that.m_validationTokenResult.m_validationToken[3400]);
      *(_QWORD *)&__that.m_validationTokenResult.m_validationToken[3400] = 0i64;
      *(_QWORD *)&__that.m_validationTokenResult.m_validationToken[3408] = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL((bdObjectStoreACL *)&__that.m_validationTokenResult.m_validationToken[184]);
      bdJSONDeserializer::~bdJSONDeserializer(&v37);
      bdJSONDeserializer::~bdJSONDeserializer(&v28);
      bdJSONDeserializer::~bdJSONDeserializer(&v26);
      bdMemory::deallocate(metadata.m_tags.m_data);
      metadata.m_tags.m_data = NULL;
      *(_QWORD *)&metadata.m_tags.m_capacity = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL(&metadata.m_acl);
      ++v9;
    }
    while ( UInt32 );
    v14 = 0;
    if ( UInt32 )
    {
      do
      {
        if ( v14 >= v31.m_count )
          break;
        bdJSONDeserializer::bdJSONDeserializer(&v26);
        v15 = bdJSONDeserializer::getObject(&v31, v14, &v26) && bdJSONDeserializer::getString(&v26, "owner", (char *const)&v37, 0x1Eu);
        bdObjectStoreObjectID::bdObjectStoreObjectID(&objectID);
        v17 = 0;
        if ( v15 )
        {
          ObjectName = bdObjectStoreObjectID::getObjectName(&objectID);
          if ( bdJSONDeserializer::getString(&v26, (const char *const)&stru_143C9A1A4, ObjectName, 0x41u) && bdObjectStoreObjectID::setOwner(&objectID, (const char *)&v37, USER_OWNER_TYPE) )
            v17 = 1;
        }
        bdObjectStoreMetadata::bdObjectStoreMetadata(&metadata, &objectID);
        bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata((bdObjectStoreErrorWrappedMetadata *)&__that, &metadata);
        UInt32 = v17 && bdJSONDeserializer::getString(&v26, "error", errorName, 0x64u);
        bdObjectStoreErrorWrappedMetadata::setError((bdObjectStoreErrorWrappedMetadata *)&__that, errorName);
        if ( UInt32 && bdJSONDeserializer::hasKey(&v26, "code") && *bdObjectStoreErrorWrappedMetadata::getError((bdObjectStoreErrorWrappedMetadata *)&__that) == BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR )
        {
          errorCode[0] = BD_NO_ERROR;
          UInt32 = bdJSONDeserializer::getUInt32(&v26, "code", (unsigned int *)errorCode);
          bdObjectStoreErrorWrappedMetadata::setScriptValidationErrorCode((bdObjectStoreErrorWrappedMetadata *)&__that, errorCode[0]);
        }
        v18 = HIDWORD(this->m_metadataList.m_data);
        if ( v18 == LODWORD(this->m_metadataList.m_data) )
        {
          bdArray<bdObjectStoreErrorWrappedMetadata>::increaseCapacity((bdArray<bdObjectStoreErrorWrappedMetadata> *)&this->_bytes_28[16], 1u);
          v18 = HIDWORD(this->m_metadataList.m_data);
        }
        v19 = 3504i64 * v18;
        v12 = *(_QWORD *)&this->_bytes_28[16] + v19 == 0;
        v20 = (bdObjectStoreErrorWrappedMetadata *)(*(_QWORD *)&this->_bytes_28[16] + v19);
        v27 = v20;
        *(_QWORD *)errorCode = v20;
        if ( !v12 )
        {
          bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(v20, (const bdObjectStoreErrorWrappedMetadata *)&__that);
          v18 = HIDWORD(this->m_metadataList.m_data);
        }
        HIDWORD(this->m_metadataList.m_data) = v18 + 1;
        bdMemory::deallocate(*(void **)&__that.m_validationTokenResult.m_validationToken[3400]);
        *(_QWORD *)&__that.m_validationTokenResult.m_validationToken[3400] = 0i64;
        *(_QWORD *)&__that.m_validationTokenResult.m_validationToken[3408] = 0i64;
        bdObjectStoreACL::~bdObjectStoreACL((bdObjectStoreACL *)&__that.m_validationTokenResult.m_validationToken[184]);
        bdMemory::deallocate(metadata.m_tags.m_data);
        metadata.m_tags.m_data = NULL;
        *(_QWORD *)&metadata.m_tags.m_capacity = 0i64;
        bdObjectStoreACL::~bdObjectStoreACL(&metadata.m_acl);
        bdJSONDeserializer::~bdJSONDeserializer(&v26);
        ++v14;
      }
      while ( UInt32 );
      for ( ; UInt32; ++v8 )
      {
        if ( v8 >= v29.m_count )
          break;
        bdJSONDeserializer::bdJSONDeserializer(&v28);
        UInt32 = bdJSONDeserializer::getObject(&v29, v8, &v28);
        if ( UInt32 )
        {
          bdObjectStoreValidationToken::bdObjectStoreValidationToken(&__that);
          if ( bdObjectStoreValidationToken::deserializeFromVectorizedEntity(&__that, &v28) )
          {
            UInt32 = 1;
            v21 = HIDWORD(this->m_validationTokenList.m_data);
            if ( v21 == LODWORD(this->m_validationTokenList.m_data) )
            {
              bdArray<bdObjectStoreValidationToken>::increaseCapacity((bdArray<bdObjectStoreValidationToken> *)&this->m_metadataList.m_capacity, 1u);
              v21 = HIDWORD(this->m_validationTokenList.m_data);
            }
            v22 = 10408i64 * v21;
            v12 = *(_QWORD *)&this->m_metadataList.m_capacity + v22 == 0;
            v23 = (bdObjectStoreValidationToken *)(*(_QWORD *)&this->m_metadataList.m_capacity + v22);
            v27 = v23;
            *(_QWORD *)errorCode = v23;
            if ( !v12 )
            {
              bdObjectStoreValidationToken::bdObjectStoreValidationToken(v23, &__that);
              v21 = HIDWORD(this->m_validationTokenList.m_data);
            }
            HIDWORD(this->m_validationTokenList.m_data) = v21 + 1;
          }
          else
          {
            UInt32 = 0;
          }
          bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&__that.m_validationTokenResult.gap2824[4]);
          bdReferencable::~bdReferencable((bdReferencable *)&__that.m_validationTokenResult.gap2824[4]);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v28);
      }
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v29);
  bdJSONDeserializer::~bdJSONDeserializer(&v31);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&json);
  return UInt32;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::getMetadataList
==============
*/
bdArray<bdObjectStoreErrorWrappedMetadata> *bdObjectStoreUploadUserObjectsVectorizedResponse::getMetadataList(bdObjectStoreUploadUserObjectsVectorizedResponse *this)
{
  return &this->m_metadataList;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::getValidationTokenList
==============
*/
bdArray<bdObjectStoreValidationToken> *bdObjectStoreUploadUserObjectsVectorizedResponse::getValidationTokenList(bdObjectStoreUploadUserObjectsVectorizedResponse *this)
{
  return &this->m_validationTokenList;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::handleReplySuccess
==============
*/
__int64 bdObjectStoreUploadUserObjectsVectorizedResponse::handleReplySuccess(bdObjectStoreUploadUserObjectsVectorizedResponse *this, const bdRESTResponseMessage *reply)
{
  bool UInt32; 
  unsigned int m_count; 
  unsigned int v6; 
  unsigned int m_data; 
  unsigned int v8; 
  bool v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  bdObjectStoreErrorWrappedMetadata *v13; 
  unsigned int i; 
  bool v15; 
  char *ObjectName; 
  bool v17; 
  unsigned int v18; 
  __int64 v19; 
  bdObjectStoreErrorWrappedMetadata *v20; 
  unsigned int v21; 
  unsigned int m_data_high; 
  __int64 v23; 
  bdObjectStoreValidationToken *v24; 
  bdLobbyErrorCode errorCode[2]; 
  bdJSONDeserializer v27; 
  void *v28; 
  bdJSONDeserializer json; 
  bdJSONDeserializer v30; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v32; 
  bdJSONDeserializer deserializer; 
  __int64 v34; 
  bdObjectStoreObjectID objectID; 
  bdObjectStoreMetadata metadata; 
  bdObjectStoreValidationToken __that; 
  bdJSONDeserializer v38; 
  char errorName[112]; 

  v34 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  LOBYTE(reply) = bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::bdJSONDeserializer(&v32);
  bdJSONDeserializer::bdJSONDeserializer(&v30);
  UInt32 = (_BYTE)reply && bdJSONDeserializer::getArray(&deserializer, "objects", &value) && bdJSONDeserializer::getArray(&deserializer, "errors", &v32) && bdJSONDeserializer::getArray(&deserializer, "validationTokens", &v30);
  m_count = value.m_count;
  v6 = *(_DWORD *)&this->_bytes_28[8];
  if ( v6 < value.m_count + v32.m_count )
  {
    bdArray<bdObjectStoreErrorWrappedMetadata>::increaseCapacity((bdArray<bdObjectStoreErrorWrappedMetadata> *)this->_bytes_28, value.m_count + v32.m_count - v6);
    m_count = value.m_count;
  }
  bdHandleAssert(v30.m_count <= m_count, "validationTokensArray.getCount() <= objectsArray.getCount()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploaduserobjectsvectorizedresponse.cpp", "bdObjectStoreUploadUserObjectsVectorizedResponse::handleReplySuccess", 0x9Eu, "Received more validation tokens than object metadata in response");
  m_data = (unsigned int)this->m_metadataList.m_data;
  if ( m_data < v30.m_count )
    bdArray<bdObjectStoreValidationToken>::increaseCapacity((bdArray<bdObjectStoreValidationToken> *)&this->_bytes_28[16], v30.m_count - m_data);
  v8 = 0;
  v9 = !UInt32;
  if ( UInt32 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= value.m_count )
        break;
      bdObjectStoreMetadata::bdObjectStoreMetadata(&metadata);
      bdJSONDeserializer::bdJSONDeserializer(&v27);
      bdJSONDeserializer::bdJSONDeserializer(&json);
      bdJSONDeserializer::bdJSONDeserializer(&v38);
      UInt32 = bdJSONDeserializer::getObject(&value, v10, &v27) && bdJSONDeserializer::getObject(&v27, "metadata", &json) && bdObjectStoreMetadata::deserializeFromJSON(&metadata, &json, USER_OWNER_TYPE);
      if ( bdJSONDeserializer::hasKey(&v27, "tags") )
        UInt32 = UInt32 && bdJSONDeserializer::getArray(&v27, "tags", &v38) && bdObjectStoreMetadata::deserializeTagsFromJSON(&metadata, &v38);
      bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata((bdObjectStoreErrorWrappedMetadata *)&__that, &metadata);
      v11 = *(_DWORD *)&this->_bytes_28[12];
      if ( v11 == *(_DWORD *)&this->_bytes_28[8] )
      {
        bdArray<bdObjectStoreErrorWrappedMetadata>::increaseCapacity((bdArray<bdObjectStoreErrorWrappedMetadata> *)this->_bytes_28, 1u);
        v11 = *(_DWORD *)&this->_bytes_28[12];
      }
      v12 = 3504i64 * v11;
      v9 = *(_QWORD *)this->_bytes_28 + v12 == 0;
      v13 = (bdObjectStoreErrorWrappedMetadata *)(*(_QWORD *)this->_bytes_28 + v12);
      *(_QWORD *)errorCode = v13;
      v28 = v13;
      if ( !v9 )
      {
        bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(v13, (const bdObjectStoreErrorWrappedMetadata *)&__that);
        v11 = *(_DWORD *)&this->_bytes_28[12];
      }
      *(_DWORD *)&this->_bytes_28[12] = v11 + 1;
      bdMemory::deallocate(*(void **)&__that.m_validationTokenResult.m_validationToken[3400]);
      *(_QWORD *)&__that.m_validationTokenResult.m_validationToken[3400] = 0i64;
      *(_QWORD *)&__that.m_validationTokenResult.m_validationToken[3408] = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL((bdObjectStoreACL *)&__that.m_validationTokenResult.m_validationToken[184]);
      bdJSONDeserializer::~bdJSONDeserializer(&v38);
      bdJSONDeserializer::~bdJSONDeserializer(&json);
      bdJSONDeserializer::~bdJSONDeserializer(&v27);
      bdMemory::deallocate(metadata.m_tags.m_data);
      metadata.m_tags.m_data = NULL;
      *(_QWORD *)&metadata.m_tags.m_capacity = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL(&metadata.m_acl);
      ++v10;
    }
    while ( UInt32 );
    for ( i = 0; UInt32; ++i )
    {
      if ( i >= v32.m_count )
        break;
      bdJSONDeserializer::bdJSONDeserializer(&v27);
      v15 = bdJSONDeserializer::getObject(&v32, i, &v27) && bdJSONDeserializer::getString(&v27, "owner", (char *const)&v38, 0x1Eu);
      bdObjectStoreObjectID::bdObjectStoreObjectID(&objectID);
      v17 = 0;
      if ( v15 )
      {
        ObjectName = bdObjectStoreObjectID::getObjectName(&objectID);
        if ( bdJSONDeserializer::getString(&v27, (const char *const)&stru_143C9A1A4, ObjectName, 0x41u) && bdObjectStoreObjectID::setOwner(&objectID, (const char *)&v38, USER_OWNER_TYPE) )
          v17 = 1;
      }
      bdObjectStoreMetadata::bdObjectStoreMetadata(&metadata, &objectID);
      bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata((bdObjectStoreErrorWrappedMetadata *)&__that, &metadata);
      UInt32 = v17 && bdJSONDeserializer::getString(&v27, "error", errorName, 0x64u);
      bdObjectStoreErrorWrappedMetadata::setError((bdObjectStoreErrorWrappedMetadata *)&__that, errorName);
      if ( UInt32 && bdJSONDeserializer::hasKey(&v27, "code") && *bdObjectStoreErrorWrappedMetadata::getError((bdObjectStoreErrorWrappedMetadata *)&__that) == BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR )
      {
        errorCode[0] = BD_NO_ERROR;
        UInt32 = bdJSONDeserializer::getUInt32(&v27, "code", (unsigned int *)errorCode);
        bdObjectStoreErrorWrappedMetadata::setScriptValidationErrorCode((bdObjectStoreErrorWrappedMetadata *)&__that, errorCode[0]);
      }
      v18 = *(_DWORD *)&this->_bytes_28[12];
      if ( v18 == *(_DWORD *)&this->_bytes_28[8] )
      {
        bdArray<bdObjectStoreErrorWrappedMetadata>::increaseCapacity((bdArray<bdObjectStoreErrorWrappedMetadata> *)this->_bytes_28, 1u);
        v18 = *(_DWORD *)&this->_bytes_28[12];
      }
      v19 = 3504i64 * v18;
      v9 = *(_QWORD *)this->_bytes_28 + v19 == 0;
      v20 = (bdObjectStoreErrorWrappedMetadata *)(*(_QWORD *)this->_bytes_28 + v19);
      v28 = v20;
      *(_QWORD *)errorCode = v20;
      if ( !v9 )
      {
        bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(v20, (const bdObjectStoreErrorWrappedMetadata *)&__that);
        v18 = *(_DWORD *)&this->_bytes_28[12];
      }
      *(_DWORD *)&this->_bytes_28[12] = v18 + 1;
      bdMemory::deallocate(*(void **)&__that.m_validationTokenResult.m_validationToken[3400]);
      *(_QWORD *)&__that.m_validationTokenResult.m_validationToken[3400] = 0i64;
      *(_QWORD *)&__that.m_validationTokenResult.m_validationToken[3408] = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL((bdObjectStoreACL *)&__that.m_validationTokenResult.m_validationToken[184]);
      bdMemory::deallocate(metadata.m_tags.m_data);
      metadata.m_tags.m_data = NULL;
      *(_QWORD *)&metadata.m_tags.m_capacity = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL(&metadata.m_acl);
      bdJSONDeserializer::~bdJSONDeserializer(&v27);
    }
    v21 = 0;
    v9 = !UInt32;
    if ( UInt32 )
    {
      do
      {
        if ( v21 >= v30.m_count )
          break;
        bdJSONDeserializer::bdJSONDeserializer(&json);
        UInt32 = bdJSONDeserializer::getObject(&v30, v21, &json);
        if ( UInt32 )
        {
          bdObjectStoreValidationToken::bdObjectStoreValidationToken(&__that);
          if ( bdObjectStoreValidationToken::deserializeFromVectorizedEntity(&__that, &json) )
          {
            UInt32 = 1;
            m_data_high = HIDWORD(this->m_metadataList.m_data);
            if ( m_data_high == LODWORD(this->m_metadataList.m_data) )
            {
              bdArray<bdObjectStoreValidationToken>::increaseCapacity((bdArray<bdObjectStoreValidationToken> *)&this->_bytes_28[16], 1u);
              m_data_high = HIDWORD(this->m_metadataList.m_data);
            }
            v23 = 10408i64 * m_data_high;
            v9 = *(_QWORD *)&this->_bytes_28[16] + v23 == 0;
            v24 = (bdObjectStoreValidationToken *)(*(_QWORD *)&this->_bytes_28[16] + v23);
            v28 = v24;
            *(_QWORD *)errorCode = v24;
            if ( !v9 )
            {
              bdObjectStoreValidationToken::bdObjectStoreValidationToken(v24, &__that);
              m_data_high = HIDWORD(this->m_metadataList.m_data);
            }
            HIDWORD(this->m_metadataList.m_data) = m_data_high + 1;
          }
          else
          {
            UInt32 = 0;
          }
          bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&__that.m_validationTokenResult.gap2824[4]);
          bdReferencable::~bdReferencable((bdReferencable *)&__that.m_validationTokenResult.gap2824[4]);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&json);
        ++v21;
      }
      while ( UInt32 );
      v9 = !UInt32;
    }
  }
  LOBYTE(v8) = !v9;
  bdJSONDeserializer::~bdJSONDeserializer(&v30);
  bdJSONDeserializer::~bdJSONDeserializer(&v32);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v8;
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::reset
==============
*/
void bdObjectStoreUploadUserObjectsVectorizedResponse::reset(bdObjectStoreUploadUserObjectsVectorizedResponse *this)
{
  bdArray<bdObjectStoreErrorWrappedMetadata>::clear(&this->m_metadataList);
  bdArray<bdObjectStoreValidationToken>::clear(&this->m_validationTokenList);
}

/*
==============
bdObjectStoreUploadUserObjectsVectorizedResponse::serialize
==============
*/
bool bdObjectStoreUploadUserObjectsVectorizedResponse::serialize(bdObjectStoreUploadUserObjectsVectorizedResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploaduserobjectsvectorizedresponse.cpp", "bdObjectStoreUploadUserObjectsVectorizedResponse::serialize", 0xF3u, "Cannot call deserialize on bdObjectStoreUploadUserObjectRequest");
  return 0;
}

