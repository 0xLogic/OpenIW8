/*
==============
R_ClearRemoteScreenUpdateNoClScreenUpdateFlag
==============
*/

void R_ClearRemoteScreenUpdateNoClScreenUpdateFlag(void)
{
  ?R_ClearRemoteScreenUpdateNoClScreenUpdateFlag@@YAXXZ();
}

/*
==============
R_PushRemoteScreenUpdateDisableQuitCheck
==============
*/

void R_PushRemoteScreenUpdateDisableQuitCheck(void)
{
  ?R_PushRemoteScreenUpdateDisableQuitCheck@@YAXXZ();
}

/*
==============
R_BeginRemoteScreenUpdateWithAnimatedTexture
==============
*/

void R_BeginRemoteScreenUpdateWithAnimatedTexture(void)
{
  ?R_BeginRemoteScreenUpdateWithAnimatedTexture@@YAXXZ();
}

/*
==============
R_IsInRemoteScreenUpdate
==============
*/

int __fastcall R_IsInRemoteScreenUpdate()
{
  return ?R_IsInRemoteScreenUpdate@@YAHXZ();
}

/*
==============
R_EndRemoteScreenUpdateNoClScreenUpdate
==============
*/

void R_EndRemoteScreenUpdateNoClScreenUpdate(void)
{
  ?R_EndRemoteScreenUpdateNoClScreenUpdate@@YAXXZ();
}

/*
==============
R_PopRemoteScreenUpdateDisableQuitCheck
==============
*/

void R_PopRemoteScreenUpdateDisableQuitCheck(void)
{
  ?R_PopRemoteScreenUpdateDisableQuitCheck@@YAXXZ();
}

/*
==============
R_BeginRemoteScreenUpdateNoClScreenUpdate
==============
*/

void R_BeginRemoteScreenUpdateNoClScreenUpdate(void)
{
  ?R_BeginRemoteScreenUpdateNoClScreenUpdate@@YAXXZ();
}

/*
==============
R_DisableRemoteScreenUpdate
==============
*/

void __fastcall R_DisableRemoteScreenUpdate(bool isDisabled)
{
  ?R_DisableRemoteScreenUpdate@@YAX_N@Z(isDisabled);
}

/*
==============
R_BeginRemoteScreenUpdate
==============
*/

void R_BeginRemoteScreenUpdate(void)
{
  ?R_BeginRemoteScreenUpdate@@YAXXZ();
}

/*
==============
R_PopRemoteScreenUpdate
==============
*/

int __fastcall R_PopRemoteScreenUpdate()
{
  return ?R_PopRemoteScreenUpdate@@YAHXZ();
}

/*
==============
R_ClearRemoteScreenUpdateAnimatedTextureFlag
==============
*/

void R_ClearRemoteScreenUpdateAnimatedTextureFlag(void)
{
  ?R_ClearRemoteScreenUpdateAnimatedTextureFlag@@YAXXZ();
}

/*
==============
R_EndRemoteScreenUpdateWithAnimatedTexture
==============
*/

void R_EndRemoteScreenUpdateWithAnimatedTexture(void)
{
  ?R_EndRemoteScreenUpdateWithAnimatedTexture@@YAXXZ();
}

/*
==============
R_PushRemoteScreenUpdate
==============
*/

void __fastcall R_PushRemoteScreenUpdate(int remoteScreenUpdateNesting)
{
  ?R_PushRemoteScreenUpdate@@YAXH@Z(remoteScreenUpdateNesting);
}

/*
==============
R_EndRemoteScreenUpdate
==============
*/

void R_EndRemoteScreenUpdate(void)
{
  ?R_EndRemoteScreenUpdate@@YAXXZ();
}

