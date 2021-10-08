/*
==============
bdProfiles::~bdProfiles
==============
*/

void __fastcall bdProfiles::~bdProfiles(bdProfiles *this)
{
  ??1bdProfiles@@QEAA@XZ(this);
}

/*
==============
bdProfiles::getPrivateInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdProfiles::getPrivateInfo(bdProfiles *this, bdReference<bdRemoteTask> *result, bdProfileInfo *const privateProfile)
{
  return ?getPrivateInfo@bdProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdProfileInfo@@@Z(this, result, privateProfile);
}

/*
==============
bdProfiles::setPublicInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdProfiles::setPublicInfo(bdProfiles *this, bdReference<bdRemoteTask> *result, bdProfileInfo *profileInfo)
{
  return ?setPublicInfo@bdProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdProfileInfo@@@Z(this, result, profileInfo);
}

/*
==============
bdProfiles::bdProfiles
==============
*/

void __fastcall bdProfiles::bdProfiles(bdProfiles *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdProfiles@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdProfiles::getPublicInfos
==============
*/

bdReference<bdRemoteTask> *__fastcall bdProfiles::getPublicInfos(bdProfiles *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, bdProfileInfo *publicProfiles, const unsigned int numProfiles)
{
  return ?getPublicInfos@bdProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEAVbdProfileInfo@@I@Z(this, result, userIDs, publicProfiles, numProfiles);
}

/*
==============
bdProfiles::setPrivateInfoByUserID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdProfiles::setPrivateInfoByUserID(bdProfiles *this, bdReference<bdRemoteTask> *result, unsigned __int64 userID, bdProfileInfo *const profileInfo)
{
  return ?setPrivateInfoByUserID@bdProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdProfileInfo@@@Z(this, result, userID, profileInfo);
}

/*
==============
bdProfiles::setPublicInfoByUserID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdProfiles::setPublicInfoByUserID(bdProfiles *this, bdReference<bdRemoteTask> *result, unsigned __int64 userID, bdProfileInfo *const profileInfo)
{
  return ?setPublicInfoByUserID@bdProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdProfileInfo@@@Z(this, result, userID, profileInfo);
}

/*
==============
bdProfiles::deleteProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdProfiles::deleteProfile(bdProfiles *this, bdReference<bdRemoteTask> *result)
{
  return ?deleteProfile@bdProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdProfiles::getPrivateInfoByUserID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdProfiles::getPrivateInfoByUserID(bdProfiles *this, bdReference<bdRemoteTask> *result, unsigned __int64 userID, bdProfileInfo *const profileInfo)
{
  return ?getPrivateInfoByUserID@bdProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdProfileInfo@@@Z(this, result, userID, profileInfo);
}

/*
==============
bdProfiles::setPrivateInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdProfiles::setPrivateInfo(bdProfiles *this, bdReference<bdRemoteTask> *result, bdProfileInfo *profileInfo)
{
  return ?setPrivateInfo@bdProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdProfileInfo@@@Z(this, result, profileInfo);
}

/*
==============
bdProfiles::bdProfiles
==============
*/
void bdProfiles::bdProfiles(bdProfiles *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdProfiles::~bdProfiles
==============
*/
void bdProfiles::~bdProfiles(bdProfiles *this)
{
  this->m_remoteTaskManager = NULL;
}

/*
==============
bdProfiles::deleteProfile
==============
*/
bdReference<bdRemoteTask> *bdProfiles::deleteProfile(bdProfiles *this, bdReference<bdRemoteTask> *result)
{
  bdTaskByteBuffer *v4; 
  bdTaskByteBuffer *v5; 
  bdTaskByteBuffer *v6; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v9; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v11; 
  bdTaskByteBuffer *v12; 

  v11 = result;
  v4 = NULL;
  result->m_ptr = NULL;
  v5 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v12 = v5;
  if ( v5 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v5, 0x48u, 1);
    v4 = v6;
  }
  buffer.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 8u, 5u);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v9 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::deleteProfile", 0xD5u, "Failed to start task: Error %i", v9);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdProfiles::getPrivateInfo
==============
*/
bdReference<bdRemoteTask> *bdProfiles::getPrivateInfo(bdProfiles *this, bdReference<bdRemoteTask> *result, bdProfileInfo *const privateProfile)
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
  bdRemoteTaskManager::initTaskBuffer(&buffer, 8u, 2u);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::getPrivateInfo", 0xC0u, "Failed to start task: Error %i", v11);
  }
  else
  {
    bdRemoteTask::setTaskResult(result->m_ptr, privateProfile, 1u);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdProfiles::getPrivateInfoByUserID
==============
*/
bdReference<bdRemoteTask> *bdProfiles::getPrivateInfoByUserID(bdProfiles *this, bdReference<bdRemoteTask> *result, unsigned __int64 userID, bdProfileInfo *const profileInfo)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v15; 
  bdTaskByteBuffer *v16; 

  v15 = -2i64;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v16 = v9;
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x52u, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 8u, 7u);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, userID) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v13 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::getPrivateInfoByUserID", 0x84u, "Failed to start task: Error %i", v13);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, profileInfo, 1u);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::getPrivateInfoByUserID", 0x8Du, "Failed to write param into buffer");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdProfiles::getPublicInfos
==============
*/
bdReference<bdRemoteTask> *bdProfiles::getPublicInfos(bdProfiles *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, bdProfileInfo *publicProfiles, const unsigned int numProfiles)
{
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bool v12; 
  __int64 v13; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 

  v17 = -2i64;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, 9 * numProfiles + 72, 1);
    v9 = v11;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 8u, 1u);
  v12 = 1;
  if ( !numProfiles )
    goto LABEL_14;
  v13 = numProfiles;
  do
  {
    v12 = v12 && bdByteBuffer::writeUInt64(buffer.m_ptr, *userIDs++);
    --v13;
  }
  while ( v13 );
  if ( v12 )
  {
LABEL_14:
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::getPublicInfos", 0xA7u, "Failed to start task: Error %i", started);
    else
      bdRemoteTask::setTaskResult(result->m_ptr, publicProfiles, numProfiles);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::getPublicInfos", 0xB0u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdProfiles::setPrivateInfo
==============
*/
bdReference<bdRemoteTask> *bdProfiles::setPrivateInfo(bdProfiles *this, bdReference<bdRemoteTask> *result, bdProfileInfo *profileInfo)
{
  bdTaskByteBuffer *v6; 
  unsigned int v7; 
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v12; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v14; 
  bdTaskByteBuffer *v15; 

  v14 = result;
  v6 = NULL;
  result->m_ptr = NULL;
  v7 = profileInfo->sizeOf(profileInfo);
  v8 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v15 = v8;
  if ( v8 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v8, v7 + 73, 1);
    v6 = v9;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 8u, 4u);
  (**((void (__fastcall ***)(bdProfileInfo_vtbl **, bdTaskByteBuffer *))&profileInfo->__vftable + 2))(&profileInfo->__vftable + 2, buffer.m_ptr);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::setPrivateInfo", 0x39u, "Failed to start task: Error %i", v12);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdProfiles::setPrivateInfoByUserID
==============
*/
bdReference<bdRemoteTask> *bdProfiles::setPrivateInfoByUserID(bdProfiles *this, bdReference<bdRemoteTask> *result, unsigned __int64 userID, bdProfileInfo *const profileInfo)
{
  bdTaskByteBuffer *v8; 
  unsigned int v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 

  v8 = NULL;
  result->m_ptr = NULL;
  v9 = profileInfo->sizeOf(profileInfo);
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, v9 + 83, 1);
    v8 = v11;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 8u, 6u);
  v12 = bdByteBuffer::writeUInt64(buffer.m_ptr, userID);
  (**((void (__fastcall ***)(bdProfileInfo_vtbl **, bdTaskByteBuffer *))&profileInfo->__vftable + 2))(&profileInfo->__vftable + 2, buffer.m_ptr);
  if ( v12 )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::setPrivateInfoByUserID", 0x52u, "Failed to start task: Error %i", started);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdProfiles::setPublicInfo
