/*
==============
bdRemoteTaskManager::startTask
==============
*/

bdLobbyErrorCode __fastcall bdRemoteTaskManager::startTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> *newTask, bdTaskParams *taskParams)
{
  return ?startTask@bdRemoteTaskManager@@QEAA?AW4bdLobbyErrorCode@@AEAV?$bdReference@VbdRemoteTask@@@@AEAVbdTaskParams@@@Z(this, newTask, taskParams);
}

/*
==============
bdRemoteTaskManager::handleAsyncResult
==============
*/

void __fastcall bdRemoteTaskManager::handleAsyncResult(bdRemoteTaskManager *this, const bdReference<bdByteBuffer> buffer)
{
  ?handleAsyncResult@bdRemoteTaskManager@@IEAAXV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRemoteTaskManager::startRESTTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRemoteTaskManager::startRESTTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request, bdRESTResponse *response)
{
  return ?startRESTTask@bdRemoteTaskManager@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdRESTRequest@@PEAVbdRESTResponse@@@Z(this, result, request, response);
}

/*
==============
bdRemoteTaskManager::initTaskBuffer
==============
*/

void __fastcall bdRemoteTaskManager::initTaskBuffer(bdReference<bdTaskByteBuffer> *buffer, const unsigned __int8 serviceID, const unsigned __int8 taskID)
{
  ?initTaskBuffer@bdRemoteTaskManager@@SAXAEAV?$bdReference@VbdTaskByteBuffer@@@@EE@Z(buffer, serviceID, taskID);
}

/*
==============
bdRemoteTaskManager::bdRemoteTaskManager
==============
*/

void __fastcall bdRemoteTaskManager::bdRemoteTaskManager(bdRemoteTaskManager *this, bdReference<bdLobbyConnection> connection, const bool useEncryption)
{
  ??0bdRemoteTaskManager@@QEAA@V?$bdReference@VbdLobbyConnection@@@@_N@Z(this, connection, useEncryption);
}

/*
==============
bdRemoteTaskManager::getTaskParamsMaxBufferSize
==============
*/

unsigned int __fastcall bdRemoteTaskManager::getTaskParamsMaxBufferSize(bdRemoteTaskManager *this)
{
  return ?getTaskParamsMaxBufferSize@bdRemoteTaskManager@@QEBAIXZ(this);
}

/*
==============
bdRemoteTaskManager::startLSGTask
==============
*/

bdLobbyErrorCode __fastcall bdRemoteTaskManager::startLSGTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> *newTask, const unsigned __int8 serviceID, const unsigned __int8 taskID, const void *const queryParams, const unsigned int queryParamsSize)
{
  return ?startLSGTask@bdRemoteTaskManager@@QEAA?AW4bdLobbyErrorCode@@AEAV?$bdReference@VbdRemoteTask@@@@EEQEBXI@Z(this, newTask, serviceID, taskID, queryParams, queryParamsSize);
}

/*
==============
bdRemoteTaskManager::sendWithTaskParams
==============
*/

bdLobbyErrorCode __fastcall bdRemoteTaskManager::sendWithTaskParams(bdRemoteTaskManager *this, bdReference<bdRemoteTask> newTask, bdTaskParams *taskParams)
{
  return ?sendWithTaskParams@bdRemoteTaskManager@@IEAA?AW4bdLobbyErrorCode@@V?$bdReference@VbdRemoteTask@@@@AEAVbdTaskParams@@@Z(this, newTask, taskParams);
}

/*
==============
bdRemoteTaskManager::getConnectionID
==============
*/

unsigned __int64 __fastcall bdRemoteTaskManager::getConnectionID(bdRemoteTaskManager *this)
{
  return ?getConnectionID@bdRemoteTaskManager@@QEBA_KXZ(this);
}

/*
==============
bdRemoteTaskManager::~bdRemoteTaskManager
==============
*/

void __fastcall bdRemoteTaskManager::~bdRemoteTaskManager(bdRemoteTaskManager *this)
{
  ??1bdRemoteTaskManager@@UEAA@XZ(this);
}

/*
==============
bdRemoteTaskManager::startStructTask
==============
*/

bdLobbyErrorCode __fastcall bdRemoteTaskManager::startStructTask(bdRemoteTaskManager *this, bdReference<bdStructBufferTask> *newTask, const unsigned __int8 serviceID, const unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response, bdLobbyService *lobbyService)
{
  return ?startStructTask@bdRemoteTaskManager@@QEAA?AW4bdLobbyErrorCode@@AEAV?$bdReference@VbdStructBufferTask@@@@EEPEBVbdStructBufferSerializable@@PEAV4@PEAVbdLobbyService@@@Z(this, newTask, serviceID, taskID, request, response, lobbyService);
}

/*
==============
bdRemoteTaskManager::handleLSGTaskReply
==============
*/

