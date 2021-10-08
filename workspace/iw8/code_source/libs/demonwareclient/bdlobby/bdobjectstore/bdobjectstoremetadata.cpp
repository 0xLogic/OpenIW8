/*
==============
bdObjectStoreMetadata::setObjectID
==============
*/

bool __fastcall bdObjectStoreMetadata::setObjectID(bdObjectStoreMetadata *this, const bdObjectStoreObjectID *objectID)
{
  return ?setObjectID@bdObjectStoreMetadata@@QEAA_NAEBVbdObjectStoreObjectID@@@Z(this, objectID);
}

/*
==============
bdObjectStoreMetadata::hasSummary
==============
*/

bool __fastcall bdObjectStoreMetadata::hasSummary(bdObjectStoreMetadata *this)
{
  return ?hasSummary@bdObjectStoreMetadata@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreMetadata::setTags
==============
*/

bool __fastcall bdObjectStoreMetadata::setTags(bdObjectStoreMetadata *this, bdObjectStoreTag *tags, unsigned int numTags)
{
  return ?setTags@bdObjectStoreMetadata@@QEAA_NPEAVbdObjectStoreTag@@I@Z(this, tags, numTags);
}

/*
==============
bdObjectStoreMetadata::bdObjectStoreMetadata
==============
*/

void __fastcall bdObjectStoreMetadata::bdObjectStoreMetadata(bdObjectStoreMetadata *this, const bdObjectStoreObjectID *objectID, const char *const contentChecksum, const __int64 expiresOn, const bdObjectStoreACL *acl, const unsigned __int8 *extraData, unsigned int extraDataSize, const char *const category, bdObjectStoreTag *tags, unsigned int numTags)
{
  ??0bdObjectStoreMetadata@@QEAA@AEBVbdObjectStoreObjectID@@QEBD_JAEBVbdObjectStoreACL@@PEBEI1PEAVbdObjectStoreTag@@I@Z(this, objectID, contentChecksum, expiresOn, acl, extraData, extraDataSize, category, tags, numTags);
}

/*
==============
bdObjectStoreMetadata::getStatistic
==============
*/

const bdObjectStoreStatistic *__fastcall bdObjectStoreMetadata::getStatistic(bdObjectStoreMetadata *this, const bdObjectStoreStatistic *result, bdObjectStoreStatistic::bdObjectStoreStatisticType statisticType)
{
  return ?getStatistic@bdObjectStoreMetadata@@QEBA?BVbdObjectStoreStatistic@@W4bdObjectStoreStatisticType@2@@Z(this, result, statisticType);
}

/*
==============
bdObjectStoreMetadata::reset
==============
*/

void __fastcall bdObjectStoreMetadata::reset(bdObjectStoreMetadata *this)
{
  ?reset@bdObjectStoreMetadata@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreMetadata::hasTags
==============
*/

bool __fastcall bdObjectStoreMetadata::hasTags(bdObjectStoreMetadata *this)
{
  return ?hasTags@bdObjectStoreMetadata@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreMetadata::getContentLength
==============
*/

unsigned __int64 __fastcall bdObjectStoreMetadata::getContentLength(bdObjectStoreMetadata *this)
{
  return ?getContentLength@bdObjectStoreMetadata@@QEBA_KXZ(this);
}

/*
==============
bdObjectStoreMetadata::getContext
==============
*/

const char *__fastcall bdObjectStoreMetadata::getContext(bdObjectStoreMetadata *this)
{
  return ?getContext@bdObjectStoreMetadata@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreMetadata::getContentURL
==============
*/

const char *__fastcall bdObjectStoreMetadata::getContentURL(bdObjectStoreMetadata *this)
{
  return ?getContentURL@bdObjectStoreMetadata@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreMetadata::getModified
==============
*/

__int64 __fastcall bdObjectStoreMetadata::getModified(bdObjectStoreMetadata *this)
{
  return ?getModified@bdObjectStoreMetadata@@QEBA_JXZ(this);
}

/*
==============
bdObjectStoreMetadata::bdObjectStoreMetadata
==============
*/

void __fastcall bdObjectStoreMetadata::bdObjectStoreMetadata(bdObjectStoreMetadata *this, const bdObjectStoreMetadata *__that)
{
  ??0bdObjectStoreMetadata@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdObjectStoreMetadata::bdObjectStoreMetadata
==============
*/

void __fastcall bdObjectStoreMetadata::bdObjectStoreMetadata(bdObjectStoreMetadata *this, const bdObjectStoreObjectID *objectID)
{
  ??0bdObjectStoreMetadata@@QEAA@AEBVbdObjectStoreObjectID@@@Z(this, objectID);
}

/*
==============
bdObjectStoreMetadata::getTags
==============
*/

const bdObjectStoreTag *__fastcall bdObjectStoreMetadata::getTags(bdObjectStoreMetadata *this)
{
  return ?getTags@bdObjectStoreMetadata@@QEBAPEBVbdObjectStoreTag@@XZ(this);
}

/*
==============
bdObjectStoreMetadata::getCreated
==============
*/

__int64 __fastcall bdObjectStoreMetadata::getCreated(bdObjectStoreMetadata *this)
{
  return ?getCreated@bdObjectStoreMetadata@@QEBA_JXZ(this);
}

/*
==============
bdObjectStoreMetadata::deserializeStatisticsFromJSON
==============
*/

bool __fastcall bdObjectStoreMetadata::deserializeStatisticsFromJSON(bdObjectStoreMetadata *this, bdJSONDeserializer *json)
{
  return ?deserializeStatisticsFromJSON@bdObjectStoreMetadata@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreMetadata::getObjectID
==============
*/

const bdObjectStoreObjectID *__fastcall bdObjectStoreMetadata::getObjectID(bdObjectStoreMetadata *this)
{
  return ?getObjectID@bdObjectStoreMetadata@@QEBAAEBVbdObjectStoreObjectID@@XZ(this);
}

/*
==============
bdObjectStoreMetadata::bdObjectStoreMetadata
==============
*/

void __fastcall bdObjectStoreMetadata::bdObjectStoreMetadata(bdObjectStoreMetadata *this)
{
  ??0bdObjectStoreMetadata@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreMetadata::setStatistic
==============
*/

bool __fastcall bdObjectStoreMetadata::setStatistic(bdObjectStoreMetadata *this, bdObjectStoreStatistic statistic)
{
  return ?setStatistic@bdObjectStoreMetadata@@QEAA_NVbdObjectStoreStatistic@@@Z(this, statistic);
}

/*
==============
bdObjectStoreMetadata::getExtraDataSize
==============
*/

unsigned int __fastcall bdObjectStoreMetadata::getExtraDataSize(bdObjectStoreMetadata *this)
{
  return ?getExtraDataSize@bdObjectStoreMetadata@@QEBAIXZ(this);
}

/*
==============
bdObjectStoreMetadata::getSummaryContentLength
==============
*/

unsigned __int64 __fastcall bdObjectStoreMetadata::getSummaryContentLength(bdObjectStoreMetadata *this)
{
  return ?getSummaryContentLength@bdObjectStoreMetadata@@QEBA_KXZ(this);
}

/*
==============
bdObjectStoreMetadata::getObjectVersion
==============
*/

const char *__fastcall bdObjectStoreMetadata::getObjectVersion(bdObjectStoreMetadata *this)
{
  return ?getObjectVersion@bdObjectStoreMetadata@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreMetadata::serializeTagsToHTTPHeader
==============
*/

bool __fastcall bdObjectStoreMetadata::serializeTagsToHTTPHeader(bdObjectStoreMetadata *this, bdObjectStoreHTTPHeader *header)
{
  return ?serializeTagsToHTTPHeader@bdObjectStoreMetadata@@QEBA_NPEAVbdObjectStoreHTTPHeader@@@Z(this, header);
}

/*
==============
bdObjectStoreMetadata::serializeToJSON
==============
*/

bool __fastcall bdObjectStoreMetadata::serializeToJSON(bdObjectStoreMetadata *this, bdJSONSerializer *json, const char *fieldName, bool includeOwnerType)
{
  return ?serializeToJSON@bdObjectStoreMetadata@@QEBA_NPEAVbdJSONSerializer@@PEBD_N@Z(this, json, fieldName, includeOwnerType);
}

/*
==============
bdObjectStoreMetadata::deserializeFromJSON
==============
*/

bool __fastcall bdObjectStoreMetadata::deserializeFromJSON(bdObjectStoreMetadata *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  return ?deserializeFromJSON@bdObjectStoreMetadata@@QEAA_NPEAVbdJSONDeserializer@@W4bdObjectStoreObjectIDOwnerType@bdObjectStoreObjectID@@@Z(this, json, ownerType);
}

/*
==============
bdObjectStoreMetadata::getSummaryChecksum
==============
*/

const char *__fastcall bdObjectStoreMetadata::getSummaryChecksum(bdObjectStoreMetadata *this)
{
  return ?getSummaryChecksum@bdObjectStoreMetadata@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreMetadata::serializeToHTTPHeader
==============
*/

bool __fastcall bdObjectStoreMetadata::serializeToHTTPHeader(bdObjectStoreMetadata *this, bdObjectStoreHTTPHeader *header)
{
  return ?serializeToHTTPHeader@bdObjectStoreMetadata@@QEBA_NPEAVbdObjectStoreHTTPHeader@@@Z(this, header);
}

/*
==============
bdObjectStoreMetadata::deserializeTagsFromJSON
==============
*/

bool __fastcall bdObjectStoreMetadata::deserializeTagsFromJSON(bdObjectStoreMetadata *this, bdJSONDeserializer *json)
{
  return ?deserializeTagsFromJSON@bdObjectStoreMetadata@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreMetadata::serializeTagsToJSON
==============
*/

bool __fastcall bdObjectStoreMetadata::serializeTagsToJSON(bdObjectStoreMetadata *this, bdJSONSerializer *json, const char *fieldName)
{
  return ?serializeTagsToJSON@bdObjectStoreMetadata@@QEBA_NPEAVbdJSONSerializer@@PEBD@Z(this, json, fieldName);
}

/*
==============
bdObjectStoreMetadata::getACL
==============
*/

const bdObjectStoreACL *__fastcall bdObjectStoreMetadata::getACL(bdObjectStoreMetadata *this)
{
  return ?getACL@bdObjectStoreMetadata@@QEBAAEBVbdObjectStoreACL@@XZ(this);
}

/*
==============
bdObjectStoreMetadata::getExpiresOn
==============
*/

__int64 __fastcall bdObjectStoreMetadata::getExpiresOn(bdObjectStoreMetadata *this)
{
  return ?getExpiresOn@bdObjectStoreMetadata@@QEBA_JXZ(this);
}

/*
==============
bdObjectStoreMetadata::getExtraData
==============
*/

const unsigned __int8 *__fastcall bdObjectStoreMetadata::getExtraData(bdObjectStoreMetadata *this)
{
  return ?getExtraData@bdObjectStoreMetadata@@QEBAPEBEXZ(this);
}

/*
==============
bdObjectStoreMetadata::getContentChecksum
==============
*/

const char *__fastcall bdObjectStoreMetadata::getContentChecksum(bdObjectStoreMetadata *this)
{
  return ?getContentChecksum@bdObjectStoreMetadata@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreMetadata::getTagsSize
==============
*/

unsigned int __fastcall bdObjectStoreMetadata::getTagsSize(bdObjectStoreMetadata *this)
{
  return ?getTagsSize@bdObjectStoreMetadata@@QEBAIXZ(this);
}

/*
==============
bdObjectStoreMetadata::setCategory
==============
*/

bool __fastcall bdObjectStoreMetadata::setCategory(bdObjectStoreMetadata *this, const char *category)
{
  return ?setCategory@bdObjectStoreMetadata@@QEAA_NPEBD@Z(this, category);
}

/*
==============
bdObjectStoreMetadata::getCategory
==============
*/

const char *__fastcall bdObjectStoreMetadata::getCategory(bdObjectStoreMetadata *this)
{
  return ?getCategory@bdObjectStoreMetadata@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreMetadata::bdObjectStoreMetadata
==============
*/
void bdObjectStoreMetadata::bdObjectStoreMetadata(bdObjectStoreMetadata *this, const bdObjectStoreObjectID *objectID)
{
  _RDI = objectID;
  _RSI = this;
  bdObjectStoreObjectID::bdObjectStoreObjectID(&this->m_objectID);
  bdObjectStoreACL::bdObjectStoreACL(&_RSI->m_acl);
  _RSI->m_tags.m_data = NULL;
  *(_QWORD *)&_RSI->m_tags.m_capacity = 0i64;
  bdObjectStoreObjectStatistics::bdObjectStoreObjectStatistics(&_RSI->m_statistics);
  bdObjectStoreMetadata::reset(_RSI);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsi+10h], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rsi+30h], ymm1
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rsi+50h], ymm0
    vmovups xmm1, xmmword ptr [rdi+60h]
    vmovups xmmword ptr [rsi+70h], xmm1
  }
}

/*
==============
bdObjectStoreMetadata::bdObjectStoreMetadata
==============
*/
void bdObjectStoreMetadata::bdObjectStoreMetadata(bdObjectStoreMetadata *this, const bdObjectStoreObjectID *objectID, const char *const contentChecksum, const __int64 expiresOn, const bdObjectStoreACL *acl, const unsigned __int8 *extraData, unsigned int extraDataSize, const char *const category, bdObjectStoreTag *tags, unsigned int numTags)
{
  bdObjectStoreMetadata *v11; 
  _BYTE *v16; 
  unsigned __int64 v17; 
  _BYTE *v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  unsigned int m_capacity; 
  __int64 v23; 
  unsigned int m_size; 
  __int64 v28; 
  __int64 v29; 

  v11 = this;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx+10h], ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx+30h], ymm1
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups ymmword ptr [rcx+50h], ymm0
    vmovups xmm1, xmmword ptr [rdx+60h]
    vmovups xmmword ptr [rcx+70h], xmm1
  }
  this->m_expiresOn = expiresOn;
  this->m_acl = (bdObjectStoreACL)acl->m_aclType;
  this->m_summaryContentLength = 0i64;
  this->m_hasSummary = 0;
  this->m_tags.m_data = NULL;
  *(_QWORD *)&this->m_tags.m_capacity = 0i64;
  bdObjectStoreObjectStatistics::bdObjectStoreObjectStatistics(&this->m_statistics);
  v16 = memchr_0(contentChecksum, 0, 0x21ui64);
  v17 = 33i64;
  if ( v16 )
    v17 = v16 - contentChecksum;
  bdHandleAssert(v17 < 0x21, "(bdStrnlen(contentChecksum, BD_OBJECTSTORE_MAX_CHECKSUM_LENGTH) < BD_OBJECTSTORE_MAX_CHECKSUM_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::bdObjectStoreMetadata", 0x24u, "Checksum is too long. Max length is %d", 32);
  bdStrlcpy(v11->m_contentChecksum, contentChecksum, 0x21ui64);
  *(_QWORD *)v11->m_context = 0i64;
  *(_QWORD *)&v11->m_context[8] = 0i64;
  *(_QWORD *)v11->m_objectVersion = 0i64;
  *(_QWORD *)&v11->m_objectVersion[8] = 0i64;
  *(_QWORD *)&v11->m_objectVersion[16] = 0i64;
  *(_QWORD *)&v11->m_objectVersion[24] = 0i64;
  v11->m_objectVersion[32] = 0;
  memset_0(v11->m_contentURL, 0, sizeof(v11->m_contentURL));
  LODWORD(v28) = 2048;
  bdHandleAssert(extraDataSize <= 0x800, "extraDataSize <= BD_OBJECTSTORE_MAX_EXTRA_DATA_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::bdObjectStoreMetadata", 0x2Bu, "extraDataSize > %d", v28);
  v11->m_extraDataSize = extraDataSize;
  memset_0(v11->m_extraData, 0, sizeof(v11->m_extraData));
  if ( extraData )
    memcpy_0(v11->m_extraData, extraData, extraDataSize);
  if ( category )
  {
    v18 = memchr_0(category, 0, 0x41ui64);
    v19 = 65i64;
    if ( v18 )
      v19 = v18 - category;
    LODWORD(v29) = 64;
    bdHandleAssert(v19 < 0x41, "(bdStrnlen(category, BD_OBJECTSTORE_MAX_CATEGORY_LENGTH) < BD_OBJECTSTORE_MAX_CATEGORY_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::bdObjectStoreMetadata", 0x38u, "Category is too long. Max length is %d", v29);
    bdStrlcpy(v11->m_category, category, 0x41ui64);
  }
  else
  {
    *(_QWORD *)v11->m_category = 0i64;
    *(_QWORD *)&v11->m_category[8] = 0i64;
    *(_QWORD *)&v11->m_category[16] = 0i64;
    *(_QWORD *)&v11->m_category[24] = 0i64;
    *(_QWORD *)&v11->m_category[32] = 0i64;
    *(_QWORD *)&v11->m_category[40] = 0i64;
    *(_QWORD *)&v11->m_category[48] = 0i64;
    *(_QWORD *)&v11->m_category[56] = 0i64;
    v11->m_category[64] = 0;
  }
  v11->m_contentLength = 0i64;
  v11->m_created = 0i64;
  v11->m_modified = 0i64;
  *(_QWORD *)v11->m_summaryChecksum = 0i64;
  *(_QWORD *)&v11->m_summaryChecksum[8] = 0i64;
  *(_QWORD *)&v11->m_summaryChecksum[16] = 0i64;
  *(_QWORD *)&v11->m_summaryChecksum[24] = 0i64;
  v11->m_summaryChecksum[32] = 0;
  if ( numTags )
  {
    v20 = 150;
    bdHandleAssert(numTags <= 0x96, "!tooManyTags", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::setTags", 0xE2u, "Too many tags were passed in.");
    if ( numTags < 0x96 )
      v20 = numTags;
    m_capacity = v11->m_tags.m_capacity;
    if ( m_capacity < v20 )
      bdArray<bdObjectStoreTag>::increaseCapacity(&v11->m_tags, v20 - m_capacity);
    _RBX = tags;
    v23 = v20;
    m_size = v11->m_tags.m_size;
    do
    {
      if ( m_size == v11->m_tags.m_capacity )
      {
        bdArray<bdObjectStoreTag>::increaseCapacity(&v11->m_tags, 1u);
        m_size = v11->m_tags.m_size;
      }
      _RDX = (__int64)v11->m_tags.m_data[m_size].m_key;
      if ( _RDX )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx]
          vmovups ymmword ptr [rdx], ymm0
          vmovups ymm1, ymmword ptr [rbx+20h]
          vmovups ymmword ptr [rdx+20h], ymm1
        }
        *(_WORD *)(_RDX + 64) = *(_WORD *)&_RBX->m_value[31];
        m_size = v11->m_tags.m_size;
      }
      v11->m_tags.m_size = ++m_size;
      ++_RBX;
      --v23;
    }
    while ( v23 );
    v11->m_numTags = v20;
  }
  else
  {
    v11->m_numTags = 0;
  }
}

/*
==============
bdObjectStoreMetadata::bdObjectStoreMetadata
==============
*/
void bdObjectStoreMetadata::bdObjectStoreMetadata(bdObjectStoreMetadata *this)
{
  bdObjectStoreObjectID::bdObjectStoreObjectID(&this->m_objectID);
  bdObjectStoreACL::bdObjectStoreACL(&this->m_acl);
  this->m_tags.m_data = NULL;
  *(_QWORD *)&this->m_tags.m_capacity = 0i64;
  bdObjectStoreObjectStatistics::bdObjectStoreObjectStatistics(&this->m_statistics);
  bdObjectStoreMetadata::reset(this);
}

/*
==============
bdObjectStoreMetadata::deserializeFromJSON
==============
*/
char bdObjectStoreMetadata::deserializeFromJSON(bdObjectStoreMetadata *this, bdJSONDeserializer *json, bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType ownerType)
{
  bdObjectStoreACL::bdObjectStoreACLType *v6; 
  bool v7; 
  bool UInt16; 
  _BYTE *v9; 
  signed __int64 v10; 
  bdObjectStoreACL v12; 
  char value[112]; 
  char Buf[2736]; 

  bdHandleAssert(json != NULL, "json != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeFromJSON", 0x178u, "bdJSONDeserializer is NULL.");
  if ( json->m_type != BD_JSON_OBJECT )
    goto LABEL_44;
  if ( !bdJSONDeserializer::getString(json, "checksum", this->m_contentChecksum, 0x21u) )
    goto LABEL_44;
  if ( !bdJSONDeserializer::getString(json, "objectVersion", this->m_objectVersion, 0x21u) )
    goto LABEL_44;
  if ( !bdJSONDeserializer::getInt64(json, "expiresOn", &this->m_expiresOn) )
    goto LABEL_44;
  if ( !bdJSONDeserializer::getInt64(json, "created", &this->m_created) )
    goto LABEL_44;
  if ( !bdJSONDeserializer::getInt64(json, "modified", &this->m_modified) )
    goto LABEL_44;
  if ( !bdJSONDeserializer::getString(json, "acl", value, 0x64u) )
    goto LABEL_44;
  if ( !bdObjectStoreACL::validateString(value) )
    goto LABEL_44;
  bdObjectStoreACL::bdObjectStoreACL(&v12, value);
  this->m_acl.m_aclType = *v6;
  bdObjectStoreACL::~bdObjectStoreACL(&v12);
  if ( !bdJSONDeserializer::getUInt64(json, "contentLength", &this->m_contentLength) || !bdJSONDeserializer::getString(json, "context", this->m_context, 0x10u) || !bdObjectStoreObjectID::deserializeFromMetadataJSON(&this->m_objectID, json, ownerType) || bdJSONDeserializer::hasKey(json, "contentURL") && !bdJSONDeserializer::getString(json, "contentURL", this->m_contentURL, 0x400u) )
    goto LABEL_44;
  if ( !bdJSONDeserializer::getNull(json, "category") && !bdJSONDeserializer::getString(json, "category", this->m_category, 0x41u) )
    goto LABEL_44;
  v7 = 1;
  if ( bdJSONDeserializer::hasKey(json, "extraData") )
  {
    if ( bdJSONDeserializer::getNull(json, "extraDataSize") && bdJSONDeserializer::getNull(json, "extraData") )
    {
      this->m_extraDataSize = 0;
      goto LABEL_33;
    }
    if ( bdJSONDeserializer::getNull(json, "extraDataSize") )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeFromJSON", 0x1A8u, "Extra data in JSON but no Size field.");
LABEL_22:
      this->m_extraDataSize = 0;
      memset_0(this->m_extraData, 0, sizeof(this->m_extraData));
      v7 = 1;
      goto LABEL_33;
    }
    if ( bdJSONDeserializer::getNull(json, "extraData") )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeFromJSON", 0x1AFu, "Extra data size in JSON but no extraData field.");
      goto LABEL_22;
    }
    LOWORD(v12.m_aclType) = 0;
    UInt16 = bdJSONDeserializer::getUInt16(json, "extraDataSize", (unsigned __int16 *)&v12);
    this->m_extraDataSize = LOWORD(v12.m_aclType);
    v7 = UInt16 && bdJSONDeserializer::getString(json, "extraData", Buf, 0xAADu);
    v9 = memchr_0(Buf, 0, 0xAADui64);
    if ( v9 )
      v10 = v9 - Buf;
    else
      LODWORD(v10) = 2733;
    bdBase64::decode(Buf, v10, this->m_extraData, 0x800u);
    if ( !v7 )
      goto LABEL_45;
  }
LABEL_33:
  if ( bdJSONDeserializer::hasKey(json, "hasSummary") )
  {
    if ( !bdJSONDeserializer::getBoolean(json, "hasSummary", &this->m_hasSummary) )
      goto LABEL_44;
    v7 = 1;
  }
  if ( !bdJSONDeserializer::hasKey(json, "summaryChecksum") || bdJSONDeserializer::getNull(json, "summaryChecksum") )
    goto LABEL_40;
  if ( bdJSONDeserializer::getString(json, "summaryChecksum", this->m_summaryChecksum, 0x21u) )
  {
    v7 = 1;
LABEL_40:
    if ( !bdJSONDeserializer::hasKey(json, "summaryContentLength") || bdJSONDeserializer::getNull(json, "summaryContentLength") )
      return v7;
    if ( bdJSONDeserializer::getUInt64(json, "summaryContentLength", &this->m_summaryContentLength) )
      return 1;
  }
LABEL_44:
  v7 = 0;
LABEL_45:
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeFromJSON", 0x1D4u, "Unable to parse JSON response for bdObjectStoreMetadata");
  return v7;
}

/*
==============
bdObjectStoreMetadata::deserializeStatisticsFromJSON
==============
*/
bool bdObjectStoreMetadata::deserializeStatisticsFromJSON(bdObjectStoreMetadata *this, bdJSONDeserializer *json)
{
  return bdObjectStoreObjectStatistics::deserializeStatisticsFromJSON(&this->m_statistics, json);
}

/*
==============
bdObjectStoreMetadata::deserializeTagsFromJSON
==============
*/
_BOOL8 bdObjectStoreMetadata::deserializeTagsFromJSON(bdObjectStoreMetadata *this, bdJSONDeserializer *json)
{
  bdJSONType m_type; 
  bool v5; 
  unsigned int m_count; 
  unsigned int v7; 
  bool v8; 
  bool v9; 
  unsigned int v10; 
  unsigned int m_capacity; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int m_size; 
  unsigned int v19; 
  __int64 v24; 
  bdJSONDeserializer value; 
  bdJSONDeserializer valueJson; 
  __int64 v28; 
  bdObjectStoreTag v29; 

  v28 = -2i64;
  bdHandleAssert(json != NULL, "json != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeTagsFromJSON", 0x109u, "bdJSONDeserializer is NULL.");
  m_type = json->m_type;
  v5 = json->m_type == BD_JSON_ARRAY;
  m_count = json->m_count;
  v7 = 20;
  v8 = m_count < 0x14;
  if ( m_count > 0x14 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeTagsFromJSON", 0x110u, "Too many tags to deserialize. Falling back to deserializing [%d] tags", 20);
    m_count = json->m_count;
    v8 = m_count < 0x14;
  }
  if ( v8 )
    v7 = m_count;
  v9 = !this->m_tags.m_size || !this->m_numTags;
  bdHandleAssert(v9, "!hasTags()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeTagsFromJSON", 0x118u, "Metadata Object already has objects.");
  v10 = 0;
  if ( this->m_tags.m_size && this->m_numTags )
  {
    bdMemory::deallocate(this->m_tags.m_data);
    this->m_tags.m_data = NULL;
    *(_QWORD *)&this->m_tags.m_capacity = 0i64;
  }
  m_capacity = this->m_tags.m_capacity;
  if ( m_capacity < v7 )
    bdArray<bdObjectStoreTag>::increaseCapacity(&this->m_tags, v7 - m_capacity);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  v12 = 0;
  if ( m_type == BD_JSON_ARRAY )
  {
    while ( v10 < v7 && v12 < 0x96 )
    {
      if ( v5 && bdJSONDeserializer::getObject(json, v10, &value) )
      {
        if ( bdJSONDeserializer::hasKey(&value, "values") )
        {
          bdJSONDeserializer::bdJSONDeserializer(&valueJson);
          if ( bdJSONDeserializer::getArray(&value, "values", &valueJson) && (v13 = valueJson.m_count) != 0 )
          {
            v5 = 1;
            v14 = 0;
            while ( v14 < v13 && v12 < 0x96 )
            {
              bdObjectStoreTag::bdObjectStoreTag(&v29);
              if ( bdObjectStoreTag::deserializeFromJSON(&v29, &value, &valueJson, v14) )
              {
                v5 = 1;
                m_size = this->m_tags.m_size;
                if ( m_size == this->m_tags.m_capacity )
                {
                  bdArray<bdObjectStoreTag>::increaseCapacity(&this->m_tags, 1u);
                  m_size = this->m_tags.m_size;
                }
                _RDX = &this->m_tags.m_data[m_size];
                if ( _RDX )
                {
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [rbp+57h+var_90.m_key]
                    vmovups ymmword ptr [rdx], ymm0
                    vmovups ymm1, ymmword ptr [rbp+57h+var_90.m_key+20h]
                    vmovups ymmword ptr [rdx+20h], ymm1
                  }
                  *(_WORD *)&_RDX->m_value[31] = *(_WORD *)&v29.m_value[31];
                  m_size = this->m_tags.m_size;
                }
                this->m_tags.m_size = m_size + 1;
                ++v12;
              }
              else
              {
                v5 = 0;
              }
              ++v14;
              if ( !v5 )
                break;
              v13 = valueJson.m_count;
            }
          }
          else
          {
            v5 = 0;
          }
          bdJSONDeserializer::~bdJSONDeserializer(&valueJson);
          goto LABEL_45;
        }
        if ( bdJSONDeserializer::hasKey(&value, (const char *const)&stru_143CE7590) )
        {
          bdObjectStoreTag::bdObjectStoreTag(&v29);
          if ( bdObjectStoreTag::deserializeFromJSON(&v29, &value) )
          {
            v5 = 1;
            v19 = this->m_tags.m_size;
            if ( v19 == this->m_tags.m_capacity )
            {
              bdArray<bdObjectStoreTag>::increaseCapacity(&this->m_tags, 1u);
              v19 = this->m_tags.m_size;
            }
            _RDX = &this->m_tags.m_data[v19];
            if ( _RDX )
            {
              __asm
              {
                vmovups ymm0, ymmword ptr [rbp+57h+var_90.m_key]
                vmovups ymmword ptr [rdx], ymm0
                vmovups ymm1, ymmword ptr [rbp+57h+var_90.m_key+20h]
                vmovups ymmword ptr [rdx+20h], ymm1
              }
              *(_WORD *)&_RDX->m_value[31] = *(_WORD *)&v29.m_value[31];
              v19 = this->m_tags.m_size;
            }
            this->m_tags.m_size = v19 + 1;
            ++v12;
            goto LABEL_45;
          }
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeTagsFromJSON", 0x15Eu, "Tag was missing \"value\" and \"values\" key");
        }
      }
      v5 = 0;
LABEL_45:
      ++v10;
      if ( !v5 )
        goto LABEL_46;
    }
  }
  if ( v5 && v10 < v7 && v12 >= 0x96 )
  {
    LODWORD(v24) = 150;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeTagsFromJSON", 0x168u, "Too many tags to deserialize. Deserialized [%d] tags", v24);
  }
LABEL_46:
  this->m_numTags = v12;
  if ( !v5 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::deserializeTagsFromJSON", 0x16Fu, "Unable to deserialize tags from JSON.");
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return v5;
}

/*
==============
bdObjectStoreMetadata::getACL
==============
*/
bdObjectStoreACL *bdObjectStoreMetadata::getACL(bdObjectStoreMetadata *this)
{
  return &this->m_acl;
}

/*
==============
bdObjectStoreMetadata::getCategory
==============
*/
char *bdObjectStoreMetadata::getCategory(bdObjectStoreMetadata *this)
{
  return this->m_category;
}

/*
==============
bdObjectStoreMetadata::getContentChecksum
==============
*/
char *bdObjectStoreMetadata::getContentChecksum(bdObjectStoreMetadata *this)
{
  return this->m_contentChecksum;
}

/*
==============
bdObjectStoreMetadata::getContentLength
==============
*/
unsigned __int64 bdObjectStoreMetadata::getContentLength(bdObjectStoreMetadata *this)
{
  return this->m_contentLength;
}

/*
==============
bdObjectStoreMetadata::getContentURL
==============
*/
char *bdObjectStoreMetadata::getContentURL(bdObjectStoreMetadata *this)
{
  return this->m_contentURL;
}

/*
==============
bdObjectStoreMetadata::getContext
==============
*/
bdObjectStoreMetadata *bdObjectStoreMetadata::getContext(bdObjectStoreMetadata *this)
{
  return this;
}

/*
==============
bdObjectStoreMetadata::getCreated
==============
*/
__int64 bdObjectStoreMetadata::getCreated(bdObjectStoreMetadata *this)
{
  return this->m_created;
}

/*
==============
bdObjectStoreMetadata::getExpiresOn
==============
*/
__int64 bdObjectStoreMetadata::getExpiresOn(bdObjectStoreMetadata *this)
{
  return this->m_expiresOn;
}

/*
==============
bdObjectStoreMetadata::getExtraData
==============
*/
unsigned __int8 *bdObjectStoreMetadata::getExtraData(bdObjectStoreMetadata *this)
{
  return this->m_extraData;
}

/*
==============
bdObjectStoreMetadata::getExtraDataSize
==============
*/
__int64 bdObjectStoreMetadata::getExtraDataSize(bdObjectStoreMetadata *this)
{
  return this->m_extraDataSize;
}

/*
==============
bdObjectStoreMetadata::getModified
==============
*/
__int64 bdObjectStoreMetadata::getModified(bdObjectStoreMetadata *this)
{
  return this->m_modified;
}

/*
==============
bdObjectStoreMetadata::getObjectID
==============
*/
bdObjectStoreObjectID *bdObjectStoreMetadata::getObjectID(bdObjectStoreMetadata *this)
{
  return &this->m_objectID;
}

/*
==============
bdObjectStoreMetadata::getObjectVersion
==============
*/
char *bdObjectStoreMetadata::getObjectVersion(bdObjectStoreMetadata *this)
{
  return this->m_objectVersion;
}

/*
==============
bdObjectStoreMetadata::getStatistic
==============
*/
const bdObjectStoreStatistic *bdObjectStoreMetadata::getStatistic(bdObjectStoreMetadata *this, const bdObjectStoreStatistic *result, bdObjectStoreStatistic::bdObjectStoreStatisticType statisticType)
{
  bdObjectStoreObjectStatistics::getStatistic(&this->m_statistics, result, statisticType);
  return result;
}

/*
==============
bdObjectStoreMetadata::getSummaryChecksum
==============
*/
char *bdObjectStoreMetadata::getSummaryChecksum(bdObjectStoreMetadata *this)
{
  return this->m_summaryChecksum;
}

/*
==============
bdObjectStoreMetadata::getSummaryContentLength
==============
*/
unsigned __int64 bdObjectStoreMetadata::getSummaryContentLength(bdObjectStoreMetadata *this)
{
  return this->m_summaryContentLength;
}

/*
==============
bdObjectStoreMetadata::getTags
==============
*/
bdObjectStoreTag *bdObjectStoreMetadata::getTags(bdObjectStoreMetadata *this)
{
  return this->m_tags.m_data;
}

/*
==============
bdObjectStoreMetadata::getTagsSize
==============
*/
__int64 bdObjectStoreMetadata::getTagsSize(bdObjectStoreMetadata *this)
{
  return this->m_numTags;
}

/*
==============
bdObjectStoreMetadata::hasSummary
==============
*/
_BOOL8 bdObjectStoreMetadata::hasSummary(bdObjectStoreMetadata *this)
{
  return this->m_hasSummary;
}

/*
==============
bdObjectStoreMetadata::hasTags
==============
*/
bool bdObjectStoreMetadata::hasTags(bdObjectStoreMetadata *this)
{
  return this->m_tags.m_size && this->m_numTags;
}

/*
==============
bdObjectStoreMetadata::reset
==============
*/
void bdObjectStoreMetadata::reset(bdObjectStoreMetadata *this)
{
  *(_QWORD *)this->m_context = 0i64;
  *(_QWORD *)&this->m_context[8] = 0i64;
  *(_QWORD *)this->m_contentChecksum = 0i64;
  *(_QWORD *)&this->m_contentChecksum[8] = 0i64;
  *(_QWORD *)&this->m_contentChecksum[16] = 0i64;
  *(_QWORD *)&this->m_contentChecksum[24] = 0i64;
  this->m_contentChecksum[32] = 0;
  *(_QWORD *)this->m_objectVersion = 0i64;
  *(_QWORD *)&this->m_objectVersion[8] = 0i64;
  *(_QWORD *)&this->m_objectVersion[16] = 0i64;
  *(_QWORD *)&this->m_objectVersion[24] = 0i64;
  this->m_objectVersion[32] = 0;
  memset_0(this->m_contentURL, 0, sizeof(this->m_contentURL));
  memset_0(this->m_category, 0, 0x841ui64);
  *(_QWORD *)this->m_summaryChecksum = 0i64;
  *(_QWORD *)&this->m_summaryChecksum[8] = 0i64;
  *(_QWORD *)&this->m_summaryChecksum[16] = 0i64;
  *(_QWORD *)&this->m_summaryChecksum[24] = 0i64;
  *(_WORD *)&this->m_summaryChecksum[32] = 0;
  this->m_extraDataSize = 0;
  this->m_expiresOn = 0i64;
  this->m_created = 0i64;
  this->m_modified = 0i64;
  this->m_contentLength = 0i64;
  this->m_summaryContentLength = 0i64;
  bdObjectStoreObjectID::reset(&this->m_objectID);
  bdObjectStoreACL::reset(&this->m_acl);
  bdMemory::deallocate(this->m_tags.m_data);
  this->m_tags.m_data = NULL;
  *(_QWORD *)&this->m_tags.m_capacity = 0i64;
  this->m_numTags = 0;
  bdObjectStoreObjectStatistics::reset(&this->m_statistics);
}

/*
==============
bdObjectStoreMetadata::serializeTagsToHTTPHeader
==============
*/
char bdObjectStoreMetadata::serializeTagsToHTTPHeader(bdObjectStoreMetadata *this, bdObjectStoreHTTPHeader *header)
{
  bool v4; 
  unsigned __int64 v6; 
  size_t v7; 
  unsigned int v8; 
  char v9; 
  bdJSONSerializer json; 

  v4 = this->m_tags.m_size && this->m_numTags;
  bdHandleAssert(v4, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::serializeTagsToHTTPHeader", 0x1DDu, "Metadata tried to serialize tags to http header when it didn't have tags");
  if ( !v4 )
    return 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  do
    ++v6;
  while ( aDwObjectstoreT[v6] );
  if ( header != (bdObjectStoreHTTPHeader *)-16i64 )
  {
    v7 = 99i64;
    if ( v6 < 0x63 )
      v7 = v6;
    memcpy_0(&header->__vftable + 2, "Dw-Objectstore-Tags", v7);
    *((_BYTE *)&header->__vftable + v7 + 16) = 0;
  }
  bdJSONSerializer::bdJSONSerializer(&json, header->m_value, 0x1000u);
  v8 = 0;
  if ( !bdJSONSerializer::writeBeginArray(&json) )
    goto LABEL_19;
  while ( v8 < this->m_numTags )
  {
    bdHandleAssert(v8 < this->m_tags.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreTag>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    if ( !bdObjectStoreTag::serializeToJSON(&this->m_tags.m_data[v8], &json) )
      goto LABEL_19;
    ++v8;
  }
  if ( bdJSONSerializer::writeEndArray(&json) )
  {
    v9 = 1;
  }
  else
  {
LABEL_19:
    v9 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::serializeTagsToJSON", 0x202u, "Unable to generate Tags JSON.");
  }
  bdJSONSerializer::~bdJSONSerializer(&json);
  return v9;
}

/*
==============
bdObjectStoreMetadata::serializeTagsToJSON
==============
*/
char bdObjectStoreMetadata::serializeTagsToJSON(bdObjectStoreMetadata *this, bdJSONSerializer *json, const char *fieldName)
{
  bool v5; 
  unsigned int v6; 

  if ( fieldName )
    v5 = bdJSONSerializer::writeBeginArray(json, fieldName);
  else
    v5 = bdJSONSerializer::writeBeginArray(json);
  v6 = 0;
  if ( v5 )
  {
    while ( v6 < this->m_numTags )
    {
      bdHandleAssert(v6 < this->m_tags.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreTag>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      if ( !bdObjectStoreTag::serializeToJSON(&this->m_tags.m_data[v6], json) )
        goto LABEL_10;
      ++v6;
    }
    if ( bdJSONSerializer::writeEndArray(json) )
      return 1;
  }
LABEL_10:
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::serializeTagsToJSON", 0x202u, "Unable to generate Tags JSON.");
  return 0;
}

/*
==============
bdObjectStoreMetadata::serializeToHTTPHeader
==============
*/
_BOOL8 bdObjectStoreMetadata::serializeToHTTPHeader(bdObjectStoreMetadata *this, bdObjectStoreHTTPHeader *header)
{
  bdObjectStoreHTTPHeader_vtbl **v4; 
  unsigned __int64 v5; 
  size_t v6; 
  bool v7; 
  bdJSONSerializer json; 

  v4 = &header->__vftable + 2;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v5 = -1i64;
  do
    ++v5;
  while ( aDwObjectstoreM[v5] );
  if ( v4 )
  {
    v6 = 99i64;
    if ( v5 < 0x63 )
      v6 = v5;
    memcpy_0(v4, "Dw-Objectstore-Metadata", v6);
    *((_BYTE *)v4 + v6) = 0;
  }
  bdJSONSerializer::bdJSONSerializer(&json, header->m_value, 0x1000u);
  v7 = bdObjectStoreMetadata::serializeToJSON(this, &json, NULL, 0);
  bdJSONSerializer::~bdJSONSerializer(&json);
  return v7;
}

/*
==============
bdObjectStoreMetadata::serializeToJSON
==============
*/
char bdObjectStoreMetadata::serializeToJSON(bdObjectStoreMetadata *this, bdJSONSerializer *json, const char *fieldName, bool includeOwnerType)
{
  bool v7; 
  const char *ObjectName; 
  const char *v9; 
  bool v10; 
  unsigned int m_extraDataSize; 
  bool v12; 
  bdObjectStoreObjectID *p_m_objectID; 
  const char *Owner; 
  char v15; 
  char ownerType[32]; 
  char dest[2736]; 

  if ( fieldName )
    v7 = bdJSONSerializer::writeBeginObject(json, fieldName);
  else
    v7 = bdJSONSerializer::writeBeginObject(json);
  v10 = 0;
  if ( v7 )
  {
    ObjectName = bdObjectStoreObjectID::getObjectName(&this->m_objectID);
    if ( bdJSONSerializer::writeString(json, (const char *)&stru_143C9A1A4, ObjectName) && bdJSONSerializer::writeInt64(json, "expiresOn", this->m_expiresOn, 0) && bdJSONSerializer::writeString(json, "checksum", this->m_contentChecksum) )
    {
      v9 = bdObjectStoreACL::serializeToString(&this->m_acl);
      if ( bdJSONSerializer::writeString(json, "acl", v9) )
        v10 = 1;
    }
  }
  if ( strncmp(this->m_objectVersion, (const char *)&queryFormat.fmt + 3, 0x21ui64) )
    v10 = v10 && bdJSONSerializer::writeString(json, "objectVersion", this->m_objectVersion);
  if ( strncmp(this->m_category, (const char *)&queryFormat.fmt + 3, 0x41ui64) )
    v10 = v10 && bdJSONSerializer::writeString(json, "category", this->m_category);
  m_extraDataSize = this->m_extraDataSize;
  if ( m_extraDataSize )
  {
    bdBase64::encode(this->m_extraData, m_extraDataSize, dest, 0xAADu);
    if ( !v10 )
    {
LABEL_28:
      p_m_objectID = &this->m_objectID;
      goto LABEL_29;
    }
    v12 = !bdJSONSerializer::writeString(json, "extraData", dest);
  }
  else
  {
    v12 = !v10;
  }
  if ( v12 )
    goto LABEL_28;
  p_m_objectID = &this->m_objectID;
  Owner = bdObjectStoreObjectID::getOwner(p_m_objectID);
  if ( bdJSONSerializer::writeString(json, "owner", Owner) )
  {
    v15 = 1;
    goto LABEL_30;
  }
LABEL_29:
  v15 = 0;
LABEL_30:
  if ( v15 && (!includeOwnerType || bdObjectStoreObjectID::getOwnerTypeString(p_m_objectID, ownerType, 0x18u) && bdJSONSerializer::writeString(json, "objectType", ownerType)) && bdJSONSerializer::writeEndObject(json) )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::serializeToJSON", 0x242u, "Unable to generate HTTP Header from bdObjectStoreMetadata");
  return 0;
}

/*
==============
bdObjectStoreMetadata::setCategory
==============
*/
char bdObjectStoreMetadata::setCategory(bdObjectStoreMetadata *this, const char *category)
{
  bdStrlcpy(this->m_category, category, 0x41ui64);
  return 1;
}

/*
==============
bdObjectStoreMetadata::setObjectID
==============
*/
char bdObjectStoreMetadata::setObjectID(bdObjectStoreMetadata *this, const bdObjectStoreObjectID *objectID)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx+10h], ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx+30h], ymm1
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups ymmword ptr [rcx+50h], ymm0
    vmovups xmm1, xmmword ptr [rdx+60h]
    vmovups xmmword ptr [rcx+70h], xmm1
  }
  return 1;
}

