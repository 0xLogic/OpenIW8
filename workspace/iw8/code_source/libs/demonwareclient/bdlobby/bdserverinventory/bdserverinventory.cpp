/*
==============
bdServerInventory::bdServerInventory
==============
*/

void __fastcall bdServerInventory::bdServerInventory(bdServerInventory *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdServerInventory@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdServerInventory::registerDedicatedServerInContext
==============
*/

bdReference<bdRemoteTask> *__fastcall bdServerInventory::registerDedicatedServerInContext(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *const buildName, const char *const dataCenter, const unsigned __int8 *addr, bdSecurityID secID, bdSecurityKey *secKey, const unsigned int registrationTimeout, const char *const jsonData, const char *const context)
{
  return ?registerDedicatedServerInContext@bdServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD0PEBEVbdSecurityID@@VbdSecurityKey@@I00@Z(this, result, buildName, dataCenter, addr, secID, secKey, registrationTimeout, jsonData, context);
}

/*
==============
bdServerInventory::allocateDedicatedServer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdServerInventory::allocateDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *buildName, const char **dataCenterPreferences, unsigned int numDataCenterPreferences, bdAllocateDedicatedServerResponse *a6, const char *context)
{
  return ?allocateDedicatedServer@bdServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEAPEBDIPEAVbdAllocateDedicatedServerResponse@@0@Z(this, result, buildName, dataCenterPreferences, numDataCenterPreferences, a6, context);
}

/*
==============
bdServerInventory::healthCheck
==============
*/

bdReference<bdRemoteTask> *__fastcall bdServerInventory::healthCheck(bdServerInventory *this, bdReference<bdRemoteTask> *result, bdBoolResult *const healthCheckSuccess)
{
  return ?healthCheck@bdServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdBoolResult@@@Z(this, result, healthCheckSuccess);
}

/*
==============
bdServerInventory::registerDedicatedServer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdServerInventory::registerDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *const buildName, const char *const dataCenter, const unsigned int registrationTimeout, const char *const jsonData)
{
  return ?registerDedicatedServer@bdServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD0I0@Z(this, result, buildName, dataCenter, registrationTimeout, jsonData);
}

/*
==============
bdServerInventory::allocateDedicatedServer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdServerInventory::allocateDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *buildName, bdArray<bdString> *dataCenterPreferences, bdAllocateDedicatedServerResponse *a5, const char *context)
{
  return ?allocateDedicatedServer@bdServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDV?$bdArray@VbdString@@@@PEAVbdAllocateDedicatedServerResponse@@0@Z(this, result, buildName, dataCenterPreferences, a5, context);
}

/*
==============
bdServerInventory::allocateDedicatedServer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdServerInventory::allocateDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *buildName, const bdDataCenterPreferences *dataCenterPreferences, bdAllocateDedicatedServerResponse *a5, const char *context)
{
  return ?allocateDedicatedServer@bdServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEBVbdDataCenterPreferences@@PEAVbdAllocateDedicatedServerResponse@@0@Z(this, result, buildName, dataCenterPreferences, a5, context);
}

/*
==============
bdServerInventory::deregisterDedicatedServer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdServerInventory::deregisterDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result)
{
  return ?deregisterDedicatedServer@bdServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdServerInventory::~bdServerInventory
==============
*/

void __fastcall bdServerInventory::~bdServerInventory(bdServerInventory *this)
{
  ??1bdServerInventory@@MEAA@XZ(this);
}

/*
==============
bdServerInventory::registerDedicatedServer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdServerInventory::registerDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *const buildName, const char *const dataCenter, const unsigned __int8 *addr, bdSecurityID secID, bdSecurityKey *secKey, const unsigned int registrationTimeout, const char *const jsonData)
{
  return ?registerDedicatedServer@bdServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD0PEBEVbdSecurityID@@VbdSecurityKey@@I0@Z(this, result, buildName, dataCenter, addr, secID, secKey, registrationTimeout, jsonData);
}

/*
==============
bdServerInventory::registerDedicatedServerInContext
==============
*/

bdReference<bdRemoteTask> *__fastcall bdServerInventory::registerDedicatedServerInContext(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *const buildName, const char *const dataCenter, const unsigned __int8 *addr, bdSecurityID secID, bdSecurityKey *secKey, const unsigned int registrationTimeout, const char *const jsonData, const char *const context, const unsigned int priority)
{
  return ?registerDedicatedServerInContext@bdServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD0PEBEVbdSecurityID@@VbdSecurityKey@@I00I@Z(this, result, buildName, dataCenter, addr, secID, secKey, registrationTimeout, jsonData, context, priority);
}

/*
==============
bdServerInventory::bdServerInventory
==============
*/
void bdServerInventory::bdServerInventory(bdServerInventory *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->__vftable = (bdServerInventory_vtbl *)&bdServerInventory::`vftable';
}

/*
==============
bdServerInventory::~bdServerInventory
==============
*/
void bdServerInventory::~bdServerInventory(bdServerInventory *this)
{
  this->m_remoteTaskManager = NULL;
  this->__vftable = (bdServerInventory_vtbl *)&bdService::`vftable';
}

/*
==============
bdServerInventory::allocateDedicatedServer
==============
*/
bdReference<bdRemoteTask> *bdServerInventory::allocateDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *buildName, const char **dataCenterPreferences, unsigned int numDataCenterPreferences, bdAllocateDedicatedServerResponse *resulta, const char *context)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v12; 
  bdAllocateDedicatedServerRequest request; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(&request, buildName, dataCenterPreferences, numDataCenterPreferences, context);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x69u, 6u, &request, resulta, NULL);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::allocateDedicatedServer", 0xC0u, "Failed to start task: Error %i", v12);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)request.gap228);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdServerInventory::allocateDedicatedServer