void __fastcall bdRemoteTaskManager::handleLSGTaskReply(bdRemoteTaskManager *this, const bdReference<bdByteBuffer> buffer)
{
  ?handleLSGTaskReply@bdRemoteTaskManager@@IEAAXV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRemoteTaskManager::cleanUpAsyncState
==============
*/

void __fastcall bdRemoteTaskManager::cleanUpAsyncState(bdRemoteTaskManager *this)
{
  ?cleanUpAsyncState@bdRemoteTaskManager@@IEAAXXZ(this);
}

/*
==============
bdRemoteTaskManager::startStreamingTask
==============
*/

bdLobbyErrorCode __fastcall bdRemoteTaskManager::startStreamingTask(bdRemoteTaskManager *this, bdReference<bdStreamingTask> *newTask, bdReference<bdTaskByteBuffer> *queryParams)
{
  return ?startStreamingTask@bdRemoteTaskManager@@QEAA?AW4bdLobbyErrorCode@@AEAV?$bdReference@VbdStreamingTask@@@@AEAV?$bdReference@VbdTaskByteBuffer@@@@@Z(this, newTask, queryParams);
}

/*
==============
bdRemoteTaskManager::startStreamingTask
==============
*/

bdLobbyErrorCode __fastcall bdRemoteTaskManager::startStreamingTask(bdRemoteTaskManager *this, bdReference<bdStreamingTask> *newTask, bdTaskParams *taskParams)
{
  return ?startStreamingTask@bdRemoteTaskManager@@QEAA?AW4bdLobbyErrorCode@@AEAV?$bdReference@VbdStreamingTask@@@@AEAVbdTaskParams@@@Z(this, newTask, taskParams);
}

/*
==============
bdRemoteTaskManager::handleTaskReply
==============
*/

void __fastcall bdRemoteTaskManager::handleTaskReply(bdRemoteTaskManager *this, const bdReference<bdByteBuffer> buffer)
{
  ?handleTaskReply@bdRemoteTaskManager@@IEAAXV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRemoteTaskManager::isConnectionMigrationSupported
==============
*/

bool __fastcall bdRemoteTaskManager::isConnectionMigrationSupported(bdRemoteTaskManager *this)
{
  return ?isConnectionMigrationSupported@bdRemoteTaskManager@@QEBA_NXZ(this);
}

/*
==============
bdRemoteTaskManager::startTask
==============
*/

bdLobbyErrorCode __fastcall bdRemoteTaskManager::startTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> *newTask, bdReference<bdTaskByteBuffer> *queryParams)
{
  return ?startTask@bdRemoteTaskManager@@QEAA?AW4bdLobbyErrorCode@@AEAV?$bdReference@VbdRemoteTask@@@@AEAV?$bdReference@VbdTaskByteBuffer@@@@@Z(this, newTask, queryParams);
}

/*
==============
bdRemoteTaskManager::setRESTTaskManager
==============
*/

void __fastcall bdRemoteTaskManager::setRESTTaskManager(bdRemoteTaskManager *this, bdRESTTaskManager *restTaskManager)
{
  ?setRESTTaskManager@bdRemoteTaskManager@@QEAAXPEAVbdRESTTaskManager@@@Z(this, restTaskManager);
}

/*
==============
bdRemoteTaskManager::sendTask
==============
*/

bdLobbyErrorCode __fastcall bdRemoteTaskManager::sendTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> newTask, bdReference<bdTaskByteBuffer> *queryParams)
{
  return ?sendTask@bdRemoteTaskManager@@IEAA?AW4bdLobbyErrorCode@@V?$bdReference@VbdRemoteTask@@@@AEAV?$bdReference@VbdTaskByteBuffer@@@@@Z(this, newTask, queryParams);
}

/*
==============
bdRemoteTaskManager::bdRemoteTaskManager
==============
*/
void bdRemoteTaskManager::bdRemoteTaskManager(bdRemoteTaskManager *this, bdReference<bdLobbyConnection> connection, const bool useEncryption)
{
  unsigned int PowerOf2; 
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node **v12; 
  unsigned int v13; 
  bdHashMap<unsigned __int64,bdReference<bdByteBuffer>,bdHashingClass>::Node **v18; 
  bdLobbyConnection_vtbl *v19; 

  this->__vftable = (bdRemoteTaskManager_vtbl *)&bdRemoteTaskManager::`vftable';
  this->m_tasks.m_head = NULL;
  this->m_tasks.m_tail = NULL;
  this->m_tasks.m_size = 0;
  this->m_asyncTasks.m_numIterators.m_value._My_val = 0;
  this->m_asyncTasks.m_size = 0;
  PowerOf2 = bdBitOperations::nextPowerOf2(4u);
  this->m_asyncTasks.m_capacity = PowerOf2;
  this->m_asyncTasks.m_loadFactor = 0.75;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm0, xmm0, cs:__real@3f400000
    vcvttss2si rcx, xmm0
  }
  this->m_asyncTasks.m_threshold = _RCX;
  v12 = (bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node **)bdMemory::allocate(8i64 * PowerOf2);
  this->m_asyncTasks.m_map = v12;
  memset_0(v12, 0, 8i64 * this->m_asyncTasks.m_capacity);
  this->m_asyncResults.m_numIterators.m_value._My_val = 0;
  this->m_asyncResults.m_size = 0;
  v13 = bdBitOperations::nextPowerOf2(4u);
  this->m_asyncResults.m_capacity = v13;
  this->m_asyncResults.m_loadFactor = 0.75;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, cs:__real@3f400000
    vcvttss2si rcx, xmm1
  }
  this->m_asyncResults.m_threshold = _RCX;
  v18 = (bdHashMap<unsigned __int64,bdReference<bdByteBuffer>,bdHashingClass>::Node **)bdMemory::allocate(8i64 * v13);
  this->m_asyncResults.m_map = v18;
  memset_0(v18, 0, 8i64 * this->m_asyncResults.m_capacity);
  v19 = connection.m_ptr->__vftable;
  this->m_lobbyConnection.m_ptr = (bdLobbyConnection *)connection.m_ptr->__vftable;
  if ( v19 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v19->sendTask, 1u);
  this->m_encryptedConnection = useEncryption;
  this->m_connectionID = 0i64;
  this->m_restTaskManager = NULL;
  if ( connection.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&connection.m_ptr->sendTask, 0xFFFFFFFF) == 1 )
  {
    if ( connection.m_ptr->__vftable )
      (*(void (__fastcall **)(bdLobbyConnection_vtbl *, __int64))connection.m_ptr->~bdReferencable)(connection.m_ptr->__vftable, 1i64);
    connection.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdRemoteTaskManager::~bdRemoteTaskManager
==============
*/
void bdRemoteTaskManager::~bdRemoteTaskManager(bdRemoteTaskManager *this)
{
  bdLinkedList<bdReference<bdRemoteTask> >::Node *m_head; 
  bdLinkedList<bdReference<bdRemoteTask> >::Node *m_prev; 
  bdLobbyConnection *m_ptr; 
  bdLobbyConnection *v5; 
  __int64 v6; 

  v6 = -2i64;
  this->__vftable = (bdRemoteTaskManager_vtbl *)&bdRemoteTaskManager::`vftable';
  while ( this->m_tasks.m_size )
  {
    bdHandleAssert(this->m_tasks.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdRemoteTask> >::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.", v6);
    this->m_tasks.m_head->m_data.m_ptr->m_errorCode = BD_START_TASK_FAILED;
    bdHandleAssert(this->m_tasks.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdRemoteTask> >::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
    this->m_tasks.m_head->m_data.m_ptr->m_status = BD_FAILED;
    m_head = this->m_tasks.m_head;
    if ( m_head )
    {
      this->m_tasks.m_head = m_head->m_next;
      m_prev = m_head->m_prev;
      if ( m_head == this->m_tasks.m_tail )
        this->m_tasks.m_tail = m_prev;
      else
        m_head->m_next->m_prev = m_prev;
      if ( m_head->m_data.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_head->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( m_head->m_data.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))m_head->m_data.m_ptr->~bdReferencable)(m_head->m_data.m_ptr, 1i64);
        m_head->m_data.m_ptr = NULL;
      }
      bdMemory::deallocate(m_head);
      --this->m_tasks.m_size;
    }
  }
  m_ptr = this->m_lobbyConnection.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_lobbyConnection.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdLobbyConnection *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_lobbyConnection.m_ptr = NULL;
  }
  bdHashMap<unsigned __int64,bdReference<bdByteBuffer>,bdHashingClass>::clear(&this->m_asyncResults);
  bdMemory::deallocate(this->m_asyncResults.m_map);
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::~bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>(&this->m_asyncTasks);
  bdLinkedList<bdReference<bdRemoteTask>>::~bdLinkedList<bdReference<bdRemoteTask>>(&this->m_tasks);
}

