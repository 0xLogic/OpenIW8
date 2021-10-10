/*
==============
MarketingCommsManager::OnInitMPGameMode
==============
*/

void __fastcall MarketingCommsManager::OnInitMPGameMode(MarketingCommsManager *this)
{
  ?OnInitMPGameMode@MarketingCommsManager@@QEAAXXZ(this);
}

/*
==============
MarketingCommsManager::Init
==============
*/

bool __fastcall MarketingCommsManager::Init(MarketingCommsManager *this)
{
  return ?Init@MarketingCommsManager@@UEAA_NXZ(this);
}

/*
==============
MarketingCommsManager::OnUnregistered
==============
*/

void __fastcall MarketingCommsManager::OnUnregistered(MarketingCommsManager *this)
{
  ?OnUnregistered@MarketingCommsManager@@UEAAXXZ(this);
}

/*
==============
MarketingCommsManager::ParseContentBufferReplaceJSONMetaDataTags
==============
*/

void __fastcall MarketingCommsManager::ParseContentBufferReplaceJSONMetaDataTags(MarketingCommsManager *this, int controllerIndex, const int locationID, unsigned int currentMessageToReadIndex)
{
  ?ParseContentBufferReplaceJSONMetaDataTags@MarketingCommsManager@@AEAAXHHI@Z(this, controllerIndex, locationID, currentMessageToReadIndex);
}

/*
==============
MarketingCommsManager::GetMessageMaxCount
==============
*/

int __fastcall MarketingCommsManager::GetMessageMaxCount(MarketingCommsManager *this, int messageType)
{
  return ?GetMessageMaxCount@MarketingCommsManager@@QEAAHH@Z(this, messageType);
}

/*
==============
OnMarkMessagesReadOnBackendAsyncComplete
==============
*/

void __fastcall OnMarkMessagesReadOnBackendAsyncComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnMarkMessagesReadOnBackendAsyncComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
MarketingCommsManager::GetLanguageString
==============
*/

const char *__fastcall MarketingCommsManager::GetLanguageString()
{
  return ?GetLanguageString@MarketingCommsManager@@SAPEBDXZ();
}

/*
==============
MarketingCommsManager::IsCommsEnabled
==============
*/

bool __fastcall MarketingCommsManager::IsCommsEnabled(MarketingCommsManager *this)
{
  return ?IsCommsEnabled@MarketingCommsManager@@QEAA_NXZ(this);
}

/*
==============
MarketingCommsManager::RedeemPayloadForMessage
==============
*/

bool __fastcall MarketingCommsManager::RedeemPayloadForMessage(MarketingCommsManager *this, int controllerIndex, unsigned int responseMessageindex)
{
  return ?RedeemPayloadForMessage@MarketingCommsManager@@AEAA_NHI@Z(this, controllerIndex, responseMessageindex);
}

/*
==============
MarketingCommsManager::GetTotalMessageMaxCount
==============
*/

int __fastcall MarketingCommsManager::GetTotalMessageMaxCount(MarketingCommsManager *this)
{
  return ?GetTotalMessageMaxCount@MarketingCommsManager@@QEAAHXZ(this);
}

/*
==============
MarketingCommsManager::MarkMessagesReadOnBackendAsync
==============
*/

bool __fastcall MarketingCommsManager::MarkMessagesReadOnBackendAsync(MarketingCommsManager *this, int controllerIndex, int messageType, unsigned int itemIndex)
{
  return ?MarkMessagesReadOnBackendAsync@MarketingCommsManager@@QEAA_NHHI@Z(this, controllerIndex, messageType, itemIndex);
}

/*
==============
MarketingCommsManager::GetLocallyCachedMessageInformation
==============
*/

bool __fastcall MarketingCommsManager::GetLocallyCachedMessageInformation(MarketingCommsManager *this, int messageType, unsigned int itemIndex, bdJSONDeserializer *refMetaDataOut, bdJSONDeserializer *refContentDataOut)
{
  return ?GetLocallyCachedMessageInformation@MarketingCommsManager@@AEAA_NHIAEAVbdJSONDeserializer@@0@Z(this, messageType, itemIndex, refMetaDataOut, refContentDataOut);
}

/*
==============
MarketingCommsManager::ClearParsedJSONBuffersForLocationID
==============
*/

void __fastcall MarketingCommsManager::ClearParsedJSONBuffersForLocationID(MarketingCommsManager *this, const int controllerIndex, const int locationID)
{
  ?ClearParsedJSONBuffersForLocationID@MarketingCommsManager@@AEAAXHH@Z(this, controllerIndex, locationID);
}

/*
==============
MarketingCommsManager::RedeemAllCodesForMessage
==============
*/

bool __fastcall MarketingCommsManager::RedeemAllCodesForMessage(MarketingCommsManager *this, int controllerIndex, int locationID, unsigned int messageIndex)
{
  return ?RedeemAllCodesForMessage@MarketingCommsManager@@QEAA_NHHI@Z(this, controllerIndex, locationID, messageIndex);
}

/*
==============
MarketingCommsManager::GetMessageIndexForLocationIDCount
==============
*/

int __fastcall MarketingCommsManager::GetMessageIndexForLocationIDCount(MarketingCommsManager *this, int locationID, unsigned int messageCount)
{
  return ?GetMessageIndexForLocationIDCount@MarketingCommsManager@@QEAAHHI@Z(this, locationID, messageCount);
}

/*
==============
MarketingCommsManager::MarkResponseMessageReadOnBackendAsync
==============
*/

bool __fastcall MarketingCommsManager::MarkResponseMessageReadOnBackendAsync(MarketingCommsManager *this, int controllerIndex, int responseMessageItemIndex)
{
  return ?MarkResponseMessageReadOnBackendAsync@MarketingCommsManager@@AEAA_NHH@Z(this, controllerIndex, responseMessageItemIndex);
}

/*
==============
MarketingCommsManager::FetchMessagesFromBackendAsync
==============
*/

