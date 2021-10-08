/*
==============
bdPerformance::bdPerformance
==============
*/

void __fastcall bdPerformance::bdPerformance(bdPerformance *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdPerformance@@IEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdPerformance::getPerformanceValues
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPerformance::getPerformanceValues(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *const entityIDs, const unsigned int numEntityIDs, const unsigned int gameType, bdStoredPerformanceValue *results)
{
  return ?getPerformanceValues@bdPerformance@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIIQEAVbdStoredPerformanceValue@@@Z(this, result, entityIDs, numEntityIDs, gameType, results);
}

/*
==============
bdPerformance::submitAndGetPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPerformance::submitAndGetPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const bdPerformanceValue **performanceValuePtrs, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  return ?submitAndGetPerformance@bdPerformance@@AEAA?AV?$bdReference@VbdRemoteTask@@@@IQEBVbdPerformanceValue@@QEAPEBV3@IQEAVbdStoredPerformanceValue@@@Z(this, result, gameType, performanceValues, performanceValuePtrs, numValues, results);
}

/*
==============
bdPerformance::submitPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPerformance::submitPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues)
{
  return ?submitPerformance@bdPerformance@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IPEBVbdPerformanceValue@@I@Z(this, result, gameType, performanceValues, numValues);
}

/*
==============
bdPerformance::submitAndGetPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPerformance::submitAndGetPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue **performanceValuePtrs, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  return ?submitAndGetPerformance@bdPerformance@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEAPEBVbdPerformanceValue@@IQEAVbdStoredPerformanceValue@@@Z(this, result, gameType, performanceValuePtrs, numValues, results);
}

/*
==============
bdPerformance::submitAndGetPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPerformance::submitAndGetPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  return ?submitAndGetPerformance@bdPerformance@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEBVbdPerformanceValue@@IQEAVbdStoredPerformanceValue@@@Z(this, result, gameType, performanceValues, numValues, results);
}

/*
==============
bdPerformance::submitPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdPerformance::submitPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue **performanceValues, const unsigned int numValues)
{
  return ?submitPerformance@bdPerformance@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEAPEBVbdPerformanceValue@@I@Z(this, result, gameType, performanceValues, numValues);
}

/*
==============
bdPerformance::~bdPerformance
==============
*/

void __fastcall bdPerformance::~bdPerformance(bdPerformance *this)
{
  ??1bdPerformance@@UEAA@XZ(this);
}

/*
==============
bdPerformance::bdPerformance
==============
*/
void bdPerformance::bdPerformance(bdPerformance *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  unsigned __int64 v4; 
  size_t v5; 

  this->__vftable = (bdPerformance_vtbl *)&bdPerformance::`vftable';
  this->m_remoteTaskManager = remoteTaskManager;
  if ( context )
  {
    bdStrlcpy(this->m_context, context, 0x10ui64);
  }
  else
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
    v4 = -1i64;
    do
      ++v4;
    while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
    if ( this != (bdPerformance *)-16i64 )
    {
      v5 = 15i64;
      if ( v4 < 0xF )
        v5 = v4;
      memcpy_0(this->m_context, (char *)&queryFormat.fmt + 3, v5);
      this->m_context[v5] = 0;
    }
  }
}

/*
==============
bdPerformance::~bdPerformance
==============
*/
void bdPerformance::~bdPerformance(bdPerformance *this)
{
  this->m_remoteTaskManager = NULL;
  this->__vftable = (bdPerformance_vtbl *)&bdService::`vftable';
}

/*
==============
bdPerformance::getPerformanceValues
==============
*/
bdReference<bdRemoteTask> *bdPerformance::getPerformanceValues(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *const entityIDs, const unsigned int numEntityIDs, const unsigned int gameType, bdStoredPerformanceValue *results)
{
  __int64 v6; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  bool v14; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  v6 = numEntityIDs;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x98u, 2u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, this->m_context, 0x10ui64);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, gameType), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  if ( (_DWORD)v6 )
  {
    v13 = v6;
    do
    {
      LOBYTE(v11) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *entityIDs), taskParams.m_serializeOk = 1, !v14) )
          taskParams.m_serializeOk = 0;
      }
      ++entityIDs;
      --v13;
    }
    while ( v13 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = results;
    taskParams.m_maxResults = v6;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "performance", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::getPerformanceValues", 0x7Eu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdPerformance::submitAndGetPerformance
==============
*/
bdReference<bdRemoteTask> *bdPerformance::submitAndGetPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const bdPerformanceValue **performanceValuePtrs, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  const bdSerializable *v14; 
  const bdPerformanceValue **v15; 
  bdLobbyErrorCode started; 
  bdTaskParams v18; 

  bdTaskParams::bdTaskParams(&v18, 0x98u, 3u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v18, this->m_context, 0x10ui64);
  LOBYTE(v11) = 1;
  if ( v18.ensureCapacity(&v18, 4u, v11) )
  {
    if ( v18.m_isWritingArray )
      --v18.m_arrayWriteCount;
    if ( !v18.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(v18.m_buffer.m_ptr, gameType), v18.m_serializeOk = 1, !v12) )
      v18.m_serializeOk = 0;
  }
  if ( numValues )
  {
    v13 = numValues;
    if ( performanceValues )
    {
      v14 = (const bdSerializable *)(&performanceValues->__vftable + 2);
      do
      {
        bdHandleAssert(performanceValuePtrs == NULL, "performanceValuePtrs == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::submitAndGetPerformance", 0xA7u, "performanceValuePtrs must be NULL");
        bdBufferParams::addSerializable(&v18, v14);
        v14 += 2;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v15 = performanceValuePtrs;
      do
      {
        bdHandleAssert(*v15 != NULL, "performanceValuePtrs[i] != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::submitAndGetPerformance", 0xACu, "performanceValuePtrs[i] must not be NULL");
        bdBufferParams::addSerializable(&v18, (const bdSerializable *)(&(*v15++)->__vftable + 2));
        --v13;
      }
      while ( v13 );
    }
  }
  if ( v18.m_taskResults || v18.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v18.m_serializeOk = 0;
  }
  else
  {
    v18.m_taskResults = results;
    v18.m_maxResults = numValues;
  }
  result->m_ptr = NULL;
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v18);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "performance", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::submitAndGetPerformance", 0xB6u, "Failed to start task BD_PERFORMANCE_SUBMIT_AND_GET_PERFORMANCE: Error %i", started);
  bdTaskParams::~bdTaskParams(&v18);
  return result;
}