/*
==============
bdRemoteTaskManager::cleanUpAsyncState
==============
*/
void bdRemoteTaskManager::cleanUpAsyncState(bdRemoteTaskManager *this, __int64 a2, unsigned __int8 *m_map)
{
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node **v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned __int64 m_capacity; 
  __int64 v8; 
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node **v9; 
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node *v10; 
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node *m_next; 
  unsigned int v12; 
  __int64 v13; 
  _QWORD *v14; 
  _QWORD *v15; 
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node *v16; 
  unsigned int v17; 
  bdHashMap<unsigned __int64,bdReference<bdByteBuffer>,bdHashingClass>::Node **v18; 
  bdHashMap<unsigned __int64,bdReference<bdByteBuffer>,bdHashingClass>::Node *v19; 
  unsigned __int8 *p_m_key; 
  unsigned int v21; 
  __int64 v22; 

  v4 = (bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node **)"bdRemoteTaskManager::cleanUpAsyncState";
  v5 = 0;
  if ( this->m_asyncTasks.m_size )
  {
    v6 = 0;
    m_capacity = this->m_asyncTasks.m_capacity;
    if ( (_DWORD)m_capacity )
    {
      m_map = (unsigned __int8 *)this->m_asyncTasks.m_map;
      do
      {
        if ( *(_QWORD *)&m_map[8 * v6] )
          break;
        ++v6;
      }
      while ( v6 < (unsigned int)m_capacity );
    }
    v8 = v6;
    v9 = this->m_asyncTasks.m_map;
    if ( v9[v8] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_asyncTasks.m_numIterators, 1u);
      v9 = this->m_asyncTasks.m_map;
    }
    v10 = v9[v8];
    if ( v10 )
    {
      while ( ((unsigned int (__fastcall *)(bdRemoteTask *, unsigned __int64, unsigned __int8 *, bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node **))v10->m_data.m_ptr->getStatus)(v10->m_data.m_ptr, m_capacity, m_map, v4) == 1 )
      {
        if ( v10->m_next )
        {
          v10 = v10->m_next;
LABEL_19:
          if ( !v10 )
            goto LABEL_36;
        }
        else
        {
          m_map = (unsigned __int8 *)this->m_asyncTasks.m_capacity;
          m_capacity = ((HIBYTE(v10->m_key) ^ (16777619 * (BYTE6(v10->m_key) ^ (16777619 * (BYTE5(v10->m_key) ^ (16777619 * (BYTE4(v10->m_key) ^ (16777619 * (BYTE3(v10->m_key) ^ (16777619 * (BYTE2(v10->m_key) ^ (16777619 * (BYTE1(v10->m_key) ^ (16777619 * LOBYTE(v10->m_key))))))))))))))) & (unsigned int)((_DWORD)m_map - 1)) + 1;
          if ( (unsigned int)m_capacity >= (unsigned int)m_map )
          {
LABEL_35:
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_asyncTasks.m_numIterators, 0xFFFFFFFF);
            goto LABEL_36;
          }
          while ( 1 )
          {
            v10 = this->m_asyncTasks.m_map[m_capacity];
            if ( v10 )
              break;
            m_capacity = (unsigned int)(m_capacity + 1);
            if ( (unsigned int)m_capacity >= (unsigned int)m_map )
              goto LABEL_35;
          }
        }
      }
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::cleanUpAsyncState", 0x17Du, "Removing asynchronous task that is no longer BD_PENDING (transaction ID: %I64u).", v10->m_key);
      bdHandleAssert(this->m_asyncTasks.m_numIterators.m_value._My_val == 1, "(m_numIterators == 1)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned __int64,class bdReference<class bdRemoteTask>,class bdHashingClass>::remove", 0xF9u, "bdHashMap::remove, more than one iterator held while removing from hashmap");
      m_next = v10->m_next;
      if ( !m_next )
      {
        v12 = this->m_asyncTasks.m_capacity;
        v13 = ((HIBYTE(v10->m_key) ^ (16777619 * (BYTE6(v10->m_key) ^ (16777619 * (BYTE5(v10->m_key) ^ (16777619 * (BYTE4(v10->m_key) ^ (16777619 * (BYTE3(v10->m_key) ^ (16777619 * (BYTE2(v10->m_key) ^ (16777619 * (BYTE1(v10->m_key) ^ (16777619 * LOBYTE(v10->m_key))))))))))))))) & (v12 - 1)) + 1;
        if ( (unsigned int)v13 >= v12 )
        {
LABEL_15:
          m_next = NULL;
          _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_asyncTasks.m_numIterators, 0xFFFFFFFF);
        }
        else
        {
          v4 = this->m_asyncTasks.m_map;
          while ( 1 )
          {
            m_next = v4[v13];
            if ( m_next )
              break;
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= v12 )
              goto LABEL_15;
          }
        }
      }
      m_map = (unsigned __int8 *)v10;
      v10 = m_next;
      m_capacity = (unsigned __int64)&this->m_asyncTasks.m_map[(m_map[15] ^ (16777619 * (m_map[14] ^ (16777619 * (m_map[13] ^ (16777619 * (m_map[12] ^ (16777619 * (m_map[11] ^ (16777619 * (m_map[10] ^ (16777619 * ((16777619 * m_map[8]) ^ m_map[9]))))))))))))) & (this->m_asyncTasks.m_capacity - 1)];
      v14 = *(_QWORD **)m_capacity;
      v15 = NULL;
      if ( *(_QWORD *)m_capacity )
      {
        while ( *((_QWORD *)m_map + 1) != v14[1] )
        {
          v15 = v14;
          v14 = (_QWORD *)v14[2];
          if ( !v14 )
            goto LABEL_19;
        }
        v16 = (bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node *)v14[2];
        if ( v15 )
          v15[2] = v16;
        else
          *(_QWORD *)m_capacity = v16;
        if ( *v14 && _InterlockedExchangeAdd((volatile signed __int32 *)(*v14 + 8i64), 0xFFFFFFFF) == 1 )
        {
          if ( *v14 )
            (**(void (__fastcall ***)(_QWORD, __int64))*v14)(*v14, 1i64);
          *v14 = 0i64;
        }
        bdMemory::deallocate(v14);
        --this->m_asyncTasks.m_size;
      }
      goto LABEL_19;
    }
  }
