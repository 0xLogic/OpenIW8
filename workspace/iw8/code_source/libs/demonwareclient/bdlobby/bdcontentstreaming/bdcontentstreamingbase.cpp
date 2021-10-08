/*
==============
bdContentStreamingBase::checkProgress
==============
*/

void __fastcall bdContentStreamingBase::checkProgress(bdContentStreamingBase *this, unsigned int *bytesTransfered, float *dataRate)
{
  ?checkProgress@bdContentStreamingBase@@QEAAXAEAIAEAM@Z(this, bytesTransfered, dataRate);
}

/*
==============
bdContentStreamingBase::getCurrentPartIndex
==============
*/

__int16 __fastcall bdContentStreamingBase::getCurrentPartIndex(bdContentStreamingBase *this)
{
  return ?getCurrentPartIndex@bdContentStreamingBase@@QEAAFXZ(this);
}

/*
==============
bdContentStreamingBase::isCurrentlyDownloadingStreamLive
==============
*/

bool __fastcall bdContentStreamingBase::isCurrentlyDownloadingStreamLive(bdContentStreamingBase *this)
{
  return ?isCurrentlyDownloadingStreamLive@bdContentStreamingBase@@IEAA_NXZ(this);
}

/*
==============
bdContentStreamingBase::start
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreamingBase::start(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result, unsigned __int16 operation)
{
  return ?start@bdContentStreamingBase@@AEAA?AV?$bdReference@VbdRemoteTask@@@@G@Z(this, result, operation);
}

/*
==============
bdContentStreamingBase::pumpThrottled
==============
*/

void __fastcall bdContentStreamingBase::pumpThrottled(bdContentStreamingBase *this)
{
  ?pumpThrottled@bdContentStreamingBase@@IEAAXXZ(this);
}

/*
==============
bdContentStreamingBase::getTotalNumParts
==============
*/

unsigned int __fastcall bdContentStreamingBase::getTotalNumParts(bdContentStreamingBase *this)
{
  return ?getTotalNumParts@bdContentStreamingBase@@IEAAIXZ(this);
}

/*
==============
bdContentStreamingBase::abortHTTPOperation
==============
*/

void __fastcall bdContentStreamingBase::abortHTTPOperation(bdContentStreamingBase *this, bool joinThread)
{
  ?abortHTTPOperation@bdContentStreamingBase@@QEAAX_N@Z(this, joinThread);
}

/*
==============
bdContentStreamingBase::getLastHTTPError
==============
*/

int __fastcall bdContentStreamingBase::getLastHTTPError(bdContentStreamingBase *this)
{
  return ?getLastHTTPError@bdContentStreamingBase@@QEBAHXZ(this);
}

/*
==============
bdContentStreamingBase::getLastError
==============
*/

int __fastcall bdContentStreamingBase::getLastError(bdContentStreamingBase *this)
{
  return ?getLastError@bdContentStreamingBase@@QEBAHXZ(this);
}

/*
==============
bdContentStreamingBase::_postUpload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreamingBase::_postUpload(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  return ?_postUpload@bdContentStreamingBase@@AEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreamingBase::ready
==============
*/

bool __fastcall bdContentStreamingBase::ready(bdContentStreamingBase *this)
{
  return ?ready@bdContentStreamingBase@@QEBA_NXZ(this);
}

/*
==============
bdContentStreamingBase::pauseLiveStream
==============
*/

bool __fastcall bdContentStreamingBase::pauseLiveStream(bdContentStreamingBase *this)
{
  return ?pauseLiveStream@bdContentStreamingBase@@IEAA_NXZ(this);
}

/*
==============
bdContentStreamingBase::pumpHTTP
==============
*/

void __fastcall bdContentStreamingBase::pumpHTTP(bdContentStreamingBase *this)
{
  ?pumpHTTP@bdContentStreamingBase@@IEAAXXZ(this);
}

/*
==============
bdContentStreamingBase::_preUploadPage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreamingBase::_preUploadPage(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result, __int16 offset)
{
  return ?_preUploadPage@bdContentStreamingBase@@MEAA?AV?$bdReference@VbdRemoteTask@@@@F@Z(this, result, offset);
}

/*
==============
bdContentStreamingBase::initDelete
==============
*/

bool __fastcall bdContentStreamingBase::initDelete(bdContentStreamingBase *this)
{
  return ?initDelete@bdContentStreamingBase@@IEAA_NXZ(this);
}

/*
==============
bdContentStreamingBase::initHTTP
==============
*/

void __fastcall bdContentStreamingBase::initHTTP(bdContentStreamingBase *this)
{
  ?initHTTP@bdContentStreamingBase@@MEAAXXZ(this);
}

/*
==============
bdContentStreamingBase::_postUploadStream
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreamingBase::_postUploadStream(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  return ?_postUploadStream@bdContentStreamingBase@@MEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreamingBase::enablePersistentThread
==============
*/

void __fastcall bdContentStreamingBase::enablePersistentThread(bdContentStreamingBase *this, bool enable)
{
  ?enablePersistentThread@bdContentStreamingBase@@QEAAX_N@Z(this, enable);
}

/*
==============
bdContentStreamingBase::getNextPartIndex
==============
*/

__int16 __fastcall bdContentStreamingBase::getNextPartIndex(bdContentStreamingBase *this)
{
  return ?getNextPartIndex@bdContentStreamingBase@@IEAAFXZ(this);
}

/*
==============
bdContentStreamingBase::getHTTPObject
==============
*/

void *__fastcall bdContentStreamingBase::getHTTPObject(bdContentStreamingBase *this)
{
  return ?getHTTPObject@bdContentStreamingBase@@QEAAPEAXXZ(this);
}

/*
==============
bdContentStreamingBase::initPreHTTP
==============
*/

void __fastcall bdContentStreamingBase::initPreHTTP(bdContentStreamingBase *this, __int16 partOffset)
{
  ?initPreHTTP@bdContentStreamingBase@@IEAAXF@Z(this, partOffset);
}

/*
==============
bdContentStreamingBase::setState
==============
*/

void __fastcall bdContentStreamingBase::setState(bdContentStreamingBase *this, bdContentStreamingBase::bdStatus newState, bdLobbyErrorCode errorCode)
{
  ?setState@bdContentStreamingBase@@AEAAXW4bdStatus@1@W4bdLobbyErrorCode@@@Z(this, newState, errorCode);
}

/*
==============
bdContentStreamingBase::startDownload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreamingBase::startDownload(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  return ?startDownload@bdContentStreamingBase@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreamingBase::initUpload
==============
*/

bool __fastcall bdContentStreamingBase::initUpload(bdContentStreamingBase *this, const unsigned __int16 fileSlot, const void *fileData, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, bdFileMetaData *fileMetaData, const unsigned int __formal, const bool isSummary, const bool isMultiPart)
{
  return ?initUpload@bdContentStreamingBase@@MEAA_NGPEBXPEAVbdUploadInterceptor@@IQEBDG0IIQEBVbdTag@@PEAVbdFileID@@PEAVbdFileMetaData@@I_N6@Z(this, fileSlot, fileData, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, fileMetaData, __formal, isSummary, isMultiPart);
}

/*
==============
bdContentStreamingBase::startDelete
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreamingBase::startDelete(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  return ?startDelete@bdContentStreamingBase@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreamingBase::initThrottled
==============
*/

void __fastcall bdContentStreamingBase::initThrottled(bdContentStreamingBase *this)
{
  ?initThrottled@bdContentStreamingBase@@IEAAXXZ(this);
}

/*
==============
bdContentStreamingBase::resumeLiveStream
==============
*/

bool __fastcall bdContentStreamingBase::resumeLiveStream(bdContentStreamingBase *this)
{
  return ?resumeLiveStream@bdContentStreamingBase@@IEAA_NXZ(this);
}

/*
==============
bdContentStreamingBase::exitHTTP
==============
*/

void __fastcall bdContentStreamingBase::exitHTTP(bdContentStreamingBase *this)
{
  ?exitHTTP@bdContentStreamingBase@@IEAAXXZ(this);
}

/*
==============
bdContentStreamingBase::initDownload
==============
*/

bool __fastcall bdContentStreamingBase::initDownload(bdContentStreamingBase *this, void *fileData, unsigned int fileSize, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte, bdLiveStreamingFileMetaData *fileMetaDataMultiPart, __int16 partDuration)
{
  return ?initDownload@bdContentStreamingBase@@IEAA_NPEAXIPEAVbdDownloadInterceptor@@PEAVbdFileMetaData@@IIPEAVbdLiveStreamingFileMetaData@@F@Z(this, fileData, fileSize, downloadHandler, fileMetaData, startByte, endByte, fileMetaDataMultiPart, partDuration);
}

/*
==============
bdContentStreamingBase::completeHTTPPhase
==============
*/

void __fastcall bdContentStreamingBase::completeHTTPPhase(bdContentStreamingBase *this)
{
  ?completeHTTPPhase@bdContentStreamingBase@@IEAAXXZ(this);
}

/*
==============
bdContentStreamingBase::_extractFileInfo
==============
*/

void __fastcall bdContentStreamingBase::_extractFileInfo(bdContentStreamingBase *this, char **URL, unsigned __int64 *fileID, unsigned int *fileSize)
{
  ?_extractFileInfo@bdContentStreamingBase@@IEAAXAEAPEADAEA_KAEAI@Z(this, URL, fileID, fileSize);
}

/*
==============
bdContentStreamingBase::_postCopy
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreamingBase::_postCopy(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  return ?_postCopy@bdContentStreamingBase@@MEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreamingBase::pumpPreHTTP
==============
*/

void __fastcall bdContentStreamingBase::pumpPreHTTP(bdContentStreamingBase *this)
{
  ?pumpPreHTTP@bdContentStreamingBase@@IEAAXXZ(this);
}

/*
==============
bdContentStreamingBase::getState
==============
*/

bdContentStreamingBase::bdStatus __fastcall bdContentStreamingBase::getState(bdContentStreamingBase *this)
{
  return ?getState@bdContentStreamingBase@@QEAA?AW4bdStatus@1@XZ(this);
}

