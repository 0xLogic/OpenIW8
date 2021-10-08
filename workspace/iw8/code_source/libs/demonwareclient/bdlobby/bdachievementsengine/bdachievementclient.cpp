/*
==============
bdAchievementClient::bdAchievementClient
==============
*/

void __fastcall bdAchievementClient::bdAchievementClient(bdAchievementClient *this, bdAchievementsEngineService *service, const char *context, float flushIntervalSeconds, int maxEventAttempts)
{
  ??0bdAchievementClient@@QEAA@PEAVbdAchievementsEngineService@@PEBDMH@Z(this, service, context, flushIntervalSeconds, maxEventAttempts);
}

/*
==============
bdAchievementClient::setPredictionEnabled
==============
*/

void __fastcall bdAchievementClient::setPredictionEnabled(bdAchievementClient *this, bool predictionEnabled)
{
  ?setPredictionEnabled@bdAchievementClient@@QEAAX_N@Z(this, predictionEnabled);
}

/*
==============
bdAchievementClient::checkGetDefinitions
==============
*/

bool __fastcall bdAchievementClient::checkGetDefinitions(bdAchievementClient *this)
{
  return ?checkGetDefinitions@bdAchievementClient@@AEAA_NXZ(this);
}

/*
==============
bdAchievementClient::startGetDefinitions
==============
*/

bool __fastcall bdAchievementClient::startGetDefinitions(bdAchievementClient *this, const bdUserAccountID *user)
{
  return ?startGetDefinitions@bdAchievementClient@@AEAA_NAEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdAchievementClient::shouldFlush
==============
*/

bool __fastcall bdAchievementClient::shouldFlush(bdAchievementClient *this)
{
  return ?shouldFlush@bdAchievementClient@@AEBA_NXZ(this);
}

/*
==============
bdAchievementClient::Achievement::Achievement
==============
*/

void __fastcall bdAchievementClient::Achievement::Achievement(bdAchievementClient::Achievement *this)
{
  ??0Achievement@bdAchievementClient@@QEAA@XZ(this);
}

/*
==============
bdAchievementClient::predictAchievement
==============
*/

bool __fastcall bdAchievementClient::predictAchievement(bdAchievementClient *this, const bdUserAccountID *user, const bdAchievementEvent *event, bdAchievementClient::Achievement *achievement)
{
  return ?predictAchievement@bdAchievementClient@@AEAA_NAEBVbdUserAccountID@@AEBVbdAchievementEvent@@AEAVAchievement@1@@Z(this, user, event, achievement);
}

/*
==============
bdAchievementClient::setMaxEventAttempts
==============
*/

void __fastcall bdAchievementClient::setMaxEventAttempts(bdAchievementClient *this, int maxEventAttempts)
{
  ?setMaxEventAttempts@bdAchievementClient@@QEAAXH@Z(this, maxEventAttempts);
}

/*
==============
bdAchievementClient::predictEvent
==============
*/

bool __fastcall bdAchievementClient::predictEvent(bdAchievementClient *this, const bdUserAccountID *user, const bdAchievementEvent *event)
{
  return ?predictEvent@bdAchievementClient@@AEAA_NAEBVbdUserAccountID@@AEBVbdAchievementEvent@@@Z(this, user, event);
}

/*
==============
bdAchievementClient::canAddUser
==============
*/

bool __fastcall bdAchievementClient::canAddUser(bdAchievementClient *this)
{
  return ?canAddUser@bdAchievementClient@@QEBA_NXZ(this);
}

/*
==============
bdAchievementClient::flush
==============
*/

bool __fastcall bdAchievementClient::flush(bdAchievementClient *this)
{
  return ?flush@bdAchievementClient@@QEAA_NXZ(this);
}

/*
==============
bdAchievementClient::registerArchetype
==============
*/

bool __fastcall bdAchievementClient::registerArchetype(bdAchievementClient *this, unsigned __int64 archetypeID, bdAchievementArchetypeHandler *handler)
{
  return ?registerArchetype@bdAchievementClient@@QEAA_N_KPEAVbdAchievementArchetypeHandler@@@Z(this, archetypeID, handler);
}

/*
==============
bdAchievementClient::checkGetStates
==============
*/

bool __fastcall bdAchievementClient::checkGetStates(bdAchievementClient *this)
{
  return ?checkGetStates@bdAchievementClient@@AEAA_NXZ(this);
}

/*
==============
bdAchievementClient::handleResponses
==============
*/

void __fastcall bdAchievementClient::handleResponses(bdAchievementClient *this)
{
  ?handleResponses@bdAchievementClient@@AEAAXXZ(this);
}

/*
==============
bdAchievementClient::getNumUnprocessedEvents
==============
*/

int __fastcall bdAchievementClient::getNumUnprocessedEvents(bdAchievementClient *this)
{
  return ?getNumUnprocessedEvents@bdAchievementClient@@QEBAHXZ(this);
}

/*
==============
bdAchievementClient::setFlushIntervalSeconds
==============
*/

void __fastcall bdAchievementClient::setFlushIntervalSeconds(bdAchievementClient *this, float flushIntervalSeconds)
{
  ?setFlushIntervalSeconds@bdAchievementClient@@QEAAXM@Z(this, flushIntervalSeconds);
}

/*
==============
bdAchievementClient::Achievement::getState
==============
*/

const bdAchievementState *__fastcall bdAchievementClient::Achievement::getState(bdAchievementClient::Achievement *this)
{
  return ?getState@Achievement@bdAchievementClient@@QEBAAEBVbdAchievementState@@XZ(this);
}

/*
==============
bdAchievementClient::Achievement::Achievement
==============
*/

void __fastcall bdAchievementClient::Achievement::Achievement(bdAchievementClient::Achievement *this, const bdAchievementDefinition *definition, const bdAchievementState *state)
{
  ??0Achievement@bdAchievementClient@@QEAA@AEBVbdAchievementDefinition@@AEBVbdAchievementState@@@Z(this, definition, state);
}

/*
==============
bdAchievementClient::startGetStates
==============
*/

void __fastcall bdAchievementClient::startGetStates(bdAchievementClient *this, const bdUserAccountID *user)
{
  ?startGetStates@bdAchievementClient@@AEAAXAEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdAchievementClient::getAchievements
==============
*/

const bdStructFixedSizeArray<bdAchievementClient::Achievement,1> *__fastcall bdAchievementClient::getAchievements(bdAchievementClient *this, const bdUserAccountID *user)
{
  return ?getAchievements@bdAchievementClient@@QEAAPEBV?$bdStructFixedSizeArray@VAchievement@bdAchievementClient@@$00@@AEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdAchievementClient::getStatus
==============
*/

bdAchievementClient::Status __fastcall bdAchievementClient::getStatus(bdAchievementClient *this)
{
  return ?getStatus@bdAchievementClient@@QEBA?AW4Status@1@XZ(this);
}

/*
==============
bdAchievementClient::getEventBatch
==============
*/

const bdAchievementEventBatch *__fastcall bdAchievementClient::getEventBatch(bdAchievementClient *this)
{
  return ?getEventBatch@bdAchievementClient@@QEBAAEBVbdAchievementEventBatch@@XZ(this);
}

/*
==============
bdAchievementClient::reportUserEvent
==============
*/

bool __fastcall bdAchievementClient::reportUserEvent(bdAchievementClient *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform, const bdAchievementEvent *event, int timesAttempted)
{
  return ?reportUserEvent@bdAchievementClient@@QEAA_NAEBVbdUserAccountID@@0W4bdPlatformID@@AEBVbdAchievementEvent@@H@Z(this, user, firstPartyUser, platform, event, timesAttempted);
}

/*
==============
bdAchievementClient::findDefinitionFromResponse
==============
*/

const bdAchievementDefinition *__fastcall bdAchievementClient::findDefinitionFromResponse(bdAchievementClient *this, unsigned __int64 achievementId)
{
  return ?findDefinitionFromResponse@bdAchievementClient@@AEAAPEBVbdAchievementDefinition@@_K@Z(this, achievementId);
}

/*
==============
bdAchievementClient::processEvents
==============
*/

void __fastcall bdAchievementClient::processEvents(bdAchievementClient *this)
{
  ?processEvents@bdAchievementClient@@AEAAXXZ(this);
}

/*
==============
bdAchievementClient::removeUser
==============
*/

bool __fastcall bdAchievementClient::removeUser(bdAchievementClient *this, const bdUserAccountID *user)
{
  return ?removeUser@bdAchievementClient@@QEAA_NAEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdAchievementClient::Achievement::getState
==============
*/

bdAchievementState *__fastcall bdAchievementClient::Achievement::getState(bdAchievementClient::Achievement *this)
{
  return ?getState@Achievement@bdAchievementClient@@QEAAAEAVbdAchievementState@@XZ(this);
}

/*
==============
bdAchievementClient::addUser
==============
*/

bool __fastcall bdAchievementClient::addUser(bdAchievementClient *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform)
{
  return ?addUser@bdAchievementClient@@QEAA_NAEBVbdUserAccountID@@0W4bdPlatformID@@@Z(this, user, firstPartyUser, platform);
}

/*
==============
bdAchievementClient::Achievement::getDefinition
==============
*/

const bdAchievementDefinition *__fastcall bdAchievementClient::Achievement::getDefinition(bdAchievementClient::Achievement *this)
{
  return ?getDefinition@Achievement@bdAchievementClient@@QEBAAEBVbdAchievementDefinition@@XZ(this);
}

/*
==============
bdAchievementClient::~bdAchievementClient
==============
*/

void __fastcall bdAchievementClient::~bdAchievementClient(bdAchievementClient *this)
{
  ??1bdAchievementClient@@QEAA@XZ(this);
}

/*
==============
bdAchievementClient::pump
==============
*/

void __fastcall bdAchievementClient::pump(bdAchievementClient *this)
{
  ?pump@bdAchievementClient@@QEAAXXZ(this);
}

/*
==============
bdAchievementClient::getNumProcessedEvents
==============
*/

int __fastcall bdAchievementClient::getNumProcessedEvents(bdAchievementClient *this)
{
  return ?getNumProcessedEvents@bdAchievementClient@@QEBAHXZ(this);
}

/*
==============
bdAchievementClient::startFlush
==============
*/

void __fastcall bdAchievementClient::startFlush(bdAchievementClient *this)
{
  ?startFlush@bdAchievementClient@@AEAAXXZ(this);
}

/*
==============
bdAchievementClient::Achievement::Achievement
==============
*/
void bdAchievementClient::Achievement::Achievement(bdAchievementClient::Achievement *this, const bdAchievementDefinition *definition, const bdAchievementState *state)
{
  _RDI = state;
  bdAchievementDefinition::bdAchievementDefinition(&this->m_definition, definition);
  _RBX = &this->m_state;
  *((_QWORD *)&this->m_state.__vftable + 1) = &bdAchievementState::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)this->m_state.gap218, (const bdReferencable *)((char *)&_RDI->__vftable + *(int *)(*((_QWORD *)&_RDI->__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable(&this->m_state, _RDI);
  this->m_state.__vftable = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementState_vtbl **)((char *)&this->m_state.__vftable + *(int *)(*((_QWORD *)&this->m_state.__vftable + 1) + 4i64) + 8) = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->m_state.__vftable + 2) = *((_QWORD *)&_RDI->__vftable + 2);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+18h]
    vmovups ymmword ptr [rbx+18h], ymm0
    vmovups ymm1, ymmword ptr [rdi+38h]
    vmovups ymmword ptr [rbx+38h], ymm1
    vmovups ymm0, ymmword ptr [rdi+58h]
    vmovups ymmword ptr [rbx+58h], ymm0
  }
  *(_DWORD *)&this->m_state.m_name[88] = *(_DWORD *)&_RDI->m_name[88];
  this->m_state.m_name[92] = _RDI->m_name[92];
  this->m_state.m_kind = _RDI->m_kind;
  this->m_state.m_progress = _RDI->m_progress;
  this->m_state.m_progressTarget = _RDI->m_progressTarget;
  this->m_state.m_status = _RDI->m_status;
  this->m_state.m_completionTimestamp = _RDI->m_completionTimestamp;
  this->m_state.m_activationTimestamp = _RDI->m_activationTimestamp;
  this->m_state.m_expirationTimestamp = _RDI->m_expirationTimestamp;
  this->m_state.m_completionCount = _RDI->m_completionCount;
  `eh vector vbase constructor iterator'(&this->m_state.m_multiProgress, 0x58ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgress::bdAchievementProgress, (void (__fastcall *)(void *))bdAchievementProgress::`vbase destructor);
  this->m_state.m_multiProgress.m_size = 0;
  bdStructFixedSizeArray<bdAchievementProgress,4>::copy(&this->m_state.m_multiProgress, &_RDI->m_multiProgress);
}

/*
==============
bdAchievementClient::Achievement::Achievement
==============
*/
void bdAchievementClient::Achievement::Achievement(bdAchievementClient::Achievement *this)
{
  bdAchievementDefinition::bdAchievementDefinition(&this->m_definition);
  bdAchievementState::bdAchievementState(&this->m_state);
}

/*
==============
bdAchievementClient::bdAchievementClient
==============
*/

void __fastcall bdAchievementClient::bdAchievementClient(bdAchievementClient *this, bdAchievementsEngineService *service, const char *context, double flushIntervalSeconds, int maxEventAttempts)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm3
  }
  _RDI = this;
  this->m_service = service;
  if ( bdStrlcpy(this->m_context.m_buffer, context, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  __asm { vmovss  dword ptr [rdi+1Ch], xmm6 }
  _RDI->m_predictionEnabled = 0;
  _RDI->m_status = READY;
  bdAchievementEventBuffer::bdAchievementEventBuffer(&_RDI->m_eventBuffer);
  _RDI->m_users.m_size = 0;
  `eh vector vbase constructor iterator'(_RDI->m_users.m_keys, 0x48ui64, 1ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  `eh vector constructor iterator'(_RDI->m_users.m_values, 0xE80ui64, 1ui64, (void (__fastcall *)(void *))bdAchievementClient::UserAchievements::UserAchievements, (void (__fastcall *)(void *))bdAchievementClient::UserAchievements::~UserAchievements);
  _RDI->m_archetypes.m_size = 0;
  _RDI->m_archetypes.m_keys[0] = 0i64;
  _RDI->m_archetypes.m_values[0] = NULL;
  *(_WORD *)&_RDI->m_isDraining = 0;
  bdAchievementEventBatch::bdAchievementEventBatch(&_RDI->m_eventBatch);
  _RDI->m_getDefinitionsTask.m_ptr = NULL;
  bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse(&_RDI->m_getDefinitionsResponse);
  bdBackoffTimer::bdBackoffTimer(&_RDI->m_getDefinitionsBackoff);
  _RDI->m_getDefinitionsIsBackingOff = 0;
  _RDI->m_getStatesTask.m_ptr = NULL;
  bdGetAchievementStatesResponse::bdGetAchievementStatesResponse(&_RDI->m_getStatesResponse);
  bdBackoffTimer::bdBackoffTimer(&_RDI->m_getStatesBackoff);
  _RDI->m_getStatesIsBackingOff = 0;
  bdUserAccountID::bdUserAccountID(&_RDI->m_taskUser);
  _RDI->m_maxEventAttempts = maxEventAttempts;
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
bdAchievementClient::~bdAchievementClient
==============
*/
void bdAchievementClient::~bdAchievementClient(bdAchievementClient *this)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 
  bdRemoteTask *v4; 
  bdRemoteTask *v5; 

  if ( bdAchievementEventBuffer::getSize(&this->m_eventBuffer) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::~bdAchievementClient", 0x2Du, "Deconstructing bdAchievementClient that still contains buffered events");
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this->m_taskUser.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)this->m_taskUser.gap38);
  bdGetAchievementStatesResponse::`vbase destructor(&this->m_getStatesResponse);
  m_ptr = this->m_getStatesTask.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_getStatesTask.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_getStatesTask.m_ptr = NULL;
  }
  bdGetAchievementDefinitionsResponse::`vbase destructor(&this->m_getDefinitionsResponse);
  v4 = this->m_getDefinitionsTask.m_ptr;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_getDefinitionsTask.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_getDefinitionsTask.m_ptr = NULL;
  }
  bdAchievementEventBatch::~bdAchievementEventBatch(&this->m_eventBatch);
  `eh vector destructor iterator'(this->m_users.m_values, 0xE80ui64, 1ui64, (void (__fastcall *)(void *))bdAchievementClient::UserAchievements::~UserAchievements);
  `eh vector destructor iterator'(this->m_users.m_keys, 0x48ui64, 1ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  `eh vector destructor iterator'(&this->m_eventBuffer, 0x3C8ui64, 0x80ui64, (void (__fastcall *)(void *))bdAchievementEventBuffer::Entry::~Entry);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>((bdStructFixedSizeString<16> *)&this->m_context);
}

