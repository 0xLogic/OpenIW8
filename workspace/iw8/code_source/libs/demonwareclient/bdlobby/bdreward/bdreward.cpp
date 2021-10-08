/*
==============
bdReward::reportRewardGameEvents
==============
*/

bdReference<bdRemoteTask> *__fastcall bdReward::reportRewardGameEvents(bdReward *this, bdReference<bdRemoteTask> *result, const bdRewardGameEvent **gameEvents, const unsigned __int16 numEvents)
{
  return ?reportRewardGameEvents@bdReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAPEBVbdRewardGameEvent@@G@Z(this, result, gameEvents, numEvents);
}

/*
==============
bdReward::claimRewardRoll
==============
*/

bdReference<bdRemoteTask> *__fastcall bdReward::claimRewardRoll(bdReward *this, bdReference<bdRemoteTask> *result)
{
  return ?claimRewardRoll@bdReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdReportRewardGameEventsRequest::deserialize
==============
*/

bool __fastcall bdReportRewardGameEventsRequest::deserialize(bdReportRewardGameEventsRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdReportRewardGameEventsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdGetRulesDefinitionRequest::deserialize
==============
*/

bool __fastcall bdGetRulesDefinitionRequest::deserialize(bdGetRulesDefinitionRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdGetRulesDefinitionRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdReward::claimClientAchievements
==============
*/

bdReference<bdRemoteTask> *__fastcall bdReward::claimClientAchievements(bdReward *this, bdReference<bdRemoteTask> *result, const bdUserAchievement *userAchievements, const unsigned __int16 numAchievements, const bdSessionID *sessionID)
{
  return ?claimClientAchievements@bdReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAchievement@@GVbdSessionID@@@Z(this, result, userAchievements, numAchievements, sessionID);
}

/*
==============
bdReward::getRulesDefinition
==============
*/

bdReference<bdRemoteTask> *__fastcall bdReward::getRulesDefinition(bdReward *this, bdReference<bdRemoteTask> *result, bdRulesDefinition *definedRulesInfo, const char *pageToken, const unsigned __int16 kind, const unsigned __int16 limit)
{
  return ?getRulesDefinition@bdReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdRulesDefinition@@PEBDGG@Z(this, result, definedRulesInfo, pageToken, kind, limit);
}

/*
==============
bdReward::incrementTime
==============
*/

bdReference<bdRemoteTask> *__fastcall bdReward::incrementTime(bdReward *this, bdReference<bdRemoteTask> *result, const unsigned int rewardType, const unsigned int value)
{
  return ?incrementTime@bdReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@II@Z(this, result, rewardType, value);
}

/*
==============
bdReward::reportRewardEventsSync
==============
*/

bdReference<bdRemoteTask> *__fastcall bdReward::reportRewardEventsSync(bdReward *this, bdReference<bdRemoteTask> *result, const bdRewardEvent **events, const unsigned __int16 numEvents, bdRewardEvent *resultEvents, const unsigned __int16 maxResults)
{
  return ?reportRewardEventsSync@bdReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAPEBVbdRewardEvent@@GPEAV3@G@Z(this, result, events, numEvents, resultEvents, maxResults);
}

/*
==============
bdReward::reportRewardEvents
==============
*/

bdReference<bdRemoteTask> *__fastcall bdReward::reportRewardEvents(bdReward *this, bdReference<bdRemoteTask> *result, const bdRewardEvent **events, const unsigned __int16 numEvents)
{
  return ?reportRewardEvents@bdReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAPEBVbdRewardEvent@@G@Z(this, result, events, numEvents);
}

/*
==============
bdReward::bdReward
==============
*/

void __fastcall bdReward::bdReward(bdReward *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdReward@@QEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdReportRewardGameEventsForUsersRequest::deserialize
==============
*/

bool __fastcall bdReportRewardGameEventsForUsersRequest::deserialize(bdReportRewardGameEventsForUsersRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdReportRewardGameEventsForUsersRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdReward::reportRewardGameEventsForUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdReward::reportRewardGameEventsForUser(bdReward *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID, const bdRewardGameEvent **gameEvents, const unsigned __int16 numEvents)
{
  return ?reportRewardGameEventsForUser@bdReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdUserAccountID@@QEAPEBVbdRewardGameEvent@@G@Z(this, result, userID, gameEvents, numEvents);
}

/*
==============
bdReportRewardGameEventsForUsersRequest::serialize
==============
*/

bool __fastcall bdReportRewardGameEventsForUsersRequest::serialize(bdReportRewardGameEventsForUsersRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdReportRewardGameEventsForUsersRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdReward::reportRewardGameEventsForUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdReward::reportRewardGameEventsForUsers(bdReward *this, bdReference<bdRemoteTask> *result, const bdRewardUserGameEventsList *userGameEvents, const unsigned int numUsers)
{
  return ?reportRewardGameEventsForUsers@bdReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdRewardUserGameEventsList@@I@Z(this, result, userGameEvents, numUsers);
}

/*
==============
bdGetRulesDefinitionRequest::serialize
==============
*/

bool __fastcall bdGetRulesDefinitionRequest::serialize(bdGetRulesDefinitionRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdGetRulesDefinitionRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdReward::~bdReward
==============
*/

void __fastcall bdReward::~bdReward(bdReward *this)
{
  ??1bdReward@@QEAA@XZ(this);
}

/*
==============
bdReportRewardGameEventsRequest::serialize
==============
*/

bool __fastcall bdReportRewardGameEventsRequest::serialize(bdReportRewardGameEventsRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdReportRewardGameEventsRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdReward::bdReward
==============
*/
void bdReward::bdReward(bdReward *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  this->m_remoteTaskManager = remoteTaskManager;
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdReward::~bdReward
==============
*/
void bdReward::~bdReward(bdReward *this)
{
  this->m_remoteTaskManager = NULL;
}

/*
==============
bdReward::claimClientAchievements
==============
*/
bdReference<bdRemoteTask> *bdReward::claimClientAchievements(bdReward *this, bdReference<bdRemoteTask> *result, const bdUserAchievement *userAchievements, const unsigned __int16 numAchievements, const bdSessionID *sessionID)
{
  __int64 v5; 
  const bdUserAchievement *v6; 
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams taskParams; 
  __int64 v13; 
  bdReference<bdRemoteTask> *v14; 
  const bdSessionID *v15; 

  v13 = -2i64;
  LOWORD(v5) = numAchievements;
  v6 = userAchievements;
  v14 = result;
  v15 = sessionID;
  result->m_ptr = NULL;
  bdHandleAssert(userAchievements != NULL, "(userAchievements != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::claimClientAchievements", 0x42u, "Cannot call claimClientAchievements() with a NULL userAchievements.", 1);
  bdHandleAssert((_WORD)v5 != 0, "(numAchievements > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::claimClientAchievements", 0x43u, "Cannot call claimClientAchievements() with zero numAchievements.");
  if ( v6 && (_WORD)v5 )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0x8Bu, 3u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v9) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 2u, v9) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, v5), taskParams.m_serializeOk = 1, !v10) )
        taskParams.m_serializeOk = 0;
    }
    v5 = (unsigned __int16)v5;
    do
    {
      bdBufferParams::addSerializable(&taskParams, v6++);
      --v5;
    }
    while ( v5 );
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&sessionID->__vftable + 2));
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdSecurityID::~bdSecurityID((bdSecurityID *)sessionID->_bytes_20);
  bdSerializable::~bdSerializable((bdSerializable *)sessionID->_bytes_20);
  bdTaskResult::~bdTaskResult((bdTaskResult *)(&sessionID->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&sessionID->_bytes_20[8]);
  return result;
}

/*
==============
bdReward::claimRewardRoll
==============
*/
bdReference<bdRemoteTask> *bdReward::claimRewardRoll(bdReward *this, bdReference<bdRemoteTask> *result)
{
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x8Bu, 2u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdGetRulesDefinitionRequest::deserialize
==============
*/
char bdGetRulesDefinitionRequest::deserialize(bdGetRulesDefinitionRequest *this, bdStructBufferDeserializer *__formal)
{
  return 1;
}

/*
==============
bdReportRewardGameEventsForUsersRequest::deserialize
==============
*/
char bdReportRewardGameEventsForUsersRequest::deserialize(bdReportRewardGameEventsForUsersRequest *this, bdStructBufferDeserializer *__formal)
{
  return 1;
}

/*
==============
bdReportRewardGameEventsRequest::deserialize
==============
*/
char bdReportRewardGameEventsRequest::deserialize(bdReportRewardGameEventsRequest *this, bdStructBufferDeserializer *__formal)
{
  return 1;
}

/*
==============
bdReward::getRulesDefinition
==============
*/
bdReference<bdRemoteTask> *bdReward::getRulesDefinition(bdReward *this, bdReference<bdRemoteTask> *result, bdRulesDefinition *definedRulesInfo, const char *pageToken, const unsigned __int16 kind, const unsigned __int16 limit)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  unsigned __int32 v12; 
  bdLobbyErrorCode v14; 
  bdReference<bdStructBufferTask> newTask; 
  int v16; 
  __int64 v17; 
  bdStructBufferSerializable request; 
  unsigned __int16 v19; 
  char dst[16]; 
  bdReferencable v21; 

  v17 = -2i64;
  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(definedRulesInfo != NULL, "(definedRulesInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::getRulesDefinition", 0x187u, "Cannot call getRulesDefinition() with NULL definedRulesInfo.");
  bdHandleAssert(pageToken != NULL, "(pageToken != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::getRulesDefinition", 0x188u, "Cannot call getRulesDefinition() with NULL pageToken.");
  *((_QWORD *)&request.__vftable + 1) = &bdGetRulesDefinitionRequest::`vbtable';
  v21.__vftable = (bdReferencable_vtbl *)&bdReferencable::`vftable';
  v21.m_refCount.m_value._My_val = 0;
  v16 = 2;
  bdStructBufferSerializable::bdStructBufferSerializable(&request);
  request.__vftable = (bdStructBufferSerializable_vtbl *)&bdGetRulesDefinitionRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&request.__vftable + *(int *)(*((_QWORD *)&request.__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdGetRulesDefinitionRequest::`vftable'{for `bdReferencable'};
  *((_WORD *)&request.__vftable + 8) = kind;
  v19 = limit;
  bdStrlcpy(dst, this->m_context, 0x10ui64);
  bdStrlcpy((char *const)&request.__vftable + 18, pageToken, 0x14ui64);
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x8Bu, 9u, &request, definedRulesInfo, NULL);
  if ( started )
  {
    v14 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdReward", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::getRulesDefinition", 0x192u, "Failed to start task: Error %i", v14);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr )
  {
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF);
    if ( v12 == 1 )
    {
      if ( newTask.m_ptr )
        ((void (__fastcall *)(bdStructBufferTask *, _QWORD))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, v12);
      newTask.m_ptr = NULL;
    }
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable(&v21);
  return result;
}

/*
==============
bdReward::incrementTime
==============
*/
bdReference<bdRemoteTask> *bdReward::incrementTime(bdReward *this, bdReference<bdRemoteTask> *result, const unsigned int rewardType, const unsigned int value)
{
  unsigned __int64 v5; 
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  bdTaskParams taskParams; 

  v5 = rewardType;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x8Bu, 1u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, v5), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, value), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdReward::reportRewardEvents
==============
*/
bdReference<bdRemoteTask> *bdReward::reportRewardEvents(bdReward *this, bdReference<bdRemoteTask> *result, const bdRewardEvent **events, const unsigned __int16 numEvents)
{
  const bdRewardEvent **v5; 
  bool v8; 
  unsigned __int16 v9; 
  const bdRewardEvent **v10; 
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  bdTaskParams taskParams; 

  v5 = events;
  result->m_ptr = NULL;
  bdHandleAssert(events != NULL, "(events != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardEvents", 0x5Bu, "Cannot call reportRewardEvents() with NULL events.", 1, -2i64);
  bdHandleAssert(numEvents != 0, "(numEvents > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardEvents", 0x5Cu, "Cannot call reportRewardEvents() with zero numEvents.");
  if ( v5 && numEvents )
  {
    v8 = 1;
    v9 = 0;
    while ( v8 )
    {
      v10 = &v5[v9];
      bdHandleAssert(*v10 != NULL, "(events[i] != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardEvents", 0x65u, "Cannot call reportRewardEvents() with a NULL bdRewardEvent.");
      v8 = *v10 != NULL;
      if ( ++v9 >= numEvents )
      {
        if ( *v10 )
        {
          bdTaskParams::bdTaskParams(&taskParams, 0x8Bu, 4u, 0x400u, 0xFFFFu);
          bdTaskParams::addContext(&taskParams, this->m_context);
          LOBYTE(v11) = 1;
          if ( taskParams.ensureCapacity(&taskParams, 2u, v11) )
          {
            if ( taskParams.m_isWritingArray )
              --taskParams.m_arrayWriteCount;
            if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, numEvents), taskParams.m_serializeOk = 1, !v12) )
              taskParams.m_serializeOk = 0;
          }
          v13 = numEvents;
          do
          {
            bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&(*v5++)->__vftable + 2));
            --v13;
          }
          while ( v13 );
          bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
          bdTaskParams::~bdTaskParams(&taskParams);
        }
        return result;
      }
    }
  }
  return result;
}