/*
==============
bdContentStreamingBase::exitHTTPFailed
==============
*/

void __fastcall bdContentStreamingBase::exitHTTPFailed(bdContentStreamingBase *this)
{
  ?exitHTTPFailed@bdContentStreamingBase@@IEAAXXZ(this);
}

/*
==============
bdContentStreamingBase::startUpload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreamingBase::startUpload(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  return ?startUpload@bdContentStreamingBase@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreamingBase::~bdContentStreamingBase
==============
*/

void __fastcall bdContentStreamingBase::~bdContentStreamingBase(bdContentStreamingBase *this)
{
  ??1bdContentStreamingBase@@UEAA@XZ(this);
}

/*
==============
bdContentStreamingBase::enableVerboseOutput
==============
*/

void __fastcall bdContentStreamingBase::enableVerboseOutput(bdContentStreamingBase *this, bool enable)
{
  ?enableVerboseOutput@bdContentStreamingBase@@QEAAX_N@Z(this, enable);
}

/*
==============
bdContentStreamingBase::bdContentStreamingBase
==============
*/

void __fastcall bdContentStreamingBase::bdContentStreamingBase(bdContentStreamingBase *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdContentStreamingBase@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdContentStreamingBase::enableProgressMeter
==============
*/

void __fastcall bdContentStreamingBase::enableProgressMeter(bdContentStreamingBase *this, bool enable)
{
  ?enableProgressMeter@bdContentStreamingBase@@QEAAX_N@Z(this, enable);
}

/*
==============
bdContentStreamingBase::pump
==============
*/

void __fastcall bdContentStreamingBase::pump(bdContentStreamingBase *this)
{
  ?pump@bdContentStreamingBase@@QEAAXXZ(this);
}

/*
==============
bdContentStreamingBase::startCopy
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreamingBase::startCopy(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  return ?startCopy@bdContentStreamingBase@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreamingBase::bdContentStreamingBase
==============
*/
void bdContentStreamingBase::bdContentStreamingBase(bdContentStreamingBase *this, bdRemoteTaskManager *const remoteTaskManager)
{
  bdLiveStreamingInterceptor *v4; 
  bdCSHTTPWrapperImpl *v5; 
  bdCSHTTPWrapper *v6; 
  bdLiveStreamingInterceptor *v7; 
  bdLiveStreamingInterceptor *v8; 

  this->__vftable = (bdContentStreamingBase_vtbl *)&bdContentStreamingBase::`vftable';
  bdMultiPartURL::bdMultiPartURL(&this->m_multiPartURLs);
  `eh vector vbase constructor iterator'(this->m_URLs, 0x4B0ui64, 0xAui64, (void (__fastcall *)(void *))bdURL::bdURL, (void (__fastcall *)(void *))bdURL::`vbase destructor);
  bdFileMetaData::bdFileMetaData(&this->m_fileMetaData);
  v4 = NULL;
  this->m_uploadData = NULL;
  this->m_uploadFileID = NULL;
  this->m_uploadMetaData = NULL;
  this->m_thumbData = NULL;
  this->m_thumbDataSize = 0;
  this->m_sendChecksum = 0;
  `eh vector vbase constructor iterator'(this->m_preCopyResults, 0x8D8ui64, 0xAui64, (void (__fastcall *)(void *))bdPreCopyResult::bdPreCopyResult, (void (__fastcall *)(void *))bdPreCopyResult::`vbase destructor);
  this->m_copySourceFileID = 0i64;
  this->m_wasCopyingPooledFile = 0;
  this->m_downloadMetaData = NULL;
  this->m_downloadData = NULL;
  *(_QWORD *)&this->m_downloadDataSize = 0i64;
  this->m_endByte = 0;
  *(_WORD *)&this->m_aborted = 0;
  this->m_isMultiPart = 0;
  bdSummaryMetaHandler::bdSummaryMetaHandler(&this->m_summaryMeta);
  this->m_overallTask.m_ptr = NULL;
  this->m_remoteTask.m_ptr = NULL;
  this->m_http = NULL;
  bdHashMD5::bdHashMD5(&this->m_md5Hash);
  this->m_finalizeOnComplete = 1;
  this->m_remoteTaskManager = remoteTaskManager;
  bdStopwatch::bdStopwatch(&this->m_streamData.timeSinceStreamInit);
  bdStopwatch::bdStopwatch(&this->m_throttleData.timeSinceThrottleInit);
  this->m_operation = 0;
  this->m_state = READY;
  *(_QWORD *)this->m_checksum = 0i64;
  *(_QWORD *)&this->m_checksum[8] = 0i64;
  *(_QWORD *)&this->m_checksum[16] = 0i64;
  *(_QWORD *)&this->m_checksum[24] = 0i64;
  v5 = (bdCSHTTPWrapperImpl *)bdMemory::allocate(0x28ui64);
  if ( v5 )
    bdCSHTTPWrapperImpl::bdCSHTTPWrapperImpl(v5);
  else
    v6 = NULL;
  this->m_http = v6;
  v7 = (bdLiveStreamingInterceptor *)bdMemory::allocate(0x38ui64);
  if ( v7 )
  {
    bdLiveStreamingInterceptor::bdLiveStreamingInterceptor(v7, this->m_http, &this->m_streamData);
    v4 = v8;
  }
  this->m_interceptor = v4;
}

/*
==============
bdContentStreamingBase::~bdContentStreamingBase
==============
*/
void bdContentStreamingBase::~bdContentStreamingBase(bdContentStreamingBase *this)
{
  bdCSHTTPWrapper *m_http; 
  bdLiveStreamingInterceptor *m_interceptor; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v5; 
  bdRemoteTask *v6; 
  bdRemoteTask *v7; 

  this->__vftable = (bdContentStreamingBase_vtbl *)&bdContentStreamingBase::`vftable';
  m_http = this->m_http;
  if ( m_http )
    ((void (__fastcall *)(bdCSHTTPWrapper *, __int64))m_http->~bdReferencable)(m_http, 1i64);
  m_interceptor = this->m_interceptor;
  if ( m_interceptor )
    ((void (__fastcall *)(bdLiveStreamingInterceptor *, __int64))m_interceptor->~bdUploadInterceptor)(m_interceptor, 1i64);
  bdHashMD5::~bdHashMD5(&this->m_md5Hash);
  m_ptr = this->m_remoteTask.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_remoteTask.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_remoteTask.m_ptr = NULL;
  }
  v6 = this->m_overallTask.m_ptr;
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v7 = this->m_overallTask.m_ptr;
    if ( v7 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v7->~bdReferencable)(v7, 1i64);
    this->m_overallTask.m_ptr = NULL;
  }
  bdSummaryMetaHandler::~bdSummaryMetaHandler((bdSummaryMetaHandler *)(&this->m_summaryMeta.m_originID + 1));
  bdReferencable::~bdReferencable((bdReferencable *)(&this->m_summaryMeta.m_originID + 1));
  `eh vector destructor iterator'(this->m_preCopyResults, 0x8D8ui64, 0xAui64, (void (__fastcall *)(void *))bdPreCopyResult::`vbase destructor);
  bdFileMetaData::~bdFileMetaData((bdFileMetaData *)(&this->m_fileMetaData.m_originID + 1));
  bdReferencable::~bdReferencable((bdReferencable *)(&this->m_fileMetaData.m_originID + 1));
  `eh vector destructor iterator'(this->m_URLs, 0x4B0ui64, 0xAui64, (void (__fastcall *)(void *))bdURL::`vbase destructor);
  bdMultiPartURL::~bdMultiPartURL((bdMultiPartURL *)this->m_multiPartURLs.gap2828);
  bdReferencable::~bdReferencable((bdReferencable *)this->m_multiPartURLs.gap2828);
}

/*
==============
bdContentStreamingBase::_extractFileInfo
==============
*/
void bdContentStreamingBase::_extractFileInfo(bdContentStreamingBase *this, char **URL, unsigned __int64 *fileID, unsigned int *fileSize)
{
  unsigned int v8; 
  unsigned int v9; 
  __int64 m_urlIndex; 
  bdLiveStreamingFileMetaData *m_downloadMetaDataMultiPart; 
  unsigned int m_operation; 
  bdRemoteTask *m_ptr; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 

  if ( this->m_isMultiPart )
  {
    v8 = this->m_operation - 101;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          m_urlIndex = this->m_urlIndex;
          if ( !*((_BYTE *)&this->m_URLs[m_urlIndex].__vftable + 16) )
          {
            bdContentStreamingBase::setState(this, AUTHENTICATED, BD_NO_ERROR);
            bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::_extractFileInfo", 0x1E0u, "No urls reminaing.");
            LOWORD(m_urlIndex) = this->m_urlIndex;
          }
          *URL = (char *)(&this->m_URLs[(__int16)m_urlIndex].__vftable + 2);
          *fileID = this->m_URLs[0].m_fileID;
          *fileSize = 0;
        }
      }
      else
      {
        *URL = this->m_downloadMetaDataMultiPart->m_urls[this->m_urlIndex];
        m_downloadMetaDataMultiPart = this->m_downloadMetaDataMultiPart;
        this->m_numUrls = m_downloadMetaDataMultiPart->m_numUrls;
        *fileID = *((_QWORD *)&m_downloadMetaDataMultiPart->__vftable + 2);
        *fileSize = this->m_downloadMetaDataMultiPart->m_fileSize;
      }
    }
    else
    {
      *URL = (char *)&this->m_multiPartURLs.__vftable + 1025 * this->m_urlIndex + 16;
      this->m_numUrls = this->m_multiPartURLs.m_numUrls;
      *fileID = this->m_multiPartURLs.m_fileID;
      *fileSize = 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::_extractFileInfo", 0x1EBu, "Extracting URL for Singlepart");
    m_operation = this->m_operation;
    if ( this->m_urlIndex >= 10 )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::_extractFileInfo", 0x1F4u, "Exhausted all URLs for this HTTP operation.");
      m_ptr = this->m_overallTask.m_ptr;
      if ( m_ptr->m_errorCode == BD_NO_ERROR )
      {
        m_ptr->m_errorCode = BD_CONTENTSTREAMING_FAILED_TO_START_HTTP;
        m_ptr = this->m_overallTask.m_ptr;
      }
      m_ptr->m_status = BD_FAILED;
      if ( this->m_finalizeOnComplete && (unsigned int)(this->m_state - 5) > 1 )
        this->m_http->finalize(this->m_http);
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[6]);
      m_operation = this->m_operation;
      this->m_state = CROSSPLAY_LOG_IN;
    }
    v14 = m_operation - 101;
    if ( !v14 )
      goto LABEL_25;
    v15 = v14 - 1;
    if ( !v15 )
    {
      *URL = this->m_downloadMetaData->m_url;
      *fileSize = this->m_downloadMetaData->m_fileSize;
      return;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v17 = this->m_urlIndex;
        if ( !this->m_preCopyResults[v17].m_source[0] )
        {
          *(_QWORD *)this->m_uploadFileID->_bytes_20 = *(_QWORD *)&this->m_preCopyResults[v17].m_source[1160];
          bdContentStreamingBase::setState(this, AUTHENTICATED, BD_NO_ERROR);
          bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::_extractFileInfo", 0x20Du, "No COPY urls remaining.");
          bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::_extractFileInfo", 0x20Eu, "Returned FileID: %i", *(_QWORD *)this->m_uploadFileID->_bytes_20);
          LOWORD(v17) = this->m_urlIndex;
        }
        *URL = this->m_preCopyResults[(__int16)v17].m_source;
      }
    }
    else
    {
LABEL_25:
      v18 = this->m_urlIndex;
      if ( !*((_BYTE *)&this->m_URLs[v18].__vftable + 16) )
      {
        bdContentStreamingBase::setState(this, AUTHENTICATED, BD_NO_ERROR);
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::_extractFileInfo", 0x200u, "No urls reminaing.");
        LOWORD(v18) = this->m_urlIndex;
      }
      *URL = (char *)(&this->m_URLs[(__int16)v18].__vftable + 2);
      *fileID = this->m_URLs[this->m_urlIndex].m_fileID;
    }
  }
}

