/*
==============
bdContentStreaming::downloadFileBySlot
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::downloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned __int16 fileSlot, void *fileData, const unsigned int fileSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?downloadFileBySlot@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KGPEAXIPEAVbdFileMetaData@@II@Z(this, result, ownerID, fileSlot, fileData, fileSize, fileMetaData, startByte, endByte);
}

/*
==============
bdContentStreaming::_preDownloadByFileID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDownloadByFileID(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, unsigned int fileSize)
{
  return ?_preDownloadByFileID@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@_KI@Z(this, result, fileID, fileSize);
}

/*
==============
bdContentStreaming::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const void *fileData, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileMetaData *fileMetaData, const char *DEPRECATED_clientLocale)
{
  return ?upload@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@GPEBXIQEBDG0IIQEBVbdTag@@PEAVbdFileMetaData@@PEBD@Z(this, result, fileSlot, fileData, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileMetaData, DEPRECATED_clientLocale);
}

/*
==============
bdContentStreaming::downloadPublisherFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::downloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?downloadPublisherFile@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAXIPEAVbdFileMetaData@@II@Z(this, result, fileID, fileData, fileDataSize, fileMetaData, startByte, endByte);
}

/*
==============
bdContentStreaming::removeFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::removeFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot)
{
  return ?removeFile@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@G@Z(this, result, fileSlot);
}

/*
==============
bdContentStreaming::_preDownloadSummary
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDownloadSummary(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
{
  return ?_preDownloadSummary@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreaming::_preDownloadPublisherFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDownloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, unsigned int fileSize)
{
  return ?_preDownloadPublisherFile@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@_KI@Z(this, result, fileID, fileSize);
}

/*
==============
bdContentStreaming::batchDownloadUserFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::batchDownloadUserFiles(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdBatchDownloadInfo *downloadInfo, unsigned int numFiles)
{
  return ?batchDownloadUserFiles@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAUbdBatchDownloadInfo@@I@Z(this, result, downloadInfo, numFiles);
}

/*
==============
bdContentStreaming::_preDownloadFileBySlot
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDownloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 ownerUID, unsigned __int16 fileSlot, unsigned int fileSize, __int16 offset, __int16 maxResults)
{
  return ?_preDownloadFileBySlot@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@_KGIFF@Z(this, result, ownerUID, fileSlot, fileSize, offset, maxResults);
}

/*
==============
bdContentStreaming::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  return ?upload@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@GPEAVbdUploadInterceptor@@IQEBDGPEBXIIQEBVbdTag@@PEAVbdFileID@@PEBD@Z(this, result, fileSlot, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, DEPRECATED_clientLocale);
}

/*
==============
bdContentStreaming::_postUploadFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_postUploadFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
{
  return ?_postUploadFile@bdContentStreaming@@MEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreaming::_preDownloadFileBySlot
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDownloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 ownerUID, unsigned __int16 fileSlot, unsigned int fileSize)
{
  return ?_preDownloadFileBySlot@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@_KGI@Z(this, result, ownerUID, fileSlot, fileSize);
}

/*
==============
bdContentStreaming::download
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::download(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?download@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAXIPEAVbdFileMetaData@@II@Z(this, result, fileID, fileData, fileDataSize, fileMetaData, startByte, endByte);
}

/*
==============
bdContentStreaming::_postUploadSummary
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_postUploadSummary(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
{
  return ?_postUploadSummary@bdContentStreaming@@MEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreaming::downloadPublisherFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::downloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const char *fileName, const unsigned __int16 category, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?downloadPublisherFile@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDGPEAVbdDownloadInterceptor@@PEAVbdFileMetaData@@II@Z(this, result, fileName, category, downloadHandler, fileMetaData, startByte, endByte);
}

/*
==============
bdContentStreaming::removeFileAndLeaderboardEntry
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::removeFileAndLeaderboardEntry(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const unsigned int leaderboardID)
{
  return ?removeFileAndLeaderboardEntry@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@GI@Z(this, result, fileSlot, leaderboardID);
}

/*
==============
bdContentStreaming::downloadPublisherFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::downloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?downloadPublisherFile@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdDownloadInterceptor@@PEAVbdFileMetaData@@II@Z(this, result, fileID, downloadHandler, fileMetaData, startByte, endByte);
}

/*
==============
bdContentStreaming::uploadUserSummaryMetaData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::uploadUserSummaryMetaData(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, const void *summaryData, unsigned int summaryDataSize, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags)
{
  return ?uploadUserSummaryMetaData@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBXI1IIPEAVbdTag@@@Z(this, result, fileID, summaryData, summaryDataSize, metaData, metaDataSize, numTags, tags);
}

/*
==============
bdContentStreaming::_preDownloadPage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDownloadPage(bdContentStreaming *this, bdReference<bdRemoteTask> *result, __int16 offset)
{
  return ?_preDownloadPage@bdContentStreaming@@MEAA?AV?$bdReference@VbdRemoteTask@@@@F@Z(this, result, offset);
}

/*
==============
bdContentStreaming::_batchDownloadFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_batchDownloadFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned int index)
{
  return ?_batchDownloadFile@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, index);
}

/*
==============
bdContentStreaming::listFilesByOwner
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::listFilesByOwner(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileDescriptors, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  return ?listFilesByOwner@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KIGQEAVbdFileMetaData@@GGPEBD@Z(this, result, ownerID, startDate, category, fileDescriptors, maxNumResults, offset, fileName);
}

/*
==============
bdContentStreaming::_batchDownloadStart
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_batchDownloadStart(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdBatchDownloadInfo *downloadInfo, unsigned int numFiles, bdContentStreaming::bdBatchDownloadType batchType)
{
  return ?_batchDownloadStart@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@PEAUbdBatchDownloadInfo@@IW4bdBatchDownloadType@1@@Z(this, result, downloadInfo, numFiles, batchType);
}

/*
==============
bdContentStreaming::~bdContentStreaming
==============
*/

void __fastcall bdContentStreaming::~bdContentStreaming(bdContentStreaming *this)
{
  ??1bdContentStreaming@@UEAA@XZ(this);
}

/*
==============
bdContentStreaming::copyFromPooledStorage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::copyFromPooledStorage(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 pooledFileID, const unsigned __int16 fileSlot, const char *fileName, const unsigned __int16 category, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  return ?copyFromPooledStorage@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KGPEBDGPEBXIIPEAVbdTag@@PEAVbdFileID@@@Z(this, result, pooledFileID, fileSlot, fileName, category, metaData, metaDataSize, numTags, tags, fileID);
}

/*
==============
bdContentStreaming::getMaxMetaDataSize
==============
*/

unsigned int __fastcall bdContentStreaming::getMaxMetaDataSize(bdContentStreaming *this)
{
  return ?getMaxMetaDataSize@bdContentStreaming@@MEBAIXZ(this);
}

/*
==============
bdContentStreaming::download
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::download(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdLiveStreamingFileMetaData *fileMetaData, const __int16 partDuration)
{
  return ?download@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdDownloadInterceptor@@PEAVbdLiveStreamingFileMetaData@@F@Z(this, result, fileID, downloadHandler, fileMetaData, partDuration);
}

/*
==============
bdContentStreaming::_postCopy
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_postCopy(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
{
  return ?_postCopy@bdContentStreaming@@MEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreaming::reportContent
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::reportContent(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID)
{
  return ?reportContent@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, entityID);
}

/*
==============
bdContentStreaming::_preCopy
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preCopy(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, const unsigned __int8 taskID)
{
  return ?_preCopy@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@_KE@Z(this, result, fileID, taskID);
}

/*
==============
bdContentStreaming::_preDownloadPublisherFileByName
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDownloadPublisherFileByName(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const char *fileName, const unsigned __int16 category, unsigned int fileSize)
{
  return ?_preDownloadPublisherFileByName@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDGI@Z(this, result, fileName, category, fileSize);
}

/*
==============
bdContentStreaming::pump
==============
*/

void __fastcall bdContentStreaming::pump(bdContentStreaming *this)
{
  ?pump@bdContentStreaming@@QEAAXXZ(this);
}

/*
==============
bdContentStreaming::getFileMetaDataByID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::getFileMetaDataByID(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned int numFileIDs, const unsigned __int64 *fileIDs, bdFileMetaData *fileDescriptor)
{
  return ?getFileMetaDataByID@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KQEAVbdFileMetaData@@@Z(this, result, numFileIDs, fileIDs, fileDescriptor);
}

/*
==============
bdContentStreaming::_preDeleteFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDeleteFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int16 fileSlot, bdURL *deleteURLs)
{
  return ?_preDeleteFile@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@GQEAVbdURL@@@Z(this, result, fileSlot, deleteURLs);
}

/*
==============
bdContentStreaming::_preDownloadByFileID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDownloadByFileID(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, unsigned int fileSize, __int16 offset, __int16 maxResults)
{
  return ?_preDownloadByFileID@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@_KIFF@Z(this, result, fileID, fileSize, offset, maxResults);
}

/*
==============
bdContentStreaming::downloadUserSummary
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::downloadUserSummary(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, void *summaryData, unsigned int summaryDataSize, unsigned int startByte, unsigned int endByte)
{
  return ?downloadUserSummary@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAXIII@Z(this, result, fileID, summaryData, summaryDataSize, startByte, endByte);
}

/*
==============
bdContentStreaming::batchDownloadStop
==============
*/

void __fastcall bdContentStreaming::batchDownloadStop(bdContentStreaming *this)
{
  ?batchDownloadStop@bdContentStreaming@@QEAAXXZ(this);
}

