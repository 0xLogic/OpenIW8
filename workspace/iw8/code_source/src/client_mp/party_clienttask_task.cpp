/*
==============
PartyClientTask::Frame
==============
*/

void __fastcall PartyClientTask::Frame(PartyClientTask *this, PartyData *const party, const int timeMillis)
{
  ?Frame@PartyClientTask@@QEAAXQEAUPartyData@@H@Z(this, party, timeMillis);
}

/*
==============
PartyClientTask::Failed
==============
*/

bool __fastcall PartyClientTask::Failed(PartyClientTask *this)
{
  return ?Failed@PartyClientTask@@QEBA_NXZ(this);
}

/*
==============
PartyClientTask::GetHost
==============
*/

XUID *__fastcall PartyClientTask::GetHost(PartyClientTask *this, XUID *result)
{
  return ?GetHost@PartyClientTask@@QEBA?AUXUID@@XZ(this, result);
}

/*
==============
PartyClientTask::HandleRequestMatchRules
==============
*/

bool __fastcall PartyClientTask::HandleRequestMatchRules(PartyClientTask *this, PartyData *const party, void *payload, const int payloadSize)
{
  return ?HandleRequestMatchRules@PartyClientTask@@AEAA_NQEAUPartyData@@PEAXH@Z(this, party, payload, payloadSize);
}

/*
==============
PartyClientTask::IsRequired
==============
*/

bool __fastcall PartyClientTask::IsRequired(PartyClientTask *this, PartyData *const party)
{
  return ?IsRequired@PartyClientTask@@QEBA_NQEAUPartyData@@@Z(this, party);
}

/*
==============
PartyClientTask::Reset
==============
*/

void __fastcall PartyClientTask::Reset(PartyClientTask *this)
{
  ?Reset@PartyClientTask@@QEAAXXZ(this);
}

/*
==============
PartyClientTask::GetId
==============
*/

PartyClientTaskId __fastcall PartyClientTask::GetId(PartyClientTask *this)
{
  return ?GetId@PartyClientTask@@QEBA?AW4PartyClientTaskId@@XZ(this);
}

/*
==============
PartyClientTask::PartyClientTask
==============
*/

void __fastcall PartyClientTask::PartyClientTask(PartyClientTask *this)
{
  ??0PartyClientTask@@QEAA@XZ(this);
}

/*
==============
PartyClientTask::CanStart
==============
*/

bool __fastcall PartyClientTask::CanStart(PartyClientTask *this)
{
  return ?CanStart@PartyClientTask@@QEBA_NXZ(this);
}

/*
==============
PartyClientTask::Start
==============
*/

void __fastcall PartyClientTask::Start(PartyClientTask *this, PartyData *const party, const XUID hostXuid)
{
  ?Start@PartyClientTask@@QEAAXQEAUPartyData@@UXUID@@@Z(this, party, hostXuid);
}

/*
==============
PartyClientTask::Stop
==============
*/

void __fastcall PartyClientTask::Stop(PartyClientTask *this)
{
  ?Stop@PartyClientTask@@QEAAXXZ(this);
}

/*
==============
PartyClientTask::HandleMessage
==============
*/

void __fastcall PartyClientTask::HandleMessage(PartyClientTask *this, PartyData *const party, msg_t *msg)
{
  ?HandleMessage@PartyClientTask@@QEAAXQEAUPartyData@@PEAUmsg_t@@@Z(this, party, msg);
}

/*
==============
PartyClientTask::HandleCreateSessionPS4
==============
*/

bool __fastcall PartyClientTask::HandleCreateSessionPS4(PartyClientTask *this, PartyData *const party, const void *payload, const int payloadSize)
{
  return ?HandleCreateSessionPS4@PartyClientTask@@AEAA_NQEAUPartyData@@PEBXH@Z(this, party, payload, payloadSize);
}

/*
==============
PartyClientTask::HandleRequestMapNames
==============
*/

bool __fastcall PartyClientTask::HandleRequestMapNames(PartyClientTask *this, PartyData *const party, void *payload, const int payloadSize)
{
  return ?HandleRequestMapNames@PartyClientTask@@AEAA_NQEAUPartyData@@PEAXH@Z(this, party, payload, payloadSize);
}

/*
==============
PartyClientTask::SetPayload
==============
*/