/*
==============
bdContentStreamingBase::_postCopy
==============
*/
bdReference<bdRemoteTask> *bdContentStreamingBase::_postCopy(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  result->m_ptr = NULL;
  return result;
}

/*
==============
bdContentStreamingBase::_postUpload
==============
*/
bdReference<bdRemoteTask> *bdContentStreamingBase::_postUpload(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  unsigned int v4; 
  unsigned int m_fileSize; 
  bdContentStreamingBase_vtbl *v6; 
  bdRemoteTask **v7; 
  char v8; 
  bdRemoteTask *v9; 
  char v10; 
  unsigned int v12; 
  unsigned int v13; 
  char v14; 
  __int64 v15; 
  __int64 v16; 

  v4 = this->m_http->getTransferProgress(this->m_http);
  if ( this->m_isMultiPart )
  {
    this->_postUploadStream(this, result);
  }
  else
  {
    m_fileSize = this->m_fileMetaData.m_fileSize;
    if ( m_fileSize && m_fileSize != v4 && this->m_http->getStatus(this->m_http) == BD_TIMED_OUT )
    {
      v13 = this->m_fileMetaData.m_fileSize;
      v12 = v4;
      bdLogMessage(BD_LOG_WARNING, "warn/", "sim", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::_postUpload", 0x45Fu, "Upload completed with %d bytes sent. Expected %d", v12, v13);
    }
    this->m_fileMetaData.m_fileSize = v4;
    v6 = this->__vftable;
    if ( this->m_isSummary )
    {
      v7 = (bdRemoteTask **)v6->_postUploadSummary(this, (bdReference<bdRemoteTask> *)&v16);
      v8 = 1;
    }
    else
    {
      v7 = (bdRemoteTask **)v6->_postUploadFile(this, (bdReference<bdRemoteTask> *)&v15);
      v8 = 2;
    }
    v9 = *v7;
    result->m_ptr = *v7;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
    v10 = v8 | 4;
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      v14 = v10;
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
        {
          if ( v15 )
            (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1i64);
          v15 = 0i64;
        }
        v10 = v14;
      }
    }
    if ( (v10 & 1) != 0 && v16 && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), 0xFFFFFFFF) == 1 && v16 )
      (**(void (__fastcall ***)(__int64, __int64))v16)(v16, 1i64);
  }
  return result;
}

/*
==============
bdContentStreamingBase::_postUploadStream
==============
*/
bdReference<bdRemoteTask> *bdContentStreamingBase::_postUploadStream(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  result->m_ptr = NULL;
  return result;
}

/*
==============
bdContentStreamingBase::_preUploadPage
==============
*/
bdReference<bdRemoteTask> *bdContentStreamingBase::_preUploadPage(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result, __int16 offset)
{
  int v5; 

  result->m_ptr = NULL;
  v5 = offset;
  bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::_preUploadPage", 0x542u, "bdContentStreamingBase::initUploadpageage(bdInt16 offset) called with offset %d. This method is not supported.", v5);
  return result;
}

/*
==============
bdContentStreamingBase::abortHTTPOperation
==============
*/
void bdContentStreamingBase::abortHTTPOperation(bdContentStreamingBase *this, bool joinThread)
{
  bool v2; 
  bdRemoteTask *m_ptr; 

  v2 = this->m_overallTask.m_ptr == NULL;
  this->m_aborted = 1;
  if ( !v2 )
  {
    if ( this->m_state == FIRST_PARTY_AUTHED && !this->m_http->abortInProgress(this->m_http) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::abortHTTPOperation", 0x4AAu, "Aborting HTTP operation");
      this->m_http->abortOperation(this->m_http);
    }
    bdRemoteTask::cancelTask(this->m_overallTask.m_ptr);
    m_ptr = this->m_remoteTask.m_ptr;
    if ( m_ptr )
      bdRemoteTask::cancelTask(m_ptr);
  }
  this->m_state = CROSSPLAY_LOG_IN;
  this->m_operation = 0;
  if ( joinThread )
    this->m_http->finalize(this->m_http);
}

/*
==============
bdContentStreamingBase::checkProgress
==============
*/
void bdContentStreamingBase::checkProgress(bdContentStreamingBase *this, unsigned int *bytesTransfered, float *dataRate)
{
  unsigned int v7; 

  _RSI = dataRate;
  v7 = this->m_http->getTransferProgress(this->m_http);
  *bytesTransfered = v7;
  if ( this->m_isMultiPart )
    *bytesTransfered = this->m_interceptor->m_totalFileSize + v7;
  *(double *)&_XMM0 = ((double (__fastcall *)(bdCSHTTPWrapper *))this->m_http->getTransferSpeed)(this->m_http);
  __asm { vmovss  dword ptr [rsi], xmm0 }
}

/*
==============
bdContentStreamingBase::completeHTTPPhase
==============
*/
void bdContentStreamingBase::completeHTTPPhase(bdContentStreamingBase *this)
{
  bdContentStreamingBase::setState(this, AUTHENTICATED, BD_NO_ERROR);
}

/*
==============
bdContentStreamingBase::enablePersistentThread
==============
*/
void bdContentStreamingBase::enablePersistentThread(bdContentStreamingBase *this, bool enable)
{
  bool v2; 

  v2 = !enable;
  this->m_finalizeOnComplete = v2;
  if ( v2 && (unsigned int)(this->m_state - 5) <= 1 )
    this->m_http->finalize(this->m_http);
}

/*
==============
bdContentStreamingBase::enableProgressMeter
==============
*/
void bdContentStreamingBase::enableProgressMeter(bdContentStreamingBase *this, _BOOL8 enable)
{
  this->m_http->enableProgressMeter(this->m_http, enable);
}

/*
==============
bdContentStreamingBase::enableVerboseOutput
==============
*/
void bdContentStreamingBase::enableVerboseOutput(bdContentStreamingBase *this, _BOOL8 enable)
{
  this->m_http->enableVerboseOutput(this->m_http, enable);
}

/*
==============
bdContentStreamingBase::exitHTTP
==============
*/
void bdContentStreamingBase::exitHTTP(bdContentStreamingBase *this)
{
  unsigned int m_operation; 
  bdCSHTTPWrapper *m_http; 
  unsigned int v8; 
  int m_urlIndex; 
  __int16 v11; 
  const bdReference<bdRemoteTask> *v12; 
  bdRemoteTask *m_ptr; 
  bdContentStreamingBase::bdStatus v14; 
  const bdReference<bdRemoteTask> *v15; 
  __int16 partIndex; 
  __int16 m_partOffset; 
  int v18; 
  int m_numUrls; 
  unsigned int v20; 
  int v23; 
  bdContentStreamingBase::bdStatus v24; 
  unsigned int v25; 
  unsigned int m_startByte; 
  unsigned int m_endByte; 
  int v28; 
  __int16 v29; 
  bdLiveStreamingFileMetaData *m_downloadMetaDataMultiPart; 
  __int16 v31; 
  __int16 v32; 
  __int16 m_numParts; 
  bdContentStreamingBase_vtbl *v34; 
  const bdReference<bdRemoteTask> *v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  double v40; 
  __int64 v41; 
  __int64 v42; 
  double v43; 
  unsigned __int64 v44; 
  char *v45; 
  unsigned int v47; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v49; 
  bdRemoteTask *v50; 

  v47 = 0;
  bdContentStreamingBase::_extractFileInfo(this, &v45, &v44, &v47);
  m_operation = this->m_operation;
  this->m_retries = 0;
  if ( m_operation == 101 )
  {
    m_http = this->m_http;
    __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
    *(double *)&_XMM0 = ((double (__fastcall *)(bdCSHTTPWrapper *))m_http->getTransferSpeed)(m_http);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3a800000
      vcvtss2sd xmm6, xmm1, xmm1
    }
    v8 = this->m_http->getTransferProgress(this->m_http);
    this->m_uploadedSize += v8;
    __asm { vmovsd  [rsp+0A8h+var_58], xmm6 }
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x2CAu, "Uploaded %d (total %d) for file \"%s\" @ %.2f KB/sec", v8, this->m_uploadedSize, this->m_fileMetaData.m_fileName, v43);
    __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
    if ( !this->m_isMultiPart )
    {
      m_urlIndex = this->m_urlIndex;
      if ( m_urlIndex + 1 < this->m_numUrls )
      {
        LODWORD(v39) = this->m_numUrls;
        v11 = m_urlIndex + 1;
        this->m_urlIndex = v11;
        LODWORD(v36) = v11 + 1;
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x2D2u, "Uploading (attempt %d of %d)", v36, v39);
LABEL_23:
        this->initHTTP(this);
        return;
      }
      LODWORD(v36) = m_urlIndex + 1;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x2D7u, "Completed upload of %d files", v36);
      v12 = bdContentStreamingBase::_postUpload(this, &result);
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v12);
      if ( !result.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
        goto LABEL_10;
      m_ptr = result.m_ptr;
      goto LABEL_8;
    }
    if ( this->m_multiPartComplete )
    {
      LODWORD(v36) = this->m_streamData.partIndex + 1;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x2E0u, "Completed upload of %d parts", v36);
      v15 = bdContentStreamingBase::_postUpload(this, &v49);
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v15);
      if ( !v49.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&v49.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
      {
LABEL_10:
        v14 = AUTHENTICATING;
        if ( !this->m_remoteTask.m_ptr )
          v14 = CROSSPLAY_LOG_IN;
        goto LABEL_52;
      }
      m_ptr = v49.m_ptr;
LABEL_8:
      if ( m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
      goto LABEL_10;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x2E7u, "incrementing url index");
    partIndex = this->m_streamData.partIndex;
    ++this->m_urlIndex;
    m_partOffset = partIndex + 1;
    v18 = this->m_urlIndex;
    m_numUrls = this->m_numUrls;
    this->m_streamData.partIndex = m_partOffset;
    if ( v18 < m_numUrls )
    {
      LODWORD(v42) = m_numUrls;
      LODWORD(v39) = v18 + 1;
      LODWORD(v36) = m_partOffset;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x2EDu, "Uploading part %d.ts (%d of %d)", v36, v39, v42);
      this->initHTTP(this);
      return;
    }
