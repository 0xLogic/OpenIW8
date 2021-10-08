/*
==============
R_UnlockGfxImmediateContext
==============
*/

void R_UnlockGfxImmediateContext(void)
{
  ?R_UnlockGfxImmediateContext@@YAXXZ();
}

/*
==============
R_LockIfGfxImmediateContext
==============
*/

void __fastcall R_LockIfGfxImmediateContext(const GfxDevice *device)
{
  ?R_LockIfGfxImmediateContext@@YAXPEBUGfxDevice@@@Z(device);
}

/*
==============
R_IsLockedIfGfxImmediateContext
==============
*/

bool __fastcall R_IsLockedIfGfxImmediateContext(const GfxDevice *device)
{
  return ?R_IsLockedIfGfxImmediateContext@@YA_NPEBUGfxDevice@@@Z(device);
}

/*
==============
R_UnlockIfGfxImmediateContext
==============
*/

void __fastcall R_UnlockIfGfxImmediateContext(const GfxDevice *device)
{
  ?R_UnlockIfGfxImmediateContext@@YAXPEBUGfxDevice@@@Z(device);
}

/*
==============
R_LockGfxImmediateContext
==============
*/

void R_LockGfxImmediateContext(void)
{
  ?R_LockGfxImmediateContext@@YAXXZ();
}

/*
==============
R_IsLockedGfxImmediateContext
==============
*/

bool __fastcall R_IsLockedGfxImmediateContext()
{
  return ?R_IsLockedGfxImmediateContext@@YA_NXZ();
}

/*
==============
R_IsLockedGfxImmediateContext
==============
*/
bool R_IsLockedGfxImmediateContext()
{
  return Sys_InCriticalSection(CRITSECT_GFX_IMMEDIATE_CONTEXT);
}

/*
==============
R_IsLockedIfGfxImmediateContext
==============
*/
bool R_IsLockedIfGfxImmediateContext(const GfxDevice *device)
{
  return device != g_dx.immediateContext || Sys_InCriticalSection(CRITSECT_GFX_IMMEDIATE_CONTEXT);
}

/*
==============
R_LockGfxImmediateContext
==============
*/
void R_LockGfxImmediateContext(void)
{
  int v0; 

  Sys_EnterCriticalSection(CRITSECT_GFX_IMMEDIATE_CONTEXT);
  v0 = s_gfxImmediateContextLockCount;
  if ( s_gfxImmediateContextLockCount < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 26, ASSERT_TYPE_ASSERT, "( s_gfxImmediateContextLockCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "s_gfxImmediateContextLockCount", "0", s_gfxImmediateContextLockCount, 0i64) )
      __debugbreak();
    v0 = s_gfxImmediateContextLockCount;
  }
  s_gfxImmediateContextLockCount = v0 + 1;
  if ( v0 )
  {
    if ( s_gfxImmediateContextLockThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 36, ASSERT_TYPE_ASSERT, "(s_gfxImmediateContextLockThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "s_gfxImmediateContextLockThreadId == Sys_GetCurrentThreadId()") )
      __debugbreak();
  }
  else
  {
    if ( s_gfxImmediateContextLockThreadId )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 31, ASSERT_TYPE_ASSERT, "(s_gfxImmediateContextLockThreadId == INVALID_THREAD_ID)", (const char *)&queryFormat, "s_gfxImmediateContextLockThreadId == INVALID_THREAD_ID") )
        __debugbreak();
    }
    s_gfxImmediateContextLockThreadId = Sys_GetCurrentThreadId();
  }
}