/*
==============
bdAchievementClient::addUser
==============
*/
char bdAchievementClient::addUser(bdAchievementClient *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform)
{
  bdString *v8; 
  const char *Buffer; 
  __int64 m_size; 
  char v11; 
  bdAchievementClient::UserAchievements *v12; 
  bdAchievementClient::UserAchievements *v13; 
  bdString result; 
  __int64 v16; 
  bdAchievementClient::UserAchievements __that; 

  v16 = -2i64;
  v8 = bdUserAccountID::toString((bdUserAccountID *)user, &result);
  Buffer = bdString::getBuffer(v8);
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::addUser", 0xBCu, "adding user %s", Buffer);
  bdString::~bdString(&result);
  __that.isLoaded = 0;
  bdUserAccountID::bdUserAccountID(&__that.firstPartyUser);
  __that.platform = BD_PLATFORM_ID_INVALID;
  `eh vector constructor iterator'(&__that.achievements, 0xE20ui64, 1ui64, (void (__fastcall *)(void *))bdAchievementClient::Achievement::Achievement, (void (__fastcall *)(void *))bdAchievementClient::Achievement::~Achievement);
  __that.achievements.m_size = 0;
  m_size = this->m_users.m_size;
  if ( (_DWORD)m_size )
  {
    v11 = 0;
  }
  else
  {
    bdUserAccountID::operator=(&this->m_users.m_keys[m_size], user);
    bdAchievementClient::UserAchievements::operator=(&this->m_users.m_values[this->m_users.m_size], &__that);
    ++this->m_users.m_size;
    v11 = 1;
  }
  `eh vector destructor iterator'(&__that.achievements, 0xE20ui64, 1ui64, (void (__fastcall *)(void *))bdAchievementClient::Achievement::~Achievement);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)__that.firstPartyUser.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)__that.firstPartyUser.gap38);
  if ( v11 )
  {
    v12 = bdAchievementArrayMap<bdUserAccountID,bdAchievementClient::UserAchievements,1>::get(&this->m_users, user);
    v13 = v12;
    if ( !v12 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::addUser", 0xC4u, "could not find added user");
      return 0;
    }
    bdUserAccountID::operator=(&v12->firstPartyUser, firstPartyUser);
    v13->platform = platform;
  }
  return v11;
}

