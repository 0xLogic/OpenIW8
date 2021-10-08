/*
==============
bdMarketingComms::reportFullMessagesViewed
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketingComms::reportFullMessagesViewed(bdMarketingComms *this, bdReference<bdRemoteTask> *result, bdMarketingMessage *messages, unsigned int numMessages)
{
  return ?reportFullMessagesViewed@bdMarketingComms@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketingMessage@@I@Z(this, result, messages, numMessages);
}

/*
==============
bdMarketingComms::getMessages
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketingComms::getMessages(bdMarketingComms *this, bdReference<bdRemoteTask> *result, const char *locale, bdMarketingMessage *messages, unsigned int numMessages)
{
  return ?getMessages@bdMarketingComms@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDQEAVbdMarketingMessage@@I@Z(this, result, locale, messages, numMessages);
}

/*
==============
bdMarketingComms::bdMarketingComms
==============
*/

void __fastcall bdMarketingComms::bdMarketingComms(bdMarketingComms *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdMarketingComms@@QEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdMarketingComms::getMessages
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketingComms::getMessages(bdMarketingComms *this, bdReference<bdRemoteTask> *result, const char *locale, bdCommsLocationMessages *locationMessages, unsigned int locationMessagesCount)
{
  return ?getMessages@bdMarketingComms@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDQEAVbdCommsLocationMessages@@I@Z(this, result, locale, locationMessages, locationMessagesCount);
}

/*
==============
bdMarketingComms::~bdMarketingComms
==============
*/

void __fastcall bdMarketingComms::~bdMarketingComms(bdMarketingComms *this)
{
  ??1bdMarketingComms@@QEAA@XZ(this);
}

/*
==============
bdMarketingComms::getMessages
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketingComms::getMessages(bdMarketingComms *this, bdReference<bdRemoteTask> *result, bdCommsGetMessagesRequest *request, bdCommsGetMessagesResponse *response)
{
  return ?getMessages@bdMarketingComms@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdCommsGetMessagesRequest@@PEAVbdCommsGetMessagesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketingComms::reportMessagesViewed
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketingComms::reportMessagesViewed(bdMarketingComms *this, bdReference<bdRemoteTask> *result, bdCommsReportMessagesViewedRequest *request, bdCommsReportMessagesViewedResponse *response)
{
  return ?reportMessagesViewed@bdMarketingComms@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdCommsReportMessagesViewedRequest@@PEAVbdCommsReportMessagesViewedResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketingComms::bdMarketingComms
==============
*/
void bdMarketingComms::bdMarketingComms(bdMarketingComms *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  this->m_remoteTaskManager = remoteTaskManager;
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdMarketingComms::~bdMarketingComms
==============
*/
void bdMarketingComms::~bdMarketingComms(bdMarketingComms *this)
{
  ;
}

/*
==============
bdMarketingComms::getMessages
==============
*/
bdReference<bdRemoteTask> *bdMarketingComms::getMessages(bdMarketingComms *this, bdReference<bdRemoteTask> *result, bdCommsGetMessagesRequest *request, bdCommsGetMessagesResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdHandleAssert(request->m_locationCounts.m_size != 0, "(request->m_locationCounts.getSize() > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::getMessages", 0x82u, "Cannot Call getMessages() with empty locationCounts.");
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x68u, 6u, request, response, NULL);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketingcomms", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::getMessages", 0x8Au, "Failed to start task: Error %i", v11);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketingComms::getMessages
==============
*/
bdReference<bdRemoteTask> *bdMarketingComms::getMessages(bdMarketingComms *this, bdReference<bdRemoteTask> *result, const char *locale, bdCommsLocationMessages *locationMessages, unsigned int locationMessagesCount)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  unsigned __int8 i; 
  _BOOL8 v13; 
  bool v14; 
  bool v15; 
  bdLobbyErrorCode started; 
  __int64 v18; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdHandleAssert(locationMessagesCount != 0, "(locationMessagesCount > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::getMessages", 0x52u, "Cannot Call getMessages() with zero locationMessagesCount");
  bdHandleAssert(locationMessages != NULL, "(locationMessages != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::getMessages", 0x53u, "Cannot Call getMessages() with NULL locationMessages");
  if ( locationMessagesCount && locationMessages )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0x68u, 5u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, locale, 0x14ui64);
    LOBYTE(v9) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, locationMessagesCount), taskParams.m_serializeOk = 1, !v11) )
        taskParams.m_serializeOk = 0;
    }
    for ( i = 0; i < locationMessagesCount; ++i )
    {
      LOBYTE(v10) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, *((_DWORD *)&locationMessages[i].__vftable + 4)), taskParams.m_serializeOk = 1, !v14) )
          taskParams.m_serializeOk = 0;
      }
      LOBYTE(v13) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, locationMessages[i].m_numMessagesToFetch), taskParams.m_serializeOk = 1, !v15) )
          taskParams.m_serializeOk = 0;
      }
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = locationMessages;
      taskParams.m_maxResults = locationMessagesCount;
    }
    if ( (taskParams.m_isWritingArray || taskParams.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", taskParams.m_arrayWriteCount), taskParams.m_isWritingArray) || taskParams.m_arrayWriteCount) || !taskParams.m_serializeOk || !taskParams.m_buffer.m_ptr || !taskParams.m_buffer.m_ptr->m_data )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "marketingcomms", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::getMessages", 0x73u, "Failed to write param into buffer");
    }
    else
    {
      started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
      if ( started )
      {
        LODWORD(v18) = started;
        bdLogMessage(BD_LOG_WARNING, "warn/", "marketingcomms", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::getMessages", 0x6Eu, "Failed to start task: Error %i", v18);
      }
    }
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdMarketingComms::getMessages
==============
*/
bdReference<bdRemoteTask> *bdMarketingComms::getMessages(bdMarketingComms *this, bdReference<bdRemoteTask> *result, const char *locale, bdMarketingMessage *messages, unsigned int numMessages)
{
  const char *v6; 
  bdMarketingComms *v8; 
  unsigned int v9; 
  int v10; 
  void *v11; 
  int v12; 
  unsigned int v13; 
  bdMarketingMessage *v14; 
  bdMarketingMessage *v15; 
  __int64 v16; 
  bdTaskByteBuffer *v17; 
  bdTaskByteBuffer *v18; 
  bdTaskByteBuffer *v19; 
  bool v20; 
  bdMarketingMessage *v21; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v25; 

  v25 = -2i64;
  v6 = locale;
  v8 = this;
  v9 = 0;
  if ( locale )
  {
    v11 = memchr_0(locale, 0, 0x14ui64);
    v12 = 20;
    if ( v11 )
      v12 = (_DWORD)v11 - (_DWORD)v6;
    v10 = v12 + 2;
  }
  else
  {
    v10 = 0;
  }
  v13 = v10 + numMessages + 72;
  if ( numMessages )
  {
    v14 = messages;
    v15 = messages;
    v16 = numMessages;
    do
    {
      v13 += v14->sizeOf(v15++);
      ++v14;
      --v16;
    }
    while ( v16 );
    v6 = locale;
    v8 = this;
  }
  v17 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v17 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v17, v13, 1);
    v19 = v18;
  }
  else
  {
    v19 = NULL;
  }
  buffer.m_ptr = v19;
  if ( v19 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
  result->m_ptr = NULL;
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x68u, 1u);
  v20 = bdByteBuffer::writeString(buffer.m_ptr, v6, 0x14ui64);
  if ( numMessages )
  {
    v21 = messages;
    do
    {
      v20 = v20 && v21->serialize(&messages[v9++], buffer.m_ptr);
      ++v21;
    }
    while ( v9 < numMessages );
  }
  if ( v20 )
  {
    started = bdRemoteTaskManager::startTask(v8->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "marketingcomms", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::getMessages", 0x3Cu, "Failed to start task: Error %i", started);
    else
      bdRemoteTask::setTaskResult(result->m_ptr, messages, numMessages);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketingcomms", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::getMessages", 0x45u, "Failed to write param into buffer");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketingComms::reportFullMessagesViewed
==============
*/
bdReference<bdRemoteTask> *bdMarketingComms::reportFullMessagesViewed(bdMarketingComms *this, bdReference<bdRemoteTask> *result, bdMarketingMessage *messages, unsigned int numMessages)
{
  unsigned __int16 v8; 
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  _BOOL8 v12; 
  bool v13; 
  bool v14; 
  bdLobbyErrorCode started; 
  __int64 v17; 
  bdTaskParams taskParams; 

  v8 = 0;
  result->m_ptr = NULL;
  bdHandleAssert(messages != NULL, "(messages != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::reportFullMessagesViewed", 0x95u, "Cannot Call reportMessagesViewed() with NULL messages");
  bdHandleAssert(numMessages != 0, "(numMessages > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::reportFullMessagesViewed", 0x96u, "Cannot Call reportMessagesViewed() with zero messages");
  if ( messages && numMessages )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0x68u, 4u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v9) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numMessages), taskParams.m_serializeOk = 1, !v11) )
        taskParams.m_serializeOk = 0;
    }
    do
    {
      LOBYTE(v10) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v10) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *((_QWORD *)&messages[v8].__vftable + 2)), taskParams.m_serializeOk = 1, !v13) )
          taskParams.m_serializeOk = 0;
      }
      LOBYTE(v12) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, *((_DWORD *)&messages[v8].__vftable + 6)), taskParams.m_serializeOk = 1, !v14) )
          taskParams.m_serializeOk = 0;
      }
      bdBufferParams::addString(&taskParams, (const char *)&messages[v8++].__vftable + 28, 0x14ui64);
    }
    while ( v8 < numMessages );
    if ( (taskParams.m_isWritingArray || taskParams.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", taskParams.m_arrayWriteCount), taskParams.m_isWritingArray) || taskParams.m_arrayWriteCount) || !taskParams.m_serializeOk || !taskParams.m_buffer.m_ptr || !taskParams.m_buffer.m_ptr->m_data )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "marketingcomms", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::reportFullMessagesViewed", 0xAFu, "Failed to write param into buffer");
    }
    else
    {
      started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
      if ( started )
      {
        LODWORD(v17) = started;
        bdLogMessage(BD_LOG_WARNING, "warn/", "marketingcomms", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::reportFullMessagesViewed", 0xAAu, "Failed to start task: Error %i", v17);
      }
    }
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdMarketingComms::reportMessagesViewed
==============
*/
bdReference<bdRemoteTask> *bdMarketingComms::reportMessagesViewed(bdMarketingComms *this, bdReference<bdRemoteTask> *result, bdCommsReportMessagesViewedRequest *request, bdCommsReportMessagesViewedResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdHandleAssert(request->m_messages.m_size != 0, "(request->m_messages.getSize() > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::reportMessagesViewed", 0xC1u, "Cannot Call reportMessagesViewed() with empty messages.");
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x68u, 7u, request, response, NULL);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketingcomms", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketingcomms\\bdmarketingcomms.cpp", "bdMarketingComms::reportMessagesViewed", 0xC9u, "Failed to start task: Error %i", v11);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

