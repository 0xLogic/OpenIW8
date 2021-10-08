/*
==============
bdABTesting::~bdABTesting
==============
*/

void __fastcall bdABTesting::~bdABTesting(bdABTesting *this)
{
  ??1bdABTesting@@QEAA@XZ(this);
}

/*
==============
bdABTesting::bdABTesting
==============
*/

void __fastcall bdABTesting::bdABTesting(bdABTesting *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *const lobbyService)
{
  ??0bdABTesting@@QEAA@QEAVbdRemoteTaskManager@@QEAVbdLobbyService@@@Z(this, remoteTaskManager, lobbyService);
}

/*
==============
bdABTesting::enroll
==============
*/

bdReference<bdRemoteTask> *__fastcall bdABTesting::enroll(bdABTesting *this, bdReference<bdRemoteTask> *result, bdABTestingEnrollRequest *request, bdABTestingEnrollResponse *response)
{
  return ?enroll@bdABTesting@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEAVbdABTestingEnrollRequest@@AEAVbdABTestingEnrollResponse@@@Z(this, result, request, response);
}

/*
==============
bdABTesting::bdABTesting
==============
*/
void bdABTesting::bdABTesting(bdABTesting *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *const lobbyService)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->m_lobbyService = lobbyService;
}

/*
==============
bdABTesting::~bdABTesting
==============
*/
void bdABTesting::~bdABTesting(bdABTesting *this)
{
  ;
}

/*
==============
bdABTesting::enroll
==============
*/
bdReference<bdRemoteTask> *bdABTesting::enroll(bdABTesting *this, bdReference<bdRemoteTask> *result, bdABTestingEnrollRequest *request, bdABTestingEnrollResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> v9; 
  bdReference<bdRemoteTask> *v10; 

  v10 = result;
  result->m_ptr = NULL;
  v9.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v9, 0xC2u, 1u, request, response, this->m_lobbyService);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdABTesting", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdabtesting\\bdabtesting.cpp", "bdABTesting::enroll", 0x2Fu, "Failed to start task: Error %i", v8);
  }
  if ( result == (bdReference<bdRemoteTask> *)&v9 )
    goto LABEL_10;
  if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
  m_ptr = v9.m_ptr;
  result->m_ptr = v9.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
LABEL_10:
    m_ptr = v9.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v9.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v9.m_ptr->~bdReferencable)(v9.m_ptr, 1i64);
  return result;
}