/*
==============
bdAchievementClient::canAddUser
==============
*/
bool bdAchievementClient::canAddUser(bdAchievementClient *this)
{
  return this->m_users.m_size == 0;
}

/*
==============
bdAchievementClient::checkGetDefinitions
==============
*/
char bdAchievementClient::checkGetDefinitions(bdAchievementClient *this)
{
  char v2; 
  bdTask::bdStatus v3; 
  bdLobbyErrorCode ErrorCode; 
  bdLobbyErrorCode v5; 
  const char *v6; 
  bdTask::bdStatus v7; 
  bdTask::bdStatus v8; 
  const char *v9; 
  char result; 
  unsigned int NumDefinitions; 
  bdTask::bdStatus v12; 
  bdLobbyErrorCode v13; 

  v2 = 0;
  v3 = this->m_getDefinitionsTask.m_ptr->getStatus(this->m_getDefinitionsTask.m_ptr);
  if ( v3 != BD_PENDING )
  {
    if ( v3 == BD_DONE )
    {
      NumDefinitions = bdGetAchievementDefinitionsResponse::getNumDefinitions(&this->m_getDefinitionsResponse);
      bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetDefinitions", 0x1B8u, "Got response containing %u definitions", NumDefinitions);
      bdBackoffTimer::reset(&this->m_getDefinitionsBackoff);
      return 1;
    }
    else
    {
      if ( !this->m_getDefinitionsIsBackingOff )
      {
        ErrorCode = bdRemoteTask::getErrorCode(this->m_getDefinitionsTask.m_ptr);
        v5 = bdRemoteTask::getErrorCode(this->m_getDefinitionsTask.m_ptr);
        v6 = bdLobbyErrorCodeToString(v5);
        v7 = this->m_getDefinitionsTask.m_ptr->getStatus(this->m_getDefinitionsTask.m_ptr);
        v8 = this->m_getDefinitionsTask.m_ptr->getStatus(this->m_getDefinitionsTask.m_ptr);
        v9 = toString(v8);
        v13 = ErrorCode;
        v12 = v7;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetDefinitions", 0x1C9u, "Get definitions failed with status %s (%u) and code %s (%u)", v9, v12, v6, v13);
        bdBackoffTimer::recordFailure(&this->m_getDefinitionsBackoff);
        result = 0;
        this->m_getDefinitionsIsBackingOff = 1;
        return result;
      }
      if ( bdBackoffTimer::checkTimer(&this->m_getDefinitionsBackoff) )
      {
        this->m_getDefinitionsIsBackingOff = 0;
        if ( !bdAchievementClient::startGetDefinitions(this, &this->m_taskUser) )
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetDefinitions", 0x1D5u, "Retry found no missing definitions");
          return 1;
        }
      }
    }
  }
  return v2;
}

/*
==============
bdAchievementClient::checkGetStates
==============
*/
char bdAchievementClient::checkGetStates(bdAchievementClient *this)
{
  bdTask::bdStatus v2; 
  bdLobbyErrorCode ErrorCode; 
  bdLobbyErrorCode v4; 
  const char *v5; 
  bdTask::bdStatus v6; 
  bdTask::bdStatus v7; 
  const char *v8; 
  unsigned int NumStates; 
  bdTask::bdStatus v11; 
  bdLobbyErrorCode v12; 

  v2 = this->m_getStatesTask.m_ptr->getStatus(this->m_getStatesTask.m_ptr);
  if ( v2 == BD_PENDING )
    return 0;
  if ( v2 == BD_DONE )
  {
    NumStates = bdGetAchievementStatesResponse::getNumStates(&this->m_getStatesResponse);
    bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetStates", 0x1FDu, "Got response containing %u active achievement states", NumStates);
    bdBackoffTimer::reset(&this->m_getStatesBackoff);
    return 1;
  }
  else
  {
    if ( !this->m_getStatesIsBackingOff )
    {
      ErrorCode = bdRemoteTask::getErrorCode(this->m_getStatesTask.m_ptr);
      v4 = bdRemoteTask::getErrorCode(this->m_getStatesTask.m_ptr);
      v5 = bdLobbyErrorCodeToString(v4);
      v6 = this->m_getStatesTask.m_ptr->getStatus(this->m_getStatesTask.m_ptr);
      v7 = this->m_getStatesTask.m_ptr->getStatus(this->m_getStatesTask.m_ptr);
      v8 = toString(v7);
      v12 = ErrorCode;
      v11 = v6;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetStates", 0x20Eu, "Get states failed with status %s (%u) and code %s (%u)", v8, v11, v5, v12);
      bdBackoffTimer::recordFailure(&this->m_getStatesBackoff);
      this->m_getStatesIsBackingOff = 1;
      return 0;
    }
    if ( !bdBackoffTimer::checkTimer(&this->m_getStatesBackoff) )
      return 0;
    this->m_getStatesIsBackingOff = 0;
    bdAchievementClient::startGetStates(this, &this->m_taskUser);
    return 0;
  }
}

/*
==============
bdAchievementClient::findDefinitionFromResponse
==============
*/
bdAchievementDefinition *bdAchievementClient::findDefinitionFromResponse(bdAchievementClient *this, unsigned __int64 achievementId)
{
  bdGetAchievementDefinitionsResponse *p_m_getDefinitionsResponse; 
  unsigned int v4; 
  unsigned int NumDefinitions; 
  bdAchievementDefinition *Definition; 

  p_m_getDefinitionsResponse = &this->m_getDefinitionsResponse;
  v4 = 0;
  NumDefinitions = bdGetAchievementDefinitionsResponse::getNumDefinitions(&this->m_getDefinitionsResponse);
  if ( !NumDefinitions )
    return 0i64;
  while ( 1 )
  {
    Definition = (bdAchievementDefinition *)bdGetAchievementDefinitionsResponse::getDefinition(p_m_getDefinitionsResponse, v4);
    if ( bdAchievementDefinition::getId(Definition) == achievementId )
      break;
    if ( ++v4 >= NumDefinitions )
      return 0i64;
  }
  return Definition;
}

/*
==============
bdAchievementClient::flush
==============
*/
char bdAchievementClient::flush(bdAchievementClient *this)
{
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::flush", 0x8Bu, "Explicit flush requested");
  if ( this->m_status )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::flush", 0x8Eu, "Flush method called when status was not READY");
    return 0;
  }
  else
  {
    this->m_isDraining = 1;
    return 1;
  }
}

/*
==============
bdAchievementClient::getAchievements
==============
*/
bdStructFixedSizeArray<bdAchievementClient::Achievement,1> *bdAchievementClient::getAchievements(bdAchievementClient *this, const bdUserAccountID *user)
{
  bdAchievementClient::UserAchievements *v5; 
  bdString *v6; 
  const char *Buffer; 
  bdString result; 

  if ( this->m_status )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::getAchievements", 0xF8u, "getAchievements method called when status was not READY");
    return 0i64;
  }
  v5 = bdAchievementArrayMap<bdUserAccountID,bdAchievementClient::UserAchievements,1>::get(&this->m_users, user);
  if ( !v5 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::getAchievements", 0xFEu, "getAchievements method called for user not previously added");
    return 0i64;
  }
  if ( v5->isLoaded )
    return &v5->achievements;
  v6 = bdUserAccountID::toString((bdUserAccountID *)user, &result);
  Buffer = bdString::getBuffer(v6);
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::getAchievements", 0x103u, "Need to fetch achievements for user %s", Buffer);
  bdString::~bdString(&result);
  bdAchievementClient::startGetStates(this, user);
  return 0i64;
}

/*
==============
bdAchievementClient::Achievement::getDefinition
==============
*/
bdAchievementClient::Achievement *bdAchievementClient::Achievement::getDefinition(bdAchievementClient::Achievement *this)
{
  return this;
}

/*
==============
bdAchievementClient::getEventBatch
==============
*/
bdAchievementEventBatch *bdAchievementClient::getEventBatch(bdAchievementClient *this)
{
  return &this->m_eventBatch;
}

/*
==============
bdAchievementClient::getNumProcessedEvents
==============
*/
int bdAchievementClient::getNumProcessedEvents(bdAchievementClient *this)
{
  bdAchievementEventBuffer *p_m_eventBuffer; 
  bdAchievementEventBuffer::Iterator *ProcessedEnd; 
  const bdAchievementEventBuffer::Iterator *ProcessedBegin; 
  bdAchievementEventBuffer::Iterator result; 
  bdAchievementEventBuffer::Iterator v6; 

  p_m_eventBuffer = &this->m_eventBuffer;
  ProcessedEnd = bdAchievementEventBuffer::getProcessedEnd(&this->m_eventBuffer, &result);
  ProcessedBegin = bdAchievementEventBuffer::getProcessedBegin(p_m_eventBuffer, &v6);
  return bdAchievementEventBuffer::Iterator::operator-(ProcessedEnd, ProcessedBegin);
}

