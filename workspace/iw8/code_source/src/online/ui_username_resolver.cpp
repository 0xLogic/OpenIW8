/*
==============
UIUsernameResolver::ResolveCompleteCallback
==============
*/

void __fastcall UIUsernameResolver::ResolveCompleteCallback(GenericTask *task, eTaskManagerTaskState taskState)
{
  ?ResolveCompleteCallback@UIUsernameResolver@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, taskState);
}

/*
==============
UIUsernameResolver::QueueUsernameResolveRequest
==============
*/

bool __fastcall UIUsernameResolver::QueueUsernameResolveRequest(UIUsernameResolver *this, const int controllerIndex, const XUID *xuid, const char *luiCallbackName)
{
  return ?QueueUsernameResolveRequest@UIUsernameResolver@@QEAA_NHAEBUXUID@@PEBD@Z(this, controllerIndex, xuid, luiCallbackName);
}

/*
==============
UIUsernameResolver::GetInstance
==============
*/

UIUsernameResolver *__fastcall UIUsernameResolver::GetInstance()
{
  return ?GetInstance@UIUsernameResolver@@SAAEAV1@XZ();
}

/*
==============
UIUsernameResolver::Cleanup
==============
*/

void __fastcall UIUsernameResolver::Cleanup(UIUsernameResolver *this)
{
  ?Cleanup@UIUsernameResolver@@AEAAXXZ(this);
}

/*
==============
UIUsernameResolver::Cleanup
==============
*/
void UIUsernameResolver::Cleanup(UIUsernameResolver *this)
{
  bdGetCrossPlatformUsernamesResponse *m_response; 

  this->m_luiCallbackName[0] = 0;
  this->m_resolver.m_numXuids = 0;
  this->m_resolver.m_taskId = 0;
  m_response = this->m_resolver.m_response;
  if ( m_response )
    ((void (__fastcall *)(bdGetCrossPlatformUsernamesResponse *, __int64))m_response->~bdRESTResponse)(m_response, 1i64);
  this->m_resolver.m_response = NULL;
}

/*
==============
UIUsernameResolver::GetInstance
==============
*/
UIUsernameResolver *UIUsernameResolver::GetInstance()
{
  return &UIUsernameResolver::s_instance;
}

/*
==============
UIUsernameResolver::QueueUsernameResolveRequest
==============
*/
bool UIUsernameResolver::QueueUsernameResolveRequest(UIUsernameResolver *this, const int controllerIndex, const XUID *xuid, const char *luiCallbackName)
{
  __int64 m_numXuids; 
  TaskCreateRequest v12; 
  int v13; 
  int v14; 
  UIUsernameResolver *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  void (__fastcall *v19)(GenericTask *, eTaskManagerTaskState); 
  __int64 v20; 
  char v21; 
  int v22; 
  __int64 v23; 

  v23 = -2i64;
  if ( Sys_Milliseconds() >= this->m_nextRequestTime )
  {
    if ( this->m_resolver.m_taskId )
    {
      Com_PrintError(25, "UI User ID Resolver is busy, can't handle another request yet.\n");
      return 0;
    }
    else
    {
      if ( this->m_resolver.m_numXuids > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\ui_username_resolver.cpp", 45, ASSERT_TYPE_SANITY, "( !m_resolver.IsFull() )", (const char *)&queryFormat, "!m_resolver.IsFull()") )
        __debugbreak();
      Core_strcpy(this->m_luiCallbackName, 0x40ui64, luiCallbackName);
      if ( this->m_resolver.m_numXuids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 87, ASSERT_TYPE_SANITY, "( m_numXuids < MAX_REQUESTS )", (const char *)&queryFormat, "m_numXuids < MAX_REQUESTS") )
        __debugbreak();
      if ( this->m_resolver.m_taskId )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 88, ASSERT_TYPE_SANITY, "( !IsBusy() )", (const char *)&queryFormat, "!IsBusy()") )
          __debugbreak();
      }
      m_numXuids = this->m_resolver.m_numXuids;
      this->m_resolver.m_numXuids = m_numXuids + 1;
      XUID::operator=(&this->m_resolver.m_xuids[m_numXuids], xuid);
      v17 = 0i64;
      v18 = 0i64;
      v14 = -1;
      v16 = 0i64;
      v20 = 0i64;
      v21 = 1;
      v22 = 0;
      v13 = controllerIndex;
      v19 = UIUsernameResolver::ResolveCompleteCallback;
      v15 = this;
      v12.m_controllerIndex = controllerIndex;
      v12.m_appTaskType = -1;
      v12.m_appData = this;
      v12.m_appSecondaryCallback = NULL;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v12.m_asyncInfo = _XMM0;
      v12.m_onCompletionCallback = UIUsernameResolver::ResolveCompleteCallback;
      v12.m_onUpdateCallback = NULL;
      v12.m_cancelTaskOnSignoutEvent = 1;
      v12.m_timeoutInSeconds = 0;
      return UsernameResolver<1>::Send(&this->m_resolver, &v12);
    }
  }
  else
  {
    Com_PrintError(25, "Too many User ID resove requests sent by UI, throttling.\n");
    return 0;
  }
}