bool __fastcall MarketingCommsManager::FetchMessagesFromBackendAsync(MarketingCommsManager *this, int controllerIndex)
{
  return ?FetchMessagesFromBackendAsync@MarketingCommsManager@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
MarketingCommsManager::HasPayLoadAttachedToResponseMessage
==============
*/

bool __fastcall MarketingCommsManager::HasPayLoadAttachedToResponseMessage(MarketingCommsManager *this, unsigned int responseMessageindex)
{
  return ?HasPayLoadAttachedToResponseMessage@MarketingCommsManager@@AEAA_NI@Z(this, responseMessageindex);
}

/*
==============
MarketingCommsManager::GetInstance
==============
*/

MarketingCommsManager *__fastcall MarketingCommsManager::GetInstance()
{
  return ?GetInstance@MarketingCommsManager@@SAAEAV1@XZ();
}

/*
==============
MarketingCommsManager::ResetDynamicState
==============
*/

void __fastcall MarketingCommsManager::ResetDynamicState(MarketingCommsManager *this)
{
  ?ResetDynamicState@MarketingCommsManager@@AEAAXXZ(this);
}

/*
==============
MarketingCommsManager::IsGettingMOTD
==============
*/

bool __fastcall MarketingCommsManager::IsGettingMOTD(MarketingCommsManager *this)
{
  return ?IsGettingMOTD@MarketingCommsManager@@QEAA_NXZ(this);
}

/*
==============
MarketingCommsManager::ForceClearAllLocallyCachedData
==============
*/

void __fastcall MarketingCommsManager::ForceClearAllLocallyCachedData(MarketingCommsManager *this)
{
  ?ForceClearAllLocallyCachedData@MarketingCommsManager@@QEAAXXZ(this);
}

/*
==============
MarketingCommsManager::DoValidityCheck
==============
*/

bool __fastcall MarketingCommsManager::DoValidityCheck(MarketingCommsManager *this, bdJSONDeserializer *contentData)
{
  return ?DoValidityCheck@MarketingCommsManager@@AEAA_NAEAVbdJSONDeserializer@@@Z(this, contentData);
}

/*
==============
MarketingCommsManager::OnRegistered
==============
*/

void __fastcall MarketingCommsManager::OnRegistered(MarketingCommsManager *this)
{
  ?OnRegistered@MarketingCommsManager@@UEAAXXZ(this);
}

/*
==============
MarketingCommsManager::MarketingCommsManager
==============
*/

void __fastcall MarketingCommsManager::MarketingCommsManager(MarketingCommsManager *this)
{
  ??0MarketingCommsManager@@QEAA@XZ(this);
}

/*
==============
MarketingCommsManager::GetCachedMetaDataParsedMessageFromResponseMessageIndex
==============
*/

bool __fastcall MarketingCommsManager::GetCachedMetaDataParsedMessageFromResponseMessageIndex(MarketingCommsManager *this, int controllerIndex, unsigned int itemIndex, int *locationIDOut, bdJSONDeserializer *refContentDataOut, unsigned int *checksum32Out)
{
  return ?GetCachedMetaDataParsedMessageFromResponseMessageIndex@MarketingCommsManager@@AEAA_NHIAEAHAEAVbdJSONDeserializer@@AEAI@Z(this, controllerIndex, itemIndex, locationIDOut, refContentDataOut, checksum32Out);
}

/*
==============
MarketingCommsManager::Frame
==============
*/

void __fastcall MarketingCommsManager::Frame(MarketingCommsManager *this)
{
  ?Frame@MarketingCommsManager@@UEAAXXZ(this);
}

/*
==============
MarketingCommsManager::OnFrontEnd_FreeSystemsMemory
==============
*/

void __fastcall MarketingCommsManager::OnFrontEnd_FreeSystemsMemory(MarketingCommsManager *this)
{
  ?OnFrontEnd_FreeSystemsMemory@MarketingCommsManager@@UEAAXXZ(this);
}

/*
==============
MarketingCommsManager::OnFrontEnd_AllocateSystemsMemory
==============
*/

void __fastcall MarketingCommsManager::OnFrontEnd_AllocateSystemsMemory(MarketingCommsManager *this)
{
  ?OnFrontEnd_AllocateSystemsMemory@MarketingCommsManager@@UEAAXXZ(this);
}

/*
==============
OnFetchMessagesFromBackendAsyncComplete
==============
*/

void __fastcall OnFetchMessagesFromBackendAsyncComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnFetchMessagesFromBackendAsyncComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
MarketingCommsManager::GetMessageToDisplayCount
==============
*/

int __fastcall MarketingCommsManager::GetMessageToDisplayCount(MarketingCommsManager *this, int messageType)
{
  return ?GetMessageToDisplayCount@MarketingCommsManager@@QEAAHH@Z(this, messageType);
}

/*
==============
MarketingCommsManager::OnMOTDFetchComplete
==============
*/

void __fastcall MarketingCommsManager::OnMOTDFetchComplete(MarketingCommsManager *this, int controllerIndex, GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnMOTDFetchComplete@MarketingCommsManager@@AEAAXHPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(this, controllerIndex, pTask, taskState);
}

/*
==============
MarketingCommsManager::DoBufferPointerFixup
==============
*/

void __fastcall MarketingCommsManager::DoBufferPointerFixup(MarketingCommsManager *this)
{
  ?DoBufferPointerFixup@MarketingCommsManager@@AEAAXXZ(this);
}

/*
==============
MarketingCommsManager::OnSignedOut
==============
*/

void __fastcall MarketingCommsManager::OnSignedOut(MarketingCommsManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@MarketingCommsManager@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
MarketingCommsManager::OnSignedIn
==============
*/

void __fastcall MarketingCommsManager::OnSignedIn(MarketingCommsManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@MarketingCommsManager@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
MarketingCommsManager::FetchBatchedMessagesForPrimaryLocalClientIfActive
==============
*/

void __fastcall MarketingCommsManager::FetchBatchedMessagesForPrimaryLocalClientIfActive(MarketingCommsManager *this)
{
  ?FetchBatchedMessagesForPrimaryLocalClientIfActive@MarketingCommsManager@@AEAAXXZ(this);
}

/*
==============
MarketingCommsManager::GetCachedMetaDataParsedMessage
==============
*/

bool __fastcall MarketingCommsManager::GetCachedMetaDataParsedMessage(MarketingCommsManager *this, int controllerIndex, int messageType, unsigned int itemIndex, bdJSONDeserializer *refContentDataOut, unsigned int *checksum32Out)
{
  return ?GetCachedMetaDataParsedMessage@MarketingCommsManager@@QEAA_NHHIAEAVbdJSONDeserializer@@AEAI@Z(this, controllerIndex, messageType, itemIndex, refContentDataOut, checksum32Out);
}

/*
==============
MarketingCommsManager::DEV_TestCodeRedemption
==============
*/

void __fastcall MarketingCommsManager::DEV_TestCodeRedemption(MarketingCommsManager *this, const int controllerIndex, unsigned int locationID, unsigned int messageIndex)
{
  ?DEV_TestCodeRedemption@MarketingCommsManager@@AEAAXHII@Z(this, controllerIndex, locationID, messageIndex);
}

/*
==============
MarketingCommsManager::GetMessageCountForLocationID
==============
*/

unsigned int __fastcall MarketingCommsManager::GetMessageCountForLocationID(MarketingCommsManager *this, int locationID)
{
  return ?GetMessageCountForLocationID@MarketingCommsManager@@AEAAIH@Z(this, locationID);
}

/*
==============
MarketingCommsManager::HasPayLoadAttachedByLocationIDCount
==============
*/

bool __fastcall MarketingCommsManager::HasPayLoadAttachedByLocationIDCount(MarketingCommsManager *this, int messageType, unsigned int itemIndex)
{
  return ?HasPayLoadAttachedByLocationIDCount@MarketingCommsManager@@QEAA_NHI@Z(this, messageType, itemIndex);
}

/*
==============
MarketingCommsManager::HandleFetchTaskComplete
==============
*/

void __fastcall MarketingCommsManager::HandleFetchTaskComplete(MarketingCommsManager *this, GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?HandleFetchTaskComplete@MarketingCommsManager@@QEAAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(this, pTask, taskState);
}

/*
==============
MarketingCommsManager::IsMessageForLocationID
==============
*/

bool __fastcall MarketingCommsManager::IsMessageForLocationID(MarketingCommsManager *this, unsigned int messageIndex, int locationID)
{
  return ?IsMessageForLocationID@MarketingCommsManager@@AEAA_NIH@Z(this, messageIndex, locationID);
}

/*
==============
MarketingCommsManager::SetupBatchRequestForCurrentGameMode
==============
*/

bool __fastcall MarketingCommsManager::SetupBatchRequestForCurrentGameMode(MarketingCommsManager *this)
{
  return ?SetupBatchRequestForCurrentGameMode@MarketingCommsManager@@AEAA_NXZ(this);
}

/*
==============
MarketingCommsManager::OnFrontEnd_AllocateSystemsMemory
==============
*/
void MarketingCommsManager::OnFrontEnd_AllocateSystemsMemory(MarketingCommsManager *this)
{
  char v2; 
  bdCommsGetMessagesResponse *v3; 
  ParsedJSONCache *v4; 
  bdCommsGetMessagesRequest *v5; 
  bdCommsGetMessagesRequest *v6; 
  const char *v7; 
  bdCommsGetMessagesResponse *v8; 
  bdCommsGetMessagesResponse *v9; 
  bdCommsLocationCount v10; 

  v2 = 0;
  v3 = NULL;
  this->m_parsedJSONCachesAllocation = NULL;
  this->m_controllerIndexFetched = -1;
  memset_0(this->m_parsedJSONCaches, 0, sizeof(this->m_parsedJSONCaches));
  *(_QWORD *)this->m_messagesParsedForApplication = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[2] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[4] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[6] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[8] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[10] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[12] = 0i64;
  this->m_messagesParsedForApplication[14] = 0;
  Com_Printf(25, "MarketingCommsManager: allocating %d bytes using PMem_Alloc.\n", 92280i64);
  v4 = (ParsedJSONCache *)PMem_Alloc(0x16878ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "ParsedJSONCache");
  this->m_parsedJSONCachesAllocation = v4;
  memset_0(v4, 0, 0x16878ui64);
  this->m_needsCachePointerFixup = 1;
  if ( !this->m_request )
  {
    bdCommsLocationCount::bdCommsLocationCount(&v10);
    v5 = (bdCommsGetMessagesRequest *)bdMemory::allocate(0x58ui64);
    if ( v5 )
      bdCommsGetMessagesRequest::bdCommsGetMessagesRequest(v5);
    else
      v6 = NULL;
    this->m_request = v6;
    bdCommsGetMessagesRequest::reset(v6);
    strncpy((char *)&this->m_request->__vftable + 16, "iw_xbl", 0x10ui64);
    v7 = "en";
    switch ( SEH_GetCurrentLanguage() )
    {
      case 2:
        v7 = "fr";
        break;
      case 3:
        v7 = "de";
        break;
      case 4:
        v7 = "it";
        break;
      case 5:
        v7 = "es";
        break;
      case 6:
      case 7:
        v7 = "ru";
        break;
      case 8:
      case 9:
        v7 = "pl";
        break;
      case 10:
      case 11:
        v7 = "ko";
        break;
      case 12:
      case 13:
        v7 = "ja";
        break;
      case 14:
      case 16:
        v7 = "zh-CN";
        break;
      case 15:
        v7 = "zh";
        break;
      case 17:
        v7 = "ar";
        break;
      case 18:
        v7 = "cs";
        break;
      case 19:
        v7 = "es-MX";
        break;
      case 20:
        v7 = "pt";
        break;
      default:
        break;
    }
    strncpy(this->m_request->m_languageCode, v7, 0x14ui64);
    v2 = 1;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v10.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&v10.__vftable + 3));
  }
  if ( !this->m_responses )
  {
    v8 = (bdCommsGetMessagesResponse *)bdMemory::allocate(0x30ui64);
    if ( v8 )
    {
      bdCommsGetMessagesResponse::bdCommsGetMessagesResponse(v8);
      v3 = v9;
    }
    this->m_responses = v3;
  }
  if ( !v2 )
    MarketingCommsManager::FetchBatchedMessagesForPrimaryLocalClientIfActive(this);
}

/*
==============
MarketingCommsManager::OnFrontEnd_FreeSystemsMemory
==============
*/
void MarketingCommsManager::OnFrontEnd_FreeSystemsMemory(MarketingCommsManager *this)
{
  Com_Printf(25, "MarketingCommsManager: freeing buffers previously allocated using PMem_Alloc.\n");
  this->m_parsedJSONCachesAllocation = NULL;
  this->m_controllerIndexFetched = -1;
  memset_0(this->m_parsedJSONCaches, 0, sizeof(this->m_parsedJSONCaches));
  *(_QWORD *)this->m_messagesParsedForApplication = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[2] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[4] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[6] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[8] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[10] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[12] = 0i64;
  this->m_messagesParsedForApplication[14] = 0;
}

/*
==============
MarketingCommsManager::Init
==============
*/
char MarketingCommsManager::Init(MarketingCommsManager *this)
{
  this->m_lastBatchFetchTime = Sys_Milliseconds() - 1800000;
  return 1;
}

/*
==============
MarketingCommsManager::OnSignedIn
==============
*/
void MarketingCommsManager::OnSignedIn(MarketingCommsManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ParsedJSONCache **v4; 
  unsigned int *m_messageCacheSizeLimits; 
  __int64 v6; 
  unsigned int i; 
  __int64 v8; 
  __int64 v9; 
  _BYTE *v10; 
  unsigned int j; 
  __int64 v12; 
  ParsedJSONCache *v13; 
  unsigned int k; 
  ParsedJSONCache *v15; 
  __int64 v16; 
  ParsedJSONCache *v17; 
  unsigned int m; 
  ParsedJSONCache *v19; 
  __int64 v20; 
  ParsedJSONCache *v21; 
  unsigned int n; 
  ParsedJSONCache *v23; 
  __int64 v24; 
  ParsedJSONCache *v25; 

  v4 = &this->m_parsedJSONCaches[1];
  m_messageCacheSizeLimits = this->m_messageCacheSizeLimits;
  v6 = 3i64;
  do
  {
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( i = 0; i < *m_messageCacheSizeLimits; ++i )
      {
        v8 = (__int64)*(v4 - 1);
        if ( v8 )
        {
          v9 = i;
          v10 = (_BYTE *)(v9 * 6152 + v8);
          v10[6144] = 0;
          (*(v4 - 1))[v9].m_checksum32 = 0;
          memset_0(v10, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[15] = 0;
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( j = 0; j < m_messageCacheSizeLimits[1]; ++j )
      {
        if ( *v4 )
        {
          v12 = j;
          v13 = &(*v4)[v12];
          v13->m_bIsParsed = 0;
          (*v4)[v12].m_checksum32 = 0;
          memset_0(v13, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[16] = 0;
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( k = 0; k < m_messageCacheSizeLimits[2]; ++k )
      {
        v15 = v4[1];
        if ( v15 )
        {
          v16 = k;
          v17 = &v15[v16];
          v17->m_bIsParsed = 0;
          v4[1][v16].m_checksum32 = 0;
          memset_0(v17, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[17] = 0;
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( m = 0; m < m_messageCacheSizeLimits[3]; ++m )
      {
        v19 = v4[2];
        if ( v19 )
        {
          v20 = m;
          v21 = &v19[v20];
          v21->m_bIsParsed = 0;
          v4[2][v20].m_checksum32 = 0;
          memset_0(v21, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[18] = 0;
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( n = 0; n < m_messageCacheSizeLimits[4]; ++n )
      {
        v23 = v4[3];
        if ( v23 )
        {
          v24 = n;
          v25 = &v23[v24];
          v25->m_bIsParsed = 0;
          v4[3][v24].m_checksum32 = 0;
          memset_0(v25, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[19] = 0;
    v4 += 5;
    m_messageCacheSizeLimits += 5;
    --v6;
  }
  while ( v6 );
}

/*
==============
MarketingCommsManager::OnSignedOut
==============
*/
void MarketingCommsManager::OnSignedOut(MarketingCommsManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ParsedJSONCache **v4; 
  unsigned int *m_messageCacheSizeLimits; 
  __int64 v6; 
  unsigned int i; 
  __int64 v8; 
  __int64 v9; 
  _BYTE *v10; 
  unsigned int j; 
  __int64 v12; 
  ParsedJSONCache *v13; 
  unsigned int k; 
  ParsedJSONCache *v15; 
  __int64 v16; 
  ParsedJSONCache *v17; 
  unsigned int m; 
  ParsedJSONCache *v19; 
  __int64 v20; 
  ParsedJSONCache *v21; 
  unsigned int n; 
  ParsedJSONCache *v23; 
  __int64 v24; 
  ParsedJSONCache *v25; 

  v4 = &this->m_parsedJSONCaches[1];
  m_messageCacheSizeLimits = this->m_messageCacheSizeLimits;
  v6 = 3i64;
  do
  {
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( i = 0; i < *m_messageCacheSizeLimits; ++i )
      {
        v8 = (__int64)*(v4 - 1);
        if ( v8 )
        {
          v9 = i;
          v10 = (_BYTE *)(v9 * 6152 + v8);
          v10[6144] = 0;
          (*(v4 - 1))[v9].m_checksum32 = 0;
          memset_0(v10, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[15] = 0;
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( j = 0; j < m_messageCacheSizeLimits[1]; ++j )
      {
        if ( *v4 )
        {
          v12 = j;
          v13 = &(*v4)[v12];
          v13->m_bIsParsed = 0;
          (*v4)[v12].m_checksum32 = 0;
          memset_0(v13, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[16] = 0;
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( k = 0; k < m_messageCacheSizeLimits[2]; ++k )
      {
        v15 = v4[1];
        if ( v15 )
        {
          v16 = k;
          v17 = &v15[v16];
          v17->m_bIsParsed = 0;
          v4[1][v16].m_checksum32 = 0;
          memset_0(v17, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[17] = 0;
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( m = 0; m < m_messageCacheSizeLimits[3]; ++m )
      {
        v19 = v4[2];
        if ( v19 )
        {
          v20 = m;
          v21 = &v19[v20];
          v21->m_bIsParsed = 0;
          v4[2][v20].m_checksum32 = 0;
          memset_0(v21, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[18] = 0;
    if ( this->m_parsedJSONCachesAllocation )
    {
      for ( n = 0; n < m_messageCacheSizeLimits[4]; ++n )
      {
        v23 = v4[3];
        if ( v23 )
        {
          v24 = n;
          v25 = &v23[v24];
          v25->m_bIsParsed = 0;
          v4[3][v24].m_checksum32 = 0;
          memset_0(v25, 0, 0x1800ui64);
        }
      }
    }
    m_messageCacheSizeLimits[19] = 0;
    v4 += 5;
    m_messageCacheSizeLimits += 5;
    --v6;
  }
  while ( v6 );
}

/*
==============
MarketingCommsManager::OnRegistered
==============
*/
void MarketingCommsManager::OnRegistered(MarketingCommsManager *this)
{
  *(_QWORD *)this->m_messagesParsedForApplication = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[2] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[4] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[6] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[8] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[10] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[12] = 0i64;
  this->m_messagesParsedForApplication[14] = 0;
  this->m_isInitialized = 1;
  Cmd_AddCommandInternal("markCRMMessageRead", MarkMessageRead_f, &MarkMessageRead_f_VAR);
  Cmd_AddCommandInternal("clickCRMMessageAction", ClickMessageAction_f, &ClickMessageAction_f_VAR);
}

/*
==============
MarketingCommsManager::OnUnregistered
==============
*/
void MarketingCommsManager::OnUnregistered(MarketingCommsManager *this)
{
  bdCommsGetMessagesRequest *m_request; 
  __int64 v3; 
  bdCommsGetMessagesResponse *m_responses; 
  __int64 v5; 

  this->m_isInitialized = 0;
  m_request = this->m_request;
  if ( m_request )
  {
    v3 = *(int *)(*((_QWORD *)&m_request->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&m_request->__vftable + v3 + 8))((__int64)&m_request->__vftable + v3 + 8, 1i64);
  }
  m_responses = this->m_responses;
  this->m_request = NULL;
  if ( m_responses )
  {
    v5 = *(int *)(*((_QWORD *)&m_responses->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&m_responses->__vftable + v5 + 8))((__int64)&m_responses->__vftable + v5 + 8, 1i64);
  }
  this->m_responses = NULL;
  Cmd_RemoveCommand("markCRMMessageRead");
}

/*
==============
MarketingCommsManager::Frame
==============
*/
void MarketingCommsManager::Frame(MarketingCommsManager *this)
{
  unsigned int v2; 
  int m_scheduledBatchFetchTime; 

  v2 = Sys_Milliseconds();
  this->m_currentFrameTime = v2;
  if ( clientUIActives[0].frontEndSceneState[0] || clientUIActives[0].connectionState < CA_CONNECTED )
  {
    m_scheduledBatchFetchTime = this->m_scheduledBatchFetchTime;
    if ( m_scheduledBatchFetchTime )
    {
      if ( (int)(v2 - m_scheduledBatchFetchTime) > 0 )
      {
        this->m_scheduledBatchFetchTime = 0;
        Com_Printf(25, "Calling queued FetchBatchedMessagesForPrimaryLocalClientIfActive() at time %d!\n", v2);
        MarketingCommsManager::FetchBatchedMessagesForPrimaryLocalClientIfActive(this);
      }
    }
  }
}

/*
==============
MarketingCommsManager::MarketingCommsManager
==============
*/
void MarketingCommsManager::MarketingCommsManager(MarketingCommsManager *this)
{
  this->m_nextSystem = NULL;
  this->m_initialized = 0;
  this->__vftable = (MarketingCommsManager_vtbl *)&MarketingCommsManager::`vftable';
  TaskCreateRequest::TaskCreateRequest(&this->m_requestTask);
  *(_QWORD *)this->m_messageCacheSizeLimits = 0i64;
  *(_QWORD *)&this->m_messageCacheSizeLimits[4] = 0i64;
  *(_QWORD *)&this->m_messageCacheSizeLimits[6] = 0i64;
  *(_QWORD *)&this->m_messageCacheSizeLimits[8] = 0i64;
  *(_QWORD *)&this->m_messageCacheSizeLimits[10] = 0i64;
  this->m_parsedJSONCachesAllocation = NULL;
  this->m_controllerIndexFetched = -1;
  memset_0(this->m_parsedJSONCaches, 0, sizeof(this->m_parsedJSONCaches));
  *(_QWORD *)this->m_messagesParsedForApplication = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[2] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[4] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[6] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[8] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[10] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[12] = 0i64;
  this->m_messagesParsedForApplication[14] = 0;
  this->m_messageCacheSizeLimits[0] = 0;
  this->m_messageCacheSizeLimits[1] = 1;
  *(_QWORD *)&this->m_messageCacheSizeLimits[2] = 5i64;
  this->m_messageCacheSizeLimits[6] = 1;
  this->m_messageCacheSizeLimits[7] = 5;
  this->m_messageCacheSizeLimits[8] = 5;
  this->m_messageCacheSizeLimits[9] = 2;
  this->m_messageCacheSizeLimits[10] = 2;
  this->m_messageCacheSizeLimits[11] = 1;
  *(_QWORD *)&this->m_messageCacheSizeLimits[12] = 5i64;
  this->m_messageCacheSizeLimits[14] = 0;
}

/*
==============
MarketingCommsManager::ClearParsedJSONBuffersForLocationID
==============
*/
void MarketingCommsManager::ClearParsedJSONBuffersForLocationID(MarketingCommsManager *this, const int controllerIndex, const int locationID)
{
  __int64 v3; 
  unsigned int v5; 
  ParsedJSONCache *v6; 
  __int64 v7; 
  ParsedJSONCache *v8; 

  v3 = locationID;
  if ( this->m_parsedJSONCachesAllocation )
  {
    v5 = 0;
    if ( this->m_messageCacheSizeLimits[locationID] )
    {
      do
      {
        v6 = this->m_parsedJSONCaches[v3];
        if ( v6 )
        {
          v7 = v5;
          v8 = &v6[v7];
          v8->m_bIsParsed = 0;
          this->m_parsedJSONCaches[v3][v7].m_checksum32 = 0;
          memset_0(v8, 0, 0x1800ui64);
        }
        ++v5;
      }
      while ( v5 < this->m_messageCacheSizeLimits[v3] );
      this->m_messagesParsedForApplication[v3] = 0;
    }
    else
    {
      this->m_messagesParsedForApplication[locationID] = 0;
    }
  }
  else
  {
    this->m_messagesParsedForApplication[locationID] = 0;
  }
}

/*
==============
ClickMessageAction_f
==============
*/
void ClickMessageAction_f()
{
  const char *v0; 
  unsigned int v1; 
  unsigned int v2; 
  const char *v3; 
  const char *interaction_details; 
  int v5; 

  if ( Cmd_Argc() >= 4 )
  {
    v1 = Cmd_ArgInt(1);
    v2 = Cmd_ArgInt(2);
    v3 = Cmd_Argv(3);
    interaction_details = Cmd_Argv(4);
    v5 = Cmd_LocalControllerIndex();
    Online_Telemetry_SendMOTDClick(v5, v1, v2, v3, interaction_details);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
MarketingCommsManager::DEV_TestCodeRedemption
==============
*/
void MarketingCommsManager::DEV_TestCodeRedemption(MarketingCommsManager *this, const int controllerIndex, unsigned int locationID, unsigned int messageIndex)
{
  signed int MessageIndexForLocationIDCount; 
  Online_Redeemables *Instance; 
  Online_Redeemables::eRedeemableFailuresReasons v10; 

  if ( (int)MarketingCommsManager::GetMessageCountForLocationID(this, locationID) > 0 && MarketingCommsManager::GetMessageIndexForLocationIDCount(this, locationID, messageIndex) >= 0 )
  {
    if ( crm_enabled && crm_enabled->current.enabled )
    {
      MessageIndexForLocationIDCount = MarketingCommsManager::GetMessageIndexForLocationIDCount(this, locationID, messageIndex);
      if ( MessageIndexForLocationIDCount >= 0 )
      {
        MarketingCommsManager::RedeemPayloadForMessage(this, controllerIndex, MessageIndexForLocationIDCount);
        return;
      }
      Instance = Online_Redeemables::GetInstance();
      v10 = NO_MSG_FOR_INDEX;
    }
    else
    {
      Instance = Online_Redeemables::GetInstance();
      v10 = COMMS_DISABLED;
    }
    Online_Redeemables::NotifyLuiRedemptionComplete(Instance, controllerIndex, 0, v10, 1, NULL);
  }
}

/*
==============
MarketingCommsManager::DoBufferPointerFixup
==============
*/
void MarketingCommsManager::DoBufferPointerFixup(MarketingCommsManager *this)
{
  ;
}

/*
==============
MarketingCommsManager::DoValidityCheck
==============
*/
char MarketingCommsManager::DoValidityCheck(MarketingCommsManager *this, bdJSONDeserializer *contentData)
{
  char v3; 
  __int64 v4; 
  char v5; 
  bdJSONDeserializer v7; 
  char value[256]; 

  if ( !bdJSONDeserializer::hasKey(contentData, "REDC_LIST") )
    return 1;
  v3 = 0;
  bdJSONDeserializer::bdJSONDeserializer(&v7);
  if ( bdJSONDeserializer::getString(contentData, "action", value, 0x100u) )
  {
    v4 = 0i64;
    while ( 1 )
    {
      v5 = value[v4++];
      if ( v5 != aRedeem_0[v4 - 1] )
        break;
      if ( v4 == 7 )
      {
        v3 = 1;
        goto LABEL_8;
      }
    }
  }
  Com_PrintError(16, "DoValidityCheck failed for CRM message! Key \"%s\" must be set to \"%s\" when a redemption code is included!\n", "action", "redeem");
LABEL_8:
  bdJSONDeserializer::~bdJSONDeserializer(&v7);
  return v3;
}

/*
==============
MarketingCommsManager::FetchBatchedMessagesForPrimaryLocalClientIfActive
==============
*/
void MarketingCommsManager::FetchBatchedMessagesForPrimaryLocalClientIfActive(MarketingCommsManager *this)
{
  __int64 ControllerFromClient; 

  ControllerFromClient = (unsigned int)CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  Com_Printf(25, "FetchBatchedMessagesForPrimaryLocalClientIfActive() controllerIndex %d\n", ControllerFromClient);
  if ( !Live_IsOfflineTool() && CL_Mgr_IsControllerActive(ControllerFromClient) && Live_IsUserSignedInToLive(ControllerFromClient) )
    MarketingCommsManager::FetchMessagesFromBackendAsync(this, ControllerFromClient);
}

/*
==============
MarketingCommsManager::FetchMessagesFromBackendAsync
==============
*/
bool MarketingCommsManager::FetchMessagesFromBackendAsync(MarketingCommsManager *this, int controllerIndex)
{
  bool v4; 
  int integer; 
  int m_lastBatchFetchTime; 
  __int64 v7; 
  DWServicesAccess *Instance; 
  DWMarketingComms *MarketingComms; 
  const bdReference<bdRemoteTask> *CommMessages; 
  TaskManager *v11; 
  char *fmt; 
  __int64 v13; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1080, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !crm_enabled || !crm_enabled->current.enabled || !Live_IsUserSignedInToLive(controllerIndex) )
    return 0;
  if ( !MarketingCommsManager::SetupBatchRequestForCurrentGameMode(this) )
  {
    Com_Printf(25, "FetchMessagesFromBackendAsync( controller: %d ) - SetupBatchRequestForCurrentGameMode FAILED!\n", (unsigned int)controllerIndex);
    return 0;
  }
  if ( crm_fetch_min_delay_ms && (integer = crm_fetch_min_delay_ms->current.integer, m_lastBatchFetchTime = this->m_lastBatchFetchTime, this->m_currentFrameTime - m_lastBatchFetchTime < integer) )
  {
    v7 = (unsigned int)(integer + m_lastBatchFetchTime);
    this->m_scheduledBatchFetchTime = v7;
    LODWORD(fmt) = crm_fetch_min_delay_ms->current.integer;
    Com_Printf(25, "FetchMessagesFromBackendAsync( controller: %d ) - Call being queued to occur at time %d in %dms!\n", (unsigned int)controllerIndex, v7, fmt);
    return 0;
  }
  else
  {
    if ( !clientUIActives[0].frontEndSceneState[0] && clientUIActives[0].connectionState >= CA_CONNECTED )
    {
      this->m_scheduledBatchFetchTime = this->m_currentFrameTime;
      Com_Printf(25, "FetchMessagesFromBackendAsync( controller: %d ) - Call being queued to occur as soon as possible once we're no longer in a game.\n", (unsigned int)controllerIndex);
      return 0;
    }
    if ( this->m_request && this->m_responses )
    {
      if ( this->m_requestTask.m_remoteDemonwareTask.m_ptr )
      {
        Com_PrintWarning(25, "FetchMessagesFromBackendAsync( controller: %d ) failed - a task is already in progress!\n", (unsigned int)controllerIndex);
        return 0;
      }
      else
      {
        Instance = DWServicesAccess::GetInstance();
        MarketingComms = DWServicesAccess::GetMarketingComms(Instance, controllerIndex);
        CommMessages = DWMarketingComms::getCommMessages(MarketingComms, &result, this->m_request, this->m_responses);
        bdReference<bdRemoteTask>::operator=(&this->m_requestTask.m_remoteDemonwareTask, CommMessages);
        if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        if ( this->m_requestTask.m_remoteDemonwareTask.m_ptr )
        {
          pTaskCreateResult.m_localTaskId = 0;
          this->m_requestTask.m_onCompletionCallback = OnFetchMessagesFromBackendAsyncComplete;
          pTaskCreateResult.m_task = NULL;
          this->m_controllerIndexFetched = controllerIndex;
          this->m_requestTask.m_controllerIndex = controllerIndex;
          v11 = TaskManager::GetInstance();
          if ( TaskManager::CreateTask(v11, &this->m_requestTask, &pTaskCreateResult) )
          {
            LODWORD(v13) = this->m_currentFrameTime - this->m_lastBatchFetchTime;
            LODWORD(fmt) = this->m_currentFrameTime;
            Com_Printf(25, "FetchMessagesFromBackendAsync( controller: %d ) - CreateTask created task id %d at time %d (%dms since last fetch)!\n", (unsigned int)controllerIndex, pTaskCreateResult.m_localTaskId, fmt, v13);
            this->m_lastBatchFetchTime = this->m_currentFrameTime;
            v4 = 1;
            this->m_isGettingCRMMOTD = 1;
            this->m_scheduledBatchFetchTime = 0;
          }
          else
          {
            Com_PrintError(25, "FetchMessagesFromBackendAsync( controller: %d ) - CreateTask failed!\n", (unsigned int)controllerIndex);
            return 0;
          }
        }
        else
        {
          Com_Printf(25, "FetchMessagesFromBackendAsync( controller: %d ) - getCommMessages FAILED to create a Demonware Task!\n", (unsigned int)controllerIndex);
          return 0;
        }
      }
    }
    else
    {
      Com_Printf(25, "FetchMessagesFromBackendAsync() has no buffers setup for a response!\n");
      return 0;
    }
  }
  return v4;
}

/*
==============
MarketingCommsManager::ForceClearAllLocallyCachedData
==============
*/
void MarketingCommsManager::ForceClearAllLocallyCachedData(MarketingCommsManager *this)
{
  unsigned int *m_messageCacheSizeLimits; 
  ParsedJSONCache **v3; 
  __int64 v4; 
  unsigned int i; 
  __int64 v6; 
  __int64 v7; 
  _BYTE *v8; 
  unsigned int j; 
  __int64 v10; 
  ParsedJSONCache *v11; 
  unsigned int k; 
  ParsedJSONCache *v13; 
  __int64 v14; 
  ParsedJSONCache *v15; 
  unsigned int m; 
  ParsedJSONCache *v17; 
  __int64 v18; 
  ParsedJSONCache *v19; 
  unsigned int n; 
  ParsedJSONCache *v21; 
  __int64 v22; 
  ParsedJSONCache *v23; 

  if ( this->m_controllerIndexFetched != -1 )
  {
    m_messageCacheSizeLimits = this->m_messageCacheSizeLimits;
    v3 = &this->m_parsedJSONCaches[1];
    v4 = 3i64;
    do
    {
      if ( this->m_parsedJSONCachesAllocation )
      {
        for ( i = 0; i < *m_messageCacheSizeLimits; ++i )
        {
          v6 = (__int64)*(v3 - 1);
          if ( v6 )
          {
            v7 = i;
            v8 = (_BYTE *)(v7 * 6152 + v6);
            v8[6144] = 0;
            (*(v3 - 1))[v7].m_checksum32 = 0;
            memset_0(v8, 0, 0x1800ui64);
          }
        }
      }
      m_messageCacheSizeLimits[15] = 0;
      if ( this->m_parsedJSONCachesAllocation )
      {
        for ( j = 0; j < m_messageCacheSizeLimits[1]; ++j )
        {
          if ( *v3 )
          {
            v10 = j;
            v11 = &(*v3)[v10];
            v11->m_bIsParsed = 0;
            (*v3)[v10].m_checksum32 = 0;
            memset_0(v11, 0, 0x1800ui64);
          }
        }
      }
      m_messageCacheSizeLimits[16] = 0;
      if ( this->m_parsedJSONCachesAllocation )
      {
        for ( k = 0; k < m_messageCacheSizeLimits[2]; ++k )
        {
          v13 = v3[1];
          if ( v13 )
          {
            v14 = k;
            v15 = &v13[v14];
            v15->m_bIsParsed = 0;
            v3[1][v14].m_checksum32 = 0;
            memset_0(v15, 0, 0x1800ui64);
          }
        }
      }
      m_messageCacheSizeLimits[17] = 0;
      if ( this->m_parsedJSONCachesAllocation )
      {
        for ( m = 0; m < m_messageCacheSizeLimits[3]; ++m )
        {
          v17 = v3[2];
          if ( v17 )
          {
            v18 = m;
            v19 = &v17[v18];
            v19->m_bIsParsed = 0;
            v3[2][v18].m_checksum32 = 0;
            memset_0(v19, 0, 0x1800ui64);
          }
        }
      }
      m_messageCacheSizeLimits[18] = 0;
      if ( this->m_parsedJSONCachesAllocation )
      {
        for ( n = 0; n < m_messageCacheSizeLimits[4]; ++n )
        {
          v21 = v3[3];
          if ( v21 )
          {
            v22 = n;
            v23 = &v21[v22];
            v23->m_bIsParsed = 0;
            v3[3][v22].m_checksum32 = 0;
            memset_0(v23, 0, 0x1800ui64);
          }
        }
      }
      m_messageCacheSizeLimits[19] = 0;
      v3 += 5;
      m_messageCacheSizeLimits += 5;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
MarketingCommsManager::GetCachedMetaDataParsedMessage
==============
*/
bool MarketingCommsManager::GetCachedMetaDataParsedMessage(MarketingCommsManager *this, int controllerIndex, int messageType, unsigned int itemIndex, bdJSONDeserializer *refContentDataOut, unsigned int *checksum32Out)
{
  __int64 v6; 
  __int64 v8; 
  bdCommsGetMessagesResponse *m_responses; 
  ParsedJSONCache *v11; 
  __int64 v12; 
  __int64 v13; 
  ParsedJSONCache *v14; 
  ParsedJSONCache *v15; 
  unsigned int i; 
  __int64 v17; 
  ParsedJSONCache *v18; 
  bool result; 
  char *fmt; 
  __int64 v21; 
  __int64 v22; 

  v6 = itemIndex;
  v8 = messageType;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1302, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (unsigned int)v8 >= 0xF )
  {
    LODWORD(v22) = 15;
    LODWORD(v21) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1303, ASSERT_TYPE_ASSERT, "(unsigned)( messageType ) < (unsigned)( 15 )", "messageType doesn't index MAX_CRM_LOCATION_TYPES_ALLOWED\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  LODWORD(fmt) = v6;
  Com_Printf(25, "GetCachedMetaDataParsedMessage( controller: %d, messageID: %d itemIndex: %d ) LUI requesting data\n", (unsigned int)controllerIndex, (unsigned int)v8, fmt);
  if ( (int)v8 >= 6 )
  {
    if ( (int)v8 > 7 )
    {
      if ( (unsigned int)(v8 - 11) <= 2 )
        Com_Printf(25, "GetCachedMetaDataParsedMessage LUI requesting CP specific message type\n");
    }
    else
    {
      Com_Printf(25, "GetCachedMetaDataParsedMessage LUI requesting BR specific message type\n");
    }
  }
  else
  {
    Com_Printf(25, "GetCachedMetaDataParsedMessage LUI requesting MP specific message type\n");
  }
  if ( this->m_controllerIndexFetched != controllerIndex )
    return 0;
  m_responses = this->m_responses;
  if ( !m_responses || (unsigned int)v6 >= this->m_messageCacheSizeLimits[v8] || !*((_DWORD *)&m_responses->__vftable + 7) )
    return 0;
  v11 = this->m_parsedJSONCaches[v8];
  if ( !v11 )
    return 0;
  v12 = v6;
  if ( !v11[v6].m_bIsParsed )
  {
    MarketingCommsManager::ParseContentBufferReplaceJSONMetaDataTags(this, controllerIndex, v8, v6);
    v13 = -1i64;
    v14 = &this->m_parsedJSONCaches[v8][v12];
    do
      ++v13;
    while ( v14->m_parsedJSON[v13] );
    v15 = &this->m_parsedJSONCaches[v8][v12];
    for ( i = -1; v13; --v13 )
    {
      v17 = (unsigned __int8)v15->m_parsedJSON[0];
      v15 = (ParsedJSONCache *)((char *)v15 + 1);
      i = (i >> 8) ^ g_crc32Table[v17 ^ (unsigned __int8)i];
    }
    v14->m_checksum32 = ~i;
  }
  v18 = &this->m_parsedJSONCaches[v8][v12];
  if ( !v18->m_bIsParsed || !v18->m_parsedJSON[0] )
    return 0;
  result = bdJSONDeserializer::parse(refContentDataOut, v18->m_parsedJSON);
  *checksum32Out = this->m_parsedJSONCaches[v8][v12].m_checksum32;
  return result;
}

/*
==============
MarketingCommsManager::GetCachedMetaDataParsedMessageFromResponseMessageIndex
==============
*/
bool MarketingCommsManager::GetCachedMetaDataParsedMessageFromResponseMessageIndex(MarketingCommsManager *this, int controllerIndex, unsigned int itemIndex, int *locationIDOut, bdJSONDeserializer *refContentDataOut, unsigned int *checksum32Out)
{
  bdFastArray<bdCommsMessage> *m_responses; 
  unsigned int m_size; 
  unsigned int v12; 
  unsigned int v13; 
  bdCommsMessage *v14; 
  bdCommsMessage *v15; 
  bdCommsMessage *v16; 
  int m_locationID; 
  unsigned int v18; 

  if ( this->m_controllerIndexFetched != controllerIndex )
    return 0;
  m_responses = (bdFastArray<bdCommsMessage> *)this->m_responses;
  if ( !m_responses )
    return 0;
  m_size = m_responses[1].m_size;
  if ( !m_size || itemIndex >= m_size )
    return 0;
  v12 = 0;
  v13 = 0;
  v14 = bdFastArray<bdCommsMessage>::operator[](m_responses + 1, itemIndex);
  v15 = v14;
  if ( itemIndex )
  {
    do
    {
      v16 = bdFastArray<bdCommsMessage>::operator[]((bdFastArray<bdCommsMessage> *)&this->m_responses->__vftable + 1, v13);
      m_locationID = v15->m_locationID;
      v18 = v12 + 1;
      if ( v16->m_locationID != m_locationID )
        v18 = v12;
      ++v13;
      v12 = v18;
    }
    while ( v13 < itemIndex );
  }
  else
  {
    m_locationID = v14->m_locationID;
  }
  *locationIDOut = m_locationID;
  return MarketingCommsManager::GetCachedMetaDataParsedMessage(this, controllerIndex, v15->m_locationID, v12, refContentDataOut, checksum32Out);
}

/*
==============
MarketingCommsManager::GetInstance
==============
*/
MarketingCommsManager *MarketingCommsManager::GetInstance()
{
  return &MarketingCommsManager::ms_instance;
}

/*
==============
MarketingCommsManager::GetLanguageString
==============
*/
const char *MarketingCommsManager::GetLanguageString()
{
  const char *v0; 
  const char *result; 

  v0 = "en";
  switch ( SEH_GetCurrentLanguage() )
  {
    case 2:
      result = "fr";
      break;
    case 3:
      result = "de";
      break;
    case 4:
      result = "it";
      break;
    case 5:
      result = "es";
      break;
    case 6:
    case 7:
      result = "ru";
      break;
    case 8:
    case 9:
      result = "pl";
      break;
    case 10:
    case 11:
      result = "ko";
      break;
    case 12:
    case 13:
      result = "ja";
      break;
    case 14:
    case 16:
      result = "zh-CN";
      break;
    case 15:
      result = "zh";
      break;
    case 17:
      result = "ar";
      break;
    case 18:
      v0 = "cs";
      goto $LN19_18;
    case 19:
      result = "es-MX";
      break;
    case 20:
      result = "pt";
      break;
    default:
$LN19_18:
      result = v0;
      break;
  }
  return result;
}

/*
==============
MarketingCommsManager::GetLocallyCachedMessageInformation
==============
*/
bool MarketingCommsManager::GetLocallyCachedMessageInformation(MarketingCommsManager *this, int messageType, unsigned int itemIndex, bdJSONDeserializer *refMetaDataOut, bdJSONDeserializer *refContentDataOut)
{
  __int64 v5; 
  signed int MessageIndexForLocationIDCount; 
  unsigned int v10; 
  bdCommsMessage *v11; 
  bdCommsMessage *v12; 
  bool result; 
  int v15; 

  v5 = messageType;
  if ( (unsigned int)messageType >= 0xF )
  {
    v15 = 15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1496, ASSERT_TYPE_ASSERT, "(unsigned)( messageType ) < (unsigned)( 15 )", "messageType doesn't index MAX_CRM_LOCATION_TYPES_ALLOWED\n\t%i not in [0, %i)", messageType, v15) )
      __debugbreak();
  }
  MessageIndexForLocationIDCount = MarketingCommsManager::GetMessageIndexForLocationIDCount(this, v5, itemIndex);
  v10 = MessageIndexForLocationIDCount;
  result = 0;
  if ( itemIndex < this->m_messageCacheSizeLimits[v5] && MessageIndexForLocationIDCount >= 0 )
  {
    v11 = bdFastArray<bdCommsMessage>::operator[]((bdFastArray<bdCommsMessage> *)&this->m_responses->__vftable + 1, MessageIndexForLocationIDCount);
    if ( bdJSONDeserializer::parse(refMetaDataOut, (const char *)v11->m_metadata) )
    {
      v12 = bdFastArray<bdCommsMessage>::operator[]((bdFastArray<bdCommsMessage> *)&this->m_responses->__vftable + 1, v10);
      if ( bdJSONDeserializer::parse(refContentDataOut, (const char *)v12->m_content) )
        return 1;
    }
  }
  return result;
}

/*
==============
MarketingCommsManager::GetMessageCountForLocationID
==============
*/
__int64 MarketingCommsManager::GetMessageCountForLocationID(MarketingCommsManager *this, int locationID)
{
  bdFastArray<bdCommsMessage> *m_responses; 
  unsigned int v3; 
  unsigned int v6; 
  bool v7; 
  bool v8; 
  unsigned int v9; 

  m_responses = (bdFastArray<bdCommsMessage> *)this->m_responses;
  v3 = 0;
  if ( !m_responses || !m_responses[1].m_size )
    return 0i64;
  v6 = 0;
  do
  {
    v7 = m_responses && v6 < m_responses[1].m_size && bdFastArray<bdCommsMessage>::operator[](m_responses + 1, v6)->m_locationID == locationID;
    v8 = !v7;
    v9 = v3 + 1;
    m_responses = (bdFastArray<bdCommsMessage> *)this->m_responses;
    if ( v8 )
      v9 = v3;
    ++v6;
    v3 = v9;
  }
  while ( v6 < m_responses[1].m_size );
  return v9;
}

/*
==============
MarketingCommsManager::GetMessageIndexForLocationIDCount
==============
*/
__int64 MarketingCommsManager::GetMessageIndexForLocationIDCount(MarketingCommsManager *this, int locationID, unsigned int messageCount)
{
  bdFastArray<bdCommsMessage> *m_responses; 
  int v7; 
  unsigned int v8; 
  bdCommsMessage v10; 

  bdCommsMessage::bdCommsMessage(&v10);
  m_responses = (bdFastArray<bdCommsMessage> *)this->m_responses;
  if ( m_responses && m_responses[1].m_size )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( m_responses && v8 < m_responses[1].m_size && bdFastArray<bdCommsMessage>::operator[](m_responses + 1, v8)->m_locationID == locationID )
      {
        if ( v7 == messageCount )
          goto LABEL_11;
        ++v7;
      }
      ++v8;
      m_responses = (bdFastArray<bdCommsMessage> *)this->m_responses;
    }
    while ( v8 < m_responses[1].m_size );
  }
  v8 = -1;
LABEL_11:
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v10.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&v10.m_locationID + 2));
  return v8;
}

/*
==============
MarketingCommsManager::GetMessageMaxCount
==============
*/
__int64 MarketingCommsManager::GetMessageMaxCount(MarketingCommsManager *this, int messageType)
{
  __int64 v2; 
  int v6; 

  v2 = messageType;
  if ( (unsigned int)messageType < 0xF )
    return this->m_messageCacheSizeLimits[messageType];
  v6 = 15;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( messageType ) < (unsigned)( 15 )", "messageType doesn't index MAX_CRM_LOCATION_TYPES_ALLOWED\n\t%i not in [0, %i)", messageType, v6) )
    __debugbreak();
  return this->m_messageCacheSizeLimits[v2];
}

/*
==============
MarketingCommsManager::GetMessageToDisplayCount
==============
*/

unsigned int __fastcall MarketingCommsManager::GetMessageToDisplayCount(MarketingCommsManager *this, int messageType)
{
  return MarketingCommsManager::GetMessageCountForLocationID(this, messageType);
}

/*
==============
MarketingCommsManager::GetTotalMessageMaxCount
==============
*/
__int64 MarketingCommsManager::GetTotalMessageMaxCount(MarketingCommsManager *this)
{
  bdCommsGetMessagesResponse *m_responses; 
  __int64 result; 

  m_responses = this->m_responses;
  if ( !m_responses )
    return 0i64;
  result = *((unsigned int *)&m_responses->__vftable + 7);
  if ( !(_DWORD)result )
    return 0i64;
  return result;
}

/*
==============
MarketingCommsManager::HandleFetchTaskComplete
==============
*/
void MarketingCommsManager::HandleFetchTaskComplete(MarketingCommsManager *this, GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned int m_controllerIndex; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v8; 
  int v9; 
  lua_State *v10; 
  LocalClientNum_t ClientFromController; 
  unsigned int v12; 
  int v13; 

  m_controllerIndex = pTask->m_controllerIndex;
  Com_Printf(25, "HandleFetchTaskComplete( controller: %d ) - taskState %d\n", m_controllerIndex, (unsigned int)taskState);
  m_ptr = this->m_requestTask.m_remoteDemonwareTask.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v8 = this->m_requestTask.m_remoteDemonwareTask.m_ptr;
      if ( v8 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v8->~bdReferencable)(v8, 1i64);
    }
  }
  v9 = 0;
  this->m_requestTask.m_remoteDemonwareTask.m_ptr = NULL;
  this->m_isGettingCRMMOTD = 0;
  do
    MarketingCommsManager::ClearParsedJSONBuffersForLocationID(this, m_controllerIndex, v9++);
  while ( v9 < 15 );
  if ( this->m_responses )
  {
    if ( m_controllerIndex >= 8 )
    {
      v13 = 8;
      v12 = m_controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 848, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    MarketingCommsManager::OnMOTDFetchComplete(this, m_controllerIndex, pTask, taskState);
  }
  v10 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(m_controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "update_crm_data", v10) )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
MarketingCommsManager::HasPayLoadAttachedByLocationIDCount
==============
*/
bool MarketingCommsManager::HasPayLoadAttachedByLocationIDCount(MarketingCommsManager *this, int messageType, unsigned int itemIndex)
{
  __int64 v3; 
  signed int MessageIndexForLocationIDCount; 
  int v9; 

  v3 = messageType;
  if ( (unsigned int)messageType >= 0xF )
  {
    v9 = 15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1449, ASSERT_TYPE_ASSERT, "(unsigned)( messageType ) < (unsigned)( 15 )", "messageType doesn't index MAX_CRM_LOCATION_TYPES_ALLOWED\n\t%i not in [0, %i)", messageType, v9) )
      __debugbreak();
  }
  MessageIndexForLocationIDCount = MarketingCommsManager::GetMessageIndexForLocationIDCount(this, v3, itemIndex);
  return itemIndex < this->m_messageCacheSizeLimits[v3] && MessageIndexForLocationIDCount >= 0 && bdFastArray<bdCommsMessage>::operator[]((bdFastArray<bdCommsMessage> *)&this->m_responses->__vftable + 1, MessageIndexForLocationIDCount)->m_payloadSize;
}

/*
==============
MarketingCommsManager::HasPayLoadAttachedToResponseMessage
==============
*/
bool MarketingCommsManager::HasPayLoadAttachedToResponseMessage(MarketingCommsManager *this, unsigned int responseMessageindex)
{
  bdCommsGetMessagesResponse *m_responses; 
  __int64 v3; 
  bool result; 

  m_responses = this->m_responses;
  v3 = responseMessageindex;
  result = 0;
  if ( responseMessageindex < *((_DWORD *)&m_responses->__vftable + 7) )
  {
    bdHandleAssert(responseMessageindex < *((_DWORD *)&m_responses->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdCommsMessage>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
    if ( *(_DWORD *)(7328 * v3 + *((_QWORD *)&m_responses->__vftable + 2) + 7220) )
      return 1;
  }
  return result;
}

/*
==============
MarketingCommsManager::IsCommsEnabled
==============
*/
bool MarketingCommsManager::IsCommsEnabled(MarketingCommsManager *this)
{
  return crm_enabled && crm_enabled->current.enabled;
}

/*
==============
MarketingCommsManager::IsGettingMOTD
==============
*/
_BOOL8 MarketingCommsManager::IsGettingMOTD(MarketingCommsManager *this)
{
  return this->m_isGettingCRMMOTD;
}

/*
==============
MarketingCommsManager::IsMessageForLocationID
==============
*/
bool MarketingCommsManager::IsMessageForLocationID(MarketingCommsManager *this, unsigned int messageIndex, int locationID)
{
  bdFastArray<bdCommsMessage> *m_responses; 

  m_responses = (bdFastArray<bdCommsMessage> *)this->m_responses;
  return m_responses && messageIndex < m_responses[1].m_size && bdFastArray<bdCommsMessage>::operator[](m_responses + 1, messageIndex)->m_locationID == locationID;
}

/*
==============
MarkMessageRead_f
==============
*/
void MarkMessageRead_f()
{
  const char *v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  int MessageIndexForLocationIDCount; 
  __int64 v5; 
  __int64 v6; 
  int v7; 

  if ( Cmd_Argc() < 2 )
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
    return;
  }
  v1 = Cmd_ArgInt(1);
  v2 = Cmd_ArgInt(2);
  v3 = Cmd_LocalControllerIndex();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1251, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( v3 >= 8 )
  {
    v7 = 8;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1253, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( v1 >= 0xF )
  {
    LODWORD(v6) = 15;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1254, ASSERT_TYPE_ASSERT, "(unsigned)( messageType ) < (unsigned)( 15 )", "messageType doesn't index MAX_CRM_LOCATION_TYPES_ALLOWED\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( crm_enabled && crm_enabled->current.enabled )
  {
    if ( MarketingCommsManager::GetMessageCountForLocationID(&MarketingCommsManager::ms_instance, v1) )
    {
      if ( Live_IsUserSignedInToDemonware(v3) )
      {
        if ( MarketingCommsManager::ms_instance.m_responses )
        {
          MessageIndexForLocationIDCount = MarketingCommsManager::GetMessageIndexForLocationIDCount(&MarketingCommsManager::ms_instance, v1, v2);
          if ( MessageIndexForLocationIDCount < 0 )
          {
            Com_PrintWarning(25, "MarkMessagesReadOnBackendAsync() - Can't find a response matching [locationID %d index %d]!\n", v1, v2);
          }
          else if ( MarketingCommsManager::MarkResponseMessageReadOnBackendAsync(&MarketingCommsManager::ms_instance, v3, MessageIndexForLocationIDCount) )
          {
            return;
          }
        }
        else
        {
          Com_PrintWarning(25, "MarkMessagesReadOnBackendAsync() - Can't make requests when pointers aren't allocated! [locationID %d index %d]\n", v1, v2);
        }
      }
      else
      {
        Com_Printf(25, "MarkMessagesReadOnBackendAsync( controller: %d, messageID: %d ) - User on controller not signed into Demonware, skipping call!\n", v3, v1);
      }
    }
    else
    {
      Com_Printf(25, "MarkMessagesReadOnBackendAsync( controller: %d, messageID: %d ) - no messages for this messageID to mark read, skipping call!\n", v3, v1);
    }
  }
  Com_PrintError(16, "CRMMarkMessagesRead failed in call to MarkMessagesReadOnBackendAsync().\n");
}

/*
==============
MarketingCommsManager::MarkMessagesReadOnBackendAsync
==============
*/
bool MarketingCommsManager::MarkMessagesReadOnBackendAsync(MarketingCommsManager *this, int controllerIndex, int messageType, unsigned int itemIndex)
{
  int MessageIndexForLocationIDCount; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1251, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v12 = 8;
    LODWORD(v10) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1253, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( (unsigned int)messageType >= 0xF )
  {
    LODWORD(v11) = 15;
    LODWORD(v10) = messageType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1254, ASSERT_TYPE_ASSERT, "(unsigned)( messageType ) < (unsigned)( 15 )", "messageType doesn't index MAX_CRM_LOCATION_TYPES_ALLOWED\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( !crm_enabled || !crm_enabled->current.enabled )
    return 0;
  if ( !MarketingCommsManager::GetMessageCountForLocationID(this, messageType) )
  {
    Com_Printf(25, "MarkMessagesReadOnBackendAsync( controller: %d, messageID: %d ) - no messages for this messageID to mark read, skipping call!\n", (unsigned int)controllerIndex, (unsigned int)messageType);
    return 0;
  }
  if ( !Live_IsUserSignedInToDemonware(controllerIndex) )
  {
    Com_Printf(25, "MarkMessagesReadOnBackendAsync( controller: %d, messageID: %d ) - User on controller not signed into Demonware, skipping call!\n", (unsigned int)controllerIndex, (unsigned int)messageType);
    return 0;
  }
  if ( this->m_responses )
  {
    MessageIndexForLocationIDCount = MarketingCommsManager::GetMessageIndexForLocationIDCount(this, messageType, itemIndex);
    if ( MessageIndexForLocationIDCount < 0 )
    {
      Com_PrintWarning(25, "MarkMessagesReadOnBackendAsync() - Can't find a response matching [locationID %d index %d]!\n", (unsigned int)messageType, itemIndex);
      return 0;
    }
    else
    {
      return MarketingCommsManager::MarkResponseMessageReadOnBackendAsync(this, controllerIndex, MessageIndexForLocationIDCount);
    }
  }
  else
  {
    Com_PrintWarning(25, "MarkMessagesReadOnBackendAsync() - Can't make requests when pointers aren't allocated! [locationID %d index %d]\n", (unsigned int)messageType, itemIndex);
    return 0;
  }
}

/*
==============
MarketingCommsManager::MarkResponseMessageReadOnBackendAsync
==============
*/
char MarketingCommsManager::MarkResponseMessageReadOnBackendAsync(MarketingCommsManager *this, int controllerIndex, int responseMessageItemIndex)
{
  char v6; 
  bdCommsGetMessagesResponse *m_responses; 
  __int64 v8; 
  bdRemoteTask *v9; 
  __int64 v10; 
  __int64 v11; 
  bdCommsMessage *v12; 
  __int64 m_size; 
  unsigned int m_capacity; 
  bdCommsViewedMessage *m_data; 
  __int64 v16; 
  DWServicesAccess *Instance; 
  DWMarketingComms *MarketingComms; 
  const bdReference<bdRemoteTask> *v19; 
  TaskManager *v20; 
  void (__fastcall ***v21)(_QWORD, __int64); 
  void (__fastcall ***v22)(_QWORD, __int64); 
  bdReference<bdRemoteTask> result; 
  TaskCreateRequest pTaskCreateRequest; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v27; 
  bdCommsReportMessagesViewedRequest request; 
  bdCommsViewedMessage v29; 

  v27 = -2i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1175, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v6 = 0;
  if ( !crm_enabled || !crm_enabled->current.enabled )
    return 0;
  if ( !Live_IsUserSignedInToDemonware(controllerIndex) )
    return 0;
  m_responses = this->m_responses;
  if ( !m_responses )
    return 0;
  v8 = *((unsigned int *)&m_responses->__vftable + 7);
  if ( responseMessageItemIndex < 0 || responseMessageItemIndex >= (int)v8 )
  {
    Com_PrintWarning(25, "MarkMessagesReadOnBackendAsync() - Index out of bounds for response messages [index %d message count %d]!\n", (unsigned int)responseMessageItemIndex, v8);
    return 0;
  }
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  bdCommsReportMessagesViewedRequest::bdCommsReportMessagesViewedRequest(&request);
  bdCommsViewedMessage::bdCommsViewedMessage(&v29);
  v9 = (bdRemoteTask *)bdMemory::allocate(0x20ui64);
  result.m_ptr = v9;
  if ( v9 )
  {
    bdCommsReportMessagesViewedResponse::bdCommsReportMessagesViewedResponse((bdCommsReportMessagesViewedResponse *)v9);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  pTaskCreateRequest.m_appData = (void *)v11;
  v12 = bdFastArray<bdCommsMessage>::operator[]((bdFastArray<bdCommsMessage> *)&this->m_responses->__vftable + 1, responseMessageItemIndex);
  *((_QWORD *)&v29.__vftable + 2) = *((_QWORD *)&v12->__vftable + 2);
  *((_DWORD *)&v29.__vftable + 6) = v12->m_locationID;
  v29.m_assignmentID = v12->m_assignmentID;
  strncpy(v29.m_languageCode, (const char *)&v12->__vftable + 24, 0x14ui64);
  m_size = request.m_messages.m_size;
  if ( request.m_messages.m_size == request.m_messages.m_capacity )
  {
    m_capacity = request.m_messages.m_capacity;
    if ( !request.m_messages.m_capacity )
      m_capacity = 1;
    m_data = NULL;
    v16 = request.m_messages.m_capacity + m_capacity;
    if ( (_DWORD)v16 )
    {
      m_data = (bdCommsViewedMessage *)bdMemory::allocate(80 * v16);
      if ( request.m_messages.m_size )
        memcpy_0(m_data, request.m_messages.m_data, 80i64 * request.m_messages.m_size);
    }
    bdMemory::deallocate(request.m_messages.m_data);
    request.m_messages.m_data = m_data;
    request.m_messages.m_capacity = v16;
    m_size = request.m_messages.m_size;
  }
  else
  {
    m_data = request.m_messages.m_data;
  }
  m_data[m_size] = v29;
  ++request.m_messages.m_size;
  Instance = DWServicesAccess::GetInstance();
  MarketingComms = DWServicesAccess::GetMarketingComms(Instance, controllerIndex);
  v19 = DWMarketingComms::markMessagesRead(MarketingComms, &result, &request, (bdCommsReportMessagesViewedResponse *)v11);
  bdReference<bdRemoteTask>::operator=(&pTaskCreateRequest.m_remoteDemonwareTask, v19);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = OnMarkMessagesReadOnBackendAsyncComplete;
    v20 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v20, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(25, "MarkMessagesReadOnBackendAsync() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)controllerIndex);
      v6 = 1;
    }
    else
    {
      if ( v11 )
      {
        v21 = (void (__fastcall ***)(_QWORD, __int64))(*(int *)(*(_QWORD *)(v11 + 8) + 4i64) + v11 + 8);
        (**v21)(v21, 1i64);
      }
      Com_PrintError(25, "MarkMessagesReadOnBackendAsync() - CreateTask failed for controllerIndex %d!\n", (unsigned int)controllerIndex);
    }
  }
  else
  {
    if ( v11 )
    {
      v22 = (void (__fastcall ***)(_QWORD, __int64))(*(int *)(*(_QWORD *)(v11 + 8) + 4i64) + v11 + 8);
      (**v22)(v22, 1i64);
    }
    Com_PrintWarning(25, "MarkMessagesReadOnBackendAsync() -Task Create failed request.m_remoteDemonwareTask == BD_NULL!\n");
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v29.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&v29.gap3C[4]);
  bdMemory::deallocate(request.m_messages.m_data);
  request.m_messages.m_data = NULL;
  *(_QWORD *)&request.m_messages.m_capacity = 0i64;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&request.m_messages + 1);
  TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
  return v6;
}

/*
==============
OnFetchMessagesFromBackendAsyncComplete
==============
*/
void OnFetchMessagesFromBackendAsyncComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned int m_controllerIndex; 
  int v5; 
  lua_State *v6; 
  LocalClientNum_t ClientFromController; 

  m_controllerIndex = pTask->m_controllerIndex;
  Com_Printf(25, "HandleFetchTaskComplete( controller: %d ) - taskState %d\n", m_controllerIndex, (unsigned int)taskState);
  if ( MarketingCommsManager::ms_instance.m_requestTask.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&MarketingCommsManager::ms_instance.m_requestTask.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && MarketingCommsManager::ms_instance.m_requestTask.m_remoteDemonwareTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))MarketingCommsManager::ms_instance.m_requestTask.m_remoteDemonwareTask.m_ptr->~bdReferencable)(MarketingCommsManager::ms_instance.m_requestTask.m_remoteDemonwareTask.m_ptr, 1i64);
  v5 = 0;
  MarketingCommsManager::ms_instance.m_requestTask.m_remoteDemonwareTask.m_ptr = NULL;
  MarketingCommsManager::ms_instance.m_isGettingCRMMOTD = 0;
  do
    MarketingCommsManager::ClearParsedJSONBuffersForLocationID(&MarketingCommsManager::ms_instance, m_controllerIndex, v5++);
  while ( v5 < 15 );
  if ( MarketingCommsManager::ms_instance.m_responses )
  {
    if ( m_controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 848, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", m_controllerIndex, 8) )
      __debugbreak();
    MarketingCommsManager::OnMOTDFetchComplete(&MarketingCommsManager::ms_instance, m_controllerIndex, pTask, taskState);
  }
  v6 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(m_controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "update_crm_data", v6) )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
MarketingCommsManager::OnInitMPGameMode
==============
*/
void MarketingCommsManager::OnInitMPGameMode(MarketingCommsManager *this)
{
  if ( !this->m_requestTask.m_remoteDemonwareTask.m_ptr )
    MarketingCommsManager::FetchBatchedMessagesForPrimaryLocalClientIfActive(this);
}

/*
==============
MarketingCommsManager::OnMOTDFetchComplete
==============
*/
void MarketingCommsManager::OnMOTDFetchComplete(MarketingCommsManager *this, int controllerIndex, GenericTask *pTask, eTaskManagerTaskState taskState)
{
  int m_appTaskType; 
  unsigned int v8; 
  bdCommsGetMessagesResponse *m_responses; 
  ParsedJSONCache *v10; 
  ParsedJSONCache *v11; 
  __int64 v12; 
  ParsedJSONCache *v13; 
  unsigned int i; 
  ParsedJSONCache *v15; 
  char *fmt; 
  __int64 v17; 
  bdJSONDeserializer v18; 

  m_appTaskType = pTask->m_appTaskType;
  if ( m_appTaskType == 1 )
  {
    v8 = 1;
  }
  else if ( m_appTaskType == 2 )
  {
    v8 = 11;
  }
  else
  {
    if ( m_appTaskType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 390, ASSERT_TYPE_ASSERT, "(pTask->m_appTaskType == 3)", (const char *)&queryFormat, "pTask->m_appTaskType == CRM_TASK_TYPE_BR_DATA_FETCH") )
      __debugbreak();
    v8 = 6;
  }
  g_motdFetched = 1;
  if ( taskState )
  {
    Com_PrintError(131088, "Unable to retrieve Comms MOTD Location ID %d, task failed!\n", v8);
  }
  else
  {
    bdJSONDeserializer::bdJSONDeserializer(&v18);
    if ( (unsigned int)controllerIndex >= 8 )
    {
      LODWORD(v17) = controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1302, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v17, 8) )
        __debugbreak();
    }
    LODWORD(fmt) = 0;
    Com_Printf(25, "GetCachedMetaDataParsedMessage( controller: %d, messageID: %d itemIndex: %d ) LUI requesting data\n", (unsigned int)controllerIndex, v8, fmt);
    if ( v8 >= 6 )
    {
      if ( v8 > 7 )
        Com_Printf(25, "GetCachedMetaDataParsedMessage LUI requesting CP specific message type\n");
      else
        Com_Printf(25, "GetCachedMetaDataParsedMessage LUI requesting BR specific message type\n");
    }
    else
    {
      Com_Printf(25, "GetCachedMetaDataParsedMessage LUI requesting MP specific message type\n");
    }
    if ( this->m_controllerIndexFetched != controllerIndex )
      goto LABEL_33;
    m_responses = this->m_responses;
    if ( !m_responses )
      goto LABEL_33;
    if ( !this->m_messageCacheSizeLimits[v8] )
      goto LABEL_33;
    if ( !*((_DWORD *)&m_responses->__vftable + 7) )
      goto LABEL_33;
    v10 = this->m_parsedJSONCaches[v8];
    if ( !v10 )
      goto LABEL_33;
    if ( !v10->m_bIsParsed )
    {
      MarketingCommsManager::ParseContentBufferReplaceJSONMetaDataTags(this, controllerIndex, v8, 0);
      v11 = this->m_parsedJSONCaches[v8];
      v12 = -1i64;
      do
        ++v12;
      while ( v11->m_parsedJSON[v12] );
      v13 = this->m_parsedJSONCaches[v8];
      for ( i = -1; v12; --v12 )
      {
        i = (i >> 8) ^ g_crc32Table[(unsigned __int8)v13->m_parsedJSON[0] ^ (unsigned __int64)(unsigned __int8)i];
        v13 = (ParsedJSONCache *)((char *)v13 + 1);
      }
      v11->m_checksum32 = ~i;
    }
    v15 = this->m_parsedJSONCaches[v8];
    if ( v15->m_bIsParsed && v15->m_parsedJSON[0] && bdJSONDeserializer::parse(&v18, v15->m_parsedJSON) )
    {
      Com_Printf(131088, "Retrieved Comms MOTD at Location ID %d checksum %d.\n", v8, this->m_parsedJSONCaches[v8]->m_checksum32);
    }
    else
    {
LABEL_33:
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
        Com_PrintError(131088, "Unable to retrieve Comms MOTD Location ID %d, perhaps none exists?\n", v8);
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v18);
  }
}

/*
==============
OnMarkMessagesReadOnBackendAsyncComplete
==============
*/
void OnMarkMessagesReadOnBackendAsyncComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  _QWORD *m_appData; 
  __int64 v3; 

  m_appData = pTask->m_appData;
  pTask->m_appData = NULL;
  if ( taskState )
    Com_PrintWarning(25, "Error: OnMarkMessagesReadOnBackendAsyncComplete.\n");
  else
    Com_Printf(25, "OnMarkMessagesReadOnBackendAsyncComplete complete.\n");
  if ( m_appData )
  {
    v3 = *(int *)(m_appData[1] + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)m_appData + v3 + 8))((__int64)m_appData + v3 + 8, 1i64);
  }
}

/*
==============
MarketingCommsManager::ParseContentBufferReplaceJSONMetaDataTags
==============
*/
void MarketingCommsManager::ParseContentBufferReplaceJSONMetaDataTags(MarketingCommsManager *this, int controllerIndex, const int locationID, unsigned int currentMessageToReadIndex)
{
  __int64 v4; 
  __int64 v5; 
  MarketingCommsManager *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  signed int MessageIndexForLocationIDCount; 
  unsigned int v11; 
  bdCommsMessage *v12; 
  bdCommsMessage *v13; 
  unsigned __int64 v14; 
  char v15; 
  __int64 v16; 
  char v17; 
  signed __int64 v18; 
  _BYTE *v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  char *v25; 
  rsize_t v26; 
  rsize_t v27; 
  char *fmt; 
  __int64 v30; 
  float v32; 
  int v33; 
  unsigned int v34; 
  unsigned int v35; 
  const char *m_ptr; 
  void *v37; 
  rsize_t MaxCount; 
  bdJSONDeserializer v39; 
  unsigned __int64 v40; 
  unsigned __int64 v41; 
  bdJSONDeserializer v42; 
  bdJSONDeserializer v43; 
  __int64 v44; 
  bdJSONDeserializer v45; 
  char Destination[256]; 
  char value[256]; 
  char dest[2048]; 

  v44 = -2i64;
  v4 = currentMessageToReadIndex;
  v5 = locationID;
  v34 = locationID;
  v35 = controllerIndex;
  v6 = this;
  v7 = -1i64;
  do
    ++v7;
  while ( asc_143E053C0[v7] );
  v8 = -1i64;
  do
    ++v8;
  while ( asc_143E053C4[v8] );
  bdJSONDeserializer::bdJSONDeserializer(&v43);
  bdJSONDeserializer::bdJSONDeserializer(&v42);
  bdJSONDeserializer::bdJSONDeserializer(&v39);
  Profile_Begin(58);
  v9 = v5;
  v30 = v5;
  if ( !v6->m_parsedJSONCaches[v5] )
    goto LABEL_77;
  if ( (unsigned int)v4 >= v6->m_messageCacheSizeLimits[v5] )
    goto LABEL_76;
  if ( (unsigned int)v5 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1496, ASSERT_TYPE_ASSERT, "(unsigned)( messageType ) < (unsigned)( 15 )", "messageType doesn't index MAX_CRM_LOCATION_TYPES_ALLOWED\n\t%i not in [0, %i)", v5, 15) )
    __debugbreak();
  MessageIndexForLocationIDCount = MarketingCommsManager::GetMessageIndexForLocationIDCount(v6, v5, v4);
  v11 = MessageIndexForLocationIDCount;
  if ( (unsigned int)v4 >= v6->m_messageCacheSizeLimits[v9] )
    goto LABEL_76;
  if ( MessageIndexForLocationIDCount < 0 )
    goto LABEL_76;
  v12 = bdFastArray<bdCommsMessage>::operator[]((bdFastArray<bdCommsMessage> *)&v6->m_responses->__vftable + 1, MessageIndexForLocationIDCount);
  if ( !bdJSONDeserializer::parse(&v43, (const char *)v12->m_metadata) )
    goto LABEL_76;
  v13 = bdFastArray<bdCommsMessage>::operator[]((bdFastArray<bdCommsMessage> *)&v6->m_responses->__vftable + 1, v11);
  if ( !bdJSONDeserializer::parse(&v42, (const char *)v13->m_content) || !v43.m_parsed || !v42.m_parsed )
    goto LABEL_76;
  v37 = &v6->m_parsedJSONCaches[v9][v4];
  v14 = 0i64;
  if ( bdJSONDeserializer::hasKey(&v42, "REDC_LIST") )
  {
    v15 = 0;
    bdJSONDeserializer::bdJSONDeserializer(&v45);
    if ( bdJSONDeserializer::getString(&v42, "action", value, 0x100u) )
    {
      v16 = 0i64;
      while ( 1 )
      {
        v17 = value[v16++];
        if ( v17 != aRedeem_0[v16 - 1] )
          break;
        if ( v16 == 7 )
        {
          v15 = 1;
          goto LABEL_23;
        }
      }
    }
    Com_PrintError(16, "DoValidityCheck failed for CRM message! Key \"%s\" must be set to \"%s\" when a redemption code is included!\n", "action", "redeem");
LABEL_23:
    bdJSONDeserializer::~bdJSONDeserializer(&v45);
    if ( !v15 )
    {
      Com_PrintError(16, "ParseContentBufferReplaceJSONMetaDataTags: DoValidityCheck failed, skipping message.\n");
LABEL_73:
      LODWORD(v4) = currentMessageToReadIndex;
      LODWORD(fmt) = currentMessageToReadIndex;
      Com_PrintError(25, "ParseReplaceJSONMetaData( controller: %d, locationID %d messageIndex %d ) FAILED (aborted) - ignoring message!\n", v35, v34, fmt);
      memset_0(v37, 0, 0x1800ui64);
      goto LABEL_76;
    }
  }
  m_ptr = v42.m_ptr;
  v18 = v42.m_end - v42.m_ptr;
  v40 = v42.m_end - v42.m_ptr;
  v19 = v37;
  memset_0(v37, 0, 0x1800ui64);
  v20 = 0i64;
  if ( !v18 )
    goto LABEL_75;
  v21 = (int)v7;
  v41 = (int)v7;
  v22 = m_ptr;
  while ( 1 )
  {
    v23 = &v22[v20];
    if ( I_strncmp(&v22[v20], "{{", v21) )
    {
      if ( v14 >= 0x17FF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 647, ASSERT_TYPE_ASSERT, "(parsedJSONBufferIndex < ((4096 + 2048) - 1))", (const char *)&queryFormat, "parsedJSONBufferIndex < (MAX_PARSED_JSON_RESPONSE - 1)") )
          __debugbreak();
        Com_PrintError(16, "MAX_PARSED_JSON_RESPONSE is too small [%d] to parse META DATA from content!\n", 6144i64);
        goto LABEL_72;
      }
      ++v20;
      v19[v14++] = *v23;
      goto LABEL_57;
    }
    v24 = &v22[v20 + v7];
    v25 = strstr_0(v24, "}}");
    MaxCount = &v25[-v20 - v7] - m_ptr;
    memset_0(Destination, 0, sizeof(Destination));
    memset_0(dest, 0, sizeof(dest));
    if ( !v25 || (v26 = MaxCount, (__int64)MaxCount <= 0) )
    {
      Com_PrintError(16, "strncpy_s failure to copy metadata key name from content data due to the content tag being empty or \"}}\" token not found!\n");
      goto LABEL_72;
    }
    if ( strncpy_s(Destination, 0x100ui64, v24, MaxCount) )
    {
      Com_PrintError(16, "strncpy_s failure to copy metadata key name from content data as a string of length %zu to buffer of length %zu!\n", v26, 0x100ui64);
      goto LABEL_72;
    }
    if ( !Destination[0] || !bdJSONDeserializer::getFieldByKey(&v43, Destination, &v39, 1) )
    {
      Com_PrintError(16, "Field \"%s\" not found in metadata!\n", Destination);
      goto LABEL_72;
    }
    if ( bdJSONDeserializer::isString(&v39) )
    {
      if ( !bdJSONDeserializer::getString(&v39, dest, 0x800u) )
      {
        Com_PrintError(16, "getString() failure to read metadata field value string from JSON to buffer of length %zu!\n", 0x800ui64);
LABEL_72:
        v6 = this;
        v9 = v30;
        goto LABEL_73;
      }
      v27 = -1i64;
      do
        ++v27;
      while ( dest[v27] );
    }
    else
    {
      if ( !bdJSONDeserializer::isFloatingPoint(&v39) )
      {
        if ( !bdJSONDeserializer::isNumber(&v39) )
          goto LABEL_68;
        if ( !bdJSONDeserializer::getInt32(&v39, &v33) )
        {
          Com_PrintError(16, "getInt32() failure to get value for key \"%s\" as an int32 from metadata\n", Destination);
          goto LABEL_72;
        }
        if ( Com_sprintf_truncate(dest, 0x800ui64, "%i", (unsigned int)v33) <= 0 )
        {
          Com_PrintError(16, "sprintf_s failure to sprintf metaDataValuesAsString int to string in buffer of length %d!\n", 2048i64);
          goto LABEL_72;
        }
        v27 = -1i64;
        do
          ++v27;
        while ( dest[v27] );
        goto LABEL_51;
      }
      if ( !bdJSONDeserializer::getFloat32(&v39, &v32) )
      {
        Com_PrintError(16, "getFloat32() failure to get value for key \"%s\" as a float32 from metadata\n", Destination);
        goto LABEL_72;
      }
      if ( Com_sprintf_truncate(dest, 0x800ui64, "%f", v32) <= 0 )
      {
        Com_PrintError(16, "sprintf_s failure to sprintf key \"%s\" value as a float to string in buffer of length %d!\n", Destination, 2048i64);
        goto LABEL_72;
      }
      v27 = -1i64;
      do
        ++v27;
      while ( dest[v27] );
    }
LABEL_51:
    if ( !v27 )
    {
LABEL_68:
      Com_PrintError(16, "Value for field \"%s\" could not be copied from metadata! (not String, float32, or int32)\n", Destination);
      goto LABEL_72;
    }
    if ( v27 + v14 >= 0x1800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 754, ASSERT_TYPE_ASSERT, "((parsedJSONBufferIndex + charsReadyForCopy) < (4096 + 2048))", (const char *)&queryFormat, "(parsedJSONBufferIndex + charsReadyForCopy) < MAX_PARSED_JSON_RESPONSE") )
      __debugbreak();
    v19 = v37;
    if ( strncpy_s((char *)v37 + v14, 6144 - v14, dest, v27) )
    {
      Com_PrintError(16, "strncpy_s failure to append metaDataValuesAsString string to buffer of length %d!\n", 6144i64);
      goto LABEL_72;
    }
    v14 += v27;
    v20 += v7 + v8 + MaxCount;
    v22 = m_ptr;
LABEL_57:
    if ( v20 >= v40 )
      break;
    v21 = v41;
  }
  v6 = this;
LABEL_75:
  v9 = v30;
  ++v6->m_messagesParsedForApplication[v30];
  LODWORD(v4) = currentMessageToReadIndex;
LABEL_76:
  v6->m_parsedJSONCaches[v9][(unsigned int)v4].m_bIsParsed = 1;
LABEL_77:
  Profile_EndInternal(NULL);
  bdJSONDeserializer::~bdJSONDeserializer(&v39);
  bdJSONDeserializer::~bdJSONDeserializer(&v42);
  bdJSONDeserializer::~bdJSONDeserializer(&v43);
}

/*
==============
MarketingCommsManager::RedeemAllCodesForMessage
==============
*/
bool MarketingCommsManager::RedeemAllCodesForMessage(MarketingCommsManager *this, int controllerIndex, int locationID, unsigned int messageIndex)
{
  signed int MessageIndexForLocationIDCount; 
  Online_Redeemables *Instance; 
  Online_Redeemables::eRedeemableFailuresReasons v9; 

  if ( crm_enabled && crm_enabled->current.enabled )
  {
    MessageIndexForLocationIDCount = MarketingCommsManager::GetMessageIndexForLocationIDCount(this, locationID, messageIndex);
    if ( MessageIndexForLocationIDCount >= 0 )
      return MarketingCommsManager::RedeemPayloadForMessage(this, controllerIndex, MessageIndexForLocationIDCount);
    Instance = Online_Redeemables::GetInstance();
    v9 = NO_MSG_FOR_INDEX;
  }
  else
  {
    Instance = Online_Redeemables::GetInstance();
    v9 = COMMS_DISABLED;
  }
  Online_Redeemables::NotifyLuiRedemptionComplete(Instance, controllerIndex, 0, v9, 1, NULL);
  return 0;
}

/*
==============
MarketingCommsManager::RedeemPayloadForMessage
==============
*/
bool MarketingCommsManager::RedeemPayloadForMessage(MarketingCommsManager *this, int controllerIndex, unsigned int responseMessageindex)
{
  bool v3; 
  bdFastArray<bdCommsMessage> *m_responses; 
  bdCommsMessage *v7; 
  __int64 m_payloadSize; 
  Online_Redeemables *Instance; 
  Online_Redeemables *v11; 
  Online_Redeemables::eRedeemableFailuresReasons v12; 
  Online_Redeemables *v13; 

  v3 = 0;
  if ( crm_enabled && crm_enabled->current.enabled )
  {
    if ( controllerIndex == this->m_controllerIndexFetched )
    {
      m_responses = (bdFastArray<bdCommsMessage> *)this->m_responses;
      if ( m_responses && responseMessageindex < m_responses[1].m_size )
      {
        v7 = bdFastArray<bdCommsMessage>::operator[](m_responses + 1, responseMessageindex);
        Com_Printf(131088, "RedeemAllCodesForMessage( %d, %d )\n", (unsigned int)controllerIndex, responseMessageindex);
        m_payloadSize = v7->m_payloadSize;
        if ( (_DWORD)m_payloadSize )
        {
          Com_Printf(131088, "RedeemAllCodesForMessage found payload %s payload size %d signature %s signature size %d\n", (const char *)v7->m_payload, m_payloadSize, (const char *)v7->m_payloadSignature, v7->m_payloadSignatureSize);
          Instance = Online_Redeemables::GetInstance();
          v3 = Online_Redeemables::RedeemPayload(Instance, controllerIndex, (const char *const)v7->m_payload, (const char *const)v7->m_payloadSignature);
          if ( !v3 )
          {
            Com_PrintWarning(131088, "RedeemAllCodesForMessage( %d, %d ) failed!\n", (unsigned int)controllerIndex, responseMessageindex);
            return 0;
          }
          return v3;
        }
        Com_PrintWarning(131088, "RedeemAllCodesForMessage( %d, %d ) called on message with no payload!\n", (unsigned int)controllerIndex, responseMessageindex);
        v11 = Online_Redeemables::GetInstance();
        v12 = NO_CODE_PAYLOAD;
      }
      else
      {
        Com_PrintWarning(131088, "RedeemAllCodesForMessage( %d, %d ) called on message with invalid index for message count %d!\n", (unsigned int)controllerIndex, responseMessageindex, m_responses[1].m_size);
        v11 = Online_Redeemables::GetInstance();
        v12 = NO_MSG_FOR_INDEX;
      }
    }
    else
    {
      Com_PrintError(131088, "RedeemAllCodesForMessage( %d, %d ) called on wrong controller %d, messages belong to %d!\n", (unsigned int)controllerIndex, responseMessageindex, controllerIndex, this->m_controllerIndexFetched);
      v11 = Online_Redeemables::GetInstance();
      v12 = CONTROLLER_NOT_OWNER;
    }
    Online_Redeemables::NotifyLuiRedemptionComplete(v11, controllerIndex, 0, v12, 1, NULL);
    return v3;
  }
  v13 = Online_Redeemables::GetInstance();
  Online_Redeemables::NotifyLuiRedemptionComplete(v13, controllerIndex, 0, COMMS_DISABLED, 1, NULL);
  return 0;
}

/*
==============
MarketingCommsManager::ResetDynamicState
==============
*/
void MarketingCommsManager::ResetDynamicState(MarketingCommsManager *this)
{
  this->m_parsedJSONCachesAllocation = NULL;
  this->m_controllerIndexFetched = -1;
  memset_0(this->m_parsedJSONCaches, 0, sizeof(this->m_parsedJSONCaches));
  *(_QWORD *)this->m_messagesParsedForApplication = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[2] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[4] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[6] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[8] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[10] = 0i64;
  *(_QWORD *)&this->m_messagesParsedForApplication[12] = 0i64;
  this->m_messagesParsedForApplication[14] = 0;
}

/*
==============
MarketingCommsManager::SetupBatchRequestForCurrentGameMode
==============
*/
__int64 MarketingCommsManager::SetupBatchRequestForCurrentGameMode(MarketingCommsManager *this)
{
  char v2; 
  char v3; 
  const dvar_t *v4; 
  bool v5; 
  bdCommsGetMessagesRequest *m_request; 
  bdCommsLocationCount *v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  bdCommsGetMessagesRequest *v13; 
  unsigned int m_capacity; 
  int v15; 
  bdCommsLocationCount *m_data; 
  __int64 v17; 
  __int64 m_size; 
  const char *v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  bdCommsGetMessagesRequest *v39; 
  unsigned int v40; 
  int v41; 
  bdCommsLocationCount *v42; 
  __int64 v43; 
  __int64 v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  bdCommsGetMessagesRequest *v48; 
  unsigned int v49; 
  int v50; 
  bdCommsLocationCount *v51; 
  __int64 v52; 
  __int64 v53; 
  unsigned int v54; 
  unsigned int v55; 
  bdCommsGetMessagesRequest *v56; 
  unsigned int v57; 
  int v58; 
  __int64 v59; 
  __int64 v60; 
  unsigned __int8 v61; 
  bdCommsLocationCount value; 

  bdCommsLocationCount::bdCommsLocationCount(&value);
  v2 = 0;
  v3 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING|0x80) )
  {
    v4 = DVARBOOL_ui_is_magma_gamemode;
    if ( !DVARBOOL_ui_is_magma_gamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_is_magma_gamemode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      v3 = 1;
    else
      v2 = 1;
  }
  v5 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END|0x80);
  m_request = this->m_request;
  if ( !m_request || !v2 && !v5 && !v3 || !this->m_parsedJSONCachesAllocation )
  {
    v61 = 0;
    goto LABEL_96;
  }
  if ( v2 && (this->m_requestTask.m_appTaskType != 1 || this->m_needsCachePointerFixup) )
  {
    bdMemory::deallocate(m_request->m_locationCounts.m_data);
    v7 = NULL;
    m_request->m_locationCounts.m_data = NULL;
    *(_QWORD *)&m_request->m_locationCounts.m_capacity = 0i64;
    this->m_requestTask.m_appTaskType = 1;
    this->m_parsedJSONCaches[11] = NULL;
    this->m_parsedJSONCaches[12] = NULL;
    this->m_parsedJSONCaches[1] = this->m_parsedJSONCachesAllocation;
    v8 = 0;
    v9 = this->m_messageCacheSizeLimits[1];
    if ( v9 )
    {
      do
      {
        this->m_parsedJSONCaches[1][v8++].m_bIsParsed = 0;
        v9 = this->m_messageCacheSizeLimits[1];
      }
      while ( v8 < v9 );
    }
    *((_DWORD *)&value.__vftable + 5) = v9;
    *((_DWORD *)&value.__vftable + 4) = 1;
    bdFastArray<bdCommsLocationCount>::pushBack(&this->m_request->m_locationCounts, &value);
    this->m_parsedJSONCaches[2] = &this->m_parsedJSONCachesAllocation[v9];
    v10 = 0;
    v11 = this->m_messageCacheSizeLimits[2];
    if ( v11 )
    {
      do
      {
        this->m_parsedJSONCaches[2][v10++].m_bIsParsed = 0;
        v11 = this->m_messageCacheSizeLimits[2];
      }
      while ( v10 < v11 );
    }
    v12 = v11 + v9;
    *((_DWORD *)&value.__vftable + 5) = v11;
    *((_DWORD *)&value.__vftable + 4) = 2;
    v13 = this->m_request;
    m_capacity = v13->m_locationCounts.m_capacity;
    if ( v13->m_locationCounts.m_size == m_capacity )
    {
      v15 = v13->m_locationCounts.m_capacity;
      if ( !m_capacity )
        v15 = 1;
      m_data = NULL;
      v17 = m_capacity + v15;
      if ( (_DWORD)v17 )
      {
        m_data = (bdCommsLocationCount *)bdMemory::allocate(40 * v17);
        m_size = v13->m_locationCounts.m_size;
        if ( (_DWORD)m_size )
          memcpy_0(m_data, v13->m_locationCounts.m_data, 40 * m_size);
      }
      bdMemory::deallocate(v13->m_locationCounts.m_data);
      v13->m_locationCounts.m_data = m_data;
      v13->m_locationCounts.m_capacity = v17;
      v19 = "SetupBatchRequestForCurrentGameMode setting up for receiving CRM data for mode MP\n";
    }
    else
    {
      m_data = v13->m_locationCounts.m_data;
      v19 = "SetupBatchRequestForCurrentGameMode setting up for receiving CRM data for mode MP\n";
    }
LABEL_59:
    m_data[v13->m_locationCounts.m_size++] = value;
    Com_Printf(25, v19);
    if ( (!v12 || !this->m_request->m_locationCounts.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmarketingcommsmgr.cpp", 1001, ASSERT_TYPE_ASSERT, "(currentIndex != 0 && !m_request->m_locationCounts.isEmpty())", (const char *)&queryFormat, "currentIndex != 0 && !m_request->m_locationCounts.isEmpty()") )
      __debugbreak();
    this->m_parsedJSONCaches[9] = &this->m_parsedJSONCachesAllocation[v12];
    v36 = 0;
    v37 = this->m_messageCacheSizeLimits[9];
    if ( v37 )
    {
      do
      {
        this->m_parsedJSONCaches[9][v36++].m_bIsParsed = 0;
        v37 = this->m_messageCacheSizeLimits[9];
      }
      while ( v36 < v37 );
    }
    v38 = v37 + v12;
    *((_DWORD *)&value.__vftable + 5) = v37;
    *((_DWORD *)&value.__vftable + 4) = 9;
    v39 = this->m_request;
    v40 = v39->m_locationCounts.m_capacity;
    if ( v39->m_locationCounts.m_size == v40 )
    {
      v41 = v39->m_locationCounts.m_capacity;
      if ( !v40 )
        v41 = 1;
      v42 = NULL;
      v43 = v40 + v41;
      if ( (_DWORD)v43 )
      {
        v42 = (bdCommsLocationCount *)bdMemory::allocate(40 * v43);
        v44 = v39->m_locationCounts.m_size;
        if ( (_DWORD)v44 )
          memcpy_0(v42, v39->m_locationCounts.m_data, 40 * v44);
      }
      bdMemory::deallocate(v39->m_locationCounts.m_data);
      v39->m_locationCounts.m_data = v42;
      v39->m_locationCounts.m_capacity = v43;
    }
    else
    {
      v42 = v39->m_locationCounts.m_data;
    }
    v42[v39->m_locationCounts.m_size++] = value;
    this->m_parsedJSONCaches[10] = &this->m_parsedJSONCachesAllocation[v38];
    v45 = 0;
    v46 = this->m_messageCacheSizeLimits[10];
    if ( v46 )
    {
      do
      {
        this->m_parsedJSONCaches[10][v45++].m_bIsParsed = 0;
        v46 = this->m_messageCacheSizeLimits[10];
      }
      while ( v45 < v46 );
    }
    v47 = v46 + v38;
    *((_DWORD *)&value.__vftable + 5) = v46;
    *((_DWORD *)&value.__vftable + 4) = 10;
    v48 = this->m_request;
    v49 = v48->m_locationCounts.m_capacity;
    if ( v48->m_locationCounts.m_size == v49 )
    {
      v50 = v48->m_locationCounts.m_capacity;
      if ( !v49 )
        v50 = 1;
      v51 = NULL;
      v52 = v49 + v50;
      if ( (_DWORD)v52 )
      {
        v51 = (bdCommsLocationCount *)bdMemory::allocate(40 * v52);
        v53 = v48->m_locationCounts.m_size;
        if ( (_DWORD)v53 )
          memcpy_0(v51, v48->m_locationCounts.m_data, 40 * v53);
      }
      bdMemory::deallocate(v48->m_locationCounts.m_data);
      v48->m_locationCounts.m_data = v51;
      v48->m_locationCounts.m_capacity = v52;
    }
    else
    {
      v51 = v48->m_locationCounts.m_data;
    }
    v51[v48->m_locationCounts.m_size++] = value;
    this->m_parsedJSONCaches[8] = &this->m_parsedJSONCachesAllocation[v47];
    v54 = 0;
    v55 = this->m_messageCacheSizeLimits[8];
    if ( v55 )
    {
      do
      {
        this->m_parsedJSONCaches[8][v54++].m_bIsParsed = 0;
        v55 = this->m_messageCacheSizeLimits[8];
      }
      while ( v54 < v55 );
    }
    *((_DWORD *)&value.__vftable + 5) = v55;
    *((_DWORD *)&value.__vftable + 4) = 8;
    v56 = this->m_request;
    v57 = v56->m_locationCounts.m_capacity;
    if ( v56->m_locationCounts.m_size == v57 )
    {
      v58 = v56->m_locationCounts.m_capacity;
      if ( !v57 )
        v58 = 1;
      v59 = v57 + v58;
      if ( (_DWORD)v59 )
      {
        v7 = (bdCommsLocationCount *)bdMemory::allocate(40 * v59);
        v60 = v56->m_locationCounts.m_size;
        if ( (_DWORD)v60 )
          memcpy_0(v7, v56->m_locationCounts.m_data, 40 * v60);
      }
      bdMemory::deallocate(v56->m_locationCounts.m_data);
      v56->m_locationCounts.m_data = v7;
      v56->m_locationCounts.m_capacity = v59;
    }
    else
    {
      v7 = v56->m_locationCounts.m_data;
    }
    v7[v56->m_locationCounts.m_size++] = value;
    this->m_needsCachePointerFixup = 0;
    goto LABEL_94;
  }
  if ( v5 && (this->m_requestTask.m_appTaskType != 2 || this->m_needsCachePointerFixup) )
  {
    bdMemory::deallocate(m_request->m_locationCounts.m_data);
    v7 = NULL;
    m_request->m_locationCounts.m_data = NULL;
    *(_QWORD *)&m_request->m_locationCounts.m_capacity = 0i64;
    this->m_requestTask.m_appTaskType = 2;
    this->m_parsedJSONCaches[1] = NULL;
    this->m_parsedJSONCaches[2] = NULL;
    this->m_parsedJSONCaches[11] = this->m_parsedJSONCachesAllocation;
    v20 = 0;
    v21 = this->m_messageCacheSizeLimits[11];
    if ( v21 )
    {
      do
      {
        this->m_parsedJSONCaches[11][v20++].m_bIsParsed = 0;
        v21 = this->m_messageCacheSizeLimits[11];
      }
      while ( v20 < v21 );
    }
    *((_DWORD *)&value.__vftable + 5) = v21;
    *((_DWORD *)&value.__vftable + 4) = 11;
    bdFastArray<bdCommsLocationCount>::pushBack(&this->m_request->m_locationCounts, &value);
    this->m_parsedJSONCaches[12] = &this->m_parsedJSONCachesAllocation[v21];
    v22 = 0;
    v23 = this->m_messageCacheSizeLimits[12];
    if ( v23 )
    {
      do
      {
        this->m_parsedJSONCaches[12][v22++].m_bIsParsed = 0;
        v23 = this->m_messageCacheSizeLimits[12];
      }
      while ( v22 < v23 );
    }
    v12 = v23 + v21;
    *((_DWORD *)&value.__vftable + 5) = v23;
    *((_DWORD *)&value.__vftable + 4) = 12;
    v13 = this->m_request;
    v24 = v13->m_locationCounts.m_capacity;
    if ( v13->m_locationCounts.m_size == v24 )
    {
      v25 = v13->m_locationCounts.m_capacity;
      if ( !v24 )
        v25 = 1;
      m_data = NULL;
      v26 = v24 + v25;
      if ( (_DWORD)v26 )
      {
        m_data = (bdCommsLocationCount *)bdMemory::allocate(40 * v26);
        v27 = v13->m_locationCounts.m_size;
        if ( (_DWORD)v27 )
          memcpy_0(m_data, v13->m_locationCounts.m_data, 40 * v27);
      }
      bdMemory::deallocate(v13->m_locationCounts.m_data);
      v13->m_locationCounts.m_data = m_data;
      v13->m_locationCounts.m_capacity = v26;
      v19 = "SetupBatchRequestForCurrentGameMode setting up for receiving CRM data for mode CP\n";
    }
    else
    {
      m_data = v13->m_locationCounts.m_data;
      v19 = "SetupBatchRequestForCurrentGameMode setting up for receiving CRM data for mode CP\n";
    }
    goto LABEL_59;
  }
  if ( v3 && (this->m_requestTask.m_appTaskType != 3 || this->m_needsCachePointerFixup) )
  {
    bdMemory::deallocate(m_request->m_locationCounts.m_data);
    v7 = NULL;
    m_request->m_locationCounts.m_data = NULL;
    *(_QWORD *)&m_request->m_locationCounts.m_capacity = 0i64;
    this->m_requestTask.m_appTaskType = 3;
    this->m_parsedJSONCaches[6] = NULL;
    this->m_parsedJSONCaches[7] = NULL;
    this->m_parsedJSONCaches[6] = this->m_parsedJSONCachesAllocation;
    v28 = 0;
    v29 = this->m_messageCacheSizeLimits[6];
    if ( v29 )
    {
      do
      {
        this->m_parsedJSONCaches[6][v28++].m_bIsParsed = 0;
        v29 = this->m_messageCacheSizeLimits[6];
      }
      while ( v28 < v29 );
    }
    *((_DWORD *)&value.__vftable + 5) = v29;
    *((_DWORD *)&value.__vftable + 4) = 6;
    bdFastArray<bdCommsLocationCount>::pushBack(&this->m_request->m_locationCounts, &value);
    this->m_parsedJSONCaches[7] = &this->m_parsedJSONCachesAllocation[v29];
    v30 = 0;
    v31 = this->m_messageCacheSizeLimits[7];
    if ( v31 )
    {
      do
      {
        this->m_parsedJSONCaches[7][v30++].m_bIsParsed = 0;
        v31 = this->m_messageCacheSizeLimits[7];
      }
      while ( v30 < v31 );
    }
    v12 = v31 + v29;
    *((_DWORD *)&value.__vftable + 5) = v31;
    *((_DWORD *)&value.__vftable + 4) = 7;
    v13 = this->m_request;
    v32 = v13->m_locationCounts.m_capacity;
    if ( v13->m_locationCounts.m_size == v32 )
    {
      v33 = v13->m_locationCounts.m_capacity;
      if ( !v32 )
        v33 = 1;
      m_data = NULL;
      v34 = v32 + v33;
      if ( (_DWORD)v34 )
      {
        m_data = (bdCommsLocationCount *)bdMemory::allocate(40 * v34);
        v35 = v13->m_locationCounts.m_size;
        if ( (_DWORD)v35 )
          memcpy_0(m_data, v13->m_locationCounts.m_data, 40 * v35);
      }
      bdMemory::deallocate(v13->m_locationCounts.m_data);
      v13->m_locationCounts.m_data = m_data;
      v13->m_locationCounts.m_capacity = v34;
    }
    else
    {
      m_data = v13->m_locationCounts.m_data;
    }
    v19 = "SetupBatchRequestForCurrentGameMode setting up for receiving CRM data for mode BR\n";
    goto LABEL_59;
  }
LABEL_94:
  v61 = 1;
LABEL_96:
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&value.__vftable + 3));
  return v61;
}