/*
==============
bdAchievementClient::getNumUnprocessedEvents
==============
*/
int bdAchievementClient::getNumUnprocessedEvents(bdAchievementClient *this)
{
  bdAchievementEventBuffer *p_m_eventBuffer; 
  bdAchievementEventBuffer::Iterator *UnprocessedEnd; 
  const bdAchievementEventBuffer::Iterator *UnprocessedBegin; 
  bdAchievementEventBuffer::Iterator result; 
  bdAchievementEventBuffer::Iterator v6; 

  p_m_eventBuffer = &this->m_eventBuffer;
  UnprocessedEnd = bdAchievementEventBuffer::getUnprocessedEnd(&this->m_eventBuffer, &result);
  UnprocessedBegin = bdAchievementEventBuffer::getUnprocessedBegin(p_m_eventBuffer, &v6);
  return bdAchievementEventBuffer::Iterator::operator-(UnprocessedEnd, UnprocessedBegin);
}

/*
==============
bdAchievementClient::Achievement::getState
==============
*/
bdAchievementState *bdAchievementClient::Achievement::getState(bdAchievementClient::Achievement *this)
{
  return &this->m_state;
}

/*
==============
bdAchievementClient::Achievement::getState
==============
*/
bdAchievementState *bdAchievementClient::Achievement::getState(bdAchievementClient::Achievement *this)
{
  return &this->m_state;
}