/*
==============
bdPerformance::submitAndGetPerformance
==============
*/
bdReference<bdRemoteTask> *bdPerformance::submitAndGetPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue **performanceValuePtrs, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  bdHandleAssert(performanceValuePtrs != NULL, "performanceValuePtrs != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::submitAndGetPerformance", 0x94u, "performanceValues must not be NULL");
  bdHandleAssert(results != NULL, "results != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::submitAndGetPerformance", 0x95u, "results must not be NULL");
  bdPerformance::submitAndGetPerformance(this, result, gameType, NULL, performanceValuePtrs, numValues, results);
  return result;
}

/*
==============
bdPerformance::submitAndGetPerformance
==============
*/
bdReference<bdRemoteTask> *bdPerformance::submitAndGetPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  bdHandleAssert(performanceValues != NULL, "performanceValues != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::submitAndGetPerformance", 0x89u, "performanceValues must not be NULL");
  bdHandleAssert(results != NULL, "results != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::submitAndGetPerformance", 0x8Au, "results must not be NULL");
  bdPerformance::submitAndGetPerformance(this, result, gameType, performanceValues, NULL, numValues, results);
  return result;
}

/*
==============
bdPerformance::submitPerformance
==============
*/
bdReference<bdRemoteTask> *bdPerformance::submitPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues)
{
  _BOOL8 v9; 
  bool v10; 
  const bdSerializable *v11; 
  __int64 v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdTaskParams v16; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v16, 0x98u, 1u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v16, this->m_context, 0x10ui64);
  LOBYTE(v9) = 1;
  if ( v16.ensureCapacity(&v16, 4u, v9) )
  {
    if ( v16.m_isWritingArray )
      --v16.m_arrayWriteCount;
    if ( !v16.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(v16.m_buffer.m_ptr, gameType), v16.m_serializeOk = 1, !v10) )
      v16.m_serializeOk = 0;
  }
  if ( numValues )
  {
    v11 = (const bdSerializable *)(&performanceValues->__vftable + 2);
    v12 = numValues;
    do
    {
      bdBufferParams::addSerializable(&v16, v11);
      v11 += 2;
      --v12;
    }
    while ( v12 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v16);
  if ( started )
  {
    v15 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "performance", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::submitPerformance", 0x3Eu, "Failed to start task: Error %i", v15);
  }
  bdTaskParams::~bdTaskParams(&v16);
  return result;
}

/*
==============
bdPerformance::submitPerformance
==============
*/
bdReference<bdRemoteTask> *bdPerformance::submitPerformance(bdPerformance *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue **performanceValues, const unsigned int numValues)
{
  _BOOL8 v9; 
  bool v10; 
  __int64 v11; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v14; 
  bdTaskParams v15; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v15, 0x98u, 1u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v15, this->m_context, 0x10ui64);
  LOBYTE(v9) = 1;
  if ( v15.ensureCapacity(&v15, 4u, v9) )
  {
    if ( v15.m_isWritingArray )
      --v15.m_arrayWriteCount;
    if ( !v15.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(v15.m_buffer.m_ptr, gameType), v15.m_serializeOk = 1, !v10) )
      v15.m_serializeOk = 0;
  }
  if ( numValues )
  {
    v11 = numValues;
    do
    {
      bdBufferParams::addSerializable(&v15, (const bdSerializable *)(&(*performanceValues++)->__vftable + 2));
      --v11;
    }
    while ( v11 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v15);
  if ( started )
  {
    v14 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "performance", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformance.cpp", "bdPerformance::submitPerformance", 0x5Cu, "Failed to start task: Error %i", v14);
  }
  bdTaskParams::~bdTaskParams(&v15);
  return result;
}