LABEL_36:
  if ( !this->m_tasks.m_size && !this->m_asyncTasks.m_size && (int)this->m_asyncResults.m_size > 0 )
  {
    v17 = this->m_asyncResults.m_capacity;
    if ( v17 )
    {
      do
      {
        if ( this->m_asyncResults.m_map[v5] )
          break;
        ++v5;
      }
      while ( v5 < v17 );
    }
    v18 = this->m_asyncResults.m_map;
    if ( v18[v5] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_asyncResults.m_numIterators, 1u);
      v18 = this->m_asyncResults.m_map;
    }
    v19 = v18[v5];
    if ( v19 )
    {
      while ( 1 )
      {
        do
        {
          p_m_key = (unsigned __int8 *)&v19->m_key;
          bdLogMessage(BD_LOG_INFO, "info/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::cleanUpAsyncState", 0x18Fu, "Detected orphaned asynchronous result (transaction ID: %I64u).  Discarding.", v19->m_key);
          v19 = v19->m_next;
        }
        while ( v19 );
        v21 = this->m_asyncResults.m_capacity;
        v22 = ((p_m_key[7] ^ (16777619 * (p_m_key[6] ^ (16777619 * (p_m_key[5] ^ (16777619 * (p_m_key[4] ^ (16777619 * (p_m_key[3] ^ (16777619 * (p_m_key[2] ^ (16777619 * (p_m_key[1] ^ (16777619 * *p_m_key)))))))))))))) & (v21 - 1)) + 1;
        if ( (unsigned int)v22 >= v21 )
          break;
        while ( 1 )
        {
          v19 = this->m_asyncResults.m_map[v22];
          if ( v19 )
            break;
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= v21 )
            goto LABEL_49;
        }
      }
LABEL_49:
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_asyncResults.m_numIterators, 0xFFFFFFFF);
    }
    bdHashMap<unsigned __int64,bdReference<bdByteBuffer>,bdHashingClass>::clear(&this->m_asyncResults);
  }
}

/*
==============
bdRemoteTaskManager::getConnectionID
==============
*/
unsigned __int64 bdRemoteTaskManager::getConnectionID(bdRemoteTaskManager *this)
{
  return this->m_connectionID;
}

/*
==============
bdRemoteTaskManager::getTaskParamsMaxBufferSize
==============
*/
unsigned int bdRemoteTaskManager::getTaskParamsMaxBufferSize(bdRemoteTaskManager *this)
{
  return bdLobbyConnection::getMaxSendMessageSizeWithoutOverhead(this->m_lobbyConnection.m_ptr);
}

