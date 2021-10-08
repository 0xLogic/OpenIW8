/*
==============
bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject
==============
*/

void __fastcall bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(bdObjectStoreErrorWrappedObject *this, const bdObjectStoreErrorWrappedObject *__that)
{
  ??0bdObjectStoreErrorWrappedObject@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdObjectStoreErrorWrappedObject::reset
==============
*/

void __fastcall bdObjectStoreErrorWrappedObject::reset(bdObjectStoreErrorWrappedObject *this)
{
  ?reset@bdObjectStoreErrorWrappedObject@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreErrorWrappedObject::getObject
==============
*/

bdObjectStoreObject *__fastcall bdObjectStoreErrorWrappedObject::getObject(bdObjectStoreErrorWrappedObject *this)
{
  return ?getObject@bdObjectStoreErrorWrappedObject@@QEAAAEAVbdObjectStoreObject@@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedObject::deserializeFromJSON
==============
*/

bool __fastcall bdObjectStoreErrorWrappedObject::deserializeFromJSON(bdObjectStoreErrorWrappedObject *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdObjectStoreErrorWrappedObject@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject
==============
*/

void __fastcall bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(bdObjectStoreErrorWrappedObject *this)
{
  ??0bdObjectStoreErrorWrappedObject@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedObject::isModified
==============
*/

bdObjectStoreErrorWrappedObject::bdObjectStoreModifiedStatus __fastcall bdObjectStoreErrorWrappedObject::isModified(bdObjectStoreErrorWrappedObject *this)
{
  return ?isModified@bdObjectStoreErrorWrappedObject@@QEBA?AW4bdObjectStoreModifiedStatus@1@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedObject::getObject
==============
*/

const bdObjectStoreObject *__fastcall bdObjectStoreErrorWrappedObject::getObject(bdObjectStoreErrorWrappedObject *this)
{
  return ?getObject@bdObjectStoreErrorWrappedObject@@QEBAAEBVbdObjectStoreObject@@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedObject::deserializeErrorFromJSON
==============
*/

bool __fastcall bdObjectStoreErrorWrappedObject::deserializeErrorFromJSON(bdObjectStoreErrorWrappedObject *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  return ?deserializeErrorFromJSON@bdObjectStoreErrorWrappedObject@@QEAA_NPEAVbdJSONDeserializer@@W4bdObjectStoreObjectIDOwnerType@bdObjectStoreObjectID@@@Z(this, json, ownerType);
}

/*
==============
bdObjectStoreErrorWrappedObject::setError
==============
*/

void __fastcall bdObjectStoreErrorWrappedObject::setError(bdObjectStoreErrorWrappedObject *this, const char *errorName)
{
  ?setError@bdObjectStoreErrorWrappedObject@@QEAAXPEBD@Z(this, errorName);
}

/*
==============
bdObjectStoreErrorWrappedObject::setDownloadStatus
==============
*/

void __fastcall bdObjectStoreErrorWrappedObject::setDownloadStatus(bdObjectStoreErrorWrappedObject *this, bdObjectStoreErrorWrappedObject::bdObjectStoreDownloadStatus status)
{
  ?setDownloadStatus@bdObjectStoreErrorWrappedObject@@QEAAXW4bdObjectStoreDownloadStatus@1@@Z(this, status);
}

/*
==============
bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject
==============
*/

void __fastcall bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(bdObjectStoreErrorWrappedObject *this, bdObjectStoreObject *object)
{
  ??0bdObjectStoreErrorWrappedObject@@QEAA@AEAVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreErrorWrappedObject::setError
==============
*/

void __fastcall bdObjectStoreErrorWrappedObject::setError(bdObjectStoreErrorWrappedObject *this, bdLobbyErrorCode errorCode)
{
  ?setError@bdObjectStoreErrorWrappedObject@@QEAAXW4bdLobbyErrorCode@@@Z(this, errorCode);
}

/*
==============
bdObjectStoreErrorWrappedObject::setObject
==============
*/

void __fastcall bdObjectStoreErrorWrappedObject::setObject(bdObjectStoreErrorWrappedObject *this, bdObjectStoreObject *object)
{
  ?setObject@bdObjectStoreErrorWrappedObject@@QEAAXAEAVbdObjectStoreObject@@@Z(this, object);
}

/*
==============
bdObjectStoreErrorWrappedObject::getError
==============
*/

const bdObjectStoreErrorWrappedObject::bdObjectStoreVectorizedError *__fastcall bdObjectStoreErrorWrappedObject::getError(bdObjectStoreErrorWrappedObject *this)
{
  return ?getError@bdObjectStoreErrorWrappedObject@@QEBAAEBW4bdObjectStoreVectorizedError@1@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedObject::markAsError
==============
*/

void __fastcall bdObjectStoreErrorWrappedObject::markAsError(bdObjectStoreErrorWrappedObject *this)
{
  ?markAsError@bdObjectStoreErrorWrappedObject@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreErrorWrappedObject::hasError
==============
*/

bool __fastcall bdObjectStoreErrorWrappedObject::hasError(bdObjectStoreErrorWrappedObject *this)
{
  return ?hasError@bdObjectStoreErrorWrappedObject@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreErrorWrappedObject::getDownloadStatus
==============
*/

bdObjectStoreErrorWrappedObject::bdObjectStoreDownloadStatus __fastcall bdObjectStoreErrorWrappedObject::getDownloadStatus(bdObjectStoreErrorWrappedObject *this)
{
  return ?getDownloadStatus@bdObjectStoreErrorWrappedObject@@QEBA?AW4bdObjectStoreDownloadStatus@1@XZ(this);
}

/*
==============
bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject
==============
*/
void bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(bdObjectStoreErrorWrappedObject *this, const bdObjectStoreErrorWrappedObject *__that)
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
  this->m_object.m_metadata.m_contentChecksum[32] = __that->m_object.m_metadata.m_contentChecksum[32];
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+0A1h]
    vmovups ymmword ptr [rcx+0A1h], ymm0
  }
  this->m_object.m_metadata.m_objectVersion[32] = __that->m_object.m_metadata.m_objectVersion[32];
  this->m_object.m_metadata.m_expiresOn = __that->m_object.m_metadata.m_expiresOn;
  this->m_object.m_metadata.m_contentLength = __that->m_object.m_metadata.m_contentLength;
  this->m_object.m_metadata.m_acl.m_aclType = __that->m_object.m_metadata.m_acl.m_aclType;
  this->m_object.m_metadata.m_created = __that->m_object.m_metadata.m_created;
  this->m_object.m_metadata.m_modified = __that->m_object.m_metadata.m_modified;
  _RCX = this->m_object.m_metadata.m_contentURL;
  _RAX = __that->m_object.m_metadata.m_contentURL;
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
  _RDI->m_object.m_metadata.m_category[64] = _RBX->m_object.m_metadata.m_category[64];
  memcpy_0(_RDI->m_object.m_metadata.m_extraData, _RBX->m_object.m_metadata.m_extraData, sizeof(_RDI->m_object.m_metadata.m_extraData));
  _RDI->m_object.m_metadata.m_extraDataSize = _RBX->m_object.m_metadata.m_extraDataSize;
  _RDI->m_object.m_metadata.m_summaryContentLength = _RBX->m_object.m_metadata.m_summaryContentLength;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+0D40h]
    vmovups ymmword ptr [rdi+0D40h], ymm0
  }
  _RDI->m_object.m_metadata.m_summaryChecksum[32] = _RBX->m_object.m_metadata.m_summaryChecksum[32];
  _RDI->m_object.m_metadata.m_hasSummary = _RBX->m_object.m_metadata.m_hasSummary;
  _RDI->m_object.m_metadata.m_tags.m_capacity = _RBX->m_object.m_metadata.m_tags.m_capacity;
  _RDI->m_object.m_metadata.m_tags.m_size = _RBX->m_object.m_metadata.m_tags.m_size;
  v25 = NULL;
  m_capacity = _RBX->m_object.m_metadata.m_tags.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v25 = (bdObjectStoreTag *)bdMemory::allocate(66 * m_capacity);
    m_size = _RBX->m_object.m_metadata.m_tags.m_size;
    if ( m_size )
    {
      _RCX = v25;
      _R8 = (char *)_RBX->m_object.m_metadata.m_tags.m_data - (char *)v25;
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
  _RDI->m_object.m_metadata.m_tags.m_data = v25;
  _RDI->m_object.m_metadata.m_numTags = _RBX->m_object.m_metadata.m_numTags;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+0D7Ch]
    vmovups ymmword ptr [rdi+0D7Ch], ymm0
  }
  _RDI->m_object.m_contentPtr = _RBX->m_object.m_contentPtr;
  _RDI->m_object.m_contentSize = _RBX->m_object.m_contentSize;
  _RDI->m_object.m_downloadInterceptor = _RBX->m_object.m_downloadInterceptor;
  _RDI->m_error = _RBX->m_error;
  _RDI->m_hasError = _RBX->m_hasError;
  _RDI->m_modified = _RBX->m_modified;
  _RDI->m_downloadStatus = _RBX->m_downloadStatus;
}

/*
==============
bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject
==============
*/
void bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(bdObjectStoreErrorWrappedObject *this, bdObjectStoreObject *object)
{
  __int64 v13; 

  _RSI = object;
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
  this->m_object.m_metadata.m_contentChecksum[32] = object->m_metadata.m_contentChecksum[32];
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+0A1h]
    vmovups ymmword ptr [rcx+0A1h], ymm0
  }
  this->m_object.m_metadata.m_objectVersion[32] = object->m_metadata.m_objectVersion[32];
  this->m_object.m_metadata.m_expiresOn = object->m_metadata.m_expiresOn;
  this->m_object.m_metadata.m_contentLength = object->m_metadata.m_contentLength;
  this->m_object.m_metadata.m_acl.m_aclType = object->m_metadata.m_acl.m_aclType;
  this->m_object.m_metadata.m_created = object->m_metadata.m_created;
  this->m_object.m_metadata.m_modified = object->m_metadata.m_modified;
  _RCX = this->m_object.m_metadata.m_contentURL;
  _RAX = object->m_metadata.m_contentURL;
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
    vmovups ymm0, ymmword ptr [rsi+4F0h]
    vmovups ymmword ptr [rdi+4F0h], ymm0
    vmovups ymm1, ymmword ptr [rsi+510h]
    vmovups ymmword ptr [rdi+510h], ymm1
  }
  _RDI->m_object.m_metadata.m_category[64] = _RSI->m_metadata.m_category[64];
  memcpy_0(_RDI->m_object.m_metadata.m_extraData, _RSI->m_metadata.m_extraData, sizeof(_RDI->m_object.m_metadata.m_extraData));
  _RDI->m_object.m_metadata.m_extraDataSize = _RSI->m_metadata.m_extraDataSize;
  _RDI->m_object.m_metadata.m_summaryContentLength = _RSI->m_metadata.m_summaryContentLength;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+0D40h]
    vmovups ymmword ptr [rdi+0D40h], ymm0
  }
  _RDI->m_object.m_metadata.m_summaryChecksum[32] = _RSI->m_metadata.m_summaryChecksum[32];
  _RDI->m_object.m_metadata.m_hasSummary = _RSI->m_metadata.m_hasSummary;
  _RDI->m_object.m_metadata.m_tags.m_capacity = _RSI->m_metadata.m_tags.m_capacity;
  _RDI->m_object.m_metadata.m_tags.m_size = _RSI->m_metadata.m_tags.m_size;
  _RDI->m_object.m_metadata.m_tags.m_data = bdArray<bdObjectStoreTag>::uninitializedCopy(&_RDI->m_object.m_metadata.m_tags, &_RSI->m_metadata.m_tags);
  _RDI->m_object.m_metadata.m_numTags = _RSI->m_metadata.m_numTags;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+0D7Ch]
    vmovups ymmword ptr [rdi+0D7Ch], ymm0
  }
  _RDI->m_object.m_contentPtr = _RSI->m_contentPtr;
  _RDI->m_object.m_contentSize = _RSI->m_contentSize;
  _RDI->m_object.m_downloadInterceptor = _RSI->m_downloadInterceptor;
  _RDI->m_hasError = 0;
  *(_QWORD *)&_RDI->m_modified = 1i64;
}