/*
==============
bdContentStreaming::batchDownloadUserSummaryFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::batchDownloadUserSummaryFiles(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdBatchDownloadInfo *downloadInfo, unsigned int numFiles)
{
  return ?batchDownloadUserSummaryFiles@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAUbdBatchDownloadInfo@@I@Z(this, result, downloadInfo, numFiles);
}

/*
==============
bdContentStreaming::downloadPublisherFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::downloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const char *fileName, const unsigned __int16 category, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?downloadPublisherFile@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDGPEAXIPEAVbdFileMetaData@@II@Z(this, result, fileName, category, fileData, fileDataSize, fileMetaData, startByte, endByte);
}

/*
==============
bdContentStreaming::bdContentStreaming
==============
*/

void __fastcall bdContentStreaming::bdContentStreaming(bdContentStreaming *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdContentStreaming@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdContentStreaming::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileMetaData *fileMetaData, const char *DEPRECATED_clientLocale)
{
  return ?upload@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@GPEAVbdUploadInterceptor@@IQEBDGPEBXIIQEBVbdTag@@PEAVbdFileMetaData@@PEBD@Z(this, result, fileSlot, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileMetaData, DEPRECATED_clientLocale);
}

/*
==============
bdContentStreaming::batchDownloadPublisherFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::batchDownloadPublisherFiles(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdBatchDownloadInfo *downloadInfo, unsigned int numFiles)
{
  return ?batchDownloadPublisherFiles@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAUbdBatchDownloadInfo@@I@Z(this, result, downloadInfo, numFiles);
}

/*
==============
bdContentStreaming::downloadFileBySlot
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::downloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned __int16 fileSlot, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?downloadFileBySlot@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KGPEAVbdDownloadInterceptor@@PEAVbdFileMetaData@@II@Z(this, result, ownerID, fileSlot, downloadHandler, fileMetaData, startByte, endByte);
}

/*
==============
bdContentStreaming::downloadFileBySlot
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::downloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned __int16 fileSlot, bdDownloadInterceptor *downloadHandler, bdLiveStreamingFileMetaData *fileMetaData, const __int16 partDuration)
{
  return ?downloadFileBySlot@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KGPEAVbdDownloadInterceptor@@PEAVbdLiveStreamingFileMetaData@@F@Z(this, result, ownerID, fileSlot, downloadHandler, fileMetaData, partDuration);
}

/*
==============
bdContentStreaming::_upload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const void *fileData, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, bdFileMetaData *fileMetaData, const char *DEPRECATED_clientLocale)
{
  return ?_upload@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@GPEBXIQEBDG0IIQEBVbdTag@@PEAVbdFileID@@PEAVbdFileMetaData@@PEBD@Z(this, result, fileSlot, fileData, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, fileMetaData, DEPRECATED_clientLocale);
}

/*
==============
bdContentStreaming::listFilesByOwners
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::listFilesByOwners(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *ownerIDs, unsigned int numOwners, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileDescriptors, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  return ?listFilesByOwners@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIIGQEAVbdFileMetaData@@GGPEBD@Z(this, result, ownerIDs, numOwners, startDate, category, fileDescriptors, maxNumResults, offset, fileName);
}

/*
==============
bdContentStreaming::_preDeleteFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preDeleteFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int16 fileSlot, unsigned int leaderboardID, bdURL *deleteURLs)
{
  return ?_preDeleteFile@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@GIQEAVbdURL@@@Z(this, result, fileSlot, leaderboardID, deleteURLs);
}

/*
==============
bdContentStreaming::_upload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, bdFileMetaData *fileMetaData, const char *DEPRECATED_clientLocale)
{
  return ?_upload@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@GPEAVbdUploadInterceptor@@IQEBDGPEBXIIQEBVbdTag@@PEAVbdFileID@@PEAVbdFileMetaData@@PEBD@Z(this, result, fileSlot, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, fileMetaData, DEPRECATED_clientLocale);
}

/*
==============
bdContentStreaming::listAllPublisherFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::listAllPublisherFiles(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileDescriptors, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  return ?listAllPublisherFiles@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IGQEAVbdFileMetaData@@GGPEBD@Z(this, result, startDate, category, fileDescriptors, maxNumResults, offset, fileName);
}

/*
==============
bdContentStreaming::copyFromUserStorage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::copyFromUserStorage(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 userFileID, const unsigned __int16 fileSlot, const char *fileName, const unsigned __int16 category, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  return ?copyFromUserStorage@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KGPEBDGPEBXIIPEAVbdTag@@PEAVbdFileID@@@Z(this, result, userFileID, fileSlot, fileName, category, metaData, metaDataSize, numTags, tags, fileID);
}

/*
==============
bdContentStreaming::download
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::download(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?download@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdDownloadInterceptor@@PEAVbdFileMetaData@@II@Z(this, result, fileID, downloadHandler, fileMetaData, startByte, endByte);
}

/*
==============
bdContentStreaming::getQuotaUsage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::getQuotaUsage(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdQuotaUsage *quotaUsage)
{
  return ?getQuotaUsage@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdQuotaUsage@@@Z(this, result, quotaUsage);
}

/*
==============
bdContentStreaming::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const void *fileData, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  return ?upload@bdContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@GPEBXIQEBDG0IIQEBVbdTag@@PEAVbdFileID@@PEBD@Z(this, result, fileSlot, fileData, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, DEPRECATED_clientLocale);
}

/*
==============
bdContentStreaming::_preUploadSummary
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preUploadSummary(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
{
  return ?_preUploadSummary@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdContentStreaming::_preUpload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdContentStreaming::_preUpload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const char *const filename, const unsigned __int16 fileSlot, const unsigned int fileSize, const unsigned __int16 category, bdURL *uploadURLs)
{
  return ?_preUpload@bdContentStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDGIGQEAVbdURL@@@Z(this, result, filename, fileSlot, fileSize, category, uploadURLs);
}

/*
==============
bdContentStreaming::bdContentStreaming
==============
*/
void bdContentStreaming::bdContentStreaming(bdContentStreaming *this, bdRemoteTaskManager *const remoteTaskManager)
{
  bdRemoteTask *v3; 
  bdRemoteTask *v4; 
  bdRemoteTask *v5; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v7; 

  bdContentStreamingBase::bdContentStreamingBase(this, remoteTaskManager);
  this->__vftable = (bdContentStreaming_vtbl *)&bdContentStreaming::`vftable';
  v3 = NULL;
  *(_QWORD *)&this->m_batchDownload = 0i64;
  this->m_batchDownloadInfo = NULL;
  this->m_batchNumFiles = 0;
  this->m_batchRemoteTaskRef.m_ptr = NULL;
  this->m_batchOverallTaskRef.m_ptr = NULL;
  v4 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  if ( v4 )
  {
    bdRemoteTask::bdRemoteTask(v4);
    v3 = v5;
  }
  m_ptr = this->m_batchOverallTaskRef.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v7 = this->m_batchOverallTaskRef.m_ptr;
      if ( v7 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v7->~bdReferencable)(v7, 1i64);
    }
  }
  this->m_batchOverallTaskRef.m_ptr = v3;
  if ( v3 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v3->m_refCount, 1u);
    v3 = this->m_batchOverallTaskRef.m_ptr;
  }
  v3->m_status = BD_FAILED;
  this->m_batchOverallTaskRef.m_ptr->m_errorCode = BD_START_TASK_FAILED;
}

/*
==============
bdContentStreaming::~bdContentStreaming
==============
*/
void bdContentStreaming::~bdContentStreaming(bdContentStreaming *this)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 
  bdRemoteTask *v4; 
  bdRemoteTask *v5; 

  this->__vftable = (bdContentStreaming_vtbl *)&bdContentStreaming::`vftable';
  m_ptr = this->m_batchOverallTaskRef.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_batchOverallTaskRef.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_batchOverallTaskRef.m_ptr = NULL;
  }
  v4 = this->m_batchRemoteTaskRef.m_ptr;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_batchRemoteTaskRef.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_batchRemoteTaskRef.m_ptr = NULL;
  }
  bdContentStreamingBase::~bdContentStreamingBase(this);
}