/*
==============
bdRemoteTaskManager::handleAsyncResult
==============
*/
void bdRemoteTaskManager::handleAsyncResult(bdRemoteTaskManager *this, const bdReference<bdByteBuffer> buffer)
{
  volatile signed __int32 *v4; 
  __int64 *v5; 
  __int64 v6; 
  int v7; 
  void (__fastcall *v8)(volatile signed __int32 *, __int64 *); 
  bdByteBuffer_vtbl *v9; 
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node **v10; 
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node *v11; 
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node *v12; 
  bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::Node *m_next; 
  __int64 v14[2]; 
  unsigned __int64 u; 
  volatile signed __int32 *v16; 

  v14[1] = -2i64;
  u = 0i64;
  v4 = NULL;
  v16 = NULL;
  if ( bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &u) )
  {
    if ( this->m_asyncTasks.m_size && (v5 = (__int64 *)this->m_asyncTasks.m_map[(this->m_asyncTasks.m_capacity - 1) & (HIBYTE(u) ^ (16777619 * (BYTE6(u) ^ (16777619 * (BYTE5(u) ^ (16777619 * (BYTE4(u) ^ (16777619 * (BYTE3(u) ^ (16777619 * (BYTE2(u) ^ (16777619 * (BYTE1(u) ^ (16777619 * (unsigned __int8)u))))))))))))))]) != NULL )
    {
      while ( u != v5[1] )
      {
        v5 = (__int64 *)v5[2];
        if ( !v5 )
          goto LABEL_6;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_asyncTasks.m_numIterators, 1u);
      if ( v5 != (__int64 *)&v16 )
      {
        v6 = *v5;
        v16 = (volatile signed __int32 *)v6;
        if ( v6 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 1u);
      }
      bdHandleAssert(this->m_asyncTasks.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned __int64,class bdReference<class bdRemoteTask>,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_asyncTasks.m_numIterators, 0xFFFFFFFF);
      v4 = v16;
      v7 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8i64))(v16);
      if ( v7 == 1 )
      {
        v8 = *(void (__fastcall **)(volatile signed __int32 *, __int64 *))(*(_QWORD *)v4 + 24i64);
        v9 = buffer.m_ptr->__vftable;
        v14[0] = (__int64)v9;
        if ( v9 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v9->allocateBuffer, 1u);
          v4 = v16;
        }
        v8(v4, v14);
        if ( (*(unsigned int (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8i64))(v4) != 1 )
        {
          bdHandleAssert(this->m_asyncTasks.m_numIterators.m_value._My_val == 0, "(m_numIterators == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned __int64,class bdReference<class bdRemoteTask>,class bdHashingClass>::remove", 0xA5u, "bdHashMap::remove, another iterator is being held while removing from hashmap");
          v10 = &this->m_asyncTasks.m_map[(this->m_asyncTasks.m_capacity - 1) & (HIBYTE(u) ^ (16777619 * (BYTE6(u) ^ (16777619 * (BYTE5(u) ^ (16777619 * (BYTE4(u) ^ (16777619 * (BYTE3(u) ^ (16777619 * (BYTE2(u) ^ (16777619 * (BYTE1(u) ^ (16777619 * (unsigned __int8)u))))))))))))))];
          v11 = *v10;
          v12 = NULL;
          if ( *v10 )
          {
            while ( u != v11->m_key )
            {
              v12 = v11;
              v11 = v11->m_next;
              if ( !v11 )
              {
                v4 = v16;
                goto LABEL_32;
              }
            }
            m_next = v11->m_next;
            if ( v12 )
              v12->m_next = m_next;
            else
              *v10 = m_next;
            if ( v11->m_data.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
            {
              if ( v11->m_data.m_ptr )
                ((void (__fastcall *)(bdRemoteTask *, __int64))v11->m_data.m_ptr->~bdReferencable)(v11->m_data.m_ptr, 1i64);
              v11->m_data.m_ptr = NULL;
            }
            bdMemory::deallocate(v11);
            --this->m_asyncTasks.m_size;
          }
          v4 = v16;
        }
      }
      else
      {
        bdLogMessage(BD_LOG_INFO, "info/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::handleAsyncResult", 0x15Au, "Discarding asynchronous result for bdRemoteTask that is no longer in BD_PENDING (status: %i).", v7);
      }
    }
    else
    {
LABEL_6:
      if ( this->m_tasks.m_size )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::handleAsyncResult", 0x165u, "Received asynchronous result for task that might not be complete yet.  Storing for later (transaction ID: %I64u)", u);
        bdHashMap<unsigned __int64,bdReference<bdByteBuffer>,bdHashingClass>::put(&this->m_asyncResults, &u, (const bdReference<bdByteBuffer> *)buffer.m_ptr);
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::handleAsyncResult", 0x16Cu, "Received asynchronous result for unknown task (transactionID: %I64u)", u);
      }
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::handleAsyncResult", 0x171u, "Failed to deserialize asynchronous task result!");
  }
