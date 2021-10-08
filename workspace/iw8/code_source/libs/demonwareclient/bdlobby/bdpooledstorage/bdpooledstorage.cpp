/*
==============
bdPooledStorage::_preDownloadPage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_preDownloadPage(bdPooledStorage *this, bdReference<bdRemoteTask> *result, __int16 offset)
{
  return ?_preDownloadPage@bdPooledStorage@@MEAA?AV?$bdReference@VbdRemoteTask@@@@F@Z(this, result, offset);
}

/*
==============
bdPooledStorage::_preUploadSummary
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_preUploadSummary(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  return ?_preUploadSummary@bdPooledStorage@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdPooledStorage::initHTTP
==============
*/

void __fastcall bdPooledStorage::initHTTP(bdPooledStorage *this)
{
  ?initHTTP@bdPooledStorage@@UEAAXXZ(this);
}

/*
==============
bdPooledStorage::uploadSummaryMetaData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::uploadSummaryMetaData(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, const void *summaryData, unsigned int summaryDataSize, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags)
{
  return ?uploadSummaryMetaData@bdPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBXI1IIPEAVbdTag@@@Z(this, result, fileID, summaryData, summaryDataSize, metaData, metaDataSize, numTags, tags);
}

/*
==============
bdPooledStorage::remove
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::remove(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID)
{
  return ?remove@bdPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, fileID);
}

/*
==============
bdPooledStorage::downloadSummary
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::downloadSummary(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, void *summaryData, unsigned int summaryDataSize, unsigned int startByte, unsigned int endByte)
{
  return ?downloadSummary@bdPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAXIII@Z(this, result, fileID, summaryData, summaryDataSize, startByte, endByte);
}

/*
==============
bdPooledStorage::completeLiveStream
==============
*/

void __fastcall bdPooledStorage::completeLiveStream(bdPooledStorage *this)
{
  ?completeLiveStream@bdPooledStorage@@QEAAXXZ(this);
}

/*
==============
bdPooledStorage::_postUploadSummary
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_postUploadSummary(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  return ?_postUploadSummary@bdPooledStorage@@MEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdPooledStorage::_preDownloadMultiPart
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_preDownloadMultiPart(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, bdLiveStreamingFileMetaData *metaData, __int16 offset, __int16 maxResults)
{
  return ?_preDownloadMultiPart@bdPooledStorage@@IEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdLiveStreamingFileMetaData@@FF@Z(this, result, fileID, metaData, offset, maxResults);
}

/*
==============
bdPooledStorage::_postUploadMultiPart
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_postUploadMultiPart(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, unsigned __int16 numParts, unsigned int fileSize, int errorCode)
{
  return ?_postUploadMultiPart@bdPooledStorage@@IEAA?AV?$bdReference@VbdRemoteTask@@@@_KGIH@Z(this, result, fileID, numParts, fileSize, errorCode);
}

/*
==============
bdPooledStorage::preUploadStream
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::preUploadStream(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int16 category, const char *fileName, unsigned int numTags, bdTag *tags)
{
  return ?preUploadStream@bdPooledStorage@@IEAA?AV?$bdReference@VbdRemoteTask@@@@GPEBDIPEAVbdTag@@@Z(this, result, category, fileName, numTags, tags);
}

/*
==============
bdPooledStorage::_postUploadStream
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_postUploadStream(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  return ?_postUploadStream@bdPooledStorage@@MEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdPooledStorage::_postUploadFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_postUploadFile(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  return ?_postUploadFile@bdPooledStorage@@MEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdPooledStorage::_preUploadPage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_preUploadPage(bdPooledStorage *this, bdReference<bdRemoteTask> *result, __int16 offset)
{
  return ?_preUploadPage@bdPooledStorage@@MEAA?AV?$bdReference@VbdRemoteTask@@@@F@Z(this, result, offset);
}

/*
==============
bdPooledStorage::uploadLiveStream
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::uploadLiveStream(bdPooledStorage *this, bdReference<bdRemoteTask> *result, bdUploadInterceptor *uploadHandler, unsigned __int16 category, const char *fileName, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  return ?uploadLiveStream@bdPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUploadInterceptor@@GPEBDIPEAVbdTag@@PEAVbdFileID@@@Z(this, result, uploadHandler, category, fileName, numTags, tags, fileID);
}

/*
==============
bdPooledStorage::_preDownloadSummary
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_preDownloadSummary(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  return ?_preDownloadSummary@bdPooledStorage@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdPooledStorage::_preUpload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_preUpload(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  return ?_preUpload@bdPooledStorage@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdPooledStorage::bdPooledStorage
==============
*/

