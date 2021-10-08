/*
==============
PartyClientTaskService::ResetTask
==============
*/

void __fastcall PartyClientTaskService::ResetTask(PartyClientTaskService *this, PartyData *const party, const PartyClientTaskId taskId)
{
  ?ResetTask@PartyClientTaskService@@QEAAXQEAUPartyData@@W4PartyClientTaskId@@@Z(this, party, taskId);
}

/*
==============
PartyClientTaskService::Init
==============
*/

void __fastcall PartyClientTaskService::Init(PartyClientTaskService *this)
{
  ?Init@PartyClientTaskService@@QEAAXXZ(this);
}

/*
==============
PartyClientTaskService::ResetHostForPlatform
==============
*/

XUID *__fastcall PartyClientTaskService::ResetHostForPlatform(PartyClientTaskService *this, XUID *result, PartyData *const party, const ClientPlatform platform)
{
  return ?ResetHostForPlatform@PartyClientTaskService@@QEAA?AUXUID@@QEAUPartyData@@W4ClientPlatform@@@Z(this, result, party, platform);
}

/*
==============
PartyClientTaskService::Completed
==============
*/

bool __fastcall PartyClientTaskService::Completed(PartyClientTaskService *this)
{
  return ?Completed@PartyClientTaskService@@QEAA_NXZ(this);
}

/*
==============
PartyClientTaskService::StartTask
==============
*/

void __fastcall PartyClientTaskService::StartTask(PartyClientTaskService *this, PartyData *const party, const PartyClientTaskId taskId, const msg_t *payloadMsg)
{
  ?StartTask@PartyClientTaskService@@QEAAXQEAUPartyData@@W4PartyClientTaskId@@PEBUmsg_t@@@Z(this, party, taskId, payloadMsg);
}

/*
==============
PartyClientTaskService::Start
==============
*/

void __fastcall PartyClientTaskService::Start(PartyClientTaskService *this, PartyData *const party)
{
  ?Start@PartyClientTaskService@@QEAAXQEAUPartyData@@@Z(this, party);
}

/*
==============
PartyClientTaskService::TryStartTasks
==============
*/

void __fastcall PartyClientTaskService::TryStartTasks(PartyClientTaskService *this, PartyData *const party)
{
  ?TryStartTasks@PartyClientTaskService@@AEAAXQEAUPartyData@@@Z(this, party);
}

/*
==============
PartyClientTaskService::Stop
==============
*/

void __fastcall PartyClientTaskService::Stop(PartyClientTaskService *this)
{
  ?Stop@PartyClientTaskService@@QEAAXXZ(this);
}

/*
==============
PartyClientTaskService::TryRestartTask
==============
*/

bool __fastcall PartyClientTaskService::TryRestartTask(PartyClientTaskService *this, PartyData *const party, PartyClientTask *task)
{
  return ?TryRestartTask@PartyClientTaskService@@AEAA_NQEAUPartyData@@AEAVPartyClientTask@@@Z(this, party, task);
}

/*
==============
PartyClientTaskService::Frame
==============
*/

void __fastcall PartyClientTaskService::Frame(PartyClientTaskService *this, PartyData *const party)
{
  ?Frame@PartyClientTaskService@@QEAAXQEAUPartyData@@@Z(this, party);
}

/*
==============
PartyClientTaskService::HandleMessage
==============
*/

void __fastcall PartyClientTaskService::HandleMessage(PartyClientTaskService *this, PartyData *const party, msg_t *const message)
{
  ?HandleMessage@PartyClientTaskService@@QEAAXQEAUPartyData@@QEAUmsg_t@@@Z(this, party, message);
}

/*
==============
PartyClientTaskService::HandleError
==============
*/

void __fastcall PartyClientTaskService::HandleError(PartyClientTaskService *this, PartyData *const party, PartyClientTask *task)
{
  ?HandleError@PartyClientTaskService@@AEAAXQEAUPartyData@@AEAVPartyClientTask@@@Z(this, party, task);
}

/*
==============
PartyClientTaskService::TryStartHostResolvers
==============
*/

void __fastcall PartyClientTaskService::TryStartHostResolvers(PartyClientTaskService *this, PartyData *party, const bool force)
{
  ?TryStartHostResolvers@PartyClientTaskService@@AEAAXPEAUPartyData@@_N@Z(this, party, force);
}

/*
==============
PartyClientTaskService::Completed
==============
*/
char PartyClientTaskService::Completed(PartyClientTaskService *this)
{
  int v2; 

  v2 = 0;
  while ( PartyClientTask::Completed(&this->m_clientTasks[(__int64)v2]) )
  {
    if ( ++v2 >= 7 )
      return 1;
  }
  return 0;
}

