/*
==============
bdTitleUtilities::getTitleStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::getTitleStats(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdTitleStats *titleStats)
{
  return ?getTitleStats@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdTitleStats@@@Z(this, result, titleStats);
}

/*
==============
bdTitleUtilities::getServerTime
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::getServerTime(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdTimeStamp *timeStamp)
{
  return ?getServerTime@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdTimeStamp@@@Z(this, result, timeStamp);
}

/*
==============
bdTitleUtilities::getServerVersion
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::getServerVersion(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdServerVersion *version)
{
  return ?getServerVersion@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdServerVersion@@@Z(this, result, version);
}

/*
==============
bdTitleUtilities::debugReconnectCurrentClient
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::debugReconnectCurrentClient(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const unsigned int afterMs)
{
  return ?debugReconnectCurrentClient@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, afterMs);
}

/*
==============
bdTitleUtilities::verifyString
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::verifyString(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *const str, const unsigned int length, bdVerifyString *verified)
{
  return ?verifyString@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdVerifyString@@@Z(this, result, str, length, verified);
}

/*
==============
bdTitleUtilities::getMAC
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::getMAC(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const void *const messageBlob, const unsigned int messageBlobSize, bdMessageSigning *messageSigning)
{
  return ?getMAC@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBXIPEAVbdMessageSigning@@@Z(this, result, messageBlob, messageBlobSize, messageSigning);
}

/*
==============
bdTitleUtilities::sendOwnedContent
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::sendOwnedContent(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const void *const data, const unsigned int dataSize)
{
  return ?sendOwnedContent@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBXI@Z(this, result, data, dataSize);
}

/*
==============
bdTitleUtilities::getUserNames
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::getUserNames(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, const unsigned int numUsers, bdUserInfo *userInfos)
{
  return ?getUserNames@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEA_KIQEAVbdUserInfo@@@Z(this, result, userIDs, numUsers, userInfos);
}

/*
==============
bdTitleUtilities::getUserIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::getUserIDs(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *const *usernames, const unsigned int numUsers, bdUserInfo *userInfos)
{
  return ?getUserIDs@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBQEBDIQEAVbdUserInfo@@@Z(this, result, usernames, numUsers, userInfos);
}

/*
==============
bdTitleUtilities::~bdTitleUtilities
==============
*/

void __fastcall bdTitleUtilities::~bdTitleUtilities(bdTitleUtilities *this)
{
  ??1bdTitleUtilities@@UEAA@XZ(this);
}

/*
==============
bdTitleUtilities::sanitizeString
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::sanitizeString(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const bdSanitizeStringRequest *request, bdSanitizeStringResponse *response)
{
  return ?sanitizeString@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSanitizeStringRequest@@PEAVbdSanitizeStringResponse@@@Z(this, result, request, response);
}

/*
==============
bdTitleUtilities::areUsersOnline
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::areUsersOnline(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdOnlineUserInfo *results, const unsigned int numUsers)
{
  return ?areUsersOnline@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdOnlineUserInfo@@I@Z(this, result, results, numUsers);
}

/*
==============
bdTitleUtilities::getServerTimeMilliseconds
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTitleUtilities::getServerTimeMilliseconds(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdTimeStampMilliseconds *timeStampMilliseconds)
{
  return ?getServerTimeMilliseconds@bdTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdTimeStampMilliseconds@@@Z(this, result, timeStampMilliseconds);
}

/*
==============
bdTitleUtilities::bdTitleUtilities
==============
*/

