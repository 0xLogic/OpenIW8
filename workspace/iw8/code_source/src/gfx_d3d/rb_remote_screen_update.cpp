/*
==============
RB_EndRemoteScreenUpdate
==============
*/

void RB_EndRemoteScreenUpdate(void)
{
  ?RB_EndRemoteScreenUpdate@@YAXXZ();
}

/*
==============
RB_CheckSkipRemoteScreenUpdate
==============
*/

void RB_CheckSkipRemoteScreenUpdate(void)
{
  ?RB_CheckSkipRemoteScreenUpdate@@YAXXZ();
}

/*
==============
RB_BeginRemoteScreenUpdate
==============
*/

void RB_BeginRemoteScreenUpdate(void)
{
  ?RB_BeginRemoteScreenUpdate@@YAXXZ();
}

/*
==============
RB_BeginRemoteScreenUpdate
==============
*/
void RB_BeginRemoteScreenUpdate(void)
{
  if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 12, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  if ( r_glob.screenUpdateNotify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 14, ASSERT_TYPE_ASSERT, "(!r_glob.screenUpdateNotify)", (const char *)&queryFormat, "!r_glob.screenUpdateNotify") )
    __debugbreak();
  r_glob.screenUpdateNotify = 1;
  if ( r_glob.isRenderingRemoteUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 17, ASSERT_TYPE_ASSERT, "(!r_glob.isRenderingRemoteUpdate)", (const char *)&queryFormat, "!r_glob.isRenderingRemoteUpdate") )
    __debugbreak();
  r_glob.isRenderingRemoteUpdate = 1;
  if ( r_glob.allowAddDrawCall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 21, ASSERT_TYPE_ASSERT, "(!r_glob.allowAddDrawCall)", (const char *)&queryFormat, "!r_glob.allowAddDrawCall") )
    __debugbreak();
}

/*
==============
RB_CheckSkipRemoteScreenUpdate
==============
*/
void RB_CheckSkipRemoteScreenUpdate(void)
{
  if ( r_glob.remoteScreenUpdateNesting )
  {
    if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 12, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
      __debugbreak();
    if ( r_glob.screenUpdateNotify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 14, ASSERT_TYPE_ASSERT, "(!r_glob.screenUpdateNotify)", (const char *)&queryFormat, "!r_glob.screenUpdateNotify") )
      __debugbreak();
    r_glob.screenUpdateNotify = 1;
    if ( r_glob.isRenderingRemoteUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 17, ASSERT_TYPE_ASSERT, "(!r_glob.isRenderingRemoteUpdate)", (const char *)&queryFormat, "!r_glob.isRenderingRemoteUpdate") )
      __debugbreak();
    r_glob.isRenderingRemoteUpdate = 1;
    if ( r_glob.allowAddDrawCall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 21, ASSERT_TYPE_ASSERT, "(!r_glob.allowAddDrawCall)", (const char *)&queryFormat, "!r_glob.allowAddDrawCall") )
      __debugbreak();
    do
      Sys_Sleep(1);
    while ( r_glob.remoteScreenUpdateNesting );
    if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 28, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
      __debugbreak();
    if ( !r_glob.isRenderingRemoteUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 32, ASSERT_TYPE_ASSERT, "(r_glob.isRenderingRemoteUpdate)", (const char *)&queryFormat, "r_glob.isRenderingRemoteUpdate") )
      __debugbreak();
    r_glob.isRenderingRemoteUpdate = 0;
    if ( r_glob.screenUpdateNotify )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 35, ASSERT_TYPE_ASSERT, "(!r_glob.screenUpdateNotify)", (const char *)&queryFormat, "!r_glob.screenUpdateNotify") )
        __debugbreak();
    }
    r_glob.screenUpdateNotify = 1;
  }
}

/*
==============
RB_EndRemoteScreenUpdate
==============
*/
void RB_EndRemoteScreenUpdate(void)
{
  if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 28, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  if ( !r_glob.isRenderingRemoteUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 32, ASSERT_TYPE_ASSERT, "(r_glob.isRenderingRemoteUpdate)", (const char *)&queryFormat, "r_glob.isRenderingRemoteUpdate") )
    __debugbreak();
  r_glob.isRenderingRemoteUpdate = 0;
  if ( r_glob.screenUpdateNotify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_remote_screen_update.cpp", 35, ASSERT_TYPE_ASSERT, "(!r_glob.screenUpdateNotify)", (const char *)&queryFormat, "!r_glob.screenUpdateNotify") )
    __debugbreak();
  r_glob.screenUpdateNotify = 1;
}

