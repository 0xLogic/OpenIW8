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
  __int64 v13; 
  bdObjectStoreTag *v25; 
  __int64 m_capacity; 
  unsigned int m_size; 
  __int64 v30; 

  _RBX = __that;
  _RDI = this;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx], xmm0
    vmovups ymm0, ymmword ptr [rdx+10h]
    vmovups ymmword ptr [rcx+10h], ymm0
    vmovups ymm1, ymmword ptr [rdx+30h]
    vmovups ymmword ptr [rcx+30h], ymm1
    vmovups ymm0, ymmword ptr [rdx+50h]
    vmovups ymmword ptr [rcx+50h], ymm0
    vmovups xmm1, xmmword ptr [rdx+70h]
    vmovups xmmword ptr [rcx+70h], xmm1
    vmovups ymm0, ymmword ptr [rdx+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
  }
  this->m_metadata.m_contentChecksum[32] = __that->m_metadata.m_contentChecksum[32];
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+0A1h]
    vmovups ymmword ptr [rcx+0A1h], ymm0
  }
  this->m_metadata.m_objectVersion[32] = __that->m_metadata.m_objectVersion[32];
  this->m_metadata.m_expiresOn = __that->m_metadata.m_expiresOn;
  this->m_metadata.m_contentLength = __that->m_metadata.m_contentLength;
  this->m_metadata.m_acl.m_aclType = __that->m_metadata.m_acl.m_aclType;
  this->m_metadata.m_created = __that->m_metadata.m_created;
  this->m_metadata.m_modified = __that->m_metadata.m_modified;
  _RCX = this->m_metadata.m_contentURL;
  _RAX = __that->m_metadata.m_contentURL;
  v13 = 8i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX += 128;
    --v13;
  }
  while ( v13 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+4F0h]
    vmovups ymmword ptr [rdi+4F0h], ymm0
    vmovups ymm1, ymmword ptr [rbx+510h]
    vmovups ymmword ptr [rdi+510h], ymm1
  }
  _RDI->m_metadata.m_category[64] = _RBX->m_metadata.m_category[64];
  memcpy_0(_RDI->m_metadata.m_extraData, _RBX->m_metadata.m_extraData, sizeof(_RDI->m_metadata.m_extraData));
  _RDI->m_metadata.m_extraDataSize = _RBX->m_metadata.m_extraDataSize;
  _RDI->m_metadata.m_summaryContentLength = _RBX->m_metadata.m_summaryContentLength;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+0D40h]
    vmovups ymmword ptr [rdi+0D40h], ymm0
  }
  _RDI->m_metadata.m_summaryChecksum[32] = _RBX->m_metadata.m_summaryChecksum[32];
  _RDI->m_metadata.m_hasSummary = _RBX->m_metadata.m_hasSummary;
  _RDI->m_metadata.m_tags.m_capacity = _RBX->m_metadata.m_tags.m_capacity;
  _RDI->m_metadata.m_tags.m_size = _RBX->m_metadata.m_tags.m_size;
  v25 = NULL;
  m_capacity = _RBX->m_metadata.m_tags.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v25 = (bdObjectStoreTag *)bdMemory::allocate(66 * m_capacity);
    m_size = _RBX->m_metadata.m_tags.m_size;
    if ( m_size )
    {
      _RCX = v25;
      _R8 = (char *)_RBX->m_metadata.m_tags.m_data - (char *)v25;
      v30 = m_size;
      do
      {
        if ( _RCX )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [r8+rcx]
            vmovups ymmword ptr [rcx], ymm0
            vmovups ymm1, ymmword ptr [r8+rcx+20h]
            vmovups ymmword ptr [rcx+20h], ymm1
          }
          *(_WORD *)&_RCX->m_value[31] = *(_WORD *)&_RCX->m_value[_R8 + 31];
        }
        ++_RCX;
        --v30;
      }
      while ( v30 );
    }
  }
  _RDI->m_metadata.m_tags.m_data = v25;
  _RDI->m_metadata.m_numTags = _RBX->m_metadata.m_numTags;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+0D7Ch]
    vmovups ymmword ptr [rdi+0D7Ch], ymm0
  }
  _RDI->m_error = _RBX->m_error;
  _RDI->m_errorCode = _RBX->m_errorCode;
  _RDI->m_hasError = _RBX->m_hasError;
}

