/*
==============
bdObjectStoreRequestBase::buildUserSummaryObjectMetadataURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildUserSummaryObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context, const char *extra)
{
  return ?buildUserSummaryObjectMetadataURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1111@Z(this, url, urlSize, owner, objectName, client, context, extra);
}

/*
==============
bdObjectStoreRequestBase::buildGetMetadataByStatisticRange
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildGetMetadataByStatisticRange(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *category, const char *statistic_name, const unsigned int minRank, const unsigned int maxRank)
{
  return ?buildGetMetadataByStatisticRange@bdObjectStoreRequestBase@@IEBAIPEADIPEBD111II@Z(this, url, urlSize, client, context, category, statistic_name, minRank, maxRank);
}

/*
==============
bdObjectStoreRequestBase::buildListPublisherObjectsByCategory
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildListPublisherObjectsByCategory(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *publisher, const char *client, const char *context, const char *category, unsigned int limit, const char *pageToken)
{
  return ?buildListPublisherObjectsByCategory@bdObjectStoreRequestBase@@IEBAIPEADIPEBD111I1@Z(this, url, urlSize, publisher, client, context, category, limit, pageToken);
}

/*
==============
bdObjectStoreRequestBase::getClientIDFromAuthInfo
==============
*/

const char *__fastcall bdObjectStoreRequestBase::getClientIDFromAuthInfo(bdObjectStoreRequestBase *this, bdLobbyService *lobbyService)
{
  return ?getClientIDFromAuthInfo@bdObjectStoreRequestBase@@IEBAPEBDPEAVbdLobbyService@@@Z(this, lobbyService);
}

/*
==============
bdObjectStoreRequestBase::buildUserSummaryObjectURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildUserSummaryObjectURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context)
{
  return ?buildUserSummaryObjectURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD111@Z(this, url, urlSize, owner, objectName, client, context);
}

/*
==============
bdObjectStoreRequestBase::buildCompleteUploadSessionsURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildCompleteUploadSessionsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, bool orchestration)
{
  return ?buildCompleteUploadSessionsURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1_N@Z(this, url, urlSize, client, context, orchestration);
}

/*
==============
bdObjectStoreRequestBase::buildListPublisherObjectsByCategory
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildListPublisherObjectsByCategory(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *publisher, const char *client, const char *context, const char *category, unsigned int limit)
{
  return ?buildListPublisherObjectsByCategory@bdObjectStoreRequestBase@@IEBAIPEADIPEBD111I@Z(this, url, urlSize, publisher, client, context, category, limit);
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectsVectorizedURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildUserObjectsVectorizedURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, bool includeTags, bool requestValidationToken)
{
  return ?buildUserObjectsVectorizedURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1_N2@Z(this, url, urlSize, client, context, includeTags, requestValidationToken);
}

/*
==============
bdObjectStoreRequestBase::buildListUserObjectsURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildListUserObjectsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context, unsigned int limit, bool includeTags)
{
  return ?buildListUserObjectsURL@bdObjectStoreRequestBase@@IEBAIPEADIAEBVbdStructUserAccountID@@PEBD2I_N@Z(this, url, urlSize, owner, client, context, limit, includeTags);
}

/*
==============
bdObjectStoreRequestBase::buildSearchUsersObjectsByTagsURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildSearchUsersObjectsByTagsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, unsigned int limit)
{
  return ?buildSearchUsersObjectsByTagsURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1I@Z(this, url, urlSize, client, context, limit);
}

/*
==============
bdObjectStoreRequestBase::setContext
==============
*/

void __fastcall bdObjectStoreRequestBase::setContext(bdObjectStoreRequestBase *this, const char *const context)
{
  ?setContext@bdObjectStoreRequestBase@@IEAAXQEBD@Z(this, context);
}

/*
==============
bdObjectStoreRequestBase::buildListUserObjectsURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildListUserObjectsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context, unsigned int limit, const char *pageToken, bool includeTags)
{
  return ?buildListUserObjectsURL@bdObjectStoreRequestBase@@IEBAIPEADIAEBVbdStructUserAccountID@@PEBD2I2_N@Z(this, url, urlSize, owner, client, context, limit, pageToken, includeTags);
}

/*
==============
bdObjectStoreRequestBase::buildListUserObjectsByCategory
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildListUserObjectsByCategory(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context, const char *category, unsigned int limit, bool includeTags, bool includeStatistics)
{
  return ?buildListUserObjectsByCategory@bdObjectStoreRequestBase@@IEBAIPEADIAEBVbdStructUserAccountID@@PEBD22I_N3@Z(this, url, urlSize, owner, client, context, category, limit, includeTags, includeStatistics);
}

/*
==============
bdObjectStoreRequestBase::buildUserVotesURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildUserVotesURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *user, const char *client, const char *context, const unsigned int numberOfVotes)
{
  return ?buildUserVotesURL@bdObjectStoreRequestBase@@IEBAIPEADIAEBVbdStructUserAccountID@@PEBD2I@Z(this, url, urlSize, user, client, context, numberOfVotes);
}

/*
==============
bdObjectStoreRequestBase::~bdObjectStoreRequestBase
==============
*/

void __fastcall bdObjectStoreRequestBase::~bdObjectStoreRequestBase(bdObjectStoreRequestBase *this)
{
  ??1bdObjectStoreRequestBase@@UEAA@XZ(this);
}

/*
==============
bdObjectStoreRequestBase::requiresOrchestration
==============
*/