==============
*/
bdReference<bdRemoteTask> *bdServerInventory::allocateDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *buildName, const bdDataCenterPreferences *dataCenterPreferences, bdAllocateDedicatedServerResponse *resulta, const char *context)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdAllocateDedicatedServerRequest request; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(&request, buildName, dataCenterPreferences, context);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x69u, 6u, &request, resulta, NULL);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::allocateDedicatedServer", 0xEAu, "Failed to start task: Error %i", v11);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)request.gap228);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdServerInventory::allocateDedicatedServer
==============
*/
bdReference<bdRemoteTask> *bdServerInventory::allocateDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *buildName, bdArray<bdString> *dataCenterPreferences, bdAllocateDedicatedServerResponse *response, const char *context)
{
  __int64 m_capacity; 
  bdString *v11; 
  bdString *v12; 
  unsigned int m_size; 
  bdString *v14; 
  char *v15; 
  __int64 v16; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdArray<bdString> v20; 
  __int64 v21; 
  bdString *v22; 
  bdAllocateDedicatedServerRequest request; 
  bdReference<bdStructBufferTask> newTask; 
  bdArray<bdString> *v25; 

  v25 = dataCenterPreferences;
  v21 = -2i64;
  newTask.m_ptr = NULL;
  m_capacity = dataCenterPreferences->m_capacity;
  v20.m_capacity = m_capacity;
  v20.m_size = dataCenterPreferences->m_size;
  v11 = NULL;
  if ( (_DWORD)m_capacity )
  {
    v12 = (bdString *)bdMemory::allocate(8 * m_capacity);
    v11 = v12;
    m_size = dataCenterPreferences->m_size;
    if ( m_size )
    {
      v14 = v12;
      v15 = (char *)((char *)dataCenterPreferences->m_data - (char *)v12);
      v16 = m_size;
      do
      {
        v22 = v14;
        if ( v14 )
          bdString::bdString(v14, (const bdString *)((char *)v14 + (_QWORD)v15));
        ++v14;
        --v16;
      }
      while ( v16 );
    }
  }
  v20.m_data = v11;
  bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(&request, buildName, &v20, context);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x69u, 6u, &request, response, NULL);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::allocateDedicatedServer", 0xD5u, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)request.gap228);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( newTask.m_ptr )
      ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
    newTask.m_ptr = NULL;
  }
  bdArray<bdString>::~bdArray<bdString>(dataCenterPreferences);
  return result;
}

