/*
==============
bdRichPresenceService::getBlockedUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::getBlockedUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userAccountIDs, const unsigned int maxNumResults, const unsigned int offset)
{
  return ?getBlockedUsers@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdUserAccountID@@II@Z(this, result, userAccountIDs, maxNumResults, offset);
}

/*
==============
bdRichPresenceService::subscribeToUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::subscribeToUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  return ?subscribeToUsers@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@I@Z(this, result, userAccountIDs, numUsers);
}

/*
==============
bdRichPresenceService::unblockUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::unblockUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  return ?unblockUsers@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@I@Z(this, result, userAccountIDs, numUsers);
}

/*
==============
bdRichPresenceService::unsubscribeFromUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::unsubscribeFromUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  return ?unsubscribeFromUsers@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@I@Z(this, result, userAccountIDs, numUsers);
}

/*
==============
bdRichPresenceService::getRichPresence
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::getRichPresence(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, bdRichPresenceData *results, const unsigned int maxNumResults)
{
  return ?getRichPresence@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@QEAVbdRichPresenceData@@I@Z(this, result, userAccountIDs, results, maxNumResults);
}

/*
==============
bdRichPresenceService::getSubscriptions
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::getSubscriptions(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userAccountIDs, const unsigned int maxNumResults, const unsigned int offset)
{
  return ?getSubscriptions@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdUserAccountID@@II@Z(this, result, userAccountIDs, maxNumResults, offset);
}

/*
==============
bdRichPresenceService::getSubscribers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::getSubscribers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userAccountIDs, const unsigned int maxNumResults, const unsigned int offset)
{
  return ?getSubscribers@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdUserAccountID@@II@Z(this, result, userAccountIDs, maxNumResults, offset);
}

/*
==============
bdRichPresenceService::setInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::setInfo(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, bdRichPresenceInfo *const newPresenceInfo)
{
  return ?setInfo@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdRichPresenceInfo@@@Z(this, result, newPresenceInfo);
}

/*
==============
bdRichPresenceService::getRichPresenceAndSubscribe
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::getRichPresenceAndSubscribe(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, bdRichPresenceData *results, const unsigned int maxNumResults)
{
  return ?getRichPresenceAndSubscribe@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@QEAVbdRichPresenceData@@I@Z(this, result, userAccountIDs, results, maxNumResults);
}

/*
==============
bdRichPresenceService::getInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::getInfo(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, bdRichPresenceInfo *results, unsigned int count)
{
  return ?getInfo@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEA_KPEAVbdRichPresenceInfo@@I@Z(this, result, userIDs, results, count);
}

/*
==============
bdRichPresenceService::blockUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::blockUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  return ?blockUsers@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@I@Z(this, result, userAccountIDs, numUsers);
}

/*
==============
bdRichPresenceService::bdRichPresenceService
==============
*/