/*
==============
bdObjectStoreMetadata::setStatistic
==============
*/
char bdObjectStoreMetadata::setStatistic(bdObjectStoreMetadata *this, bdObjectStoreStatistic statistic)
{
  bdObjectStoreStatistic statistica; 

  statistica = statistic;
  if ( bdObjectStoreStatistic::getStatisticType(&statistica) == BD_OBJECTSTORE_STATISTIC_UNINITIALIZED )
    return 0;
  bdObjectStoreObjectStatistics::setStatistic(&this->m_statistics, statistica);
  return 1;
}

/*
==============
bdObjectStoreMetadata::setTags
==============
*/
bool bdObjectStoreMetadata::setTags(bdObjectStoreMetadata *this, bdObjectStoreTag *tags, unsigned int numTags)
{
  unsigned int v7; 
  unsigned int m_capacity; 
  unsigned int m_size; 
  __int64 v10; 

  _RDI = tags;
  if ( numTags )
  {
    v7 = 150;
    bdHandleAssert(numTags <= 0x96, "!tooManyTags", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoremetadata.cpp", "bdObjectStoreMetadata::setTags", 0xE2u, "Too many tags were passed in.");
    m_capacity = this->m_tags.m_capacity;
    if ( numTags < 0x96 )
      v7 = numTags;
    if ( m_capacity < v7 )
      bdArray<bdObjectStoreTag>::increaseCapacity(&this->m_tags, v7 - m_capacity);
    if ( v7 )
    {
      m_size = this->m_tags.m_size;
      v10 = v7;
      do
      {
        if ( m_size == this->m_tags.m_capacity )
        {
          bdArray<bdObjectStoreTag>::increaseCapacity(&this->m_tags, 1u);
          m_size = this->m_tags.m_size;
        }
        _RDX = &this->m_tags.m_data[m_size];
        if ( _RDX )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rdi]
            vmovups ymmword ptr [rdx], ymm0
            vmovups ymm1, ymmword ptr [rdi+20h]
            vmovups ymmword ptr [rdx+20h], ymm1
          }
          *(_WORD *)&_RDX->m_value[31] = *(_WORD *)&_RDI->m_value[31];
          m_size = this->m_tags.m_size;
        }
        ++m_size;
        ++_RDI;
        this->m_tags.m_size = m_size;
        --v10;
      }
      while ( v10 );
    }
    this->m_numTags = v7;
    return numTags <= 0x96;
  }
  else
  {
    this->m_numTags = 0;
    return 1;
  }
}