/*
==============
bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata
==============
*/
void bdObjectStoreErrorWrappedMetadata::bdObjectStoreErrorWrappedMetadata(bdObjectStoreErrorWrappedMetadata *this, bdObjectStoreMetadata *metadata)
{
  __int64 v13; 
  bdObjectStoreTag *v25; 
  __int64 m_capacity; 
  unsigned int m_size; 
  __int64 v30; 

  _RDI = metadata;
  _RBX = this;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx], xmm0
    vmovups ymm0, ymmword ptr [rdx+10h]
    vmovups ymmword ptr [rcx+10h], ymm0
    vmovups ymm1, ymmword ptr [rdx+30h]
    vmovups ymmword ptr [rcx+30h], ymm1
    vmovups ymm0, ymmword ptr [rdx+50h]
    vmovups ymmword ptr [rcx+50h], ymm0
    vmovups xmm1, xmmword ptr [rdx+70h]
    vmovups xmmword ptr [rcx+70h], xmm1
    vmovups ymm0, ymmword ptr [rdx+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
  }
  this->m_metadata.m_contentChecksum[32] = metadata->m_contentChecksum[32];
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+0A1h]
    vmovups ymmword ptr [rcx+0A1h], ymm0
  }
  this->m_metadata.m_objectVersion[32] = metadata->m_objectVersion[32];
  this->m_metadata.m_expiresOn = metadata->m_expiresOn;
  this->m_metadata.m_contentLength = metadata->m_contentLength;
  this->m_metadata.m_acl.m_aclType = metadata->m_acl.m_aclType;
  this->m_metadata.m_created = metadata->m_created;
  this->m_metadata.m_modified = metadata->m_modified;
  _RCX = this->m_metadata.m_contentURL;
  _RAX = metadata->m_contentURL;
  v13 = 8i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX += 128;
    --v13;
  }
  while ( v13 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+4F0h]
    vmovups ymmword ptr [rbx+4F0h], ymm0
    vmovups ymm1, ymmword ptr [rdi+510h]
    vmovups ymmword ptr [rbx+510h], ymm1
  }
  _RBX->m_metadata.m_category[64] = _RDI->m_category[64];
  memcpy_0(_RBX->m_metadata.m_extraData, _RDI->m_extraData, sizeof(_RBX->m_metadata.m_extraData));
  _RBX->m_metadata.m_extraDataSize = _RDI->m_extraDataSize;
  _RBX->m_metadata.m_summaryContentLength = _RDI->m_summaryContentLength;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0D40h]
    vmovups ymmword ptr [rbx+0D40h], ymm0
  }
  _RBX->m_metadata.m_summaryChecksum[32] = _RDI->m_summaryChecksum[32];
  _RBX->m_metadata.m_hasSummary = _RDI->m_hasSummary;
  _RBX->m_metadata.m_tags.m_capacity = _RDI->m_tags.m_capacity;
  _RBX->m_metadata.m_tags.m_size = _RDI->m_tags.m_size;
  v25 = NULL;
  m_capacity = _RDI->m_tags.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v25 = (bdObjectStoreTag *)bdMemory::allocate(66 * m_capacity);
    m_size = _RDI->m_tags.m_size;
    if ( m_size )
    {
      _RCX = v25;
      _R8 = (char *)_RDI->m_tags.m_data - (char *)v25;
      v30 = m_size;
      do
      {
        if ( _RCX )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [r8+rcx]
            vmovups ymmword ptr [rcx], ymm0
            vmovups ymm1, ymmword ptr [r8+rcx+20h]
            vmovups ymmword ptr [rcx+20h], ymm1
          }
          *(_WORD *)&_RCX->m_value[31] = *(_WORD *)&_RCX->m_value[_R8 + 31];
        }
        ++_RCX;
        --v30;
      }
      while ( v30 );
    }
  }
  _RBX->m_metadata.m_tags.m_data = v25;
  _RBX->m_metadata.m_numTags = _RDI->m_numTags;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0D7Ch]
    vmovups ymmword ptr [rbx+0D7Ch], ymm0
  }
  _RBX->m_hasError = 0;
  _RBX->m_errorCode = BD_NO_ERROR;
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