void __fastcall PartyClientTask::SetPayload(PartyClientTask *this, const void *payload, const int payloadSize)
{
  ?SetPayload@PartyClientTask@@QEAAXPEBXH@Z(this, payload, payloadSize);
}

/*
==============
PartyClientTask::Idle
==============
*/

bool __fastcall PartyClientTask::Idle(PartyClientTask *this)
{
  return ?Idle@PartyClientTask@@QEBA_NXZ(this);
}

/*
==============
PartyClientTask::HandleCreateSessionXbox
==============
*/

bool __fastcall PartyClientTask::HandleCreateSessionXbox(PartyClientTask *this, PartyData *const party, const void *payload, const int payloadSize)
{
  return ?HandleCreateSessionXbox@PartyClientTask@@AEAA_NQEAUPartyData@@PEBXH@Z(this, party, payload, payloadSize);
}

/*
==============
PartyClientTask::Init
==============
*/

void __fastcall PartyClientTask::Init(PartyClientTask *this, PartyClientTaskId taskId)
{
  ?Init@PartyClientTask@@QEAAXW4PartyClientTaskId@@@Z(this, taskId);
}

/*
==============
PartyClientTask::HandleRequestPartyPrivacy
==============
*/

bool __fastcall PartyClientTask::HandleRequestPartyPrivacy(PartyClientTask *this, PartyData *const party, void *payload, const int payloadSize)
{
  return ?HandleRequestPartyPrivacy@PartyClientTask@@AEAA_NQEAUPartyData@@PEAXH@Z(this, party, payload, payloadSize);
}

/*
==============
PartyClientTask::Completed
==============
*/

bool __fastcall PartyClientTask::Completed(PartyClientTask *this)
{
  return ?Completed@PartyClientTask@@QEBA_NXZ(this);
}

/*
==============
PartyClientTask::Active
==============
*/

bool __fastcall PartyClientTask::Active(PartyClientTask *this)
{
  return ?Active@PartyClientTask@@QEBA_NXZ(this);
}

/*
==============
PartyClientTask::HandleUpdateSession
==============
*/

bool __fastcall PartyClientTask::HandleUpdateSession(PartyClientTask *this, PartyData *const party, void *payload, const int payloadSize)
{
  return ?HandleUpdateSession@PartyClientTask@@AEAA_NQEAUPartyData@@PEAXH@Z(this, party, payload, payloadSize);
}

/*
==============
PartyClientTask::GetRequiredPlatform
==============
*/

ClientPlatform __fastcall PartyClientTask::GetRequiredPlatform(PartyClientTask *this)
{
  return ?GetRequiredPlatform@PartyClientTask@@QEBA?AW4ClientPlatform@@XZ(this);
}

/*
==============
PartyClientTask::PartyClientTask
==============
*/
void PartyClientTask::PartyClientTask(PartyClientTask *this)
{
  this->m_id = PARTY_CLIENT_TASK_NONE;
  this->m_state = STATE_NONE;
  XUID::NullXUID(&this->m_hostXuid);
  *(_QWORD *)&this->m_errorCount = 0i64;
  this->m_multiPacketCount = 0;
  this->m_payloadSize = 0;
}

/*
==============
PartyClientTask::Active
==============
*/
bool PartyClientTask::Active(PartyClientTask *this)
{
  return this->m_state == STATE_IDLE;
}

/*
==============
PartyClientTask::CanStart
==============
*/
bool PartyClientTask::CanStart(PartyClientTask *this)
{
  PartyClientTask::State m_state; 

  m_state = this->m_state;
  return (m_state == STATE_NONE || m_state == STATE_CONNECTED) && this->m_errorCount < Dvar_GetInt_Internal_DebugName(DVARINT_party_client_task_max_retries, "party_client_task_max_retries");
}

/*
==============
PartyClientTask::Completed
==============
*/
bool PartyClientTask::Completed(PartyClientTask *this)
{
  return this->m_state == STATE_PENDING;
}

/*
==============
PartyClientTask::Failed
==============
*/
bool PartyClientTask::Failed(PartyClientTask *this)
{
  return this->m_state == STATE_CONNECTED;
}

