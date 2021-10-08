/*
==============
bdEventLog::recordEventsMixed
==============
*/

bdReference<bdRemoteTask> *__fastcall bdEventLog::recordEventsMixed(bdEventLog *this, bdReference<bdRemoteTask> *result, const bdEventInfo *eventInfos, unsigned int count, bdEventLogID *eventLogIDs)
{
  return ?recordEventsMixed@bdEventLog@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdEventInfo@@IQEAVbdEventLogID@@@Z(this, result, eventInfos, count, eventLogIDs);
}

/*
==============
bdEventLog::readyToSend
==============
*/

bool __fastcall bdEventLog::readyToSend(bdEventLog *this)
{
  return ?readyToSend@bdEventLog@@QEAA_NXZ(this);
}

/*
==============
bdEventLog::initializeFiltering
==============
*/

bdReference<bdRemoteTask> *__fastcall bdEventLog::initializeFiltering(bdEventLog *this, bdReference<bdRemoteTask> *result)
{
  return ?initializeFiltering@bdEventLog@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdEventLog::resetFilteredCategories
==============
*/

void __fastcall bdEventLog::resetFilteredCategories(bdEventLog *this)
{
  ?resetFilteredCategories@bdEventLog@@IEAAXXZ(this);
}

/*
==============
bdEventLog::bdEventLog
==============
*/

void __fastcall bdEventLog::bdEventLog(bdEventLog *this, bdRemoteTaskManager *const remoteTaskManager, bool __formal)
{
  ??0bdEventLog@@QEAA@QEAVbdRemoteTaskManager@@_N@Z(this, remoteTaskManager, __formal);
}

/*
==============
bdEventLog::~bdEventLog
==============
*/

void __fastcall bdEventLog::~bdEventLog(bdEventLog *this)
{
  ??1bdEventLog@@QEAA@XZ(this);
}

/*
==============
bdEventLog::setReceivedCategoryData
==============
*/

void __fastcall bdEventLog::setReceivedCategoryData(bdEventLog *this, bool received)
{
  ?setReceivedCategoryData@bdEventLog@@IEAAX_N@Z(this, received);
}

/*
==============
bdEventLog::addFilteredCategory
==============
*/

bool __fastcall bdEventLog::addFilteredCategory(bdEventLog *this, unsigned int category)
{
  return ?addFilteredCategory@bdEventLog@@IEAA_NI@Z(this, category);
}

/*
==============
bdEventLog::getNumFiltered
==============
*/

unsigned __int64 __fastcall bdEventLog::getNumFiltered(bdEventLog *this)
{
  return ?getNumFiltered@bdEventLog@@QEAA_KXZ(this);
}

/*
==============
bdEventLog::isFiltered
==============
*/

bool __fastcall bdEventLog::isFiltered(bdEventLog *this, unsigned int category)
{
  return ?isFiltered@bdEventLog@@QEAA_NI@Z(this, category);
}

/*
==============
bdEventLog::bdEventLog
==============
*/
void bdEventLog::bdEventLog(bdEventLog *this, bdRemoteTaskManager *const remoteTaskManager, bool __formal)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->m_numFilteredCategories = 0;
  this->m_numFilteredLogs = 0i64;
  this->m_receivedCategoryData = 0;
}

/*
==============
bdEventLog::~bdEventLog
==============
*/
void bdEventLog::~bdEventLog(bdEventLog *this)
{
  ;
}

/*
==============
bdEventLog::addFilteredCategory
==============
*/
bool bdEventLog::addFilteredCategory(bdEventLog *this, unsigned int category)
{
  __int64 m_numFilteredCategories; 
  bool result; 

  m_numFilteredCategories = this->m_numFilteredCategories;
  if ( (unsigned int)m_numFilteredCategories >= 0x80 )
    return 0;
  this->m_filteredCategories[m_numFilteredCategories] = category;
  result = 1;
  ++this->m_numFilteredCategories;
  return result;
}

/*
==============
bdEventLog::getNumFiltered
==============
*/
unsigned __int64 bdEventLog::getNumFiltered(bdEventLog *this)
{
  return this->m_numFilteredLogs;
}

