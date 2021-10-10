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
  char *m_contentURL; 
  char *v9; 
  __int64 v10; 

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
  v9 = metadata->m_contentURL;
  v10 = 8i64;
  do
  {
    *(_OWORD *)m_contentURL = *(_OWORD *)v9;
    *((_OWORD *)m_contentURL + 1) = *((_OWORD *)v9 + 1);
    *((_OWORD *)m_contentURL + 2) = *((_OWORD *)v9 + 2);
    *((_OWORD *)m_contentURL + 3) = *((_OWORD *)v9 + 3);
    *((_OWORD *)m_contentURL + 4) = *((_OWORD *)v9 + 4);
    *((_OWORD *)m_contentURL + 5) = *((_OWORD *)v9 + 5);
    *((_OWORD *)m_contentURL + 6) = *((_OWORD *)v9 + 6);
    m_contentURL += 128;
    *((_OWORD *)m_contentURL - 1) = *((_OWORD *)v9 + 7);
    v9 += 128;
    --v10;
  }
  while ( v10 );
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
  this->m_metadata.m_tags.m_data = bdArray<bdObjectStoreTag>::uninitializedCopy(&this->m_metadata.m_tags, &metadata->m_tags);
  this->m_metadata.m_numTags = metadata->m_numTags;
  this->m_metadata.m_statistics = metadata->m_statistics;
  this->m_contentPtr = contentPtr;
  this->m_contentSize = contentSize;
  this->m_downloadInterceptor = NULL;
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
  char *m_contentURL; 
  char *v5; 
  __int64 v6; 

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
  this->m_metadata.m_tags.m_data = bdArray<bdObjectStoreTag>::uninitializedCopy(&this->m_metadata.m_tags, &__that->m_metadata.m_tags);
  this->m_metadata.m_numTags = __that->m_metadata.m_numTags;
  this->m_metadata.m_statistics = __that->m_metadata.m_statistics;
  this->m_contentPtr = __that->m_contentPtr;
  this->m_contentSize = __that->m_contentSize;
  this->m_downloadInterceptor = __that->m_downloadInterceptor;
}