LABEL_32:
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v16)((__int64)v16, 1i64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdRemoteTaskManager::handleLSGTaskReply
==============
*/
void bdRemoteTaskManager::handleLSGTaskReply(bdRemoteTaskManager *this, const bdReference<bdByteBuffer> buffer)
{
  char v4; 
  bdRemoteTask *v5; 
  bdRemoteTask *m_ptr; 
  bdByteBuffer *v7; 
  void (__fastcall *handleAsyncTaskReply)(bdRemoteTask *, const bdReference<bdByteBuffer>); 
  bdByteBuffer *v9; 
  __int64 v10; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *v12; 
  unsigned __int64 key; 
  bdReference<bdRemoteTask> v14; 
  unsigned __int64 v15[4]; 
  char v16; 
  bdReference<bdByteBuffer> value; 
  bdRemoteTask *v18; 

  v15[1] = -2i64;
  if ( this->m_tasks.m_size )
  {
    bdHandleAssert(this->m_tasks.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdRemoteTask> >::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
    m_ptr = this->m_tasks.m_head->m_data.m_ptr;
    v18 = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = v18;
    }
    v4 = 2;
    v5 = m_ptr;
  }
  else
  {
    v10 = 0i64;
    v4 = 1;
    v5 = NULL;
    m_ptr = v18;
  }
  v14.m_ptr = v5;
  if ( v5 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
    m_ptr = v18;
  }
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    v16 = v4;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v18->~bdReferencable)(v18, 1i64);
      v4 = v16;
    }
  }
  if ( (v4 & 1) != 0 && v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1i64);
  if ( v5 && v5->getStatus(v5) == BD_PENDING )
  {
    v7 = (bdByteBuffer *)buffer.m_ptr->__vftable;
    buffera.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    bdRemoteTask::handleTaskReply(v5, (const bdReference<bdByteBuffer>)&buffera);
    if ( v5->getStatus(v5) == BD_PENDING )
    {
      value.m_ptr = NULL;
      key = bdRemoteTask::getTransactionID(v5);
      if ( bdHashMap<unsigned __int64,bdReference<bdByteBuffer>,bdHashingClass>::remove(&this->m_asyncResults, &key, &value) )
      {
        handleAsyncTaskReply = v5->handleAsyncTaskReply;
        v9 = value.m_ptr;
        v12 = value.m_ptr;
        if ( value.m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->m_refCount, 1u);
          v9 = value.m_ptr;
        }
        ((void (__fastcall *)(bdRemoteTask *, bdByteBuffer **))handleAsyncTaskReply)(v5, &v12);
      }
      else
      {
        v15[0] = bdRemoteTask::getTransactionID(v5);
        bdHashMap<unsigned __int64,bdReference<bdRemoteTask>,bdHashingClass>::put(&this->m_asyncTasks, v15, &v14);
        v9 = value.m_ptr;
      }
      if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    }
  }
  bdLinkedList<bdReference<bdRemoteTask>>::removeHead(&this->m_tasks);
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v5->~bdReferencable)(v5, 1i64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdRemoteTaskManager::handleTaskReply
==============
*/
void bdRemoteTaskManager::handleTaskReply(bdRemoteTaskManager *this, const bdReference<bdByteBuffer> buffer)
{
  bdRemoteTask *m_ptr; 
  bdByteBuffer *v5; 
  unsigned __int64 v6; 
  bdReference<bdByteBuffer> results; 
  unsigned __int64 data; 

  bdHandleAssert(this->m_tasks.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdRemoteTask> >::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
  m_ptr = this->m_tasks.m_head->m_data.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  if ( m_ptr && m_ptr->getStatus(m_ptr) == BD_PENDING )
  {
    if ( bdByteBuffer::read((bdByteBuffer *)buffer.m_ptr->__vftable, &data, 8u) )
    {
      v5 = (bdByteBuffer *)buffer.m_ptr->__vftable;
      results.m_ptr = v5;
      if ( v5 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
      v6 = data;
      bdRemoteTask::stop(m_ptr, (const bdReference<bdByteBuffer>)&results, data);
      bdLogMessage(BD_LOG_INFO, "info/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::handleTaskReply", 0x136u, "Received reply on\nconnection ID : %I64u\ntransaction ID: %I64u", this->m_connectionID, v6);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::handleTaskReply", 0x13Au, "Failed to retrieve transaction ID");
    }
  }
  bdLinkedList<bdReference<bdRemoteTask>>::removeHead(&this->m_tasks);
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdRemoteTaskManager::initTaskBuffer
==============
*/
void bdRemoteTaskManager::initTaskBuffer(bdReference<bdTaskByteBuffer> *buffer, const unsigned __int8 serviceID, const unsigned __int8 taskID)
{
  unsigned __int8 data; 

  data = serviceID;
  bdByteBuffer::write(buffer->m_ptr, &data, 1u);
  bdByteBuffer::writeUByte8(buffer->m_ptr, taskID);
  buffer->m_ptr->m_serviceId = data;
  buffer->m_ptr->m_taskId = taskID;
}

/*
==============
bdRemoteTaskManager::isConnectionMigrationSupported
==============
*/
bool bdRemoteTaskManager::isConnectionMigrationSupported(bdRemoteTaskManager *this)
{
  return bdLobbyConnection::isConnectionMigrationSupported(this->m_lobbyConnection.m_ptr);
}

/*
==============
bdRemoteTaskManager::sendTask
==============
*/
__int64 bdRemoteTaskManager::sendTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> newTask, bdReference<bdTaskByteBuffer> *queryParams)
{
  unsigned int v7; 
  bdLobbyConnection *m_ptr; 
  bool (__fastcall *sendTask)(bdLobbyConnection *, bdReference<bdTaskByteBuffer>, unsigned int, const bool); 
  bool m_encryptedConnection; 
  unsigned int DataSize; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v15; 

  v7 = 0;
  if ( !bdByteBuffer::writeNoType(queryParams->m_ptr) )
    goto LABEL_6;
  m_ptr = this->m_lobbyConnection.m_ptr;
  sendTask = m_ptr->sendTask;
  m_encryptedConnection = this->m_encryptedConnection;
  DataSize = bdByteBuffer::getDataSize(queryParams->m_ptr);
  v12 = queryParams->m_ptr;
  v15 = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  if ( ((unsigned __int8 (__fastcall *)(bdLobbyConnection *, bdTaskByteBuffer **, _QWORD, bool, __int64))sendTask)(m_ptr, &v15, DataSize, m_encryptedConnection, -2i64) )
  {
    LOBYTE(newTask.m_ptr->__vftable[2].~bdReferencable) = queryParams->m_ptr->m_serviceId;
    BYTE1(newTask.m_ptr->__vftable[2].~bdReferencable) = queryParams->m_ptr->m_taskId;
    bdLinkedList<bdReference<bdRemoteTask>>::addTail(&this->m_tasks, (const bdReference<bdRemoteTask> *)newTask.m_ptr);
    __asm { vxorps  xmm1, xmm1, xmm1 }
    (*((void (__fastcall **)(bdRemoteTask_vtbl *))newTask.m_ptr->~bdReferencable + 4))(newTask.m_ptr->__vftable);
  }
  else
  {
LABEL_6:
    v7 = 3;
    HIDWORD(newTask.m_ptr->handleAsyncTaskReply) = 3;
    LODWORD(newTask.m_ptr->__vftable[1].start) = 3;
  }
  if ( newTask.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->getStatus, 0xFFFFFFFF) == 1 )
  {
    if ( newTask.m_ptr->__vftable )
      (*(void (__fastcall **)(bdRemoteTask_vtbl *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr->__vftable, 1i64);
    newTask.m_ptr->__vftable = NULL;
  }
  return v7;
}

/*
==============
bdRemoteTaskManager::sendWithTaskParams
==============
*/
__int64 bdRemoteTaskManager::sendWithTaskParams(bdRemoteTaskManager *this, bdReference<bdRemoteTask> newTask, bdTaskParams *taskParams)
{
  unsigned int v6; 
  int *p_m_arrayWriteCount; 
  bdByteBuffer *v8; 
  bdTaskByteBuffer *m_ptr; 
  bdRemoteTask *v10; 
  bdLobbyErrorCode v11; 
  bdTaskResult *m_taskResults; 
  __int64 m_maxResults; 
  bdRemoteTask *v14; 
  __int64 v16; 
  bdReference<bdTaskByteBuffer> queryParams; 
  bdReference<bdRemoteTask> newTaska; 

  v6 = 5;
  p_m_arrayWriteCount = &taskParams->m_arrayWriteCount;
  if ( (taskParams->m_isWritingArray || *p_m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", *p_m_arrayWriteCount), taskParams->m_isWritingArray) || *p_m_arrayWriteCount) || !taskParams->m_serializeOk || (v8 = taskParams->m_buffer.m_ptr) == NULL || !v8->m_data )
  {
    LODWORD(v16) = taskParams->m_serviceID;
    bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::sendWithTaskParams", 0xE4u, "Service:Task ID (%u:%u): Failed to serialize task buffer.", v16, taskParams->m_taskID);
  }
  else
  {
    m_ptr = taskParams->m_taskBuffer.m_ptr;
    queryParams.m_ptr = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = queryParams.m_ptr;
    }
    v10 = (bdRemoteTask *)newTask.m_ptr->__vftable;
    newTaska.m_ptr = v10;
    if ( v10 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
      m_ptr = queryParams.m_ptr;
    }
    v11 = bdRemoteTaskManager::sendTask(this, (bdReference<bdRemoteTask>)&newTaska, &queryParams);
    v6 = v11;
    if ( v11 )
    {
      LODWORD(v16) = v11;
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::sendWithTaskParams", 0xDDu, "Failed to start task: Error %i", v16);
    }
    else
    {
      m_taskResults = taskParams->m_taskResults;
      m_maxResults = taskParams->m_maxResults;
      if ( taskParams->m_serializeOk && (m_taskResults || taskParams->m_taskResultRefs) && (_DWORD)m_maxResults )
      {
        v14 = (bdRemoteTask *)newTask.m_ptr->__vftable;
        if ( m_taskResults )
          bdRemoteTask::setTaskResult(v14, m_taskResults, m_maxResults);
        else
          bdRemoteTask::setTaskResultList(v14, taskParams->m_taskResultRefs, m_maxResults);
      }
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64, m_maxResults);
  }
  if ( newTask.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->getStatus, 0xFFFFFFFF) == 1 )
  {
    if ( newTask.m_ptr->__vftable )
      (*(void (__fastcall **)(bdRemoteTask_vtbl *, __int64, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr->__vftable, 1i64, m_maxResults);
    newTask.m_ptr->__vftable = NULL;
  }
  return v6;
}

/*
==============
bdRemoteTaskManager::setRESTTaskManager
==============
*/
void bdRemoteTaskManager::setRESTTaskManager(bdRemoteTaskManager *this, bdRESTTaskManager *restTaskManager)
{
  this->m_restTaskManager = restTaskManager;
}

/*
==============
bdRemoteTaskManager::startLSGTask
==============
*/
__int64 bdRemoteTaskManager::startLSGTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> *newTask, const unsigned __int8 serviceID, const unsigned __int8 taskID, const void *const queryParams, const unsigned int queryParamsSize)
{
  unsigned int v11; 
  bdRemoteTask *v12; 
  bdRemoteTask *v13; 
  bdRemoteTask *v14; 
  unsigned int v15; 
  bdTaskByteBuffer *v16; 
  bdByteBuffer *v17; 
  bdByteBuffer *v18; 
  bdLobbyConnection *m_ptr; 
  bool (__fastcall *sendTask)(bdLobbyConnection *, bdReference<bdTaskByteBuffer>, unsigned int, const bool); 
  bool m_encryptedConnection; 
  __int64 DataSize; 
  char v25[8]; 
  __int64 v26[2]; 
  bdTaskByteBuffer *v27; 
  bdRemoteTask *data; 

  v26[1] = -2i64;
  v11 = 3;
  v12 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  data = v12;
  if ( v12 )
  {
    bdRemoteTask::bdRemoteTask(v12);
    v14 = v13;
  }
  else
  {
    v14 = NULL;
  }
  if ( newTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))newTask->m_ptr->~bdReferencable)(newTask->m_ptr, 1i64);
  newTask->m_ptr = v14;
  if ( v14 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
    if ( newTask->m_ptr )
    {
      newTask->m_ptr->m_serviceId = serviceID;
      newTask->m_ptr->m_taskId = taskID;
      v15 = queryParamsSize;
      v16 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
      v27 = v16;
      if ( v16 )
      {
        bdTaskByteBuffer::bdTaskByteBuffer(v16, v15 + 74, 0);
        v18 = v17;
      }
      else
      {
        v18 = NULL;
      }
      v27 = (bdTaskByteBuffer *)v18;
      if ( v18 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
      LOBYTE(data) = serviceID;
      if ( bdByteBuffer::write(v18, &data, 1u) )
      {
        v25[0] = taskID;
        if ( bdByteBuffer::write(v18, v25, 1u) && bdByteBuffer::write(v18, queryParams, v15) )
        {
          m_ptr = this->m_lobbyConnection.m_ptr;
          if ( m_ptr )
          {
            sendTask = m_ptr->sendTask;
            m_encryptedConnection = this->m_encryptedConnection;
            DataSize = bdByteBuffer::getDataSize(v18);
            v26[0] = (__int64)v18;
            if ( v18 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
            if ( ((unsigned __int8 (__fastcall *)(bdLobbyConnection *, __int64 *, __int64, bool))sendTask)(m_ptr, v26, DataSize, m_encryptedConnection) )
            {
              v11 = 0;
              bdLinkedList<bdReference<bdRemoteTask>>::addTail(&this->m_tasks, newTask);
              __asm { vxorps  xmm1, xmm1, xmm1 }
              ((void (__fastcall *)(bdRemoteTask *))newTask->m_ptr->start)(newTask->m_ptr);
            }
          }
        }
      }
      if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v18->~bdReferencable)(v18, 1i64);
      if ( newTask->m_ptr && v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&newTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask->m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))newTask->m_ptr->~bdReferencable)(newTask->m_ptr, 1i64);
        newTask->m_ptr = NULL;
      }
    }
  }
  return v11;
}

/*
==============
bdRemoteTaskManager::startRESTTask
==============
*/
bdReference<bdRemoteTask> *bdRemoteTaskManager::startRESTTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request, bdRESTResponse *response)
{
  bdRESTTaskManager *m_restTaskManager; 
  const bdReference<bdRemoteTask> *started; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  bdHandleAssert(this->m_restTaskManager != NULL, "m_restTaskManager != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::startRESTTask", 0x78u, "If rest tasks are available then m_restTaskManager should have been initialized");
  result->m_ptr = NULL;
  m_restTaskManager = this->m_restTaskManager;
  if ( m_restTaskManager )
  {
    started = bdRESTTaskManager::startRequest(m_restTaskManager, &resulta, request, response);
    bdReference<bdRemoteTask>::operator=(result, started);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::startRESTTask", 0x82u, "If rest tasks are available then m_restTaskManager should have been initialized");
  }
  return result;
}