/*
==============
bdContentStreaming::_batchDownloadFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_batchDownloadFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned int index)
{
  bdRemoteTask *v5; 
  __int64 v6; 
  __int64 v7; 
  bdBatchDownloadInfo *v8; 
  bdContentStreaming::bdBatchDownloadType m_batchDownload; 
  bdRemoteTask *v10; 
  __int64 v11; 

  if ( index <= this->m_batchNumFiles )
  {
    v8 = &this->m_batchDownloadInfo[index];
    v8->status = BATCH_IN_PROGRESS;
    m_batchDownload = this->m_batchDownload;
    switch ( m_batchDownload )
    {
      case BATCH_PUBLISHER_FILES:
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreaming.cpp", "bdContentStreaming::_batchDownloadFile", 0x157u, "Downloading publisher file %d", *((_QWORD *)&v8->fileMetaData.__vftable + 2));
        bdContentStreaming::downloadPublisherFile(this, result, *((_QWORD *)&v8->fileMetaData.__vftable + 2), v8->file.downloadHandler, &v8->fileMetaData, v8->bytesDownloaded, 0);
        return result;
      case BATCH_USER_FILES:
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreaming.cpp", "bdContentStreaming::_batchDownloadFile", 0x160u, "Downloading user file %d", *((_QWORD *)&v8->fileMetaData.__vftable + 2));
        bdContentStreaming::download(this, result, *((_QWORD *)&v8->fileMetaData.__vftable + 2), v8->file.downloadHandler, &v8->fileMetaData, v8->bytesDownloaded, 0);
        return result;
      case BATCH_SUMMARY_FILES:
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/contentStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreaming.cpp", "bdContentStreaming::_batchDownloadFile", 0x169u, "Downloading summary file %d", *((_QWORD *)&v8->fileMetaData.__vftable + 2));
        bdContentStreaming::downloadUserSummary(this, result, *((_QWORD *)&v8->fileMetaData.__vftable + 2), v8->file.downloadHandler, v8->summary.summaryDataSize, 0, 0);
        return result;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreaming.cpp", "bdContentStreaming::_batchDownloadFile", 0x171u, "Programming error. _batchDownloadFile called without a valid m_batchDownload");
    v10 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    if ( v10 )
    {
      bdRemoteTask::bdRemoteTask(v10);
      v7 = v11;
    }
    else
    {
      v7 = 0i64;
    }
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 1u);
    *(_DWORD *)(v7 + 28) = 3;
    *(_DWORD *)(v7 + 80) = 5;
    this->m_batchDownload = BATCH_NONE;
    v8->status = BATCH_ERROR;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/contentStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcontentstreaming.cpp", "bdContentStreaming::_batchDownloadFile", 0x14Au, "Index %d bigger that size of batch (size %d)", index, this->m_batchNumFiles);
    v5 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    if ( v5 )
    {
      bdRemoteTask::bdRemoteTask(v5);
      v7 = v6;
    }
    else
    {
      v7 = 0i64;
    }
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 1u);
    *(_DWORD *)(v7 + 28) = 3;
    *(_DWORD *)(v7 + 80) = 5;
    this->m_batchDownload = BATCH_NONE;
  }
  result->m_ptr = (bdRemoteTask *)v7;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 1u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_batchDownloadStart
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_batchDownloadStart(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdBatchDownloadInfo *downloadInfo, unsigned int numFiles, bdContentStreaming::bdBatchDownloadType batchType)
{
  bdContentStreaming::bdBatchDownloadType v5; 
  bdBatchDownloadInfo *v6; 
  unsigned int m_batchIndex; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  bdBatchDownloadInfo *m_batchDownloadInfo; 
  bdBatchDownloadInfo *v14; 
  const bdReference<bdRemoteTask> *v15; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 

  resulta.m_ptr = (bdRemoteTask *)result;
  v5 = batchType;
  this->m_batchDownloadInfo = downloadInfo;
  v6 = downloadInfo;
  this->m_batchDownload = v5;
  this->m_batchIndex = 0;
  this->m_batchNumFiles = numFiles;
  m_batchIndex = 0;
  v10 = 0;
  if ( numFiles )
  {
    v11 = 0i64;
    v12 = numFiles;
    do
    {
      m_batchDownloadInfo = this->m_batchDownloadInfo;
      if ( m_batchDownloadInfo[v11].status != BATCH_FILE_COMPLETED )
        m_batchDownloadInfo[v11].status = BATCH_NOT_STARTED;
      ++v11;
      --v12;
    }
    while ( v12 );
    m_batchIndex = this->m_batchIndex;
    v10 = m_batchIndex;
    v6 = this->m_batchDownloadInfo;
  }
  if ( v6[m_batchIndex].status == BATCH_FILE_COMPLETED )
  {
    do
    {
      if ( m_batchIndex >= numFiles )
        break;
      v10 = ++m_batchIndex;
      v14 = this->m_batchDownloadInfo;
      this->m_batchIndex = m_batchIndex;
    }
    while ( v14[m_batchIndex].status == BATCH_FILE_COMPLETED );
  }
  if ( v10 == numFiles )
  {
    this->m_batchOverallTaskRef.m_ptr->m_status = BD_DONE;
  }
  else
  {
    v15 = bdContentStreaming::_batchDownloadFile(this, &resulta, v10);
    bdReference<bdRemoteTask>::operator=(&this->m_batchRemoteTaskRef, v15);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    this->m_batchOverallTaskRef.m_ptr->m_status = BD_PENDING;
  }
  this->m_batchOverallTaskRef.m_ptr->m_errorCode = BD_NO_ERROR;
  m_ptr = this->m_batchOverallTaskRef.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdContentStreaming::_postCopy
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_postCopy(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
{
  unsigned int v4; 
  unsigned int m_fileSize; 
  char *m_fileName; 
  int v7; 
  void *v8; 
  int v9; 
  int v10; 
  void *v11; 
  int v12; 
  unsigned int v13; 
  bdTaskByteBuffer *v14; 
  bdTaskByteBuffer *v15; 
  bdTaskByteBuffer *v16; 
  unsigned __int64 v17; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v20; 
  bdTaskByteBuffer *v21; 

  v20 = result;
  v4 = 0;
  result->m_ptr = NULL;
  if ( this->m_urlIndex <= 1 )
    m_fileSize = 0;
  else
    m_fileSize = this->m_preCopyResults[1].m_fileSize;
  m_fileName = this->m_fileMetaData.m_fileName;
  if ( this == (bdContentStreaming *)-22434i64 )
  {
    v7 = 0;
  }
  else
  {
    v8 = memchr_0(this->m_fileMetaData.m_fileName, 0, 0x80ui64);
    v9 = 128;
    if ( v8 )
      v9 = (_DWORD)v8 - (_DWORD)m_fileName;
    v7 = v9 + 2;
  }
  if ( this == (bdContentStreaming *)-43202i64 )
  {
    v10 = 0;
  }
  else
  {
    v11 = memchr_0(&this->m_preCopyResults[0].m_source[1026], 0, 0x80ui64);
    v12 = 128;
    if ( v11 )
      v12 = (_DWORD)v11 - ((_DWORD)this + 43202);
    v10 = v12 + 2;
  }
  v13 = this->m_thumbDataSize + v7 + 16 * this->m_fileMetaData.m_numTags + v10 + 119;
  v14 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v21 = v14;
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
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0x10u);
  bdByteBuffer::writeString(buffer.m_ptr, m_fileName, 0x81ui64);
  bdByteBuffer::writeUInt16(buffer.m_ptr, this->m_fileMetaData.m_fileSlot);
  bdByteBuffer::writeUInt16(buffer.m_ptr, *(_WORD *)&this->m_preCopyResults[0].m_source[1024]);
  bdByteBuffer::writeString(buffer.m_ptr, &this->m_preCopyResults[0].m_source[1026], 0x80ui64);
  bdByteBuffer::writeUInt32(buffer.m_ptr, this->m_preCopyResults[0].m_fileSize);
  bdByteBuffer::writeUInt16(buffer.m_ptr, this->m_fileMetaData.m_category);
  bdByteBuffer::writeUInt32(buffer.m_ptr, m_fileSize);
  bdByteBuffer::writeBlob(buffer.m_ptr, this->m_thumbData, this->m_thumbDataSize);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, 2 * this->m_fileMetaData.m_numTags, 8u);
  if ( this->m_fileMetaData.m_numTags )
  {
    do
    {
      v17 = (unsigned __int64)v4 << 6;
      bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v17]);
      bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v17 + 8]);
      ++v4;
    }
    while ( v4 < this->m_fileMetaData.m_numTags );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdByteBuffer::writeBool(buffer.m_ptr, this->m_wasCopyingPooledFile);
  bdByteBuffer::writeUInt64(buffer.m_ptr, this->m_copySourceFileID);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_uploadFileID, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_postUploadFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_postUploadFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
{
  unsigned int v4; 
  char *m_fileName; 
  int v6; 
  int v7; 
  void *v8; 
  int v9; 
  int v10; 
  void *v11; 
  unsigned int v12; 
  _BYTE *v13; 
  signed __int64 v14; 
  unsigned int v15; 
  bdTaskByteBuffer *v16; 
  bdTaskByteBuffer *v17; 
  bdTaskByteBuffer *v18; 
  unsigned __int64 v19; 
  bdTaskResult *m_uploadMetaData; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v23; 
  bdTaskByteBuffer *v24; 

  v23 = result;
  v4 = 0;
  result->m_ptr = NULL;
  m_fileName = this->m_fileMetaData.m_fileName;
  v6 = 128;
  if ( this == (bdContentStreaming *)-22434i64 )
  {
    v7 = 0;
  }
  else
  {
    v8 = memchr_0(this->m_fileMetaData.m_fileName, 0, 0x80ui64);
    v9 = 128;
    if ( v8 )
      v9 = (_DWORD)v8 - (_DWORD)m_fileName;
    v7 = v9 + 2;
  }
  if ( this == (bdContentStreaming *)-11354i64 )
  {
    v10 = 0;
  }
  else
  {
    v11 = memchr_0(this->m_URLs[0].m_serverIndex, 0, 0x80ui64);
    if ( v11 )
      v6 = (_DWORD)v11 - ((_DWORD)this + 11354);
    v10 = v6 + 2;
  }
  v12 = v7 + this->m_thumbDataSize + 16 * this->m_fileMetaData.m_numTags + v10;
  v13 = memchr_0((char *)&queryFormat.fmt + 3, 0, 1ui64);
  LODWORD(v14) = 1;
  if ( v13 )
    v14 = v13 - ((char *)&queryFormat.fmt + 3);
  v15 = v12 + v14 + 105;
  v16 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v24 = v16;
  if ( v16 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v16, v15, 1);
    v18 = v17;
  }
  else
  {
    v18 = NULL;
  }
  buffer.m_ptr = v18;
  if ( v18 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 6u);
  bdByteBuffer::writeString(buffer.m_ptr, m_fileName, 0x81ui64);
  bdByteBuffer::writeUInt16(buffer.m_ptr, this->m_fileMetaData.m_fileSlot);
  bdByteBuffer::writeUInt16(buffer.m_ptr, this->m_URLs[0].m_serverType);
  bdByteBuffer::writeString(buffer.m_ptr, this->m_URLs[0].m_serverIndex, 0x81ui64);
  bdByteBuffer::writeUInt32(buffer.m_ptr, this->m_fileMetaData.m_fileSize);
  bdByteBuffer::writeUInt16(buffer.m_ptr, this->m_fileMetaData.m_category);
  bdByteBuffer::writeBlob(buffer.m_ptr, this->m_thumbData, this->m_thumbDataSize);
  bdByteBuffer::writeArrayStart(buffer.m_ptr, 0xAu, 2 * this->m_fileMetaData.m_numTags, 8u);
  if ( this->m_fileMetaData.m_numTags )
  {
    do
    {
      v19 = (unsigned __int64)v4 << 6;
      bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v19]);
      bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&this->m_fileMetaData.m_tags[0]._bytes_20[v19 + 8]);
      ++v4;
    }
    while ( v4 < this->m_fileMetaData.m_numTags );
  }
  bdByteBuffer::writeArrayEnd(buffer.m_ptr);
  bdByteBuffer::writeString(buffer.m_ptr, (const char *const)&queryFormat.fmt + 3, 1ui64);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  m_uploadMetaData = this->m_uploadMetaData;
  if ( !m_uploadMetaData )
    m_uploadMetaData = this->m_uploadFileID;
  bdRemoteTask::setTaskResult(result->m_ptr, m_uploadMetaData, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_postUploadSummary
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_postUploadSummary(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
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
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0x12u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2));
  bdByteBuffer::writeUInt32(buffer.m_ptr, this->m_fileMetaData.m_fileSize);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preCopy
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preCopy(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, const unsigned __int8 taskID)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x54u, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, taskID);
  bdByteBuffer::writeUInt64(buffer.m_ptr, fileID);
  bdByteBuffer::writeUInt16(buffer.m_ptr, this->m_fileMetaData.m_fileSlot);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_preCopyResults, 0xAu);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preDeleteFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDeleteFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int16 fileSlot, unsigned int leaderboardID, bdURL *deleteURLs)
{
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, 0x50u, 1);
    v9 = v11;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 8u);
  bdByteBuffer::writeUInt16(buffer.m_ptr, fileSlot);
  bdByteBuffer::writeUInt32(buffer.m_ptr, leaderboardID);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, deleteURLs, 2u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preDeleteFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDeleteFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int16 fileSlot, bdURL *deleteURLs)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x4Bu, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 8u);
  bdByteBuffer::writeUInt16(buffer.m_ptr, fileSlot);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, deleteURLs, 2u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preDownloadByFileID
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDownloadByFileID(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, unsigned int fileSize)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x56u, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 9u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, fileID);
  bdByteBuffer::writeUInt32(buffer.m_ptr, fileSize);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_downloadMetaData, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preDownloadByFileID
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDownloadByFileID(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, unsigned int fileSize, __int16 offset, __int16 maxResults)
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
    bdTaskByteBuffer::bdTaskByteBuffer(v11, 0x5Cu, 1);
    v10 = v12;
  }
  buffer.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0x16u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, fileID);
  bdByteBuffer::writeUInt32(buffer.m_ptr, fileSize);
  bdByteBuffer::writeInt16(buffer.m_ptr, offset);
  bdByteBuffer::writeInt16(buffer.m_ptr, maxResults);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_downloadMetaDataMultiPart, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preDownloadFileBySlot
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDownloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 ownerUID, unsigned __int16 fileSlot, unsigned int fileSize)
{
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, 0x59u, 1);
    v9 = v11;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 7u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, ownerUID);
  bdByteBuffer::writeUInt16(buffer.m_ptr, fileSlot);
  bdByteBuffer::writeUInt32(buffer.m_ptr, fileSize);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_downloadMetaData, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preDownloadFileBySlot
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDownloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 ownerUID, unsigned __int16 fileSlot, unsigned int fileSize, __int16 offset, __int16 maxResults)
{
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  v11 = NULL;
  result->m_ptr = NULL;
  v12 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v12 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v12, 0x5Fu, 1);
    v11 = v13;
  }
  buffer.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0x17u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, ownerUID);
  bdByteBuffer::writeUInt16(buffer.m_ptr, fileSlot);
  bdByteBuffer::writeUInt32(buffer.m_ptr, fileSize);
  bdByteBuffer::writeInt16(buffer.m_ptr, offset);
  bdByteBuffer::writeInt16(buffer.m_ptr, maxResults);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_downloadMetaDataMultiPart, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preDownloadPage
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDownloadPage(bdContentStreaming *this, bdReference<bdRemoteTask> *result, __int16 offset)
{
  bdContentStreaming::_preDownloadByFileID(this, result, *((_QWORD *)&this->m_downloadMetaDataMultiPart->bdContentStreamingBase::__vftable + 2), 0x40000000u, offset, 10);
  return result;
}

/*
==============
bdContentStreaming::_preDownloadPublisherFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDownloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, unsigned int fileSize)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x56u, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0xAu);
  bdByteBuffer::writeUInt64(buffer.m_ptr, fileID);
  bdByteBuffer::writeUInt32(buffer.m_ptr, fileSize);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_downloadMetaData, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preDownloadPublisherFileByName
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDownloadPublisherFileByName(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const char *fileName, const unsigned __int16 category, unsigned int fileSize)
{
  bdTaskByteBuffer *v9; 
  int v10; 
  int v11; 
  void *v12; 
  bdTaskByteBuffer *v13; 
  bdTaskByteBuffer *v14; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v17; 
  bdTaskByteBuffer *v18; 

  v17 = result;
  v9 = NULL;
  result->m_ptr = NULL;
  if ( fileName )
  {
    v11 = 128;
    v12 = memchr_0(fileName, 0, 0x80ui64);
    if ( v12 )
      v11 = (_DWORD)v12 - (_DWORD)fileName;
    v10 = v11 + 2;
  }
  else
  {
    v10 = 0;
  }
  v13 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v13;
  if ( v13 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v13, v10 + 80, 1);
    v9 = v14;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0x15u);
  bdByteBuffer::writeString(buffer.m_ptr, fileName, 0x81ui64);
  bdByteBuffer::writeUInt16(buffer.m_ptr, category);
  bdByteBuffer::writeUInt32(buffer.m_ptr, fileSize);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, this->m_downloadMetaData, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preDownloadSummary
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preDownloadSummary(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
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
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0x13u);
  bdByteBuffer::writeUInt64(buffer.m_ptr, *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2));
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, &this->m_summaryMeta, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preUpload
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preUpload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const char *const filename, const unsigned __int16 fileSlot, const unsigned int fileSize, const unsigned __int16 category, bdURL *uploadURLs)
{
  bdTaskByteBuffer *v11; 
  int v12; 
  int v13; 
  void *v14; 
  int v15; 
  int v16; 
  _BYTE *v17; 
  signed __int64 v18; 
  unsigned int v19; 
  bdTaskByteBuffer *v20; 
  bdTaskByteBuffer *v21; 
  unsigned __int8 *m_checksum; 
  unsigned int v23; 
  bdTaskByteBuffer *blob; 
  bdReference<bdRemoteTask> *v26; 
  bdReference<bdTaskByteBuffer> buffer; 

  v26 = result;
  v11 = NULL;
  result->m_ptr = NULL;
  if ( filename )
  {
    v13 = 128;
    v14 = memchr_0(filename, 0, 0x80ui64);
    if ( v14 )
      v13 = (_DWORD)v14 - (_DWORD)filename;
    v12 = v13 + 2;
  }
  else
  {
    v12 = 0;
  }
  v15 = 121;
  if ( !this->m_sendChecksum )
    v15 = 89;
  v16 = v12 + v15;
  v17 = memchr_0((char *)&queryFormat.fmt + 3, 0, 1ui64);
  LODWORD(v18) = 1;
  if ( v17 )
    v18 = v17 - ((char *)&queryFormat.fmt + 3);
  v19 = v16 + v18 + 2;
  v20 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  blob = v20;
  if ( v20 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v20, v19, 1);
    v11 = v21;
  }
  buffer.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 5u);
  bdByteBuffer::writeString(buffer.m_ptr, filename, 0x81ui64);
  bdByteBuffer::writeUInt16(buffer.m_ptr, fileSlot);
  bdByteBuffer::writeUInt32(buffer.m_ptr, fileSize);
  bdByteBuffer::writeUInt16(buffer.m_ptr, category);
  if ( this->m_sendChecksum )
  {
    m_checksum = this->m_checksum;
    v23 = 32;
  }
  else
  {
    LOBYTE(blob) = 0;
    v23 = 0;
    m_checksum = (unsigned __int8 *)&blob;
  }
  bdByteBuffer::writeBlob(buffer.m_ptr, m_checksum, v23);
  bdByteBuffer::writeString(buffer.m_ptr, (const char *const)&queryFormat.fmt + 3, 1ui64);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, uploadURLs, 0xAu);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::_preUploadSummary
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_preUploadSummary(bdContentStreaming *this, bdReference<bdRemoteTask> *result)
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
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0x11u);
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
bdContentStreaming::_upload
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, bdFileMetaData *fileMetaData)
{
  bdRemoteTask *v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int16 v20; 
  const char *v21; 
  unsigned int v22; 
  bool v23; 
  const bdReference<bdRemoteTask> *v25; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v28; 
  __int64 v29; 

  v28 = -2i64;
  v17 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  resulta.m_ptr = v17;
  if ( v17 )
  {
    bdRemoteTask::bdRemoteTask(v17);
    v19 = v18;
  }
  else
  {
    v19 = 0i64;
  }
  v29 = v19;
  if ( v19 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 1u);
  if ( fileMetaData )
  {
    v20 = category;
    v21 = fileName;
    v22 = fileSize;
    if ( !this->initUpload(this, fileSlot, NULL, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, NULL, fileMetaData, 0, 0, 0) )
    {
LABEL_8:
      *(_DWORD *)(v19 + 28) = 3;
      *(_DWORD *)(v19 + 80) = 5;
      result->m_ptr = (bdRemoteTask *)v19;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 1u);
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !fileID )
      goto LABEL_8;
    v20 = category;
    v21 = fileName;
    v22 = fileSize;
    if ( !this->initUpload(this, fileSlot, NULL, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, NULL, 0, 0, 0) )
      goto LABEL_8;
  }
  v25 = bdContentStreaming::_preUpload(this, &resulta, v21, fileSlot, v22, v20, this->m_URLs);
  bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v25);
  if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
  {
    bdContentStreamingBase::startUpload(this, result);
  }
  else
  {
    m_ptr = this->m_remoteTask.m_ptr;
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  }
  if ( v19 )
  {
    v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1;
LABEL_9:
    if ( v23 )
      (**(void (__fastcall ***)(__int64, __int64))v19)(v19, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::_upload
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::_upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const void *fileData, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, bdFileMetaData *fileMetaData)
{
  bdRemoteTask *v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int16 v20; 
  const char *v21; 
  unsigned int v22; 
  bool v23; 
  const bdReference<bdRemoteTask> *v25; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v28; 
  __int64 v29; 

  v28 = -2i64;
  v17 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  resulta.m_ptr = v17;
  if ( v17 )
  {
    bdRemoteTask::bdRemoteTask(v17);
    v19 = v18;
  }
  else
  {
    v19 = 0i64;
  }
  v29 = v19;
  if ( v19 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 1u);
  if ( fileMetaData )
  {
    v20 = category;
    v21 = fileName;
    v22 = fileSize;
    if ( !this->initUpload(this, fileSlot, fileData, NULL, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, NULL, fileMetaData, 0, 0, 0) )
    {
LABEL_8:
      *(_DWORD *)(v19 + 28) = 3;
      *(_DWORD *)(v19 + 80) = 5;
      result->m_ptr = (bdRemoteTask *)v19;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 1u);
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !fileID )
      goto LABEL_8;
    v20 = category;
    v21 = fileName;
    v22 = fileSize;
    if ( !this->initUpload(this, fileSlot, fileData, NULL, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, NULL, 0, 0, 0) )
      goto LABEL_8;
  }
  v25 = bdContentStreaming::_preUpload(this, &resulta, v21, fileSlot, v22, v20, this->m_URLs);
  bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v25);
  if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
  {
    bdContentStreamingBase::startUpload(this, result);
  }
  else
  {
    m_ptr = this->m_remoteTask.m_ptr;
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  }
  if ( v19 )
  {
    v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1;
LABEL_9:
    if ( v23 )
      (**(void (__fastcall ***)(__int64, __int64))v19)(v19, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::batchDownloadPublisherFiles
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::batchDownloadPublisherFiles(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdBatchDownloadInfo *downloadInfo, unsigned int numFiles)
{
  bdContentStreaming::_batchDownloadStart(this, result, downloadInfo, numFiles, BATCH_PUBLISHER_FILES);
  return result;
}

/*
==============
bdContentStreaming::batchDownloadStop
==============
*/
void bdContentStreaming::batchDownloadStop(bdContentStreaming *this)
{
  __int64 m_batchIndex; 
  bdBatchDownloadInfo *m_batchDownloadInfo; 
  bdContentStreamingBase::bdStatus State; 
  bdBatchDownloadInfoStatus v5; 
  float dataRate; 

  m_batchIndex = this->m_batchIndex;
  m_batchDownloadInfo = this->m_batchDownloadInfo;
  dataRate = 0.0;
  this->m_batchDownload = BATCH_NONE;
  bdContentStreamingBase::checkProgress(this, &m_batchDownloadInfo[m_batchIndex].bytesDownloaded, &dataRate);
  State = bdContentStreamingBase::getState(this);
  v5 = BATCH_STOPPED;
  if ( State == AUTHENTICATED )
    v5 = BATCH_FILE_COMPLETED;
  this->m_batchDownloadInfo[this->m_batchIndex].status = v5;
  this->m_batchOverallTaskRef.m_ptr->m_status = BD_CANCELLED;
}