/*
==============
bdReward::reportRewardEventsSync
==============
*/
bdReference<bdRemoteTask> *bdReward::reportRewardEventsSync(bdReward *this, bdReference<bdRemoteTask> *result, const bdRewardEvent **events, const unsigned __int16 numEvents, bdRewardEvent *resultEvents, const unsigned __int16 maxResults)
{
  const bdRewardEvent **v7; 
  unsigned __int16 v10; 
  bool v11; 
  const bdRewardEvent **v12; 
  _BOOL8 v13; 
  bool v14; 
  __int64 v15; 
  bdTaskParams taskParams; 

  v7 = events;
  v10 = 0;
  result->m_ptr = NULL;
  bdHandleAssert(events != NULL, "(events != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardEventsSync", 0x121u, "Cannot call reportRewardEvents() with NULL events.");
  bdHandleAssert(numEvents != 0, "(numEvents > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardEventsSync", 0x122u, "Cannot call reportRewardEvents() with zero numEvents.");
  v11 = 0;
  if ( v7 && numEvents )
  {
    v11 = 1;
    do
    {
      if ( !v11 )
        break;
      v12 = &v7[v10];
      bdHandleAssert(*v12 != NULL, "(events[i] != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardEventsSync", 0x12Cu, "Cannot call reportRewardEventsSynchronous() with NULL bdRewardEvent events.");
      v11 = *v12 != NULL;
      ++v10;
    }
    while ( v10 < numEvents );
    v10 = 0;
  }
  if ( maxResults && resultEvents )
  {
    while ( v11 )
    {
      v11 = &resultEvents[v10] != NULL;
      bdHandleAssert(v11, "(&resultEvents[i] != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardEventsSync", 0x136u, "Cannot call reportRewardEventsSynchronous() with NULL bdRewardEvent resultEvents.");
      if ( ++v10 >= maxResults )
        goto LABEL_11;
    }
    goto LABEL_28;
  }
LABEL_11:
  if ( !v11 )
  {
LABEL_28:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardEventsSync", 0x151u, "Invalid RewardEvent pointers");
    return result;
  }
  bdTaskParams::bdTaskParams(&taskParams, 0x8Bu, 5u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, numEvents), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  if ( numEvents )
  {
    v15 = numEvents;
    do
    {
      bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&(*v7++)->__vftable + 2));
      --v15;
    }
    while ( v15 );
  }
  if ( maxResults && resultEvents )
  {
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = resultEvents;
      taskParams.m_maxResults = maxResults;
    }
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdReward::reportRewardGameEvents
==============
*/
bdReference<bdRemoteTask> *bdReward::reportRewardGameEvents(bdReward *this, bdReference<bdRemoteTask> *result, const bdRewardGameEvent **gameEvents, const unsigned __int16 numEvents)
{
  bool v8; 
  unsigned __int16 v9; 
  const bdRewardGameEvent **v10; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v14; 
  bdReference<bdStructBufferTask> newTask; 
  int v16; 
  __int64 v17; 
  bdStructBufferSerializable request; 
  unsigned __int16 v19; 
  const bdRewardGameEvent **v20; 
  bdReferencable v21; 

  v17 = -2i64;
  v16 = 0;
  newTask.m_ptr = NULL;
  bdHandleAssert(gameEvents != NULL, "(gameEvents != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEvents", 0xA1u, "Cannot call reportRewardGameEvents() with NULL gameEvents.");
  bdHandleAssert(numEvents != 0, "(numEvents > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEvents", 0xA2u, "Cannot call reportRewardGameEvents() with zero numEvents.");
  if ( gameEvents && numEvents )
  {
    v8 = 1;
    v9 = 0;
    while ( v8 )
    {
      v10 = &gameEvents[v9];
      bdHandleAssert(*v10 != NULL, "(gameEvents[i] != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEvents", 0xABu, "Cannot call reportRewardEvents() with a NULL bdRewardGameEvent.");
      v8 = *v10 != NULL;
      if ( ++v9 >= numEvents )
      {
        if ( *v10 )
        {
          *((_QWORD *)&request.__vftable + 1) = &bdReportRewardGameEventsRequest::`vbtable';
          v21.__vftable = (bdReferencable_vtbl *)&bdReferencable::`vftable';
          v21.m_refCount.m_value._My_val = 0;
          v16 = 2;
          bdStructBufferSerializable::bdStructBufferSerializable(&request);
          request.__vftable = (bdStructBufferSerializable_vtbl *)&bdReportRewardGameEventsRequest::`vftable'{for `bdStructBufferSerializable'};
          *(bdStructBufferSerializable_vtbl **)((char *)&request.__vftable + *(int *)(*((_QWORD *)&request.__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdReportRewardGameEventsRequest::`vftable'{for `bdReferencable'};
          v19 = numEvents;
          v20 = gameEvents;
          bdStrlcpy((char *const)&request.__vftable + 16, this->m_context, 0x10ui64);
          started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x8Bu, 0xCu, &request, NULL, NULL);
          if ( started )
          {
            v14 = started;
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdReward", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEvents", 0xB8u, "Failed to start task: Error %i", v14);
          }
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
          bdReferencable::~bdReferencable(&v21);
        }
        break;
      }
    }
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
bdReward::reportRewardGameEventsForUser
==============
*/
bdReference<bdRemoteTask> *bdReward::reportRewardGameEventsForUser(bdReward *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID, const bdRewardGameEvent **gameEvents, const unsigned __int16 numEvents)
{
  const bdUserAccountID *v9; 
  bdReference<bdRemoteTask> *v10; 
  bdRemoteTask *m_ptr; 
  int v13; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  bdUserAccountID v17; 
  bdStructBufferSerializable __formal; 
  bdStructUserAccountID other; 
  bdRewardUserGameEventsList v20; 
  bdReferencable v21; 

  v15 = -2i64;
  v16 = result;
  result->m_ptr = NULL;
  v13 = 1;
  bdHandleAssert(gameEvents != NULL, "(gameEvents != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEventsForUser", 0xC3u, "Cannot call reportRewardGameEventsForUser() with NULL gameEvents.", v13);
  bdHandleAssert(numEvents != 0, "(numEvents > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEventsForUser", 0xC4u, "Cannot call reportRewardGameEventsForUser() with zero numEvents.");
  if ( gameEvents && numEvents )
  {
    bdUserAccountID::bdUserAccountID(&v17, userID);
    bdRewardUserGameEventsList::bdRewardUserGameEventsList((bdRewardUserGameEventsList *)&__formal, v9, numEvents, gameEvents);
    v20.m_user.__vftable = (bdStructUserAccountID_vtbl *)&bdRewardUserGameEventsList::`vbtable';
    bdReferencable::bdReferencable(&v21, (const bdReferencable *)((char *)&__formal.__vftable + *(int *)(*((_QWORD *)&__formal.__vftable + 1) + 4i64) + 8));
    bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&v20.__vftable + 3), &__formal);
    *((_QWORD *)&v20.__vftable + 3) = &bdRewardUserGameEventsList::`vftable'{for `bdStructBufferSerializable'};
    *(bdStructUserAccountID_vtbl **)((char *)&v20.m_user.__vftable + SHIDWORD(v20.m_user.deserialize)) = (bdStructUserAccountID_vtbl *)&bdRewardUserGameEventsList::`vftable'{for `bdReferencable'};
    *((_QWORD *)&v20.m_user.__vftable + 1) = *((_QWORD *)&__formal.__vftable + 2);
    *((_DWORD *)&v20.m_user.__vftable + 4) = *((_DWORD *)&__formal.__vftable + 6);
    bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&v20.m_user.__vftable + 3), &other);
    v10 = bdReward::reportRewardGameEventsForUsers(this, &resulta, (const bdRewardUserGameEventsList *)(&v20.__vftable + 3), 1u);
    if ( v10 != result )
    {
      if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
      m_ptr = v10->m_ptr;
      result->m_ptr = v10->m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    `eh vector destructor iterator'(&v20.__vftable + 3, 0x88ui64, 1ui64, (void (__fastcall *)(void *))bdRewardUserGameEventsList::`vbase destructor);
    bdRewardUserGameEventsList::~bdRewardUserGameEventsList(&v20);
    bdReferencable::~bdReferencable((bdReferencable *)&v20);
  }
  return result;
}