/*
==============
R_BeginRemoteScreenUpdate
==============
*/
void R_BeginRemoteScreenUpdate(void)
{
  if ( Sys_IsMainThread() )
  {
    if ( r_glob.allowAddDrawCall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 72, ASSERT_TYPE_ASSERT, "(!r_glob.allowAddDrawCall)", (const char *)&queryFormat, "!r_glob.allowAddDrawCall") )
      __debugbreak();
    if ( r_glob.isRemoteUpdateDisabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 74, ASSERT_TYPE_ASSERT, "( !r_glob.isRemoteUpdateDisabled )", "Remote screen update called while explicitly not allowed") )
      __debugbreak();
    if ( r_glob.remoteScreenUpdateNesting < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 75, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting >= 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting >= 0") )
      __debugbreak();
    if ( com_isQuitting )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 79, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Remote Rendering during the shutdown of the game will cause issues, such as updating system that should be shutdown") )
        __debugbreak();
    }
    else if ( r_glob.startedRenderThread )
    {
      if ( r_glob.remoteScreenUpdateNesting )
      {
        ++r_glob.remoteScreenUpdateNesting;
      }
      else
      {
        if ( r_glob.screenUpdateNotify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 97, ASSERT_TYPE_ASSERT, "(!r_glob.screenUpdateNotify)", (const char *)&queryFormat, "!r_glob.screenUpdateNotify") )
          __debugbreak();
        ++r_glob.remoteScreenUpdateNesting;
        R_ReleaseThreadOwnership();
        Sys_NotifyRenderer();
      }
    }
  }
}

/*
==============
R_BeginRemoteScreenUpdateNoClScreenUpdate
==============
*/
void R_BeginRemoteScreenUpdateNoClScreenUpdate(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 235, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( r_glob.rsuNoClScreenUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 236, ASSERT_TYPE_ASSERT, "(r_glob.rsuNoClScreenUpdate == qfalse)", (const char *)&queryFormat, "r_glob.rsuNoClScreenUpdate == qfalse") )
    __debugbreak();
  r_glob.rsuNoClScreenUpdate = 1;
  R_BeginRemoteScreenUpdate();
}

/*
==============
R_BeginRemoteScreenUpdateWithAnimatedTexture
==============
*/
void R_BeginRemoteScreenUpdateWithAnimatedTexture(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 261, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  ++r_glob.rsuPlayAnimatedTexture;
  R_BeginRemoteScreenUpdate();
}

/*
==============
R_ClearRemoteScreenUpdateAnimatedTextureFlag
==============
*/
void R_ClearRemoteScreenUpdateAnimatedTextureFlag(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 278, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( r_glob.remoteScreenUpdateNesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 279, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting == 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting == 0") )
    __debugbreak();
  r_glob.rsuPlayAnimatedTexture = 0;
}

/*
==============
R_ClearRemoteScreenUpdateNoClScreenUpdateFlag
==============
*/
void R_ClearRemoteScreenUpdateNoClScreenUpdateFlag(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 253, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( r_glob.remoteScreenUpdateNesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 254, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting == 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting == 0") )
    __debugbreak();
  r_glob.rsuNoClScreenUpdate = 0;
}

/*
==============
R_DisableRemoteScreenUpdate
==============
*/
void R_DisableRemoteScreenUpdate(bool isDisabled)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 22, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( r_glob.remoteScreenUpdateNesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 23, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting == 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting == 0") )
    __debugbreak();
  if ( isDisabled && r_glob.isRemoteUpdateDisabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 24, ASSERT_TYPE_ASSERT, "( !isDisabled || !r_glob.isRemoteUpdateDisabled )", "Nesting calls to disable RemoteScreenUpdates are not allowed") )
    __debugbreak();
  r_glob.isRemoteUpdateDisabled = isDisabled;
}

/*
==============
R_EndRemoteScreenUpdate
==============
*/
void R_EndRemoteScreenUpdate(void)
{
  if ( Sys_IsMainThread() )
  {
    if ( r_glob.isRemoteUpdateDisabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 120, ASSERT_TYPE_ASSERT, "( !r_glob.isRemoteUpdateDisabled )", "Remote screen update called while explicitly not allowed") )
      __debugbreak();
    if ( r_glob.remoteScreenUpdateNesting < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 121, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting >= 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting >= 0") )
      __debugbreak();
    if ( !com_isQuitting )
    {
      if ( r_glob.startedRenderThread )
      {
        if ( r_glob.remoteScreenUpdateNesting <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 139, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting > 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting > 0") )
          __debugbreak();
        if ( r_glob.remoteScreenUpdateNesting == 1 )
        {
          R_WaitScreenUpdateNotify();
          r_glob.screenUpdateNotify = 0;
          if ( r_glob.remoteScreenUpdateNesting <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 156, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting > 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting > 0") )
            __debugbreak();
          --r_glob.remoteScreenUpdateNesting;
          R_WaitScreenUpdateNotify();
          r_glob.screenUpdateNotify = 0;
        }
        else
        {
          --r_glob.remoteScreenUpdateNesting;
        }
      }
      else if ( r_glob.remoteScreenUpdateNesting )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 135, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting == 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting == 0") )
          __debugbreak();
      }
    }
  }
}

/*
==============
R_EndRemoteScreenUpdateNoClScreenUpdate
==============
*/
void R_EndRemoteScreenUpdateNoClScreenUpdate(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 244, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !r_glob.rsuNoClScreenUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 245, ASSERT_TYPE_ASSERT, "(r_glob.rsuNoClScreenUpdate)", (const char *)&queryFormat, "r_glob.rsuNoClScreenUpdate") )
    __debugbreak();
  R_EndRemoteScreenUpdate();
  r_glob.rsuNoClScreenUpdate = 0;
}