/*
==============
bdContentStreaming::batchDownloadUserFiles
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::batchDownloadUserFiles(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdBatchDownloadInfo *downloadInfo, unsigned int numFiles)
{
  bdContentStreaming::_batchDownloadStart(this, result, downloadInfo, numFiles, BATCH_USER_FILES);
  return result;
}

/*
==============
bdContentStreaming::batchDownloadUserSummaryFiles
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::batchDownloadUserSummaryFiles(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdBatchDownloadInfo *downloadInfo, unsigned int numFiles)
{
  bdContentStreaming::_batchDownloadStart(this, result, downloadInfo, numFiles, BATCH_SUMMARY_FILES);
  return result;
}

/*
==============
bdContentStreaming::copyFromPooledStorage
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::copyFromPooledStorage(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 pooledFileID, const unsigned __int16 fileSlot, const char *fileName, const unsigned __int16 category, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  __int64 v14; 
  bdRemoteTask *v15; 
  __int64 v16; 
  bdRemoteTask_vtbl *v17; 
  bdRemoteTask *v18; 
  const bdReference<bdRemoteTask> *v19; 
  bdRemoteTask *m_ptr; 
  char v21; 
  unsigned __int16 v23; 
  char v24; 
  char v25; 
  bdRemoteTask *v26; 
  bdReference<bdRemoteTask> v27; 
  __int64 v28; 
  bdReference<bdRemoteTask> resulta; 

  v28 = -2i64;
  v14 = 0i64;
  v25 = 0;
  v24 = 0;
  v23 = category;
  if ( ((unsigned __int8 (__fastcall *)(bdContentStreaming *, _QWORD, _QWORD, _QWORD, _DWORD, const char *, unsigned __int16, const void *, unsigned int, unsigned int, bdTag *, bdFileID *, _QWORD, _DWORD, char, char, _DWORD))this->initUpload)(this, fileSlot, 0i64, 0i64, 0, fileName, v23, metaData, metaDataSize, numTags, tags, fileID, 0i64, 0, v24, v25, 0) )
  {
    this->m_copySourceFileID = pooledFileID;
    this->m_wasCopyingPooledFile = 1;
    v19 = bdContentStreaming::_preCopy(this, &resulta, pooledFileID, 0xFu);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v19);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      m_ptr = bdContentStreamingBase::startCopy(this, &v27)->m_ptr;
      v21 = 3;
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      v26 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v21 = 5;
    }
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( (v21 & 4) != 0 )
    {
      v21 &= ~4u;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v26->~bdReferencable)(v26, 1i64);
      }
    }
    if ( (v21 & 2) != 0 )
    {
      if ( v27.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          v18 = v27.m_ptr;
          if ( v27.m_ptr )
          {
            v17 = v27.m_ptr->__vftable;
            goto LABEL_28;
          }
        }
      }
    }
  }
  else
  {
    v15 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v15;
    if ( v15 )
    {
      bdRemoteTask::bdRemoteTask(v15);
      v14 = v16;
    }
    if ( v14 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 1u);
    *(_DWORD *)(v14 + 28) = 3;
    *(_DWORD *)(v14 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v14;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    {
      v17 = *(bdRemoteTask_vtbl **)v14;
      v18 = (bdRemoteTask *)v14;
LABEL_28:
      ((void (__fastcall *)(bdRemoteTask *, __int64))v17->~bdReferencable)(v18, 1i64);
    }
  }
  return result;
}

/*
==============
bdContentStreaming::copyFromUserStorage
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::copyFromUserStorage(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 userFileID, const unsigned __int16 fileSlot, const char *fileName, const unsigned __int16 category, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  __int64 v14; 
  bdRemoteTask *v15; 
  __int64 v16; 
  bdRemoteTask_vtbl *v17; 
  bdRemoteTask *v18; 
  const bdReference<bdRemoteTask> *v19; 
  bdRemoteTask *m_ptr; 
  char v21; 
  unsigned __int16 v23; 
  char v24; 
  char v25; 
  bdRemoteTask *v26; 
  bdReference<bdRemoteTask> v27; 
  __int64 v28; 
  bdReference<bdRemoteTask> resulta; 

  v28 = -2i64;
  v14 = 0i64;
  v25 = 0;
  v24 = 0;
  v23 = category;
  if ( ((unsigned __int8 (__fastcall *)(bdContentStreaming *, _QWORD, _QWORD, _QWORD, _DWORD, const char *, unsigned __int16, const void *, unsigned int, unsigned int, bdTag *, bdFileID *, _QWORD, _DWORD, char, char, _DWORD))this->initUpload)(this, fileSlot, 0i64, 0i64, 0, fileName, v23, metaData, metaDataSize, numTags, tags, fileID, 0i64, 0, v24, v25, 0) )
  {
    this->m_copySourceFileID = userFileID;
    this->m_wasCopyingPooledFile = 0;
    v19 = bdContentStreaming::_preCopy(this, &resulta, userFileID, 0x14u);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v19);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      m_ptr = bdContentStreamingBase::startCopy(this, &v27)->m_ptr;
      v21 = 3;
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      v26 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v21 = 5;
    }
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( (v21 & 4) != 0 )
    {
      v21 &= ~4u;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v26->~bdReferencable)(v26, 1i64);
      }
    }
    if ( (v21 & 2) != 0 )
    {
      if ( v27.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          v18 = v27.m_ptr;
          if ( v27.m_ptr )
          {
            v17 = v27.m_ptr->__vftable;
            goto LABEL_28;
          }
        }
      }
    }
  }
  else
  {
    v15 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v15;
    if ( v15 )
    {
      bdRemoteTask::bdRemoteTask(v15);
      v14 = v16;
    }
    if ( v14 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 1u);
    *(_DWORD *)(v14 + 28) = 3;
    *(_DWORD *)(v14 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v14;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    {
      v17 = *(bdRemoteTask_vtbl **)v14;
      v18 = (bdRemoteTask *)v14;
LABEL_28:
      ((void (__fastcall *)(bdRemoteTask *, __int64))v17->~bdReferencable)(v18, 1i64);
    }
  }
  return result;
}

/*
==============
bdContentStreaming::download
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::download(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  __int64 v10; 
  bdRemoteTask *v11; 
  __int64 v12; 
  const bdReference<bdRemoteTask> *v13; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v17; 

  v17 = -2i64;
  v10 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, NULL, 0, downloadHandler, fileMetaData, startByte, endByte, NULL, -1) )
  {
    v13 = bdContentStreaming::_preDownloadByFileID(this, &resulta, fileID, 0x40000000u);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v13);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v11 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v11;
    if ( v11 )
    {
      bdRemoteTask::bdRemoteTask(v11);
      v10 = v12;
    }
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 1u);
    *(_DWORD *)(v10 + 28) = 3;
    *(_DWORD *)(v10 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v10;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::download
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::download(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdLiveStreamingFileMetaData *fileMetaData, const __int16 partDuration)
{
  __int64 v9; 
  bdRemoteTask *v10; 
  __int64 v11; 
  const bdReference<bdRemoteTask> *v12; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v16; 

  v16 = -2i64;
  v9 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, NULL, 0, downloadHandler, NULL, 0, 0, fileMetaData, partDuration) )
  {
    v12 = bdContentStreaming::_preDownloadByFileID(this, &resulta, fileID, 0x40000000u, 0, 10);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v12);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v10 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v10;
    if ( v10 )
    {
      bdRemoteTask::bdRemoteTask(v10);
      v9 = v11;
    }
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 1u);
    *(_DWORD *)(v9 + 28) = 3;
    *(_DWORD *)(v9 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v9;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::download
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::download(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  __int64 v11; 
  bdRemoteTask *v12; 
  __int64 v13; 
  const bdReference<bdRemoteTask> *v14; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v18; 

  v18 = -2i64;
  v11 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, fileData, fileDataSize, NULL, fileMetaData, startByte, endByte, NULL, -1) )
  {
    v14 = bdContentStreaming::_preDownloadByFileID(this, &resulta, fileID, fileDataSize);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v14);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v12 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v12;
    if ( v12 )
    {
      bdRemoteTask::bdRemoteTask(v12);
      v11 = v13;
    }
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    *(_DWORD *)(v11 + 28) = 3;
    *(_DWORD *)(v11 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v11;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::downloadFileBySlot
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::downloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned __int16 fileSlot, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  __int64 v12; 
  bdRemoteTask *v13; 
  __int64 v14; 
  const bdReference<bdRemoteTask> *v15; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v19; 

  v19 = -2i64;
  v12 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, NULL, 0, downloadHandler, fileMetaData, startByte, endByte, NULL, -1) )
  {
    v15 = bdContentStreaming::_preDownloadFileBySlot(this, &resulta, ownerID, fileSlot, 0x40000000u);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v15);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v13 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v13;
    if ( v13 )
    {
      bdRemoteTask::bdRemoteTask(v13);
      v12 = v14;
    }
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 1u);
    *(_DWORD *)(v12 + 28) = 3;
    *(_DWORD *)(v12 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v12;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::downloadFileBySlot
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::downloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned __int16 fileSlot, bdDownloadInterceptor *downloadHandler, bdLiveStreamingFileMetaData *fileMetaData, const __int16 partDuration)
{
  __int64 v11; 
  bdRemoteTask *v12; 
  __int64 v13; 
  bdTaskByteBuffer *v14; 
  __int64 v15; 
  bdRemoteTask *m_ptr; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> newTask; 
  __int64 v20; 
  bdTaskByteBuffer *v21; 

  v20 = -2i64;
  v11 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, NULL, 0, downloadHandler, NULL, 0, 0, fileMetaData, partDuration) )
  {
    newTask.m_ptr = NULL;
    v14 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
    v21 = v14;
    if ( v14 )
    {
      bdTaskByteBuffer::bdTaskByteBuffer(v14, 0x5Fu, 1);
      v11 = v15;
    }
    buffer.m_ptr = (bdTaskByteBuffer *)v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0x17u);
    bdByteBuffer::writeUInt64(buffer.m_ptr, ownerID);
    bdByteBuffer::writeUInt16(buffer.m_ptr, fileSlot);
    bdByteBuffer::writeUInt32(buffer.m_ptr, 0x40000000u);
    bdByteBuffer::writeInt16(buffer.m_ptr, 0);
    bdByteBuffer::writeInt16(buffer.m_ptr, 10);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &buffer);
    bdRemoteTask::setTaskResult(newTask.m_ptr, this->m_downloadMetaDataMultiPart, 1u);
    if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, &newTask);
    if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v12 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    newTask.m_ptr = v12;
    if ( v12 )
    {
      bdRemoteTask::bdRemoteTask(v12);
      v11 = v13;
    }
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    *(_DWORD *)(v11 + 28) = 3;
    *(_DWORD *)(v11 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v11;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::downloadFileBySlot
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::downloadFileBySlot(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned __int16 fileSlot, void *fileData, const unsigned int fileSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  __int64 v13; 
  bdRemoteTask *v14; 
  __int64 v15; 
  const bdReference<bdRemoteTask> *v16; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v20; 

  v20 = -2i64;
  v13 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, fileData, fileSize, NULL, fileMetaData, startByte, endByte, NULL, -1) )
  {
    v16 = bdContentStreaming::_preDownloadFileBySlot(this, &resulta, ownerID, fileSlot, fileSize);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v16);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v14 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v14;
    if ( v14 )
    {
      bdRemoteTask::bdRemoteTask(v14);
      v13 = v15;
    }
    if ( v13 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 1u);
    *(_DWORD *)(v13 + 28) = 3;
    *(_DWORD *)(v13 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v13;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v13)(v13, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::downloadPublisherFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::downloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const char *fileName, const unsigned __int16 category, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  __int64 v12; 
  bdRemoteTask *v13; 
  __int64 v14; 
  const bdReference<bdRemoteTask> *v15; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v19; 

  v19 = -2i64;
  v12 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, NULL, 0, downloadHandler, fileMetaData, startByte, endByte, NULL, -1) )
  {
    v15 = bdContentStreaming::_preDownloadPublisherFileByName(this, &resulta, fileName, category, 0x40000000u);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v15);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v13 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v13;
    if ( v13 )
    {
      bdRemoteTask::bdRemoteTask(v13);
      v12 = v14;
    }
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 1u);
    *(_DWORD *)(v12 + 28) = 3;
    *(_DWORD *)(v12 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v12;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::downloadPublisherFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::downloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const char *fileName, const unsigned __int16 category, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  __int64 v13; 
  bdRemoteTask *v14; 
  __int64 v15; 
  const bdReference<bdRemoteTask> *v16; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v20; 

  v20 = -2i64;
  v13 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, fileData, fileDataSize, NULL, fileMetaData, startByte, endByte, NULL, -1) )
  {
    v16 = bdContentStreaming::_preDownloadPublisherFileByName(this, &resulta, fileName, category, fileDataSize);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v16);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v14 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v14;
    if ( v14 )
    {
      bdRemoteTask::bdRemoteTask(v14);
      v13 = v15;
    }
    if ( v13 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 1u);
    *(_DWORD *)(v13 + 28) = 3;
    *(_DWORD *)(v13 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v13;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v13)(v13, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::downloadPublisherFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::downloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  __int64 v10; 
  bdRemoteTask *v11; 
  __int64 v12; 
  const bdReference<bdRemoteTask> *v13; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v17; 

  v17 = -2i64;
  v10 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, NULL, 0, downloadHandler, fileMetaData, startByte, endByte, NULL, -1) )
  {
    v13 = bdContentStreaming::_preDownloadPublisherFile(this, &resulta, fileID, 0x40000000u);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v13);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v11 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v11;
    if ( v11 )
    {
      bdRemoteTask::bdRemoteTask(v11);
      v10 = v12;
    }
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 1u);
    *(_DWORD *)(v10 + 28) = 3;
    *(_DWORD *)(v10 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v10;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::downloadPublisherFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::downloadPublisherFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  __int64 v11; 
  bdRemoteTask *v12; 
  __int64 v13; 
  const bdReference<bdRemoteTask> *v14; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v18; 

  v18 = -2i64;
  v11 = 0i64;
  if ( bdContentStreamingBase::initDownload(this, fileData, fileDataSize, NULL, fileMetaData, startByte, endByte, NULL, -1) )
  {
    v14 = bdContentStreaming::_preDownloadPublisherFile(this, &resulta, fileID, fileDataSize);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v14);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDownload(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v12 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v12;
    if ( v12 )
    {
      bdRemoteTask::bdRemoteTask(v12);
      v11 = v13;
    }
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    *(_DWORD *)(v11 + 28) = 3;
    *(_DWORD *)(v11 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v11;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::downloadUserSummary
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::downloadUserSummary(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, void *summaryData, unsigned int summaryDataSize, unsigned int startByte, unsigned int endByte)
{
  __int64 v11; 
  bdSummaryMetaHandler *fileMetaData; 
  bdTaskByteBuffer *v13; 
  __int64 v14; 
  bdRemoteTask_vtbl *v15; 
  bdRemoteTask *v16; 
  bdRemoteTask *v17; 
  __int64 v18; 
  bdReference<bdRemoteTask> *started; 
  char v20; 
  bdRemoteTask *m_ptr; 
  char v22; 
  char v24; 
  bdReference<bdRemoteTask> newTask; 
  bdRemoteTask *v26; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v28; 
  bdReference<bdTaskByteBuffer> buffer; 

  v28 = -2i64;
  v11 = 0i64;
  fileMetaData = &this->m_summaryMeta;
  bdFileMetaData::reset(&this->m_summaryMeta);
  if ( bdContentStreamingBase::initDownload(this, summaryData, summaryDataSize, NULL, fileMetaData, startByte, endByte, NULL, -1) )
  {
    *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2) = fileID;
    newTask.m_ptr = NULL;
    v17 = (bdRemoteTask *)bdMemory::allocate(0x58ui64);
    resulta.m_ptr = v17;
    if ( v17 )
    {
      bdTaskByteBuffer::bdTaskByteBuffer((bdTaskByteBuffer *)v17, 0x51u, 1);
      v11 = v18;
    }
    buffer.m_ptr = (bdTaskByteBuffer *)v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0x13u);
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
      v20 = 2;
      m_ptr = started->m_ptr;
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      v26 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v20 = 4;
    }
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v22 = v20 | 1;
    if ( (v22 & 4) != 0 )
    {
      v22 &= ~4u;
      v24 = v22;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v26->~bdReferencable)(v26, 1i64);
        v22 = v24;
      }
    }
    if ( (v22 & 2) != 0 )
    {
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          v16 = resulta.m_ptr;
          if ( resulta.m_ptr )
          {
            v15 = resulta.m_ptr->__vftable;
            goto LABEL_37;
          }
        }
      }
    }
  }
  else
  {
    v13 = (bdTaskByteBuffer *)bdMemory::allocate(0x68ui64);
    buffer.m_ptr = v13;
    if ( v13 )
    {
      bdRemoteTask::bdRemoteTask((bdRemoteTask *)v13);
      v11 = v14;
    }
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    *(_DWORD *)(v11 + 28) = 3;
    *(_DWORD *)(v11 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v11;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
    {
      v15 = *(bdRemoteTask_vtbl **)v11;
      v16 = (bdRemoteTask *)v11;
LABEL_37:
      ((void (__fastcall *)(bdRemoteTask *, __int64))v15->~bdReferencable)(v16, 1i64);
    }
  }
  return result;
}

/*
==============
bdContentStreaming::getFileMetaDataByID
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::getFileMetaDataByID(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned int numFileIDs, const unsigned __int64 *fileIDs, bdFileMetaData *fileDescriptor)
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
  v6 = numFileIDs;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = 9 * numFileIDs + 77;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, v10, 1);
    v9 = v12;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 1u);
  bdByteBuffer::writeUInt32(buffer.m_ptr, v6);
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
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, fileDescriptor, v6);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::getMaxMetaDataSize
==============
*/
__int64 bdContentStreaming::getMaxMetaDataSize(bdContentStreaming *this)
{
  return 2048i64;
}

