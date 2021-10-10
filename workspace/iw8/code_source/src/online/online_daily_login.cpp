/*
==============
Online_Dailylogin::OnSignedIn
==============
*/

void __fastcall Online_Dailylogin::OnSignedIn(Online_Dailylogin *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_Dailylogin@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_Dailylogin::Init
==============
*/

bool __fastcall Online_Dailylogin::Init(Online_Dailylogin *this)
{
  return ?Init@Online_Dailylogin@@UEAA_NXZ(this);
}

/*
==============
Online_Dailylogin::ControllerFrame
==============
*/

void __fastcall Online_Dailylogin::ControllerFrame(Online_Dailylogin *this, const int controllerIndex)
{
  ?ControllerFrame@Online_Dailylogin@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Dailylogin::UpdateReward
==============
*/

bool __fastcall Online_Dailylogin::UpdateReward(Online_Dailylogin *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  return ?UpdateReward@Online_Dailylogin@@QEAA_NHPEAVbdJSONDeserializer@@_N@Z(this, controllerIndex, json, complete);
}

/*
==============
Online_Dailylogin::OutputCurrentState
==============
*/

void __fastcall Online_Dailylogin::OutputCurrentState(Online_Dailylogin *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_Dailylogin@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Dailylogin::OnSignedOut
==============
*/

void __fastcall Online_Dailylogin::OnSignedOut(Online_Dailylogin *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_Dailylogin@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_Dailylogin::RegisterLuaFunctions
==============
*/

void __fastcall Online_Dailylogin::RegisterLuaFunctions(Online_Dailylogin *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_Dailylogin@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_Dailylogin::GetInstancePtr
==============
*/

Online_Dailylogin *__fastcall Online_Dailylogin::GetInstancePtr()
{
  return ?GetInstancePtr@Online_Dailylogin@@SAPEAV1@XZ();
}

/*
==============
Online_Dailylogin::OnDailyLoginBonusTaskFailure
==============
*/

void __fastcall Online_Dailylogin::OnDailyLoginBonusTaskFailure(Online_Dailylogin *this, int controllerIndex)
{
  ?OnDailyLoginBonusTaskFailure@Online_Dailylogin@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Dailylogin::OnDisconnect
==============
*/

void __fastcall Online_Dailylogin::OnDisconnect(Online_Dailylogin *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_Dailylogin@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Fence_OnlineDailyLoginDependenciesUpdated
==============
*/

void __fastcall Fence_OnlineDailyLoginDependenciesUpdated(int controllerIndex, bool value)
{
  ?Fence_OnlineDailyLoginDependenciesUpdated@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
Online_Dailylogin::OnRegistered
==============
*/

void __fastcall Online_Dailylogin::OnRegistered(Online_Dailylogin *this)
{
  ?OnRegistered@Online_Dailylogin@@UEAAXXZ(this);
}

/*
==============
OnReportDailyLoginComplete
==============
*/

void __fastcall OnReportDailyLoginComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnReportDailyLoginComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Dailylogin::Frame
==============
*/

void __fastcall Online_Dailylogin::Frame(Online_Dailylogin *this)
{
  ?Frame@Online_Dailylogin@@UEAAXXZ(this);
}

/*
==============
Online_Dailylogin::GetShouldPassFence
==============
*/

bool __fastcall Online_Dailylogin::GetShouldPassFence(Online_Dailylogin *this, int controllerIndex)
{
  return ?GetShouldPassFence@Online_Dailylogin@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Dailylogin::GetInstance
==============
*/

Online_Dailylogin *__fastcall Online_Dailylogin::GetInstance()
{
  return ?GetInstance@Online_Dailylogin@@SAAEAV1@XZ();
}

/*
==============
Online_Dailylogin::OnUnregistered
==============
*/

void __fastcall Online_Dailylogin::OnUnregistered(Online_Dailylogin *this)
{
  ?OnUnregistered@Online_Dailylogin@@UEAAXXZ(this);
}

/*
==============
Online_Dailylogin::RequestDailyLoginResponse
==============
*/

void __fastcall Online_Dailylogin::RequestDailyLoginResponse(Online_Dailylogin *this, const int controllerIndex)
{
  ?RequestDailyLoginResponse@Online_Dailylogin@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Dailylogin::Uninit
==============
*/

void __fastcall Online_Dailylogin::Uninit(Online_Dailylogin *this)
{
  ?Uninit@Online_Dailylogin@@UEAAXXZ(this);
}

/*
==============
LUI_CoD_LuaCall_GetDailyLoginReward
==============
*/
__int64 LUI_CoD_LuaCall_GetDailyLoginReward(lua_State *const luaVM)
{
  DailyLoginReward *v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: DailyLogin.GetReward( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: DailyLogin.GetReward( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si eax, xmm0 }
  v4 = &Online_Dailylogin::s_instance.m_dailyLoginReward[_EAX];
  j_lua_createtable(luaVM, 0, 0);
  LUI_SetTableBool("IsNew", 0, LUI_luaVM);
  LUI_SetTableInt("LootID", v4->lootID, LUI_luaVM);
  LUI_SetTableInt("CurrencyID", v4->currencyID, LUI_luaVM);
  LUI_SetTableInt("CurrencyAmount", v4->currencyAmount, LUI_luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetDailyLoginSeen
==============
*/
__int64 LUI_CoD_LuaCall_SetDailyLoginSeen(lua_State *const luaVM)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: DailyLogin.SetHasBeenSeen( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: DailyLogin.SetHasBeenSeen( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si eax, xmm0 }
  Online_Dailylogin::s_instance.m_dailyLoginReward[_EAX].isNew = 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
Online_Dailylogin::OnRegistered
==============
*/
void Online_Dailylogin::OnRegistered(Online_Dailylogin *this)
{
  ;
}

/*
==============
Online_Dailylogin::OnUnregistered
==============
*/
void Online_Dailylogin::OnUnregistered(Online_Dailylogin *this)
{
  ;
}

/*
==============
Online_Dailylogin::Init
==============
*/
char Online_Dailylogin::Init(Online_Dailylogin *this)
{
  __int64 v1; 
  bool v2; 

  v1 = 0i64;
  *(_QWORD *)this->m_dailyRewardDay = 0i64;
  v2 = 1;
  *(_QWORD *)&this->m_dailyRewardDay[2] = 0i64;
  *(_QWORD *)&this->m_dailyRewardDay[4] = 0i64;
  *(_QWORD *)&this->m_dailyRewardDay[6] = 0i64;
  do
  {
    if ( !v2 )
    {
      j___report_rangecheckfailure(s_fenceDependenciesMet_0);
      JUMPOUT(0x140BDA30Di64);
    }
    s_fenceDependenciesMet_0[v1] = 0;
    v2 = (unsigned __int64)++v1 < 8;
  }
  while ( v1 < 8 );
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_ONLINE_DAILY_LOGIN, Fence_OnlineDailyLoginDependenciesUpdated);
  return 1;
}

/*
==============
Online_Dailylogin::Uninit
==============
*/
void Online_Dailylogin::Uninit(Online_Dailylogin *this)
{
  ;
}

/*
==============
Online_Dailylogin::Frame
==============
*/
void Online_Dailylogin::Frame(Online_Dailylogin *this)
{
  ;
}

/*
==============
Online_Dailylogin::ControllerFrame
==============
*/
void Online_Dailylogin::ControllerFrame(Online_Dailylogin *this, const int controllerIndex)
{
  __int64 v2; 
  unsigned __int64 v4; 
  const dvar_t *v5; 
  unsigned __int64 integer; 
  int v7; 
  int v8; 
  const dvar_t *v9; 
  XUID v10; 

  v2 = controllerIndex;
  if ( s_fenceDependenciesMet_0[controllerIndex] )
  {
    v4 = 0i64;
    if ( !this->m_pendingCallToFetchDailyReward[v2] )
    {
      Live_GetXuid(&v10, v2);
      v5 = DVARINT_online_challenge_jitter_time;
      if ( !DVARINT_online_challenge_jitter_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_jitter_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      integer = v5->current.integer;
      v4 = XUID::ToUint64(&v10) % integer;
    }
    v7 = -1556611200 - truncate_cast<int,unsigned __int64>(v4);
    v8 = (int)(v7 + LiveStorage_GetUTC()) / 86400;
    if ( v8 > this->m_dailyRewardDay[v2] || this->m_pendingCallToFetchDailyReward[v2] )
    {
      v9 = DVARBOOL_online_challenge_upload_login;
      if ( !DVARBOOL_online_challenge_upload_login && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_login") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
        Online_Dailylogin::RequestDailyLoginResponse(this, v2);
    }
    this->m_dailyRewardDay[v2] = v8;
  }
}

/*
==============
Online_Dailylogin::OnSignedIn
==============
*/
void Online_Dailylogin::OnSignedIn(Online_Dailylogin *this, const int controllerIndex, GenericSignInState signinState)
{
  if ( signinState == SignedInToDemonWare )
    this->m_pendingCallToFetchDailyReward[controllerIndex] = 1;
}

/*
==============
Online_Dailylogin::OnSignedOut
==============
*/
void Online_Dailylogin::OnSignedOut(Online_Dailylogin *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_Dailylogin::OnDisconnect
==============
*/
void Online_Dailylogin::OnDisconnect(Online_Dailylogin *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_Dailylogin::RegisterLuaFunctions
==============
*/
void Online_Dailylogin::RegisterLuaFunctions(Online_Dailylogin *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "DailyLogin", DailyLogin_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_Dailylogin::OutputCurrentState
==============
*/
void Online_Dailylogin::OutputCurrentState(Online_Dailylogin *this, const int controllerIndex)
{
  Com_Printf(25, "Online_Dailylogin DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, DOUBLE_0_234375);
  Com_Printf(25, "Online_Dailylogin DUMP END\n");
}

/*
==============
Fence_OnlineDailyLoginDependenciesUpdated
==============
*/
void Fence_OnlineDailyLoginDependenciesUpdated(int controllerIndex, bool value)
{
  s_fenceDependenciesMet_0[controllerIndex] = value;
}

/*
==============
Online_Dailylogin::GetInstance
==============
*/
Online_Dailylogin *Online_Dailylogin::GetInstance()
{
  return &Online_Dailylogin::s_instance;
}

/*
==============
Online_Dailylogin::GetInstancePtr
==============
*/
Online_Dailylogin *Online_Dailylogin::GetInstancePtr()
{
  return &Online_Dailylogin::s_instance;
}

/*
==============
Online_Dailylogin::GetShouldPassFence
==============
*/
_BOOL8 Online_Dailylogin::GetShouldPassFence(Online_Dailylogin *this, int controllerIndex)
{
  __int64 v2; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex < 8 )
    return this->m_fenceShouldPass[controllerIndex];
  v6 = 8;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_daily_login.cpp", 151, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
    __debugbreak();
  return this->m_fenceShouldPass[v2];
}

/*
==============
Online_Dailylogin::OnDailyLoginBonusTaskFailure
==============
*/
void Online_Dailylogin::OnDailyLoginBonusTaskFailure(Online_Dailylogin *this, int controllerIndex)
{
  this->m_fenceShouldPass[controllerIndex] = 1;
}

/*
==============
OnReportDailyLoginComplete
==============
*/
void OnReportDailyLoginComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned int m_localTaskId; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 
  lua_State *v6; 
  LocalClientNum_t ClientFromController; 
  unsigned int v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 

  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      m_localTaskId = pTask->m_localTaskId;
      TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
      v10 = m_localTaskId;
      Com_PrintError(25, "reportEvents - Error(%d) Transaction ID(%zu)-(%d)\n", (unsigned int)ErrorCode, TransactionID, v10);
      v6 = LUI_luaVM;
      Online_Dailylogin::s_instance.m_fenceShouldPass[pTask->m_controllerIndex] = 1;
      ClientFromController = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
      if ( LUI_BeginEvent(ClientFromController, "reward_error", v6) )
        LUI_EndEvent(LUI_luaVM);
    }
  }
  else
  {
    v8 = pTask->m_localTaskId;
    v9 = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
    v11 = v8;
    Com_Printf(25, "reportEvents complete %d (%zu)-(%d).\n", (unsigned int)pTask->m_controllerIndex, v9, v11);
    Online_Dailylogin::s_instance.m_fenceShouldPass[pTask->m_controllerIndex] = 1;
  }
}

/*
==============
Online_Dailylogin::RequestDailyLoginResponse
==============
*/
void Online_Dailylogin::RequestDailyLoginResponse(Online_Dailylogin *this, const int controllerIndex)
{
  __int64 v2; 
  unsigned int UTC; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v9; 
  DWServicesAccess *v10; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *v12; 
  bdRemoteTask *v13; 
  TaskManager *v14; 
  _BYTE *v15; 
  unsigned __int64 v16; 
  _BYTE *v17; 
  unsigned __int64 v18; 
  _BYTE *v19; 
  unsigned __int64 v20; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  bdAchievementEvent *events; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v26; 
  bdAchievementEvent ptr; 
  bdReportEventsRequest request; 

  v26 = -2i64;
  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_daily_login.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( dwGetLogOnStatus(v2) == DW_LIVE_CONNECTED )
  {
    UTC = LiveStorage_GetUTC();
    bdAchievementEvent::bdAchievementEvent(&ptr, "login_event", UTC);
    bdAchievementEvent::addKeyValue(&ptr, "version", 1ui64);
    v5 = DVARINT_online_challenge_special_event_day;
    if ( !DVARINT_online_challenge_special_event_day && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_special_event_day") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer > 0 )
      bdAchievementEvent::addKeyValue(&ptr, "special_event_day", v5->current.integer);
    v6 = DVARINT_online_challenge_day_override;
    if ( !DVARINT_online_challenge_day_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_day_override") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    bdAchievementEvent::addKeyValue(&ptr, "day_override", v6->current.integer);
    events = &ptr;
    Instance = DWServicesAccess::GetInstance();
    TitleID = DWServicesAccess::GetTitleID(Instance);
    v9 = j_va("%u", TitleID);
    bdReportEventsRequest::bdReportEventsRequest(&request, v9, 1u, (const bdAchievementEvent **)&events, NULL);
    v10 = DWServicesAccess::GetInstance();
    AchievementEngine = DWServicesAccess::GetAchievementEngine(v10, v2);
    v12 = (TaskCreateRequest *)DWAchievementEngine::reportEvents(AchievementEngine, &result, &request);
    if ( v12 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      v13 = *(bdRemoteTask **)&v12->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v13;
      if ( v13 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      pTaskCreateRequest.m_controllerIndex = v2;
      pTaskCreateRequest.m_onCompletionCallback = OnReportDailyLoginComplete;
      v14 = TaskManager::GetInstance();
      if ( TaskManager::CreateTask(v14, &pTaskCreateRequest, &pTaskCreateResult) )
      {
        Com_Printf(25, "reportEvents() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v2);
        if ( this->m_pendingCallToFetchDailyReward[v2] )
          this->m_pendingCallToFetchDailyReward[v2] = 0;
        goto LABEL_27;
      }
      Com_PrintError(25, "reportEvents() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v2);
    }
    else
    {
      Com_PrintError(25, "reportEvents() failed for controllerIndex %d\n", (unsigned int)v2);
    }
    Online_Dailylogin::s_instance.m_fenceShouldPass[v2] = 1;
LABEL_27:
    v15 = memchr_0(&request.m_requestID, 0, 0x1Aui64);
    if ( v15 )
      v16 = v15 - (_BYTE *)&request.m_requestID;
    else
      v16 = 26i64;
    bdHandleAssert(v16 < 0x1A, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<25>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_accountID._bytes_48);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_accountID.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)request.m_accountID._bytes_48);
    bdStructFixedSizeString<4096>::~bdStructFixedSizeString<4096>((bdStructFixedSizeString<4096> *)&request._bytes_20[78]);
    v17 = memchr_0(&request._bytes_20[13], 0, 0x41ui64);
    if ( v17 )
      v18 = v17 - &request._bytes_20[13];
    else
      v18 = 65i64;
    bdHandleAssert(v18 < 0x41, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<64>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    v19 = memchr_0((char *)&request.__vftable + 28, 0, 0x11ui64);
    if ( v19 )
      v20 = v19 - ((char *)&request.__vftable + 28);
    else
      v20 = 17i64;
    bdHandleAssert(v20 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    bdRESTRequest::~bdRESTRequest((bdRESTRequest *)&request.__vftable + 2);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.gap10F2[6]);
    `eh vector destructor iterator'(&ptr.m_keyValues, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdAchievementEventKeyValue::`vbase destructor);
    bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&ptr.__vftable + 3));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&ptr.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&ptr.m_keyValues + 1));
  }
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
Online_Dailylogin::UpdateReward
==============
*/
char Online_Dailylogin::UpdateReward(Online_Dailylogin *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  __int64 v5; 
  unsigned int i; 
  __int64 v8; 
  __int64 v9; 
  char v10; 
  char v11; 
  int v13; 
  int *v14; 
  bdJSONDeserializer v16; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v18; 
  __int64 v19; 
  bdJSONDeserializer v20; 
  bdJSONDeserializer v21; 
  char v22[32]; 

  v19 = -2i64;
  v5 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( bdJSONDeserializer::hasKey(json, "triggers") && bdJSONDeserializer::getArray(json, "triggers", &value) )
  {
    for ( i = 0; i < value.m_count; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v16);
      bdJSONDeserializer::getElementByIndex(&value, i, &v16);
      bdJSONDeserializer::getString(&v16, "type", v22, 0x20u);
      v8 = 0i64;
      v9 = 0x7FFFFFFFi64;
      while ( 1 )
      {
        v10 = v22[v8];
        v11 = aGrantProduct[v8++];
        if ( !v9-- )
        {
LABEL_8:
          v13 = 0;
          goto LABEL_9;
        }
        if ( v10 != v11 )
          break;
        if ( !v10 )
          goto LABEL_8;
      }
      v13 = 1;
      if ( v10 < v11 )
        v13 = -1;
LABEL_9:
      if ( !v13 )
      {
        if ( bdJSONDeserializer::hasKey(&v16, "productID") && bdJSONDeserializer::getInt32(&v16, "productID", &this->m_dailyLoginReward[v5].lootID) )
          this->m_dailyLoginReward[v5].isNew = 1;
        bdJSONDeserializer::bdJSONDeserializer(&v21);
        if ( bdJSONDeserializer::getObject(&v16, "inventory", &v21) )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v20);
          if ( bdJSONDeserializer::getArray(&v21, "currencies", &v20) )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v18);
            if ( bdJSONDeserializer::getElementByIndex(&v20, 0, &v18) )
            {
              v14 = (int *)((char *)this + 16 * v5);
              bdJSONDeserializer::getInt32(&v18, "currency_id", v14 + 29);
              bdJSONDeserializer::getInt32(&v18, "balance_delta", v14 + 30);
            }
            bdJSONDeserializer::~bdJSONDeserializer(&v18);
          }
          bdJSONDeserializer::~bdJSONDeserializer(&v20);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v21);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v16);
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return 1;
}

