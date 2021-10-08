/*
==============
bdRelayService::getCredentials
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRelayService::getCredentials(bdRelayService *this, bdReference<bdRemoteTask> *result, bdRelayCredentials *credentials, const unsigned int messageRelayLibVersion, bdRelayServiceConnTypeHint connType, bdRelayServicePlatform platform)
{
  return ?getCredentials@bdRelayService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdRelayCredentials@@IW4bdRelayServiceConnTypeHint@@W4bdRelayServicePlatform@@@Z(this, result, credentials, messageRelayLibVersion, connType, platform);
}

/*
==============
bdRelayService::bdRelayService
==============
*/

void __fastcall bdRelayService::bdRelayService(bdRelayService *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdRelayService@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdRelayService::~bdRelayService
==============
*/

void __fastcall bdRelayService::~bdRelayService(bdRelayService *this)
{
  ??1bdRelayService@@QEAA@XZ(this);
}

/*
==============
bdRelayService::bdRelayService
==============
*/
void bdRelayService::bdRelayService(bdRelayService *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdRelayService::~bdRelayService
==============
*/
void bdRelayService::~bdRelayService(bdRelayService *this)
{
  ;
}

/*
==============
bdRelayService::getCredentials
==============
*/
bdReference<bdRemoteTask> *bdRelayService::getCredentials(bdRelayService *this, bdReference<bdRemoteTask> *result, bdRelayCredentials *credentials, const unsigned int messageRelayLibVersion, bdRelayServiceConnTypeHint connType, bdRelayServicePlatform platform)
{
  bdRelayServicePlatform v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v13; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 

  v17 = -2i64;
  v10 = BD_RELAY_SERVICE_PLATFORM_XBOXONE;
  if ( platform != BD_RELAY_SERVICE_PLATFORM_UNKNOWN )
    v10 = platform;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v11;
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, 0x57u, 1);
    v13 = v12;
  }
  else
  {
    v13 = NULL;
  }
  buffer.m_ptr = v13;
  if ( v13 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
  result->m_ptr = NULL;
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x49u, 2u);
  if ( bdByteBuffer::writeUInt32(buffer.m_ptr, messageRelayLibVersion) && bdByteBuffer::writeUInt32(buffer.m_ptr, v10) && bdByteBuffer::writeUInt32(buffer.m_ptr, connType) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdRelayService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrelayservice\\bdrelayservice.cpp", "bdRelayService::getCredentials", 0x55u, "Failed to start task: Error %i", started);
    else
      bdRemoteTask::setTaskResult(result->m_ptr, credentials, 1u);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRelayService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrelayservice\\bdrelayservice.cpp", "bdRelayService::getCredentials", 0x5Eu, "Failed to write the parameter buffer for the task.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