/*
==============
bdContentStreaming::getQuotaUsage
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::getQuotaUsage(bdContentStreaming *this, bdReference<bdRemoteTask> *result, bdQuotaUsage *quotaUsage)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v11; 
  bdTaskByteBuffer *v12; 

  v11 = result;
  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v12 = v7;
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x48u, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 0xBu);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  bdRemoteTask::setTaskResult(result->m_ptr, quotaUsage, 1u);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::listAllPublisherFiles
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::listAllPublisherFiles(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileDescriptors, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  __int64 v12; 
  unsigned int v13; 
  const char *v14; 
  int v15; 
  void *v16; 
  bdTaskByteBuffer *v17; 
  __int64 v18; 

  v12 = 0i64;
  result->m_ptr = NULL;
  v13 = 86;
  v14 = fileName;
  if ( fileName )
  {
    v15 = 128;
    v16 = memchr_0(fileName, 0, 0x80ui64);
    if ( v16 )
      v15 = (_DWORD)v16 - (_DWORD)v14;
    v13 = v15 + 88;
  }
  v17 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v17 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v17, v13, 1);
    v12 = v18;
  }
  fileName = (const char *)v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&fileName, 0x32u, 3u);
  bdByteBuffer::writeUInt32((bdByteBuffer *)fileName, startDate);
  bdByteBuffer::writeUInt16((bdByteBuffer *)fileName, maxNumResults);
  bdByteBuffer::writeUInt16((bdByteBuffer *)fileName, offset);
  bdByteBuffer::writeUInt16((bdByteBuffer *)fileName, category);
  if ( v14 )
    bdByteBuffer::writeString((bdByteBuffer *)fileName, v14, 0x81ui64);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&fileName);
  bdRemoteTask::setTaskResult(result->m_ptr, fileDescriptors, maxNumResults);
  if ( fileName && _InterlockedExchangeAdd((volatile signed __int32 *)fileName + 2, 0xFFFFFFFF) == 1 && fileName )
    (**(void (__fastcall ***)(const char *, __int64))fileName)(fileName, 1i64);
  return result;
}

/*
==============
bdContentStreaming::listFilesByOwner
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::listFilesByOwner(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileDescriptors, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  __int64 v13; 
  unsigned int v14; 
  const char *v15; 
  int v16; 
  void *v17; 
  bdTaskByteBuffer *v18; 
  __int64 v19; 

  v13 = 0i64;
  result->m_ptr = NULL;
  v14 = 95;
  v15 = fileName;
  if ( fileName )
  {
    v16 = 128;
    v17 = memchr_0(fileName, 0, 0x80ui64);
    if ( v17 )
      v16 = (_DWORD)v17 - (_DWORD)v15;
    v14 = v16 + 97;
  }
  v18 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v18 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v18, v14, 1);
    v13 = v19;
  }
  fileName = (const char *)v13;
  if ( v13 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&fileName, 0x32u, 2u);
  bdByteBuffer::writeUInt64((bdByteBuffer *)fileName, ownerID);
  bdByteBuffer::writeUInt32((bdByteBuffer *)fileName, startDate);
  bdByteBuffer::writeUInt16((bdByteBuffer *)fileName, maxNumResults);
  bdByteBuffer::writeUInt16((bdByteBuffer *)fileName, offset);
  bdByteBuffer::writeUInt16((bdByteBuffer *)fileName, category);
  if ( v15 )
    bdByteBuffer::writeString((bdByteBuffer *)fileName, v15, 0x81ui64);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&fileName);
  bdRemoteTask::setTaskResult(result->m_ptr, fileDescriptors, maxNumResults);
  if ( fileName && _InterlockedExchangeAdd((volatile signed __int32 *)fileName + 2, 0xFFFFFFFF) == 1 && fileName )
    (**(void (__fastcall ***)(const char *, __int64))fileName)(fileName, 1i64);
  return result;
}

/*
==============
bdContentStreaming::listFilesByOwners
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::listFilesByOwners(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *ownerIDs, unsigned int numOwners, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileDescriptors, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  __int64 v10; 
  __int64 v14; 
  unsigned int v15; 
  const char *v16; 
  int v17; 
  void *v18; 
  bdTaskByteBuffer *v19; 
  __int64 v20; 
  __int64 v21; 

  v10 = numOwners;
  v14 = 0i64;
  result->m_ptr = NULL;
  v15 = 8 * numOwners + 97;
  v16 = fileName;
  if ( fileName )
  {
    v17 = 128;
    v18 = memchr_0(fileName, 0, 0x80ui64);
    if ( v18 )
      v17 = (_DWORD)v18 - (_DWORD)v16;
    v15 += v17 + 2;
  }
  v19 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v19 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v19, v15, 1);
    v14 = v20;
  }
  fileName = (const char *)v14;
  if ( v14 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&fileName, 0x32u, 0xEu);
  bdByteBuffer::writeArrayStart((bdByteBuffer *)fileName, 0xAu, v10, 8u);
  if ( (_DWORD)v10 )
  {
    v21 = v10;
    do
    {
      bdByteBuffer::writeUInt64((bdByteBuffer *)fileName, *ownerIDs++);
      --v21;
    }
    while ( v21 );
  }
  bdByteBuffer::writeArrayEnd((bdByteBuffer *)fileName);
  bdByteBuffer::writeUInt32((bdByteBuffer *)fileName, startDate);
  bdByteBuffer::writeUInt16((bdByteBuffer *)fileName, maxNumResults);
  bdByteBuffer::writeUInt16((bdByteBuffer *)fileName, offset);
  bdByteBuffer::writeUInt16((bdByteBuffer *)fileName, category);
  if ( v16 )
    bdByteBuffer::writeString((bdByteBuffer *)fileName, v16, 0x81ui64);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&fileName);
  bdRemoteTask::setTaskResult(result->m_ptr, fileDescriptors, maxNumResults);
  if ( fileName && _InterlockedExchangeAdd((volatile signed __int32 *)fileName + 2, 0xFFFFFFFF) == 1 && fileName )
    (**(void (__fastcall ***)(const char *, __int64))fileName)(fileName, 1i64);
  return result;
}

/*
==============
bdContentStreaming::pump
==============
*/
void bdContentStreaming::pump(bdContentStreaming *this)
{
  __int64 m_batchIndex; 
  bdBatchDownloadInfo *m_batchDownloadInfo; 
  unsigned int v4; 
  const bdReference<bdRemoteTask> *v5; 
  bdRemoteTask *m_ptr; 
  unsigned int v7; 
  const bdReference<bdRemoteTask> *v8; 
  bdRemoteTask *v9; 
  float dataRate; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v12; 

  bdContentStreamingBase::pump(this);
  if ( this->m_batchDownload == BATCH_NONE )
    return;
  m_batchIndex = this->m_batchIndex;
  m_batchDownloadInfo = this->m_batchDownloadInfo;
  dataRate = 0.0;
  bdContentStreamingBase::checkProgress(this, &m_batchDownloadInfo[m_batchIndex].bytesDownloaded, &dataRate);
  if ( bdContentStreamingBase::getState(this) == AUTHENTICATED )
  {
    this->m_batchDownloadInfo[this->m_batchIndex++].status = BATCH_FILE_COMPLETED;
    v4 = this->m_batchIndex;
    if ( v4 < this->m_batchNumFiles )
    {
      v5 = bdContentStreaming::_batchDownloadFile(this, &result, v4);
      bdReference<bdRemoteTask>::operator=(&this->m_batchRemoteTaskRef, v5);
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        m_ptr = result.m_ptr;
        goto LABEL_12;
      }
      return;
    }
LABEL_14:
    v9 = this->m_batchOverallTaskRef.m_ptr;
    this->m_batchDownload = BATCH_NONE;
    v9->m_status = BD_DONE;
    return;
  }
  if ( bdContentStreamingBase::getState(this) != CROSSPLAY_LOG_IN )
    return;
  this->m_batchDownloadInfo[this->m_batchIndex].status = BATCH_ERROR;
  this->m_batchOverallTaskRef.m_ptr->m_errorCode = BD_CONTENTSTREAMING_BATCH_DOWNLOAD_PARTIAL_FAILURE;
  v7 = ++this->m_batchIndex;
  if ( v7 >= this->m_batchNumFiles )
    goto LABEL_14;
  v8 = bdContentStreaming::_batchDownloadFile(this, &v12, v7);
  bdReference<bdRemoteTask>::operator=(&this->m_batchRemoteTaskRef, v8);
  if ( v12.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v12.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    m_ptr = v12.m_ptr;
LABEL_12:
    if ( m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  }
}

