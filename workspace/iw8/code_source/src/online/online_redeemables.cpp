/*
==============
Online_Redeemables::OnSignedIn
==============
*/

void __fastcall Online_Redeemables::OnSignedIn(Online_Redeemables *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_Redeemables@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_Redeemables::~Online_Redeemables
==============
*/

void __fastcall Online_Redeemables::~Online_Redeemables(Online_Redeemables *this)
{
  ??1Online_Redeemables@@UEAA@XZ(this);
}

/*
==============
Online_Redeemables::OnRegistered
==============
*/

void __fastcall Online_Redeemables::OnRegistered(Online_Redeemables *this)
{
  ?OnRegistered@Online_Redeemables@@UEAAXXZ(this);
}

/*
==============
Online_Redeemables::NotifyLuiRedemptionComplete
==============
*/

void __fastcall Online_Redeemables::NotifyLuiRedemptionComplete(Online_Redeemables *this, const int controllerIndex, bool wasSuccess, Online_Redeemables::eRedeemableFailuresReasons errorCode, bool failedToStart, bdRedeemCodeResult *pRedeemResult)
{
  ?NotifyLuiRedemptionComplete@Online_Redeemables@@QEAAXH_NW4eRedeemableFailuresReasons@1@0PEAVbdRedeemCodeResult@@@Z(this, controllerIndex, wasSuccess, errorCode, failedToStart, pRedeemResult);
}

/*
==============
Online_Redeemables::Uninit
==============
*/

void __fastcall Online_Redeemables::Uninit(Online_Redeemables *this)
{
  ?Uninit@Online_Redeemables@@UEAAXXZ(this);
}

/*
==============
Online_RedeemablesCallback
==============
*/

void __fastcall Online_RedeemablesCallback(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?Online_RedeemablesCallback@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Redeemables::OutputCurrentState
==============
*/

void __fastcall Online_Redeemables::OutputCurrentState(Online_Redeemables *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_Redeemables@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Redeemables::Online_Redeemables
==============
*/

void __fastcall Online_Redeemables::Online_Redeemables(Online_Redeemables *this)
{
  ??0Online_Redeemables@@AEAA@XZ(this);
}

/*
==============
Online_Redeemables::RedeemCodeOpenDialog
==============
*/

bool __fastcall Online_Redeemables::RedeemCodeOpenDialog(Online_Redeemables *this, const int controllerIndex, const char *const code)
{
  return ?RedeemCodeOpenDialog@Online_Redeemables@@QEAA_NHQEBD@Z(this, controllerIndex, code);
}

/*
==============
Online_Redeemables::Frame
==============
*/

void __fastcall Online_Redeemables::Frame(Online_Redeemables *this)
{
  ?Frame@Online_Redeemables@@UEAAXXZ(this);
}

/*
==============
Online_Redeemables::ControllerFrame
==============
*/

void __fastcall Online_Redeemables::ControllerFrame(Online_Redeemables *this, const int controllerIndex)
{
  ?ControllerFrame@Online_Redeemables@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Redeemables::GetInstance
==============
*/

Online_Redeemables *__fastcall Online_Redeemables::GetInstance()
{
  return ?GetInstance@Online_Redeemables@@SAAEAV1@XZ();
}

/*
==============
Online_Redeemables::RegisterLuaFunctions
==============
*/

void __fastcall Online_Redeemables::RegisterLuaFunctions(Online_Redeemables *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_Redeemables@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_Redeemables::OnDisconnect
==============
*/

void __fastcall Online_Redeemables::OnDisconnect(Online_Redeemables *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_Redeemables@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_Redeemables::OnUnregistered
==============
*/

void __fastcall Online_Redeemables::OnUnregistered(Online_Redeemables *this)
{
  ?OnUnregistered@Online_Redeemables@@UEAAXXZ(this);
}

/*
==============
Online_Redeemables::OnSignedOut
==============
*/

void __fastcall Online_Redeemables::OnSignedOut(Online_Redeemables *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_Redeemables@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_Redeemables::GetInstancePtr
==============
*/

Online_Redeemables *__fastcall Online_Redeemables::GetInstancePtr()
{
  return ?GetInstancePtr@Online_Redeemables@@SAPEAV1@XZ();
}

/*
==============
Online_Redeemables::RedeemPayload
==============
*/

bool __fastcall Online_Redeemables::RedeemPayload(Online_Redeemables *this, const int controllerIndex, const char *const payload, const char *const payloadSignature)
{
  return ?RedeemPayload@Online_Redeemables@@QEAA_NHQEBD0@Z(this, controllerIndex, payload, payloadSignature);
}

/*
==============
Online_Redeemables::Init
==============
*/

bool __fastcall Online_Redeemables::Init(Online_Redeemables *this)
{
  return ?Init@Online_Redeemables@@UEAA_NXZ(this);
}

/*
==============
LUI_CoD_LuaCall_RedeemCode
==============
*/
__int64 LUI_CoD_LuaCall_RedeemCode(lua_State *const luaVM)
{
  const char *v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Rewards.RedeemCode( <controller><code> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Rewards.RedeemCode( <controller> )\n");
  if ( j_lua_type(luaVM, 2) && !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Rewards.RedeemCode( <code> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si edi, xmm0 }
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  if ( v4 )
    Online_Redeemables::RedeemCodeOpenDialog(&Online_Redeemables::s_instance, _EDI, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
Online_Redeemables::Online_Redeemables
==============
*/
void Online_Redeemables::Online_Redeemables(Online_Redeemables *this)
{
  this->m_nextSystem = NULL;
  this->m_initialized = 0;
  this->__vftable = (Online_Redeemables_vtbl *)&Online_Redeemables::`vftable';
  TaskCreateRequest::TaskCreateRequest(&this->m_redeemCodeRequest);
  TaskCreateRequest::TaskCreateRequest(&this->m_redeemPayloadRequest);
}

/*
==============
Online_Redeemables::~Online_Redeemables
==============
*/
void Online_Redeemables::~Online_Redeemables(Online_Redeemables *this)
{
  this->__vftable = (Online_Redeemables_vtbl *)&Online_Redeemables::`vftable';
  TaskCreateRequest::~TaskCreateRequest(&this->m_redeemPayloadRequest);
  TaskCreateRequest::~TaskCreateRequest(&this->m_redeemCodeRequest);
}

/*
==============
Online_Redeemables::ControllerFrame
==============
*/
void Online_Redeemables::ControllerFrame(Online_Redeemables *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_Redeemables::Frame
==============
*/
void Online_Redeemables::Frame(Online_Redeemables *this)
{
  ;
}

/*
==============
Online_Redeemables::GetInstance
==============
*/
Online_Redeemables *Online_Redeemables::GetInstance()
{
  return &Online_Redeemables::s_instance;
}

/*
==============
Online_Redeemables::GetInstancePtr
==============
*/
Online_Redeemables *Online_Redeemables::GetInstancePtr()
{
  return &Online_Redeemables::s_instance;
}

/*
==============
Online_Redeemables::Init
==============
*/
char Online_Redeemables::Init(Online_Redeemables *this)
{
  return 1;
}

/*
==============
Online_Redeemables::NotifyLuiRedemptionComplete
==============
*/
void Online_Redeemables::NotifyLuiRedemptionComplete(Online_Redeemables *this, const int controllerIndex, bool wasSuccess, Online_Redeemables::eRedeemableFailuresReasons errorCode, bool failedToStart, bdRedeemCodeResult *pRedeemResult)
{
  __int64 v6; 
  __int64 v7; 
  const char *v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  bool v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v6 = controllerIndex;
  v7 = errorCode;
  v9 = "redemption_failed";
  if ( wasSuccess )
    v9 = "redemption_success";
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, v9, LUI_luaVM) )
  {
    LUI_SetTableInt("controller", v6, LUI_luaVM);
    LUI_SetTableInt("errorCode", v7, LUI_luaVM);
    LUI_SetTableBool("errorFailedToStart", failedToStart, LUI_luaVM);
    if ( (_DWORD)v7 == 1 )
    {
      LUI_SetTableBool("errorAlreadyRedeemed", 1, LUI_luaVM);
      LUI_SetTableBool("errorCodeExpired", 0, LUI_luaVM);
    }
    else
    {
      LUI_SetTableBool("errorAlreadyRedeemed", 0, LUI_luaVM);
      if ( (_DWORD)v7 == 2 )
      {
        LUI_SetTableBool("errorCodeExpired", 1, LUI_luaVM);
      }
      else
      {
        LUI_SetTableBool("errorCodeExpired", 0, LUI_luaVM);
        if ( pRedeemResult && wasSuccess )
        {
          j_lua_createtable(LUI_luaVM, 0, 0);
          v10 = 0;
          v11 = 0;
          while ( v11 < pRedeemResult->m_grantedCurrencies.m_size )
          {
            v12 = *((int *)&bdFastArray<bdRedeemCodeGrantedCurrency>::operator[](&pRedeemResult->m_grantedCurrencies, v11)->__vftable + 4);
            v13 = *((int *)&bdFastArray<bdRedeemCodeGrantedCurrency>::operator[](&pRedeemResult->m_grantedCurrencies, v11)->__vftable + 6);
            if ( (unsigned int)(v12 - 10) > 2 && (_DWORD)v12 != 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 205, ASSERT_TYPE_ASSERT, "(id == 11 || id == 12 || id == 20 || id == 10)", (const char *)&queryFormat, "id == CURRENCY_KEYS_ID || id == CURRENCY_SALVAGE_ID || id == CURRENCY_CODPOINTS_ID || id == CURRENCY_COMMON_CRATE_ID") )
              __debugbreak();
            LUI_BeginTable(++v11, LUI_luaVM);
            LUI_SetTableInt("itemID", v12, LUI_luaVM);
            LUI_SetTableInt("amount", v13, LUI_luaVM);
            LUI_EndTable(LUI_luaVM);
          }
          j_lua_setfield(LUI_luaVM, -2, "Currencies");
          j_lua_createtable(LUI_luaVM, 0, 0);
          if ( *((_DWORD *)&pRedeemResult->__vftable + 7) )
          {
            v14 = *((_DWORD *)&pRedeemResult->__vftable + 7) != 0;
            do
            {
              bdHandleAssert(v14, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdRedeemCodeGrantedItem>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
              v15 = 944i64 * v10;
              v16 = *(int *)(v15 + *((_QWORD *)&pRedeemResult->__vftable + 2) + 16);
              bdHandleAssert(v10++ < *((_DWORD *)&pRedeemResult->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdRedeemCodeGrantedItem>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
              v17 = *(int *)(v15 + *((_QWORD *)&pRedeemResult->__vftable + 2) + 880);
              LUI_BeginTable(v10, LUI_luaVM);
              LUI_SetTableInt("itemID", v16, LUI_luaVM);
              LUI_SetTableInt("newQuantity", v17, LUI_luaVM);
              LUI_SetTableBool("dupe", 0, LUI_luaVM);
              LUI_EndTable(LUI_luaVM);
              v14 = v10 < *((_DWORD *)&pRedeemResult->__vftable + 7);
            }
            while ( v10 < *((_DWORD *)&pRedeemResult->__vftable + 7) );
          }
          j_lua_setfield(LUI_luaVM, -2, "Items");
        }
      }
    }
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
Online_Redeemables::OnDisconnect
==============
*/
void Online_Redeemables::OnDisconnect(Online_Redeemables *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_Redeemables::OnRegistered
==============
*/
void Online_Redeemables::OnRegistered(Online_Redeemables *this)
{
  ;
}

/*
==============
Online_Redeemables::OnSignedIn
==============
*/
void Online_Redeemables::OnSignedIn(Online_Redeemables *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_Redeemables::OnSignedOut
==============
*/
void Online_Redeemables::OnSignedOut(Online_Redeemables *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_Redeemables::OnUnregistered
==============
*/
void Online_Redeemables::OnUnregistered(Online_Redeemables *this)
{
  ;
}

/*
==============
Online_RedeemablesCallback
==============
*/
void Online_RedeemablesCallback(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  bdRedeemCodeResult *m_appData; 
  bdRemoteTask *m_ptr; 
  Online_Redeemables::eRedeemableFailuresReasons v6; 
  bdLobbyErrorCode ErrorCode; 
  __int64 m_controllerIndex; 
  bdLobbyErrorCode v9; 
  bool v10; 
  unsigned int v11; 
  Online_Loot *Instance; 
  __int64 v13; 
  int v14; 
  Online_Loot *v15; 
  __int64 v16; 
  bdLobbyErrorCode v17; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 237, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 238, ASSERT_TYPE_ASSERT, "(pTask)", (const char *)&queryFormat, "pTask") )
    __debugbreak();
  if ( !pTask->m_remoteDemonwareTask.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 239, ASSERT_TYPE_ASSERT, "(pTask->m_remoteDemonwareTask)", (const char *)&queryFormat, "pTask->m_remoteDemonwareTask") )
    __debugbreak();
  m_appData = (bdRedeemCodeResult *)pTask->m_appData;
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 248, ASSERT_TYPE_ASSERT, "(pRedeemResult)", (const char *)&queryFormat, "pRedeemResult") )
    __debugbreak();
  m_ptr = pTask->m_remoteDemonwareTask.m_ptr;
  v6 = ERROR_NONE;
  pTask->m_appData = NULL;
  ErrorCode = bdRemoteTask::getErrorCode(m_ptr);
  m_controllerIndex = (unsigned int)pTask->m_controllerIndex;
  v9 = ErrorCode;
  v17 = ErrorCode;
  if ( taskState )
  {
    Com_PrintWarning(25, "Online_RedeemablesCallback FAILED! controller %d errorCode %d\n", m_controllerIndex, (unsigned int)ErrorCode);
    v10 = 0;
  }
  else
  {
    Com_Printf(25, "Online_RedeemablesCallback SUCCESS! controller %d errorCode %d\n", m_controllerIndex, (unsigned int)ErrorCode);
    v11 = 0;
    if ( *((_DWORD *)&m_appData->__vftable + 7) )
    {
      do
      {
        Instance = Online_Loot::GetInstance();
        bdHandleAssert(v11 < *((_DWORD *)&m_appData->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdRedeemCodeGrantedItem>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
        v13 = 944i64 * v11;
        v14 = *(_DWORD *)(*((_QWORD *)&m_appData->__vftable + 2) + v13 + 880);
        bdHandleAssert(v11 < *((_DWORD *)&m_appData->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdRedeemCodeGrantedItem>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
        Online_Loot::UpdateItemInInventory(Instance, pTask->m_controllerIndex, *(_DWORD *)(*((_QWORD *)&m_appData->__vftable + 2) + v13 + 16), v14, 1);
        v15 = Online_Loot::GetInstance();
        bdHandleAssert(v11 < *((_DWORD *)&m_appData->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdRedeemCodeGrantedItem>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
        Online_Loot::AddToLastLootDrops(v15, pTask->m_controllerIndex, *(_DWORD *)(*((_QWORD *)&m_appData->__vftable + 2) + v13 + 16));
        ++v11;
      }
      while ( v11 < *((_DWORD *)&m_appData->__vftable + 7) );
      v9 = v17;
    }
    v10 = 1;
  }
  if ( !pTask->m_remoteDemonwareTask.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 272, ASSERT_TYPE_ASSERT, "(pTask->m_remoteDemonwareTask)", (const char *)&queryFormat, "pTask->m_remoteDemonwareTask") )
    __debugbreak();
  switch ( v9 )
  {
    case BD_REDEEMABLE_CODE_ALREADY_USED_BY_USER:
      v6 = ALREADY_REDEEMED;
      break;
    case BD_REDEEMABLE_CODE_EXPIRED:
      v6 = CODE_EXPIRED;
      break;
    case BD_SERVICE_NOT_AVAILABLE:
      v6 = BACKEND_FAILURE;
      Com_PrintError(25, "!!!!!!!!!!!!!!! Redeemable service FAILED with BD_SERVICE_NOT_AVAILABLE, verify it is set up on back end!!!!!!!!!!!!!!!!!!!!!!!!\n");
      break;
  }
  Online_Redeemables::NotifyLuiRedemptionComplete(&Online_Redeemables::s_instance, pTask->m_controllerIndex, v10, v6, 0, m_appData);
  if ( m_appData )
  {
    v16 = *(int *)(*((_QWORD *)&m_appData->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&m_appData->__vftable + v16 + 8))((__int64)&m_appData->__vftable + v16 + 8, 1i64);
  }
}

/*
==============
Online_Redeemables::OutputCurrentState
==============
*/
void Online_Redeemables::OutputCurrentState(Online_Redeemables *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_Redeemables::RedeemCodeOpenDialog
==============
*/
char Online_Redeemables::RedeemCodeOpenDialog(Online_Redeemables *this, const int controllerIndex, const char *const code)
{
  __int64 v4; 
  const char *v6; 
  bdRemoteTask *v7; 
  __int64 v8; 
  __int64 v9; 
  DWServicesAccess *Instance; 
  DWRedeemableCodes *RedeemableCodes; 
  const bdReference<bdRemoteTask> *v12; 
  bdRemoteTask *m_ptr; 
  TaskManager *v14; 
  bdRemoteTask *v16; 
  bdRemoteTask *v17; 
  void (__fastcall ***v18)(_QWORD, __int64); 
  __int64 v19; 
  __int64 v20; 
  bdReference<bdRemoteTask> result; 
  __int64 v22; 
  TaskCreateResult pTaskCreateResult; 
  char buffer[32]; 

  v22 = -2i64;
  v4 = controllerIndex;
  if ( !code && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 301, ASSERT_TYPE_ASSERT, "(code)", (const char *)&queryFormat, "code") )
    __debugbreak();
  if ( (unsigned int)v4 >= 8 )
  {
    LODWORD(v20) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 302, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, 8) )
      __debugbreak();
  }
  bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId(buffer, 0x19u);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v6 = "NULL";
  if ( code )
    v6 = code;
  Com_Printf(25, "RedeemCodeOpenDialog for code [%s] starting.\n", v6);
  v7 = (bdRemoteTask *)bdMemory::allocate(0x40ui64);
  result.m_ptr = v7;
  if ( v7 )
  {
    bdRedeemCodeResult::bdRedeemCodeResult((bdRedeemCodeResult *)v7);
    v9 = v8;
  }
  else
  {
    v9 = 0i64;
  }
  this->m_redeemCodeRequest.m_appTaskType = 1;
  if ( v9 )
  {
    this->m_redeemCodeRequest.m_appData = (void *)v9;
    this->m_redeemCodeRequest.m_controllerIndex = v4;
    Instance = DWServicesAccess::GetInstance();
    RedeemableCodes = DWServicesAccess::GetRedeemableCodes(Instance, v4);
    v12 = DWRedeemableCodes::redeemCode(RedeemableCodes, &result, buffer, code, (bdRedeemCodeResult *)v9);
    bdReference<bdRemoteTask>::operator=(&this->m_redeemCodeRequest.m_remoteDemonwareTask, v12);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    this->m_redeemCodeRequest.m_onCompletionCallback = Online_RedeemablesCallback;
    m_ptr = this->m_redeemCodeRequest.m_remoteDemonwareTask.m_ptr;
    if ( m_ptr )
    {
      if ( m_ptr->getStatus(m_ptr) == BD_PENDING )
      {
        v14 = TaskManager::GetInstance();
        if ( TaskManager::CreateTask(v14, &this->m_redeemCodeRequest, &pTaskCreateResult) )
        {
          LUI_OpenMenu(LOCAL_CLIENT_0, "RedeemingPopup", 1, 1, 1);
          return 1;
        }
      }
    }
    v16 = this->m_redeemCodeRequest.m_remoteDemonwareTask.m_ptr;
    if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v17 = this->m_redeemCodeRequest.m_remoteDemonwareTask.m_ptr;
      if ( v17 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v17->~bdReferencable)(v17, 1i64);
    }
    this->m_redeemCodeRequest.m_remoteDemonwareTask.m_ptr = NULL;
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(int *)(*(_QWORD *)(v9 + 8) + 4i64) + v9 + 8);
    (**v18)(v18, 1i64);
    Com_PrintError(25, "redeemCode for code [%s] failed!\n", v6);
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, "redemption_failed", LUI_luaVM) )
    {
      LUI_SetTableInt("controller", v4, LUI_luaVM);
      v19 = 7i64;
LABEL_29:
      LUI_SetTableInt("errorCode", v19, LUI_luaVM);
      LUI_SetTableBool("errorFailedToStart", 1, LUI_luaVM);
      LUI_SetTableBool("errorAlreadyRedeemed", 0, LUI_luaVM);
      LUI_SetTableBool("errorCodeExpired", 0, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  else
  {
    Com_PrintError(25, "redeemCode for code [%s] failed due to allocation failure for a bdRedeemCodeResult!\n", v6);
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, "redemption_failed", LUI_luaVM) )
    {
      LUI_SetTableInt("controller", v4, LUI_luaVM);
      v19 = 8i64;
      goto LABEL_29;
    }
  }
  return 0;
}

/*
==============
Online_Redeemables::RedeemPayload
==============
*/
char Online_Redeemables::RedeemPayload(Online_Redeemables *this, const int controllerIndex, const char *const payload, const char *const payloadSignature)
{
  __int64 v6; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  bdRemoteTask *v11; 
  __int64 v12; 
  DWServicesAccess *Instance; 
  DWRedeemableCodes *RedeemableCodes; 
  const bdReference<bdRemoteTask> *v15; 
  bdRemoteTask *m_ptr; 
  TaskManager *v17; 
  bdRemoteTask *v19; 
  bdRemoteTask *v20; 
  void (__fastcall ***v21)(_QWORD, __int64); 
  __int64 v22; 
  bdReference<bdRemoteTask> result; 
  __int64 v24; 
  TaskCreateResult pTaskCreateResult; 
  char buffer[32]; 

  v24 = -2i64;
  v6 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 352, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !payload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 353, ASSERT_TYPE_ASSERT, "(payload)", (const char *)&queryFormat, "payload") )
    __debugbreak();
  if ( !payloadSignature && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_redeemables.cpp", 354, ASSERT_TYPE_ASSERT, "(payloadSignature)", (const char *)&queryFormat, "payloadSignature") )
    __debugbreak();
  bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId(buffer, 0x19u);
  v8 = 0i64;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v9 = "NULL";
  v10 = "NULL";
  if ( payloadSignature )
    v10 = payloadSignature;
  if ( payload )
    v9 = payload;
  Com_Printf(25, "RedeemPayload for payload [%s] signature [%s] starting.\n", v9, v10);
  v11 = (bdRemoteTask *)bdMemory::allocate(0x40ui64);
  result.m_ptr = v11;
  if ( v11 )
  {
    bdRedeemCodeResult::bdRedeemCodeResult((bdRedeemCodeResult *)v11);
    v8 = v12;
  }
  this->m_redeemPayloadRequest.m_appTaskType = 2;
  if ( v8 )
  {
    this->m_redeemPayloadRequest.m_appData = (void *)v8;
    this->m_redeemPayloadRequest.m_controllerIndex = v6;
    Instance = DWServicesAccess::GetInstance();
    RedeemableCodes = DWServicesAccess::GetRedeemableCodes(Instance, v6);
    v15 = DWRedeemableCodes::redeemPayload(RedeemableCodes, &result, buffer, payload, payloadSignature, (bdRedeemCodeResult *)v8);
    bdReference<bdRemoteTask>::operator=(&this->m_redeemPayloadRequest.m_remoteDemonwareTask, v15);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    this->m_redeemPayloadRequest.m_onCompletionCallback = Online_RedeemablesCallback;
    m_ptr = this->m_redeemPayloadRequest.m_remoteDemonwareTask.m_ptr;
    if ( m_ptr )
    {
      if ( m_ptr->getStatus(m_ptr) == BD_PENDING )
      {
        v17 = TaskManager::GetInstance();
        if ( TaskManager::CreateTask(v17, &this->m_redeemPayloadRequest, &pTaskCreateResult) )
          return 1;
      }
    }
    v19 = this->m_redeemPayloadRequest.m_remoteDemonwareTask.m_ptr;
    if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v20 = this->m_redeemPayloadRequest.m_remoteDemonwareTask.m_ptr;
      if ( v20 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v20->~bdReferencable)(v20, 1i64);
    }
    this->m_redeemPayloadRequest.m_remoteDemonwareTask.m_ptr = NULL;
    v21 = (void (__fastcall ***)(_QWORD, __int64))(*(int *)(*(_QWORD *)(v8 + 8) + 4i64) + v8 + 8);
    (**v21)(v21, 1i64);
    Com_PrintError(25, "redeemCode for payload [%s] signature [%s] failed!\n", v9, v10);
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, "redemption_failed", LUI_luaVM) )
    {
      LUI_SetTableInt("controller", v6, LUI_luaVM);
      v22 = 7i64;
LABEL_33:
      LUI_SetTableInt("errorCode", v22, LUI_luaVM);
      LUI_SetTableBool("errorFailedToStart", 1, LUI_luaVM);
      LUI_SetTableBool("errorAlreadyRedeemed", 0, LUI_luaVM);
      LUI_SetTableBool("errorCodeExpired", 0, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  else
  {
    Com_PrintError(25, "redeemCode for payload [%s] signature [%s] failed due to Demonware Heap allocation failure for a bdRedeemCodeResult!\n", v9, v10);
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, "redemption_failed", LUI_luaVM) )
    {
      LUI_SetTableInt("controller", v6, LUI_luaVM);
      v22 = 8i64;
      goto LABEL_33;
    }
  }
  return 0;
}

/*
==============
Online_Redeemables::RegisterLuaFunctions
==============
*/
void Online_Redeemables::RegisterLuaFunctions(Online_Redeemables *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Redeemables", Redeemables_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_Redeemables::Uninit
==============
*/
void Online_Redeemables::Uninit(Online_Redeemables *this)
{
  ;
}

