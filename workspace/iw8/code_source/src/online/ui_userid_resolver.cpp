/*
==============
UIUserIdResolver::QueuePlatformIdResolveRequest
==============
*/

bool __fastcall UIUserIdResolver::QueuePlatformIdResolveRequest(UIUserIdResolver *this, const int controllerIndex, const XUID *xuid, const char *luiCallbackName)
{
  return ?QueuePlatformIdResolveRequest@UIUserIdResolver@@QEAA_NHAEBUXUID@@PEBD@Z(this, controllerIndex, xuid, luiCallbackName);
}

/*
==============
UIUserIdResolver::Cleanup
==============
*/

void __fastcall UIUserIdResolver::Cleanup(UIUserIdResolver *this)
{
  ?Cleanup@UIUserIdResolver@@AEAAXXZ(this);
}

/*
==============
UIUserIdResolver::GetInstance
==============
*/

UIUserIdResolver *__fastcall UIUserIdResolver::GetInstance()
{
  return ?GetInstance@UIUserIdResolver@@SAAEAV1@XZ();
}

/*
==============
UIUserIdResolver::ResolveCompleteCallback
==============
*/

void __fastcall UIUserIdResolver::ResolveCompleteCallback(GenericTask *task, eTaskManagerTaskState taskState)
{
  ?ResolveCompleteCallback@UIUserIdResolver@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, taskState);
}

/*
==============
UIUserIdResolver::Cleanup
==============
*/
void UIUserIdResolver::Cleanup(UIUserIdResolver *this)
{
  this->m_luiCallbackName[0] = 0;
  this->m_resolver.m_numXuids = 0;
  this->m_resolver.m_numPlatformIds = 0;
  this->m_resolver.m_taskId = 0;
}

/*
==============
UIUserIdResolver::GetInstance
==============
*/
UIUserIdResolver *UIUserIdResolver::GetInstance()
{
  return &UIUserIdResolver::s_instance;
}

/*
==============
UIUserIdResolver::QueuePlatformIdResolveRequest
==============
*/
bool UIUserIdResolver::QueuePlatformIdResolveRequest(UIUserIdResolver *this, const int controllerIndex, const XUID *xuid, const char *luiCallbackName)
{
  __int64 m_numXuids; 

  if ( Sys_Milliseconds() >= this->m_nextRequestTime )
  {
    if ( this->m_resolver.m_taskId )
    {
      Com_PrintError(25, "UI User ID Resolver is busy, can't handle another request yet.\n");
      return 0;
    }
    else
    {
      if ( (this->m_resolver.m_numPlatformIds || this->m_resolver.m_numXuids) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\ui_userid_resolver.cpp", 46, ASSERT_TYPE_SANITY, "( !m_resolver.IsFull() )", (const char *)&queryFormat, "!m_resolver.IsFull()") )
        __debugbreak();
      Core_strcpy(this->m_luiCallbackName, 0x40ui64, luiCallbackName);
      if ( this->m_resolver.m_numXuids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 102, ASSERT_TYPE_SANITY, "( m_numXuids < MAX_REQUESTS )", (const char *)&queryFormat, "m_numXuids < MAX_REQUESTS") )
        __debugbreak();
      if ( this->m_resolver.m_numPlatformIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 103, ASSERT_TYPE_SANITY, "(m_numPlatformIds == 0)", "%s\n\t\"Trying to mix xuids and platformIds in one Resolver Task Data, the DW code won't know how to handle this.\"", "m_numPlatformIds == 0") )
        __debugbreak();
      if ( this->m_resolver.m_taskId )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 104, ASSERT_TYPE_SANITY, "( !IsBusy() )", (const char *)&queryFormat, "!IsBusy()") )
          __debugbreak();
      }
      m_numXuids = this->m_resolver.m_numXuids;
      this->m_resolver.m_numXuids = m_numXuids + 1;
      XUID::operator=(&this->m_resolver.m_xuids[m_numXuids], xuid);
      return UserIdResolver<1>::Send(&this->m_resolver, controllerIndex, UIUserIdResolver::ResolveCompleteCallback);
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
UIUserIdResolver::ResolveCompleteCallback
==============
*/
void UIUserIdResolver::ResolveCompleteCallback(GenericTask *task, eTaskManagerTaskState taskState)
{
  bool v2; 
  unsigned __int64 v5; 
  lua_State *v6; 
  LocalClientNum_t ClientFromController; 
  lua_State *v8; 
  const char *v9; 
  const dvar_t *v10; 
  unsigned int flags; 
  int integer; 
  __int64 v13; 
  __int64 v14; 
  XUID v15; 
  char dest[21]; 

  v2 = 0;
  v5 = 0i64;
  if ( UIUserIdResolver::s_instance.m_resolver.m_numXuids != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\ui_userid_resolver.cpp", 65, ASSERT_TYPE_SANITY, "( resolver.XuidCount() == 1 )", (const char *)&queryFormat, "resolver.XuidCount() == 1") )
    __debugbreak();
  if ( !UIUserIdResolver::s_instance.m_resolver.m_numXuids )
  {
    LODWORD(v13) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numXuids )", "index doesn't index m_numXuids\n\t%i not in [0, %i)", v13, UIUserIdResolver::s_instance.m_resolver.m_numXuids) )
      __debugbreak();
  }
  v15.m_id = UIUserIdResolver::s_instance.m_resolver.m_xuids[0].m_id;
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) > 1 )
      Com_PrintError(25, "Unhandled task state in %s.\n", "UIUserIdResolver::ResolveCompleteCallback");
  }
  else
  {
    if ( UIUserIdResolver::s_instance.m_resolver.m_numPlatformIds != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\ui_userid_resolver.cpp", 71, ASSERT_TYPE_SANITY, "( resolver.PlatformIdCount() == 1 )", (const char *)&queryFormat, "resolver.PlatformIdCount() == 1") )
      __debugbreak();
    if ( !UIUserIdResolver::s_instance.m_resolver.m_numPlatformIds )
    {
      LODWORD(v14) = UIUserIdResolver::s_instance.m_resolver.m_numPlatformIds;
      LODWORD(v13) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numPlatformIds )", "index doesn't index m_numPlatformIds\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v5 = UIUserIdResolver::s_instance.m_resolver.m_platformIds[0];
    v2 = 1;
  }
  Com_sprintf<21>((char (*)[21])dest, "%zu", v5);
  v6 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(task->m_controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, UIUserIdResolver::s_instance.m_luiCallbackName, v6) )
  {
    LUI_BeginTable("results", 0, 2, LUI_luaVM);
    LUI_SetTableBool("success", v2, LUI_luaVM);
    v8 = LUI_luaVM;
    v9 = XUID::ToString(&v15);
    LUI_SetTableString("xuid", v9, v8);
    LUI_SetTableString("platformID", dest, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  v10 = DVARINT_ui_userid_resolve_throttle_ms;
  UIUserIdResolver::s_instance.m_luiCallbackName[0] = 0;
  UIUserIdResolver::s_instance.m_resolver.m_numXuids = 0;
  UIUserIdResolver::s_instance.m_resolver.m_numPlatformIds = 0;
  UIUserIdResolver::s_instance.m_resolver.m_taskId = 0;
  if ( !DVARINT_ui_userid_resolve_throttle_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_userid_resolve_throttle_ms") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v10->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v10->name) )
      __debugbreak();
  }
  integer = v10->current.integer;
  UIUserIdResolver::s_instance.m_nextRequestTime = integer + Sys_Milliseconds();
}