/*
==============
bdObjectStoreMetadata::bdObjectStoreMetadata
==============
*/
void bdObjectStoreMetadata::bdObjectStoreMetadata(bdObjectStoreMetadata *this, const bdObjectStoreMetadata *__that)
{
  __int64 v13; 
  bdObjectStoreTag *v25; 
  __int64 m_capacity; 
  unsigned int m_size; 
  __int64 v30; 

  _RDI = __that;
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
  this->m_contentChecksum[32] = __that->m_contentChecksum[32];
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+0A1h]
    vmovups ymmword ptr [rcx+0A1h], ymm0
  }
  this->m_objectVersion[32] = __that->m_objectVersion[32];
  this->m_expiresOn = __that->m_expiresOn;
  this->m_contentLength = __that->m_contentLength;
  this->m_acl.m_aclType = __that->m_acl.m_aclType;
  this->m_created = __that->m_created;
  this->m_modified = __that->m_modified;
  _RCX = this->m_contentURL;
  _RAX = __that->m_contentURL;
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
  _RBX->m_category[64] = _RDI->m_category[64];
  memcpy_0(_RBX->m_extraData, _RDI->m_extraData, sizeof(_RBX->m_extraData));
  _RBX->m_extraDataSize = _RDI->m_extraDataSize;
  _RBX->m_summaryContentLength = _RDI->m_summaryContentLength;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0D40h]
    vmovups ymmword ptr [rbx+0D40h], ymm0
  }
  _RBX->m_summaryChecksum[32] = _RDI->m_summaryChecksum[32];
  _RBX->m_hasSummary = _RDI->m_hasSummary;
  _RBX->m_tags.m_capacity = _RDI->m_tags.m_capacity;
  _RBX->m_tags.m_size = _RDI->m_tags.m_size;
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
  _RBX->m_tags.m_data = v25;
  _RBX->m_numTags = _RDI->m_numTags;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0D7Ch]
    vmovups ymmword ptr [rbx+0D7Ch], ymm0
  }
}