/*
==============
bdRemoteTaskManager::startStreamingTask
==============
*/
bdLobbyErrorCode bdRemoteTaskManager::startStreamingTask(bdRemoteTaskManager *this, bdReference<bdStreamingTask> *newTask, bdReference<bdTaskByteBuffer> *queryParams)
{
  bdStreamingTask *v6; 
  bdStreamingTask *v7; 
  bdStreamingTask *m_ptr; 
  bdReference<bdRemoteTask> newTaska; 

  v6 = (bdStreamingTask *)bdMemory::allocate(0x80ui64);
  newTaska.m_ptr = v6;
  if ( v6 )
  {
    bdStreamingTask::bdStreamingTask(v6, 0);
    m_ptr = v7;
  }
  else
  {
    m_ptr = NULL;
  }
  if ( newTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask->m_ptr )
    ((void (__fastcall *)(bdStreamingTask *, __int64))newTask->m_ptr->~bdReferencable)(newTask->m_ptr, 1i64);
  newTask->m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask->m_ptr;
  }
  newTaska.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return bdRemoteTaskManager::sendTask(this, (bdReference<bdRemoteTask>)&newTaska, queryParams);
}

/*
==============
bdRemoteTaskManager::startStreamingTask
==============
*/
bdLobbyErrorCode bdRemoteTaskManager::startStreamingTask(bdRemoteTaskManager *this, bdReference<bdStreamingTask> *newTask, bdTaskParams *taskParams)
{
  bdStreamingTask *v6; 
  bdStreamingTask *v7; 
  bdStreamingTask *m_ptr; 
  bdReference<bdRemoteTask> newTaska; 

  v6 = (bdStreamingTask *)bdMemory::allocate(0x80ui64);
  newTaska.m_ptr = v6;
  if ( v6 )
  {
    bdStreamingTask::bdStreamingTask(v6, 0);
    m_ptr = v7;
  }
  else
  {
    m_ptr = NULL;
  }
  if ( newTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask->m_ptr )
    ((void (__fastcall *)(bdStreamingTask *, __int64))newTask->m_ptr->~bdReferencable)(newTask->m_ptr, 1i64);
  newTask->m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask->m_ptr;
  }
  newTaska.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return bdRemoteTaskManager::sendWithTaskParams(this, (bdReference<bdRemoteTask>)&newTaska, taskParams);
}

