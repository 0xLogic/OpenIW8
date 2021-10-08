/*
==============
bdLootGeneration::bdLootGeneration
==============
*/

void __fastcall bdLootGeneration::bdLootGeneration(bdLootGeneration *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *const lobbyService)
{
  ??0bdLootGeneration@@QEAA@QEAVbdRemoteTaskManager@@QEAVbdLobbyService@@@Z(this, remoteTaskManager, lobbyService);
}

/*
==============
bdLootGeneration::openLootDrop
==============
*/

bdReference<bdRemoteTask> *__fastcall bdLootGeneration::openLootDrop(bdLootGeneration *this, bdReference<bdRemoteTask> *result, const bdLootGenerationOpenLootDropRequest *request, bdLootGenerationOpenLootDropResponse *response)
{
  return ?openLootDrop@bdLootGeneration@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdLootGenerationOpenLootDropRequest@@AEAVbdLootGenerationOpenLootDropResponse@@@Z(this, result, request, response);
}

/*
==============
bdLootGeneration::getPlayerState
==============
*/

bdReference<bdRemoteTask> *__fastcall bdLootGeneration::getPlayerState(bdLootGeneration *this, bdReference<bdRemoteTask> *result, const bdLootGenerationGetPlayerStateRequest *request, bdLootGenerationGetPlayerStateResponse *response)
{
  return ?getPlayerState@bdLootGeneration@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdLootGenerationGetPlayerStateRequest@@AEAVbdLootGenerationGetPlayerStateResponse@@@Z(this, result, request, response);
}

/*
==============
bdLootGeneration::~bdLootGeneration
==============
*/

void __fastcall bdLootGeneration::~bdLootGeneration(bdLootGeneration *this)
{
  ??1bdLootGeneration@@QEAA@XZ(this);
}

/*
==============
bdLootGeneration::bdLootGeneration
==============
*/
void bdLootGeneration::bdLootGeneration(bdLootGeneration *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *const lobbyService)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->m_lobbyService = lobbyService;
}

/*
==============
bdLootGeneration::~bdLootGeneration
==============
*/
void bdLootGeneration::~bdLootGeneration(bdLootGeneration *this)
{
  ;
}

/*
==============
bdLootGeneration::getPlayerState
==============
*/
bdReference<bdRemoteTask> *bdLootGeneration::getPlayerState(bdLootGeneration *this, bdReference<bdRemoteTask> *result, const bdLootGenerationGetPlayerStateRequest *request, bdLootGenerationGetPlayerStateResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> v9; 

  v9.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v9, 0xC3u, 2u, request, response, this->m_lobbyService);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLootGeneration", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlootgeneration\\bdlootgeneration.cpp", "bdLootGeneration::getPlayerState", 0x3Au, "Failed to start task: Error %i", v8);
  }
  m_ptr = v9.m_ptr;
  result->m_ptr = v9.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v9.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v9.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v9.m_ptr->~bdReferencable)(v9.m_ptr, 1i64);
  return result;
}

/*
==============
bdLootGeneration::openLootDrop
==============
*/
bdReference<bdRemoteTask> *bdLootGeneration::openLootDrop(bdLootGeneration *this, bdReference<bdRemoteTask> *result, const bdLootGenerationOpenLootDropRequest *request, bdLootGenerationOpenLootDropResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> v9; 

  v9.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v9, 0xC3u, 1u, request, response, this->m_lobbyService);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLootGeneration", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlootgeneration\\bdlootgeneration.cpp", "bdLootGeneration::openLootDrop", 0x26u, "Failed to start task: Error %i", v8);
  }
  m_ptr = v9.m_ptr;
  result->m_ptr = v9.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v9.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v9.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v9.m_ptr->~bdReferencable)(v9.m_ptr, 1i64);
  return result;
}