==============
*/
bdReference<bdRemoteTask> *bdProfiles::setPublicInfo(bdProfiles *this, bdReference<bdRemoteTask> *result, bdProfileInfo *profileInfo)
{
  bdTaskByteBuffer *v6; 
  unsigned int v7; 
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v12; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v14; 
  bdTaskByteBuffer *v15; 

  v14 = result;
  v6 = NULL;
  result->m_ptr = NULL;
  v7 = profileInfo->sizeOf(profileInfo);
  v8 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v15 = v8;
  if ( v8 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v8, v7 + 73, 1);
    v6 = v9;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 8u, 3u);
  (**((void (__fastcall ***)(bdProfileInfo_vtbl **, bdTaskByteBuffer *))&profileInfo->__vftable + 2))(&profileInfo->__vftable + 2, buffer.m_ptr);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::setPublicInfo", 0x27u, "Failed to start task: Error %i", v12);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdProfiles::setPublicInfoByUserID
==============
*/
bdReference<bdRemoteTask> *bdProfiles::setPublicInfoByUserID(bdProfiles *this, bdReference<bdRemoteTask> *result, unsigned __int64 userID, bdProfileInfo *const profileInfo)
{
  bdTaskByteBuffer *v8; 
  unsigned int v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 

  v8 = NULL;
  result->m_ptr = NULL;
  v9 = profileInfo->sizeOf(profileInfo);
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, v9 + 82, 1);
    v8 = v11;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 8u, 8u);
  v12 = bdByteBuffer::writeUInt64(buffer.m_ptr, userID);
  (**((void (__fastcall ***)(bdProfileInfo_vtbl **, bdTaskByteBuffer *))&profileInfo->__vftable + 2))(&profileInfo->__vftable + 2, buffer.m_ptr);
  if ( v12 )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "profiles", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofiles.cpp", "bdProfiles::setPublicInfoByUserID", 0x6Cu, "Failed to start task: Error %i", started);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