/*
==============
bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject
==============
*/
void bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(bdObjectStoreErrorWrappedObject *this)
{
  bdObjectStoreObject::bdObjectStoreObject(&this->m_object);
  this->m_hasError = 0;
  *(_QWORD *)&this->m_modified = 1i64;
}

/*
==============
bdObjectStoreErrorWrappedObject::deserializeErrorFromJSON
==============
*/
bool bdObjectStoreErrorWrappedObject::deserializeErrorFromJSON(bdObjectStoreErrorWrappedObject *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  bool result; 
  bdObjectStoreErrorWrappedObject::bdObjectStoreModifiedStatus v7; 
  __int32 v8; 
  __int32 v9; 
  __int32 v10; 
  __int32 v11; 
  bdObjectStoreMetadata *Metadata; 
  bool v13; 
  bdObjectStoreObjectID objectID; 
  char v15[32]; 
  char objectName[80]; 
  char value[112]; 

  result = bdJSONDeserializer::getString(json, "error", value, 0x64u);
  if ( !result )
    return result;
  if ( !strncmp(notModifiedError, value, 0x64ui64) )
  {
    this->m_error = BD_OBJECTSTORE_OBJECT_NOT_MODIFIED_ERROR;
    v7 = BD_OBJECTSTORE_OBJECT_NOT_MODIFIED;
    goto LABEL_15;
  }
  v8 = bdObjectStoreErrors::getLobbyErrorCodeFromErrorName(value) - 20000;
  if ( !v8 )
  {
    this->m_error = BD_OBJECTSTORE_OBJECT_NOT_FOUND_ERROR;
    goto LABEL_14;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    this->m_error = BD_OBJECTSTORE_INVALID_ACCESS_ERROR;
    goto LABEL_14;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_9;
  v11 = v10 - 1;
  if ( !v11 )
  {
    this->m_error = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_REMAINING_SIZE_WINDOW_SPACE_ERROR;
    goto LABEL_14;
  }
  if ( v11 == 1 )
    this->m_error = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR;
  else
LABEL_9:
    this->m_error = BD_OBJECTSTORE_UNKNOWN_ERROR;
LABEL_14:
  this->m_hasError = 1;
  v7 = BD_OBJECTSTORE_UNKNOWN;
  this->m_downloadStatus = BD_DOWNLOAD_FAILED;
LABEL_15:
  this->m_modified = v7;
  Metadata = bdObjectStoreObject::getMetadata(&this->m_object);
  v13 = bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, objectName, 0x41u) && bdJSONDeserializer::getString(json, "owner", v15, 0x1Eu);
  bdObjectStoreObjectID::bdObjectStoreObjectID(&objectID, v15, objectName, ownerType);
  return v13 && bdObjectStoreMetadata::setObjectID(Metadata, &objectID);
}