/*
==============
bdRemoteTaskManager::startStructTask
==============
*/
__int64 bdRemoteTaskManager::startStructTask(bdRemoteTaskManager *this, bdReference<bdStructBufferTask> *newTask, const unsigned __int8 serviceID, const unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response, bdLobbyService *lobbyService)
{
  bdTaskByteBuffer *v11; 
  bdStructBufferTask *v12; 
  bdStructBufferTask *m_ptr; 
  bdStructBufferTask *v14; 
  bdLobbyErrorCode v15; 
  bdLobbyErrorCode v16; 
  bdReference<bdRemoteTask> newTaska; 
  __int64 v19; 
  bdReference<bdTaskByteBuffer> result; 

  v19 = -2i64;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x80ui64);
  result.m_ptr = v11;
  if ( v11 )
  {
    bdStructBufferTask::bdStructBufferTask((bdStructBufferTask *)v11, lobbyService);
    m_ptr = v12;
  }
  else
  {
    m_ptr = NULL;
  }
  if ( newTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask->m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask->m_ptr->~bdReferencable)(newTask->m_ptr, 1i64);
  newTask->m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask->m_ptr;
  }
  if ( bdStructBufferTask::setRequest(m_ptr, serviceID, taskID, request) && bdStructBufferTask::setResponse(newTask->m_ptr, response) )
  {
    bdStructBufferTask::getTaskBuffer(newTask->m_ptr, &result);
    v14 = newTask->m_ptr;
    newTaska.m_ptr = v14;
    if ( v14 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
    v15 = bdRemoteTaskManager::sendTask(this, (bdReference<bdRemoteTask>)&newTaska, &result);
    v16 = v15;
    if ( v15 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::startStructTask", 0x69u, "Failed to start task: Error %i", v15);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdTaskByteBuffer *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return (unsigned int)v16;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/remotetaskmanager", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetaskmanager.cpp", "bdRemoteTaskManager::startStructTask", 0x70u, "Service:Task ID (%u:%u): Failed to serialize task buffer.", serviceID, taskID);
    return 5i64;
  }
}

/*
==============
bdRemoteTaskManager::startTask
==============
*/
bdLobbyErrorCode bdRemoteTaskManager::startTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> *newTask, bdReference<bdTaskByteBuffer> *queryParams)
{
  bdRemoteTask *v6; 
  bdRemoteTask *v7; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> newTaska; 

  v6 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  newTaska.m_ptr = v6;
  if ( v6 )
  {
    bdRemoteTask::bdRemoteTask(v6);
    m_ptr = v7;
  }
  else
  {
    m_ptr = NULL;
  }
  if ( newTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))newTask->m_ptr->~bdReferencable)(newTask->m_ptr, 1i64);
  newTask->m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask->m_ptr;
  }
  newTaska.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return bdRemoteTaskManager::sendTask(this, (bdReference<bdRemoteTask>)&newTaska, queryParams);
}

/*
==============
bdRemoteTaskManager::startTask
==============
*/
bdLobbyErrorCode bdRemoteTaskManager::startTask(bdRemoteTaskManager *this, bdReference<bdRemoteTask> *newTask, bdTaskParams *taskParams)
{
  bdRemoteTask *v6; 
  bdRemoteTask *v7; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> newTaska; 

  v6 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  newTaska.m_ptr = v6;
  if ( v6 )
  {
    bdRemoteTask::bdRemoteTask(v6);
    m_ptr = v7;
  }
  else
  {
    m_ptr = NULL;
  }
  if ( newTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))newTask->m_ptr->~bdReferencable)(newTask->m_ptr, 1i64);
  newTask->m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask->m_ptr;
  }
  newTaska.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return bdRemoteTaskManager::sendWithTaskParams(this, (bdReference<bdRemoteTask>)&newTaska, taskParams);
}