/*
==============
bdAchievementClient::getStatus
==============
*/
__int64 bdAchievementClient::getStatus(bdAchievementClient *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdAchievementClient::handleResponses
==============
*/
void bdAchievementClient::handleResponses(bdAchievementClient *this)
{
  bdGetAchievementStatesResponse *p_m_getStatesResponse; 
  unsigned int NumStates; 
  __int64 v4; 
  bdString *v5; 
  const char *Buffer; 
  unsigned int v7; 
  bdGetAchievementDefinitionsResponse *p_m_getDefinitionsResponse; 
  unsigned __int64 Id; 
  unsigned int NumDefinitions; 
  unsigned int v12; 
  bdAchievementDefinition *Definition; 
  unsigned __int64 v14; 
  bdString *v15; 
  const char *v16; 
  bdStructFixedSizeArray<bdAchievementClient::Achievement,1> *p_achievements; 
  __int64 m_size; 
  int v22; 
  unsigned int v23; 
  bdString result; 
  bdAchievementClient *v25; 
  bdString v26; 
  bdAchievementClient::UserAchievements *v27; 
  __int64 v28; 
  bdAchievementState *p_m_state; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *p_m_multiProgress; 
  bdAchievementClient::Achievement v31; 

  v28 = -2i64;
  v25 = this;
  v22 = 0;
  p_m_getStatesResponse = &this->m_getStatesResponse;
  result.m_string = (char *)&this->m_getStatesResponse;
  NumStates = bdGetAchievementStatesResponse::getNumStates(&this->m_getStatesResponse);
  v23 = NumStates;
  v4 = 0i64;
  if ( !this->m_users.m_size )
    goto LABEL_4;
  while ( !bdUserAccountID::operator==(&this->m_users.m_keys[v4], &this->m_taskUser) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= this->m_users.m_size )
      goto LABEL_4;
  }
  v27 = &this->m_users.m_values[(unsigned int)v4];
  if ( (bdAchievementClient *)((char *)this + 3712 * (unsigned int)v4) == (bdAchievementClient *)-124040i64 )
  {
LABEL_4:
    v5 = bdUserAccountID::toString(&this->m_taskUser, &result);
    Buffer = bdString::getBuffer(v5);
    bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::handleResponses", 0x246u, "Discarding new state and definitions for user %s", Buffer);
    bdString::~bdString(&result);
  }
  else
  {
    this->m_users.m_values[(unsigned int)v4].isLoaded = 1;
    v7 = 0;
    if ( NumStates )
    {
      p_m_getDefinitionsResponse = &this->m_getDefinitionsResponse;
      do
      {
        _R13 = (bdAchievementState *)bdGetAchievementStatesResponse::getState(p_m_getStatesResponse, v7);
        Id = bdAchievementState::getId(_R13);
        NumDefinitions = bdGetAchievementDefinitionsResponse::getNumDefinitions(p_m_getDefinitionsResponse);
        v12 = 0;
        if ( !NumDefinitions )
          goto LABEL_12;
        while ( 1 )
        {
          Definition = (bdAchievementDefinition *)bdGetAchievementDefinitionsResponse::getDefinition(p_m_getDefinitionsResponse, v12);
          if ( bdAchievementDefinition::getId(Definition) == Id )
            break;
          if ( ++v12 >= NumDefinitions )
            goto LABEL_12;
        }
        if ( Definition )
        {
          v14 = bdAchievementState::getId(_R13);
          v15 = bdUserAccountID::toString(&v25->m_taskUser, &v26);
          v16 = bdString::getBuffer(v15);
          bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::handleResponses", 0x232u, "Got state and definitions for user %s achievement %u", v16, v14);
          bdString::~bdString(&v26);
          if ( v27->achievements.m_size )
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::handleResponses", 0x239u, "Too many active achievements");
          }
          else
          {
            p_achievements = &v27->achievements;
            bdAchievementDefinition::bdAchievementDefinition(&v31.m_definition, Definition);
            p_m_state = &v31.m_state;
            *((_QWORD *)&v31.m_state.__vftable + 1) = &bdAchievementState::`vbtable';
            bdReferencable::bdReferencable((bdReferencable *)v31.m_state.gap218, (const bdReferencable *)((char *)&_R13->__vftable + *(int *)(*((_QWORD *)&_R13->__vftable + 1) + 4i64) + 8));
            v22 |= 1u;
            bdStructBufferSerializable::bdStructBufferSerializable(&v31.m_state, _R13);
            v31.m_state.__vftable = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdStructBufferSerializable'};
            *(bdAchievementState_vtbl **)((char *)&v31.m_state.__vftable + *(int *)(*((_QWORD *)&v31.m_state.__vftable + 1) + 4i64) + 8) = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdReferencable'};
            *((_QWORD *)&v31.m_state.__vftable + 2) = *((_QWORD *)&_R13->__vftable + 2);
            __asm
            {
              vmovups ymm0, ymmword ptr [r13+18h]
              vmovups ymmword ptr [rbp+0DE0h+var_258+18h], ymm0
              vmovups ymm1, ymmword ptr [r13+38h]
              vmovups [rbp+0DE0h+var_220], ymm1
              vmovups ymm0, ymmword ptr [r13+58h]
              vmovups [rbp+0DE0h+var_200], ymm0
            }
            *(_DWORD *)&v31.m_state.m_name[88] = *(_DWORD *)&_R13->m_name[88];
            v31.m_state.m_name[92] = _R13->m_name[92];
            v31.m_state.m_kind = _R13->m_kind;
            v31.m_state.m_progress = _R13->m_progress;
            v31.m_state.m_progressTarget = _R13->m_progressTarget;
            v31.m_state.m_status = _R13->m_status;
            v31.m_state.m_completionTimestamp = _R13->m_completionTimestamp;
            v31.m_state.m_activationTimestamp = _R13->m_activationTimestamp;
            v31.m_state.m_expirationTimestamp = _R13->m_expirationTimestamp;
            v31.m_state.m_completionCount = _R13->m_completionCount;
            p_m_multiProgress = &v31.m_state.m_multiProgress;
            `eh vector vbase constructor iterator'(&v31.m_state.m_multiProgress, 0x58ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgress::bdAchievementProgress, (void (__fastcall *)(void *))bdAchievementProgress::`vbase destructor);
            v31.m_state.m_multiProgress.m_size = 0;
            bdStructFixedSizeArray<bdAchievementProgress,4>::copy(&v31.m_state.m_multiProgress, &_R13->m_multiProgress);
            bdHandleAssert(p_achievements->m_size == 0, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementClient::Achievement,1>::pushBack", 0x40u, "No more capacity for pushBack");
            m_size = p_achievements->m_size;
            if ( !(_DWORD)m_size )
            {
              p_achievements->m_size = 1;
              bdAchievementClient::Achievement::operator=(&p_achievements->m_elements[m_size], &v31);
            }
            `eh vector destructor iterator'(&v31.m_state.m_multiProgress, 0x58ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgress::`vbase destructor);
            bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&v31.m_state.__vftable + 3));
            bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v31.m_state.__vftable + 2));
            bdReferencable::~bdReferencable((bdReferencable *)v31.m_state.gap218);
            bdAchievementDefinition::`vbase destructor(&v31.m_definition);
          }
        }
        else
        {
LABEL_12:
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::handleResponses", 0x23Eu, "Failed to find definition for achievement");
        }
        ++v7;
        p_m_getStatesResponse = (bdGetAchievementStatesResponse *)result.m_string;
      }
      while ( v7 < v23 );
    }
  }
}

/*
==============
bdAchievementClient::predictAchievement
==============
*/
char bdAchievementClient::predictAchievement(bdAchievementClient *this, const bdUserAccountID *user, const bdAchievementEvent *event, bdAchievementClient::Achievement *achievement)
{
  bdAchievementState *p_m_state; 
  unsigned __int64 Id; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  bdString *v13; 
  const char *Buffer; 
  unsigned __int64 v15; 
  bdString *v16; 
  const char *v17; 
  unsigned __int64 v18; 
  unsigned __int64 ArchetypeID; 
  unsigned __int64 v20; 
  __int64 v21; 
  unsigned int m_size; 
  unsigned __int64 *m_keys; 
  unsigned __int64 v24; 
  bdAchievementArchetypeHandler **v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  bdAchievementArchetypeHandler::Environment env; 
  bdString result; 

  p_m_state = &achievement->m_state;
  Id = bdAchievementEvent::getId((bdAchievementEvent *)event);
  if ( !bdAchievementDefinition::subscribesToEvent(&achievement->m_definition, Id) )
    return 0;
  v10 = bdAchievementState::getId(p_m_state);
  if ( bdAchievementDefinition::getId(&achievement->m_definition) != v10 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictAchievement", 0x166u, "State and definition have mismatched IDs");
  v11 = bdAchievementEvent::getId((bdAchievementEvent *)event);
  v12 = bdAchievementDefinition::getId(&achievement->m_definition);
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictAchievement", 0x169u, "Achievement %u subscribes to event %u", v12, v11);
  v13 = bdAchievementDefinition::toString(&achievement->m_definition, &result);
  Buffer = bdString::getBuffer(v13);
  v15 = bdAchievementDefinition::getId(&achievement->m_definition);
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictAchievement", 0x16Bu, "Achievement %u has definition %s", v15, Buffer);
  bdString::~bdString(&result);
  v16 = bdAchievementState::toString(p_m_state, &result);
  v17 = bdString::getBuffer(v16);
  v18 = bdAchievementDefinition::getId(&achievement->m_definition);
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictAchievement", 0x16Du, "Achievement %u has state %s", v18, v17);
  bdString::~bdString(&result);
  if ( !bdAchievementDefinition::hasArchetypeID(&achievement->m_definition) )
  {
    v28 = bdAchievementDefinition::getId(&achievement->m_definition);
    bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictAchievement", 0x170u, "Achievement %u has no archetype ID", v28);
    return 0;
  }
  ArchetypeID = bdAchievementDefinition::getArchetypeID(&achievement->m_definition);
  v20 = ArchetypeID;
  v21 = 0i64;
  m_size = this->m_archetypes.m_size;
  if ( !m_size )
    goto LABEL_11;
  m_keys = this->m_archetypes.m_keys;
  while ( *m_keys != ArchetypeID )
  {
    v21 = (unsigned int)(v21 + 1);
    ++m_keys;
    if ( (unsigned int)v21 >= m_size )
      goto LABEL_11;
  }
  v26 = &this->m_archetypes.m_values[v21];
  if ( !v26 )
  {
LABEL_11:
    v24 = bdAchievementDefinition::getId(&achievement->m_definition);
    bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictAchievement", 0x178u, "Achievement %u archetype %u has no registered handler", v24, v20);
    return 0;
  }
  bdAchievementArchetypeHandler::Environment::Environment(&env, user, event, &achievement->m_definition, p_m_state);
  if ( bdAchievementArchetypeHandler::process(*v26, &env) != RESULT_COMPLETED )
  {
    v29 = bdAchievementDefinition::getId(&achievement->m_definition);
    bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictAchievement", 0x181u, "Achievement %u was not completed", v29);
    return 0;
  }
  v27 = bdAchievementDefinition::getId(&achievement->m_definition);
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictAchievement", 0x185u, "Achievement %u was completed", v27);
  return 1;
}

/*
==============
bdAchievementClient::predictEvent
==============
*/
char bdAchievementClient::predictEvent(bdAchievementClient *this, const bdUserAccountID *user, const bdAchievementEvent *event)
{
  bdAchievementClient::UserAchievements *v7; 
  bdAchievementClient::UserAchievements *v8; 
  unsigned int v9; 
  bdStructFixedSizeArray<bdAchievementClient::Achievement,1> *p_achievements; 
  bdString *v11; 
  const char *Buffer; 
  bdString result; 

  if ( bdAchievementEvent::getId((bdAchievementEvent *)event) )
  {
    v7 = bdAchievementArrayMap<bdUserAccountID,bdAchievementClient::UserAchievements,1>::get(&this->m_users, user);
    v8 = v7;
    if ( v7 && v7->isLoaded )
    {
      v9 = 0;
      if ( v7->achievements.m_size )
      {
        p_achievements = &v7->achievements;
        do
        {
          bdHandleAssert(v9 < p_achievements->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementClient::Achievement,1>::operator []", 0x4Du, "i is out of range");
          if ( bdAchievementClient::predictAchievement(this, user, event, &p_achievements->m_elements[v9]) )
            this->m_achievementCompleted = 1;
          ++v9;
        }
        while ( v9 < v8->achievements.m_size );
      }
      return 1;
    }
    else
    {
      v11 = bdUserAccountID::toString((bdUserAccountID *)user, &result);
      Buffer = bdString::getBuffer(v11);
      bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictEvent", 0x14Bu, "Need to fetch achievements for user %s", Buffer);
      bdString::~bdString(&result);
      bdAchievementClient::startGetStates(this, user);
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictEvent", 0x144u, "Cannot predict event with unspecified ID");
    return 1;
  }
}

/*
==============
bdAchievementClient::processEvents
==============
*/
void bdAchievementClient::processEvents(bdAchievementClient *this)
{
  const bdAchievementEventBuffer::Iterator *UnprocessedEnd; 
  bdAchievementEventBuffer::Entry *v3; 
  bdAchievementEventBuffer::Entry *v4; 
  bdAchievementEvent *Event; 
  unsigned __int64 Id; 
  bdAchievementEventBuffer::Entry *v7; 
  const bdUserAccountID *User; 
  __int64 v9; 
  bdAchievementEventBuffer::Entry *v10; 
  bdUserAccountID *v11; 
  bdAchievementClient::UserAchievements *v12; 
  bdAchievementClient::UserAchievements *v13; 
  unsigned int v14; 
  bdStructFixedSizeArray<bdAchievementClient::Achievement,1> *p_achievements; 
  bdAchievementEventBuffer::Entry *v16; 
  const bdAchievementEventBuffer::Iterator *v17; 
  bdString *v18; 
  const char *Buffer; 
  __int64 v20; 
  bdAchievementEventBuffer::Iterator v21; 
  bdAchievementEventBuffer::Iterator result; 
  bdAchievementEventBuffer::Iterator v23; 
  bdString v24; 

  bdAchievementEventBuffer::getUnprocessedBegin(&this->m_eventBuffer, &v21);
  UnprocessedEnd = bdAchievementEventBuffer::getUnprocessedEnd(&this->m_eventBuffer, &result);
  if ( bdAchievementEventBuffer::Iterator::operator!=(&v21, UnprocessedEnd) )
  {
    do
    {
      v3 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&v21);
      if ( !bdAchievementEventBuffer::Entry::getTimesAttempted(v3) )
      {
        v4 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&v21);
        Event = (bdAchievementEvent *)bdAchievementEventBuffer::Entry::getEvent(v4);
        Id = bdAchievementEvent::getId(Event);
        bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::processEvents", 0x117u, "Processing event with ID %u", Id);
        if ( this->m_predictionEnabled )
        {
          v7 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&v21);
          User = bdAchievementEventBuffer::Entry::getUser(v7);
          v9 = 0i64;
          if ( this->m_users.m_size )
          {
            while ( !bdUserAccountID::operator==(&this->m_users.m_keys[v9], User) )
            {
              v9 = (unsigned int)(v9 + 1);
              if ( (unsigned int)v9 >= this->m_users.m_size )
                goto LABEL_17;
            }
            v10 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&v21);
            v11 = (bdUserAccountID *)bdAchievementEventBuffer::Entry::getUser(v10);
            if ( bdAchievementEvent::getId(Event) )
            {
              v12 = bdAchievementArrayMap<bdUserAccountID,bdAchievementClient::UserAchievements,1>::get(&this->m_users, v11);
              v13 = v12;
              if ( !v12 || !v12->isLoaded )
              {
                v18 = bdUserAccountID::toString(v11, &v24);
                Buffer = bdString::getBuffer(v18);
                bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictEvent", 0x14Bu, "Need to fetch achievements for user %s", Buffer);
                bdString::~bdString(&v24);
                bdAchievementClient::startGetStates(this, v11);
                bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::processEvents", 0x11Du, "Event processing waiting for task");
                return;
              }
              v14 = 0;
              if ( v12->achievements.m_size )
              {
                p_achievements = &v12->achievements;
                do
                {
                  bdHandleAssert(v14 < p_achievements->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementClient::Achievement,1>::operator []", 0x4Du, "i is out of range");
                  if ( bdAchievementClient::predictAchievement(this, v11, Event, &p_achievements->m_elements[v14]) )
                    this->m_achievementCompleted = 1;
                  ++v14;
                }
                while ( v14 < v13->achievements.m_size );
              }
            }
            else
            {
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::predictEvent", 0x144u, "Cannot predict event with unspecified ID");
            }
          }
        }
      }
LABEL_17:
      v16 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&v21);
      LODWORD(v20) = bdAchievementEventBuffer::Entry::getTimesAttempted(v16);
      bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::processEvents", 0x123u, "Successfully processed event.  Retry number %d", v20);
      bdAchievementEventBuffer::markProcessed(&this->m_eventBuffer);
      bdAchievementEventBuffer::Iterator::operator++(&v21, &v23, 0);
      v17 = bdAchievementEventBuffer::getUnprocessedEnd(&this->m_eventBuffer, &result);
    }
    while ( bdAchievementEventBuffer::Iterator::operator!=(&v21, v17) );
  }
}

/*
==============
bdAchievementClient::pump
==============
*/
void bdAchievementClient::pump(bdAchievementClient *this)
{
  bdAchievementClient::Status m_status; 
  __int32 v4; 
  __int32 v5; 
  bdAchievementEventBuffer::Iterator *v6; 
  const bdAchievementEventBuffer::Iterator *ProcessedBegin; 
  int v8; 
  bdLobbyErrorCode v9; 
  bdLobbyErrorCode v10; 
  const char *v11; 
  bdTask::bdStatus v12; 
  bdTask::bdStatus v13; 
  const char *v14; 
  int v15; 
  bdLobbyErrorCode ErrorCode; 
  bdLobbyErrorCode v17; 
  const char *v18; 
  bdTask::bdStatus v19; 
  bdTask::bdStatus v20; 
  const char *v21; 
  bdAchievementClient::UserAchievements *v22; 
  bdAchievementEventBuffer::Iterator *ProcessedEnd; 
  bdAchievementEventBuffer::Entry *v24; 
  unsigned __int64 Timestamp; 
  unsigned __int64 HiResTimeStamp; 
  char v29; 
  const char *v30; 
  const char *v31; 
  unsigned int NumDefinitions; 
  unsigned int NumStates; 
  double v36; 
  bdTask::bdStatus v37; 
  bdTask::bdStatus v38; 
  double v39; 
  bdLobbyErrorCode v40; 
  bdLobbyErrorCode v41; 
  bdAchievementEventBuffer::Iterator result; 
  bdAchievementEventBuffer::Iterator v43; 

  _RBP = this;
  m_status = this->m_status;
  if ( m_status == READY )
  {
    bdAchievementClient::processEvents(_RBP);
    bdAchievementEventBuffer::getProcessedBegin(&_RBP->m_eventBuffer, &result);
    ProcessedEnd = bdAchievementEventBuffer::getProcessedEnd(&_RBP->m_eventBuffer, &v43);
    if ( bdAchievementEventBuffer::Iterator::operator-(ProcessedEnd, &result) <= 0 )
      goto LABEL_38;
    v24 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&result);
    Timestamp = bdAchievementEventBuffer::Entry::getTimestamp(v24);
    HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
    *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(Timestamp, HiResTimeStamp);
    __asm
    {
      vmovaps xmm1, xmm0
      vmovss  xmm0, dword ptr [rbp+1Ch]
      vcomiss xmm1, xmm0
    }
    if ( !v29 || _RBP->m_isDraining || _RBP->m_achievementCompleted )
    {
      v30 = "false";
      v31 = "false";
      if ( _RBP->m_achievementCompleted )
        v31 = "true";
      if ( _RBP->m_isDraining )
        v30 = "true";
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+88h+var_48], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+88h+var_50], xmm1
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::shouldFlush", 0x139u, "Flush required: %0.2f/%0.2f seconds - Is draining: %s - Achievement completed: %s", v36, v39, v30, v31);
      bdAchievementClient::startFlush(_RBP);
    }
    else
    {
LABEL_38:
      *(_WORD *)&_RBP->m_isDraining = 0;
    }
    return;
  }
  v4 = m_status - 1;
  if ( !v4 )
  {
    v15 = ((__int64 (__fastcall *)(bdRemoteTask *))_RBP->m_getStatesTask.m_ptr->getStatus)(_RBP->m_getStatesTask.m_ptr) - 1;
    if ( !v15 )
      return;
    if ( v15 != 1 )
    {
      if ( _RBP->m_getStatesIsBackingOff )
      {
        if ( bdBackoffTimer::checkTimer(&_RBP->m_getStatesBackoff) )
        {
          _RBP->m_getStatesIsBackingOff = 0;
          bdAchievementClient::startGetStates(_RBP, &_RBP->m_taskUser);
        }
      }
      else
      {
        ErrorCode = bdRemoteTask::getErrorCode(_RBP->m_getStatesTask.m_ptr);
        v17 = bdRemoteTask::getErrorCode(_RBP->m_getStatesTask.m_ptr);
        v18 = bdLobbyErrorCodeToString(v17);
        v19 = _RBP->m_getStatesTask.m_ptr->getStatus(_RBP->m_getStatesTask.m_ptr);
        v20 = _RBP->m_getStatesTask.m_ptr->getStatus(_RBP->m_getStatesTask.m_ptr);
        v21 = toString(v20);
        v41 = ErrorCode;
        v38 = v19;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetStates", 0x20Eu, "Get states failed with status %s (%u) and code %s (%u)", v21, v38, v18, v41);
        bdBackoffTimer::recordFailure(&_RBP->m_getStatesBackoff);
        _RBP->m_getStatesIsBackingOff = 1;
      }
      return;
    }
    NumStates = bdGetAchievementStatesResponse::getNumStates(&_RBP->m_getStatesResponse);
    bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetStates", 0x1FDu, "Got response containing %u active achievement states", NumStates);
    bdBackoffTimer::reset(&_RBP->m_getStatesBackoff);
    if ( bdAchievementClient::startGetDefinitions(_RBP, &_RBP->m_taskUser) )
      return;
    v22 = bdAchievementArrayMap<bdUserAccountID,bdAchievementClient::UserAchievements,1>::get(&_RBP->m_users, &_RBP->m_taskUser);
    if ( v22 )
      v22->isLoaded = 1;
    goto LABEL_10;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = ((__int64 (__fastcall *)(bdRemoteTask *))_RBP->m_getDefinitionsTask.m_ptr->getStatus)(_RBP->m_getDefinitionsTask.m_ptr) - 1;
    if ( !v8 )
      return;
    if ( v8 == 1 )
    {
      NumDefinitions = bdGetAchievementDefinitionsResponse::getNumDefinitions(&_RBP->m_getDefinitionsResponse);
      bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetDefinitions", 0x1B8u, "Got response containing %u definitions", NumDefinitions);
      bdBackoffTimer::reset(&_RBP->m_getDefinitionsBackoff);
      bdAchievementClient::handleResponses(_RBP);
    }
    else
    {
      if ( !_RBP->m_getDefinitionsIsBackingOff )
      {
        v9 = bdRemoteTask::getErrorCode(_RBP->m_getDefinitionsTask.m_ptr);
        v10 = bdRemoteTask::getErrorCode(_RBP->m_getDefinitionsTask.m_ptr);
        v11 = bdLobbyErrorCodeToString(v10);
        v12 = _RBP->m_getDefinitionsTask.m_ptr->getStatus(_RBP->m_getDefinitionsTask.m_ptr);
        v13 = _RBP->m_getDefinitionsTask.m_ptr->getStatus(_RBP->m_getDefinitionsTask.m_ptr);
        v14 = toString(v13);
        v40 = v9;
        v37 = v12;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetDefinitions", 0x1C9u, "Get definitions failed with status %s (%u) and code %s (%u)", v14, v37, v11, v40);
        bdBackoffTimer::recordFailure(&_RBP->m_getDefinitionsBackoff);
        _RBP->m_getDefinitionsIsBackingOff = 1;
        return;
      }
      if ( !bdBackoffTimer::checkTimer(&_RBP->m_getDefinitionsBackoff) )
        return;
      _RBP->m_getDefinitionsIsBackingOff = 0;
      if ( bdAchievementClient::startGetDefinitions(_RBP, &_RBP->m_taskUser) )
        return;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::checkGetDefinitions", 0x1D5u, "Retry found no missing definitions");
      bdAchievementClient::handleResponses(_RBP);
    }
LABEL_10:
    _RBP->m_status = READY;
    return;
  }
  if ( v5 != 1 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::pump", 0x84u, "Invalid bdAchievementClient::Status");
    return;
  }
  bdAchievementEventBatch::pump(&_RBP->m_eventBatch);
  if ( bdAchievementEventBatch::getStatus(&_RBP->m_eventBatch) == BLOCKED )
  {
    v6 = bdAchievementEventBuffer::getProcessedEnd(&_RBP->m_eventBuffer, &result);
    ProcessedBegin = bdAchievementEventBuffer::getProcessedBegin(&_RBP->m_eventBuffer, &v43);
    if ( bdAchievementEventBuffer::Iterator::operator-(v6, ProcessedBegin) > 0 )
    {
      bdAchievementClient::startFlush(_RBP);
      return;
    }
    *(_WORD *)&_RBP->m_isDraining = 0;
    goto LABEL_10;
  }
}

/*
==============
bdAchievementClient::registerArchetype
==============
*/
bool bdAchievementClient::registerArchetype(bdAchievementClient *this, unsigned __int64 archetypeID, bdAchievementArchetypeHandler *handler)
{
  __int64 m_size; 
  bool result; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::registerArchetype", 0xD5u, "registering archetypeID %u", archetypeID);
  m_size = this->m_archetypes.m_size;
  if ( (_DWORD)m_size )
    return 0;
  this->m_archetypes.m_keys[m_size] = archetypeID;
  this->m_archetypes.m_values[this->m_archetypes.m_size] = handler;
  result = 1;
  ++this->m_archetypes.m_size;
  return result;
}

/*
==============
bdAchievementClient::removeUser
==============
*/
char bdAchievementClient::removeUser(bdAchievementClient *this, const bdUserAccountID *user)
{
  bdString *v4; 
  const char *Buffer; 
  __int64 v6; 
  __int64 v7; 
  bdUserAccountID *v8; 
  __int64 v10; 
  bdString v11; 

  v4 = bdUserAccountID::toString((bdUserAccountID *)user, &v11);
  Buffer = bdString::getBuffer(v4);
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::removeUser", 0xCFu, "removing user %s", Buffer);
  bdString::~bdString(&v11);
  v6 = 0i64;
  if ( !this->m_users.m_size )
    return 0;
  while ( 1 )
  {
    v7 = (unsigned int)v6;
    v8 = &this->m_users.m_keys[v6];
    if ( bdUserAccountID::operator==(v8, user) )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= this->m_users.m_size )
      return 0;
  }
  v10 = this->m_users.m_size - 1;
  bdUserAccountID::operator=(v8, &this->m_users.m_keys[v10]);
  bdAchievementClient::UserAchievements::operator=(&this->m_users.m_values[v7], &this->m_users.m_values[v10]);
  --this->m_users.m_size;
  return 1;
}

/*
==============
bdAchievementClient::reportUserEvent
==============
*/
char bdAchievementClient::reportUserEvent(bdAchievementClient *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform, const bdAchievementEvent *event, int timesAttempted)
{
  unsigned __int64 timestamp; 
  const bdAchievementEventBuffer::Entry *v11; 
  bool v12; 
  unsigned __int64 UserID; 
  const char *AccountType; 
  unsigned __int64 Id; 
  bdAchievementEventBuffer::Entry ptr; 

  if ( timesAttempted >= this->m_maxEventAttempts )
  {
    UserID = bdUserAccountID::getUserID((bdUserAccountID *)user);
    AccountType = bdUserAccountID::getAccountType((bdUserAccountID *)user);
    Id = bdAchievementEvent::getId((bdAchievementEvent *)event);
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::reportUserEvent", 0x3Fu, "Dropping event with ID %d for user %s-%I64u after %d attempts.", Id, AccountType, UserID, timesAttempted);
    return 1;
  }
  else
  {
    timestamp = bdPlatformTiming::getHiResTimeStamp();
    bdAchievementEventBuffer::Entry::Entry(&ptr, user, firstPartyUser, platform, event, timestamp, timesAttempted);
    v12 = bdAchievementEventBuffer::pushUnprocessed(&this->m_eventBuffer, v11);
    `eh vector destructor iterator'(&ptr.m_event.m_keyValues, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdAchievementEventKeyValue::`vbase destructor);
    bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&ptr.m_event.__vftable + 3));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&ptr.m_event.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&ptr.m_event.m_keyValues + 1));
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)ptr.m_firstPartyUser.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)ptr.m_firstPartyUser.gap38);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)ptr.m_user.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)ptr.m_user.gap38);
    return v12;
  }
}

