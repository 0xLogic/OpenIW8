/*
==============
bdCounter::~bdCounter
==============
*/

void __fastcall bdCounter::~bdCounter(bdCounter *this)
{
  ??1bdCounter@@QEAA@XZ(this);
}

/*
==============
bdCounter::getCounterTotals
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCounter::getCounterTotals(bdCounter *this, bdReference<bdRemoteTask> *result, bdCounterValue *results, const unsigned int numCounterIDs)
{
  return ?getCounterTotals@bdCounter@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdCounterValue@@I@Z(this, result, results, numCounterIDs);
}

/*
==============
bdCounter::incrementCounters
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCounter::incrementCounters(bdCounter *this, bdReference<bdRemoteTask> *result, bdCounterValue *const counterIncrements, const unsigned int numEntries)
{
  return ?incrementCounters@bdCounter@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdCounterValue@@I@Z(this, result, counterIncrements, numEntries);
}

/*
==============
bdCounter::bdCounter
==============
*/

void __fastcall bdCounter::bdCounter(bdCounter *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdCounter@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdCounter::bdCounter
==============
*/
void bdCounter::bdCounter(bdCounter *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdCounter::~bdCounter
==============
*/
void bdCounter::~bdCounter(bdCounter *this)
{
  ;
}

/*
==============
bdCounter::getCounterTotals
==============
*/
bdReference<bdRemoteTask> *bdCounter::getCounterTotals(bdCounter *this, bdReference<bdRemoteTask> *result, bdCounterValue *results, const unsigned int numCounterIDs)
{
  _BOOL8 v8; 
  const unsigned int *bytes_20; 
  __int64 v10; 
  bool v11; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x17u, 2u, 0x400u, 0xFFFFu);
  if ( numCounterIDs )
  {
    bytes_20 = (const unsigned int *)results->_bytes_20;
    v10 = numCounterIDs;
    do
    {
      LOBYTE(v8) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v8) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, *bytes_20), taskParams.m_serializeOk = 1, !v11) )
          taskParams.m_serializeOk = 0;
      }
      bytes_20 += 16;
      --v10;
    }
    while ( v10 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = results;
    taskParams.m_maxResults = numCounterIDs;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "counters", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcounter\\bdcounter.cpp", "bdCounter::getCounterTotals", 0x4Cu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdCounter::incrementCounters
==============
*/
bdReference<bdRemoteTask> *bdCounter::incrementCounters(bdCounter *this, bdReference<bdRemoteTask> *result, bdCounterValue *const counterIncrements, const unsigned int numEntries)
{
  __int64 v4; 
  const bdSerializable *v8; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdTaskParams v12; 

  v4 = numEntries;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v12, 0x17u, 1u, 0x400u, 0xFFFFu);
  if ( (_DWORD)v4 )
  {
    v8 = (const bdSerializable *)(&counterIncrements->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&v12, v8);
      v8 += 2;
      --v4;
    }
    while ( v4 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v12);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "counters", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcounter\\bdcounter.cpp", "bdCounter::incrementCounters", 0x2Fu, "Failed to start task: Error %i", v11);
  }
  bdTaskParams::~bdTaskParams(&v12);
  return result;
}