/*
==============
R_EndRemoteScreenUpdateWithAnimatedTexture
==============
*/
void R_EndRemoteScreenUpdateWithAnimatedTexture(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 269, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !r_glob.rsuPlayAnimatedTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 270, ASSERT_TYPE_ASSERT, "(r_glob.rsuPlayAnimatedTexture)", (const char *)&queryFormat, "r_glob.rsuPlayAnimatedTexture") )
    __debugbreak();
  R_EndRemoteScreenUpdate();
  --r_glob.rsuPlayAnimatedTexture;
}

/*
==============
R_IsInRemoteScreenUpdate
==============
*/
_BOOL8 R_IsInRemoteScreenUpdate()
{
  if ( Sys_IsMainThread() )
    return r_glob.remoteScreenUpdateNesting != 0;
  if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 214, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  return r_glob.isRenderingRemoteUpdate;
}

/*
==============
R_PopRemoteScreenUpdate
==============
*/
__int64 R_PopRemoteScreenUpdate()
{
  volatile int remoteScreenUpdateNesting; 
  __int64 v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 192, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  remoteScreenUpdateNesting = r_glob.remoteScreenUpdateNesting;
  while ( r_glob.remoteScreenUpdateNesting )
  {
    if ( Sys_IsMainThread() )
    {
      if ( r_glob.isRemoteUpdateDisabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 120, ASSERT_TYPE_ASSERT, "( !r_glob.isRemoteUpdateDisabled )", "Remote screen update called while explicitly not allowed") )
        __debugbreak();
      if ( r_glob.remoteScreenUpdateNesting < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 121, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting >= 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting >= 0") )
        __debugbreak();
      if ( !com_isQuitting )
      {
        if ( r_glob.startedRenderThread )
        {
          if ( r_glob.remoteScreenUpdateNesting <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 139, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting > 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting > 0") )
            __debugbreak();
          if ( r_glob.remoteScreenUpdateNesting == 1 )
          {
            if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 33, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
              __debugbreak();
            while ( !r_glob.screenUpdateNotify )
            {
              DB_PushMainThreadBlocked();
              if ( !s_rsuDisableQuitCheck )
                Sys_CheckQuitRequest();
              Sys_Sleep(1);
              DB_PopMainThreadBlocked();
            }
            r_glob.screenUpdateNotify = 0;
            if ( r_glob.remoteScreenUpdateNesting <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 156, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting > 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting > 0") )
              __debugbreak();
            --r_glob.remoteScreenUpdateNesting;
            if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 33, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
              __debugbreak();
            while ( !r_glob.screenUpdateNotify )
            {
              DB_PushMainThreadBlocked();
              if ( !s_rsuDisableQuitCheck )
                Sys_CheckQuitRequest();
              Sys_Sleep(1);
              DB_PopMainThreadBlocked();
            }
            r_glob.screenUpdateNotify = 0;
          }
          else
          {
            --r_glob.remoteScreenUpdateNesting;
          }
        }
        else if ( r_glob.remoteScreenUpdateNesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 135, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting == 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting == 0") )
        {
          __debugbreak();
        }
      }
    }
  }
  if ( remoteScreenUpdateNesting < 0 )
  {
    LODWORD(v2) = remoteScreenUpdateNesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 201, ASSERT_TYPE_ASSERT, "( ( remoteScreenUpdateNesting >= 0 ) )", "( remoteScreenUpdateNesting ) = %i", v2) )
      __debugbreak();
  }
  return (unsigned int)remoteScreenUpdateNesting;
}

/*
==============
R_PopRemoteScreenUpdateDisableQuitCheck
==============
*/
void R_PopRemoteScreenUpdateDisableQuitCheck(void)
{
  if ( ((unsigned __int8)&s_rsuDisableQuitCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_rsuDisableQuitCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_rsuDisableQuitCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 229, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_rsuDisableQuitCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_rsuDisableQuitCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
R_PushRemoteScreenUpdate
==============
*/
void R_PushRemoteScreenUpdate(int remoteScreenUpdateNesting)
{
  bool v2; 
  __int64 v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 176, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = remoteScreenUpdateNesting == 0;
  if ( remoteScreenUpdateNesting < 0 )
  {
    LODWORD(v3) = remoteScreenUpdateNesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 177, ASSERT_TYPE_ASSERT, "( ( remoteScreenUpdateNesting >= 0 ) )", "( remoteScreenUpdateNesting ) = %i", v3) )
      __debugbreak();
    v2 = remoteScreenUpdateNesting == 0;
  }
  if ( !v2 )
  {
    do
    {
      if ( Sys_IsMainThread() )
      {
        if ( r_glob.allowAddDrawCall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 72, ASSERT_TYPE_ASSERT, "(!r_glob.allowAddDrawCall)", (const char *)&queryFormat, "!r_glob.allowAddDrawCall") )
          __debugbreak();
        if ( r_glob.isRemoteUpdateDisabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 74, ASSERT_TYPE_ASSERT, "( !r_glob.isRemoteUpdateDisabled )", "Remote screen update called while explicitly not allowed") )
          __debugbreak();
        if ( r_glob.remoteScreenUpdateNesting < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 75, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting >= 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting >= 0") )
          __debugbreak();
        if ( com_isQuitting )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 79, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Remote Rendering during the shutdown of the game will cause issues, such as updating system that should be shutdown") )
            __debugbreak();
        }
        else if ( r_glob.startedRenderThread )
        {
          if ( r_glob.remoteScreenUpdateNesting )
          {
            ++r_glob.remoteScreenUpdateNesting;
          }
          else
          {
            if ( r_glob.screenUpdateNotify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 97, ASSERT_TYPE_ASSERT, "(!r_glob.screenUpdateNotify)", (const char *)&queryFormat, "!r_glob.screenUpdateNotify") )
              __debugbreak();
            ++r_glob.remoteScreenUpdateNesting;
            R_ReleaseThreadOwnership();
            Sys_NotifyRenderer();
          }
        }
      }
      --remoteScreenUpdateNesting;
    }
    while ( remoteScreenUpdateNesting );
  }
}

/*
==============
R_PushRemoteScreenUpdateDisableQuitCheck
==============
*/
void R_PushRemoteScreenUpdateDisableQuitCheck(void)
{
  if ( ((unsigned __int8)&s_rsuDisableQuitCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_rsuDisableQuitCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_rsuDisableQuitCheck, 1, 0) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 223, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_rsuDisableQuitCheck, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_rsuDisableQuitCheck, 1, 0 ) == 0") )
      __debugbreak();
  }
}

/*
==============
R_WaitScreenUpdateNotify
==============
*/
__int64 R_WaitScreenUpdateNotify()
{
  __int64 result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_remote_screen_update.cpp", 33, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  for ( result = (unsigned int)r_glob.screenUpdateNotify; !r_glob.screenUpdateNotify; result = (unsigned int)r_glob.screenUpdateNotify )
  {
    DB_PushMainThreadBlocked();
    if ( !s_rsuDisableQuitCheck )
      Sys_CheckQuitRequest();
    Sys_Sleep(1);
    DB_PopMainThreadBlocked();
  }
  return result;
}