/*
==============
PartyClientTaskService::Frame
==============
*/
void PartyClientTaskService::Frame(PartyClientTaskService *this, PartyData *const party)
{
  __int64 v2; 
  __int64 v3; 
  PartyClientTaskService *v6; 
  PartyClientTask *m_clientTasks; 
  PartyClientTask *v8; 
  __int64 v9; 
  PartyClientTaskHostResolver *v10; 
  int v11; 
  PartyClientTaskId Id; 
  XUID result; 

  v2 = 7i64;
  v3 = 7i64;
  v6 = this;
  do
  {
    if ( !PartyClientTaskHostResolver::HostAssigned(v6->m_hostResolver) )
      PartyClientTaskHostResolver::Start(v6->m_hostResolver, party);
    v6 = (PartyClientTaskService *)((char *)v6 + 1616);
    --v3;
  }
  while ( v3 );
  m_clientTasks = this->m_clientTasks;
  v8 = this->m_clientTasks;
  v9 = 7i64;
  do
  {
    if ( PartyClientTask::CanStart(v8) )
    {
      v10 = &this->m_hostResolver[(char)PartyClientTask::GetRequiredPlatform(v8)];
      if ( PartyClientTaskHostResolver::HostAssigned(v10) )
      {
        PartyClientTaskHostResolver::GetHost(v10, &result);
        PartyClientTask::Start(v8, party, result);
      }
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  v11 = Sys_Milliseconds();
  do
  {
    PartyClientTask::Frame(m_clientTasks, party, v11);
    if ( PartyClientTask::Failed(m_clientTasks) )
    {
      Id = PartyClientTask::GetId(m_clientTasks);
      Com_PrintWarning(25, "Client task %i failed\n", (unsigned int)Id);
      PartyClientTask::Reset(m_clientTasks);
      PartyClientTaskService::TryRestartTask(this, party, m_clientTasks);
    }
    ++m_clientTasks;
    --v2;
  }
  while ( v2 );
}

/*
==============
PartyClientTaskService::HandleError
==============
*/
void PartyClientTaskService::HandleError(PartyClientTaskService *this, PartyData *const party, PartyClientTask *task)
{
  PartyClientTaskId Id; 

  Id = PartyClientTask::GetId(task);
  Com_PrintWarning(25, "Client task %i failed\n", (unsigned int)Id);
  PartyClientTask::Reset(task);
  PartyClientTaskService::TryRestartTask(this, party, task);
}

/*
==============
PartyClientTaskService::HandleMessage
==============
*/
void PartyClientTaskService::HandleMessage(PartyClientTaskService *this, PartyData *const party, msg_t *const message)
{
  __int64 Bits; 

  Bits = MSG_ReadBits(message, 3u);
  if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
    __debugbreak();
  if ( (unsigned int)Bits > 7 )
    Com_PrintWarning(25, "Failed to parse client task response - invalid task id %i\n", (unsigned int)Bits);
  else
    PartyClientTask::HandleMessage(&this->m_clientTasks[(__int64)(int)Bits], party, message);
}

/*
==============
PartyClientTaskService::Init
==============
*/
void PartyClientTaskService::Init(PartyClientTaskService *this)
{
  int v1; 
  int v3; 
  PartyClientTaskService *v4; 
  PartyClientTask *m_clientTasks; 

  v1 = 0;
  v3 = 0;
  v4 = this;
  do
  {
    PartyClientTaskHostResolver::Init(v4->m_hostResolver, (const ClientPlatform)(unsigned __int8)v3++);
    v4 = (PartyClientTaskService *)((char *)v4 + 1616);
  }
  while ( v3 < 7 );
  m_clientTasks = this->m_clientTasks;
  do
    PartyClientTask::Init(m_clientTasks++, (PartyClientTaskId)v1++);
  while ( v1 < 7 );
}

/*
==============
PartyClientTaskService::ResetHostForPlatform
==============
*/
XUID *PartyClientTaskService::ResetHostForPlatform(PartyClientTaskService *this, XUID *result, PartyData *const party, const ClientPlatform platform)
{
  PartyClientTaskHostResolver *v6; 

  v6 = &this->m_hostResolver[(char)platform];
  PartyClientTaskHostResolver::RefreshHostListFromParty(v6, party);
  PartyClientTaskHostResolver::Next(v6, result, party);
  return result;
}

/*
==============
PartyClientTaskService::ResetTask
==============
*/
void PartyClientTaskService::ResetTask(PartyClientTaskService *this, PartyData *const party, const PartyClientTaskId taskId)
{
  __int64 v3; 
  PartyClientTask *v6; 

  v3 = taskId;
  Com_Printf(25, "Resseting client task%i.\n", (unsigned int)taskId);
  v6 = &this->m_clientTasks[v3];
  PartyClientTask::Stop(v6);
  PartyClientTaskService::TryRestartTask(this, party, v6);
}

/*
==============
PartyClientTaskService::Start
==============
*/
void PartyClientTaskService::Start(PartyClientTaskService *this, PartyData *const party)
{
  __int64 v4; 

  v4 = 7i64;
  do
  {
    PartyClientTaskHostResolver::Start(this->m_hostResolver, party);
    this = (PartyClientTaskService *)((char *)this + 1616);
    --v4;
  }
  while ( v4 );
}

/*
==============
PartyClientTaskService::StartTask
==============
*/
void PartyClientTaskService::StartTask(PartyClientTaskService *this, PartyData *const party, const PartyClientTaskId taskId, const msg_t *payloadMsg)
{
  __int64 v4; 
  PartyClientTask *v8; 

  v4 = taskId;
  Com_Printf(25, "Starting client task %i\n", (unsigned int)taskId);
  v8 = &this->m_clientTasks[v4];
  PartyClientTask::SetPayload(v8, payloadMsg->data, payloadMsg->cursize);
  PartyClientTask::Stop(v8);
  PartyClientTaskService::TryRestartTask(this, party, v8);
}

/*
==============
PartyClientTaskService::Stop
==============
*/
void PartyClientTaskService::Stop(PartyClientTaskService *this)
{
  __int64 v1; 
  __int64 v3; 
  PartyClientTaskService *v4; 
  PartyClientTask *m_clientTasks; 

  v1 = 7i64;
  v3 = 7i64;
  v4 = this;
  do
  {
    PartyClientTaskHostResolver::Reset(v4->m_hostResolver);
    v4 = (PartyClientTaskService *)((char *)v4 + 1616);
    --v3;
  }
  while ( v3 );
  m_clientTasks = this->m_clientTasks;
  do
  {
    PartyClientTask::Stop(m_clientTasks++);
    --v1;
  }
  while ( v1 );
}

/*
==============
PartyClientTaskService::TryRestartTask
==============
*/
bool PartyClientTaskService::TryRestartTask(PartyClientTaskService *this, PartyData *const party, PartyClientTask *task)
{
  PartyClientTaskHostResolver *v5; 
  PartyClientTaskId v6; 
  PartyClientTaskId Id; 
  int MemberByXUID; 
  const XUID *v10; 
  XUID v11; 
  XUID player; 
  XUID result; 

  v5 = &this->m_hostResolver[(char)PartyClientTask::GetRequiredPlatform(task)];
  if ( PartyClientTaskHostResolver::HostAssigned(v5) )
  {
    if ( PartyClientTask::CanStart(task) )
    {
      PartyClientTask::GetHost(task, &result);
      PartyClientTaskHostResolver::GetHost(v5, &player);
      MemberByXUID = Party_FindMemberByXUID(party, player);
      if ( XUID::operator==(&result, &player) || MemberByXUID == -1 )
      {
        v10 = PartyClientTaskHostResolver::Next(v5, &v11, party);
        XUID::operator=(&player, v10);
      }
      if ( XUID::IsValid(&player) )
        PartyClientTask::Start(task, party, player);
      return PartyClientTask::Active(task);
    }
    else
    {
      Id = PartyClientTask::GetId(task);
      Com_PrintWarning(25, "Could not restart task %i - task no longer startable\n", (unsigned int)Id);
      return 0;
    }
  }
  else
  {
    v6 = PartyClientTask::GetId(task);
    Com_PrintWarning(25, "Could not restart task %i - no client host assigned\n", (unsigned int)v6);
    return 0;
  }
}

/*
==============
PartyClientTaskService::TryStartHostResolvers
==============
*/
void PartyClientTaskService::TryStartHostResolvers(PartyClientTaskService *this, PartyData *party, const bool force)
{
  __int64 v6; 

  v6 = 7i64;
  do
  {
    if ( force || !PartyClientTaskHostResolver::HostAssigned(this->m_hostResolver) )
      PartyClientTaskHostResolver::Start(this->m_hostResolver, party);
    this = (PartyClientTaskService *)((char *)this + 1616);
    --v6;
  }
  while ( v6 );
}

/*
==============
PartyClientTaskService::TryStartTasks
==============
*/
void PartyClientTaskService::TryStartTasks(PartyClientTaskService *this, PartyData *const party)
{
  PartyClientTask *m_clientTasks; 
  __int64 v5; 
  PartyClientTaskHostResolver *v6; 
  XUID result; 

  m_clientTasks = this->m_clientTasks;
  v5 = 7i64;
  do
  {
    if ( PartyClientTask::CanStart(m_clientTasks) )
    {
      v6 = &this->m_hostResolver[(char)PartyClientTask::GetRequiredPlatform(m_clientTasks)];
      if ( PartyClientTaskHostResolver::HostAssigned(v6) )
      {
        PartyClientTaskHostResolver::GetHost(v6, &result);
        PartyClientTask::Start(m_clientTasks, party, result);
      }
    }
    ++m_clientTasks;
    --v5;
  }
  while ( v5 );
}