void __fastcall bdRichPresenceService::bdRichPresenceService(bdRichPresenceService *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdRichPresenceService@@QEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdRichPresenceService::addUserAccountIDArray
==============
*/

void __fastcall bdRichPresenceService::addUserAccountIDArray(bdRichPresenceService *this, bdTaskParams *params, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  ?addUserAccountIDArray@bdRichPresenceService@@IEAAXAEAVbdTaskParams@@QEBVbdUserAccountID@@I@Z(this, params, userAccountIDs, numUsers);
}

/*
==============
bdRichPresenceService::~bdRichPresenceService
==============
*/

void __fastcall bdRichPresenceService::~bdRichPresenceService(bdRichPresenceService *this)
{
  ??1bdRichPresenceService@@QEAA@XZ(this);
}

/*
==============
bdRichPresenceService::startTask
==============
*/

void __fastcall bdRichPresenceService::startTask(bdRichPresenceService *this, bdReference<bdRemoteTask> *remoteTask, bdTaskParams *params)
{
  ?startTask@bdRichPresenceService@@IEAAXAEAV?$bdReference@VbdRemoteTask@@@@AEAVbdTaskParams@@@Z(this, remoteTask, params);
}

/*
==============
bdRichPresenceService::setRichPresence
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::setRichPresence(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdRichPresenceData *richPresenceData)
{
  return ?setRichPresence@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRichPresenceData@@@Z(this, result, richPresenceData);
}

/*
==============
bdRichPresenceService::unsubscribeAll
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRichPresenceService::unsubscribeAll(bdRichPresenceService *this, bdReference<bdRemoteTask> *result)
{
  return ?unsubscribeAll@bdRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdRichPresenceService::bdRichPresenceService
==============
*/
void bdRichPresenceService::bdRichPresenceService(bdRichPresenceService *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  this->m_remoteTaskManager = remoteTaskManager;
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdRichPresenceService::~bdRichPresenceService
==============
*/
void bdRichPresenceService::~bdRichPresenceService(bdRichPresenceService *this)
{
  ;
}

/*
==============
bdRichPresenceService::addUserAccountIDArray
==============
*/
void bdRichPresenceService::addUserAccountIDArray(bdRichPresenceService *this, bdTaskParams *params, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  const bdSerializable *v5; 
  __int64 v6; 

  if ( numUsers )
  {
    v5 = (const bdSerializable *)(&userAccountIDs->__vftable + 2);
    v6 = numUsers;
    do
    {
      bdBufferParams::addSerializable(params, v5);
      v5 = (const bdSerializable *)((char *)v5 + 72);
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
bdRichPresenceService::blockUsers
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::blockUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  __int64 v4; 
  _BOOL8 v8; 
  bool v9; 
  const bdSerializable *v10; 
  bdTaskParams params; 

  v4 = numUsers;
  result->m_ptr = NULL;
  bdHandleAssert(userAccountIDs != NULL, "(userAccountIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::blockUsers", 0xBAu, "Cannot call blockUsers() with a NULL userAccountIDs", 1, -2i64);
  bdHandleAssert((_DWORD)v4 != 0, "(numUsers > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::blockUsers", 0xBBu, "Cannot call blockUsers() with zero numUsers");
  if ( userAccountIDs && (_DWORD)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x44u, 0xBu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 4u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v4), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    v10 = (const bdSerializable *)(&userAccountIDs->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&params, v10);
      v10 = (const bdSerializable *)((char *)v10 + 72);
      --v4;
    }
    while ( v4 );
    bdRichPresenceService::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdRichPresenceService::getBlockedUsers
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::getBlockedUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userAccountIDs, const unsigned int maxNumResults, const unsigned int offset)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(userAccountIDs != NULL, "(userAccountIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getBlockedUsers", 0xE3u, "Cannot call getBlockedUsers() with a NULL userAccountIDs");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getBlockedUsers", 0xE4u, "Cannot call getBlockedUsers() with zero maxNumResults");
  if ( userAccountIDs && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x44u, 0xDu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, offset), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = userAccountIDs;
      params.m_maxResults = maxNumResults;
    }
    bdRichPresenceService::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdRichPresenceService::getInfo
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::getInfo(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, bdRichPresenceInfo *results, unsigned int count)
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
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v9;
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 9 * count + 72, 1);
    v11 = v10;
  }
  else
  {
    v11 = NULL;
  }
  buffer.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  result->m_ptr = NULL;
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x44u, 2u);
  v12 = 1;
  if ( !count )
    goto LABEL_15;
  v13 = count;
  do
  {
    v12 = v12 && bdByteBuffer::writeUInt64(buffer.m_ptr, *userIDs++);
    --v13;
  }
  while ( v13 );
  if ( v12 )
  {
LABEL_15:
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "richPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getInfo", 0x14Fu, "Failed to start task: Error %i", started);
    else
      bdRemoteTask::setTaskResult(result->m_ptr, results, count);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "richPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getInfo", 0x158u, "Failed to write param into buffer");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdRichPresenceService::getRichPresence
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::getRichPresence(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, bdRichPresenceData *results, const unsigned int maxNumResults)
{
  _BOOL8 v9; 
  bool v10; 
  const bdSerializable *v11; 
  __int64 v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(userAccountIDs != NULL, "(userAccountIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getRichPresence", 0x2Cu, "Cannot call getRichPresence() with a NULL userAccountIDs");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getRichPresence", 0x2Du, "Cannot call getRichPresence() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getRichPresence", 0x2Eu, "Cannot call getRichPresence() with zero maxNumResults");
  if ( userAccountIDs && results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x44u, 4u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v10) )
        params.m_serializeOk = 0;
    }
    v11 = (const bdSerializable *)(&userAccountIDs->__vftable + 2);
    v12 = maxNumResults;
    do
    {
      bdBufferParams::addSerializable(&params, v11);
      v11 = (const bdSerializable *)((char *)v11 + 72);
      --v12;
    }
    while ( v12 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdRichPresenceService::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdRichPresenceService::getRichPresenceAndSubscribe
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::getRichPresenceAndSubscribe(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, bdRichPresenceData *results, const unsigned int maxNumResults)
{
  _BOOL8 v9; 
  bool v10; 
  const bdSerializable *v11; 
  __int64 v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(userAccountIDs != NULL, "(userAccountIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getRichPresenceAndSubscribe", 0x43u, "Cannot call getRichPresenceAndSubscribe() with a NULL userAccountIDs");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getRichPresenceAndSubscribe", 0x44u, "Cannot call getRichPresenceAndSubscribe() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getRichPresenceAndSubscribe", 0x45u, "Cannot call getRichPresenceAndSubscribe() with zero maxNumResults");
  if ( userAccountIDs && results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x44u, 5u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v10) )
        params.m_serializeOk = 0;
    }
    v11 = (const bdSerializable *)(&userAccountIDs->__vftable + 2);
    v12 = maxNumResults;
    do
    {
      bdBufferParams::addSerializable(&params, v11);
      v11 = (const bdSerializable *)((char *)v11 + 72);
      --v12;
    }
    while ( v12 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdRichPresenceService::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdRichPresenceService::getSubscribers
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::getSubscribers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userAccountIDs, const unsigned int maxNumResults, const unsigned int offset)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(userAccountIDs != NULL, "(userAccountIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getSubscribers", 0xA5u, "Cannot call getSubscribers() with a NULL userAccountIDs");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getSubscribers", 0xA6u, "Cannot call getSubscribers() with zero maxNumResults");
  if ( userAccountIDs && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x44u, 0xAu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, offset), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = userAccountIDs;
      params.m_maxResults = maxNumResults;
    }
    bdRichPresenceService::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdRichPresenceService::getSubscriptions
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::getSubscriptions(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userAccountIDs, const unsigned int maxNumResults, const unsigned int offset)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(userAccountIDs != NULL, "(userAccountIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getSubscriptions", 0x8Fu, "Cannot call getSubscriptions() with a NULL userAccountIDs");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::getSubscriptions", 0x90u, "Cannot call getSubscriptions() with zero maxNumResults");
  if ( userAccountIDs && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x44u, 9u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, offset), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = userAccountIDs;
      params.m_maxResults = maxNumResults;
    }
    bdRichPresenceService::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdRichPresenceService::setInfo
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::setInfo(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, bdRichPresenceInfo *const newPresenceInfo)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 

  v6 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v6 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v6, 0x152u, 1);
    v8 = v7;
  }
  else
  {
    v8 = NULL;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  result->m_ptr = NULL;
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x44u, 1u);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, 0i64) && bdByteBuffer::writeBlob(buffer.m_ptr, &newPresenceInfo->_bytes_20[1], newPresenceInfo->m_count) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "richPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::setInfo", 0x12Fu, "Failed to start task: Error %i", started);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "richPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::setInfo", 0x134u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdRichPresenceService::setRichPresence
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::setRichPresence(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdRichPresenceData *richPresenceData)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x44u, 3u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdBufferParams::addSerializable(&params, (const bdSerializable *)(&richPresenceData->__vftable + 2));
  bdRichPresenceService::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdRichPresenceService::startTask