void __fastcall bdPooledStorage::bdPooledStorage(bdPooledStorage *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdPooledStorage@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdPooledStorage::getFileID
==============
*/

unsigned __int64 __fastcall bdPooledStorage::getFileID(bdPooledStorage *this)
{
  return ?getFileID@bdPooledStorage@@QEAA_KXZ(this);
}

/*
==============
bdPooledStorage::getMaxMetaDataSize
==============
*/

unsigned int __fastcall bdPooledStorage::getMaxMetaDataSize(bdPooledStorage *this)
{
  return ?getMaxMetaDataSize@bdPooledStorage@@MEBAIXZ(this);
}

/*
==============
bdPooledStorage::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::upload(bdPooledStorage *this, bdReference<bdRemoteTask> *result, const void *fileData, const unsigned int fileSize, unsigned __int16 category, const char *fileName, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  return ?upload@bdPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBXIGPEBDIPEAVbdTag@@PEAVbdFileID@@@Z(this, result, fileData, fileSize, category, fileName, numTags, tags, fileID);
}

/*
==============
bdPooledStorage::~bdPooledStorage
==============
*/

void __fastcall bdPooledStorage::~bdPooledStorage(bdPooledStorage *this)
{
  ??1bdPooledStorage@@UEAA@XZ(this);
}

/*
==============
bdPooledStorage::_preUploadMultiPart
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_preUploadMultiPart(bdPooledStorage *this, bdReference<bdRemoteTask> *result, __int16 offset, __int16 maxResults)
{
  return ?_preUploadMultiPart@bdPooledStorage@@IEAA?AV?$bdReference@VbdRemoteTask@@@@FF@Z(this, result, offset, maxResults);
}

/*
==============
bdPooledStorage::isFileIDReady
==============
*/

bool __fastcall bdPooledStorage::isFileIDReady(bdPooledStorage *this)
{
  return ?isFileIDReady@bdPooledStorage@@QEAA_NXZ(this);
}

/*
==============
bdPooledStorage::_preDownload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::_preDownload(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  return ?_preDownload@bdPooledStorage@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdPooledStorage::downloadLiveStream
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::downloadLiveStream(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdLiveStreamingFileMetaData *pooledMetaData, const __int16 partDuration, const __int16 partOffset)
{
  return ?downloadLiveStream@bdPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdDownloadInterceptor@@PEAVbdLiveStreamingFileMetaData@@FF@Z(this, result, fileID, downloadHandler, pooledMetaData, partDuration, partOffset);
}

/*
==============
bdPooledStorage::download
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::download(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *pooledMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?download@bdPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdDownloadInterceptor@@PEAVbdFileMetaData@@II@Z(this, result, fileID, downloadHandler, pooledMetaData, startByte, endByte);
}

/*
==============
bdPooledStorage::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::upload(bdPooledStorage *this, bdReference<bdRemoteTask> *result, bdUploadInterceptor *uploadHandler, unsigned __int16 category, const char *fileName, unsigned int numTags, bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  return ?upload@bdPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUploadInterceptor@@GPEBDIPEAVbdTag@@PEAVbdFileID@@1@Z(this, result, uploadHandler, category, fileName, numTags, tags, fileID, DEPRECATED_clientLocale);
}

/*
==============
bdPooledStorage::getPooledMetaDataByID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPooledStorage::getPooledMetaDataByID(bdPooledStorage *this, bdReference<bdRemoteTask> *result, const unsigned int numFiles, const unsigned __int64 *fileIDs, bdFileMetaData *fileMetas)
{
  return ?getPooledMetaDataByID@bdPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KQEAVbdFileMetaData@@@Z(this, result, numFiles, fileIDs, fileMetas);
}

/*
==============
bdPooledStorage::bdPooledStorage
==============
*/
void bdPooledStorage::bdPooledStorage(bdPooledStorage *this, bdRemoteTaskManager *const remoteTaskManager)
{
  bdContentStreamingBase::bdContentStreamingBase(this, remoteTaskManager);
  this->__vftable = (bdPooledStorage_vtbl *)&bdPooledStorage::`vftable';
}

/*
==============
bdPooledStorage::~bdPooledStorage
==============
*/
void bdPooledStorage::~bdPooledStorage(bdPooledStorage *this)
{
  this->__vftable = (bdPooledStorage_vtbl *)&bdPooledStorage::`vftable';
  bdContentStreamingBase::~bdContentStreamingBase(this);
}

/*
==============
bdPooledStorage::_postUploadFile
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_postUploadFile(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  bdTaskByteBuffer *v4; 
  __int64 m_urlIndex; 
  int v6; 
  int v7; 
  int v8; 
  void *v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v14; 
  bdTaskByteBuffer *v15; 

  v14 = result;
  v4 = NULL;
  result->m_ptr = NULL;
  m_urlIndex = this->m_urlIndex;
  v6 = 1200 * m_urlIndex + (_DWORD)this + 11354;
  if ( (bdPooledStorage *)((char *)this + 1200 * m_urlIndex) == (bdPooledStorage *)-11354i64 )
  {
    v7 = 0;
  }
  else
  {
    v8 = 128;
    v9 = memchr_0(this->m_URLs[m_urlIndex].m_serverIndex, 0, 0x80ui64);
    if ( v9 )
      v8 = (_DWORD)v9 - v6;
    v7 = v8 + 2;
  }
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v15 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, v7 + 89, 1);
    v4 = v11;
  }
  buffer.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 6u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2));
  bdByteBuffer::writeUInt16(buffer.m_ptr, this->m_URLs[this->m_urlIndex].m_serverType);
  bdByteBuffer::writeString(buffer.m_ptr, this->m_URLs[this->m_urlIndex].m_serverIndex, 0x81ui64);
  bdByteBuffer::writeUInt32(buffer.m_ptr, this->m_fileMetaData.m_fileSize);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_uploadFileID, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::_postUploadMultiPart
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_postUploadMultiPart(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, unsigned __int16 numParts, unsigned int fileSize, int errorCode)
{
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  v10 = NULL;
  result->m_ptr = NULL;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, 0x5Eu, 1);
    v10 = v12;
  }
  buffer.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 0x15u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, fileID);
  bdByteBuffer::writeUInt16(buffer.m_ptr, numParts);
  bdByteBuffer::writeUInt32(buffer.m_ptr, fileSize);
  bdByteBuffer::writeInt32(buffer.m_ptr, errorCode);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_uploadFileID, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::_postUploadStream
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_postUploadStream(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  bdTaskByteBuffer *v4; 
  int LastError; 
  bdLiveStreamingInterceptor *m_interceptor; 
  unsigned int m_totalFileSize; 
  unsigned __int16 m_numParts; 
  unsigned __int64 v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v14; 
  bdTaskByteBuffer *v15; 

  v14 = result;
  v4 = NULL;
  LastError = bdContentStreamingBase::getLastError(this);
  if ( (unsigned int)(LastError - 200) <= 0x63 )
    LastError = 0;
  m_interceptor = this->m_interceptor;
  m_totalFileSize = m_interceptor->m_totalFileSize;
  m_numParts = m_interceptor->m_numParts;
  v9 = *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2);
  result->m_ptr = NULL;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v15 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, 0x5Eu, 1);
    v4 = v11;
  }
  buffer.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 0x15u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, v9);
  bdByteBuffer::writeUInt16(buffer.m_ptr, m_numParts);
  bdByteBuffer::writeUInt32(buffer.m_ptr, m_totalFileSize);
  bdByteBuffer::writeInt32(buffer.m_ptr, LastError);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_uploadFileID, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::_postUploadSummary
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_postUploadSummary(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  bdTaskByteBuffer *v4; 
  bdTaskByteBuffer *v5; 
  bdTaskByteBuffer *v6; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v9; 
  bdTaskByteBuffer *v10; 

  v9 = result;
  v4 = NULL;
  result->m_ptr = NULL;
  v5 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v10 = v5;
  if ( v5 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v5, 0x56u, 1);
    v4 = v6;
  }
  buffer.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 0x12u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2));
  bdByteBuffer::writeUInt32(buffer.m_ptr, this->m_fileMetaData.m_fileSize);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::_preDownload
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_preDownload(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  bdTaskByteBuffer *v4; 
  bdTaskByteBuffer *v5; 
  bdTaskByteBuffer *v6; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v9; 
  bdTaskByteBuffer *v10; 

  v9 = result;
  v4 = NULL;
  result->m_ptr = NULL;
  v5 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v10 = v5;
  if ( v5 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v5, 0x51u, 1);
    v4 = v6;
  }
  buffer.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 9u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2));
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_downloadMetaData, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::_preDownloadMultiPart
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_preDownloadMultiPart(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, bdLiveStreamingFileMetaData *metaData, __int16 offset, __int16 maxResults)
{
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  v10 = NULL;
  result->m_ptr = NULL;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, 0x57u, 1);
    v10 = v12;
  }
  buffer.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 0x16u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, fileID);
  bdByteBuffer::writeInt16(buffer.m_ptr, offset);
  bdByteBuffer::writeInt16(buffer.m_ptr, maxResults);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, metaData, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::_preDownloadPage
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_preDownloadPage(bdPooledStorage *this, bdReference<bdRemoteTask> *result, __int16 offset)
{
  bdPooledStorage::_preDownloadMultiPart(this, result, *((_QWORD *)&this->m_downloadMetaDataMultiPart->bdContentStreamingBase::__vftable + 2), this->m_downloadMetaDataMultiPart, offset, 10);
  return result;
}

/*
==============
bdPooledStorage::_preDownloadSummary
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_preDownloadSummary(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  bdTaskByteBuffer *v4; 
  bdTaskByteBuffer *v5; 
  bdTaskByteBuffer *v6; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v9; 
  bdTaskByteBuffer *v10; 

  v9 = result;
  v4 = NULL;
  result->m_ptr = NULL;
  v5 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v10 = v5;
  if ( v5 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v5, 0x51u, 1);
    v4 = v6;
  }
  buffer.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 0x13u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2));
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, &this->m_summaryMeta, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::_preUpload
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_preUpload(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  unsigned int v4; 
  char *m_fileName; 
  int v6; 
  int v7; 
  void *v8; 
  _BYTE *v9; 
  signed __int64 v10; 
  unsigned int v11; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v13; 
  bdTaskByteBuffer *v14; 
  unsigned __int64 v15; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v18; 
  bdTaskByteBuffer *v19; 

  v18 = result;
  v4 = 0;
  result->m_ptr = NULL;
  m_fileName = this->m_fileMetaData.m_fileName;
  if ( this == (bdPooledStorage *)-22434i64 )
  {
    v6 = 0;
  }
  else
  {
    v7 = 128;
    v8 = memchr_0(this->m_fileMetaData.m_fileName, 0, 0x80ui64);
    if ( v8 )
      v7 = (_DWORD)v8 - (_DWORD)m_fileName;
    v6 = v7 + 2;
  }
  v9 = memchr_0((char *)&queryFormat.fmt + 3, 0, 1ui64);
  LODWORD(v10) = 1;
  if ( v9 )
    v10 = v9 - ((char *)&queryFormat.fmt + 3);
  v11 = v10 + 2 + 16 * this->m_fileMetaData.m_numTags + v6 + 86;
  v12 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v19 = v12;
  if ( v12 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v12, v11, 1);
    v14 = v13;
  }
  else
  {
    v14 = NULL;
  }
  buffer.m_ptr = v14;
  if ( v14 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 5u);
  bdByteBuffer::writeString(buffer.m_ptr, m_fileName, 0x81ui64);
  bdByteBuffer::writeUInt16(buffer.m_ptr, this->m_fileMetaData.m_category);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, 2 * this->m_fileMetaData.m_numTags, 8u);
  if ( this->m_fileMetaData.m_numTags )
  {
    do
    {
      v15 = (unsigned __int64)v4 << 6;
      bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v15]);
      bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v15 + 8]);
      ++v4;
    }
    while ( v4 < this->m_fileMetaData.m_numTags );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdByteBuffer::writeString(buffer.m_ptr, (const char *const)&queryFormat.fmt + 3, 1ui64);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_URLs, 0xAu);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::_preUploadMultiPart
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_preUploadMultiPart(bdPooledStorage *this, bdReference<bdRemoteTask> *result, __int16 offset, __int16 maxResults)
{
  unsigned __int64 m_pooledStoragefileID; 
  char *m_fileName; 
  int v10; 
  int v11; 
  void *v12; 
  unsigned int v13; 
  bdTaskByteBuffer *v14; 
  bdTaskByteBuffer *v15; 
  bdTaskByteBuffer *v16; 
  unsigned int i; 
  unsigned __int64 v18; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v21; 

  v21 = result;
  m_pooledStoragefileID = 0i64;
  result->m_ptr = NULL;
  m_fileName = this->m_fileMetaData.m_fileName;
  if ( this == (bdPooledStorage *)-22434i64 )
  {
    v10 = 0;
  }
  else
  {
    v11 = 128;
    v12 = memchr_0(this->m_fileMetaData.m_fileName, 0, 0x80ui64);
    if ( v12 )
      v11 = (_DWORD)v12 - (_DWORD)m_fileName;
    v10 = v11 + 2;
  }
  v13 = v10 + 16 * this->m_fileMetaData.m_numTags + 92;
  v14 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v14 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v14, v13, 1);
    v16 = v15;
  }
  else
  {
    v16 = NULL;
  }
  buffer.m_ptr = v16;
  if ( v16 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 0x14u);
  bdByteBuffer::writeString(buffer.m_ptr, m_fileName, 0x81ui64);
  bdByteBuffer::writeUInt16(buffer.m_ptr, this->m_fileMetaData.m_category);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, 2 * this->m_fileMetaData.m_numTags, 8u);
  for ( i = 0; i < this->m_fileMetaData.m_numTags; ++i )
  {
    v18 = (unsigned __int64)i << 6;
    bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v18]);
    bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v18 + 8]);
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdByteBuffer::writeInt16(buffer.m_ptr, offset);
  bdByteBuffer::writeInt16(buffer.m_ptr, maxResults);
  if ( this->m_fileIDReady )
    m_pooledStoragefileID = this->m_pooledStoragefileID;
  bdByteBuffer::writeUInt64(buffer.m_ptr, m_pooledStoragefileID);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, &this->m_multiPartURLs, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::_preUploadPage
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_preUploadPage(bdPooledStorage *this, bdReference<bdRemoteTask> *result, __int16 offset)
{
  bdPooledStorage::_preUploadMultiPart(this, result, offset, 10);
  return result;
}

/*
==============
bdPooledStorage::_preUploadSummary
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::_preUploadSummary(bdPooledStorage *this, bdReference<bdRemoteTask> *result)
{
  unsigned int v4; 
  unsigned int v5; 
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  unsigned __int64 v9; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v12; 
  bdTaskByteBuffer *v13; 

  v12 = result;
  v4 = 0;
  result->m_ptr = NULL;
  v5 = this->m_thumbDataSize + 16 * this->m_fileMetaData.m_numTags + 103;
  v6 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v13 = v6;
  if ( v6 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v6, v5, 1);
    v8 = v7;
  }
  else
  {
    v8 = NULL;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 0x11u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2));
  bdByteBuffer::writeUInt32(buffer.m_ptr, this->m_fileMetaData.m_fileSize);
  bdByteBuffer::writeBlob(buffer.m_ptr, this->m_thumbData, this->m_thumbDataSize);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, 2 * this->m_fileMetaData.m_numTags, 8u);
  if ( this->m_fileMetaData.m_numTags )
  {
    do
    {
      v9 = (unsigned __int64)v4 << 6;
      bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v9]);
      bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v9 + 8]);
      ++v4;
    }
    while ( v4 < this->m_fileMetaData.m_numTags );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  if ( this->m_sendChecksum )
    bdByteBuffer::writeBlob(buffer.m_ptr, this->m_checksum, 0x20u);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_URLs, 0xAu);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::completeLiveStream
==============
*/
void bdPooledStorage::completeLiveStream(bdPooledStorage *this)
{
  this->m_multiPartComplete = 1;
}

/*
==============
bdPooledStorage::download
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::download(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *pooledMetaData, unsigned int startByte, unsigned int endByte)
{
  bdTaskByteBuffer *v10; 
  bdRemoteTask *v11; 
  bdTaskByteBuffer *v12; 
  bdReference<bdRemoteTask> *started; 
  char v14; 
  bdRemoteTask *m_ptr; 
  char v16; 
  char v18; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> newTask; 
  bdRemoteTask *v21; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v23; 

  v23 = -2i64;
  v10 = NULL;
  if ( bdContentStreamingBase::initDownload(this, NULL, 0, downloadHandler, pooledMetaData, startByte, endByte, NULL, -1) )
  {
    *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2) = fileID;
    newTask.m_ptr = NULL;
    v11 = (bdRemoteTask *)bdMemory::allocate(0x58ui64);
    resulta.m_ptr = v11;
    if ( v11 )
    {
      bdTaskByteBuffer::bdTaskByteBuffer((bdTaskByteBuffer *)v11, 0x51u, 1);
      v10 = v12;
    }
    buffer.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 9u);
    bdByteBuffer::writeUInt64(buffer.m_ptr, *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2));
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &buffer);
    bdRemoteTask::setTaskResult(newTask.m_ptr, this->m_downloadMetaData, 1u);
    if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, &newTask);
    if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      started = bdContentStreamingBase::startDownload(this, &resulta);
      v14 = 2;
      m_ptr = started->m_ptr;
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      v21 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v14 = 4;
    }
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v16 = v14 | 1;
    if ( (v16 & 4) != 0 )
    {
      v16 &= ~4u;
      v18 = v16;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v21->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v21->~bdReferencable)(v21, 1i64);
        v16 = v18;
      }
    }
    if ( (v16 & 2) != 0 && resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  }
  else
  {
    result->m_ptr = NULL;
  }
  return result;
}

/*
==============
bdPooledStorage::downloadLiveStream
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::downloadLiveStream(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdLiveStreamingFileMetaData *pooledMetaData, const __int16 partDuration, const __int16 partOffset)
{
  bdLiveStreamingFileMetaData *v7; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> *started; 
  char v13; 
  bdRemoteTask *m_ptr; 
  bdLiveStreamingFileMetaData *fileMetaDataMultiPart; 
  __int16 v17; 
  bdRemoteTask *v18; 
  bdReference<bdRemoteTask> v19; 
  bdReference<bdRemoteTask> resulta; 

  v7 = pooledMetaData;
  v17 = partDuration;
  fileMetaDataMultiPart = pooledMetaData;
  this->m_partDuration = partDuration;
  if ( bdContentStreamingBase::initDownload(this, NULL, 0, downloadHandler, NULL, 0, 0, fileMetaDataMultiPart, v17) )
  {
    this->m_multiPartURLs.m_fileID = fileID;
    v11 = bdPooledStorage::_preDownloadMultiPart(this, &resulta, fileID, v7, partOffset, 10);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v11);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      started = bdContentStreamingBase::startDownload(this, &v19);
      v13 = 3;
      m_ptr = started->m_ptr;
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      v18 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v13 = 5;
    }
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( (v13 & 4) != 0 )
    {
      v13 &= ~4u;
      if ( v18 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v18->~bdReferencable)(v18, 1i64);
      }
    }
    if ( (v13 & 2) != 0 && v19.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v19.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v19.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v19.m_ptr->~bdReferencable)(v19.m_ptr, 1i64);
  }
  else
  {
    result->m_ptr = NULL;
  }
  return result;
}

/*
==============
bdPooledStorage::downloadSummary
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::downloadSummary(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, void *summaryData, unsigned int summaryDataSize, unsigned int startByte, unsigned int endByte)
{
  bdTaskByteBuffer *v11; 
  bdSummaryMetaHandler *fileMetaData; 
  bdRemoteTask *v13; 
  bdTaskByteBuffer *v14; 
  bdReference<bdRemoteTask> *started; 
  char v16; 
  bdRemoteTask *m_ptr; 
  char v18; 
  char v20; 
  bdReference<bdRemoteTask> newTask; 
  bdRemoteTask *v22; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v24; 
  bdReference<bdTaskByteBuffer> buffer; 

  v24 = -2i64;
  v11 = NULL;
  fileMetaData = &this->m_summaryMeta;
  bdFileMetaData::reset(&this->m_summaryMeta);
  if ( bdContentStreamingBase::initDownload(this, summaryData, summaryDataSize, NULL, fileMetaData, startByte, endByte, NULL, -1) )
  {
    *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2) = fileID;
    newTask.m_ptr = NULL;
    v13 = (bdRemoteTask *)bdMemory::allocate(0x58ui64);
    resulta.m_ptr = v13;
    if ( v13 )
    {
      bdTaskByteBuffer::bdTaskByteBuffer((bdTaskByteBuffer *)v13, 0x51u, 1);
      v11 = v14;
    }
    buffer.m_ptr = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
    bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 0x13u);
    bdByteBuffer::writeUInt64(buffer.m_ptr, *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2));
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &buffer);
    bdRemoteTask::setTaskResult(newTask.m_ptr, fileMetaData, 1u);
    if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, &newTask);
    if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      started = bdContentStreamingBase::startDownload(this, &resulta);
      v16 = 2;
      m_ptr = started->m_ptr;
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      v22 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v16 = 4;
    }
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v18 = v16 | 1;
    if ( (v18 & 4) != 0 )
    {
      v18 &= ~4u;
      v20 = v18;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v22->~bdReferencable)(v22, 1i64);
        v18 = v20;
      }
    }
    if ( (v18 & 2) != 0 && resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  }
  else
  {
    result->m_ptr = NULL;
  }
  return result;
}

/*
==============
bdPooledStorage::getFileID
==============
*/
unsigned __int64 bdPooledStorage::getFileID(bdPooledStorage *this)
{
  if ( this->m_fileIDReady )
    return this->m_pooledStoragefileID;
  else
    return 0i64;
}

/*
==============
bdPooledStorage::getMaxMetaDataSize
==============
*/
__int64 bdPooledStorage::getMaxMetaDataSize(bdPooledStorage *this)
{
  return 2048i64;
}

/*
==============
bdPooledStorage::getPooledMetaDataByID
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::getPooledMetaDataByID(bdPooledStorage *this, bdReference<bdRemoteTask> *result, const unsigned int numFiles, const unsigned __int64 *fileIDs, bdFileMetaData *fileMetas)
{
  __int64 v6; 
  bdTaskByteBuffer *v9; 
  unsigned int v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  __int64 v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  v6 = numFiles;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = 8 * numFiles + 83;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, v10, 1);
    v9 = v12;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 1u);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, v6, 8u);
  if ( (_DWORD)v6 )
  {
    v13 = v6;
    do
    {
      bdByteBuffer::writeUInt64(buffer.m_ptr, *fileIDs++);
      --v13;
    }
    while ( v13 );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, fileMetas, v6);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdPooledStorage::initHTTP
==============
*/
void bdPooledStorage::initHTTP(bdPooledStorage *this)
{
  bdContentStreamingBase::initHTTP(this);
  this->m_pooledStoragefileID = *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2);
  this->m_fileIDReady = 1;
}

