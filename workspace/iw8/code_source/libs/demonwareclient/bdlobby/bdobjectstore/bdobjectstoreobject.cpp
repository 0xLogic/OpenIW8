/*
==============
bdObjectStoreObject::getContent
==============
*/

const unsigned __int8 *__fastcall bdObjectStoreObject::getContent(bdObjectStoreObject *this)
{
  return ?getContent@bdObjectStoreObject@@QEBAPEBEXZ(this);
}

/*
==============
bdObjectStoreObject::setDownloadInterceptor
==============
*/

void __fastcall bdObjectStoreObject::setDownloadInterceptor(bdObjectStoreObject *this, bdObjectStoreDownloadInterceptor *downloadInterceptor)
{
  ?setDownloadInterceptor@bdObjectStoreObject@@QEAAXPEAVbdObjectStoreDownloadInterceptor@@@Z(this, downloadInterceptor);
}

/*
==============
bdObjectStoreObject::hasDownloadInterceptor
==============
*/

bool __fastcall bdObjectStoreObject::hasDownloadInterceptor(bdObjectStoreObject *this)
{
  return ?hasDownloadInterceptor@bdObjectStoreObject@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreObject::getMetadata
==============
*/

bdObjectStoreMetadata *__fastcall bdObjectStoreObject::getMetadata(bdObjectStoreObject *this)
{
  return ?getMetadata@bdObjectStoreObject@@QEAAAEAVbdObjectStoreMetadata@@XZ(this);
}

/*
==============
bdObjectStoreObject::getContentSize
==============
*/

unsigned __int64 __fastcall bdObjectStoreObject::getContentSize(bdObjectStoreObject *this)
{
  return ?getContentSize@bdObjectStoreObject@@QEBA_KXZ(this);
}

/*
==============
bdObjectStoreObject::reset
==============
*/

void __fastcall bdObjectStoreObject::reset(bdObjectStoreObject *this)
{
  ?reset@bdObjectStoreObject@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/

void __fastcall bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this)
{
  ??0bdObjectStoreObject@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreObject::getMetadata
==============
*/

const bdObjectStoreMetadata *__fastcall bdObjectStoreObject::getMetadata(bdObjectStoreObject *this)
{
  return ?getMetadata@bdObjectStoreObject@@QEBAAEBVbdObjectStoreMetadata@@XZ(this);
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/

void __fastcall bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this, bdObjectStoreDownloadInterceptor *downloadInterceptor)
{
  ??0bdObjectStoreObject@@QEAA@PEAVbdObjectStoreDownloadInterceptor@@@Z(this, downloadInterceptor);
}

/*
==============
bdObjectStoreObject::setMetadata
==============
*/

void __fastcall bdObjectStoreObject::setMetadata(bdObjectStoreObject *this, const bdObjectStoreMetadata *metadata)
{
  ?setMetadata@bdObjectStoreObject@@QEAAXAEBVbdObjectStoreMetadata@@@Z(this, metadata);
}

/*
==============
bdObjectStoreObject::getContent
==============
*/

unsigned __int8 *__fastcall bdObjectStoreObject::getContent(bdObjectStoreObject *this)
{
  return ?getContent@bdObjectStoreObject@@QEAAPEAEXZ(this);
}

/*
==============
bdObjectStoreObject::init
==============
*/

void __fastcall bdObjectStoreObject::init(bdObjectStoreObject *this, unsigned __int8 *contentPtr, unsigned __int64 contentSize)
{
  ?init@bdObjectStoreObject@@QEAAXPEAE_K@Z(this, contentPtr, contentSize);
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/

void __fastcall bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this, unsigned __int8 *contentPtr, unsigned __int64 contentSize)
{
  ??0bdObjectStoreObject@@QEAA@PEAE_K@Z(this, contentPtr, contentSize);
}

/*
==============
bdObjectStoreObject::getDownloadInterceptor
==============
*/

bdObjectStoreDownloadInterceptor *__fastcall bdObjectStoreObject::getDownloadInterceptor(bdObjectStoreObject *this)
{
  return ?getDownloadInterceptor@bdObjectStoreObject@@QEAAPEAVbdObjectStoreDownloadInterceptor@@XZ(this);
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/

void __fastcall bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this, unsigned __int8 *contentPtr, unsigned __int64 contentSize, const bdObjectStoreMetadata *metadata)
{
  ??0bdObjectStoreObject@@QEAA@PEAE_KAEBVbdObjectStoreMetadata@@@Z(this, contentPtr, contentSize, metadata);
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/

void __fastcall bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this, const bdObjectStoreObject *__that)
{
  ??0bdObjectStoreObject@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/
void bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this, unsigned __int8 *contentPtr, unsigned __int64 contentSize)
{
  bdObjectStoreMetadata::bdObjectStoreMetadata(&this->m_metadata);
  this->m_contentPtr = contentPtr;
  this->m_contentSize = contentSize;
  this->m_downloadInterceptor = NULL;
  bdObjectStoreMetadata::reset(&this->m_metadata);
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/
void bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this, unsigned __int8 *contentPtr, unsigned __int64 contentSize, const bdObjectStoreMetadata *metadata)
{
  __int64 v17; 

  _RSI = metadata;
  _RDI = this;
  __asm
  {
    vmovups xmm0, xmmword ptr [r9]
    vmovups xmmword ptr [rcx], xmm0
    vmovups ymm0, ymmword ptr [r9+10h]
    vmovups ymmword ptr [rcx+10h], ymm0
    vmovups ymm1, ymmword ptr [r9+30h]
    vmovups ymmword ptr [rcx+30h], ymm1
    vmovups ymm0, ymmword ptr [r9+50h]
    vmovups ymmword ptr [rcx+50h], ymm0
    vmovups xmm1, xmmword ptr [r9+70h]
    vmovups xmmword ptr [rcx+70h], xmm1
    vmovups ymm0, ymmword ptr [r9+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
  }
  this->m_metadata.m_contentChecksum[32] = metadata->m_contentChecksum[32];
  __asm
  {
    vmovups ymm0, ymmword ptr [r9+0A1h]
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
  v17 = 8i64;
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
    --v17;
  }
  while ( v17 );
  __asm
  {
    vmovups ymm0, ymmword ptr [r9+4F0h]
    vmovups ymmword ptr [rdi+4F0h], ymm0
    vmovups ymm1, ymmword ptr [r9+510h]
    vmovups ymmword ptr [rdi+510h], ymm1
  }
  _RDI->m_metadata.m_category[64] = metadata->m_category[64];
  memcpy_0(_RDI->m_metadata.m_extraData, metadata->m_extraData, sizeof(_RDI->m_metadata.m_extraData));
  _RDI->m_metadata.m_extraDataSize = _RSI->m_extraDataSize;
  _RDI->m_metadata.m_summaryContentLength = _RSI->m_summaryContentLength;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+0D40h]
    vmovups ymmword ptr [rdi+0D40h], ymm0
  }
  _RDI->m_metadata.m_summaryChecksum[32] = _RSI->m_summaryChecksum[32];
  _RDI->m_metadata.m_hasSummary = _RSI->m_hasSummary;
  _RDI->m_metadata.m_tags.m_capacity = _RSI->m_tags.m_capacity;
  _RDI->m_metadata.m_tags.m_size = _RSI->m_tags.m_size;
  _RDI->m_metadata.m_tags.m_data = bdArray<bdObjectStoreTag>::uninitializedCopy(&_RDI->m_metadata.m_tags, &_RSI->m_tags);
  _RDI->m_metadata.m_numTags = _RSI->m_numTags;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+0D7Ch]
    vmovups ymmword ptr [rdi+0D7Ch], ymm0
  }
  _RDI->m_contentPtr = contentPtr;
  _RDI->m_contentSize = contentSize;
  _RDI->m_downloadInterceptor = NULL;
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/
void bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this, bdObjectStoreDownloadInterceptor *downloadInterceptor)
{
  bdObjectStoreMetadata::bdObjectStoreMetadata(&this->m_metadata);
  this->m_contentPtr = NULL;
  this->m_contentSize = 0i64;
  bdObjectStoreMetadata::reset(&this->m_metadata);
  this->m_downloadInterceptor = downloadInterceptor;
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/
void bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this)
{
  bdObjectStoreMetadata::bdObjectStoreMetadata(&this->m_metadata);
  this->m_contentPtr = NULL;
  this->m_contentSize = 0i64;
  bdObjectStoreMetadata::reset(&this->m_metadata);
  this->m_downloadInterceptor = NULL;
}