/*
==============
bdReward::reportRewardGameEventsForUsers
==============
*/
bdReference<bdRemoteTask> *bdReward::reportRewardGameEventsForUsers(bdReward *this, bdReference<bdRemoteTask> *result, const bdRewardUserGameEventsList *userGameEvents, const unsigned int numUsers)
{
  bdReference<bdRemoteTask> *v6; 
  bool v8; 
  unsigned int v9; 
  bdRewardUserGameEventsList_vtbl **v10; 
  bdRewardUserGameEventsList_vtbl *v11; 
  __int64 v12; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v16; 
  bdReference<bdStructBufferTask> newTask; 
  int v18; 
  bdReference<bdRemoteTask> *v19; 
  __int64 v20; 
  bdStructBufferSerializable request; 
  unsigned int v22; 
  const bdRewardUserGameEventsList *v23; 
  bdReferencable v24; 

  v20 = -2i64;
  v6 = result;
  v19 = result;
  v18 = 0;
  newTask.m_ptr = NULL;
  bdHandleAssert(userGameEvents != NULL, "(userGameEvents != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEventsForUsers", 0xF7u, "Cannot call reportRewardGameEventsForUsers() with NULL userGameEvents.");
  bdHandleAssert(numUsers != 0, "(numUsers > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEventsForUsers", 0xF8u, "Cannot call reportRewardGameEventsForUsers() with zero numUsers.");
  if ( userGameEvents && numUsers )
  {
    v8 = 1;
    v9 = 0;
    v10 = &userGameEvents->__vftable + 2;
    while ( v8 )
    {
      bdHandleAssert(*v10 != NULL, "(userGameEvents[i].m_events != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEventsForUsers", 0x102u, "Cannot call reportRewardGameEventsForUsers() with a NULL list of bdRewardGameEvents.");
      v11 = *v10;
      v8 = *v10 != NULL;
      v12 = 0i64;
      if ( *((_DWORD *)v10 + 2) )
      {
        do
        {
          if ( !v8 )
            break;
          bdHandleAssert(*((_QWORD *)&v11->serialize + v12) != 0i64, "(userGameEvents[i].m_events[j] != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEventsForUsers", 0x106u, "Cannot call reportRewardGameEventsForUsers() with a NULL bdRewardGameEvent.");
          v11 = *v10;
          v8 = *((_QWORD *)&(*v10)->serialize + v12) != 0i64;
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < *((_DWORD *)v10 + 2) );
        v6 = v19;
      }
      ++v9;
      v10 += 17;
      if ( v9 >= numUsers )
      {
        if ( v8 )
        {
          *((_QWORD *)&request.__vftable + 1) = &bdReportRewardGameEventsForUsersRequest::`vbtable';
          v24.__vftable = (bdReferencable_vtbl *)&bdReferencable::`vftable';
          v24.m_refCount.m_value._My_val = 0;
          v18 = 2;
          bdStructBufferSerializable::bdStructBufferSerializable(&request);
          request.__vftable = (bdStructBufferSerializable_vtbl *)&bdReportRewardGameEventsForUsersRequest::`vftable'{for `bdStructBufferSerializable'};
          *(bdStructBufferSerializable_vtbl **)((char *)&request.__vftable + *(int *)(*((_QWORD *)&request.__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdReportRewardGameEventsForUsersRequest::`vftable'{for `bdReferencable'};
          v22 = numUsers;
          v23 = userGameEvents;
          bdStrlcpy((char *const)&request.__vftable + 16, this->m_context, 0x10ui64);
          started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x8Bu, 0xBu, &request, NULL, NULL);
          if ( started )
          {
            v16 = started;
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdReward", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdreward.cpp", "bdReward::reportRewardGameEventsForUsers", 0x114u, "Failed to start task: Error %i", v16);
          }
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
          bdReferencable::~bdReferencable(&v24);
        }
        break;
      }
    }
  }
  m_ptr = newTask.m_ptr;
  v6->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return v6;
}

/*
==============
bdGetRulesDefinitionRequest::serialize
==============
*/
bool bdGetRulesDefinitionRequest::serialize(bdGetRulesDefinitionRequest *this, bdStructBufferSerializer *serializer)
{
  bool result; 
  unsigned __int16 v5; 

  result = bdStructBufferSerializer::writeString(serializer, 1u, this->m_context, 0x10u) && bdStructBufferSerializer::writeUInt16(serializer, 5u, this->m_limit) && bdStructBufferSerializer::writeString(serializer, 6u, (const char *)&this->__vftable + 18, 0x14u);
  v5 = *((_WORD *)&this->__vftable + 8);
  if ( v5 )
    return result && bdStructBufferSerializer::writeUInt16(serializer, 7u, v5);
  return result;
}

/*
==============
bdReportRewardGameEventsForUsersRequest::serialize
==============
*/
bool bdReportRewardGameEventsForUsersRequest::serialize(bdReportRewardGameEventsForUsersRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned int m_numUsers; 
  unsigned int v5; 
  bool v6; 

  if ( !bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) )
    return 0;
  m_numUsers = this->m_numUsers;
  v5 = 0;
  v6 = 1;
  if ( !m_numUsers )
    return 1;
  do
    v6 = v6 && bdStructBufferSerializer::writeObject(serializer, 2u, &this->m_userEvents[v5++]);
  while ( v5 < m_numUsers );
  return v6;
}

/*
==============
bdReportRewardGameEventsRequest::serialize
==============
*/
bool bdReportRewardGameEventsRequest::serialize(bdReportRewardGameEventsRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned __int16 m_numEvents; 
  __int64 v5; 
  bool v6; 
  __int64 v7; 

  if ( !bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) )
    return 0;
  m_numEvents = this->m_numEvents;
  v5 = 0i64;
  v6 = 1;
  if ( !m_numEvents )
    return 1;
  v7 = m_numEvents;
  do
  {
    v6 = v6 && bdStructBufferSerializer::writeObject(serializer, 2u, this->m_events[v5++]);
    --v7;
  }
  while ( v7 );
  return v6;
}