/*
==============
bdServerInventory::deregisterDedicatedServer
==============
*/
bdReference<bdRemoteTask> *bdServerInventory::deregisterDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result)
{
  bdLobbyErrorCode started; 
  __int64 v6; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x69u, 2u, 0x400u, 0xFFFFu);
  if ( (taskParams.m_isWritingArray || taskParams.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", taskParams.m_arrayWriteCount), taskParams.m_isWritingArray) || taskParams.m_arrayWriteCount) || !taskParams.m_serializeOk || !taskParams.m_buffer.m_ptr || !taskParams.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::deregisterDedicatedServer", 0x8Du, "Failed to serialize the task params.");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    if ( started )
    {
      LODWORD(v6) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::deregisterDedicatedServer", 0x88u, "Failed to start task: Error %i", v6);
    }
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdServerInventory::healthCheck
==============
*/
bdReference<bdRemoteTask> *bdServerInventory::healthCheck(bdServerInventory *this, bdReference<bdRemoteTask> *result, bdBoolResult *const healthCheckSuccess)
{
  bdLobbyErrorCode started; 
  __int64 v8; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x69u, 4u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = healthCheckSuccess;
    taskParams.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  if ( (taskParams.m_isWritingArray || taskParams.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", taskParams.m_arrayWriteCount), taskParams.m_isWritingArray) || taskParams.m_arrayWriteCount) || !taskParams.m_serializeOk || !taskParams.m_buffer.m_ptr || !taskParams.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::healthCheck", 0xAAu, "Failed to serialize the task params.");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    if ( started )
    {
      LODWORD(v8) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::healthCheck", 0xA5u, "Failed to start task: Error %i", v8);
    }
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdServerInventory::registerDedicatedServer
==============
*/
bdReference<bdRemoteTask> *bdServerInventory::registerDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *const buildName, const char *const dataCenter, const unsigned int registrationTimeout, const char *const jsonData)
{
  _BOOL8 v10; 
  bool v11; 
  bdLobbyErrorCode started; 
  __int64 v14; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdHandleAssert(buildName != NULL, "(buildName != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::registerDedicatedServer", 0x5Au, "Cannot call registerDedicatedServer() with a NULL buildName");
  bdHandleAssert(dataCenter != NULL, "(dataCenter != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::registerDedicatedServer", 0x5Bu, "Cannot call registerDedicatedServer() with a NULL dataCenter");
  bdTaskParams::bdTaskParams(&taskParams, 0x69u, 1u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, buildName, 0x40ui64);
  bdBufferParams::addString(&taskParams, dataCenter, 0x40ui64);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, registrationTimeout), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdBufferParams::addString(&taskParams, jsonData, 0x400ui64);
  if ( (taskParams.m_isWritingArray || taskParams.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", taskParams.m_arrayWriteCount), taskParams.m_isWritingArray) || taskParams.m_arrayWriteCount) || !taskParams.m_serializeOk || !taskParams.m_buffer.m_ptr || !taskParams.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::registerDedicatedServer", 0x73u, "Failed to serialize the task params.");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    if ( started )
    {
      LODWORD(v14) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::registerDedicatedServer", 0x6Eu, "Failed to start task: Error %i", v14);
    }
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdServerInventory::registerDedicatedServer
==============
*/
bdReference<bdRemoteTask> *bdServerInventory::registerDedicatedServer(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *const buildName, const char *const dataCenter, const unsigned __int8 *addr, bdSecurityID secID, bdSecurityKey *secKey, const unsigned int registrationTimeout, const char *const jsonData)
{
  __int64 v11; 
  bdSecurityKey *v12; 
  __int64 v13; 
  bdSecurityID *v14; 
  bdSecurityKey *v15; 
  bdSecurityKey *v16; 
  bdSecurityID v17; 
  bdSecurityID v19; 
  bdSecurityKey *v20; 
  bdSecurityID v21; 
  const char *v22; 
  bdReference<bdRemoteTask> *v23; 
  bdSecurityID *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  bdSecurityKey *v28; 
  bdSecurityKey v29; 
  bdSecurityKey v30; 
  bdSecurityID v31; 
  bdSecurityKey *v32; 

  v26 = -2i64;
  v22 = dataCenter;
  v23 = result;
  v24 = (bdSecurityID *)secID;
  v31 = secID;
  v20 = secKey;
  v32 = secKey;
  v19 = (bdSecurityID)&v29;
  bdSecurityKey::bdSecurityKey(&v29, secKey);
  v12 = (bdSecurityKey *)v11;
  v27 = v11;
  bdSecurityID::bdSecurityID(&v21, *(const bdSecurityID **)&secID);
  v14 = (bdSecurityID *)v13;
  v25 = v13;
  v28 = &v30;
  bdSecurityKey::bdSecurityKey(&v30, v12);
  v16 = v15;
  bdSecurityID::bdSecurityID(&v19, v14);
  bdServerInventory::registerDedicatedServerInContext(this, v23, buildName, v22, addr, v17, v16, registrationTimeout, jsonData, NULL, 0);
  bdSecurityID::~bdSecurityID(v14);
  bdSecurityKey::~bdSecurityKey(v12);
  bdSecurityID::~bdSecurityID(v24);
  bdSecurityKey::~bdSecurityKey(v20);
  return v23;
}

/*
==============
bdServerInventory::registerDedicatedServerInContext
==============
*/
bdReference<bdRemoteTask> *bdServerInventory::registerDedicatedServerInContext(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *const buildName, const char *const dataCenter, const unsigned __int8 *addr, bdSecurityID secID, bdSecurityKey *secKey, const unsigned int registrationTimeout, const char *const jsonData, const char *const context)
{
  bdSecurityKey *v12; 
  bdSecurityKey *v13; 
  bdSecurityID v14; 
  bdSecurityID v16; 
  const char *v17; 
  bdReference<bdRemoteTask> *v18; 
  __int64 v19; 
  bdSecurityKey *v20; 
  bdSecurityKey v21; 
  bdSecurityID v22; 
  bdSecurityKey *v23; 

  v19 = -2i64;
  v17 = dataCenter;
  v18 = result;
  v16 = (bdSecurityID)result;
  v22 = secID;
  v23 = secKey;
  v20 = &v21;
  bdSecurityKey::bdSecurityKey(&v21, secKey);
  v13 = v12;
  bdSecurityID::bdSecurityID(&v16, *(const bdSecurityID **)&secID);
  bdServerInventory::registerDedicatedServerInContext(this, v18, buildName, v17, addr, v14, v13, registrationTimeout, jsonData, context, 0);
  bdSecurityID::~bdSecurityID(*(bdSecurityID **)&secID);
  bdSecurityKey::~bdSecurityKey(secKey);
  return v18;
}

/*
==============
bdServerInventory::registerDedicatedServerInContext
==============
*/
bdReference<bdRemoteTask> *bdServerInventory::registerDedicatedServerInContext(bdServerInventory *this, bdReference<bdRemoteTask> *result, const char *const buildName, const char *const dataCenter, const unsigned __int8 *addr, bdSecurityID secID, bdSecurityKey *secKey, const unsigned int registrationTimeout, const char *const jsonData, const char *const context, const unsigned int priority)
{
  bdSecurityKey *v15; 
  bdSecurityKey *v16; 
  bdSecurityID v17; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  __int64 v21; 
  bdReference<bdStructBufferTask> newTask; 
  bdSecurityID *v23; 
  bdSecurityKey *v24; 
  bdSecurityID v25; 
  __int64 v26; 
  bdSecurityKey *v27; 
  bdSecurityKey v28; 
  bdSecurityID v29; 
  bdSecurityKey *v30; 
  bdRegisterDedicatedServerRequest v31; 

  v26 = -2i64;
  v23 = (bdSecurityID *)secID;
  v29 = secID;
  v24 = secKey;
  v30 = secKey;
  newTask.m_ptr = NULL;
  bdHandleAssert(buildName != NULL, "(buildName != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::registerDedicatedServerInContext", 0x36u, "Cannot call registerDedicatedServer() with a NULL buildName");
  bdHandleAssert(dataCenter != NULL, "(dataCenter != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::registerDedicatedServerInContext", 0x37u, "Cannot call registerDedicatedServer() with a NULL dataCenter");
  bdHandleAssert(addr != NULL, "(addr != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::registerDedicatedServerInContext", 0x38u, "Cannot call registerDedicatedServer() with a NULL addr");
  bdRegisterDedicatedServerRequest::bdRegisterDedicatedServerRequest(&v31);
  v27 = &v28;
  bdSecurityKey::bdSecurityKey(&v28, secKey);
  v16 = v15;
  bdSecurityID::bdSecurityID(&v25, *(const bdSecurityID **)&secID);
  bdRegisterDedicatedServerRequest::init(&v31, buildName, dataCenter, addr, v17, v16, registrationTimeout, jsonData, context, priority);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x69u, 5u, &v31, NULL, NULL);
  if ( started )
  {
    LODWORD(v21) = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdServerInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdserverinventory.cpp", "bdServerInventory::registerDedicatedServerInContext", 0x42u, "Failed to start task: Error %i", v21);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v31.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&v31.gap544[4]);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( newTask.m_ptr )
      ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
    newTask.m_ptr = NULL;
  }
  bdSecurityID::~bdSecurityID(v23);
  bdSecurityKey::~bdSecurityKey(v24);
  return result;
}