LABEL_42:
    bdContentStreamingBase::initPreHTTP(this, m_partOffset);
    return;
  }
  if ( m_operation != 102 )
  {
    if ( m_operation == 104 )
    {
      ++this->m_urlIndex;
      v34 = this->__vftable;
      if ( this->m_urlIndex < this->m_numUrls )
      {
        v34->initHTTP(this);
        return;
      }
      v35 = v34->_postCopy(this, (bdReference<bdRemoteTask> *)&v50);
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v35);
      if ( !v50 || _InterlockedExchangeAdd((volatile signed __int32 *)&v50->m_refCount, 0xFFFFFFFF) != 1 )
        goto LABEL_10;
      m_ptr = v50;
      goto LABEL_8;
    }
    if ( m_operation != 103 )
      return;
    if ( ++this->m_urlIndex < this->m_numUrls )
      goto LABEL_23;
LABEL_51:
    v14 = AUTHENTICATED;
LABEL_52:
    bdContentStreamingBase::setState(this, v14, BD_NO_ERROR);
    return;
  }
  v20 = this->m_http->getTransferProgress(this->m_http) >> 10;
  *(double *)&_XMM0 = ((double (__fastcall *)(bdCSHTTPWrapper *))this->m_http->getTransferSpeed)(this->m_http);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3a800000
    vcvtss2sd xmm2, xmm1, xmm1
    vmovsd  [rsp+0A8h+var_68], xmm2
  }
  bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x2FAu, "Transferred: %d KB @ %0.2f KB/sec", v20, v40);
  if ( !this->m_isMultiPart )
  {
    v23 = ++this->m_urlIndex;
    if ( v23 < this->m_numUrls )
    {
      LODWORD(v41) = this->m_numUrls;
      LODWORD(v37) = this->m_urlIndex;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x304u, "Downloading (file %d of %d)", v37, v41);
      goto LABEL_23;
    }
    LODWORD(v37) = v23 + 1;
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x30Au, "Completed download of %d files", v37);
    v24 = AUTHENTICATED;
    v25 = this->m_http->getTransferProgress(this->m_http);
    if ( v25 == v47 )
      goto LABEL_33;
    m_startByte = this->m_startByte;
    if ( m_startByte || this->m_endByte )
    {
      m_endByte = this->m_endByte;
      if ( m_endByte >= v47 )
      {
        m_endByte = v47 - 1;
        this->m_endByte = v47 - 1;
      }
      v28 = m_endByte - m_startByte + 1;
      if ( this->m_http->getTransferProgress(this->m_http) == v28 )
        goto LABEL_33;
      LODWORD(v41) = v28;
      LODWORD(v38) = this->m_http->getTransferProgress(this->m_http);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x321u, "HTTP GET failed, received %d of %d bytes", v38, v41);
    }
    else
    {
      LODWORD(v41) = v47;
      LODWORD(v38) = this->m_http->getTransferProgress(this->m_http);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x313u, "HTTP GET failed, received %d of %d bytes", v38, v41);
    }
    v24 = CROSSPLAY_LOG_IN;
LABEL_33:
    bdContentStreamingBase::setState(this, v24, BD_NO_ERROR);
    return;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x32Du, "incrementing url index");
  v29 = this->m_streamData.partIndex;
  m_downloadMetaDataMultiPart = this->m_downloadMetaDataMultiPart;
  v31 = this->m_urlIndex + 1;
  this->m_urlIndex = v31;
  v32 = v29 + 1;
  this->m_streamData.partIndex = v29 + 1;
  m_numParts = m_downloadMetaDataMultiPart->m_numParts;
  if ( m_numParts != -1 && v32 == m_numParts )
  {
    LODWORD(v41) = v31;
    this->m_streamData.partIndex = v29;
    LODWORD(v37) = (__int16)(v29 - this->m_streamData.partIndexPage0);
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x336u, "Completed download of %d parts total (%d in this page)", v37, v41);
    this->m_overallTask.m_ptr->m_numResults = 1;
    goto LABEL_51;
  }
  if ( v31 >= this->m_numUrls )
  {
    m_partOffset = m_downloadMetaDataMultiPart->m_partOffset;
    goto LABEL_42;
  }
  LODWORD(v41) = v31 + 1;
  LODWORD(v37) = v32;
  bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTP", 0x343u, "Downloading part %d.ts (%d of %d)", v37, v41, this->m_numUrls);
  if ( !this->m_throttleData.throttling )
    goto LABEL_23;
  bdContentStreamingBase::initThrottled(this);
}

/*
==============
bdContentStreamingBase::exitHTTPFailed
==============
*/
void bdContentStreamingBase::exitHTTPFailed(bdContentStreamingBase *this)
{
  unsigned int m_operation; 
  unsigned int v3; 
  unsigned int v4; 
  int v5; 
  unsigned __int16 m_retries; 
  __int16 m_numParts; 
  __int16 partIndex; 
  bdRemoteTask *m_ptr; 
  const bdReference<bdRemoteTask> *v10; 
  bdContentStreamingBase::bdStatus v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  bdRemoteTask *v15; 
  bdRemoteTask *v16; 
  bdRemoteTask *v17; 
  unsigned int v18; 
  char *v19; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 v21; 

  v19 = "unset";
  bdContentStreamingBase::_extractFileInfo(this, &v19, &v21, &v18);
  m_operation = this->m_operation;
  if ( this->m_isMultiPart )
  {
    v3 = m_operation - 101;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
        if ( this->m_partDuration == -1 )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x39Au, "HTTP GET of part %d.ts failed. Assuming end of stream. Terminating download.", this->m_streamData.partIndex);
          bdContentStreamingBase::setState(this, AUTHENTICATED, BD_NO_ERROR);
        }
        else
        {
          m_retries = this->m_retries;
          if ( m_retries < 2u )
          {
            this->m_retries = m_retries + 1;
            bdContentStreamingBase::initThrottled(this);
          }
          else
          {
            m_numParts = this->m_downloadMetaDataMultiPart->m_numParts;
            if ( m_numParts == -1 || this->m_streamData.partIndex + 1 >= m_numParts )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x3A9u, "HTTP GET of part %d.ts failed %d times. Assuming end of stream. Terminating download.", this->m_streamData.partIndex, m_retries);
              bdContentStreamingBase::setState(this, AUTHENTICATED, BD_NO_ERROR);
            }
            else
            {
              bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x3A4u, "HTTP GET of part %d.ts failed %d times before reaching the final part %d. Terminating download.", this->m_streamData.partIndex, m_retries, m_numParts);
              bdContentStreamingBase::setState(this, CROSSPLAY_LOG_IN, BD_NO_ERROR);
            }
          }
        }
        return;
      }
      if ( v4 != 1 )
        return;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x3B8u, "HTTP DELETE %s failed", v19);
      v5 = ++this->m_urlIndex;
      if ( v5 < this->m_numUrls && (__int16)v5 < 10 )
      {
        this->initHTTP(this);
        return;
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x3BDu, "HTTP DELETE failed");
LABEL_50:
      m_ptr = this->m_overallTask.m_ptr;
      if ( m_ptr->m_errorCode == BD_NO_ERROR )
      {
        m_ptr->m_errorCode = BD_CONTENTSTREAMING_HTTP_ERROR;
        goto LABEL_52;
      }
      goto LABEL_53;
    }
    partIndex = this->m_streamData.partIndex;
    if ( !partIndex )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x388u, "Complete upload failure : HTTP PUT failed for first part.");
      m_ptr = this->m_overallTask.m_ptr;
      if ( m_ptr->m_errorCode == BD_NO_ERROR )
      {
        m_ptr->m_errorCode = BD_CONTENTSTREAMING_FAILED_TO_START_HTTP;
LABEL_52:
        m_ptr = this->m_overallTask.m_ptr;
      }