bool __fastcall bdObjectStoreRequestBase::requiresOrchestration(bdObjectStoreRequestBase *this, const bdObjectStoreMetadata *metadata)
{
  return ?requiresOrchestration@bdObjectStoreRequestBase@@IEBA_NAEBVbdObjectStoreMetadata@@@Z(this, metadata);
}

/*
==============
bdObjectStoreRequestBase::buildUserUploadSessionURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildUserUploadSessionURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context)
{
  return ?buildUserUploadSessionURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1@Z(this, url, urlSize, client, context);
}

/*
==============
bdObjectStoreRequestBase::buildVectorizedUserSummaryObjectMetadataURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildVectorizedUserSummaryObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *extra)
{
  return ?buildVectorizedUserSummaryObjectMetadataURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD11@Z(this, url, urlSize, client, context, extra);
}

/*
==============
bdObjectStoreRequestBase::buildListUserObjectsByCategory
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildListUserObjectsByCategory(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context, const char *category, unsigned int limit, const char *pageToken, bool includeTags, bool includeStatistics)
{
  return ?buildListUserObjectsByCategory@bdObjectStoreRequestBase@@IEBAIPEADIAEBVbdStructUserAccountID@@PEBD22I2_N3@Z(this, url, urlSize, owner, client, context, category, limit, pageToken, includeTags, includeStatistics);
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectURLWithExpand
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildUserObjectURLWithExpand(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context, const char *expand, bool includeTags)
{
  return ?buildUserObjectURLWithExpand@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1111_N@Z(this, url, urlSize, owner, objectName, client, context, expand, includeTags);
}

/*
==============
bdObjectStoreRequestBase::buildSearchUsersObjectsByTagsURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildSearchUsersObjectsByTagsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, unsigned int limit, const char *pageToken)
{
  return ?buildSearchUsersObjectsByTagsURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1I1@Z(this, url, urlSize, client, context, limit, pageToken);
}

/*
==============
bdObjectStoreRequestBase::buildPublisherObjectMetadataURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildPublisherObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *publisher, const char *objectName, const char *client, const char *context, const char *extra)
{
  return ?buildPublisherObjectMetadataURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1111@Z(this, url, urlSize, publisher, objectName, client, context, extra);
}

/*
==============
bdObjectStoreRequestBase::getBaseRestUrl
==============
*/

const char *__fastcall bdObjectStoreRequestBase::getBaseRestUrl(bdObjectStoreRequestBase *this)
{
  return ?getBaseRestUrl@bdObjectStoreRequestBase@@IEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectCountsURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildUserObjectCountsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context)
{
  return ?buildUserObjectCountsURL@bdObjectStoreRequestBase@@IEBAIPEADIAEBVbdStructUserAccountID@@PEBD2@Z(this, url, urlSize, owner, client, context);
}

/*
==============
bdObjectStoreRequestBase::getBaseUrl
==============
*/

const char *__fastcall bdObjectStoreRequestBase::getBaseUrl(bdObjectStoreRequestBase *this)
{
  return ?getBaseUrl@bdObjectStoreRequestBase@@IEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreRequestBase::buildCompleteUploadSessionURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildCompleteUploadSessionURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *sessionID, const char *client, const char *context, bool orchestration)
{
  return ?buildCompleteUploadSessionURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD11_N@Z(this, url, urlSize, sessionID, client, context, orchestration);
}

/*
==============
bdObjectStoreRequestBase::buildGetObjectsStatisticsURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildGetObjectsStatisticsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *category)
{
  return ?buildGetObjectsStatisticsURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD11@Z(this, url, urlSize, client, context, category);
}

/*
==============
bdObjectStoreRequestBase::buildCreateUploadSessionsURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildCreateUploadSessionsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context)
{
  return ?buildCreateUploadSessionsURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1@Z(this, url, urlSize, client, context);
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectMetadataURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildUserObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context, const char *extra)
{
  return ?buildUserObjectMetadataURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD1111@Z(this, url, urlSize, owner, objectName, client, context, extra);
}

/*
==============
bdObjectStoreRequestBase::reset
==============
*/

void __fastcall bdObjectStoreRequestBase::reset(bdObjectStoreRequestBase *this)
{
  ?reset@bdObjectStoreRequestBase@@IEAAXXZ(this);
}

/*
==============
bdObjectStoreRequestBase::setEnvironment
==============
*/

void __fastcall bdObjectStoreRequestBase::setEnvironment(bdObjectStoreRequestBase *this, bdEnvironment environment)
{
  ?setEnvironment@bdObjectStoreRequestBase@@QEBAXW4bdEnvironment@@@Z(this, environment);
}

/*
==============
bdObjectStoreRequestBase::buildVectorizedPublisherObjectMetadataURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildVectorizedPublisherObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *extra)
{
  return ?buildVectorizedPublisherObjectMetadataURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD11@Z(this, url, urlSize, client, context, extra);
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildUserObjectURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context, bool orchestration, bool requestValidationToken)
{
  return ?buildUserObjectURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD111_N2@Z(this, url, urlSize, owner, objectName, client, context, orchestration, requestValidationToken);
}

/*
==============
bdObjectStoreRequestBase::buildIncrementObjectStatisticURL
==============
*/

unsigned int __fastcall bdObjectStoreRequestBase::buildIncrementObjectStatisticURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *owner, const char *objectName, const char *statisticName, const char *category)
{
  return ?buildIncrementObjectStatisticURL@bdObjectStoreRequestBase@@IEBAIPEADIPEBD11111@Z(this, url, urlSize, client, context, owner, objectName, statisticName, category);
}