/*
==============
R_LockIfGfxImmediateContext
==============
*/
void R_LockIfGfxImmediateContext(const GfxDevice *device)
{
  int v1; 

  if ( device == g_dx.immediateContext )
  {
    Sys_EnterCriticalSection(CRITSECT_GFX_IMMEDIATE_CONTEXT);
    v1 = s_gfxImmediateContextLockCount;
    if ( s_gfxImmediateContextLockCount < 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 26, ASSERT_TYPE_ASSERT, "( s_gfxImmediateContextLockCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "s_gfxImmediateContextLockCount", "0", s_gfxImmediateContextLockCount, 0i64) )
        __debugbreak();
      v1 = s_gfxImmediateContextLockCount;
    }
    s_gfxImmediateContextLockCount = v1 + 1;
    if ( v1 )
    {
      if ( s_gfxImmediateContextLockThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 36, ASSERT_TYPE_ASSERT, "(s_gfxImmediateContextLockThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "s_gfxImmediateContextLockThreadId == Sys_GetCurrentThreadId()") )
        __debugbreak();
    }
    else
    {
      if ( s_gfxImmediateContextLockThreadId )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 31, ASSERT_TYPE_ASSERT, "(s_gfxImmediateContextLockThreadId == INVALID_THREAD_ID)", (const char *)&queryFormat, "s_gfxImmediateContextLockThreadId == INVALID_THREAD_ID") )
          __debugbreak();
      }
      s_gfxImmediateContextLockThreadId = Sys_GetCurrentThreadId();
    }
  }
}

/*
==============
R_UnlockGfxImmediateContext
==============
*/
void R_UnlockGfxImmediateContext(void)
{
  int v0; 
  threadId_t v1; 
  int v2; 
  int v3; 

  v0 = s_gfxImmediateContextLockCount;
  if ( s_gfxImmediateContextLockCount < 1 )
  {
    v3 = 1;
    v2 = s_gfxImmediateContextLockCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 45, ASSERT_TYPE_ASSERT, "( s_gfxImmediateContextLockCount ) >= ( 1 )", "%s >= %s\n\t%i, %i", "s_gfxImmediateContextLockCount", "1", v2, v3) )
      __debugbreak();
    v0 = s_gfxImmediateContextLockCount;
  }
  s_gfxImmediateContextLockCount = v0 - 1;
  if ( s_gfxImmediateContextLockThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 48, ASSERT_TYPE_ASSERT, "(s_gfxImmediateContextLockThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "s_gfxImmediateContextLockThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  v1 = s_gfxImmediateContextLockThreadId;
  if ( !s_gfxImmediateContextLockCount )
    v1 = 0;
  s_gfxImmediateContextLockThreadId = v1;
  Sys_LeaveCriticalSection(CRITSECT_GFX_IMMEDIATE_CONTEXT);
}

/*
==============
R_UnlockIfGfxImmediateContext
==============
*/
void R_UnlockIfGfxImmediateContext(const GfxDevice *device)
{
  int v1; 
  threadId_t v2; 
  int v3; 
  int v4; 

  if ( device == g_dx.immediateContext )
  {
    v1 = s_gfxImmediateContextLockCount;
    if ( s_gfxImmediateContextLockCount < 1 )
    {
      v4 = 1;
      v3 = s_gfxImmediateContextLockCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 45, ASSERT_TYPE_ASSERT, "( s_gfxImmediateContextLockCount ) >= ( 1 )", "%s >= %s\n\t%i, %i", "s_gfxImmediateContextLockCount", "1", v3, v4) )
        __debugbreak();
      v1 = s_gfxImmediateContextLockCount;
    }
    s_gfxImmediateContextLockCount = v1 - 1;
    if ( s_gfxImmediateContextLockThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.cpp", 48, ASSERT_TYPE_ASSERT, "(s_gfxImmediateContextLockThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "s_gfxImmediateContextLockThreadId == Sys_GetCurrentThreadId()") )
      __debugbreak();
    v2 = s_gfxImmediateContextLockThreadId;
    if ( !s_gfxImmediateContextLockCount )
      v2 = 0;
    s_gfxImmediateContextLockThreadId = v2;
    Sys_LeaveCriticalSection(CRITSECT_GFX_IMMEDIATE_CONTEXT);
  }
}

