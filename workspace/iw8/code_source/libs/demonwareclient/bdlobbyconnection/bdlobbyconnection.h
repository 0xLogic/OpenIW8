/*
==============
bdLobbyConnectionMigrationHeldBackTask::~bdLobbyConnectionMigrationHeldBackTask
==============
*/

void __fastcall bdLobbyConnectionMigrationHeldBackTask::~bdLobbyConnectionMigrationHeldBackTask(bdLobbyConnectionMigrationHeldBackTask *this)
{
  ??1bdLobbyConnectionMigrationHeldBackTask@@QEAA@XZ(this);
}

/*
==============
bdPendingBufferTransfer::operator delete
==============
*/

void __fastcall bdPendingBufferTransfer::operator delete(void *p)
{
  ??3bdPendingBufferTransfer@@SAXPEAX@Z(p);
}

/*
==============
bdLobbyConnection::operator delete
==============
*/

void __fastcall bdLobbyConnection::operator delete(void *p)
{
  ??3bdLobbyConnection@@SAXPEAX@Z(p);
}

/*
==============
bdLobbyConnection::operator delete
==============
*/
void bdLobbyConnection::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

/*
==============
bdLobbyConnectionMigrationHeldBackTask::~bdLobbyConnectionMigrationHeldBackTask
==============
*/
void bdLobbyConnectionMigrationHeldBackTask::~bdLobbyConnectionMigrationHeldBackTask(bdLobbyConnectionMigrationHeldBackTask *this)
{
  bdTaskByteBuffer *m_ptr; 

  m_ptr = this->m_task.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( this->m_task.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))this->m_task.m_ptr->~bdReferencable)(this->m_task.m_ptr, 1i64);
    this->m_task.m_ptr = NULL;
  }
}

/*
==============
bdPendingBufferTransfer::operator delete
==============
*/
void bdPendingBufferTransfer::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