/*
==============
UIUsernameResolver::ResolveCompleteCallback
==============
*/
void UIUsernameResolver::ResolveCompleteCallback(GenericTask *task, eTaskManagerTaskState taskState)
{
  _DWORD *m_appData; 
  bool v5; 
  bdGetCrossPlatformUsernamesResponse *v6; 
  bdGetCrossPlatformUsernamesResponse *v7; 
  unsigned int NumUsers; 
  bdGetCrossPlatformUsernamesResponse *v9; 
  unsigned int v10; 
  bdUserDetails *User; 
  lua_State *v12; 
  LocalClientNum_t ClientFromController; 
  lua_State *v14; 
  const char *v15; 
  void (__fastcall ***v16)(_QWORD, __int64); 
  const dvar_t *v17; 
  unsigned int flags; 
  int integer; 
  __int64 v20; 
  __int64 v21; 
  XUID v22; 
  char usernameWithHash[112]; 

  m_appData = task->m_appData;
  if ( (_DWORD *)(((unsigned __int64)m_appData + 7) & 0xFFFFFFFFFFFFFFF8ui64) != m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 300, ASSERT_TYPE_ASSERT, "( I_align( addr, dest_align ) == addr )", "src pointer %p must be aligned to %llu to cast to this type", m_appData, 8i64) )
    __debugbreak();
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\ui_username_resolver.cpp", 63, ASSERT_TYPE_SANITY, "( uiResolver != nullptr )", (const char *)&queryFormat, "uiResolver != nullptr") )
    __debugbreak();
  if ( m_appData[18] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\ui_username_resolver.cpp", 66, ASSERT_TYPE_SANITY, "( resolver->XuidCount() == 1 )", (const char *)&queryFormat, "resolver->XuidCount() == 1") )
    __debugbreak();
  v5 = 0;
  v22.m_id = *((_QWORD *)m_appData + 10);
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) > 1 )
      Com_PrintError(25, "Unhandled task state in %s.\n", "UIUsernameResolver::ResolveCompleteCallback");
    goto LABEL_28;
  }
  v6 = (bdGetCrossPlatformUsernamesResponse *)*((_QWORD *)m_appData + 11);
  if ( (!v6 || bdGetCrossPlatformUsernamesResponse::getNumUsers(v6) != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\ui_username_resolver.cpp", 75, ASSERT_TYPE_SANITY, "( resolver->NumResults() == 1 )", (const char *)&queryFormat, "resolver->NumResults() == 1") )
    __debugbreak();
  v7 = (bdGetCrossPlatformUsernamesResponse *)*((_QWORD *)m_appData + 11);
  if ( !v7 )
    goto LABEL_21;
  NumUsers = bdGetCrossPlatformUsernamesResponse::getNumUsers(v7);
  v9 = (bdGetCrossPlatformUsernamesResponse *)*((_QWORD *)m_appData + 11);
  if ( !NumUsers )
  {
    if ( v9 )
    {
      v10 = bdGetCrossPlatformUsernamesResponse::getNumUsers(v9);
      goto LABEL_22;
    }
LABEL_21:
    v10 = 0;
LABEL_22:
    LODWORD(v21) = v10;
    LODWORD(v20) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 118, ASSERT_TYPE_SANITY, "(unsigned)( index ) < (unsigned)( NumResults() )", "index doesn't index NumResults()\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( !*((_QWORD *)m_appData + 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 120, ASSERT_TYPE_SANITY, "( m_response )", (const char *)&queryFormat, "m_response") )
    __debugbreak();
  User = bdGetCrossPlatformUsernamesResponse::getUser(*((bdGetCrossPlatformUsernamesResponse **)m_appData + 11), 0);
  bdUserDetails::getUsernameWithHash(User, usernameWithHash);
  v5 = 1;
LABEL_28:
  v12 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(task->m_controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, (const char *)m_appData + 4, v12) )
  {
    LUI_BeginTable("results", 0, 2, LUI_luaVM);
    LUI_SetTableBool("success", v5, LUI_luaVM);
    v14 = LUI_luaVM;
    v15 = XUID::ToString(&v22);
    LUI_SetTableString("xuid", v15, v14);
    LUI_SetTableString("username", usernameWithHash, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  *((_BYTE *)m_appData + 4) = 0;
  v16 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)m_appData + 11);
  m_appData[18] = 0;
  m_appData[24] = 0;
  if ( v16 )
    (**v16)(v16, 1i64);
  *((_QWORD *)m_appData + 11) = 0i64;
  v17 = DVARINT_ui_username_resolve_throttle_ms;
  if ( !DVARINT_ui_username_resolve_throttle_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_username_resolve_throttle_ms") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v17->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v17->name) )
      __debugbreak();
  }
  integer = v17->current.integer;
  *m_appData = integer + Sys_Milliseconds();
}