LABEL_53:
      m_ptr->m_status = BD_FAILED;
      if ( this->m_finalizeOnComplete && (unsigned int)(this->m_state - 5) > 1 )
        this->m_http->finalize(this->m_http);
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[6]);
      this->m_state = CROSSPLAY_LOG_IN;
      return;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x38Du, "Partial upload failure : HTTP PUT failed for part %d.ts.", partIndex);
    v10 = bdContentStreamingBase::_postUpload(this, &result);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v10);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    v11 = AUTHENTICATING;
    if ( !this->m_remoteTask.m_ptr )
      v11 = CROSSPLAY_LOG_IN;
    bdContentStreamingBase::setState(this, v11, BD_CONTENTSTREAMING_HTTP_ERROR);
  }
  else
  {
    v12 = m_operation - 101;
    if ( !v12 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x3CFu, "HTTP PUT failed for url %s", v19);
      goto LABEL_50;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          return;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x3E3u, "HTTP COPY %s failed", this->m_preCopyResults[this->m_urlIndex].m_source);
        v15 = this->m_overallTask.m_ptr;
        if ( v15->m_errorCode == BD_NO_ERROR )
        {
          v15->m_errorCode = BD_CONTENTSTREAMING_HTTP_ERROR;
          v15 = this->m_overallTask.m_ptr;
        }
        v15->m_status = BD_FAILED;
        if ( this->m_finalizeOnComplete && (unsigned int)(this->m_state - 5) > 1 )
          this->m_http->finalize(this->m_http);
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x3DCu, "HTTP DELETE %s failed", v19);
        v16 = this->m_overallTask.m_ptr;
        if ( v16->m_errorCode == BD_NO_ERROR )
        {
          v16->m_errorCode = BD_CONTENTSTREAMING_HTTP_ERROR;
          v16 = this->m_overallTask.m_ptr;
        }
        v16->m_status = BD_FAILED;
        if ( this->m_finalizeOnComplete && (unsigned int)(this->m_state - 5) > 1 )
          this->m_http->finalize(this->m_http);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::exitHTTPFailed", 0x3D5u, "HTTP GET %s failed", v19);
      v17 = this->m_overallTask.m_ptr;
      if ( v17->m_errorCode == BD_NO_ERROR )
      {
        v17->m_errorCode = BD_CONTENTSTREAMING_HTTP_ERROR;
        v17 = this->m_overallTask.m_ptr;
      }
      v17->m_status = BD_FAILED;
      if ( this->m_finalizeOnComplete && (unsigned int)(this->m_state - 5) > 1 )
        this->m_http->finalize(this->m_http);
    }
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[6]);
    this->m_state = CROSSPLAY_LOG_IN;
    this->m_overallTask.m_ptr->m_numResults = 0;
  }
}

/*
==============
bdContentStreamingBase::getCurrentPartIndex
==============
*/
__int64 bdContentStreamingBase::getCurrentPartIndex(bdContentStreamingBase *this)
{
  if ( this->m_isMultiPart )
    return (unsigned __int16)this->m_streamData.partIndex;
  else
    return 0i64;
}

/*
==============
bdContentStreamingBase::getHTTPObject
==============
*/
bdCSHTTPWrapper *bdContentStreamingBase::getHTTPObject(bdContentStreamingBase *this)
{
  return this->m_http;
}

/*
==============
bdContentStreamingBase::getLastError
==============
*/
__int64 bdContentStreamingBase::getLastError(bdContentStreamingBase *this)
{
  unsigned int v2; 
  bool v3; 
  __int64 result; 

  v2 = this->m_http->getInternalError(this->m_http);
  if ( !v2 )
    v2 = this->m_http->getLastHTTPError(this->m_http);
  if ( this->m_aborted )
    return 5i64;
  v3 = this->m_http->getStatus(this->m_http) == BD_CANCELLED;
  result = v2;
  if ( v3 )
    return 5i64;
  return result;
}

/*
==============
bdContentStreamingBase::getLastHTTPError
==============
*/
__int64 bdContentStreamingBase::getLastHTTPError(bdContentStreamingBase *this)
{
  return ((__int64 (__fastcall *)(bdCSHTTPWrapper *))this->m_http->getLastHTTPError)(this->m_http);
}

/*
==============
bdContentStreamingBase::getNextPartIndex
==============
*/
__int16 bdContentStreamingBase::getNextPartIndex(bdContentStreamingBase *this)
{
  return this->m_streamData.partIndex + 1;
}

/*
==============
bdContentStreamingBase::getState
==============
*/
__int64 bdContentStreamingBase::getState(bdContentStreamingBase *this)
{
  return (unsigned int)this->m_state;
}

/*
==============
bdContentStreamingBase::getTotalNumParts
==============
*/
__int64 bdContentStreamingBase::getTotalNumParts(bdContentStreamingBase *this)
{
  unsigned int m_operation; 
  __int16 m_numParts; 

  m_operation = this->m_operation;
  if ( !m_operation )
    m_operation = this->m_prevOperation;
  if ( m_operation == 102 && (m_numParts = this->m_downloadMetaDataMultiPart->m_numParts, m_numParts > 0) )
    return (unsigned int)m_numParts;
  else
    return 0i64;
}

/*
==============
bdContentStreamingBase::initDelete
==============
*/
bool bdContentStreamingBase::initDelete(bdContentStreamingBase *this)
{
  bool result; 

  if ( !this->m_http->isOkayToStart(this->m_http) || this->m_operation )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initDelete", 0x44Bu, "BD_CONTENTSTREAMING_FAILED_TO_START_HTTP");
    return 0;
  }
  else
  {
    result = 1;
    this->m_urlIndex = 0;
    *((_BYTE *)&this->m_URLs[0].__vftable + 16) = 0;
  }
  return result;
}

/*
==============
bdContentStreamingBase::initDownload
==============
*/
bool bdContentStreamingBase::initDownload(bdContentStreamingBase *this, void *fileData, unsigned int fileSize, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte, bdLiveStreamingFileMetaData *fileMetaDataMultiPart, __int16 partDuration)
{
  bdLiveStreamingInterceptor *m_interceptor; 
  bool v14; 
  bdDownloadInterceptor *v15; 
  bool result; 

  if ( !this->m_http->isOkayToStart(this->m_http) || this->m_operation )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initDownload", 0x112u, "BD_CONTENTSTREAMING_FAILED_TO_START_HTTP");
    return 0;
  }
  else
  {
    this->m_downloadMetaData = fileMetaData;
    this->m_startByte = startByte;
    this->m_endByte = endByte;
    this->m_partDuration = partDuration;
    this->m_downloadData = fileData;
    this->m_downloadDataSize = fileSize;
    this->m_downloadMetaDataMultiPart = fileMetaDataMultiPart;
    this->m_urlIndex = 0;
    this->m_streamData.nextPage = 0;
    *(_DWORD *)&this->m_streamData.partIndexCurrentPage = 0;
    this->m_numUrls = 1;
    this->m_retries = 0;
    this->m_throttleData.throttling = 0;
    if ( fileMetaDataMultiPart )
    {
      this->m_isMultiPart = 1;
      if ( downloadHandler )
      {
        this->m_interceptor->m_clientDownloadInterceptor = downloadHandler;
        this->m_interceptor->m_numParts = 0;
        this->m_interceptor->m_totalFileSize = 0;
        m_interceptor = this->m_interceptor;
        v14 = m_interceptor == NULL;
        v15 = &m_interceptor->bdDownloadInterceptor;
        result = 1;
        if ( v14 )
          v15 = NULL;
        this->m_downloadHandler = v15;
      }
      else
      {
        this->m_downloadHandler = NULL;
        return 1;
      }
    }
    else
    {
      this->m_isMultiPart = 0;
      result = 1;
      this->m_downloadHandler = downloadHandler;
    }
  }
  return result;
}

/*
==============
bdContentStreamingBase::initHTTP
==============
*/
void bdContentStreamingBase::initHTTP(bdContentStreamingBase *this)
{
  unsigned int m_operation; 
  int v3; 
  char *v4; 
  bdCSHTTPWrapper *m_http; 
  bdRemoteTask *m_ptr; 
  bool m_sendChecksum; 
  unsigned __int64 v8; 
  unsigned __int8 *m_checksum; 
  int v10; 
  unsigned __int64 TransactionID; 
  char *v12; 
  bdCSHTTPWrapper *v13; 
  unsigned int m_endByte; 
  unsigned int m_startByte; 
  unsigned __int64 v16; 
  bdCSHTTPWrapper *v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned __int64 v20; 
  char *v21; 
  __int16 m_urlIndex; 
  char *m_destination; 
  bdCSHTTPWrapper *v24; 
  bdCSHTTPWrapper::bdStatus (__fastcall *startCopy)(bdCSHTTPWrapper *, const char *const, const char *const, unsigned __int64); 
  unsigned __int64 v26; 
  char *v27; 
  bdCSHTTPWrapper *v28; 
  bdCSHTTPWrapper::bdStatus (__fastcall *startDelete)(bdCSHTTPWrapper *, const char *const, unsigned __int64, bdCSHTTPWrapper::bdHTTPHeader *, unsigned int, void *const, unsigned int); 
  unsigned __int64 v30; 
  bdContentStreamingBase::bdStatus m_state; 
  bdRemoteTask *v32; 
  bdContentStreamingBase::bdStatus v33; 
  bdRemoteTask *v34; 
  unsigned int v35; 
  char *v36; 
  unsigned __int64 v37; 

  v36 = "unset";
  v37 = 0i64;
  bdContentStreamingBase::_extractFileInfo(this, &v36, &v37, &v35);
  if ( this->m_state == AUTHENTICATED )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initHTTP", 0x226u, "No need to perform this HTTP operation");
    return;
  }
  m_operation = this->m_operation;
  v3 = 1;
  switch ( m_operation )
  {
    case 'e':
      if ( !bdRemoteTask::getNumResults(this->m_remoteTask.m_ptr) )
      {
        bdContentStreamingBase::setState(this, AUTHENTICATED, BD_NO_ERROR);
        goto LABEL_25;
      }
      v4 = v36;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initHTTP", 0x23Du, "HTTP PUT %s", v36);
      m_http = this->m_http;
      m_ptr = this->m_remoteTask.m_ptr;
      *((_QWORD *)&this->m_fileMetaData.__vftable + 2) = v37;
      if ( this->m_uploadHandler )
      {
        TransactionID = bdRemoteTask::getTransactionID(m_ptr);
        v10 = m_http->_startUpload(m_http, v4, NULL, this->m_uploadHandler, this->m_fileMetaData.m_fileSize, TransactionID, NULL, NULL, 0, NULL, 0);
      }
      else
      {
        m_sendChecksum = this->m_sendChecksum;
        v8 = bdRemoteTask::getTransactionID(m_ptr);
        m_checksum = this->m_checksum;
        if ( !m_sendChecksum )
          m_checksum = NULL;
        v10 = m_http->_startUpload(m_http, v4, this->m_uploadData, NULL, this->m_fileMetaData.m_fileSize, v8, (char *)m_checksum, NULL, 0, NULL, 0);
      }
      goto LABEL_24;
    case 'f':
      v12 = v36;
      if ( this->m_downloadHandler )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initHTTP", 0x255u, "HTTP GET %s", v36);
        v13 = this->m_http;
        m_endByte = this->m_endByte;
        m_startByte = this->m_startByte;
        v16 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
        v10 = v13->_startDownload(v13, v12, NULL, 0, this->m_downloadHandler, v16, m_startByte, m_endByte, NULL, 0);
      }
      else
      {
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initHTTP", 0x25Eu, "HTTP GET %s", v36);
        v17 = this->m_http;
        v18 = this->m_endByte;
        v19 = this->m_startByte;
        v20 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
        v10 = v17->_startDownload(v17, v12, this->m_downloadData, this->m_downloadDataSize, NULL, v20, v19, v18, NULL, 0);
      }
      goto LABEL_24;
    case 'h':
      v21 = v36;
      if ( *v36 )
      {
        m_urlIndex = this->m_urlIndex;
        if ( m_urlIndex >= 10 )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initHTTP", 0x273u, "Failed to copy parts > %d as BD_MAX_URLs_COPY is defined as %d", m_urlIndex, 10);
          bdContentStreamingBase::setState(this, CROSSPLAY_LOG_IN, BD_NO_ERROR);
          return;
        }
        m_destination = this->m_preCopyResults[m_urlIndex].m_destination;
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initHTTP", 0x279u, "HTTP COPY from %s", v36);
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initHTTP", 0x27Au, "HTTP COPY to %s", m_destination);
        v24 = this->m_http;
        startCopy = v24->startCopy;
        v26 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
        v10 = startCopy(v24, v21, m_destination, v26);
        goto LABEL_24;
      }
