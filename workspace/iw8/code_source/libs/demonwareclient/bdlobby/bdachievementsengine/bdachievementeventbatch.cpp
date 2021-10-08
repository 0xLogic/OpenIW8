/*
==============
bdAchievementEventBatch::bdAchievementEventBatch
==============
*/

void __fastcall bdAchievementEventBatch::bdAchievementEventBatch(bdAchievementEventBatch *this)
{
  ??0bdAchievementEventBatch@@QEAA@XZ(this);
}

/*
==============
bdAchievementEventBatch::getStatus
==============
*/

bdAchievementEventBatch::Status __fastcall bdAchievementEventBatch::getStatus(bdAchievementEventBatch *this)
{
  return ?getStatus@bdAchievementEventBatch@@QEBA?AW4Status@1@XZ(this);
}

/*
==============
bdAchievementEventBatch::tryAddEvent
==============
*/

bool __fastcall bdAchievementEventBatch::tryAddEvent(bdAchievementEventBatch *this, bdUserAccountID *user, bdUserAccountID *firstPartyUser, bdPlatformID platform, const bdAchievementEvent *event, int timesAttempted)
{
  return ?tryAddEvent@bdAchievementEventBatch@@AEAA_NVbdUserAccountID@@0W4bdPlatformID@@AEBVbdAchievementEvent@@H@Z(this, user, firstPartyUser, platform, event, timesAttempted);
}

/*
==============
bdAchievementEventBatch::Entry::Entry
==============
*/

void __fastcall bdAchievementEventBatch::Entry::Entry(bdAchievementEventBatch::Entry *this)
{
  ??0Entry@bdAchievementEventBatch@@QEAA@XZ(this);
}

/*
==============
bdAchievementEventBatch::pump
==============
*/

void __fastcall bdAchievementEventBatch::pump(bdAchievementEventBatch *this)
{
  ?pump@bdAchievementEventBatch@@QEAAXXZ(this);
}

/*
==============
bdAchievementEventBatch::start
==============
*/

void __fastcall bdAchievementEventBatch::start(bdAchievementEventBatch *this)
{
  ?start@bdAchievementEventBatch@@QEAAXXZ(this);
}

/*
==============
bdAchievementEventBatch::Entry::addEvent
==============
*/

bool __fastcall bdAchievementEventBatch::Entry::addEvent(bdAchievementEventBatch::Entry *this, const bdAchievementEvent *event)
{
  return ?addEvent@Entry@bdAchievementEventBatch@@QEAA_NAEBVbdAchievementEvent@@@Z(this, event);
}

/*
==============
bdAchievementEventBatch::bdAchievementEventBatch
==============
*/

void __fastcall bdAchievementEventBatch::bdAchievementEventBatch(bdAchievementEventBatch *this, bdAchievementsEngineService *service, const char *context, bdAchievementEventBuffer *eventBuffer, bdAchievementClient *achievementClient)
{
  ??0bdAchievementEventBatch@@QEAA@PEAVbdAchievementsEngineService@@PEBDPEAVbdAchievementEventBuffer@@PEAVbdAchievementClient@@@Z(this, service, context, eventBuffer, achievementClient);
}

/*
==============
bdAchievementEventBatch::Entry::Entry
==============
*/

void __fastcall bdAchievementEventBatch::Entry::Entry(bdAchievementEventBatch::Entry *this, bdUserAccountID *user, bdUserAccountID *firstPartyUser, bdPlatformID platform, int timesAttempted)
{
  ??0Entry@bdAchievementEventBatch@@QEAA@VbdUserAccountID@@0W4bdPlatformID@@H@Z(this, user, firstPartyUser, platform, timesAttempted);
}