/*
==============
bdAchievementClient::setFlushIntervalSeconds
==============
*/

void __fastcall bdAchievementClient::setFlushIntervalSeconds(bdAchievementClient *this, double flushIntervalSeconds)
{
  __asm { vmovss  dword ptr [rcx+1Ch], xmm1 }
}

/*
==============
bdAchievementClient::setMaxEventAttempts
==============
*/
void bdAchievementClient::setMaxEventAttempts(bdAchievementClient *this, int maxEventAttempts)
{
  this->m_maxEventAttempts = maxEventAttempts;
}

/*
==============
bdAchievementClient::setPredictionEnabled
==============
*/
void bdAchievementClient::setPredictionEnabled(bdAchievementClient *this, bool predictionEnabled)
{
  this->m_predictionEnabled = predictionEnabled;
}

/*
==============
bdAchievementClient::shouldFlush
==============
*/
char bdAchievementClient::shouldFlush(bdAchievementClient *this)
{
  bdAchievementEventBuffer::Iterator *ProcessedEnd; 
  bdAchievementEventBuffer::Entry *v4; 
  unsigned __int64 Timestamp; 
  unsigned __int64 HiResTimeStamp; 
  char v9; 
  const char *v10; 
  const char *v11; 
  double v15; 
  double v16; 
  bdAchievementEventBuffer::Iterator result; 
  bdAchievementEventBuffer::Iterator v18; 

  _RDI = this;
  bdAchievementEventBuffer::getProcessedBegin(&this->m_eventBuffer, &result);
  ProcessedEnd = bdAchievementEventBuffer::getProcessedEnd(&_RDI->m_eventBuffer, &v18);
  if ( bdAchievementEventBuffer::Iterator::operator-(ProcessedEnd, &result) <= 0 )
    return 0;
  v4 = (bdAchievementEventBuffer::Entry *)bdAchievementEventBuffer::Iterator::operator->(&result);
  Timestamp = bdAchievementEventBuffer::Entry::getTimestamp(v4);
  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(Timestamp, HiResTimeStamp);
  __asm
  {
    vmovaps xmm1, xmm0
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vcomiss xmm1, xmm0
  }
  if ( v9 )
  {
    if ( !_RDI->m_isDraining && !_RDI->m_achievementCompleted )
      return 0;
  }
  v10 = "false";
  v11 = "false";
  if ( _RDI->m_achievementCompleted )
    v11 = "true";
  if ( _RDI->m_isDraining )
    v10 = "true";
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+88h+var_48], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+88h+var_50], xmm1
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::shouldFlush", 0x139u, "Flush required: %0.2f/%0.2f seconds - Is draining: %s - Achievement completed: %s", v15, v16, v10, v11);
  return 1;
}