/*
==============
bdObjectStoreErrorWrappedObject::deserializeFromJSON
==============
*/
_BOOL8 bdObjectStoreErrorWrappedObject::deserializeFromJSON(bdObjectStoreErrorWrappedObject *this, bdJSONDeserializer *json)
{
  bdObjectStoreMetadata *Metadata; 
  bool v5; 
  unsigned int ContentSize; 
  unsigned int v7; 
  unsigned __int8 *Content; 
  _BYTE *v9; 
  signed __int64 v10; 
  bool v11; 
  bdJSONDeserializer value; 
  char Buf[65536]; 

  bdJSONDeserializer::bdJSONDeserializer(&value);
  v5 = 0;
  if ( bdJSONDeserializer::getObject(json, "metadata", &value) )
  {
    Metadata = bdObjectStoreObject::getMetadata(&this->m_object);
    if ( bdObjectStoreMetadata::deserializeFromJSON(Metadata, &value, USER_OWNER_TYPE) )
      v5 = 1;
  }
  ContentSize = bdObjectStoreObject::getContentSize(&this->m_object);
  v7 = ContentSize;
  if ( v5 && bdJSONDeserializer::getString(json, "content", Buf, ContentSize) )
  {
    Content = bdObjectStoreObject::getContent(&this->m_object);
    v9 = memchr_0(Buf, 0, 0xFFFFui64);
    if ( v9 )
      v10 = v9 - Buf;
    else
      LODWORD(v10) = 0xFFFF;
    v11 = bdBase64::decode(Buf, v10, Content, v7) != 0;
  }
  else
  {
    v11 = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return v11;
}

/*
==============
bdObjectStoreErrorWrappedObject::getDownloadStatus
==============
*/
__int64 bdObjectStoreErrorWrappedObject::getDownloadStatus(bdObjectStoreErrorWrappedObject *this)
{
  return (unsigned int)this->m_downloadStatus;
}

/*
==============
bdObjectStoreErrorWrappedObject::getError
==============
*/
bdObjectStoreErrorWrappedObject::bdObjectStoreVectorizedError *bdObjectStoreErrorWrappedObject::getError(bdObjectStoreErrorWrappedObject *this)
{
  bdHandleAssert(this->m_hasError, "m_hasError", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreerrorwrappedobject.cpp", "bdObjectStoreErrorWrappedObject::getError", 0x23u, "No error exists");
  return &this->m_error;
}

/*
==============
bdObjectStoreErrorWrappedObject::getObject
==============
*/
bdObjectStoreErrorWrappedObject *bdObjectStoreErrorWrappedObject::getObject(bdObjectStoreErrorWrappedObject *this)
{
  return this;
}

/*
==============
bdObjectStoreErrorWrappedObject::getObject
==============
*/
bdObjectStoreErrorWrappedObject *bdObjectStoreErrorWrappedObject::getObject(bdObjectStoreErrorWrappedObject *this)
{
  return this;
}

/*
==============
bdObjectStoreErrorWrappedObject::hasError
==============
*/
_BOOL8 bdObjectStoreErrorWrappedObject::hasError(bdObjectStoreErrorWrappedObject *this)
{
  return this->m_hasError;
}

/*
==============
bdObjectStoreErrorWrappedObject::isModified
==============
*/
__int64 bdObjectStoreErrorWrappedObject::isModified(bdObjectStoreErrorWrappedObject *this)
{
  return (unsigned int)this->m_modified;
}

/*
==============
bdObjectStoreErrorWrappedObject::markAsError
==============
*/
void bdObjectStoreErrorWrappedObject::markAsError(bdObjectStoreErrorWrappedObject *this)
{
  this->m_hasError = 1;
  this->m_modified = BD_OBJECTSTORE_UNKNOWN;
  this->m_downloadStatus = BD_DOWNLOAD_FAILED;
}

/*
==============
bdObjectStoreErrorWrappedObject::reset
==============
*/
void bdObjectStoreErrorWrappedObject::reset(bdObjectStoreErrorWrappedObject *this)
{
  this->m_hasError = 0;
  *(_QWORD *)&this->m_modified = 1i64;
}

/*
==============
bdObjectStoreErrorWrappedObject::setDownloadStatus
==============
*/
void bdObjectStoreErrorWrappedObject::setDownloadStatus(bdObjectStoreErrorWrappedObject *this, bdObjectStoreErrorWrappedObject::bdObjectStoreDownloadStatus status)
{
  this->m_downloadStatus = status;
}

/*
==============
bdObjectStoreErrorWrappedObject::setError
==============
*/
void bdObjectStoreErrorWrappedObject::setError(bdObjectStoreErrorWrappedObject *this, const char *errorName)
{
  __int32 v4; 
  __int32 v5; 
  __int32 v6; 
  __int32 v7; 

  if ( !strncmp(notModifiedError, errorName, 0x64ui64) )
  {
    this->m_error = BD_OBJECTSTORE_OBJECT_NOT_MODIFIED_ERROR;
    this->m_modified = BD_OBJECTSTORE_OBJECT_NOT_MODIFIED;
    return;
  }
  v4 = bdObjectStoreErrors::getLobbyErrorCodeFromErrorName(errorName) - 20000;
  if ( !v4 )
  {
    this->m_error = BD_OBJECTSTORE_OBJECT_NOT_FOUND_ERROR;
    goto LABEL_13;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    this->m_error = BD_OBJECTSTORE_INVALID_ACCESS_ERROR;
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_10;
  v7 = v6 - 1;
  if ( !v7 )
  {
    this->m_error = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_REMAINING_SIZE_WINDOW_SPACE_ERROR;
    goto LABEL_13;
  }
  if ( v7 != 1 )
  {
LABEL_10:
    this->m_error = BD_OBJECTSTORE_UNKNOWN_ERROR;
    goto LABEL_13;
  }
  this->m_error = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR;
LABEL_13:
  this->m_hasError = 1;
  this->m_downloadStatus = BD_DOWNLOAD_FAILED;
  this->m_modified = BD_OBJECTSTORE_UNKNOWN;
}

/*
==============
bdObjectStoreErrorWrappedObject::setError
==============
*/
void bdObjectStoreErrorWrappedObject::setError(bdObjectStoreErrorWrappedObject *this, bdLobbyErrorCode errorCode)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v2 = errorCode - 20000;
  if ( !v2 )
  {
    this->m_error = BD_OBJECTSTORE_OBJECT_NOT_FOUND_ERROR;
    goto LABEL_11;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    this->m_error = BD_OBJECTSTORE_INVALID_ACCESS_ERROR;
    goto LABEL_11;
  }
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_8;
  v5 = v4 - 1;
  if ( !v5 )
  {
    this->m_error = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_REMAINING_SIZE_WINDOW_SPACE_ERROR;
    goto LABEL_11;
  }
  if ( v5 != 1 )
  {
LABEL_8:
    this->m_error = BD_OBJECTSTORE_UNKNOWN_ERROR;
    goto LABEL_11;
  }
  this->m_error = BD_OBJECTSTORE_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR;
LABEL_11:
  this->m_hasError = 1;
  this->m_modified = BD_OBJECTSTORE_UNKNOWN;
  this->m_downloadStatus = BD_DOWNLOAD_FAILED;
}

/*
==============
bdObjectStoreErrorWrappedObject::setObject
==============
*/
void bdObjectStoreErrorWrappedObject::setObject(bdObjectStoreErrorWrappedObject *this, bdObjectStoreObject *object)
{
  bdObjectStoreMetadata::operator=(&this->m_object.m_metadata, &object->m_metadata);
  this->m_object.m_contentPtr = object->m_contentPtr;
  this->m_object.m_contentSize = object->m_contentSize;
  this->m_object.m_downloadInterceptor = object->m_downloadInterceptor;
}