LABEL_22:
      bdContentStreamingBase::setState(this, AUTHENTICATED, BD_NO_ERROR);
      return;
  }
  if ( m_operation != 103 )
    goto LABEL_25;
  v27 = v36;
  if ( !*v36 )
    goto LABEL_22;
  bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initHTTP", 0x288u, "HTTP DELETE %s", v36);
  v28 = this->m_http;
  startDelete = v28->startDelete;
  v30 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
  v10 = startDelete(v28, v27, v30, NULL, 0, NULL, 0);
LABEL_24:
  v3 = v10;
LABEL_25:
  m_state = this->m_state;
  if ( m_state != AUTHENTICATED )
  {
    if ( (unsigned int)(v3 - 3) > 1 )
    {
      v34 = this->m_overallTask.m_ptr;
      if ( v34->m_errorCode == BD_NO_ERROR )
      {
        v34->m_errorCode = BD_CONTENTSTREAMING_FAILED_TO_START_HTTP;
        v34 = this->m_overallTask.m_ptr;
      }
      v34->m_status = BD_FAILED;
      if ( this->m_finalizeOnComplete && (unsigned int)(this->m_state - 5) > 1 )
        this->m_http->finalize(this->m_http);
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[6]);
      this->m_state = CROSSPLAY_LOG_IN;
    }
    else
    {
      v32 = this->m_overallTask.m_ptr;
      v33 = this->m_state;
      if ( v32->m_errorCode == BD_NO_ERROR && (m_state == FETCHING_FIRST_PARTY_TOKEN || m_state == AUTHENTICATING) )
      {
        v32->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
        v33 = this->m_state;
      }
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[v33], bdContentStreamingBase::s_statusStrings[2]);
      this->m_state = FIRST_PARTY_AUTHED;
    }
  }
}

/*
==============
bdContentStreamingBase::initPreHTTP
==============
*/
void bdContentStreamingBase::initPreHTTP(bdContentStreamingBase *this, __int16 partOffset)
{
  bdRemoteTask *m_ptr; 
  bdContentStreamingBase::bdStatus m_state; 
  const bdReference<bdRemoteTask> *v6; 
  bdContentStreamingBase_vtbl *v7; 
  const bdReference<bdRemoteTask> *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( this->m_isMultiPart )
  {
    m_ptr = this->m_overallTask.m_ptr;
    if ( m_ptr->m_errorCode == BD_NO_ERROR )
    {
      m_state = this->m_state;
      if ( m_state == FETCHING_FIRST_PARTY_TOKEN || m_state == AUTHENTICATING )
        m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[1]);
    this->m_state = FETCHING_FIRST_PARTY_TOKEN;
    if ( this->m_operation == 102 )
    {
      LODWORD(v9) = partOffset;
      this->m_urlIndex = 0;
      this->m_streamData.partIndex = partOffset;
      this->m_streamData.partIndexCurrentPage = partOffset;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initPreHTTP", 0x18Au, "Downloading the page of parts from index %d.", v9);
      v6 = this->_preDownloadPage(this, &v10, (unsigned __int16)this->m_streamData.partIndex);
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v6);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 && v10 )
          (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1i64);
      }
    }
    if ( this->m_operation == 101 )
    {
      v7 = this->__vftable;
      this->m_urlIndex = 0;
      v8 = v7->_preUploadPage(this, (bdReference<bdRemoteTask> *)&v11, partOffset);
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v8);
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
        {
          if ( v11 )
            (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1i64);
        }
      }
    }
  }
}

/*
==============
bdContentStreamingBase::initThrottled
==============
*/
void bdContentStreamingBase::initThrottled(bdContentStreamingBase *this)
{
  bdCSHTTPWrapper *m_http; 
  int v4; 
  StreamData *p_m_streamData; 
  int m_partDuration; 
  __int16 v8; 
  bdRemoteTask *m_ptr; 
  bdContentStreamingBase::bdStatus m_state; 
  int v12; 
  int partIndex; 
  double v14; 
  double v15; 
  int v16; 
  int v17; 

  if ( !this->m_throttleData.throttling )
  {
    this->m_throttleData.throttling = 1;
    bdStopwatch::reset(&this->m_throttleData.timeSinceThrottleInit);
    bdStopwatch::start(&this->m_throttleData.timeSinceThrottleInit);
    m_http = this->m_http;
    this->m_throttleData.throttlingInitIndex = this->m_streamData.partIndex;
    v4 = m_http->getLastHTTPError(m_http);
    p_m_streamData = &this->m_streamData;
    if ( v4 < 500 )
    {
      m_partDuration = this->m_partDuration;
      v8 = this->m_streamData.partIndex - this->m_streamData.partIndexPage0;
      this->m_throttleType = BD_WAITING_FOR_FILE_PART;
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&p_m_streamData->timeSinceStreamInit);
      v17 = m_partDuration;
      v16 = v8;
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+68h+var_28], xmm1
      }
      partIndex = this->m_streamData.partIndex;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initThrottled", 0x404u, "Throttling Stream at part %d.ts at time %f (%d parts of duration %u each).", partIndex, v15, v16, v17);
    }
    else
    {
      this->m_throttleType = BD_RETRY_CONNECTION;
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&p_m_streamData->timeSinceStreamInit);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+68h+var_28], xmm1
      }
      v12 = this->m_streamData.partIndex;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initThrottled", 0x3FAu, "Throttling Stream before re-attempting download of part %d.ts at time %f.", v12, v14);
    }
  }
  m_ptr = this->m_overallTask.m_ptr;
  if ( m_ptr->m_errorCode == BD_NO_ERROR )
  {
    m_state = this->m_state;
    if ( m_state == FETCHING_FIRST_PARTY_TOKEN || m_state == AUTHENTICATING )
      m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[3]);
  this->m_state = LOGIN_DELAY;
}

/*
==============
bdContentStreamingBase::initUpload
==============
*/
char bdContentStreamingBase::initUpload(bdContentStreamingBase *this, const unsigned __int16 fileSlot, const void *fileData, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, bdFileMetaData *fileMetaData, const unsigned int __formal, const bool isSummary, const bool isMultiPart)
{
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  _BYTE *v23; 
  bdTag_vtbl **v24; 
  signed __int64 v25; 
  unsigned int v27; 

  if ( thumbDataSize > this->getMaxMetaDataSize(this) )
  {
    v27 = this->getMaxMetaDataSize(this);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initUpload", 0x87u, "Failed to init upload of meta data size %d (max %d)", thumbDataSize, v27);
    return 0;
  }
  if ( !this->m_http->isOkayToStart(this->m_http) || this->m_operation )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::initUpload", 0x8Eu, "BD_CONTENTSTREAMING_FAILED_TO_START_HTTP");
    return 0;
  }
  v20 = 0i64;
  this->m_urlIndex = 0;
  this->m_streamData.nextPage = 0;
  *(_DWORD *)&this->m_streamData.partIndexCurrentPage = 0;
  *(_QWORD *)&this->m_numUrls = 1i64;
  *((_BYTE *)&this->m_URLs[0].__vftable + 16) = 0;
  if ( isMultiPart )
  {
    this->m_interceptor->m_clientUploadInterceptor = uploadHandler;
    this->m_interceptor->m_numParts = 0;
    this->m_interceptor->m_totalFileSize = 0;
    if ( uploadHandler )
      uploadHandler = this->m_interceptor;
  }
  this->m_uploadMetaData = fileMetaData;
  this->m_isSummary = isSummary;
  this->m_thumbData = thumbData;
  this->m_fileMetaData.m_fileSize = fileSize;
  this->m_uploadData = fileData;
  v21 = numTags;
  this->m_fileMetaData.m_category = category;
  this->m_uploadHandler = uploadHandler;
  this->m_uploadFileID = fileID;
  this->m_isMultiPart = isMultiPart;
  this->m_multiPartComplete = 0;
  this->m_thumbDataSize = thumbDataSize;
  this->m_fileMetaData.m_fileSlot = fileSlot;
  this->m_fileMetaData.m_numTags = numTags;
  if ( fileID )
    v20 = *(_QWORD *)fileID->_bytes_20;
  *((_QWORD *)&this->m_fileMetaData.__vftable + 2) = v20;
  if ( fileName )
  {
    v22 = 128i64;
    v23 = memchr_0(fileName, 0, 0x80ui64);
    if ( v23 )
      v22 = v23 - fileName;
    bdStrlcpy(this->m_fileMetaData.m_fileName, fileName, v22 + 1);
  }
  else
  {
    this->m_fileMetaData.m_fileName[0] = 0;
  }
  if ( numTags )
  {
    v24 = &this->m_fileMetaData.m_tags[0].__vftable + 1;
    v25 = (char *)tags - (char *)this;
    do
    {
      bdReferencable::operator=((bdReferencable *)((char *)v24 + SHIDWORD((*v24)->deserialize)), (const bdReferencable *)((char *)v24 + SHIDWORD((*(bdTag_vtbl **)((char *)v24 + v25 - 25648))->deserialize) + v25 - 25648));
      bdReferencable::operator=((bdReferencable *)((char *)v24 + SHIDWORD(v24[2]->deserialize) + 16), (const bdReferencable *)((char *)v24 + SHIDWORD((*(bdTag_vtbl **)((char *)v24 + v25 - 25632))->deserialize) + v25 - 25632));
      v24[3] = *(bdTag_vtbl **)((char *)v24 + v25 - 25624);
      v24[4] = *(bdTag_vtbl **)((char *)v24 + v25 - 25616);
      v24 += 8;
      --v21;
    }
    while ( v21 );
  }
  this->m_sendChecksum = 0;
  return 1;
}