/*
==============
bdEventLog::initializeFiltering
==============
*/
bdReference<bdRemoteTask> *bdEventLog::initializeFiltering(bdEventLog *this, bdReference<bdRemoteTask> *result)
{
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v6; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  this->m_numFilteredLogs = 0i64;
  this->m_receivedCategoryData = 0;
  this->m_numFilteredCategories = 0;
  bdTaskParams::bdTaskParams(&taskParams, 0x43u, 6u, 0x400u, 0xFFFFu);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v6 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "record event", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdeventlog\\bdeventlog.cpp", "bdEventLog::initializeFiltering", 0x62u, "Failed to start task: Error %i", v6);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdEventLog::isFiltered
==============
*/
_BOOL8 bdEventLog::isFiltered(bdEventLog *this, unsigned int category)
{
  bool v2; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 

  v2 = 0;
  if ( this->m_receivedCategoryData )
  {
    v4 = 0i64;
    do
    {
      if ( (unsigned int)v4 >= this->m_numFilteredCategories )
        break;
      v5 = (unsigned int)v4;
      v2 = this->m_filteredCategories[v4] == category;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( this->m_filteredCategories[v5] != category );
    if ( !v2 )
      return 0i64;
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "record event", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdeventlog\\bdeventlog.cpp", "bdEventLog::isFiltered", 0x84u, "Still waiting for filter categories; filtered %u", category);
    v2 = 1;
  }
  LODWORD(v7) = category;
  bdLogMessage(BD_LOG_INFO, "info/", "record event", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdeventlog\\bdeventlog.cpp", "bdEventLog::isFiltered", 0x89u, "filtered event with category %u", v7);
  return v2;
}

/*
==============
bdEventLog::readyToSend
==============
*/
_BOOL8 bdEventLog::readyToSend(bdEventLog *this)
{
  return this->m_receivedCategoryData;
}

/*
==============
bdEventLog::recordEventsMixed
==============
*/
bdReference<bdRemoteTask> *bdEventLog::recordEventsMixed(bdEventLog *this, bdReference<bdRemoteTask> *result, const bdEventInfo *eventInfos, unsigned int count, bdEventLogID *eventLogIDs)
{
  bdRemoteTask *v9; 
  _BOOL8 v10; 
  unsigned int v11; 
  unsigned int *v12; 
  __int64 v13; 
  bdFinishedTask *v14; 
  bdRemoteTask *v15; 
  bool v16; 
  unsigned int *v17; 
  bdLobbyErrorCode started; 
  bdTaskParams v20; 

  v9 = NULL;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v20, 0x43u, 5u, 0x400u, 0xFFFFu);
  v11 = count;
  if ( count )
  {
    v12 = (unsigned int *)&eventInfos->_bytes_20[4];
    v13 = count;
    do
    {
      if ( bdEventLog::isFiltered(this, *v12) )
      {
        ++this->m_numFilteredLogs;
        --v11;
      }
      v12 += 18;
      --v13;
    }
    while ( v13 );
  }
  if ( v11 )
  {
    LOBYTE(v10) = 1;
    if ( v20.ensureCapacity(&v20, 4u, v10) )
    {
      if ( v20.m_isWritingArray )
        --v20.m_arrayWriteCount;
      if ( !v20.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(v20.m_buffer.m_ptr, v11), v20.m_serializeOk = 1, !v16) )
        v20.m_serializeOk = 0;
    }
    if ( count )
    {
      v17 = (unsigned int *)&eventInfos->_bytes_20[4];
      do
      {
        if ( !bdEventLog::isFiltered(this, *v17) )
          bdBufferParams::addSerializable(&v20, (const bdSerializable *)(&eventInfos[(unsigned int)v9].__vftable + 2));
        LODWORD(v9) = (_DWORD)v9 + 1;
        v17 += 18;
      }
      while ( (unsigned int)v9 < count );
    }
    if ( v20.m_taskResults || v20.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      v20.m_serializeOk = 0;
    }
    else
    {
      v20.m_taskResults = eventLogIDs;
      v20.m_maxResults = count;
    }
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v20);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "record event", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdeventlog\\bdeventlog.cpp", "bdEventLog::recordEventsMixed", 0x50u, "Failed to start task: Error %i", started);
  }
  else
  {
    v14 = (bdFinishedTask *)bdMemory::allocate(0x68ui64);
    if ( v14 )
    {
      bdFinishedTask::bdFinishedTask(v14, BD_DONE);
      v9 = v15;
    }
    if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
    result->m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  }
  bdTaskParams::~bdTaskParams(&v20);
  return result;
}

/*
==============
bdEventLog::resetFilteredCategories
==============
*/
void bdEventLog::resetFilteredCategories(bdEventLog *this)
{
  this->m_receivedCategoryData = 0;
  this->m_numFilteredCategories = 0;
}

/*
==============
bdEventLog::setReceivedCategoryData
==============
*/
void bdEventLog::setReceivedCategoryData(bdEventLog *this, bool received)
{
  this->m_receivedCategoryData = received;
}

