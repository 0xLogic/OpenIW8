/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_INVITE2_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_INVITE2_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, OnlineErrorCategory_t category, unsigned __int64 errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4OnlineErrorCategory_t@@_KPEBD@Z(this, category, errorCode, contextString);
}

/*
==============
OnlineError_ReportError_f
==============
*/

void __fastcall OnlineError_ReportError_f()
{
  ?OnlineError_ReportError_f@@YAXXZ();
}

/*
==============
Online_ErrorReporting::OnUnregistered
==============
*/

void __fastcall Online_ErrorReporting::OnUnregistered(Online_ErrorReporting *this)
{
  ?OnUnregistered@Online_ErrorReporting@@UEAAXXZ(this);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_DCACHE_IO_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_DCACHE_IO_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ClearErrorBits
==============
*/

void __fastcall Online_ErrorReporting::ClearErrorBits(Online_ErrorReporting *this)
{
  ?ClearErrorBits@Online_ErrorReporting@@QEAAXXZ(this);
}

/*
==============
Online_ErrorReporting::OutputCurrentState
==============
*/

void __fastcall Online_ErrorReporting::OutputCurrentState(Online_ErrorReporting *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_ErrorReporting@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_CROSSLAUNCH_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_CROSSLAUNCH_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::SendErrorContextData
==============
*/

void __fastcall Online_ErrorReporting::SendErrorContextData(Online_ErrorReporting *this, OnlineErrorCategory_t category, unsigned __int64 errorCode, const char *errorContextString)
{
  ?SendErrorContextData@Online_ErrorReporting@@QEAAXW4OnlineErrorCategory_t@@_KPEBD@Z(this, category, errorCode, errorContextString);
}

/*
==============
Online_ErrorReporting::MakeErrorBitsCopy
==============
*/

void __fastcall Online_ErrorReporting::MakeErrorBitsCopy(Online_ErrorReporting *this, unsigned __int64 *outErrorBits)
{
  ?MakeErrorBitsCopy@Online_ErrorReporting@@QEAAXPEA_K@Z(this, outErrorBits);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_INVITE_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_INVITE_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
OnlineError_DumpAll_f
==============
*/

void __fastcall OnlineError_DumpAll_f()
{
  ?OnlineError_DumpAll_f@@YAXXZ();
}

/*
==============
Online_ErrorReporting::OnSignedIn
==============
*/

void __fastcall Online_ErrorReporting::OnSignedIn(Online_ErrorReporting *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_ErrorReporting@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_MATCHMAKING_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_MATCHMAKING_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_NON_REPORTED_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_NON_REPORTED_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_COMMERCE_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_COMMERCE_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_PATCHER_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_PATCHER_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_PARTY_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_PARTY_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::Online_ErrorReporting
==============
*/

void __fastcall Online_ErrorReporting::Online_ErrorReporting(Online_ErrorReporting *this)
{
  ??0Online_ErrorReporting@@AEAA@XZ(this);
}

/*
==============
Online_ErrorReporting::ErrorCodeToIndex
==============
*/

int __fastcall Online_ErrorReporting::ErrorCodeToIndex(Online_ErrorReporting *this, unsigned __int64 errorCode)
{
  return ?ErrorCodeToIndex@Online_ErrorReporting@@QEAAH_K@Z(this, errorCode);
}

/*
==============
Online_ErrorReporting::Uninit
==============
*/

void __fastcall Online_ErrorReporting::Uninit(Online_ErrorReporting *this)
{
  ?Uninit@Online_ErrorReporting@@UEAAXXZ(this);
}

/*
==============
Online_ErrorReporting::RegisterLuaFunctions
==============
*/

void __fastcall Online_ErrorReporting::RegisterLuaFunctions(Online_ErrorReporting *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_ErrorReporting@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_TOURNAMENT_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_TOURNAMENT_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::OnPublisherVariablesFetched
==============
*/

void __fastcall Online_ErrorReporting::OnPublisherVariablesFetched(Online_ErrorReporting *this)
{
  ?OnPublisherVariablesFetched@Online_ErrorReporting@@QEAAXXZ(this);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_DEMONWARE_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_DEMONWARE_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_PLATFORM_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_PLATFORM_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_PARTY_JOIN_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_PARTY_JOIN_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_DCACHE_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_DCACHE_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_SESSIONS2_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_SESSIONS2_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_CCS_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_CCS_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ControllerFrame
==============
*/

void __fastcall Online_ErrorReporting::ControllerFrame(Online_ErrorReporting *this, const int controllerIndex)
{
  ?ControllerFrame@Online_ErrorReporting@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_GAME_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_GAME_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::OnRegistered
==============
*/

void __fastcall Online_ErrorReporting::OnRegistered(Online_ErrorReporting *this)
{
  ?OnRegistered@Online_ErrorReporting@@UEAAXXZ(this);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_PARTY_JOIN2_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_PARTY_JOIN2_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
OnlineError_DumpCurrent_f
==============
*/

void __fastcall OnlineError_DumpCurrent_f()
{
  ?OnlineError_DumpCurrent_f@@YAXXZ();
}

/*
==============
Online_ErrorReporting::GetInstance
==============
*/

Online_ErrorReporting *__fastcall Online_ErrorReporting::GetInstance()
{
  return ?GetInstance@Online_ErrorReporting@@SAAEAV1@XZ();
}

/*
==============
Online_ErrorReporting::DoErrorsExist
==============
*/

bool __fastcall Online_ErrorReporting::DoErrorsExist(Online_ErrorReporting *this)
{
  return ?DoErrorsExist@Online_ErrorReporting@@QEAA_NXZ(this);
}

/*
==============
Online_ErrorReporting::OnDisconnect
==============
*/

void __fastcall Online_ErrorReporting::OnDisconnect(Online_ErrorReporting *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_ErrorReporting@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_CONTENT_STORAGE_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_CONTENT_STORAGE_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::Init
==============
*/

bool __fastcall Online_ErrorReporting::Init(Online_ErrorReporting *this)
{
  return ?Init@Online_ErrorReporting@@UEAA_NXZ(this);
}

/*
==============
OnlineError_SpamErrors_f
==============
*/

void __fastcall OnlineError_SpamErrors_f()
{
  ?OnlineError_SpamErrors_f@@YAXXZ();
}

/*
==============
Online_ErrorReporting::ReportErrorInternal
==============
*/

void __fastcall Online_ErrorReporting::ReportErrorInternal(Online_ErrorReporting *this, OnlineErrorCategory_t category, unsigned __int64 errorCode, const char *contextString)
{
  ?ReportErrorInternal@Online_ErrorReporting@@AEAAXW4OnlineErrorCategory_t@@_KPEBD@Z(this, category, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::OnSignedOut
==============
*/

void __fastcall Online_ErrorReporting::OnSignedOut(Online_ErrorReporting *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_ErrorReporting@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_ANALYTICS_STREAMER_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_ANALYTICS_STREAMER_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_DEFAULT_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_DEFAULT_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
OnlineError_SetSystemStartupError
==============
*/

void __fastcall OnlineError_SetSystemStartupError(Online_Error_CAT_SYSTEM_t errorCode, const char *contextString)
{
  ?OnlineError_SetSystemStartupError@@YAXW4Online_Error_CAT_SYSTEM_t@@PEBD@Z(errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_SESSIONS_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_SESSIONS_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::Frame
==============
*/

void __fastcall Online_ErrorReporting::Frame(Online_ErrorReporting *this)
{
  ?Frame@Online_ErrorReporting@@UEAAXXZ(this);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_GROUPS_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_GROUPS_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::DumpCurrentErrors
==============
*/

void __fastcall Online_ErrorReporting::DumpCurrentErrors(Online_ErrorReporting *this)
{
  ?DumpCurrentErrors@Online_ErrorReporting@@QEAAXXZ(this);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_ANTICHEAT_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_ANTICHEAT_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
OnlineError_ReportSystemStartupError
==============
*/

void OnlineError_ReportSystemStartupError(void)
{
  ?OnlineError_ReportSystemStartupError@@YAXXZ();
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_SYSTEM_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_SYSTEM_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
OnlineError_SendData_f
==============
*/

void __fastcall OnlineError_SendData_f()
{
  ?OnlineError_SendData_f@@YAXXZ();
}

/*
==============
Online_ErrorReporting::GetInstancePtr
==============
*/

Online_ErrorReporting *__fastcall Online_ErrorReporting::GetInstancePtr()
{
  return ?GetInstancePtr@Online_ErrorReporting@@SAPEAV1@XZ();
}

/*
==============
Online_ErrorReporting::ResetErrorCodesSendCounter
==============
*/

void __fastcall Online_ErrorReporting::ResetErrorCodesSendCounter(Online_ErrorReporting *this)
{
  ?ResetErrorCodesSendCounter@Online_ErrorReporting@@AEAAXXZ(this);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, Online_Error_CAT_CCS_IOSTREAMS_t errorCode, const char *contextString)
{
  ?ReportError@Online_ErrorReporting@@QEAAXW4Online_Error_CAT_CCS_IOSTREAMS_t@@PEBD@Z(this, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::SendErrorData
==============
*/

bool __fastcall Online_ErrorReporting::SendErrorData(Online_ErrorReporting *this, const char *tag, bool forceSend)
{
  return ?SendErrorData@Online_ErrorReporting@@QEAA_NPEBD_N@Z(this, tag, forceSend);
}

/*
==============
Online_ErrorReporting::DumpAllErrors
==============
*/

void __fastcall Online_ErrorReporting::DumpAllErrors(Online_ErrorReporting *this)
{
  ?DumpAllErrors@Online_ErrorReporting@@QEAAXXZ(this);
}

/*
==============
StaticOnPublisherVariablesFetched
==============
*/
void StaticOnPublisherVariablesFetched()
{
  const dvar_t *v0; 
  int v1; 
  int integer; 
  const dvar_t *v3; 
  int v4; 
  const dvar_t *v5; 
  int v6; 
  const dvar_t *v7; 

  v0 = DVARINT_ccs_purgeCacheRequestId;
  v1 = 0;
  if ( DVARINT_ccs_purgeCacheRequestId )
  {
    Dvar_CheckFrontendServerThread(DVARINT_ccs_purgeCacheRequestId);
    integer = v0->current.integer;
  }
  else
  {
    integer = 0;
  }
  DCache_TOC_RemotePurgeCacheRequest(integer);
  v3 = DVARINT_ccs_onCorruptionConfig;
  if ( DVARINT_ccs_onCorruptionConfig )
  {
    Dvar_CheckFrontendServerThread(DVARINT_ccs_onCorruptionConfig);
    v4 = v3->current.integer;
  }
  else
  {
    v4 = 0;
  }
  DCache_TOC_OnCorruptionConfig(v4);
  v5 = DVARINT_dcache_checksumConfig;
  if ( DVARINT_dcache_checksumConfig )
  {
    Dvar_CheckFrontendServerThread(DVARINT_dcache_checksumConfig);
    v6 = v5->current.integer;
  }
  else
  {
    v6 = 0;
  }
  DCache_TOC_OnChecksumConfig(v6);
  v7 = DVARINT_dcache_genericConfig;
  if ( DVARINT_dcache_genericConfig )
  {
    Dvar_CheckFrontendServerThread(DVARINT_dcache_genericConfig);
    v1 = v7->current.integer;
  }
  DCache_TOC_OnGenericConfig(v1);
}

/*
==============
Online_ErrorReporting::OnRegistered
==============
*/
void Online_ErrorReporting::OnRegistered(Online_ErrorReporting *this)
{
  ;
}

/*
==============
Online_ErrorReporting::OnUnregistered
==============
*/
void Online_ErrorReporting::OnUnregistered(Online_ErrorReporting *this)
{
  ;
}

/*
==============
Online_ErrorReporting::Init
==============
*/
char Online_ErrorReporting::Init(Online_ErrorReporting *this)
{
  int integer; 
  PublisherVariableManager *Instance; 

  Cmd_AddCommandInternal("onlineError_Report", OnlineError_ReportError_f, &OnlineError_ReportError_f_VAR);
  Cmd_AddCommandInternal("onlineError_DumpAll", OnlineError_DumpAll_f, &OnlineError_DumpAll_f_VAR);
  Cmd_AddCommandInternal("onlineError_DumpCurrent", OnlineError_DumpCurrent_f, &OnlineError_DumpCurrent_f_VAR);
  Cmd_AddCommandInternal("onlineError_SendData", OnlineError_SendData_f, &OnlineError_SendData_f_VAR);
  Cmd_AddCommandInternal("onlineError_SpamErrors", OnlineError_SpamErrors_f, &OnlineError_SpamErrors_f_VAR);
  this->m_initialized = 1;
  integer = 240000;
  if ( oer_bb_errorcode_send_counter_reset_time )
    integer = oer_bb_errorcode_send_counter_reset_time->current.integer;
  this->m_errorCodeResetTime = integer + Sys_Milliseconds();
  memset_0(this->m_errorCodesSendCounter, 0, sizeof(this->m_errorCodesSendCounter));
  this->m_lastSendErrorDataRequestId = 0;
  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::AddRetrievedCallback(Instance, StaticOnPublisherVariablesFetched_0);
  return 1;
}

/*
==============
Online_ErrorReporting::Uninit
==============
*/
void Online_ErrorReporting::Uninit(Online_ErrorReporting *this)
{
  Cmd_RemoveCommand("onlineError_Report");
  Cmd_RemoveCommand("onlineError_DumpAll");
  Cmd_RemoveCommand("onlineError_DumpCurrent");
  Cmd_RemoveCommand("onlineError_SendData");
}

/*
==============
Online_ErrorReporting::Frame
==============
*/
void Online_ErrorReporting::Frame(Online_ErrorReporting *this)
{
  int integer; 

  if ( this->m_errorCodeResetTime < Sys_Milliseconds() )
  {
    integer = 240000;
    if ( oer_bb_errorcode_send_counter_reset_time )
      integer = oer_bb_errorcode_send_counter_reset_time->current.integer;
    this->m_errorCodeResetTime = integer + Sys_Milliseconds();
    memset_0(this->m_errorCodesSendCounter, 0, sizeof(this->m_errorCodesSendCounter));
  }
}

/*
==============
Online_ErrorReporting::ControllerFrame
==============
*/
void Online_ErrorReporting::ControllerFrame(Online_ErrorReporting *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_ErrorReporting::OnSignedIn
==============
*/
void Online_ErrorReporting::OnSignedIn(Online_ErrorReporting *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_ErrorReporting::OnSignedOut
==============
*/
void Online_ErrorReporting::OnSignedOut(Online_ErrorReporting *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_ErrorReporting::OnDisconnect
==============
*/
void Online_ErrorReporting::OnDisconnect(Online_ErrorReporting *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_ErrorReporting::RegisterLuaFunctions
==============
*/
void Online_ErrorReporting::RegisterLuaFunctions(Online_ErrorReporting *this, lua_State *luaVM)
{
  ;
}

/*
==============
Online_ErrorReporting::OutputCurrentState
==============
*/
void Online_ErrorReporting::OutputCurrentState(Online_ErrorReporting *this, const int controllerIndex)
{
  Com_Printf(25, "ONLINE ERROR REPORTING SYSTEM DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "ONLINE ERROR REPORTING SYSTEM DUMP END\n");
}

/*
==============
Online_ErrorReporting::Online_ErrorReporting
==============
*/
void Online_ErrorReporting::Online_ErrorReporting(Online_ErrorReporting *this)
{
  unsigned int i; 
  __int64 v3; 

  this->m_nextSystem = NULL;
  this->m_initialized = 0;
  this->__vftable = (Online_ErrorReporting_vtbl *)&Online_ErrorReporting::`vftable';
  this->m_errorCodeResetTime = 0;
  this->m_errorBitsMemLock.readCount = 0;
  this->m_errorBitsMemLock.writeCount = 0;
  this->m_errorBitsMemLock.writeThreadId = 0;
  this->m_errorCodesSendCounterMemLock.readCount = 0;
  this->m_errorCodesSendCounterMemLock.writeCount = 0;
  this->m_errorCodesSendCounterMemLock.writeThreadId = 0;
  Sys_LockWrite(&this->m_errorBitsMemLock);
  for ( i = 0; i < 0x1A; ++i )
  {
    v3 = (int)i;
    this->m_errorBits[v3] = 0i64;
  }
  Sys_UnlockWrite(&this->m_errorBitsMemLock);
}

/*
==============
Online_ErrorReporting::ClearErrorBits
==============
*/
void Online_ErrorReporting::ClearErrorBits(Online_ErrorReporting *this)
{
  unsigned int i; 
  __int64 v3; 

  Sys_LockWrite(&this->m_errorBitsMemLock);
  for ( i = 0; i < 0x1A; ++i )
  {
    v3 = (int)i;
    this->m_errorBits[v3] = 0i64;
  }
  Sys_UnlockWrite(&this->m_errorBitsMemLock);
}

/*
==============
Online_ErrorReporting::DoErrorsExist
==============
*/
__int64 Online_ErrorReporting::DoErrorsExist(Online_ErrorReporting *this)
{
  unsigned __int8 v2; 
  unsigned int v3; 
  volatile unsigned __int64 *m_errorBits; 

  v2 = 0;
  Sys_LockRead(&this->m_errorBitsMemLock);
  v3 = 0;
  m_errorBits = this->m_errorBits;
  while ( !*m_errorBits )
  {
    ++v3;
    ++m_errorBits;
    if ( v3 >= 0x1A )
      goto LABEL_6;
  }
  v2 = 1;
LABEL_6:
  Sys_UnlockRead(&this->m_errorBitsMemLock);
  return v2;
}

/*
==============
Online_ErrorReporting::DumpAllErrors
==============
*/
void Online_ErrorReporting::DumpAllErrors(Online_ErrorReporting *this)
{
  Com_Printf(25, "oer: All Error Dump:\n");
  OER_OutputAllErrorCodes();
}

/*
==============
Online_ErrorReporting::DumpCurrentErrors
==============
*/
void Online_ErrorReporting::DumpCurrentErrors(Online_ErrorReporting *this)
{
  Com_Printf(25, "oer: Current Error Dump:\n");
  OER_OutputCurrentErrorCodes(this->m_errorBits, CAT_COUNT);
}

/*
==============
Online_ErrorReporting::ErrorCodeToIndex
==============
*/
__int64 Online_ErrorReporting::ErrorCodeToIndex(Online_ErrorReporting *this, unsigned __int64 errorCode)
{
  int v2; 
  int v4; 
  int v5; 

  v2 = 0;
  if ( (errorCode & 1) == 0 )
  {
    do
    {
      if ( v2 >= 65 )
        break;
      ++v2;
    }
    while ( ((errorCode >> v2) & 1) == 0 );
    if ( (unsigned int)v2 >= 0x40 )
    {
      v5 = 64;
      v4 = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_errorreporting.cpp", 412, ASSERT_TYPE_ASSERT, "(unsigned)( errorValue ) < (unsigned)( (sizeof( OnlineErrorCodeBase_t ) * 8) )", "errorValue doesn't index OER_MAX_ERRORS_PER_CATEGORY\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
  }
  return (unsigned int)v2;
}

/*
==============
Online_ErrorReporting::GetInstance
==============
*/
Online_ErrorReporting *Online_ErrorReporting::GetInstance()
{
  return &Online_ErrorReporting::s_instance;
}

/*
==============
Online_ErrorReporting::GetInstancePtr
==============
*/
Online_ErrorReporting *Online_ErrorReporting::GetInstancePtr()
{
  return &Online_ErrorReporting::s_instance;
}

/*
==============
Online_ErrorReporting::MakeErrorBitsCopy
==============
*/
void Online_ErrorReporting::MakeErrorBitsCopy(Online_ErrorReporting *this, unsigned __int64 *outErrorBits)
{
  FastCriticalSection *p_m_errorBitsMemLock; 
  unsigned int v5; 
  signed __int64 v6; 

  p_m_errorBitsMemLock = &this->m_errorBitsMemLock;
  Sys_LockRead(&this->m_errorBitsMemLock);
  v5 = 0;
  v6 = (char *)this - (char *)outErrorBits;
  do
  {
    ++v5;
    *outErrorBits = *(unsigned __int64 *)((char *)outErrorBits + v6 + 64);
    ++outErrorBits;
  }
  while ( v5 < 0x1A );
  Sys_UnlockRead(p_m_errorBitsMemLock);
}

/*
==============
Online_ErrorReporting::OnPublisherVariablesFetched
==============
*/
void Online_ErrorReporting::OnPublisherVariablesFetched(Online_ErrorReporting *this)
{
  const dvar_t *v1; 
  __int64 m_lastSendErrorDataRequestId; 
  const char *v4; 

  v1 = DVARINT_oer_sendErrorDataRequestId;
  if ( DVARINT_oer_sendErrorDataRequestId )
  {
    Dvar_CheckFrontendServerThread(DVARINT_oer_sendErrorDataRequestId);
    LODWORD(v1) = v1->current.integer;
  }
  m_lastSendErrorDataRequestId = (unsigned int)this->m_lastSendErrorDataRequestId;
  if ( (_DWORD)v1 != (_DWORD)m_lastSendErrorDataRequestId )
  {
    v4 = j_va("OnPubVar[%d->%d]", m_lastSendErrorDataRequestId, (unsigned int)v1);
    Online_ErrorReporting::SendErrorData(this, v4, 0);
    this->m_lastSendErrorDataRequestId = (int)v1;
  }
}

/*
==============
OnlineError_DumpAll_f
==============
*/
void OnlineError_DumpAll_f(void)
{
  Com_Printf(25, "oer: All Error Dump:\n");
  OER_OutputAllErrorCodes();
}

/*
==============
OnlineError_DumpCurrent_f
==============
*/
void OnlineError_DumpCurrent_f(void)
{
  Com_Printf(25, "oer: Current Error Dump:\n");
  OER_OutputCurrentErrorCodes(Online_ErrorReporting::s_instance.m_errorBits, CAT_COUNT);
}

/*
==============
OnlineError_ReportError_f
==============
*/
void OnlineError_ReportError_f(void)
{
  OnlineErrorCategory_t v0; 
  unsigned int v1; 
  __int64 v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 

  if ( Cmd_Argc() < 2 )
    Com_Printf(25, "online error reporting: Cmd usage 'oer_ReportError <category> <error bit index>' \n");
  v0 = CAT_DCACHE_IO;
  v1 = Cmd_ArgInt(1);
  v2 = (unsigned int)Cmd_ArgInt(2);
  Com_Printf(25, "online error reporting: Reporting bit %d for category %d. \n", v2, v1);
  v3 = v1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          v0 = CAT_PATCHER;
        else
          v0 = CAT_DEFAULT;
      }
      else
      {
        v0 = CAT_CCS;
      }
    }
  }
  else
  {
    v0 = CAT_DCACHE;
  }
  Online_ErrorReporting::ReportErrorInternal(&Online_ErrorReporting::s_instance, v0, 1i64 << v2, NULL);
}

/*
==============
OnlineError_ReportSystemStartupError
==============
*/
void OnlineError_ReportSystemStartupError(void)
{
  unsigned __int64 reportErrorCode; 
  unsigned int reportErrorCat; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_errorreporting.cpp", 604, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Online_ErrorReporting::s_instance.m_initialized && BB_IsInitializedAndActive() )
  {
    if ( !s_onlineError_startupErrorPosted )
    {
      reportErrorCode = g_launchData.reportErrorCode;
      s_onlineError_startupErrorPosted = 1;
      if ( g_launchData.reportErrorCode )
      {
        reportErrorCat = g_launchData.reportErrorCat;
        Com_Printf(16, "OnlineError: Reporting startup error %zu::%zu with text '%s'\n", g_launchData.reportErrorCat, g_launchData.reportErrorCode, g_launchData.reportErrorText);
        Online_ErrorReporting::ReportErrorInternal(&Online_ErrorReporting::s_instance, (OnlineErrorCategory_t)reportErrorCat, reportErrorCode, g_launchData.reportErrorText);
      }
      g_launchData.reportErrorCat = 0;
      g_launchData.reportErrorCode = 0i64;
      memset_0(g_launchData.reportErrorText, 0, sizeof(g_launchData.reportErrorText));
    }
  }
  else if ( s_onlineError_startupErrorPosted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_errorreporting.cpp", 611, ASSERT_TYPE_ASSERT, "(!s_onlineError_startupErrorPosted)", "%s\n\tSystem is not initialized but we've already reported?", "!s_onlineError_startupErrorPosted") )
  {
    __debugbreak();
  }
}

/*
==============
OnlineError_SendData_f
==============
*/
void OnlineError_SendData_f(void)
{
  Online_ErrorReporting::SendErrorData(&Online_ErrorReporting::s_instance, "onlineError_SendData", 1);
}

/*
==============
OnlineError_SetSystemStartupError
==============
*/
void OnlineError_SetSystemStartupError(unsigned __int64 errorCode, const char *contextString)
{
  if ( !errorCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_errorreporting.cpp", 569, ASSERT_TYPE_ASSERT, "(static_cast<uint64_t>( code ) != 0)", "%s\n\tWe use 0 as a 'no error' sentinel value, error codes should not be 0", "static_cast<uint64_t>( code ) != 0") )
    __debugbreak();
  if ( ((unsigned __int8)&s_onlineError_startupErrorLogged & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_onlineError_startupErrorLogged) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_onlineError_startupErrorLogged, 1, 0) )
  {
    Com_PrintError(16, "OnlineError: Startup error already exists (%u, %zu), can't override with (%zu, %zu)\n", g_launchData.reportErrorCat, g_launchData.reportErrorCode, 0x11ui64, errorCode);
  }
  else if ( strchr_0(contextString, 10) )
  {
    Com_PrintError(16, "OnlineError: Startup error text cannot have an end of line \\n character\n");
  }
  else
  {
    g_launchData.reportErrorCat = 17;
    g_launchData.reportErrorCode = errorCode;
    Core_strcpy(g_launchData.reportErrorText, 0x100ui64, contextString);
  }
}

/*
==============
OnlineError_SpamErrors_f
==============
*/
void OnlineError_SpamErrors_f(void)
{
  OnlineErrorCategory_t i; 
  unsigned __int64 j; 
  const char *v2; 

  for ( i = CAT_DEFAULT; (unsigned __int64)i < CAT_COUNT; ++i )
  {
    for ( j = 0i64; j < 0xA; ++j )
    {
      v2 = j_va("SpamErrors:%llu_%llu", i, j);
      Online_ErrorReporting::ReportErrorInternal(&Online_ErrorReporting::s_instance, i, 1i64 << j, v2);
    }
  }
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/

void __fastcall Online_ErrorReporting::ReportError(Online_ErrorReporting *this, OnlineErrorCategory_t category, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, category, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_ANALYTICS_STREAMER, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_ANTICHEAT, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_CCS_IOSTREAMS, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_CCS, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_COMMERCE, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_CONTENT_STORAGE, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_CROSSLAUNCH, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_DCACHE_IO, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_DCACHE, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_DEFAULT, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_DEMONWARE, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_GAME, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_GROUPS, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_INVITE2, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_INVITE, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_MATCHMAKING, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_NON_REPORTED, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_PARTY_JOIN2, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_PARTY_JOIN, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_PARTY, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_PATCHER, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_PLATFORM, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_SESSIONS2, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_SESSIONS, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_SYSTEM, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportError
==============
*/
void Online_ErrorReporting::ReportError(Online_ErrorReporting *this, unsigned __int64 errorCode, const char *contextString)
{
  Online_ErrorReporting::ReportErrorInternal(this, CAT_TOURNAMENT, errorCode, contextString);
}

/*
==============
Online_ErrorReporting::ReportErrorInternal
==============
*/
void Online_ErrorReporting::ReportErrorInternal(Online_ErrorReporting *this, OnlineErrorCategory_t category, unsigned __int64 errorCode, const char *contextString)
{
  errorParm_t Int_Internal_DebugName; 
  int v8; 
  OnlineTimeSeriesLog *v9; 
  const char *v10; 
  unsigned __int8 *v11; 
  int integer; 
  const char *v13; 
  const dvar_t *v14; 
  __int64 integer64; 
  const dvar_t *v16; 
  __int64 v17; 
  const char *v18; 
  const dvar_t *v19; 
  __int64 v20; 
  const dvar_t *v21; 
  __int64 v22; 
  const char *v23; 
  char *fmt; 
  char *fmta; 
  __int64 v26; 
  int v27; 
  char dest[256]; 
  char msg[1024]; 

  Sys_LockWrite(&this->m_errorBitsMemLock);
  this->m_errorBits[category] |= errorCode;
  Sys_UnlockWrite(&this->m_errorBitsMemLock);
  Int_Internal_DebugName = ERR_FATAL;
  v8 = 0;
  if ( (errorCode & 1) == 0 )
  {
    do
    {
      if ( v8 >= 65 )
        break;
      ++v8;
    }
    while ( ((errorCode >> v8) & 1) == 0 );
    if ( (unsigned int)v8 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_errorreporting.cpp", 412, ASSERT_TYPE_ASSERT, "(unsigned)( errorValue ) < (unsigned)( (sizeof( OnlineErrorCodeBase_t ) * 8) )", "errorValue doesn't index OER_MAX_ERRORS_PER_CATEGORY\n\t%i not in [0, %i)", v8, 64) )
      __debugbreak();
  }
  LODWORD(fmt) = v8;
  Com_sprintf(dest, 0x100ui64, "oer.%llu_%d.count", category, fmt);
  v9 = OnlineTimeSeriesLog::Get();
  OnlineTimeSeriesLog::WriteEventUInt(v9, dest, 1u);
  v10 = OER_ErrorCodeToString(category, errorCode);
  Com_sprintf(msg, 0x400ui64, "oer: Detected error %s\n", v10);
  OnlineSystem::DebugLog(this, msg);
  Sys_LockRead(&this->m_errorCodesSendCounterMemLock);
  v11 = &this->m_errorCodesSendCounter[category][v8];
  v27 = *v11;
  Sys_UnlockRead(&this->m_errorCodesSendCounterMemLock);
  integer = 16;
  if ( oer_bb_send_limit )
    integer = oer_bb_send_limit->current.integer;
  if ( v27 < integer )
  {
    Sys_LockWrite(&this->m_errorCodesSendCounterMemLock);
    ++*v11;
    Sys_UnlockWrite(&this->m_errorCodesSendCounterMemLock);
    v13 = contextString;
    if ( !contextString )
      v13 = (char *)&queryFormat.fmt + 3;
    Online_ErrorReporting::SendErrorContextData(this, category, v8, v13);
  }
  else
  {
    Com_sprintf(msg, 0x400ui64, "oer: Error code limit exceeded, category %zu errorcode %zu\n", category, errorCode);
    OnlineSystem::DebugLog(this, msg);
  }
  if ( category || (errorCode & 0xC0000) == 0 )
  {
    v14 = DVARUINT64_oer_diag_category;
    if ( DVARUINT64_oer_diag_category )
    {
      Dvar_CheckFrontendServerThread(DVARUINT64_oer_diag_category);
      integer64 = v14->current.integer64;
    }
    else
    {
      integer64 = 0i64;
    }
    v16 = DVARUINT64_oer_diag_errorbits;
    if ( DVARUINT64_oer_diag_errorbits )
    {
      Dvar_CheckFrontendServerThread(DVARUINT64_oer_diag_errorbits);
      v17 = v16->current.integer64;
    }
    else
    {
      v17 = 0i64;
    }
    if ( ((1i64 << category) & integer64) != 0 && (errorCode & v17) != 0 )
    {
      v18 = j_va("%llu_%d (%llu, %llu)", category, (unsigned int)v8, integer64, v17);
      Online_ErrorReporting::SendErrorData(&Online_ErrorReporting::s_instance, v18, 0);
    }
    v19 = DVARUINT64_oer_fatal_category;
    if ( DVARUINT64_oer_fatal_category )
    {
      Dvar_CheckFrontendServerThread(DVARUINT64_oer_fatal_category);
      v20 = v19->current.integer64;
    }
    else
    {
      v20 = 0i64;
    }
    v21 = DVARUINT64_oer_fatal_errorbits;
    if ( DVARUINT64_oer_fatal_errorbits )
    {
      Dvar_CheckFrontendServerThread(DVARUINT64_oer_fatal_errorbits);
      v22 = v21->current.integer64;
    }
    else
    {
      v22 = 0i64;
    }
    if ( ((1i64 << category) & v20) != 0 && (errorCode & v22) != 0 )
    {
      if ( DVARINT_oer_fatal_errortype )
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_oer_fatal_errortype, "oer_fatal_errortype");
      LODWORD(v26) = Int_Internal_DebugName;
      v23 = j_va("%llu_%d(%llu, %llu): %d ", category, (unsigned int)v8, v20, v22, v26);
      Online_ErrorReporting::ReportErrorInternal(&Online_ErrorReporting::s_instance, CAT_DEFAULT, 0x80000ui64, v23);
      LODWORD(fmta) = v8;
      Com_Error_impl(Int_Internal_DebugName, (const ObfuscateErrorText)&stru_143E6F218, 6360i64, category, fmta);
    }
  }
}

/*
==============
Online_ErrorReporting::ResetErrorCodesSendCounter
==============
*/
void Online_ErrorReporting::ResetErrorCodesSendCounter(Online_ErrorReporting *this)
{
  int integer; 

  integer = 240000;
  if ( oer_bb_errorcode_send_counter_reset_time )
    integer = oer_bb_errorcode_send_counter_reset_time->current.integer;
  this->m_errorCodeResetTime = integer + Sys_Milliseconds();
  memset_0(this->m_errorCodesSendCounter, 0, sizeof(this->m_errorCodesSendCounter));
}

/*
==============
Online_ErrorReporting::SendErrorContextData
==============
*/
void Online_ErrorReporting::SendErrorContextData(Online_ErrorReporting *this, OnlineErrorCategory_t category, unsigned __int64 errorCode, const char *errorContextString)
{
  bool v7; 
  DLogContext context; 
  char buffer[4096]; 

  if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
  {
    v7 = DLog_BeginEvent(&context, "online_error_reports_detailed");
    context.autoEndEvent = 1;
    if ( v7 && DLog_UInt64(&context, "category", category) && DLog_UInt64(&context, "error_code", errorCode) && DLog_String(&context, "context", errorContextString, 0) )
      DLog_RecordContext(&context);
  }
}

/*
==============
Online_ErrorReporting::SendErrorData
==============
*/
char Online_ErrorReporting::SendErrorData(Online_ErrorReporting *this, const char *tag, bool forceSend)
{
  char v3; 
  FastCriticalSection *p_m_errorBitsMemLock; 
  unsigned int v5; 
  char v9; 
  unsigned int v10; 
  volatile unsigned __int64 *m_errorBits; 
  unsigned int v13; 
  signed __int64 v14; 
  __int64 *v15; 
  const char *v16; 
  __int64 *v17; 
  const char *v18; 
  __int64 v19[26]; 
  char dest[1024]; 

  v3 = 0;
  p_m_errorBitsMemLock = &this->m_errorBitsMemLock;
  v5 = 0;
  if ( !forceSend )
  {
    v9 = 0;
    Sys_LockRead(&this->m_errorBitsMemLock);
    v10 = 0;
    m_errorBits = this->m_errorBits;
    while ( !*m_errorBits )
    {
      ++v10;
      ++m_errorBits;
      if ( v10 >= 0x1A )
        goto LABEL_7;
    }
    v9 = 1;
LABEL_7:
    Sys_UnlockRead(p_m_errorBitsMemLock);
    if ( !v9 )
      return 0;
  }
  Sys_LockRead(p_m_errorBitsMemLock);
  v13 = 0;
  v14 = (char *)this - (char *)v19;
  v15 = v19;
  do
  {
    ++v13;
    *v15 = *(__int64 *)((char *)v15 + v14 + 64);
    ++v15;
  }
  while ( v13 < 0x1A );
  Sys_UnlockRead(p_m_errorBitsMemLock);
  v19[0] &= ~0x40000ui64;
  memset_0(dest, 0, sizeof(dest));
  v16 = j_va("%s: ", tag);
  I_strcat_truncate(dest, 0x400ui64, v16);
  v17 = v19;
  do
  {
    if ( *v17 )
    {
      v18 = j_va("%d:%llu, ", v5, *v17);
      I_strcat_truncate(dest, 0x400ui64, v18);
      v3 = 1;
    }
    ++v5;
    ++v17;
  }
  while ( v5 < 0x1A );
  if ( v3 || forceSend )
    Online_ErrorReporting::ReportErrorInternal(&Online_ErrorReporting::s_instance, CAT_DEFAULT, 0x40000ui64, dest);
  return v3;
}