/*
==============
bdContentStreamingBase::isCurrentlyDownloadingStreamLive
==============
*/
bool bdContentStreamingBase::isCurrentlyDownloadingStreamLive(bdContentStreamingBase *this)
{
  unsigned int m_operation; 

  m_operation = this->m_operation;
  if ( !m_operation )
    m_operation = this->m_prevOperation;
  if ( m_operation == 101 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::isCurrentlyDownloadingStreamLive", 0x558u, "isCurrentlyDownloadingStreamLive only applies to (multi part) downloads.");
    return 0;
  }
  return m_operation != 102 && this->m_downloadMetaDataMultiPart->m_numParts == -1;
}

/*
==============
bdContentStreamingBase::pauseLiveStream
==============
*/
bool bdContentStreamingBase::pauseLiveStream(bdContentStreamingBase *this)
{
  bool result; 
  bdRemoteTask *m_ptr; 
  bdContentStreamingBase::bdStatus m_state; 

  if ( this->m_operation - 101 > 1 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::pauseLiveStream", 0x578u, "pauseLiveStream only applies to uploads and downloads.");
    return 0;
  }
  if ( !this->m_isMultiPart )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::pauseLiveStream", 0x57Du, "pauseLiveStream only applies to multipart files.");
    return 0;
  }
  m_ptr = this->m_overallTask.m_ptr;
  if ( m_ptr->m_errorCode == BD_NO_ERROR )
  {
    m_state = this->m_state;
    if ( m_state == FETCHING_FIRST_PARTY_TOKEN || m_state == AUTHENTICATING )
      m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[7]);
  result = 1;
  this->m_state = RESUME_FLOW;
  return result;
}

/*
==============
bdContentStreamingBase::pump
==============
*/
void bdContentStreamingBase::pump(bdContentStreamingBase *this)
{
  bdRemoteTask *m_ptr; 
  bool v5; 
  bdRemoteTask *v6; 
  bdCSHTTPWrapper::bdStatus v7; 
  bdTask::bdStatus v8; 
  int v9; 
  char v13; 
  bdStopwatch *p_timeSinceThrottleInit; 
  int m_partDuration; 
  bdRemoteTask *v18; 
  bdContentStreamingBase::bdStatus m_state; 
  bdContentStreamingBase_vtbl *v20; 
  double v21; 
  double v22; 

  if ( this->m_operation )
  {
    m_ptr = this->m_overallTask.m_ptr;
    if ( m_ptr )
    {
      if ( m_ptr->getStatus(m_ptr) == BD_CANCELLED )
      {
        v5 = this->m_overallTask.m_ptr == NULL;
        this->m_aborted = 1;
        if ( !v5 )
        {
          if ( this->m_state == FIRST_PARTY_AUTHED && !this->m_http->abortInProgress(this->m_http) )
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::abortHTTPOperation", 0x4AAu, "Aborting HTTP operation");
            this->m_http->abortOperation(this->m_http);
          }
          bdRemoteTask::cancelTask(this->m_overallTask.m_ptr);
          v6 = this->m_remoteTask.m_ptr;
          if ( v6 )
            bdRemoteTask::cancelTask(v6);
        }
        this->m_state = CROSSPLAY_LOG_IN;
        this->m_operation = 0;
      }
    }
  }
  if ( this->m_state == FETCHING_FIRST_PARTY_TOKEN )
  {
    bdContentStreamingBase::pumpPreHTTP(this);
    goto LABEL_41;
  }
  if ( this->m_state != FIRST_PARTY_AUTHED )
  {
    if ( this->m_state == LOGIN_DELAY )
    {
      __asm { vmovaps [rsp+78h+var_18], xmm6 }
      v9 = (__int16)(this->m_streamData.partIndex - this->m_throttleData.throttlingInitIndex);
      if ( this->m_throttleType == BD_RETRY_CONNECTION )
      {
        __asm { vmovss  xmm6, cs:__real@40000000 }
      }
      else
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, ecx
        }
      }
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_throttleData.timeSinceThrottleInit);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm6, [rsp+78h+var_18]
      }
      if ( !(v13 | v5) )
      {
        p_timeSinceThrottleInit = &this->m_throttleData.timeSinceThrottleInit;
        if ( this->m_throttleType == BD_RETRY_CONNECTION )
        {
          *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(p_timeSinceThrottleInit);
          __asm
          {
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  [rsp+78h+var_38], xmm1
          }
          bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::pumpThrottled", 0x43Cu, "Re-attempting to download %d.ts at throttle time %f.", this->m_streamData.partIndex, v22);
        }
        else
        {
          m_partDuration = this->m_partDuration;
          *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(p_timeSinceThrottleInit);
          __asm
          {
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  [rsp+78h+var_38], xmm1
          }
          bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::pumpThrottled", 0x435u, "Resuming Stream at part %d.ts at throttle time %f (%d throttled parts of duration %u each).", this->m_streamData.partIndex, v21, v9, m_partDuration);
        }
        v18 = this->m_overallTask.m_ptr;
        if ( v18->m_errorCode == BD_NO_ERROR )
        {
          m_state = this->m_state;
          if ( m_state == FETCHING_FIRST_PARTY_TOKEN || m_state == AUTHENTICATING )
            v18->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
        }
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[2]);
        v20 = this->__vftable;
        this->m_state = FIRST_PARTY_AUTHED;
        v20->initHTTP(this);
      }
      goto LABEL_41;
    }
    if ( this->m_state == AUTHENTICATING )
    {
      v8 = this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr);
      if ( v8 != BD_PENDING )
        bdContentStreamingBase::setState(this, (bdContentStreamingBase::bdStatus)((v8 != BD_DONE) + 5), BD_NO_ERROR);
      goto LABEL_41;
    }
    if ( this->m_state != RESUME_FLOW )
      goto LABEL_41;
  }
  v7 = this->m_http->getStatus(this->m_http);
  if ( v7 == BD_TIMED_OUT && this->m_http->abortInProgress(this->m_http) )
    v7 = BD_MAX_STATUS;
  if ( this->m_state == RESUME_FLOW )
  {
    if ( v7 == BD_TIMED_OUT )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[7], bdContentStreamingBase::s_statusStrings[8]);
      this->m_state = CREATING_UNO_ANONYMOUS_ACCOUNT;
      goto LABEL_41;
    }
  }
  else if ( v7 == BD_TIMED_OUT )
  {
    bdContentStreamingBase::exitHTTP(this);
    goto LABEL_41;
  }
  if ( (unsigned int)(v7 - 6) <= 2 )
    bdContentStreamingBase::exitHTTPFailed(this);
LABEL_41:
  if ( (unsigned int)(this->m_state - 5) <= 1 )
  {
    this->m_prevOperation = this->m_operation;
    this->m_operation = 0;
  }
}

/*
==============
bdContentStreamingBase::pumpHTTP
==============
*/
void bdContentStreamingBase::pumpHTTP(bdContentStreamingBase *this)
{
  bdCSHTTPWrapper::bdStatus v2; 

  v2 = this->m_http->getStatus(this->m_http);
  if ( v2 == BD_TIMED_OUT && this->m_http->abortInProgress(this->m_http) )
    v2 = BD_MAX_STATUS;
  if ( this->m_state == RESUME_FLOW )
  {
    if ( v2 == BD_TIMED_OUT )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[7], bdContentStreamingBase::s_statusStrings[8]);
      this->m_state = CREATING_UNO_ANONYMOUS_ACCOUNT;
      return;
    }
  }
  else if ( v2 == BD_TIMED_OUT )
  {
    bdContentStreamingBase::exitHTTP(this);
    return;
  }
  if ( (unsigned int)(v2 - 6) <= 2 )
    bdContentStreamingBase::exitHTTPFailed(this);
}