/*
==============
bdAchievementEventBatch::Entry::Entry
==============
*/
void bdAchievementEventBatch::Entry::Entry(bdAchievementEventBatch::Entry *this, bdUserAccountID *user, bdUserAccountID *firstPartyUser, bdPlatformID platform, int timesAttempted)
{
  bdUserAccountID::bdUserAccountID(&this->m_user, user);
  bdUserAccountID::bdUserAccountID(&this->m_firstPartyUser, firstPartyUser);
  this->m_platform = platform;
  this->m_timesAttempted = timesAttempted;
  `eh vector vbase constructor iterator'(&this->m_events, 0x320ui64, 8ui64, (void (__fastcall *)(void *))bdAchievementEvent::bdAchievementEvent, (void (__fastcall *)(void *))bdAchievementEvent::`vbase destructor);
  this->m_events.m_size = 0;
  this->m_eventPointers.m_size = 0;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)firstPartyUser->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)firstPartyUser->gap38);
}

/*
==============
bdAchievementEventBatch::Entry::Entry
==============
*/
void bdAchievementEventBatch::Entry::Entry(bdAchievementEventBatch::Entry *this)
{
  bdUserAccountID::bdUserAccountID(&this->m_user);
  bdUserAccountID::bdUserAccountID(&this->m_firstPartyUser);
  *(_QWORD *)&this->m_platform = 0i64;
  `eh vector vbase constructor iterator'(&this->m_events, 0x320ui64, 8ui64, (void (__fastcall *)(void *))bdAchievementEvent::bdAchievementEvent, (void (__fastcall *)(void *))bdAchievementEvent::`vbase destructor);
  this->m_events.m_size = 0;
  this->m_eventPointers.m_size = 0;
}

/*
==============
bdAchievementEventBatch::bdAchievementEventBatch
==============
*/
void bdAchievementEventBatch::bdAchievementEventBatch(bdAchievementEventBatch *this, bdAchievementsEngineService *service, const char *context, bdAchievementEventBuffer *eventBuffer, bdAchievementClient *achievementClient)
{
  `eh vector constructor iterator'(this, 0x19E8ui64, 0x10ui64, (void (__fastcall *)(void *))bdAchievementEventBatch::Entry::Entry, (void (__fastcall *)(void *))bdAchievementEventBatch::Entry::~Entry);
  this->m_entries.m_size = 0;
  this->m_status = NO_FREIND_ERROR;
  this->m_service = service;
  if ( bdStrlcpy(this->m_context.m_buffer, context, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_eventBuffer = eventBuffer;
  this->m_achievementClient = achievementClient;
  this->m_remoteTask.m_ptr = NULL;
  bdBackoffTimer::bdBackoffTimer(&this->m_backoffTimer);
  bdReportUserEventsResponse::bdReportUserEventsResponse(&this->m_reportEventsResponse);
}

/*
==============
bdAchievementEventBatch::bdAchievementEventBatch
==============
*/
void bdAchievementEventBatch::bdAchievementEventBatch(bdAchievementEventBatch *this)
{
  size_t v2; 
  unsigned __int64 v3; 

  v2 = 16i64;
  `eh vector constructor iterator'(this, 0x19E8ui64, 0x10ui64, (void (__fastcall *)(void *))bdAchievementEventBatch::Entry::Entry, (void (__fastcall *)(void *))bdAchievementEventBatch::Entry::~Entry);
  this->m_entries.m_size = 0;
  this->m_status = NO_FREIND_ERROR;
  this->m_service = NULL;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdAchievementEventBatch *)-106136i64 )
  {
    if ( v3 < 0x10 )
      v2 = v3;
    memcpy_0(&this->m_context, (char *)&queryFormat.fmt + 3, v2);
    this->m_context.m_buffer[v2] = 0;
  }
  this->m_eventBuffer = NULL;
  this->m_achievementClient = NULL;
  this->m_remoteTask.m_ptr = NULL;
  bdBackoffTimer::bdBackoffTimer(&this->m_backoffTimer);
  bdReportUserEventsResponse::bdReportUserEventsResponse(&this->m_reportEventsResponse);
}