/*
==============
bdContentStreaming::removeFile
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::removeFile(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot)
{
  __int64 v6; 
  bdTaskByteBuffer *v7; 
  __int64 v8; 
  bdTaskByteBuffer *v9; 
  __int64 v10; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> newTask; 
  __int64 v14; 
  bdTaskByteBuffer *v15; 
  bdReference<bdTaskByteBuffer> buffer; 

  v14 = -2i64;
  v6 = 0i64;
  if ( bdContentStreamingBase::initDelete(this) )
  {
    newTask.m_ptr = NULL;
    v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
    v15 = v9;
    if ( v9 )
    {
      bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x4Bu, 1);
      v6 = v10;
    }
    buffer.m_ptr = (bdTaskByteBuffer *)v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 1u);
    bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 8u);
    bdByteBuffer::writeUInt16(buffer.m_ptr, fileSlot);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &buffer);
    bdRemoteTask::setTaskResult(newTask.m_ptr, this->m_URLs, 2u);
    if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, &newTask);
    if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDelete(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x68ui64);
    buffer.m_ptr = v7;
    if ( v7 )
    {
      bdRemoteTask::bdRemoteTask((bdRemoteTask *)v7);
      v6 = v8;
    }
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 1u);
    *(_DWORD *)(v6 + 28) = 3;
    *(_DWORD *)(v6 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v6;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::removeFileAndLeaderboardEntry
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::removeFileAndLeaderboardEntry(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const unsigned int leaderboardID)
{
  __int64 v8; 
  bdRemoteTask *v9; 
  __int64 v10; 
  bdTaskByteBuffer *v11; 
  __int64 v12; 
  bdRemoteTask *m_ptr; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> newTask; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 

  v17 = -2i64;
  v8 = 0i64;
  if ( bdContentStreamingBase::initDelete(this) )
  {
    newTask.m_ptr = NULL;
    v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
    v18 = v11;
    if ( v11 )
    {
      bdTaskByteBuffer::bdTaskByteBuffer(v11, 0x50u, 1);
      v8 = v12;
    }
    buffer.m_ptr = (bdTaskByteBuffer *)v8;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 1u);
    bdRemoteTaskManager::initTaskBuffer(&buffer, 0x32u, 8u);
    bdByteBuffer::writeUInt16(buffer.m_ptr, fileSlot);
    bdByteBuffer::writeUInt32(buffer.m_ptr, leaderboardID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &buffer);
    bdRemoteTask::setTaskResult(newTask.m_ptr, this->m_URLs, 2u);
    if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, &newTask);
    if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      bdContentStreamingBase::startDelete(this, result);
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      result->m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  else
  {
    v9 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    newTask.m_ptr = v9;
    if ( v9 )
    {
      bdRemoteTask::bdRemoteTask(v9);
      v8 = v10;
    }
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 1u);
    *(_DWORD *)(v8 + 28) = 3;
    *(_DWORD *)(v8 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v8;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1i64);
  }
  return result;
}

/*
==============
bdContentStreaming::reportContent
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::reportContent(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v11; 
  bdTaskByteBuffer *v12; 

  v11 = result;
  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v12 = v7;
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x51u, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x35u, 0xCu);
  bdByteBuffer::writeUInt64(buffer.m_ptr, entityID);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdContentStreaming::upload
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  bdContentStreaming::_upload(this, result, fileSlot, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, NULL, DEPRECATED_clientLocale);
  return result;
}

/*
==============
bdContentStreaming::upload
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileMetaData *fileMetaData, const char *DEPRECATED_clientLocale)
{
  bdContentStreaming::_upload(this, result, fileSlot, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, NULL, fileMetaData, DEPRECATED_clientLocale);
  return result;
}

/*
==============
bdContentStreaming::upload
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const void *fileData, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  bdContentStreaming::_upload(this, result, fileSlot, fileData, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, NULL, DEPRECATED_clientLocale);
  return result;
}

/*
==============
bdContentStreaming::upload
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::upload(bdContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const void *fileData, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileMetaData *fileMetaData, const char *DEPRECATED_clientLocale)
{
  bdContentStreaming::_upload(this, result, fileSlot, fileData, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, NULL, fileMetaData, DEPRECATED_clientLocale);
  return result;
}

/*
==============
bdContentStreaming::uploadUserSummaryMetaData
==============
*/
bdReference<bdRemoteTask> *bdContentStreaming::uploadUserSummaryMetaData(bdContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, const void *summaryData, unsigned int summaryDataSize, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags)
{
  __int64 v12; 
  bdRemoteTask *v13; 
  __int64 v14; 
  bdRemoteTask_vtbl *v15; 
  bdRemoteTask *v16; 
  const bdReference<bdRemoteTask> *v17; 
  bdRemoteTask *m_ptr; 
  char v19; 
  __int16 v21; 
  char v22; 
  char v23; 
  bdRemoteTask *v24; 
  bdReference<bdRemoteTask> v25; 
  __int64 v26; 
  bdReference<bdRemoteTask> resulta; 

  v26 = -2i64;
  v12 = 0i64;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  if ( ((unsigned __int8 (__fastcall *)(bdContentStreaming *, _QWORD, const void *, _QWORD, unsigned int, _QWORD, __int16, const void *, unsigned int, unsigned int, bdTag *, _QWORD, _QWORD, _DWORD, char, char, _DWORD))this->initUpload)(this, 0i64, summaryData, 0i64, summaryDataSize, 0i64, v21, metaData, metaDataSize, numTags, tags, 0i64, 0i64, 0, v22, v23, 0) )
  {
    *((_QWORD *)&this->m_fileMetaData.bdContentStreamingBase::__vftable + 2) = fileID;
    this->m_isSummary = 1;
    v17 = bdContentStreaming::_preUploadSummary(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v17);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_PENDING )
    {
      m_ptr = bdContentStreamingBase::startUpload(this, &v25)->m_ptr;
      v19 = 3;
    }
    else
    {
      m_ptr = this->m_remoteTask.m_ptr;
      v24 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v19 = 5;
    }
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( (v19 & 4) != 0 )
    {
      v19 &= ~4u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v24->~bdReferencable)(v24, 1i64);
      }
    }
    if ( (v19 & 2) != 0 )
    {
      if ( v25.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          v16 = v25.m_ptr;
          if ( v25.m_ptr )
          {
            v15 = v25.m_ptr->__vftable;
            goto LABEL_28;
          }
        }
      }
    }
  }
  else
  {
    v13 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
    resulta.m_ptr = v13;
    if ( v13 )
    {
      bdRemoteTask::bdRemoteTask(v13);
      v12 = v14;
    }
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 1u);
    *(_DWORD *)(v12 + 28) = 3;
    *(_DWORD *)(v12 + 80) = 5;
    result->m_ptr = (bdRemoteTask *)v12;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
    {
      v15 = *(bdRemoteTask_vtbl **)v12;
      v16 = (bdRemoteTask *)v12;
LABEL_28:
      ((void (__fastcall *)(bdRemoteTask *, __int64))v15->~bdReferencable)(v16, 1i64);
    }
  }
  return result;
}