/*
==============
bdObjectStoreRequestBase::serializeObjectIDsToHTTPHeader
==============
*/

bool __fastcall bdObjectStoreRequestBase::serializeObjectIDsToHTTPHeader(bdObjectStoreRequestBase *this, bdObjectStoreHTTPHeader *objectIDsHeader, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  return ?serializeObjectIDsToHTTPHeader@bdObjectStoreRequestBase@@IEBA_NPEAVbdObjectStoreHTTPHeader@@PEBVbdObjectStoreObjectID@@I@Z(this, objectIDsHeader, objectIDs, objectIDsSize);
}

/*
==============
bdObjectStoreRequestBase::~bdObjectStoreRequestBase
==============
*/
void bdObjectStoreRequestBase::~bdObjectStoreRequestBase(bdObjectStoreRequestBase *this)
{
  this->__vftable = (bdObjectStoreRequestBase_vtbl *)&bdObjectStoreRequestBase::`vftable';
}

/*
==============
bdObjectStoreRequestBase::buildCompleteUploadSessionURL
==============
*/
int bdObjectStoreRequestBase::buildCompleteUploadSessionURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *sessionID, const char *client, const char *context, bool orchestration)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  if ( orchestration )
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_COMPLETE_UPLOAD_SESSION_PATH, BaseUrl, sessionID, client, context);
  else
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_COMPLETE_UPLOAD_SESSION_CORE_PATH, BaseUrl, sessionID, client, context);
}

/*
==============
bdObjectStoreRequestBase::buildCompleteUploadSessionsURL
==============
*/
int bdObjectStoreRequestBase::buildCompleteUploadSessionsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, bool orchestration)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  if ( orchestration )
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_COMPLETE_UPLOAD_SESSIONS_PATH, BaseUrl, client, context);
  else
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_COMPLETE_UPLOAD_SESSIONS_CORE_PATH, BaseUrl, client, context);
}

/*
==============
bdObjectStoreRequestBase::buildCreateUploadSessionsURL
==============
*/
int bdObjectStoreRequestBase::buildCreateUploadSessionsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_CREATE_UPLOAD_SESSIONS_CORE_PATH, BaseUrl, client, context);
}

/*
==============
bdObjectStoreRequestBase::buildGetMetadataByStatisticRange
==============
*/
int bdObjectStoreRequestBase::buildGetMetadataByStatisticRange(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *category, const char *statistic_name, const unsigned int minRank, const unsigned int maxRank)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_GET_METADATA_BY_STATISTIC_RANGE, BaseUrl, client, context, category, minRank, maxRank, statistic_name);
}

/*
==============
bdObjectStoreRequestBase::buildGetObjectsStatisticsURL
==============
*/
int bdObjectStoreRequestBase::buildGetObjectsStatisticsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *category)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_GET_OBJECTS_STATISTICS_PATH, BaseUrl, client, context, category);
}

/*
==============
bdObjectStoreRequestBase::buildIncrementObjectStatisticURL
==============
*/
int bdObjectStoreRequestBase::buildIncrementObjectStatisticURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *owner, const char *objectName, const char *statisticName, const char *category)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_INCREMENT_STATISTIC_PATH, BaseUrl, owner, objectName, statisticName, client, context, category);
}

/*
==============
bdObjectStoreRequestBase::buildListPublisherObjectsByCategory
==============
*/
int bdObjectStoreRequestBase::buildListPublisherObjectsByCategory(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *publisher, const char *client, const char *context, const char *category, unsigned int limit, const char *pageToken)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_LIST_PUBLISHER_OBJECTS_BY_CATEGORY_WITH_PAGE_TOKEN_CORE_PATH, BaseUrl, publisher, client, context, category, limit, pageToken);
}

/*
==============
bdObjectStoreRequestBase::buildListPublisherObjectsByCategory
==============
*/
int bdObjectStoreRequestBase::buildListPublisherObjectsByCategory(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *publisher, const char *client, const char *context, const char *category, unsigned int limit)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_LIST_PUBLISHER_OBJECTS_BY_CATEGORY_CORE_PATH, BaseUrl, publisher, client, context, category, limit);
}

/*
==============
bdObjectStoreRequestBase::buildListUserObjectsByCategory
==============
*/
int bdObjectStoreRequestBase::buildListUserObjectsByCategory(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context, const char *category, unsigned int limit, const char *pageToken, bool includeTags, bool includeStatistics)
{
  unsigned int v12; 
  char *v13; 
  bdObjectStoreRequestBase *v14; 
  const char *v15; 
  const char *v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  size_t v19; 
  bool v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  char *v23; 
  unsigned __int64 v24; 
  size_t v25; 
  const char *v26; 
  unsigned __int64 v27; 
  const char *v28; 
  size_t v29; 
  const bdUserAccountID *v30; 
  bool v31; 
  const char *v32; 
  const char *BaseUrl; 
  unsigned __int64 v35; 
  const char *v36; 
  unsigned __int64 m_userID; 
  const char *v38; 
  bdUserAccountID v42; 
  char dst[16]; 

  v12 = urlSize;
  v13 = url;
  v14 = this;
  v15 = client;
  if ( includeTags )
  {
    v16 = BD_OBJECTSTORE_EXTRA_TAGS_STR;
    bdHandleAssert(BD_OBJECTSTORE_EXTRA_TAGS_STR != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v17 = -1i64;
    v18 = -1i64;
    do
      ++v18;
    while ( v16[v18] );
    v19 = 10i64;
    if ( v18 < 0xA )
      v19 = v18;
    memcpy_0(dst, v16, v19);
    dst[v19] = 0;
    v20 = includeStatistics;
    if ( includeStatistics )
    {
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v21 = -1i64;
      do
        ++v21;
      while ( dst[v21] );
      if ( v21 >= 0xA )
      {
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      }
      else
      {
        v22 = 11 - v21;
        v23 = &dst[v21];
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        if ( v22 && v23 )
        {
          v24 = v22 - 1;
          v25 = 1i64;
          if ( v24 <= 1 )
            v25 = v24;
          memcpy_0(v23, ",", v25);
          v23[v25] = 0;
        }
        v12 = urlSize;
      }
      v26 = BD_OBJECTSTORE_EXTRA_STATISTICS_STR;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      do
        ++v17;
      while ( dst[v17] );
      if ( v17 >= 0xA )
        bdHandleAssert(v26 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      else
        bdStrlcpy(&dst[v17], v26, 11 - v17);
    }
  }
  else
  {
    v20 = includeStatistics;
    if ( !includeStatistics )
      goto LABEL_30;
    v27 = bdStrlen(BD_OBJECTSTORE_EXTRA_STATISTICS_STR) + 1;
    v28 = BD_OBJECTSTORE_EXTRA_STATISTICS_STR;
    bdHandleAssert(BD_OBJECTSTORE_EXTRA_STATISTICS_STR != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v29 = -1i64;
    do
      ++v29;
    while ( v28[v29] );
    if ( v27 )
    {
      if ( v29 >= v27 - 1 )
        v29 = v27 - 1;
      memcpy_0(dst, v28, v29);
      dst[v29] = 0;
    }
  }
  v14 = this;
  v13 = url;
  v15 = client;
LABEL_30:
  bdUserAccountID::bdUserAccountID(&v42);
  v31 = bdUserAccountID::operator==(&owner->bdUserAccountID, v30);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v42.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v42.gap38);
  if ( v31 )
  {
    if ( includeTags || v20 )
    {
      BaseUrl = bdObjectStoreRequestBase::getBaseUrl(v14);
      return bdSnprintf(v13, v12, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_BY_CATEGORY_WITH_PAGE_TOKEN_ME_PATH_WITH_EXTRA, BaseUrl, v15, context, category, limit, pageToken, dst);
    }
    else
    {
      v32 = bdObjectStoreRequestBase::getBaseUrl(v14);
      return bdSnprintf(v13, v12, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_BY_CATEGORY_WITH_PAGE_TOKEN_ME_CORE_PATH, v32, v15, context, category, limit, pageToken);
    }
  }
  else if ( includeTags || v20 )
  {
    m_userID = owner->m_userID;
    v38 = bdObjectStoreRequestBase::getBaseUrl(v14);
    return bdSnprintf(v13, v12, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_BY_CATEGORY_WITH_PAGE_TOKEN_PATH_WITH_EXTRA, v38, owner->_bytes_20, m_userID, v15, context, category, limit, pageToken, dst);
  }
  else
  {
    v35 = owner->m_userID;
    v36 = bdObjectStoreRequestBase::getBaseUrl(v14);
    return bdSnprintf(v13, v12, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_BY_CATEGORY_WITH_PAGE_TOKEN_CORE_PATH, v36, owner->_bytes_20, v35, v15, context, category, limit, pageToken);
  }
}

/*
==============
bdObjectStoreRequestBase::buildListUserObjectsByCategory
==============
*/
int bdObjectStoreRequestBase::buildListUserObjectsByCategory(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context, const char *category, unsigned int limit, bool includeTags, bool includeStatistics)
{
  unsigned int v11; 
  char *v12; 
  bdObjectStoreRequestBase *v13; 
  const char *v14; 
  const char *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  size_t v18; 
  bool v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  char *v22; 
  unsigned __int64 v23; 
  size_t v24; 
  const char *v25; 
  unsigned __int64 v26; 
  const char *v27; 
  size_t v28; 
  const bdUserAccountID *v29; 
  bool v30; 
  const char *v31; 
  const char *BaseUrl; 
  unsigned __int64 v34; 
  const char *v35; 
  unsigned __int64 m_userID; 
  const char *v37; 
  bdUserAccountID v41; 
  char dst[16]; 

  v11 = urlSize;
  v12 = url;
  v13 = this;
  v14 = client;
  if ( includeTags )
  {
    v15 = BD_OBJECTSTORE_EXTRA_TAGS_STR;
    bdHandleAssert(BD_OBJECTSTORE_EXTRA_TAGS_STR != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v16 = -1i64;
    v17 = -1i64;
    do
      ++v17;
    while ( v15[v17] );
    v18 = 10i64;
    if ( v17 < 0xA )
      v18 = v17;
    memcpy_0(dst, v15, v18);
    dst[v18] = 0;
    v19 = includeStatistics;
    if ( includeStatistics )
    {
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v20 = -1i64;
      do
        ++v20;
      while ( dst[v20] );
      if ( v20 >= 0xA )
      {
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      }
      else
      {
        v21 = 11 - v20;
        v22 = &dst[v20];
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        if ( v21 && v22 )
        {
          v23 = v21 - 1;
          v24 = 1i64;
          if ( v23 <= 1 )
            v24 = v23;
          memcpy_0(v22, ",", v24);
          v22[v24] = 0;
        }
        v11 = urlSize;
      }
      v25 = BD_OBJECTSTORE_EXTRA_STATISTICS_STR;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      do
        ++v16;
      while ( dst[v16] );
      if ( v16 >= 0xA )
        bdHandleAssert(v25 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      else
        bdStrlcpy(&dst[v16], v25, 11 - v16);
    }
  }
  else
  {
    v19 = includeStatistics;
    if ( !includeStatistics )
      goto LABEL_30;
    v26 = bdStrlen(BD_OBJECTSTORE_EXTRA_STATISTICS_STR) + 1;
    v27 = BD_OBJECTSTORE_EXTRA_STATISTICS_STR;
    bdHandleAssert(BD_OBJECTSTORE_EXTRA_STATISTICS_STR != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v28 = -1i64;
    do
      ++v28;
    while ( v27[v28] );
    if ( v26 )
    {
      if ( v28 >= v26 - 1 )
        v28 = v26 - 1;
      memcpy_0(dst, v27, v28);
      dst[v28] = 0;
    }
  }
  v13 = this;
  v12 = url;
  v14 = client;
LABEL_30:
  bdUserAccountID::bdUserAccountID(&v41);
  v30 = bdUserAccountID::operator==(&owner->bdUserAccountID, v29);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v41.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v41.gap38);
  if ( v30 )
  {
    if ( includeTags || v19 )
    {
      BaseUrl = bdObjectStoreRequestBase::getBaseUrl(v13);
      return bdSnprintf(v12, v11, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_BY_CATEGORY_ME_PATH_WITH_EXTRA, BaseUrl, v14, context, category, limit, dst);
    }
    else
    {
      v31 = bdObjectStoreRequestBase::getBaseUrl(v13);
      return bdSnprintf(v12, v11, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_BY_CATEGORY_ME_CORE_PATH, v31, v14, context, category, limit);
    }
  }
  else if ( includeTags || v19 )
  {
    m_userID = owner->m_userID;
    v37 = bdObjectStoreRequestBase::getBaseUrl(v13);
    return bdSnprintf(v12, v11, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_BY_CATEGORY_PATH_WITH_EXTRA, v37, owner->_bytes_20, m_userID, v14, context, category, limit, dst);
  }
  else
  {
    v34 = owner->m_userID;
    v35 = bdObjectStoreRequestBase::getBaseUrl(v13);
    return bdSnprintf(v12, v11, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_BY_CATEGORY_CORE_PATH, v35, owner->_bytes_20, v34, v14, context, category, limit);
  }
}

/*
==============
bdObjectStoreRequestBase::buildListUserObjectsURL
==============
*/
int bdObjectStoreRequestBase::buildListUserObjectsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context, unsigned int limit, const char *pageToken, bool includeTags)
{
  unsigned __int64 v10; 
  const bdUserAccountID *v13; 
  bool v14; 
  const char *v15; 
  const char *v17; 
  const char *BaseUrl; 
  unsigned __int64 v19; 
  const char *v20; 
  const char *v21; 
  unsigned __int64 m_userID; 
  const char *v23; 
  bdUserAccountID v25; 

  v10 = urlSize;
  bdUserAccountID::bdUserAccountID(&v25);
  v14 = bdUserAccountID::operator==(&owner->bdUserAccountID, v13);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v25.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v25.gap38);
  if ( v14 )
  {
    if ( includeTags )
    {
      v17 = BD_OBJECTSTORE_EXTRA_TAGS_STR;
      BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
      return bdSnprintf(url, v10, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_WITH_PAGE_TOKEN_ME_PATH_WITH_EXTRA, BaseUrl, client, context, limit, pageToken, v17);
    }
    else
    {
      v15 = bdObjectStoreRequestBase::getBaseUrl(this);
      return bdSnprintf(url, (unsigned int)v10, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_WITH_PAGE_TOKEN_ME_CORE_PATH, v15, client, context, limit, pageToken);
    }
  }
  else if ( includeTags )
  {
    v21 = BD_OBJECTSTORE_EXTRA_TAGS_STR;
    m_userID = owner->m_userID;
    v23 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v10, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_WITH_PAGE_TOKEN_PATH_WITH_EXTRA, v23, owner->_bytes_20, m_userID, client, context, limit, pageToken, v21);
  }
  else
  {
    v19 = owner->m_userID;
    v20 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v10, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_WITH_PAGE_TOKEN_CORE_PATH, v20, owner->_bytes_20, v19, client, context, limit, pageToken);
  }
}

/*
==============
bdObjectStoreRequestBase::buildListUserObjectsURL
==============
*/
int bdObjectStoreRequestBase::buildListUserObjectsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context, unsigned int limit, bool includeTags)
{
  unsigned __int64 v9; 
  const bdUserAccountID *v12; 
  bool v13; 
  const char *v14; 
  const char *v16; 
  const char *BaseUrl; 
  unsigned __int64 v18; 
  const char *v19; 
  const char *v20; 
  unsigned __int64 m_userID; 
  const char *v22; 
  bdUserAccountID v23; 

  v9 = urlSize;
  bdUserAccountID::bdUserAccountID(&v23);
  v13 = bdUserAccountID::operator==(&owner->bdUserAccountID, v12);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v23.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v23.gap38);
  if ( v13 )
  {
    if ( includeTags )
    {
      v16 = BD_OBJECTSTORE_EXTRA_TAGS_STR;
      BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
      return bdSnprintf(url, v9, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_ME_PATH_WITH_EXTRA, BaseUrl, client, context, limit, v16);
    }
    else
    {
      v14 = bdObjectStoreRequestBase::getBaseUrl(this);
      return bdSnprintf(url, (unsigned int)v9, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_ME_CORE_PATH, v14, client, context, limit);
    }
  }
  else if ( includeTags )
  {
    v20 = BD_OBJECTSTORE_EXTRA_TAGS_STR;
    m_userID = owner->m_userID;
    v22 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v9, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_PATH_WITH_EXTRA, v22, owner->_bytes_20, m_userID, client, context, limit, v20, -2i64);
  }
  else
  {
    v18 = owner->m_userID;
    v19 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v9, BD_OBJECTSTORE_V2_LIST_USER_OBJECTS_CORE_PATH, v19, owner->_bytes_20, v18, client, context, limit);
  }
}

/*
==============
bdObjectStoreRequestBase::buildPublisherObjectMetadataURL
==============
*/
int bdObjectStoreRequestBase::buildPublisherObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *publisher, const char *objectName, const char *client, const char *context, const char *extra, __int64 a9, __int64 a10, __int64 a11, __int64 a12)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  if ( extra )
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_PUBLISHER_OBJECT_METADATA_CORE_PATH_WITH_EXTRA, BaseUrl, publisher, objectName, client, context, extra);
  else
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_PUBLISHER_OBJECT_METADATA_CORE_PATH, BaseUrl, publisher, objectName, client, context, a9, a10, a11, a12);
}

/*
==============
bdObjectStoreRequestBase::buildSearchUsersObjectsByTagsURL
==============
*/
int bdObjectStoreRequestBase::buildSearchUsersObjectsByTagsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, unsigned int limit, const char *pageToken)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_SEARCH_USERS_OBJECTS_BY_TAGS_WITH_PAGE_TOKEN_PATH, BaseUrl, client, context, limit, pageToken);
}

/*
==============
bdObjectStoreRequestBase::buildSearchUsersObjectsByTagsURL
==============
*/
int bdObjectStoreRequestBase::buildSearchUsersObjectsByTagsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, unsigned int limit)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_SEARCH_USERS_OBJECTS_BY_TAGS_PATH, BaseUrl, client, context, limit);
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectCountsURL
==============
*/
int bdObjectStoreRequestBase::buildUserObjectCountsURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *owner, const char *client, const char *context)
{
  unsigned __int64 v7; 
  const bdUserAccountID *v10; 
  bool v11; 
  const char *BaseUrl; 
  unsigned __int64 m_userID; 
  const char *v15; 
  bdUserAccountID v16; 

  v7 = urlSize;
  bdUserAccountID::bdUserAccountID(&v16);
  v11 = bdUserAccountID::operator==(&owner->bdUserAccountID, v10);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v16.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v16.gap38);
  if ( v11 )
  {
    BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, (unsigned int)v7, BD_OBJECTSTORE_USER_OBJECT_COUNTS_CORE_ME_PATH, BaseUrl, client, context);
  }
  else
  {
    m_userID = owner->m_userID;
    v15 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v7, BD_OBJECTSTORE_USER_OBJECT_COUNTS_CORE_PATH, v15, owner->_bytes_20, m_userID, client, context, -2i64);
  }
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectMetadataURL
==============
*/
int bdObjectStoreRequestBase::buildUserObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context, const char *extra, __int64 a9, __int64 a10, __int64 a11, __int64 a12)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  if ( extra )
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_USER_OBJECT_METADATA_CORE_PATH_WITH_EXTRA, BaseUrl, owner, objectName, client, context, extra);
  else
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_USER_OBJECT_METADATA_CORE_PATH, BaseUrl, owner, objectName, client, context, a9, a10, a11, a12);
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectURL
==============
*/
int bdObjectStoreRequestBase::buildUserObjectURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context, bool orchestration, bool requestValidationToken)
{
  unsigned __int64 v11; 
  const char *v12; 
  const char *BaseUrl; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 

  v11 = urlSize;
  if ( orchestration )
  {
    if ( requestValidationToken )
    {
      v12 = BD_OBJECTSTORE_EXTRA_VALIDATION_TOKEN_STR;
      BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
      return bdSnprintf(url, (unsigned int)v11, BD_OBJECTSTORE_V2_USER_OBJECT_PATH_WITH_EXTRA, BaseUrl, owner, objectName, client, context, v12);
    }
    else
    {
      v15 = bdObjectStoreRequestBase::getBaseUrl(this);
      return bdSnprintf(url, v11, BD_OBJECTSTORE_V2_USER_OBJECT_PATH, v15, owner, objectName, client, context);
    }
  }
  else if ( requestValidationToken )
  {
    v16 = BD_OBJECTSTORE_EXTRA_VALIDATION_TOKEN_STR;
    v17 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v11, BD_OBJECTSTORE_V2_USER_OBJECT_CORE_PATH_WITH_EXTRA, v17, owner, objectName, client, context, v16);
  }
  else
  {
    v18 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v11, BD_OBJECTSTORE_V2_USER_OBJECT_CORE_PATH, v18, owner, objectName, client, context);
  }
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectURLWithExpand
==============
*/
int bdObjectStoreRequestBase::buildUserObjectURLWithExpand(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context, const char *expand, bool includeTags, __int64 a10, __int64 a11, __int64 a12, __int64 a13)
{
  unsigned __int64 v15; 
  const char *v16; 
  const char *BaseUrl; 
  const char *v19; 

  v15 = urlSize;
  if ( includeTags )
  {
    v16 = BD_OBJECTSTORE_EXTRA_TAGS_STR;
    BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, (unsigned int)v15, BD_OBJECTSTORE_V2_USER_OBJECT_PATH_WITH_EXPAND_WITH_EXTRA, BaseUrl, owner, objectName, client, context, expand, v16);
  }
  else
  {
    v19 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v15, BD_OBJECTSTORE_V2_USER_OBJECT_CORE_PATH_WITH_EXPAND, v19, owner, objectName, client, context, expand, a10, a11, a12, a13);
  }
}

/*
==============
bdObjectStoreRequestBase::buildUserObjectsVectorizedURL
==============
*/
int bdObjectStoreRequestBase::buildUserObjectsVectorizedURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, bool includeTags, bool requestValidationToken)
{
  unsigned __int64 v9; 
  const char *v10; 
  const char *BaseUrl; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 

  v9 = urlSize;
  if ( includeTags )
  {
    if ( requestValidationToken )
    {
      v10 = BD_OBJECTSTORE_EXTRA_VALIDATION_TOKEN_STR;
      BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
      return bdSnprintf(url, (unsigned int)v9, BD_OBJECTSTORE_V2_USER_OBJECTS_VECTORIZED_PATH_WITH_EXTRA, BaseUrl, client, context, v10);
    }
    else
    {
      v13 = bdObjectStoreRequestBase::getBaseUrl(this);
      return bdSnprintf(url, v9, BD_OBJECTSTORE_V2_USER_OBJECTS_VECTORIZED_PATH, v13, client, context);
    }
  }
  else if ( requestValidationToken )
  {
    v14 = BD_OBJECTSTORE_EXTRA_VALIDATION_TOKEN_STR;
    v15 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v9, BD_OBJECTSTORE_V2_USER_OBJECTS_VECTORIZED_CORE_PATH_WITH_EXTRA, v15, client, context, v14);
  }
  else
  {
    v16 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v9, BD_OBJECTSTORE_V2_USER_OBJECTS_VECTORIZED_CORE_PATH, v16, client, context);
  }
}

/*
==============
bdObjectStoreRequestBase::buildUserSummaryObjectMetadataURL
==============
*/
int bdObjectStoreRequestBase::buildUserSummaryObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context, const char *extra, __int64 a9, __int64 a10, __int64 a11, __int64 a12)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  if ( extra )
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_USER_OBJECT_SUMMARY_METADATA_CORE_PATH_WITH_EXTRA, BaseUrl, owner, objectName, client, context, extra);
  else
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_USER_OBJECT_SUMMARY_METADATA_CORE_PATH, BaseUrl, owner, objectName, client, context, a9, a10, a11, a12);
}

/*
==============
bdObjectStoreRequestBase::buildUserSummaryObjectURL
==============
*/
int bdObjectStoreRequestBase::buildUserSummaryObjectURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *owner, const char *objectName, const char *client, const char *context)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_USER_OBJECT_SUMMARY_CORE_PATH, BaseUrl, owner, objectName, client, context);
}

/*
==============
bdObjectStoreRequestBase::buildUserUploadSessionURL
==============
*/
int bdObjectStoreRequestBase::buildUserUploadSessionURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  return bdSnprintf(url, urlSize, BD_OBJECTSTORE_USER_UPLOAD_SESSION_CORE_PATH, BaseUrl, client, context);
}

/*
==============
bdObjectStoreRequestBase::buildUserVotesURL
==============
*/
int bdObjectStoreRequestBase::buildUserVotesURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const bdStructUserAccountID *user, const char *client, const char *context, const unsigned int numberOfVotes)
{
  unsigned __int64 v8; 
  const bdUserAccountID *v11; 
  bool v12; 
  const char *BaseUrl; 
  unsigned __int64 m_userID; 
  const char *v16; 
  bdUserAccountID v19; 

  v8 = urlSize;
  bdUserAccountID::bdUserAccountID(&v19);
  v12 = bdUserAccountID::operator==(&user->bdUserAccountID, v11);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v19.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v19.gap38);
  if ( v12 )
  {
    BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, (unsigned int)v8, BD_OBJECTSTORE_USER_VOTES_ME_PATH, BaseUrl, client, context, numberOfVotes);
  }
  else
  {
    m_userID = user->m_userID;
    v16 = bdObjectStoreRequestBase::getBaseUrl(this);
    return bdSnprintf(url, v8, BD_OBJECTSTORE_USER_VOTES_PATH, v16, user->_bytes_20, m_userID, client, context, numberOfVotes);
  }
}

/*
==============
bdObjectStoreRequestBase::buildVectorizedPublisherObjectMetadataURL
==============
*/
int bdObjectStoreRequestBase::buildVectorizedPublisherObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *extra, __int64 a7, __int64 a8, __int64 a9, __int64 a10)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  if ( extra )
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_VECTORIZED_PUBLISHER_OBJECT_METADATA_CORE_PATH_WITH_EXTRA, BaseUrl, client, context, extra);
  else
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_VECTORIZED_PUBLISHER_OBJECT_METADATA_CORE_PATH, BaseUrl, client, context, a7, a8, a9, a10);
}

/*
==============
bdObjectStoreRequestBase::buildVectorizedUserSummaryObjectMetadataURL
==============
*/
int bdObjectStoreRequestBase::buildVectorizedUserSummaryObjectMetadataURL(bdObjectStoreRequestBase *this, char *url, unsigned int urlSize, const char *client, const char *context, const char *extra, __int64 a7, __int64 a8, __int64 a9, __int64 a10)
{
  const char *BaseUrl; 

  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  if ( extra )
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_VECTORIZED_USER_SUMMARY_OBJECT_METADATA_CORE_PATH_WITH_EXTRA, BaseUrl, client, context, extra);
  else
    return bdSnprintf(url, urlSize, BD_OBJECTSTORE_VECTORIZED_USER_SUMMARY_OBJECT_METADATA_CORE_PATH, BaseUrl, client, context, a7, a8, a9, a10);
}

/*
==============
bdObjectStoreRequestBase::getBaseRestUrl
==============
*/
const char *bdObjectStoreRequestBase::getBaseRestUrl(bdObjectStoreRequestBase *this)
{
  const char *BaseUrl; 

  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  BaseUrl = bdObjectStoreRequestBase::getBaseUrl(this);
  if ( !strncmp("https:
    return BaseUrl + 8;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreRequestBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorerequestbase.cpp", "bdObjectStoreRequestBase::getBaseRestUrl", 0x2F1u, "unexpected URL received");
  return BaseUrl;
}

/*
==============
bdObjectStoreRequestBase::getBaseUrl
==============
*/
const char *bdObjectStoreRequestBase::getBaseUrl(bdObjectStoreRequestBase *this)
{
  bdEnvironment m_environment; 

  m_environment = this->m_environment;
  if ( m_environment == BD_ENVIRONMENT_DEV )
    return BD_OBJECTSTORE_DEV_URL;
  if ( m_environment == BD_ENVIRONMENT_CERT )
    return BD_OBJECTSTORE_CERT_URL;
  if ( m_environment != BD_ENVIRONMENT_PROD )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreRequestBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorerequestbase.cpp", "bdObjectStoreRequestBase::getBaseUrl", 0x2DDu, "Unknown environment (%u): Defaulting to PROD ObjectStore URL", this->m_environment);
  return BD_OBJECTSTORE_PROD_URL;
}

/*
==============
bdObjectStoreRequestBase::getClientIDFromAuthInfo
==============
*/
char *bdObjectStoreRequestBase::getClientIDFromAuthInfo(bdObjectStoreRequestBase *this, bdLobbyService *lobbyService)
{
  if ( lobbyService )
    return bdLobbyService::getAuthInfo(lobbyService)->m_clientID;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStoreRequestBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorerequestbase.cpp", "bdObjectStoreRequestBase::getClientIDFromAuthInfo", 0x30Fu, "lobbyService cannot be NULL");
  return 0i64;
}

/*
==============
bdObjectStoreRequestBase::requiresOrchestration
==============
*/
bool bdObjectStoreRequestBase::requiresOrchestration(bdObjectStoreRequestBase *this, const bdObjectStoreMetadata *metadata)
{
  return bdObjectStoreMetadata::hasTags((bdObjectStoreMetadata *)metadata);
}

/*
==============
bdObjectStoreRequestBase::reset
==============
*/
void bdObjectStoreRequestBase::reset(bdObjectStoreRequestBase *this)
{
  *(_QWORD *)this->m_context = 0i64;
  *(_QWORD *)&this->m_context[8] = 0i64;
}

/*
==============
bdObjectStoreRequestBase::serializeObjectIDsToHTTPHeader
==============
*/
_BOOL8 bdObjectStoreRequestBase::serializeObjectIDsToHTTPHeader(bdObjectStoreRequestBase *this, bdObjectStoreHTTPHeader *objectIDsHeader, const bdObjectStoreObjectID *objectIDs, unsigned int objectIDsSize)
{
  __int64 v4; 
  bool v7; 
  bool v12; 
  bdObjectStoreHTTPHeader_vtbl **v13; 
  unsigned __int64 v14; 
  size_t v15; 
  bdObjectStoreObjectID v17; 
  bdJSONSerializer json; 

  v4 = objectIDsSize;
  _RBX = objectIDs;
  bdJSONSerializer::bdJSONSerializer(&json, objectIDsHeader->m_value, 0x1000u);
  v7 = bdJSONSerializer::writeBeginArray(&json);
  if ( (_DWORD)v4 )
  {
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rsp+1E8h+var_1A8.m_ownerType], ymm0
        vmovups ymm1, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rsp+1E8h+var_1A8.m_owner+1Ch], ymm1
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups ymmword ptr [rsp+1E8h+var_1A8.m_objectName+1Eh], ymm0
        vmovups xmm1, xmmword ptr [rbx+60h]
        vmovups xmmword ptr [rsp+1E8h+var_1A8.m_objectName+3Eh], xmm1
      }
      v7 = v7 && bdObjectStoreObjectID::serializeToJSON(&v17, &json);
      ++_RBX;
      --v4;
    }
    while ( v4 );
  }
  v12 = v7 && bdJSONSerializer::writeEndArray(&json);
  v13 = &objectIDsHeader->__vftable + 2;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v14 = -1i64;
  do
    ++v14;
  while ( aDwObjectstoreO[v14] );
  if ( v13 )
  {
    v15 = 99i64;
    if ( v14 < 0x63 )
      v15 = v14;
    memcpy_0(v13, "DW-Objectstore-ObjectIDs", v15);
    *((_BYTE *)v13 + v15) = 0;
  }
  bdJSONSerializer::~bdJSONSerializer(&json);
  return v12;
}

/*
==============
bdObjectStoreRequestBase::setContext
==============
*/
void bdObjectStoreRequestBase::setContext(bdObjectStoreRequestBase *this, const char *const context)
{
  _BYTE *v4; 
  unsigned __int64 v5; 
  int v6; 

  v4 = memchr_0(context, 0, 0x10ui64);
  v6 = 15;
  v5 = 16i64;
  if ( v4 )
    v5 = v4 - context;
  bdHandleAssert(v5 < 0x10, "(bdStrnlen(context, BD_MAX_CONTEXT_NAME_LENGTH) < BD_MAX_CONTEXT_NAME_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorerequestbase.cpp", "bdObjectStoreRequestBase::setContext", 0x97u, "Context is too long. Max length is %d", v6);
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdObjectStoreRequestBase::setEnvironment
==============
*/
void bdObjectStoreRequestBase::setEnvironment(bdObjectStoreRequestBase *this, bdEnvironment environment)
{
  this->m_environment = environment;
}