/*
==============
bdContentStreamingBase::pumpPreHTTP
==============
*/
void bdContentStreamingBase::pumpPreHTTP(bdContentStreamingBase *this)
{
  bdTask::bdStatus v2; 
  unsigned int m_operation; 
  bdLiveStreamingFileMetaData *m_downloadMetaDataMultiPart; 
  int m_numUrls_low; 
  int m_partOffset; 
  __int16 v7; 
  bdRemoteTask *m_ptr; 
  bdLobbyErrorCode *p_m_errorCode; 
  bdContentStreamingBase::bdStatus m_state; 

  v2 = this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr);
  if ( v2 == BD_DONE )
  {
    m_operation = this->m_operation;
    if ( m_operation == 104 )
    {
      this->m_numUrls = this->m_remoteTask.m_ptr->m_numResults;
    }
    else if ( m_operation == 102 && this->m_isMultiPart )
    {
      m_downloadMetaDataMultiPart = this->m_downloadMetaDataMultiPart;
      m_numUrls_low = LOWORD(m_downloadMetaDataMultiPart->m_numUrls);
      m_partOffset = m_downloadMetaDataMultiPart->m_partOffset;
      this->m_retries = 0;
      v7 = 0;
      if ( m_partOffset - m_numUrls_low >= 0 )
        v7 = m_partOffset - m_numUrls_low;
      if ( this->m_streamData.nextPage )
      {
        this->m_streamData.partIndex = v7;
        this->m_streamData.partIndexCurrentPage = v7;
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::pumpPreHTTP", 0x1B7u, "Download next page commencing at part %d.", v7);
      }
      else
      {
        *(_QWORD *)&this->m_streamData.nextPage = 0i64;
        bdStopwatch::reset(&this->m_streamData.timeSinceStreamInit);
        bdStopwatch::start(&this->m_streamData.timeSinceStreamInit);
        this->m_streamData.partIndexPage0 = v7;
        this->m_streamData.partIndex = v7;
        this->m_streamData.partIndexCurrentPage = v7;
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::pumpPreHTTP", 0x1B1u, "Download first page commencing at part %d.", v7);
      }
    }
    ++this->m_streamData.nextPage;
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::pumpPreHTTP", 0x1BCu, "Pre HTTP complete.");
    this->initHTTP(this);
  }
  else if ( v2 != BD_PENDING )
  {
    m_ptr = this->m_overallTask.m_ptr;
    p_m_errorCode = &m_ptr->m_errorCode;
    if ( m_ptr->m_errorCode == BD_NO_ERROR )
    {
      m_state = this->m_state;
      if ( m_state == FETCHING_FIRST_PARTY_TOKEN || m_state == AUTHENTICATING )
      {
        *p_m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
        m_ptr = this->m_overallTask.m_ptr;
      }
    }
    m_ptr->m_status = BD_FAILED;
    if ( this->m_finalizeOnComplete && (unsigned int)(this->m_state - 5) > 1 )
      ((void (__fastcall *)(bdCSHTTPWrapper *, bdLobbyErrorCode *))this->m_http->finalize)(this->m_http, p_m_errorCode);
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[6]);
    this->m_state = CROSSPLAY_LOG_IN;
  }
}

/*
==============
bdContentStreamingBase::pumpThrottled
==============
*/
void bdContentStreamingBase::pumpThrottled(bdContentStreamingBase *this)
{
  int v4; 
  char v8; 
  char v9; 
  bdStopwatch *p_timeSinceThrottleInit; 
  int m_partDuration; 
  bdRemoteTask *m_ptr; 
  bdContentStreamingBase::bdStatus m_state; 
  bdContentStreamingBase_vtbl *v16; 
  int v17; 
  int partIndex; 
  double v19; 
  double v20; 
  int v21; 
  int v22; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  v4 = (__int16)(this->m_streamData.partIndex - this->m_throttleData.throttlingInitIndex);
  if ( this->m_throttleType == BD_RETRY_CONNECTION )
  {
    __asm { vmovss  xmm6, cs:__real@40000000 }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, edx
    }
  }
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_throttleData.timeSinceThrottleInit);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
  }
  if ( !(v8 | v9) )
  {
    p_timeSinceThrottleInit = &this->m_throttleData.timeSinceThrottleInit;
    if ( this->m_throttleType == BD_RETRY_CONNECTION )
    {
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(p_timeSinceThrottleInit);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+78h+var_38], xmm1
      }
      partIndex = this->m_streamData.partIndex;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::pumpThrottled", 0x43Cu, "Re-attempting to download %d.ts at throttle time %f.", partIndex, v20);
    }
    else
    {
      m_partDuration = this->m_partDuration;
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(p_timeSinceThrottleInit);
      v22 = m_partDuration;
      v21 = v4;
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+78h+var_38], xmm1
      }
      v17 = this->m_streamData.partIndex;
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::pumpThrottled", 0x435u, "Resuming Stream at part %d.ts at throttle time %f (%d throttled parts of duration %u each).", v17, v19, v21, v22);
    }
    m_ptr = this->m_overallTask.m_ptr;
    if ( m_ptr->m_errorCode == BD_NO_ERROR )
    {
      m_state = this->m_state;
      if ( m_state == FETCHING_FIRST_PARTY_TOKEN || m_state == AUTHENTICATING )
        m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[2]);
    v16 = this->__vftable;
    this->m_state = FIRST_PARTY_AUTHED;
    v16->initHTTP(this);
  }
}

/*
==============
bdContentStreamingBase::ready
==============
*/
bool bdContentStreamingBase::ready(bdContentStreamingBase *this)
{
  return this->m_http->isOkayToStart(this->m_http) && !this->m_operation;
}

/*
==============
bdContentStreamingBase::resumeLiveStream
==============
*/
char bdContentStreamingBase::resumeLiveStream(bdContentStreamingBase *this)
{
  int v3; 

  if ( this->m_state == CREATING_UNO_ANONYMOUS_ACCOUNT )
  {
    v3 = ++this->m_streamData.partIndex;
    bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::resumeLiveStream", 0x58Cu, "resuming Live Stream from part %d", v3);
    bdContentStreamingBase::initPreHTTP(this, this->m_streamData.partIndex);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::resumeLiveStream", 0x587u, "resumeLiveStream only applies to PAUSED uploads and downloads.");
    return 0;
  }
}

/*
==============
bdContentStreamingBase::setState
==============
*/
void bdContentStreamingBase::setState(bdContentStreamingBase *this, bdContentStreamingBase::bdStatus newState, __int64 errorCode)
{
  __int64 v3; 
  bdRemoteTask *m_ptr; 
  bdContentStreamingBase::bdStatus m_state; 

  v3 = newState;
  m_ptr = this->m_overallTask.m_ptr;
  if ( m_ptr->m_errorCode == BD_NO_ERROR )
  {
    if ( (_DWORD)errorCode )
    {
      m_ptr->m_errorCode = errorCode;
    }
    else
    {
      m_state = this->m_state;
      if ( m_state == FETCHING_FIRST_PARTY_TOKEN || m_state == AUTHENTICATING )
        m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
    }
  }
  if ( (_DWORD)v3 == 5 )
  {
    this->m_overallTask.m_ptr->m_status = (this->m_overallTask.m_ptr->m_errorCode != BD_NO_ERROR) + 2;
  }
  else if ( (_DWORD)v3 == 6 )
  {
    this->m_overallTask.m_ptr->m_status = BD_FAILED;
  }
  if ( this->m_finalizeOnComplete && (unsigned int)(v3 - 5) <= 1 && (unsigned int)(this->m_state - 5) > 1 )
    ((void (__fastcall *)(bdCSHTTPWrapper *, bdRemoteTask *, __int64))this->m_http->finalize)(this->m_http, m_ptr, errorCode);
  bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[v3]);
  this->m_state = v3;
}

/*
==============
bdContentStreamingBase::start
==============
*/
bdReference<bdRemoteTask> *bdContentStreamingBase::start(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result, unsigned __int16 operation)
{
  bdRemoteTask *v5; 
  bdRemoteTask *v6; 
  bdRemoteTask *v7; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v9; 
  bdRemoteTask *v10; 
  bdContentStreamingBase::bdStatus m_state; 
  bdRemoteTask *v12; 

  this->m_operation = operation;
  this->m_aborted = 0;
  this->m_http->resetTransferStats(this->m_http);
  v5 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  if ( v5 )
  {
    bdRemoteTask::bdRemoteTask(v5);
    v7 = v6;
  }
  else
  {
    v7 = NULL;
  }
  m_ptr = this->m_overallTask.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v9 = this->m_overallTask.m_ptr;
      if ( v9 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v9->~bdReferencable)(v9, 1i64);
    }
  }
  this->m_overallTask.m_ptr = v7;
  if ( v7 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    v7 = this->m_overallTask.m_ptr;
  }
  bdStopwatch::start(&v7->m_timer);
  this->m_overallTask.m_ptr->m_status = BD_PENDING;
  v10 = this->m_overallTask.m_ptr;
  if ( v10->m_errorCode == BD_NO_ERROR )
  {
    m_state = this->m_state;
    if ( m_state == FETCHING_FIRST_PARTY_TOKEN || m_state == AUTHENTICATING )
      v10->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreamingBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreamingbase.cpp", "bdContentStreamingBase::setState", 0x49Fu, "state %s -> %s", bdContentStreamingBase::s_statusStrings[this->m_state], bdContentStreamingBase::s_statusStrings[1]);
  this->m_state = FETCHING_FIRST_PARTY_TOKEN;
  v12 = this->m_overallTask.m_ptr;
  result->m_ptr = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  return result;
}

/*
==============
bdContentStreamingBase::startCopy
==============
*/
bdReference<bdRemoteTask> *bdContentStreamingBase::startCopy(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  bdContentStreamingBase::start(this, result, 0x68u);
  return result;
}

/*
==============
bdContentStreamingBase::startDelete
==============
*/
bdReference<bdRemoteTask> *bdContentStreamingBase::startDelete(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  bdContentStreamingBase::start(this, result, 0x67u);
  return result;
}

/*
==============
bdContentStreamingBase::startDownload
==============
*/
bdReference<bdRemoteTask> *bdContentStreamingBase::startDownload(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  bdContentStreamingBase::start(this, result, 0x66u);
  return result;
}

/*
==============
bdContentStreamingBase::startUpload
==============
*/
bdReference<bdRemoteTask> *bdContentStreamingBase::startUpload(bdContentStreamingBase *this, bdReference<bdRemoteTask> *result)
{
  bdContentStreamingBase::start(this, result, 0x65u);
  return result;
}