/*
==============
PartyClientTask::Frame
==============
*/
void PartyClientTask::Frame(PartyClientTask *this, PartyData *const party, const int timeMillis)
{
  int Int_Internal_DebugName; 
  int m_startTime; 
  int v8; 
  bool v9; 

  if ( this->m_state == STATE_IDLE )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_party_client_task_timeout, "party_client_task_timeout");
    m_startTime = this->m_startTime;
    v8 = Int_Internal_DebugName;
    v9 = Party_FindMemberByXUID(party, this->m_hostXuid) == -1;
    if ( timeMillis - m_startTime > v8 || v9 )
    {
      ++this->m_errorCount;
      this->m_state = STATE_CONNECTED;
    }
  }
}

/*
==============
PartyClientTask::GetHost
==============
*/
XUID *PartyClientTask::GetHost(PartyClientTask *this, XUID *result)
{
  result->m_id = (unsigned __int64)this->m_hostXuid;
  return result;
}

/*
==============
PartyClientTask::GetId
==============
*/
__int64 PartyClientTask::GetId(PartyClientTask *this)
{
  return (unsigned __int8)this->m_id;
}

/*
==============
PartyClientTask::GetRequiredPlatform
==============
*/
char PartyClientTask::GetRequiredPlatform(PartyClientTask *this)
{
  if ( this->m_id )
  {
    if ( this->m_id == PARTY_CLIENT_TASK_CREATE_SESSION_XB3 )
      return 3;
    if ( this->m_id != PARTY_CLIENT_TASK_UPDATE_SESSION_PS4 )
    {
      if ( this->m_id != PARTY_CLIENT_TASK_UPDATE_SESSION_XB3 )
        return 0;
      return 3;
    }
  }
  return 4;
}