==============
*/
void bdRichPresenceService::startTask(bdRichPresenceService *this, bdReference<bdRemoteTask> *remoteTask, bdTaskParams *params)
{
  bdByteBuffer *m_ptr; 
  bdLobbyErrorCode started; 
  __int64 v8; 
  int m_arrayWriteCount; 

  if ( (params->m_isWritingArray || params->m_arrayWriteCount) && (m_arrayWriteCount = params->m_arrayWriteCount, bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", m_arrayWriteCount), params->m_isWritingArray) || params->m_arrayWriteCount || !params->m_serializeOk || (m_ptr = params->m_buffer.m_ptr) == NULL || !m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "richPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::startTask", 0x105u, "Failed to serialize the task buffer.");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, remoteTask, params);
    if ( started )
    {
      LODWORD(v8) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "richPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::startTask", 0x100u, "Failed to start task: Error %i", v8);
    }
  }
}

/*
==============
bdRichPresenceService::subscribeToUsers
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::subscribeToUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  __int64 v4; 
  _BOOL8 v8; 
  bool v9; 
  const bdSerializable *v10; 
  bdTaskParams params; 

  v4 = numUsers;
  result->m_ptr = NULL;
  bdHandleAssert(userAccountIDs != NULL, "(userAccountIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::subscribeToUsers", 0x59u, "Cannot call subscribe() with a NULL userAccountIDs", 1, -2i64);
  bdHandleAssert((_DWORD)v4 != 0, "(numUsers > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::subscribeToUsers", 0x5Au, "Cannot call subscribe() with zero numUsers");
  if ( userAccountIDs && (_DWORD)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x44u, 6u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 4u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v4), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    v10 = (const bdSerializable *)(&userAccountIDs->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&params, v10);
      v10 = (const bdSerializable *)((char *)v10 + 72);
      --v4;
    }
    while ( v4 );
    bdRichPresenceService::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdRichPresenceService::unblockUsers
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::unblockUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  __int64 v4; 
  _BOOL8 v8; 
  bool v9; 
  const bdSerializable *v10; 
  bdTaskParams params; 

  v4 = numUsers;
  result->m_ptr = NULL;
  bdHandleAssert(userAccountIDs != NULL, "(userAccountIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::unblockUsers", 0xCEu, "Cannot call unblockUsers() with a NULL userAccountIDs", 1, -2i64);
  bdHandleAssert((_DWORD)v4 != 0, "(numUsers > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::unblockUsers", 0xCFu, "Cannot call unblockUsers() with zero numUsers");
  if ( userAccountIDs && (_DWORD)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x44u, 0xCu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 4u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v4), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    v10 = (const bdSerializable *)(&userAccountIDs->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&params, v10);
      v10 = (const bdSerializable *)((char *)v10 + 72);
      --v4;
    }
    while ( v4 );
    bdRichPresenceService::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdRichPresenceService::unsubscribeAll
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::unsubscribeAll(bdRichPresenceService *this, bdReference<bdRemoteTask> *result)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x44u, 8u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdRichPresenceService::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdRichPresenceService::unsubscribeFromUsers
==============
*/
bdReference<bdRemoteTask> *bdRichPresenceService::unsubscribeFromUsers(bdRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userAccountIDs, const unsigned int numUsers)
{
  __int64 v4; 
  _BOOL8 v8; 
  bool v9; 
  const bdSerializable *v10; 
  bdTaskParams params; 

  v4 = numUsers;
  result->m_ptr = NULL;
  bdHandleAssert(userAccountIDs != NULL, "(userAccountIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::unsubscribeFromUsers", 0x6Du, "Cannot call unsubscribeFromUsers() with a NULL userAccountIDs", 1, -2i64);
  bdHandleAssert((_DWORD)v4 != 0, "(numUsers > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrichpresence\\bdrichpresenceservice.cpp", "bdRichPresenceService::unsubscribeFromUsers", 0x6Eu, "Cannot call unsubscribeFromUsers() with zero numUsers");
  if ( userAccountIDs && (_DWORD)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x44u, 7u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 4u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v4), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    v10 = (const bdSerializable *)(&userAccountIDs->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&params, v10);
      v10 = (const bdSerializable *)((char *)v10 + 72);
      --v4;
    }
    while ( v4 );
    bdRichPresenceService::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