/*
==============
bdAchievementEventBatch::Entry::addEvent
==============
*/
char bdAchievementEventBatch::Entry::addEvent(bdAchievementEventBatch::Entry *this, const bdAchievementEvent *event)
{
  bdStructFixedSizeArray<bdAchievementEvent,8> *p_m_events; 
  __int64 m_size; 
  const bdAchievementEvent *v6; 
  __int64 v7; 

  if ( this->m_events.m_size >= 8 )
    return 0;
  p_m_events = &this->m_events;
  bdHandleAssert(this->m_events.m_size < 8, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementEvent,8>::pushBack", 0x40u, "No more capacity for pushBack");
  m_size = p_m_events->m_size;
  if ( (unsigned int)m_size < 8 )
  {
    p_m_events->m_size = m_size + 1;
    bdAchievementEvent::operator=(&p_m_events->m_elements[m_size], event);
    LODWORD(m_size) = this->m_events.m_size;
  }
  bdHandleAssert((_DWORD)m_size != 0, "m_size > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementEvent,8>::back", 0x69u, "Array is empty");
  v6 = &p_m_events->m_elements[p_m_events->m_size - 1];
  bdHandleAssert(this->m_eventPointers.m_size < 8, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementEvent const *,8>::pushBack", 0x40u, "No more capacity for pushBack");
  v7 = this->m_eventPointers.m_size;
  if ( (unsigned int)v7 < 8 )
  {
    this->m_eventPointers.m_elements[v7] = v6;
    ++this->m_eventPointers.m_size;
  }
  return 1;
}

/*
==============
bdAchievementEventBatch::getStatus
==============
*/
__int64 bdAchievementEventBatch::getStatus(bdAchievementEventBatch *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdAchievementEventBatch::pump
==============
*/
void bdAchievementEventBatch::pump(bdAchievementEventBatch *this)
{
  bdAchievementEventBatch::Status m_status; 
  __int32 v3; 
  __int32 v4; 
  int v5; 
  unsigned int v6; 
  bdReportUserEventsResponse *p_m_reportEventsResponse; 
  bdLobbyErrorCode v8; 
  bdLobbyErrorCode v9; 
  bdAchievementEventBatch::Entry *v10; 
  unsigned __int64 UserID; 
  bdAchievementEventBatch::Entry *v12; 
  const char *AccountType; 
  const char *v14; 
  unsigned int i; 
  bdAchievementClient *m_achievementClient; 
  int v17; 
  bdAchievementEventBatch::Entry *v18; 
  bdStructFixedSizeArray<bdAchievementEvent,8> *p_m_events; 
  bdPlatformID m_platform; 
  bdAchievementEventBatch::Entry *v21; 
  bdAchievementEventBatch::Entry *v22; 
  bdLobbyErrorCode ErrorCode; 
  bdLobbyErrorCode v24; 
  const char *v25; 
  bdTask::bdStatus v26; 
  bdTask::bdStatus v27; 
  const char *v28; 
  __int64 v29; 
  bdTask::bdStatus v30; 
  bdLobbyErrorCode v31; 

  m_status = this->m_status;
  if ( m_status )
  {
    v3 = m_status - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAchievementEventBatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementeventbatch.cpp", "bdAchievementEventBatch::pump", 0xADu, "Invalid bdFlushRequest::Status");
      }
      else if ( bdBackoffTimer::checkTimer(&this->m_backoffTimer) )
      {
        bdAchievementEventBatch::start(this);
      }
    }
    else
    {
      v5 = ((__int64 (__fastcall *)(bdRemoteTask *))this->m_remoteTask.m_ptr->getStatus)(this->m_remoteTask.m_ptr) - 1;
      if ( !v5 )
        return;
      if ( v5 == 1 )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementEventBatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementeventbatch.cpp", "bdAchievementEventBatch::pump", 0x78u, "Flush task done");
      }
      else
      {
        if ( bdRemoteTask::getErrorCode(this->m_remoteTask.m_ptr) != BD_ACHIEVEMENTS_ENGINE_MULTI_STATUS )
        {
          ErrorCode = bdRemoteTask::getErrorCode(this->m_remoteTask.m_ptr);
          v24 = bdRemoteTask::getErrorCode(this->m_remoteTask.m_ptr);
          v25 = bdLobbyErrorCodeToString(v24);
          v26 = this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr);
          v27 = this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr);
          v28 = toString(v27);
          v31 = ErrorCode;
          v30 = v26;
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementEventBatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementeventbatch.cpp", "bdAchievementEventBatch::pump", 0x9Cu, "flush task failed with status %s (%u) and code %s (%u)", v28, v30, v25, v31);
          bdBackoffTimer::recordFailure(&this->m_backoffTimer);
          this->m_status = NOT_FIND;
          return;
        }
        v6 = 0;
        if ( this->m_entries.m_size )
        {
          p_m_reportEventsResponse = &this->m_reportEventsResponse;
          do
          {
            v8 = bdReportUserEventsResponse::getErrorCode(p_m_reportEventsResponse, v6);
            v9 = v8;
            if ( v8 != BD_ACHIEVEMENTS_ENGINE_DUPLICATE_REQUEST_ID )
            {
              if ( v8 )
              {
                v10 = bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::operator[](&this->m_entries, v6);
                UserID = bdUserAccountID::getUserID(&v10->m_user);
                v12 = bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::operator[](&this->m_entries, v6);
                AccountType = bdUserAccountID::getAccountType(&v12->m_user);
                v14 = bdLobbyErrorCodeToString(v9);
                LODWORD(v29) = v9;
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementEventBatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementeventbatch.cpp", "bdAchievementEventBatch::pump", 0x8Cu, "flush task partially failed with code %s (%u) user %s-%I64u", v14, v29, AccountType, UserID);
                for ( i = 0; i < bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::operator[](&this->m_entries, v6)->m_events.m_size; ++i )
                {
                  m_achievementClient = this->m_achievementClient;
                  v17 = bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::operator[](&this->m_entries, v6)->m_timesAttempted + 1;
                  v18 = bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::operator[](&this->m_entries, v6);
                  p_m_events = &v18->m_events;
                  bdHandleAssert(i < v18->m_events.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementEvent,8>::operator []", 0x4Du, "i is out of range");
                  m_platform = bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::operator[](&this->m_entries, v6)->m_platform;
                  v21 = bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::operator[](&this->m_entries, v6);
                  v22 = bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::operator[](&this->m_entries, v6);
                  bdAchievementClient::reportUserEvent(m_achievementClient, &v22->m_user, &v21->m_firstPartyUser, m_platform, &p_m_events->m_elements[i], v17);
                }
              }
            }
            ++v6;
            p_m_reportEventsResponse = &this->m_reportEventsResponse;
          }
          while ( v6 < this->m_entries.m_size );
        }
      }
      bdBackoffTimer::reset(&this->m_backoffTimer);
      this->m_status = BLOCKED;
    }
  }
}