/*
==============
bdAchievementClient::startFlush
==============
*/
void bdAchievementClient::startFlush(bdAchievementClient *this)
{
  const bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16> *v2; 
  unsigned int v8; 
  __int64 i; 
  bdAchievementEventBatch ptr; 

  bdAchievementEventBatch::bdAchievementEventBatch(&ptr, this->m_service, this->m_context.m_buffer, &this->m_eventBuffer, this);
  _RDI = v2;
  _RBX = &this->m_eventBatch;
  if ( &this->m_eventBatch != (bdAchievementEventBatch *)v2 )
    bdStructFixedSizeArray<bdAchievementEventBatch::Entry,16>::copy(&this->m_eventBatch.m_entries, v2);
  this->m_eventBatch.m_status = (bdAchievementEventBatch::Status)_RDI[1].m_elements[0].m_user.__vftable;
  this->m_eventBatch.m_service = (bdAchievementsEngineService *)*((_QWORD *)&_RDI[1].m_elements[0].m_user.__vftable + 1);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+19E98h]
    vmovups xmmword ptr [rbx+19E98h], xmm0
  }
  this->m_eventBatch.m_context.m_buffer[16] = _RDI[1].m_elements[0].m_user._bytes_20[0];
  this->m_eventBatch.m_eventBuffer = *(bdAchievementEventBuffer **)&_RDI[1].m_elements[0].m_user._bytes_20[8];
  this->m_eventBatch.m_achievementClient = (bdAchievementClient *)_RDI[1].m_elements[0].m_user.m_userID;
  bdReference<bdRemoteTask>::operator=(&this->m_eventBatch.m_remoteTask, (const bdReference<bdRemoteTask> *)_RDI[1].m_elements[0].m_user.gap38);
  this->m_eventBatch.m_requestID[0] = _RDI[1].m_elements[0].m_user.gap38[8];
  this->m_eventBatch.m_requestID[1] = _RDI[1].m_elements[0].m_user.gap38[9];
  this->m_eventBatch.m_requestID[2] = _RDI[1].m_elements[0].m_user.gap38[10];
  this->m_eventBatch.m_requestID[3] = _RDI[1].m_elements[0].m_user.gap38[11];
  this->m_eventBatch.m_requestID[4] = _RDI[1].m_elements[0].m_user.gap38[12];
  this->m_eventBatch.m_requestID[5] = _RDI[1].m_elements[0].m_user.gap38[13];
  this->m_eventBatch.m_requestID[6] = _RDI[1].m_elements[0].m_user.gap38[14];
  this->m_eventBatch.m_requestID[7] = _RDI[1].m_elements[0].m_user.gap38[15];
  this->m_eventBatch.m_requestID[8] = (char)_RDI[1].m_elements[0].m_firstPartyUser.__vftable;
  this->m_eventBatch.m_requestID[9] = BYTE1(_RDI[1].m_elements[0].m_firstPartyUser.__vftable);
  this->m_eventBatch.m_requestID[10] = BYTE2(_RDI[1].m_elements[0].m_firstPartyUser.__vftable);
  this->m_eventBatch.m_requestID[11] = BYTE3(_RDI[1].m_elements[0].m_firstPartyUser.__vftable);
  this->m_eventBatch.m_requestID[12] = BYTE4(_RDI[1].m_elements[0].m_firstPartyUser.__vftable);
  this->m_eventBatch.m_requestID[13] = BYTE5(_RDI[1].m_elements[0].m_firstPartyUser.__vftable);
  this->m_eventBatch.m_requestID[14] = BYTE6(_RDI[1].m_elements[0].m_firstPartyUser.__vftable);
  this->m_eventBatch.m_requestID[15] = HIBYTE(_RDI[1].m_elements[0].m_firstPartyUser.__vftable);
  this->m_eventBatch.m_requestID[16] = *((_BYTE *)&_RDI[1].m_elements[0].m_firstPartyUser.__vftable + 8);
  this->m_eventBatch.m_requestID[17] = *((_BYTE *)&_RDI[1].m_elements[0].m_firstPartyUser.__vftable + 9);
  this->m_eventBatch.m_requestID[18] = *((_BYTE *)&_RDI[1].m_elements[0].m_firstPartyUser.__vftable + 10);
  this->m_eventBatch.m_requestID[19] = *((_BYTE *)&_RDI[1].m_elements[0].m_firstPartyUser.__vftable + 11);
  this->m_eventBatch.m_requestID[20] = *((_BYTE *)&_RDI[1].m_elements[0].m_firstPartyUser.__vftable + 12);
  this->m_eventBatch.m_requestID[21] = *((_BYTE *)&_RDI[1].m_elements[0].m_firstPartyUser.__vftable + 13);
  this->m_eventBatch.m_requestID[22] = *((_BYTE *)&_RDI[1].m_elements[0].m_firstPartyUser.__vftable + 14);
  this->m_eventBatch.m_requestID[23] = *((_BYTE *)&_RDI[1].m_elements[0].m_firstPartyUser.__vftable + 15);
  this->m_eventBatch.m_requestID[24] = *((_BYTE *)&_RDI[1].m_elements[0].m_firstPartyUser.__vftable + 16);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+19EE4h]
    vmovups xmmword ptr [rbx+19EE4h], xmm0
    vmovsd  xmm1, qword ptr [rdi+19EF4h]
    vmovsd  qword ptr [rbx+19EF4h], xmm1
  }
  *(_DWORD *)&this->m_eventBatch.m_backoffTimer.m_timeouts[12] = *(_DWORD *)&_RDI[1].m_elements[0].m_firstPartyUser._bytes_20[12];
  this->m_eventBatch.m_reportEventsResponse.m_bdrest_status = *(_DWORD *)_RDI[1].m_elements[0].m_firstPartyUser.gap38;
  this->m_eventBatch.m_reportEventsResponse.m_bdrest_retries = *(_DWORD *)&_RDI[1].m_elements[0].m_firstPartyUser.gap38[4];
  this->m_eventBatch.m_reportEventsResponse.m_bdrest_handlerSetErrorCode = _RDI[1].m_elements[0].m_firstPartyUser.gap38[8];
  this->m_eventBatch.m_reportEventsResponse.m_bdrest_handlerErrorCode = *(_DWORD *)&_RDI[1].m_elements[0].m_firstPartyUser.gap38[12];
  this->m_eventBatch.m_reportEventsResponse.m_bdrest_spanID = _RDI[1].m_elements[0].m_platform;
  this->m_eventBatch.m_reportEventsResponse.m_bdrest_transactionID = (unsigned __int64)_RDI[1].m_elements[0].m_events.m_elements[0].__vftable;
  if ( &this->m_eventBatch.m_reportEventsResponse.m_results != (bdStructFixedSizeArray<enum bdLobbyErrorCode,64> *)(&_RDI[1].m_elements[0].m_events.m_elements[0].__vftable + 1) )
  {
    v8 = (unsigned int)_RDI[1].m_elements[0].m_events.m_elements[0].m_keyValues.m_elements[2].__vftable;
    this->m_eventBatch.m_reportEventsResponse.m_results.m_size = v8;
    for ( i = 0i64; (unsigned int)i < this->m_eventBatch.m_reportEventsResponse.m_results.m_size; i = (unsigned int)(i + 1) )
      this->m_eventBatch.m_reportEventsResponse.m_results.m_elements[i] = *((_DWORD *)&_RDI[1].m_elements[0].m_events.m_elements[0].__vftable + i + 2);
  }
  this->m_eventBatch.m_reportEventsResponse.m_allSucceeded = BYTE4(_RDI[1].m_elements[0].m_events.m_elements[0].m_keyValues.m_elements[2].__vftable);
  bdRESTResponse::~bdRESTResponse(&ptr.m_reportEventsResponse);
  if ( ptr.m_remoteTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&ptr.m_remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( ptr.m_remoteTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))ptr.m_remoteTask.m_ptr->~bdReferencable)(ptr.m_remoteTask.m_ptr, 1i64);
    ptr.m_remoteTask.m_ptr = NULL;
  }
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&ptr.m_context);
  `eh vector destructor iterator'(&ptr, 0x19E8ui64, 0x10ui64, (void (__fastcall *)(void *))bdAchievementEventBatch::Entry::~Entry);
  bdAchievementEventBatch::start(&this->m_eventBatch);
  this->m_status = LOGIN_DELAY;
}

/*
==============
bdAchievementClient::startGetDefinitions
==============
*/
bool bdAchievementClient::startGetDefinitions(bdAchievementClient *this, const bdUserAccountID *user)
{
  unsigned int NumStates; 
  unsigned int v5; 
  unsigned int i; 
  bdAchievementState *State; 
  unsigned __int64 Id; 
  bdString *v9; 
  const char *Buffer; 
  const bdReference<bdRemoteTask> *AchievementDefinitions; 
  _BYTE *v12; 
  unsigned __int64 v13; 
  unsigned int v15; 
  bdReference<bdRemoteTask> v16; 
  bdString result; 
  __int64 v18; 
  bdGetAchievementDefinitionsRequest request; 

  v18 = -2i64;
  NumStates = bdGetAchievementStatesResponse::getNumStates(&this->m_getStatesResponse);
  v5 = NumStates;
  if ( NumStates )
  {
    bdGetAchievementDefinitionsRequest::bdGetAchievementDefinitionsRequest(&request, this->m_context.m_buffer, 0x64u, (const char *)&queryFormat.fmt + 3);
    for ( i = 0; i < v5; ++i )
    {
      State = (bdAchievementState *)bdGetAchievementStatesResponse::getState(&this->m_getStatesResponse, i);
      Id = bdAchievementState::getId(State);
      if ( Id )
        bdGetAchievementDefinitionsRequest::addAchievementId(&request, Id);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::startGetDefinitions", 0x1A4u, "found achievement with unspecified ID");
    }
    v9 = bdUserAccountID::toString((bdUserAccountID *)user, &result);
    Buffer = bdString::getBuffer(v9);
    v15 = v5;
    bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::startGetDefinitions", 0x1A9u, "Getting %u definitions for user %s active achievements", v15, Buffer);
    bdString::~bdString(&result);
    AchievementDefinitions = bdAchievementsEngineService::getAchievementDefinitions(this->m_service, &v16, &request, &this->m_getDefinitionsResponse);
    bdReference<bdRemoteTask>::operator=(&this->m_getDefinitionsTask, AchievementDefinitions);
    if ( v16.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v16.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v16.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v16.m_ptr->~bdReferencable)(v16.m_ptr, 1i64);
    bdUserAccountID::operator=(&this->m_taskUser, user);
    this->m_status = FIRST_PARTY_AUTHED;
    v12 = memchr_0(&request.m_pageToken, 0, 0x401ui64);
    if ( v12 )
      v13 = v12 - (_BYTE *)&request.m_pageToken;
    else
      v13 = 1025i64;
    bdHandleAssert(v13 < 0x401, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    bdStructFixedSizeString<20>::~bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&request.__vftable + 2));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.gap783[5]);
    LOBYTE(NumStates) = 1;
  }
  return NumStates;
}

/*
==============
bdAchievementClient::startGetStates
==============
*/
void bdAchievementClient::startGetStates(bdAchievementClient *this, const bdUserAccountID *user)
{
  bdString *v4; 
  const char *Buffer; 
  __int64 v6; 
  bdGetAchievementStatesRequest *v7; 
  bdGetAchievementStatesRequest *v8; 
  bdGetAchievementStatesRequest *v9; 
  const bdGetAchievementStatesRequest *v10; 
  const bdReference<bdRemoteTask> *AchievementStates; 
  bdReference<bdRemoteTask> v12; 
  bdString result; 
  __int64 v14; 
  bdGetAchievementStatesRequest request; 
  bdGetAchievementStatesRequest v16; 

  v14 = -2i64;
  v4 = bdUserAccountID::toString((bdUserAccountID *)user, &result);
  Buffer = bdString::getBuffer(v4);
  bdLogMessage(BD_LOG_INFO, "info/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::startGetStates", 0x1E2u, "Getting active achievement states for user %s", Buffer);
  bdString::~bdString(&result);
  v6 = 0i64;
  if ( !this->m_users.m_size )
    goto LABEL_4;
  while ( !bdUserAccountID::operator==(&this->m_users.m_keys[v6], user) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= this->m_users.m_size )
      goto LABEL_4;
  }
  if ( (bdAchievementClient *)((char *)this + 3712 * (unsigned int)v6) == (bdAchievementClient *)-124040i64 )
  {
LABEL_4:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementclient.cpp", "bdAchievementClient::startGetStates", 0x1E8u, "Trying to get states for un-added user");
  }
  else
  {
    bdGetAchievementStatesRequest::bdGetAchievementStatesRequest(&v16, this->m_context.m_buffer, 0x64u, (const char *)&queryFormat.fmt + 3);
    v8 = bdGetAchievementStatesRequest::setUser(v7, user, &this->m_users.m_values[(unsigned int)v6].firstPartyUser, this->m_users.m_values[(unsigned int)v6].platform);
    v9 = bdGetAchievementStatesRequest::addStatus(v8, ACTIVE);
    v10 = bdGetAchievementStatesRequest::setIncludeUninitialized(v9, 1);
    bdGetAchievementStatesRequest::bdGetAchievementStatesRequest(&request, v10);
    bdGetAchievementStatesRequest::`vbase destructor(&v16);
    AchievementStates = bdAchievementsEngineService::getAchievementStates(this->m_service, &v12, &request, &this->m_getStatesResponse);
    bdReference<bdRemoteTask>::operator=(&this->m_getStatesTask, AchievementStates);
    if ( v12.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v12.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v12.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v12.m_ptr->~bdReferencable)(v12.m_ptr, 1i64);
    }
    bdUserAccountID::operator=(&this->m_taskUser, user);
    this->m_status = FETCHING_FIRST_PARTY_TOKEN;
    bdGetAchievementStatesRequest::`vbase destructor(&request);
  }
}