/*
==============
bdPooledStorage::isFileIDReady
==============
*/
_BOOL8 bdPooledStorage::isFileIDReady(bdPooledStorage *this)
{
  return this->m_fileIDReady;
}

/*
==============
bdPooledStorage::preUploadStream
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::preUploadStream(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int16 category, const char *fileName, unsigned int numTags, bdTag *tags)
{
  bool v10; 
  bool v11; 

  v11 = 1;
  v10 = 0;
  if ( this->initUpload(this, 0, NULL, NULL, 0, fileName, category, NULL, 0, numTags, tags, NULL, NULL, 0, v10, v11) )
    bdPooledStorage::_preUploadMultiPart(this, result, -1, -1);
  else
    result->m_ptr = NULL;
  return result;
}

/*
==============
bdPooledStorage::remove
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::remove(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v7; 
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdRemoteTask *v11; 
  char v12; 
  bdReference<bdRemoteTask> resulta; 
  bdRemoteTask *v15; 
  __int64 v16; 
  bdTaskByteBuffer *v17; 
  bdReference<bdTaskByteBuffer> buffer; 

  v16 = -2i64;
  if ( bdContentStreamingBase::initDelete(this) )
  {
    *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2) = fileID;
    m_ptr = this->m_remoteTask.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v7 = this->m_remoteTask.m_ptr;
        if ( v7 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v7->~bdReferencable)(v7, 1i64);
      }
    }
    this->m_remoteTask.m_ptr = NULL;
    v8 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
    v17 = v8;
    if ( v8 )
    {
      bdTaskByteBuffer::bdTaskByteBuffer(v8, 0x51u, 1);
      v10 = v9;
    }
    else
    {
      v10 = NULL;
    }
    buffer.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    bdRemoteTaskManager::initTaskBuffer(&buffer, 0x3Au, 8u);
    bdByteBuffer::writeUInt64(buffer.m_ptr, fileID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &this->m_remoteTask, &buffer);
    bdRemoteTask::setTaskResult(this->m_remoteTask.m_ptr, this->m_URLs, 2u);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      v11 = bdContentStreamingBase::startDelete(this, &resulta)->m_ptr;
      v12 = 3;
    }
    else
    {
      v11 = this->m_remoteTask.m_ptr;
      v15 = v11;
      if ( v11 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
      v12 = 5;
    }
    result->m_ptr = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
    if ( (v12 & 4) != 0 )
    {
      v12 &= ~4u;
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v15->~bdReferencable)(v15, 1i64);
      }
    }
    if ( (v12 & 2) != 0 && resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( resulta.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      resulta.m_ptr = NULL;
    }
    if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  }
  else
  {
    result->m_ptr = NULL;
  }
  return result;
}

/*
==============
bdPooledStorage::upload
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::upload(bdPooledStorage *this, bdReference<bdRemoteTask> *result, bdUploadInterceptor *uploadHandler, unsigned __int16 category, const char *fileName, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  const bdReference<bdRemoteTask> *v11; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> *started; 
  char v14; 
  bdRemoteTask *v15; 
  char v17; 
  char v18; 
  bdRemoteTask *v19; 
  bdReference<bdRemoteTask> v20; 
  bdReference<bdRemoteTask> resulta; 

  v18 = 0;
  v17 = 0;
  if ( ((unsigned __int8 (__fastcall *)(bdPooledStorage *, _QWORD, _QWORD, bdUploadInterceptor *, _DWORD, const char *, unsigned __int16, _QWORD, _DWORD, unsigned int, bdTag *, bdFileID *, _QWORD, _DWORD, char, char, _DWORD))this->initUpload)(this, 0i64, 0i64, uploadHandler, 0, fileName, category, 0i64, 0, numTags, tags, fileID, 0i64, 0, v17, v18, 0) )
  {
    v11 = bdPooledStorage::_preUpload(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v11);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    m_ptr = this->m_remoteTask.m_ptr;
    this->m_pooledStoragefileID = 0i64;
    this->m_fileIDReady = 0;
    if ( m_ptr->getStatus(m_ptr) == BD_PENDING )
    {
      started = bdContentStreamingBase::startUpload(this, &v20);
      v14 = 3;
      v15 = started->m_ptr;
    }
    else
    {
      v15 = this->m_remoteTask.m_ptr;
      v19 = v15;
      if ( v15 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
      v14 = 5;
    }
    result->m_ptr = v15;
    if ( v15 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
    if ( (v14 & 4) != 0 )
    {
      v14 &= ~4u;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v19->~bdReferencable)(v19, 1i64);
      }
    }
    if ( (v14 & 2) != 0 && v20.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v20.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v20.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v20.m_ptr->~bdReferencable)(v20.m_ptr, 1i64);
    }
    return result;
  }
  else
  {
    result->m_ptr = NULL;
    return result;
  }
}

/*
==============
bdPooledStorage::upload
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::upload(bdPooledStorage *this, bdReference<bdRemoteTask> *result, const void *fileData, const unsigned int fileSize, unsigned __int16 category, const char *fileName, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  const bdReference<bdRemoteTask> *v12; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> *started; 
  char v15; 
  bdRemoteTask *v16; 
  unsigned __int16 v17; 
  char v18; 
  char v19; 
  bdRemoteTask *v20; 
  bdReference<bdRemoteTask> v21; 
  bdReference<bdRemoteTask> resulta; 

  v19 = 0;
  v18 = 0;
  v17 = category;
  if ( ((unsigned __int8 (__fastcall *)(bdPooledStorage *, _QWORD, const void *, _QWORD, const unsigned int, const char *, unsigned __int16, _QWORD, _DWORD, unsigned int, bdTag *, bdFileID *, _QWORD, _DWORD, char, char, _DWORD))this->initUpload)(this, 0i64, fileData, 0i64, fileSize, fileName, v17, 0i64, 0, numTags, tags, fileID, 0i64, 0, v18, v19, 0) )
  {
    v12 = bdPooledStorage::_preUpload(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v12);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    m_ptr = this->m_remoteTask.m_ptr;
    this->m_pooledStoragefileID = 0i64;
    this->m_fileIDReady = 0;
    if ( m_ptr->getStatus(m_ptr) == BD_PENDING )
    {
      started = bdContentStreamingBase::startUpload(this, &v21);
      v15 = 3;
      v16 = started->m_ptr;
    }
    else
    {
      v16 = this->m_remoteTask.m_ptr;
      v20 = v16;
      if ( v16 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
      v15 = 5;
    }
    result->m_ptr = v16;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
    if ( (v15 & 4) != 0 )
    {
      v15 &= ~4u;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v20->~bdReferencable)(v20, 1i64);
      }
    }
    if ( (v15 & 2) != 0 && v21.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v21.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v21.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v21.m_ptr->~bdReferencable)(v21.m_ptr, 1i64);
    }
    return result;
  }
  else
  {
    result->m_ptr = NULL;
    return result;
  }
}

/*
==============
bdPooledStorage::uploadLiveStream
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::uploadLiveStream(bdPooledStorage *this, bdReference<bdRemoteTask> *result, bdUploadInterceptor *uploadHandler, unsigned __int16 category, const char *fileName, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> *started; 
  char v12; 
  bdRemoteTask *m_ptr; 
  char v16; 
  char v17; 
  bdRemoteTask *v18; 
  bdReference<bdRemoteTask> v19; 
  bdReference<bdRemoteTask> resulta; 

  v17 = 1;
  v16 = 0;
  if ( ((unsigned __int8 (__fastcall *)(bdPooledStorage *, _QWORD, _QWORD, bdUploadInterceptor *, _DWORD, const char *, unsigned __int16, _QWORD, _DWORD, unsigned int, bdTag *, bdFileID *, _QWORD, _DWORD, char, char, _DWORD))this->initUpload)(this, 0i64, 0i64, uploadHandler, 0, fileName, category, 0i64, 0, numTags, tags, fileID, 0i64, 0, v16, v17, 0) )
  {
    this->m_pooledStoragefileID = 0i64;
    this->m_multiPartURLs.m_fileID = 0i64;
    this->m_fileIDReady = 0;
    v10 = bdPooledStorage::_preUploadMultiPart(this, &resulta, 0, 10);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v10);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      started = bdContentStreamingBase::startUpload(this, &v19);
      v12 = 3;
      m_ptr = started->m_ptr;
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      v18 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v12 = 5;
    }
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( (v12 & 4) != 0 )
    {
      v12 &= ~4u;
      if ( v18 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v18->~bdReferencable)(v18, 1i64);
      }
    }
    if ( (v12 & 2) != 0 && v19.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v19.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v19.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v19.m_ptr->~bdReferencable)(v19.m_ptr, 1i64);
  }
  else
  {
    result->m_ptr = NULL;
  }
  return result;
}

/*
==============
bdPooledStorage::uploadSummaryMetaData
==============
*/
bdReference<bdRemoteTask> *bdPooledStorage::uploadSummaryMetaData(bdPooledStorage *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, const void *summaryData, unsigned int summaryDataSize, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags)
{
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> *started; 
  char v14; 
  bdRemoteTask *m_ptr; 
  __int16 v17; 
  char v18; 
  char v19; 
  bdRemoteTask *v20; 
  bdReference<bdRemoteTask> v21; 
  bdReference<bdRemoteTask> resulta; 

  v19 = 0;
  v18 = 1;
  v17 = 0;
  if ( ((unsigned __int8 (__fastcall *)(bdPooledStorage *, _QWORD, const void *, _QWORD, unsigned int, _QWORD, __int16, const void *, unsigned int, unsigned int, bdTag *, _QWORD, _QWORD, _DWORD, char, char, _DWORD))this->initUpload)(this, 0i64, summaryData, 0i64, summaryDataSize, 0i64, v17, metaData, metaDataSize, numTags, tags, 0i64, 0i64, 0, v18, v19, 0) )
  {
    *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2) = fileID;
    v12 = bdPooledStorage::_preUploadSummary(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v12);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      started = bdContentStreamingBase::startUpload(this, &v21);
      v14 = 3;
      m_ptr = started->m_ptr;
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      v20 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v14 = 5;
    }
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( (v14 & 4) != 0 )
    {
      v14 &= ~4u;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v20->~bdReferencable)(v20, 1i64);
      }
    }
    if ( (v14 & 2) != 0 && v21.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v21.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v21.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v21.m_ptr->~bdReferencable)(v21.m_ptr, 1i64);
  }
  else
  {
    result->m_ptr = NULL;
  }
  return result;
}