/*
==============
bdAchievementEventBatch::start
==============
*/
void bdAchievementEventBatch::start(bdAchievementEventBatch *this)
{
  __int64 v2; 
  const bdAchievementEventBuffer::Iterator *ProcessedEnd; 
  bdAchievementEventBuffer::Entry *v4; 
  const bdUserAccountID *User; 
  bdAchievementEventBuffer::Entry *v6; 
  const bdUserAccountID *FirstPartyUser; 
  bdAchievementEventBuffer::Entry *v8; 
  bdPlatformID Platform; 
  bdAchievementEventBuffer::Entry *v10; 
  const bdAchievementEvent *Event; 
  bdAchievementEventBuffer::Entry *v12; 
  int TimesAttempted; 
  bdUserAccountID *v14; 
  bdUserAccountID *v15; 
  bdUserAccountID *v16; 
  const bdAchievementEventBuffer::Iterator *v17; 
  unsigned int m_size; 
  bdUserAchievementEvents *v19; 
  bdAchievementEventBatch::Entry *v20; 
  bdPlatformID m_platform; 
  bdUserAccountID *v22; 
  bdUserAccountID *v23; 
  bdUserAccountID *v24; 
  bdUserAchievementEvents *v25; 
  bdAchievementEventBatch *v26; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  bdUserAccountID_vtbl *v28; 
  bdReference<bdRemoteTask> v29; 
  bdAchievementEventBuffer::Iterator result; 
  bdUserAccountID *v31; 
  __int64 v32; 
  bdAchievementEventBuffer::Iterator v33; 
  bdAchievementEventBuffer::Iterator v34; 
  bdUserAccountID v35; 
  bdUserAccountID v36; 
  bdUserAccountID v37; 
  bdUserAccountID v38; 
  bdReportUserEventsRequest request; 
  bdUserAchievementEvents *events[16]; 
  _OWORD ptr[224]; 
  unsigned __int8 newTimeouts[4]; 
  int v43; 
  int v44[2]; 

  v32 = -2i64;
  v2 = 0i64;
  this->m_entries.m_size = 0;
  bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId(this->m_requestID, 0x19u);
  *(_DWORD *)newTimeouts = 67305985;
  v43 = 1008602888;
  qmemcpy(v44, "<<<<<<<<", sizeof(v44));
  bdBackoffTimer::setTimeouts(&this->m_backoffTimer, newTimeouts, 0x10u);
  bdAchievementEventBuffer::getProcessedBegin(this->m_eventBuffer, &result);
  ProcessedEnd = bdAchievementEventBuffer::getProcessedEnd(this->m_eventBuffer, &v33);
  if ( bdAchievementEventBuffer::Iterator::operator!=(&result, ProcessedEnd) )
  {
    do
    {
      v4 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&result);
      User = bdAchievementEventBuffer::Entry::getUser(v4);
      v6 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&result);
      FirstPartyUser = bdAchievementEventBuffer::Entry::getFirstPartyUser(v6);
      v8 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&result);
      Platform = bdAchievementEventBuffer::Entry::getPlatform(v8);
      v10 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&result);
      Event = bdAchievementEventBuffer::Entry::getEvent(v10);
      v12 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&result);
      TimesAttempted = bdAchievementEventBuffer::Entry::getTimesAttempted(v12);
      v29.m_ptr = (bdRemoteTask *)&v35;
      bdUserAccountID::bdUserAccountID(&v35, FirstPartyUser);
      v15 = v14;
      bdUserAccountID::bdUserAccountID(&v36, User);
      if ( !bdAchievementEventBatch::tryAddEvent(this, v16, v15, Platform, Event, TimesAttempted) )
        break;
      bdAchievementEventBuffer::Iterator::operator++(&result, &v34, 0);
      v17 = bdAchievementEventBuffer::getProcessedEnd(this->m_eventBuffer, &v33);
    }
    while ( bdAchievementEventBuffer::Iterator::operator!=(&result, v17) );
  }
  `eh vector vbase constructor iterator'(ptr, 0xE0ui64, 0x10ui64, (void (__fastcall *)(void *))bdUserAchievementEvents::bdUserAchievementEvents, (void (__fastcall *)(void *))bdUserAchievementEvents::`vbase destructor);
  m_size = this->m_entries.m_size;
  if ( m_size )
  {
    do
    {
      v19 = (bdUserAchievementEvents *)&ptr[14 * (unsigned int)v2];
      bdHandleAssert((unsigned int)v2 < m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<struct bdAchievementEventBatch::Entry,16>::operator []", 0x4Du, "i is out of range");
      v20 = &this->m_entries.m_elements[(unsigned int)v2];
      m_platform = v20->m_platform;
      v31 = &v37;
      bdHandleAssert((unsigned int)v2 < this->m_entries.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<struct bdAchievementEventBatch::Entry,16>::operator []", 0x4Du, "i is out of range");
      bdUserAccountID::bdUserAccountID(&v37, &v20->m_firstPartyUser);
      v23 = v22;
      bdHandleAssert((unsigned int)v2 < this->m_entries.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<struct bdAchievementEventBatch::Entry,16>::operator []", 0x4Du, "i is out of range");
      bdUserAccountID::bdUserAccountID(&v38, &v20->m_user);
      v25 = bdUserAchievementEvents::setUserAccountID(v19, v24, v23, m_platform);
      bdHandleAssert((unsigned int)v2 < this->m_entries.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<struct bdAchievementEventBatch::Entry,16>::operator []", 0x4Du, "i is out of range");
      bdHandleAssert(v20->m_eventPointers.m_size != 0, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementEvent const *,8>::operator []", 0x4Du, "i is out of range");
      bdHandleAssert((unsigned int)v2 < this->m_entries.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<struct bdAchievementEventBatch::Entry,16>::operator []", 0x4Du, "i is out of range");
      bdUserAchievementEvents::setEvents(v25, v20->m_eventPointers.m_size, v20->m_eventPointers.m_elements);
      events[v2] = v19;
      v2 = (unsigned int)(v2 + 1);
      m_size = this->m_entries.m_size;
    }
    while ( (unsigned int)v2 < m_size );
  }
  bdReportUserEventsRequest::bdReportUserEventsRequest(&request, this->m_context.m_buffer, m_size, (const bdUserAchievementEvents **)events, this->m_requestID);
  if ( this->m_entries.m_size )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementEventBatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementeventbatch.cpp", "bdAchievementEventBatch::start", 0x5Au, "Starting flush with request ID %s", this->m_requestID);
    v26 = (bdAchievementEventBatch *)bdAchievementsEngineService::reportUserEvents(this->m_service, &v29, &request, &this->m_reportEventsResponse);
    p_m_remoteTask = &this->m_remoteTask;
    if ( v26 != (bdAchievementEventBatch *)&this->m_remoteTask )
    {
      if ( p_m_remoteTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_remoteTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_remoteTask->m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))p_m_remoteTask->m_ptr->~bdReferencable)(p_m_remoteTask->m_ptr, 1i64);
      v28 = v26->m_entries.m_elements[0].m_user.__vftable;
      p_m_remoteTask->m_ptr = (bdRemoteTask *)v26->m_entries.m_elements[0].m_user.__vftable;
      if ( v28 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v28->sizeOf, 1u);
    }
    if ( v29.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v29.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v29.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v29.m_ptr->~bdReferencable)(v29.m_ptr, 1i64);
    if ( p_m_remoteTask->m_ptr )
    {
      this->m_status = GENERAL;
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementEventBatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementeventbatch.cpp", "bdAchievementEventBatch::start", 0x5Eu, "Starting flush failed with unknown error.  Backing off to retry.");
      this->m_status = NOT_FIND;
    }
  }
  else
  {
    this->m_status = BLOCKED;
  }
  bdReportUserEventsRequest::~bdReportUserEventsRequest(&request);
  bdReferencable::~bdReferencable((bdReferencable *)&request.gap109A[6]);
  `eh vector destructor iterator'(ptr, 0xE0ui64, 0x10ui64, (void (__fastcall *)(void *))bdUserAchievementEvents::`vbase destructor);
}

/*
==============
bdAchievementEventBatch::tryAddEvent
==============
*/
char bdAchievementEventBatch::tryAddEvent(bdAchievementEventBatch *this, bdUserAccountID *user, bdUserAccountID *firstPartyUser, bdPlatformID platform, const bdAchievementEvent *event, int timesAttempted)
{
  unsigned int v10; 
  unsigned int m_size; 
  bool v12; 
  __int64 v13; 
  __int64 v14; 
  const bdUserAccountID *v15; 
  const bdUserAccountID *v16; 
  bdAchievementEventBatch::Entry *v18; 
  char *p_m_events; 
  __int64 v20; 
  const bdAchievementEvent *v21; 
  __int64 v22; 
  bdUserAccountID v23; 
  bdUserAccountID v24; 
  bdUserAccountID *v25; 
  bdUserAccountID *v26; 
  bdAchievementEventBatch::Entry v27; 

  v25 = user;
  v26 = firstPartyUser;
  v10 = 0;
  while ( 1 )
  {
    m_size = this->m_entries.m_size;
    v12 = v10 < m_size;
    if ( v10 == m_size )
    {
      bdUserAccountID::bdUserAccountID(&v23, firstPartyUser);
      v14 = v13;
      bdUserAccountID::bdUserAccountID(&v24, user);
      v16 = v15;
      bdUserAccountID::bdUserAccountID(&v27.m_user, v15);
      bdUserAccountID::bdUserAccountID(&v27.m_firstPartyUser, (const bdUserAccountID *)v14);
      v27.m_platform = platform;
      v27.m_timesAttempted = timesAttempted;
      `eh vector vbase constructor iterator'(&v27.m_events, 0x320ui64, 8ui64, (void (__fastcall *)(void *))bdAchievementEvent::bdAchievementEvent, (void (__fastcall *)(void *))bdAchievementEvent::`vbase destructor);
      v27.m_events.m_size = 0;
      v27.m_eventPointers.m_size = 0;
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v16->gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v16->gap38);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)(v14 + 56));
      bdReferencable::~bdReferencable((bdReferencable *)(v14 + 56));
      bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::pushBack(&this->m_entries, &v27);
      `eh vector destructor iterator'(&v27.m_events, 0x320ui64, 8ui64, (void (__fastcall *)(void *))bdAchievementEvent::`vbase destructor);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v27.m_firstPartyUser.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v27.m_firstPartyUser.gap38);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v27.m_user.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v27.m_user.gap38);
      v12 = v10 < this->m_entries.m_size;
    }
    bdHandleAssert(v12, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<struct bdAchievementEventBatch::Entry,16>::operator []", 0x4Du, "i is out of range");
    if ( bdUserAccountID::operator==(&this->m_entries.m_elements[v10].m_user, user) )
      break;
    if ( ++v10 >= 0x10 )
      goto LABEL_6;
  }
  bdHandleAssert(v10 < this->m_entries.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<struct bdAchievementEventBatch::Entry,16>::operator []", 0x4Du, "i is out of range");
  v18 = &this->m_entries.m_elements[v10];
  if ( v18->m_events.m_size >= 8 )
  {
LABEL_6:
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
    bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)firstPartyUser->gap38);
    bdReferencable::~bdReferencable((bdReferencable *)firstPartyUser->gap38);
    return 0;
  }
  p_m_events = (char *)&v18->m_events;
  bdHandleAssert(v18->m_events.m_size < 8, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementEvent,8>::pushBack", 0x40u, "No more capacity for pushBack");
  v20 = v18->m_events.m_size;
  if ( (unsigned int)v20 < 8 )
  {
    v18->m_events.m_size = v20 + 1;
    bdAchievementEvent::operator=((bdAchievementEvent *)&p_m_events[800 * v20], event);
    LODWORD(v20) = v18->m_events.m_size;
  }
  bdHandleAssert((_DWORD)v20 != 0, "m_size > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementEvent,8>::back", 0x69u, "Array is empty");
  v21 = (const bdAchievementEvent *)&p_m_events[800 * (v18->m_events.m_size - 1)];
  bdHandleAssert(v18->m_eventPointers.m_size < 8, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementEvent const *,8>::pushBack", 0x40u, "No more capacity for pushBack");
  v22 = v18->m_eventPointers.m_size;
  if ( (unsigned int)v22 < 8 )
  {
    v18->m_eventPointers.m_elements[v22] = v21;
    ++v18->m_eventPointers.m_size;
  }
  bdAchievementEventBuffer::popProcessed(this->m_eventBuffer);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)firstPartyUser->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)firstPartyUser->gap38);
  return 1;
}