/*
==============
PartyClientTask::HandleCreateSessionPS4
==============
*/
char PartyClientTask::HandleCreateSessionPS4(PartyClientTask *this, PartyData *const party, const void *payload, const int payloadSize)
{
  if ( payloadSize != 48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_task.cpp", 322, ASSERT_TYPE_ASSERT, "(payloadSize == sizeof( SceNpSessionId ))", (const char *)&queryFormat, "payloadSize == sizeof( SceNpSessionId )") )
    __debugbreak();
  PartyHost_SetPS4SessionId(party, (const SceNpSessionId *)payload);
  return 1;
}

/*
==============
PartyClientTask::HandleCreateSessionXbox
==============
*/
char PartyClientTask::HandleCreateSessionXbox(PartyClientTask *this, PartyData *const party, const void *payload, const int payloadSize)
{
  _GUID v8; 

  _RBX = payload;
  if ( payloadSize != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_task.cpp", 331, ASSERT_TYPE_ASSERT, "(payloadSize == sizeof( MPSDID ))", (const char *)&queryFormat, "payloadSize == sizeof( MPSDID )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovdqa xmmword ptr [rsp+48h+var_18.Data1], xmm0
  }
  PartyHost_SetXb3SessionId(party, &v8);
  return 1;
}

/*
==============
PartyClientTask::HandleMessage
==============
*/
void PartyClientTask::HandleMessage(PartyClientTask *this, PartyData *const party, msg_t *msg)
{
  __int64 m_state; 
  __int64 Bits; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  unsigned int v12; 
  MatchRulesReturnCode v14; 
  PartyPrivacySetting v15; 
  __int64 m_id; 
  char v17; 
  unsigned __int64 UniversalId; 
  unsigned __int64 m_lobbyId; 
  unsigned __int8 partyId; 
  unsigned __int64 v21; 
  XUID *HostXuid; 
  unsigned __int64 v23; 
  bool v24; 
  XUID v25; 
  msg_t msga; 
  DLogContext context; 
  msg_t buf; 
  SceNpSessionId buffer[25]; 
  char v30[4096]; 

  m_state = (unsigned int)this->m_state;
  if ( (_DWORD)m_state != 1 )
  {
    Com_PrintWarning(25, "Failed to process client task message - task no longer active (%i)\n", m_state);
    return;
  }
  Bits = MSG_ReadBits(msg, 2u);
  v8 = truncate_cast<int,__int64>(Bits);
  v9 = v8;
  if ( v8 )
  {
    m_id = (unsigned int)this->m_id;
    if ( v8 == 1 )
    {
      Com_PrintWarning(25, "Task %i not supported on client\n", m_id);
      this->m_state = STATE_PENDING;
    }
    else
    {
      Com_PrintWarning(25, "Client task %i failed with result %i\n", m_id, v8);
LABEL_29:
      this->m_state = STATE_CONNECTED;
    }
  }
  else
  {
    v10 = MSG_ReadBits(msg, 0xBu);
    v11 = truncate_cast<int,__int64>(v10);
    v12 = v11;
    if ( v11 < 0 )
    {
      Com_PrintWarning(v9 + 25, "Failed to parse client task response - invalid payload size %i\n", (unsigned int)v11);
      return;
    }
    MSG_ReadData(msg, v11, buffer, 1216);
    if ( msg->overflowed )
    {
      Com_PrintWarning(25, "Failed to parse client task response - message overflowed with %iB size payload\n", v12);
      return;
    }
    Com_PrintWarning(25, "Client task %i completed successfully!\n", (unsigned int)this->m_id);
    switch ( this->m_id )
    {
      case PARTY_CLIENT_TASK_CREATE_SESSION_PS4:
        if ( v12 != 48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_task.cpp", 322, ASSERT_TYPE_ASSERT, "(payloadSize == sizeof( SceNpSessionId ))", (const char *)&queryFormat, "payloadSize == sizeof( SceNpSessionId )") )
          __debugbreak();
        PartyHost_SetPS4SessionId(party, buffer);
        this->m_state = STATE_PENDING;
        break;
      case PARTY_CLIENT_TASK_CREATE_SESSION_XB3:
        if ( v12 != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_task.cpp", 331, ASSERT_TYPE_ASSERT, "(payloadSize == sizeof( MPSDID ))", (const char *)&queryFormat, "payloadSize == sizeof( MPSDID )") )
          __debugbreak();
        __asm
        {
          vmovups xmm0, [rbp+1610h+buffer]
          vmovdqa xmmword ptr [rbp+1610h+buf.overflowed], xmm0
        }
        PartyHost_SetXb3SessionId(party, (const _GUID *)&buf);
        this->m_state = STATE_PENDING;
        break;
      case PARTY_CLIENT_TASK_UPDATE_SESSION_PS4:
      case PARTY_CLIENT_TASK_UPDATE_SESSION_XB3:
        this->m_payloadSize = 0;
        goto LABEL_23;
      case PARTY_CLIENT_TASK_REQUEST_MATCH_RULES:
        MSG_InitReadOnly(&buf, (unsigned __int8 *)buffer, v12);
        MSG_BeginReading(&buf);
        v14 = BG_IngestGameStateInfoMessage(&buf, &this->m_multiPacketCount);
        if ( ((v14 + 3) & 0xFFFFFFFD) == 0 )
          goto LABEL_29;
        if ( v14 == MR_RETCODE_TRUE )
LABEL_23:
          this->m_state = STATE_PENDING;
        break;
      case PARTY_CLIENT_TASK_REQUEST_MAP_NAME:
        MSG_InitReadOnly(&msga, (unsigned __int8 *)buffer, v12);
        MSG_BeginReading(&msga);
        MSG_ReadString(&msga, (char *)&buf, 0x20u);
        Dvar_SetString_Internal(DVARSTR_ui_mapname, (const char *)&buf);
        this->m_state = STATE_PENDING;
        break;
      case PARTY_CLIENT_TASK_REQUEST_PARTY_PRIVACY:
        MSG_InitReadOnly(&msga, (unsigned __int8 *)buffer, v12);
        MSG_BeginReading(&msga);
        v15 = MSG_ReadByte(&msga);
        Party_SetPrivacySetting(party, v15);
        this->m_state = STATE_PENDING;
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_task.cpp", 288, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid client task id %i", this->m_id) )
          __debugbreak();
        break;
    }
  }
  v17 = this->m_id;
  v25.m_id = this->m_hostXuid.m_id;
  UniversalId = XUID::GetUniversalId(&v25);
  m_lobbyId = party->m_lobbyId;
  partyId = party->partyId;
  v21 = UniversalId;
  HostXuid = Party_GetHostXuid((XUID *)&buf, party);
  v23 = XUID::GetUniversalId(HostXuid);
  if ( DLog_IsActive() && DLog_CreateContext(&context, v23, v30, 4096) && DLog_IsActive() )
  {
    v24 = DLog_BeginEvent(&context, "dlog_event_clienttask_host_receive");
    context.autoEndEvent = 1;
    if ( v24 && DLog_UInt8(&context, "party_type", partyId) && DLog_UInt64(&context, "lobby_id", m_lobbyId) && DLog_UInt64(&context, "client_xuid", v21) && DLog_Int8(&context, "task_type", v17) && DLog_UInt8(&context, "result", v9) )
      DLog_RecordContext(&context);
  }
}

/*
==============
PartyClientTask::HandleRequestMapNames
==============
*/
char PartyClientTask::HandleRequestMapNames(PartyClientTask *this, PartyData *const party, void *payload, const int payloadSize)
{
  msg_t buf; 
  char string[32]; 

  MSG_InitReadOnly(&buf, (unsigned __int8 *)payload, payloadSize);
  MSG_BeginReading(&buf);
  MSG_ReadString(&buf, string, 0x20u);
  Dvar_SetString_Internal(DVARSTR_ui_mapname, string);
  return 1;
}

/*
==============
PartyClientTask::HandleRequestMatchRules
==============
*/
bool PartyClientTask::HandleRequestMatchRules(PartyClientTask *this, PartyData *const party, void *payload, const int payloadSize)
{
  MatchRulesReturnCode v5; 
  msg_t buf; 

  MSG_InitReadOnly(&buf, (unsigned __int8 *)payload, payloadSize);
  MSG_BeginReading(&buf);
  v5 = BG_IngestGameStateInfoMessage(&buf, &this->m_multiPacketCount);
  if ( ((v5 + 3) & 0xFFFFFFFD) != 0 )
  {
    if ( v5 )
      return v5 == MR_RETCODE_TRUE;
  }
  else
  {
    this->m_state = STATE_CONNECTED;
  }
  return 0;
}

/*
==============
PartyClientTask::HandleRequestPartyPrivacy
==============
*/
char PartyClientTask::HandleRequestPartyPrivacy(PartyClientTask *this, PartyData *const party, void *payload, const int payloadSize)
{
  PartyPrivacySetting v5; 
  msg_t buf; 

  MSG_InitReadOnly(&buf, (unsigned __int8 *)payload, payloadSize);
  MSG_BeginReading(&buf);
  v5 = MSG_ReadByte(&buf);
  Party_SetPrivacySetting(party, v5);
  return 1;
}

/*
==============
PartyClientTask::HandleUpdateSession
==============
*/
char PartyClientTask::HandleUpdateSession(PartyClientTask *this, PartyData *const party, void *payload, const int payloadSize)
{
  this->m_payloadSize = 0;
  return 1;
}

/*
==============
PartyClientTask::Idle
==============
*/
bool PartyClientTask::Idle(PartyClientTask *this)
{
  PartyClientTask::State m_state; 

  m_state = this->m_state;
  return m_state == STATE_NONE || m_state == STATE_CONNECTED;
}

/*
==============
PartyClientTask::Init
==============
*/
void PartyClientTask::Init(PartyClientTask *this, PartyClientTaskId taskId)
{
  this->m_id = taskId;
  this->m_errorCount = 0;
}

/*
==============
PartyClientTask::IsRequired
==============
*/
bool PartyClientTask::IsRequired(PartyClientTask *this, PartyData *const party)
{
  if ( Live_IsInSystemlinkLobby() )
    return 0;
  if ( this->m_id == PARTY_CLIENT_TASK_CREATE_SESSION_PS4 )
    return 1;
  if ( this->m_id != PARTY_CLIENT_TASK_UPDATE_SESSION_PS4 )
    return 0;
  return this->m_payloadSize > 0;
}

/*
==============
PartyClientTask::Reset
==============
*/
void PartyClientTask::Reset(PartyClientTask *this)
{
  this->m_state = STATE_NONE;
}

/*
==============
PartyClientTask::SetPayload
==============
*/
void PartyClientTask::SetPayload(PartyClientTask *this, const void *payload, const int payloadSize)
{
  _RSI = payload;
  _RDI = this;
  if ( (unsigned int)payloadSize >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_task.cpp", 216, ASSERT_TYPE_ASSERT, "(payloadSize < sizeof( m_payload ))", (const char *)&queryFormat, "payloadSize < sizeof( m_payload )") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi]
    vmovsd  qword ptr [rdi+1Ch], xmm0
  }
  _RDI->m_payloadSize = payloadSize;
}

/*
==============
PartyClientTask::Start
==============
*/
void PartyClientTask::Start(PartyClientTask *this, PartyData *const party, const XUID hostXuid)
{
  unsigned __int8 *m_ptr; 
  PartyClientTask::State m_state; 
  int MemberByXUID; 
  const char *v8; 
  PartyClientTaskId m_id; 
  int m_payloadSize; 
  NetConnection *MemberConnection; 
  char v12; 
  unsigned __int64 UniversalId; 
  unsigned __int64 m_lobbyId; 
  unsigned __int8 partyId; 
  XUID *v16; 
  unsigned __int64 v17; 
  bool v18; 
  XUID result; 
  Mem_LargeLocal v20; 
  msg_t buf; 
  DLogContext context; 
  char buffer[4096]; 
  XUID xuid; 

  xuid.m_id = hostXuid.m_id;
  Mem_LargeLocal::Mem_LargeLocal(&v20, 0x9AAui64, "min_msg_buf msgBuffer");
  m_ptr = (unsigned __int8 *)v20.m_ptr;
  m_state = this->m_state;
  if ( (m_state && m_state != STATE_CONNECTED || this->m_errorCount >= Dvar_GetInt_Internal_DebugName(DVARINT_party_client_task_max_retries, "party_client_task_max_retries")) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_task.cpp", 46, ASSERT_TYPE_ASSERT, "(CanStart())", (const char *)&queryFormat, "CanStart()") )
    __debugbreak();
  XUID::operator=(&this->m_hostXuid, &xuid);
  this->m_state = STATE_IDLE;
  this->m_startTime = Sys_Milliseconds();
  this->m_multiPacketCount = 0;
  MemberByXUID = Party_FindMemberByXUID(party, xuid);
  if ( MemberByXUID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_task.cpp", 54, ASSERT_TYPE_ASSERT, "(hostIndex != -1)", (const char *)&queryFormat, "hostIndex != INVALID_CLIENTNUM") )
    __debugbreak();
  if ( Live_IsInSystemlinkLobby() || this->m_id && (this->m_id != PARTY_CLIENT_TASK_UPDATE_SESSION_PS4 || this->m_payloadSize <= 0) )
  {
    this->m_state = STATE_PENDING;
  }
  else
  {
    MSG_Init(&buf, m_ptr, 2474);
    v8 = j_va("%ipa_clienttask", (unsigned int)party->partyId);
    MSG_WriteString(&buf, v8);
    m_id = this->m_id;
    if ( this->m_id < PARTY_CLIENT_TASK_CREATE_SESSION_PS4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum PartyClientTaskId>(enum PartyClientTaskId)", "unsigned", (unsigned __int8)m_id, "signed", m_id) )
      __debugbreak();
    MSG_WriteByte(&buf, (unsigned __int8)m_id);
    m_payloadSize = this->m_payloadSize;
    if ( m_payloadSize <= 0 )
    {
      MSG_WriteLong(&buf, 0);
    }
    else
    {
      MSG_WriteLong(&buf, m_payloadSize);
      MSG_WriteData(&buf, this->m_payload, this->m_payloadSize);
    }
    MemberConnection = (NetConnection *)Party_GetMemberConnection(party, MemberByXUID);
    NetConnection::SendReliable(MemberConnection, &buf);
    v12 = this->m_id;
    UniversalId = XUID::GetUniversalId(&xuid);
    m_lobbyId = party->m_lobbyId;
    partyId = party->partyId;
    v16 = Party_GetHostXuid(&result, party);
    v17 = XUID::GetUniversalId(v16);
    if ( DLog_IsActive() && DLog_CreateContext(&context, v17, buffer, 4096) && DLog_IsActive() )
    {
      v18 = DLog_BeginEvent(&context, "dlog_event_clienttask_host_send");
      context.autoEndEvent = 1;
      if ( v18 && DLog_UInt8(&context, "party_type", partyId) && DLog_UInt64(&context, "lobby_id", m_lobbyId) && DLog_UInt64(&context, "client_xuid", UniversalId) && DLog_Int8(&context, "task_type", v12) )
        DLog_RecordContext(&context);
    }
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v20);
}

/*
==============
PartyClientTask::Stop
==============
*/
void PartyClientTask::Stop(PartyClientTask *this)
{
  this->m_state = STATE_NONE;
  this->m_errorCount = 0;
}