/*
==============
bdObjectStoreObject::getContent
==============
*/
unsigned __int8 *bdObjectStoreObject::getContent(bdObjectStoreObject *this)
{
  return this->m_contentPtr;
}

/*
==============
bdObjectStoreObject::getContent
==============
*/
unsigned __int8 *bdObjectStoreObject::getContent(bdObjectStoreObject *this)
{
  return this->m_contentPtr;
}

/*
==============
bdObjectStoreObject::getContentSize
==============
*/
unsigned __int64 bdObjectStoreObject::getContentSize(bdObjectStoreObject *this)
{
  return this->m_contentSize;
}

/*
==============
bdObjectStoreObject::getDownloadInterceptor
==============
*/
bdObjectStoreDownloadInterceptor *bdObjectStoreObject::getDownloadInterceptor(bdObjectStoreObject *this)
{
  return this->m_downloadInterceptor;
}

/*
==============
bdObjectStoreObject::getMetadata
==============
*/
bdObjectStoreObject *bdObjectStoreObject::getMetadata(bdObjectStoreObject *this)
{
  return this;
}

/*
==============
bdObjectStoreObject::getMetadata
==============
*/
bdObjectStoreObject *bdObjectStoreObject::getMetadata(bdObjectStoreObject *this)
{
  return this;
}