void __fastcall bdTitleUtilities::bdTitleUtilities(bdTitleUtilities *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdTitleUtilities@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdTitleUtilities::bdTitleUtilities
==============
*/
void bdTitleUtilities::bdTitleUtilities(bdTitleUtilities *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->__vftable = (bdTitleUtilities_vtbl *)&bdTitleUtilities::`vftable';
}

/*
==============
bdTitleUtilities::~bdTitleUtilities
==============
*/
void bdTitleUtilities::~bdTitleUtilities(bdTitleUtilities *this)
{
  this->__vftable = (bdTitleUtilities_vtbl *)&bdService::`vftable';
}

/*
==============
bdTitleUtilities::areUsersOnline
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::areUsersOnline(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdOnlineUserInfo *results, const unsigned int numUsers)
{
  __int64 v4; 
  unsigned int v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bool v12; 
  const unsigned __int64 *v13; 
  __int64 v14; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v18; 
  bdTaskByteBuffer *v19; 

  v18 = -2i64;
  v4 = numUsers;
  v8 = 9 * numUsers + 72;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v19 = v9;
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, v8, 1);
    v11 = v10;
  }
  else
  {
    v11 = NULL;
  }
  buffer.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  result->m_ptr = NULL;
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xCu, 7u);
  v12 = 1;
  if ( !(_DWORD)v4 )
    goto LABEL_15;
  v13 = (const unsigned __int64 *)(&results->__vftable + 2);
  v14 = v4;
  do
  {
    v12 = v12 && bdByteBuffer::writeUInt64(buffer.m_ptr, *v13);
    v13 += 6;
    --v14;
  }
  while ( v14 );
  if ( v12 )
  {
LABEL_15:
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::areUsersOnline", 0x81u, "Failed to start task: Error %i", started);
    else
      bdRemoteTask::setTaskResult(result->m_ptr, results, v4);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::areUsersOnline", 0x8Au, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTitleUtilities::debugReconnectCurrentClient
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::debugReconnectCurrentClient(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const unsigned int afterMs)
{
  bdTaskByteBuffer *m_ptr; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdLobbyErrorCode v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v15; 
  bdTaskByteBuffer *v16; 

  v15 = result;
  m_ptr = NULL;
  result->m_ptr = NULL;
  if ( bdRemoteTaskManager::isConnectionMigrationSupported(this->m_remoteTaskManager) )
  {
    v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
    v16 = v7;
    if ( v7 )
    {
      bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x4Du, 1);
      m_ptr = v8;
    }
    buffer.m_ptr = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = buffer.m_ptr;
    }
    bdRemoteTaskManager::initTaskBuffer(&buffer, 0xFFu, 1u);
    if ( m_ptr && bdByteBuffer::writeUInt32(buffer.m_ptr, afterMs) )
    {
      started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
      if ( started )
      {
        v13 = started;
        bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::debugReconnectCurrentClient", 0x17Cu, "Failed to start task: Error %i", v13);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::debugReconnectCurrentClient", 0x181u, "Failed to serialize the task.");
    }
    if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    {
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
      return result;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::debugReconnectCurrentClient", 0x186u, "The protocol negotiated with the LSG does not support reconnects.");
    v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x68ui64);
    buffer.m_ptr = v11;
    if ( v11 )
    {
      bdRemoteTask::bdRemoteTask((bdRemoteTask *)v11);
      m_ptr = v12;
    }
    if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
    result->m_ptr = (bdRemoteTask *)m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    result->m_ptr->m_status = BD_FAILED;
    result->m_ptr->m_errorCode = BD_SERVICE_NOT_AVAILABLE;
  }
  return result;
}

/*
==============
bdTitleUtilities::getMAC
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::getMAC(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const void *const messageBlob, const unsigned int messageBlobSize, bdMessageSigning *messageSigning)
{
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v14; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v16; 
  bdTaskByteBuffer *v17; 

  v16 = -2i64;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v17 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, messageBlobSize + 78, 1);
    v9 = v11;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xCu, 8u);
  if ( bdByteBuffer::writeBlob(buffer.m_ptr, messageBlob, messageBlobSize) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v14 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getMAC", 0xF8u, "Failed to start task: Error %i", v14);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, messageSigning, 1u);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getMAC", 0x101u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTitleUtilities::getServerTime
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::getServerTime(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdTimeStamp *timeStamp)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 
  bdTaskByteBuffer *v14; 

  v13 = result;
  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v14 = v7;
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x48u, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xCu, 6u);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getServerTime", 0x9Bu, "Failed to start task: Error %i", v11);
  }
  else
  {
    bdRemoteTask::setTaskResult(result->m_ptr, timeStamp, 1u);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTitleUtilities::getServerTimeMilliseconds
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::getServerTimeMilliseconds(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdTimeStampMilliseconds *timeStampMilliseconds)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 
  bdTaskByteBuffer *v14; 

  v13 = result;
  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v14 = v7;
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x48u, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xCu, 0xCu);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getServerTimeMilliseconds", 0xB0u, "Failed to start task: Error %i", v11);
  }
  else
  {
    bdRemoteTask::setTaskResult(result->m_ptr, timeStampMilliseconds, 1u);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTitleUtilities::getServerVersion
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::getServerVersion(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdServerVersion *version)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 
  bdTaskByteBuffer *v14; 

  v13 = result;
  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v14 = v7;
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x48u, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xCu, 0xBu);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getServerVersion", 0x160u, "Failed to start task: Error %i", v11);
  }
  else
  {
    bdRemoteTask::setTaskResult(result->m_ptr, version, 1u);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTitleUtilities::getTitleStats
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::getTitleStats(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, bdTitleStats *titleStats)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 
  bdTaskByteBuffer *v14; 

  v13 = result;
  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v14 = v7;
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x48u, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xCu, 2u);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getTitleStats", 0x61u, "Failed to start task: Error %i", v11);
  }
  else
  {
    bdRemoteTask::setTaskResult(result->m_ptr, titleStats, 1u);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTitleUtilities::getUserIDs
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::getUserIDs(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *const *usernames, const unsigned int numUsers, bdUserInfo *userInfos)
{
  __int64 v5; 
  const char *const *v6; 
  int v9; 
  const void **v10; 
  __int64 v11; 
  const void *v12; 
  int v13; 
  void *v14; 
  int v15; 
  bdTaskByteBuffer *v16; 
  bdTaskByteBuffer *v17; 
  bdTaskByteBuffer *v18; 
  bool v19; 
  __int64 v20; 
  bdTaskByteBuffer *m_ptr; 
  bdLobbyErrorCode started; 
  bdRemoteTask *v23; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> newTask; 
  __int64 v27; 
  bdTaskByteBuffer *v28; 

  v27 = -2i64;
  v5 = numUsers;
  v6 = usernames;
  v9 = 0;
  if ( numUsers )
  {
    v10 = (const void **)usernames;
    v11 = numUsers;
    do
    {
      v12 = *v10;
      if ( *v10 )
      {
        v14 = memchr_0(*v10, 0, 0x40ui64);
        v15 = 64;
        if ( v14 )
          v15 = (_DWORD)v14 - (_DWORD)v12;
        v13 = v15 + 2;
      }
      else
      {
        v13 = 0;
      }
      v9 += v13;
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  v16 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v28 = v16;
  if ( v16 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v16, v9 + 77, 1);
    v18 = v17;
  }
  else
  {
    v18 = NULL;
  }
  buffer.m_ptr = v18;
  if ( v18 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xCu, 0xAu);
  v19 = bdByteBuffer::writeUInt32(buffer.m_ptr, v5);
  if ( (_DWORD)v5 )
  {
    v20 = v5;
    do
    {
      v19 = v19 && bdByteBuffer::writeString(buffer.m_ptr, *v6++, 0x40ui64);
      --v20;
    }
    while ( v20 );
  }
  if ( !v19 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getUserIDs", 0x143u, "Failed to write getUserIDs task to buffer");
    result->m_ptr = NULL;
    m_ptr = buffer.m_ptr;
    if ( !buffer.m_ptr )
      return result;
    goto LABEL_35;
  }
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &buffer);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getUserIDs", 0x14Bu, "Failed to start getUserIDs task: Error %i", started);
  else
    bdRemoteTask::setTaskResult(newTask.m_ptr, userInfos, v5);
  v23 = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( v23 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v23->m_refCount, 1u);
    v23 = newTask.m_ptr;
  }
  if ( v23 && _InterlockedExchangeAdd((volatile signed __int32 *)&v23->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( newTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
    newTask.m_ptr = NULL;
  }
  m_ptr = buffer.m_ptr;
  if ( buffer.m_ptr )
  {
LABEL_35:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  }
  return result;
}

/*
==============
bdTitleUtilities::getUserNames
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::getUserNames(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, const unsigned int numUsers, bdUserInfo *userInfos)
{
  __int64 v5; 
  unsigned int v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bool v13; 
  __int64 v14; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v18; 
  bdTaskByteBuffer *v19; 

  v18 = -2i64;
  v5 = numUsers;
  v9 = 9 * numUsers + 72;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v19 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, v9, 1);
    v12 = v11;
  }
  else
  {
    v12 = NULL;
  }
  buffer.m_ptr = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  result->m_ptr = NULL;
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xCu, 9u);
  v13 = 1;
  if ( !(_DWORD)v5 )
    goto LABEL_15;
  v14 = v5;
  do
  {
    v13 = v13 && bdByteBuffer::writeUInt64(buffer.m_ptr, *userIDs++);
    --v14;
  }
  while ( v14 );
  if ( v13 )
  {
LABEL_15:
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getUserNames", 0x11Eu, "Failed to start task: Error %i", started);
    else
      bdRemoteTask::setTaskResult(result->m_ptr, userInfos, v5);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::getUserNames", 0x127u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTitleUtilities::sanitizeString
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::sanitizeString(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const bdSanitizeStringRequest *request, bdSanitizeStringResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  int v8; 
  bdLobbyErrorCode v9; 
  bdReference<bdStructBufferTask> v10; 

  v10.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v10, 0xCu, 0xDu, request, response, NULL);
  if ( started )
  {
    v9 = started;
    v8 = 13;
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::sanitizeString", 0x51u, "Failed to start bdTitleUtilities task: %d: Error %i", v8, v9);
  }
  m_ptr = v10.m_ptr;
  result->m_ptr = v10.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v10.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v10.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v10.m_ptr->~bdReferencable)(v10.m_ptr, 1i64);
  return result;
}

/*
==============
bdTitleUtilities::sendOwnedContent
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::sendOwnedContent(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const void *const data, const unsigned int dataSize)
{
  bdTaskByteBuffer *v8; 
  unsigned __int64 v9; 
  size_t v10; 
  _BYTE *v11; 
  signed __int64 v12; 
  unsigned int v13; 
  bdTaskByteBuffer *v14; 
  bdTaskByteBuffer *v15; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v18; 
  bdReference<bdTaskByteBuffer> buffer; 
  int v20; 
  __int64 v21; 
  bdReference<bdRemoteTask> *v22; 
  bdTaskByteBuffer *v23; 
  char Buf[8]; 

  v21 = -2i64;
  v22 = result;
  v8 = NULL;
  result->m_ptr = NULL;
  v20 = 1;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v9 = -1i64;
  do
    ++v9;
  while ( aOthr[v9] );
  v10 = 4i64;
  if ( v9 < 4 )
    v10 = v9;
  memcpy_0(Buf, "OTHR", v10);
  Buf[v10] = 0;
  v11 = memchr_0(Buf, 0, 5ui64);
  if ( v11 )
    v12 = v11 - Buf;
  else
    LODWORD(v12) = 5;
  v13 = v12 + dataSize + 80;
  v14 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v23 = v14;
  if ( v14 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v14, v13, 1);
    v8 = v15;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x42u, 1u);
  if ( bdByteBuffer::writeString(buffer.m_ptr, Buf, 5ui64) && bdByteBuffer::writeBlob(buffer.m_ptr, data, dataSize) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v18 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::sendOwnedContent", 0xDCu, "Failed to start task: Error %i", v18);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::sendOwnedContent", 0xE1u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdTitleUtilities::verifyString
==============
*/
bdReference<bdRemoteTask> *bdTitleUtilities::verifyString(bdTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *const str, const unsigned int length, bdVerifyString *verified)
{
  unsigned __int64 v5; 
  bdTaskByteBuffer *v9; 
  unsigned int v10; 
  unsigned int v11; 
  void *v12; 
  bdTaskByteBuffer *v13; 
  bdTaskByteBuffer *v14; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 

  v5 = length;
  v9 = NULL;
  result->m_ptr = NULL;
  if ( str )
  {
    v11 = length;
    v12 = memchr_0(str, 0, length);
    if ( v12 )
      v11 = (_DWORD)v12 - (_DWORD)str;
    v10 = v11 + 2;
  }
  else
  {
    v10 = 0;
  }
  v13 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v13 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v13, v10 + 72, 1);
    v9 = v14;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xCu, 1u);
  if ( bdByteBuffer::writeString(buffer.m_ptr, str, v5) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::verifyString", 0x31u, "Failed to start task: Error %i", started);
    else
      bdRemoteTask::setTaskResult(result->m_ptr, verified, 1u);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "title utilities", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdtitleutilities.cpp", "bdTitleUtilities::verifyString", 0x3Au, "Failed to write string %s into buffer", str);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

