/*
==============
bdObjectStoreErrorWrappedMetadata::setScriptValidationErrorCode
==============
*/

void __fastcall bdObjectStoreErrorWrappedMetadata::setScriptValidationErrorCode(bdObjectStoreErrorWrappedMetadata *this, bdLobbyErrorCode errorCode)
{
  ?setScriptValidationErrorCode@bdObjectStoreErrorWrappedMetadata@@QEAAXW4bdLobbyErrorCode@@@Z(this, errorCode);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata
==============
*/

void __fastcall bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(bdObjectStoreErrorWrappedMetadata *this, const bdObjectStoreErrorWrappedMetadata *__that)
{
  ??0bdObjectStoreErrorWrappedMetadata@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata
==============
*/

void __fastcall bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(bdObjectStoreErrorWrappedMetadata *this, bdObjectStoreMetadata *metadata)
{
  ??0bdObjectStoreErrorWrappedMetadata@@QEAA@AEAVbdObjectStoreMetadata@@@Z(this, metadata);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::deserializeFromJSON
==============
*/

bool __fastcall bdObjectStoreErrorWrappedMetadata::deserializeFromJSON(bdObjectStoreErrorWrappedMetadata *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  return ?deserializeFromJSON@bdObjectStoreErrorWrappedMetadata@@QEAA_NPEAVbdJSONDeserializer@@W4bdObjectStoreObjectIDOwnerType@bdObjectStoreObjectID@@@Z(this, json, ownerType);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::markAsError
==============
*/

void __fastcall bdObjectStoreErrorWrappedMetadata::markAsError(bdObjectStoreErrorWrappedMetadata *this)
{
  ?markAsError@bdObjectStoreErrorWrappedMetadata@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::hasError
==============
*/

bool __fastcall bdObjectStoreErrorWrappedMetadata::hasError(bdObjectStoreErrorWrappedMetadata *this)
{
  return ?hasError@bdObjectStoreErrorWrappedMetadata@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::setError
==============
*/

void __fastcall bdObjectStoreErrorWrappedMetadata::setError(bdObjectStoreErrorWrappedMetadata *this, const char *errorName)
{
  ?setError@bdObjectStoreErrorWrappedMetadata@@QEAAXPEBD@Z(this, errorName);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::deserializeErrorFromJSON
==============
*/

bool __fastcall bdObjectStoreErrorWrappedMetadata::deserializeErrorFromJSON(bdObjectStoreErrorWrappedMetadata *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  return ?deserializeErrorFromJSON@bdObjectStoreErrorWrappedMetadata@@QEAA_NPEAVbdJSONDeserializer@@W4bdObjectStoreObjectIDOwnerType@bdObjectStoreObjectID@@@Z(this, json, ownerType);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::getError
==============
*/

const bdObjectStoreErrorWrappedMetadata::bdObjectStoreVectorizedError *__fastcall bdObjectStoreErrorWrappedMetadata::getError(bdObjectStoreErrorWrappedMetadata *this)
{
  return ?getError@bdObjectStoreErrorWrappedMetadata@@QEBAAEBW4bdObjectStoreVectorizedError@1@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::getMetadata
==============
*/

const bdObjectStoreMetadata *__fastcall bdObjectStoreErrorWrappedMetadata::getMetadata(bdObjectStoreErrorWrappedMetadata *this)
{
  return ?getMetadata@bdObjectStoreErrorWrappedMetadata@@QEBAAEBVbdObjectStoreMetadata@@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::getScriptValidationErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdObjectStoreErrorWrappedMetadata::getScriptValidationErrorCode(bdObjectStoreErrorWrappedMetadata *this)
{
  return ?getScriptValidationErrorCode@bdObjectStoreErrorWrappedMetadata@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::reset
==============
*/

void __fastcall bdObjectStoreErrorWrappedMetadata::reset(bdObjectStoreErrorWrappedMetadata *this)
{
  ?reset@bdObjectStoreErrorWrappedMetadata@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata
==============
*/

void __fastcall bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(bdObjectStoreErrorWrappedMetadata *this)
{
  ??0bdObjectStoreErrorWrappedMetadata@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata
==============
*/
void bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(bdObjectStoreErrorWrappedMetadata *this, const bdObjectStoreErrorWrappedMetadata *__that)
{
  char *m_contentURL; 
  char *v5; 
  __int64 v6; 
  bdObjectStoreTag *v7; 
  __int64 m_capacity; 
  unsigned int m_size; 
  __m256i *v10; 
  char *v11; 
  __int64 v12; 

  *(_OWORD *)this->m_metadata.m_context = *(_OWORD *)__that->m_metadata.m_context;
  this->m_metadata.m_objectID = __that->m_metadata.m_objectID;
  *(__m256i *)this->m_metadata.m_contentChecksum = *(__m256i *)__that->m_metadata.m_contentChecksum;
  this->m_metadata.m_contentChecksum[32] = __that->m_metadata.m_contentChecksum[32];
  *(__m256i *)this->m_metadata.m_objectVersion = *(__m256i *)__that->m_metadata.m_objectVersion;
  this->m_metadata.m_objectVersion[32] = __that->m_metadata.m_objectVersion[32];
  this->m_metadata.m_expiresOn = __that->m_metadata.m_expiresOn;
  this->m_metadata.m_contentLength = __that->m_metadata.m_contentLength;
  this->m_metadata.m_acl.m_aclType = __that->m_metadata.m_acl.m_aclType;
  this->m_metadata.m_created = __that->m_metadata.m_created;
  this->m_metadata.m_modified = __that->m_metadata.m_modified;
  m_contentURL = this->m_metadata.m_contentURL;
  v5 = __that->m_metadata.m_contentURL;
  v6 = 8i64;
  do
  {
    *(_OWORD *)m_contentURL = *(_OWORD *)v5;
    *((_OWORD *)m_contentURL + 1) = *((_OWORD *)v5 + 1);
    *((_OWORD *)m_contentURL + 2) = *((_OWORD *)v5 + 2);
    *((_OWORD *)m_contentURL + 3) = *((_OWORD *)v5 + 3);
    *((_OWORD *)m_contentURL + 4) = *((_OWORD *)v5 + 4);
    *((_OWORD *)m_contentURL + 5) = *((_OWORD *)v5 + 5);
    *((_OWORD *)m_contentURL + 6) = *((_OWORD *)v5 + 6);
    m_contentURL += 128;
    *((_OWORD *)m_contentURL - 1) = *((_OWORD *)v5 + 7);
    v5 += 128;
    --v6;
  }
  while ( v6 );
  *(__m256i *)this->m_metadata.m_category = *(__m256i *)__that->m_metadata.m_category;
  *(__m256i *)&this->m_metadata.m_category[32] = *(__m256i *)&__that->m_metadata.m_category[32];
  this->m_metadata.m_category[64] = __that->m_metadata.m_category[64];
  memcpy_0(this->m_metadata.m_extraData, __that->m_metadata.m_extraData, sizeof(this->m_metadata.m_extraData));
  this->m_metadata.m_extraDataSize = __that->m_metadata.m_extraDataSize;
  this->m_metadata.m_summaryContentLength = __that->m_metadata.m_summaryContentLength;
  *(__m256i *)this->m_metadata.m_summaryChecksum = *(__m256i *)__that->m_metadata.m_summaryChecksum;
  this->m_metadata.m_summaryChecksum[32] = __that->m_metadata.m_summaryChecksum[32];
  this->m_metadata.m_hasSummary = __that->m_metadata.m_hasSummary;
  this->m_metadata.m_tags.m_capacity = __that->m_metadata.m_tags.m_capacity;
  this->m_metadata.m_tags.m_size = __that->m_metadata.m_tags.m_size;
  v7 = NULL;
  m_capacity = __that->m_metadata.m_tags.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v7 = (bdObjectStoreTag *)bdMemory::allocate(66 * m_capacity);
    m_size = __that->m_metadata.m_tags.m_size;
    if ( m_size )
    {
      v10 = (__m256i *)v7;
      v11 = (char *)((char *)__that->m_metadata.m_tags.m_data - (char *)v7);
      v12 = m_size;
      do
      {
        if ( v10 )
        {
          *v10 = *(__m256i *)((char *)v10 + (_QWORD)v11);
          v10[1] = *(__m256i *)((char *)v10 + (_QWORD)v11 + 32);
          v10[2].m256i_i16[0] = *(__int16 *)((char *)v10[2].m256i_i16 + (_QWORD)v11);
        }
        v10 = (__m256i *)((char *)v10 + 66);
        --v12;
      }
      while ( v12 );
    }
  }
  this->m_metadata.m_tags.m_data = v7;
  this->m_metadata.m_numTags = __that->m_metadata.m_numTags;
  this->m_metadata.m_statistics = __that->m_metadata.m_statistics;
  this->m_error = __that->m_error;
  this->m_errorCode = __that->m_errorCode;
  this->m_hasError = __that->m_hasError;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata
==============
*/
void bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(bdObjectStoreErrorWrappedMetadata *this, bdObjectStoreMetadata *metadata)
{
  char *m_contentURL; 
  char *v5; 
  __int64 v6; 
  bdObjectStoreTag *v7; 
  __int64 m_capacity; 
  unsigned int m_size; 
  __m256i *v10; 
  char *v11; 
  __int64 v12; 

  *(_OWORD *)this->m_metadata.m_context = *(_OWORD *)metadata->m_context;
  this->m_metadata.m_objectID = metadata->m_objectID;
  *(__m256i *)this->m_metadata.m_contentChecksum = *(__m256i *)metadata->m_contentChecksum;
  this->m_metadata.m_contentChecksum[32] = metadata->m_contentChecksum[32];
  *(__m256i *)this->m_metadata.m_objectVersion = *(__m256i *)metadata->m_objectVersion;
  this->m_metadata.m_objectVersion[32] = metadata->m_objectVersion[32];
  this->m_metadata.m_expiresOn = metadata->m_expiresOn;
  this->m_metadata.m_contentLength = metadata->m_contentLength;
  this->m_metadata.m_acl.m_aclType = metadata->m_acl.m_aclType;
  this->m_metadata.m_created = metadata->m_created;
  this->m_metadata.m_modified = metadata->m_modified;
  m_contentURL = this->m_metadata.m_contentURL;
  v5 = metadata->m_contentURL;
  v6 = 8i64;
  do
  {
    *(_OWORD *)m_contentURL = *(_OWORD *)v5;
    *((_OWORD *)m_contentURL + 1) = *((_OWORD *)v5 + 1);
    *((_OWORD *)m_contentURL + 2) = *((_OWORD *)v5 + 2);
    *((_OWORD *)m_contentURL + 3) = *((_OWORD *)v5 + 3);
    *((_OWORD *)m_contentURL + 4) = *((_OWORD *)v5 + 4);
    *((_OWORD *)m_contentURL + 5) = *((_OWORD *)v5 + 5);
    *((_OWORD *)m_contentURL + 6) = *((_OWORD *)v5 + 6);
    m_contentURL += 128;
    *((_OWORD *)m_contentURL - 1) = *((_OWORD *)v5 + 7);
    v5 += 128;
    --v6;
  }
  while ( v6 );
  *(__m256i *)this->m_metadata.m_category = *(__m256i *)metadata->m_category;
  *(__m256i *)&this->m_metadata.m_category[32] = *(__m256i *)&metadata->m_category[32];
  this->m_metadata.m_category[64] = metadata->m_category[64];
  memcpy_0(this->m_metadata.m_extraData, metadata->m_extraData, sizeof(this->m_metadata.m_extraData));
  this->m_metadata.m_extraDataSize = metadata->m_extraDataSize;
  this->m_metadata.m_summaryContentLength = metadata->m_summaryContentLength;
  *(__m256i *)this->m_metadata.m_summaryChecksum = *(__m256i *)metadata->m_summaryChecksum;
  this->m_metadata.m_summaryChecksum[32] = metadata->m_summaryChecksum[32];
  this->m_metadata.m_hasSummary = metadata->m_hasSummary;
  this->m_metadata.m_tags.m_capacity = metadata->m_tags.m_capacity;
  this->m_metadata.m_tags.m_size = metadata->m_tags.m_size;
  v7 = NULL;
  m_capacity = metadata->m_tags.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v7 = (bdObjectStoreTag *)bdMemory::allocate(66 * m_capacity);
    m_size = metadata->m_tags.m_size;
    if ( m_size )
    {
      v10 = (__m256i *)v7;
      v11 = (char *)((char *)metadata->m_tags.m_data - (char *)v7);
      v12 = m_size;
      do
      {
        if ( v10 )
        {
          *v10 = *(__m256i *)((char *)v10 + (_QWORD)v11);
          v10[1] = *(__m256i *)((char *)v10 + (_QWORD)v11 + 32);
          v10[2].m256i_i16[0] = *(__int16 *)((char *)v10[2].m256i_i16 + (_QWORD)v11);
        }
        v10 = (__m256i *)((char *)v10 + 66);
        --v12;
      }
      while ( v12 );
    }
  }
  this->m_metadata.m_tags.m_data = v7;
  this->m_metadata.m_numTags = metadata->m_numTags;
  this->m_metadata.m_statistics = metadata->m_statistics;
  this->m_hasError = 0;
  this->m_errorCode = BD_NO_ERROR;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata
==============
*/
void bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(bdObjectStoreErrorWrappedMetadata *this)
{
  bdObjectStoreMetadata::bdObjectStoreMetadata(&this->m_metadata);
  this->m_hasError = 0;
  this->m_errorCode = BD_NO_ERROR;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::deserializeErrorFromJSON
==============
*/
bool bdObjectStoreErrorWrappedMetadata::deserializeErrorFromJSON(bdObjectStoreErrorWrappedMetadata *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  const char *v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  bdObjectStoreErrorWrappedMetadata::bdObjectStoreVectorizedError v11; 
  bool v12; 
  bdObjectStoreObjectID objectID; 
  char v15[32]; 
  char value[112]; 
  char objectName[80]; 

  if ( !bdJSONDeserializer::getString(json, "error", value, 0x64u) )
    return 0;
  if ( !strncmp(wrongSubjectErrorName, value, 0x64ui64) )
    goto LABEL_11;
  v6 = aclErrorName;
  bdHandleAssert(aclErrorName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v7 = -1i64;
  do
    ++v7;
  while ( v6[v7] );
  if ( !strncmp(aclErrorName, value, (int)v7) )
  {
LABEL_11:
    this->m_error = BD_OBJECTSTORE_INVALID_ACCESS_ERROR;
  }
  else
  {
    v8 = bdStrlen(scriptValidationErrorPrefix);
    if ( !strncmp(scriptValidationErrorPrefix, value, v8) )
    {
      this->m_error = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR;
    }
    else
    {
      v9 = bdStrlen(notFoundError);
      v10 = strncmp(notFoundError, value, v9);
      v11 = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_REMAINING_SIZE_WINDOW_SPACE_ERROR;
      if ( !v10 )
        v11 = BD_OBJECTSTORE_OBJECT_NOT_FOUND_ERROR;
      this->m_error = v11;
    }
  }
  this->m_hasError = 1;
  v12 = bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, objectName, 0x41u) && bdJSONDeserializer::getString(json, "owner", v15, 0x1Eu);
  bdObjectStoreObjectID::bdObjectStoreObjectID(&objectID, v15, objectName, ownerType);
  return v12 && bdObjectStoreMetadata::setObjectID(&this->m_metadata, &objectID);
}

/*
==============
bdObjectStoreErrorWrappedMetadata::deserializeFromJSON
==============
*/
_BOOL8 bdObjectStoreErrorWrappedMetadata::deserializeFromJSON(bdObjectStoreErrorWrappedMetadata *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  bool v6; 
  bdJSONDeserializer value; 

  bdJSONDeserializer::bdJSONDeserializer(&value);
  v6 = bdJSONDeserializer::getObject(json, "metadata", &value) && bdObjectStoreMetadata::deserializeFromJSON(&this->m_metadata, &value, ownerType);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return v6;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::getError
==============
*/
bdObjectStoreErrorWrappedMetadata::bdObjectStoreVectorizedError *bdObjectStoreErrorWrappedMetadata::getError(bdObjectStoreErrorWrappedMetadata *this)
{
  bdHandleAssert(this->m_hasError, "m_hasError", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreerrorwrappedmetadata.cpp", "bdObjectStoreErrorWrappedMetadata::getError", 0x40u, "No error exists");
  return &this->m_error;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::getMetadata
==============
*/
bdObjectStoreErrorWrappedMetadata *bdObjectStoreErrorWrappedMetadata::getMetadata(bdObjectStoreErrorWrappedMetadata *this)
{
  return this;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::getScriptValidationErrorCode
==============
*/
__int64 bdObjectStoreErrorWrappedMetadata::getScriptValidationErrorCode(bdObjectStoreErrorWrappedMetadata *this)
{
  bdHandleAssert(this->m_error == BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR, "m_error == BD_OBJECTSTORE_SCRIPT_VALIDATION_ERROR", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreerrorwrappedmetadata.cpp", "bdObjectStoreErrorWrappedMetadata::getScriptValidationErrorCode", 0x4Eu, "Script validation error code can only be retrieved on a script validation error");
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::hasError
==============
*/
_BOOL8 bdObjectStoreErrorWrappedMetadata::hasError(bdObjectStoreErrorWrappedMetadata *this)
{
  return this->m_hasError;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::markAsError
==============
*/
void bdObjectStoreErrorWrappedMetadata::markAsError(bdObjectStoreErrorWrappedMetadata *this)
{
  this->m_hasError = 1;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::reset
==============
*/
void bdObjectStoreErrorWrappedMetadata::reset(bdObjectStoreErrorWrappedMetadata *this)
{
  this->m_hasError = 0;
  this->m_errorCode = BD_NO_ERROR;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::setError
==============
*/
void bdObjectStoreErrorWrappedMetadata::setError(bdObjectStoreErrorWrappedMetadata *this, const char *errorName)
{
  const char *v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  bdObjectStoreErrorWrappedMetadata::bdObjectStoreVectorizedError v9; 

  if ( !strncmp(wrongSubjectErrorName, errorName, 0x64ui64) )
    goto LABEL_10;
  v4 = aclErrorName;
  bdHandleAssert(aclErrorName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v5 = -1i64;
  do
    ++v5;
  while ( v4[v5] );
  if ( !strncmp(aclErrorName, errorName, (int)v5) )
  {
LABEL_10:
    this->m_error = BD_OBJECTSTORE_INVALID_ACCESS_ERROR;
    this->m_hasError = 1;
  }
  else
  {
    v6 = bdStrlen(scriptValidationErrorPrefix);
    if ( !strncmp(scriptValidationErrorPrefix, errorName, v6) )
    {
      this->m_error = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR;
      this->m_hasError = 1;
    }
    else
    {
      v7 = bdStrlen(notFoundError);
      v8 = strncmp(notFoundError, errorName, v7);
      v9 = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_REMAINING_SIZE_WINDOW_SPACE_ERROR;
      this->m_hasError = 1;
      if ( !v8 )
        v9 = BD_OBJECTSTORE_OBJECT_NOT_FOUND_ERROR;
      this->m_error = v9;
    }
  }
}

/*
==============
bdObjectStoreErrorWrappedMetadata::setScriptValidationErrorCode
==============
*/
void bdObjectStoreErrorWrappedMetadata::setScriptValidationErrorCode(bdObjectStoreErrorWrappedMetadata *this, bdLobbyErrorCode errorCode)
{
  bdHandleAssert(this->m_error == BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR, "m_error == BD_OBJECTSTORE_SCRIPT_VALIDATION_ERROR", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreerrorwrappedmetadata.cpp", "bdObjectStoreErrorWrappedMetadata::setScriptValidationErrorCode", 0x47u, "Script validation error code can only be set on a script validation error");
  this->m_errorCode = errorCode;
}