/*
==============
bdObjectStoreObject::hasDownloadInterceptor
==============
*/
bool bdObjectStoreObject::hasDownloadInterceptor(bdObjectStoreObject *this)
{
  return this->m_downloadInterceptor != NULL;
}

/*
==============
bdObjectStoreObject::init
==============
*/
void bdObjectStoreObject::init(bdObjectStoreObject *this, unsigned __int8 *contentPtr, unsigned __int64 contentSize)
{
  this->m_contentPtr = contentPtr;
  this->m_contentSize = contentSize;
  this->m_downloadInterceptor = NULL;
  bdObjectStoreMetadata::reset(&this->m_metadata);
}

/*
==============
bdObjectStoreObject::reset
==============
*/
void bdObjectStoreObject::reset(bdObjectStoreObject *this)
{
  this->m_contentPtr = NULL;
  this->m_contentSize = 0i64;
  bdObjectStoreMetadata::reset(&this->m_metadata);
  this->m_downloadInterceptor = NULL;
}

/*
==============
bdObjectStoreObject::setDownloadInterceptor
==============
*/
void bdObjectStoreObject::setDownloadInterceptor(bdObjectStoreObject *this, bdObjectStoreDownloadInterceptor *downloadInterceptor)
{
  this->m_downloadInterceptor = downloadInterceptor;
}

/*
==============
bdObjectStoreObject::setMetadata
==============
*/

void __fastcall bdObjectStoreObject::setMetadata(bdObjectStoreObject *this, const bdObjectStoreMetadata *metadata)
{
  bdObjectStoreMetadata::operator=(&this->m_metadata, metadata);
}

/*
==============
bdObjectStoreObject::bdObjectStoreObject
==============
*/
void bdObjectStoreObject::bdObjectStoreObject(bdObjectStoreObject *this, const bdObjectStoreObject *__that)
{
  __int64 v13; 

  _RSI = __that;
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
    vmovups ymm0, ymmword ptr [rsi+4F0h]
    vmovups ymmword ptr [rdi+4F0h], ymm0
    vmovups ymm1, ymmword ptr [rsi+510h]
    vmovups ymmword ptr [rdi+510h], ymm1
  }
  _RDI->m_metadata.m_category[64] = _RSI->m_metadata.m_category[64];
  memcpy_0(_RDI->m_metadata.m_extraData, _RSI->m_metadata.m_extraData, sizeof(_RDI->m_metadata.m_extraData));
  _RDI->m_metadata.m_extraDataSize = _RSI->m_metadata.m_extraDataSize;
  _RDI->m_metadata.m_summaryContentLength = _RSI->m_metadata.m_summaryContentLength;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+0D40h]
    vmovups ymmword ptr [rdi+0D40h], ymm0
  }
  _RDI->m_metadata.m_summaryChecksum[32] = _RSI->m_metadata.m_summaryChecksum[32];
  _RDI->m_metadata.m_hasSummary = _RSI->m_metadata.m_hasSummary;
  _RDI->m_metadata.m_tags.m_capacity = _RSI->m_metadata.m_tags.m_capacity;
  _RDI->m_metadata.m_tags.m_size = _RSI->m_metadata.m_tags.m_size;
  _RDI->m_metadata.m_tags.m_data = bdArray<bdObjectStoreTag>::uninitializedCopy(&_RDI->m_metadata.m_tags, &_RSI->m_metadata.m_tags);
  _RDI->m_metadata.m_numTags = _RSI->m_metadata.m_numTags;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+0D7Ch]
    vmovups ymmword ptr [rdi+0D7Ch], ymm0
  }
  _RDI->m_contentPtr = _RSI->m_contentPtr;
  _RDI->m_contentSize = _RSI->m_contentSize;
  _RDI->m_downloadInterceptor = _RSI->m_downloadInterceptor;
}

