/*
==============
R_RT_Common_Startup
==============
*/

void R_RT_Common_Startup(void)
{
  ?R_RT_Common_Startup@@YAXXZ();
}

/*
==============
R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry
==============
*/

void __fastcall R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(R_RT_AllocationLockSentry *this)
{
  ??1R_RT_AllocationLockSentry@@QEAA@XZ(this);
}

/*
==============
R_RT_HaveAllocationLock
==============
*/

bool __fastcall R_RT_HaveAllocationLock()
{
  return ?R_RT_HaveAllocationLock@@YA_NXZ();
}

/*
==============
R_RT_GetFrontendFramePass
==============
*/

unsigned __int16 __fastcall R_RT_GetFrontendFramePass()
{
  return ?R_RT_GetFrontendFramePass@@YAGXZ();
}

/*
==============
R_RT_AllocationLockSentry::R_RT_AllocationLockSentry
==============
*/

void __fastcall R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(R_RT_AllocationLockSentry *this)
{
  ??0R_RT_AllocationLockSentry@@QEAA@XZ(this);
}

/*
==============
R_RT_Common_Shutdown
==============
*/

void R_RT_Common_Shutdown(void)
{
  ?R_RT_Common_Shutdown@@YAXXZ();
}

/*
==============
R_RT_NewFrontendPass
==============
*/

unsigned __int16 __fastcall R_RT_NewFrontendPass()
{
  return ?R_RT_NewFrontendPass@@YAGXZ();
}

/*
==============
R_RT_EndFrontendFrame
==============
*/

void R_RT_EndFrontendFrame(void)
{
  ?R_RT_EndFrontendFrame@@YAXXZ();
}

/*
==============
R_RT_AllocationLockSentry::R_RT_AllocationLockSentry
==============
*/
void R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(R_RT_AllocationLockSentry *this)
{
  for ( *this = 0; R_IsLockedGfxImmediateContext(); ++this->gfxImmediateContextLockCount )
  {
    R_UnlockGfxImmediateContext();
    if ( this->gfxImmediateContextLockCount == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 90, ASSERT_TYPE_ASSERT, "(gfxImmediateContextLockCount < ( 1 << ( sizeof( gfxImmediateContextLockCount ) * 8 ) ) - 1)", (const char *)&queryFormat, "gfxImmediateContextLockCount < ( 1 << ( sizeof( gfxImmediateContextLockCount ) * 8 ) ) - 1") )
      __debugbreak();
  }
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( R_RT_HaveAllocationLock() )
  {
    this->locked = 0;
  }
  else
  {
    Sys_LockWrite(&s_R_RT_common.m_allocationMutex);
    if ( s_R_RT_common.m_allocationLockMode )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 104, ASSERT_TYPE_ASSERT, "(s_R_RT_common.m_allocationLockMode == R_RT_AllocationLockMode_Unlocked)", (const char *)&queryFormat, "s_R_RT_common.m_allocationLockMode == R_RT_AllocationLockMode_Unlocked") )
        __debugbreak();
    }
    s_R_RT_common.m_allocationLockMode = R_RT_GetThreadAllocationLockMode();
    this->locked = 1;
  }
}

/*
==============
R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry
==============
*/
void R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(R_RT_AllocationLockSentry *this)
{
  int gfxImmediateContextLockCount; 
  volatile int writeCount; 
  int v5; 
  TempThreadPriority tempPriority; 

  if ( this->locked )
  {
    if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 69, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
      __debugbreak();
    if ( s_R_RT_common.m_allocationLockMode != Sys_IsRenderThread() + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 115, ASSERT_TYPE_ASSERT, "(s_R_RT_common.m_allocationLockMode == R_RT_GetThreadAllocationLockMode())", (const char *)&queryFormat, "s_R_RT_common.m_allocationLockMode == R_RT_GetThreadAllocationLockMode()") )
      __debugbreak();
    s_R_RT_common.m_allocationLockMode = R_RT_AllocationLockMode_Unlocked;
    if ( s_R_RT_common.m_allocationMutex.writeCount != 1 )
    {
      v5 = 1;
      writeCount = s_R_RT_common.m_allocationMutex.writeCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", writeCount, v5) )
        __debugbreak();
    }
    if ( s_R_RT_common.m_allocationMutex.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
      __debugbreak();
    s_R_RT_common.m_allocationMutex.writeThreadId = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:s_R_RT_common.m_allocationMutex.tempPriority.threadHandle
      vmovups xmmword ptr [rsp+78h+tempPriority.threadHandle], xmm0
    }
    if ( ((unsigned __int8)&s_R_RT_common.m_allocationMutex.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_R_RT_common.m_allocationMutex.writeCount) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&s_R_RT_common.m_allocationMutex.writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
      __debugbreak();
    Sys_TempThreadPriorityEnd(&tempPriority);
  }
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  gfxImmediateContextLockCount = this->gfxImmediateContextLockCount;
  if ( this->gfxImmediateContextLockCount )
  {
    do
    {
      R_LockGfxImmediateContext();
      --gfxImmediateContextLockCount;
    }
    while ( gfxImmediateContextLockCount > 0 );
    LOBYTE(gfxImmediateContextLockCount) = this->gfxImmediateContextLockCount;
  }
  if ( (_BYTE)gfxImmediateContextLockCount && !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
}

/*
==============
R_RT_Common_Shutdown
==============
*/
void R_RT_Common_Shutdown(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 59, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  s_R_RT_common.m_frontend = 0;
  if ( (s_R_RT_common.m_allocationMutex.readCount || s_R_RT_common.m_allocationMutex.writeCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 62, ASSERT_TYPE_ASSERT, "(s_R_RT_common.m_allocationMutex.readCount == 0 && s_R_RT_common.m_allocationMutex.writeCount == 0)", (const char *)&queryFormat, "s_R_RT_common.m_allocationMutex.readCount == 0 && s_R_RT_common.m_allocationMutex.writeCount == 0") )
    __debugbreak();
  if ( s_R_RT_common.m_allocationLockMode )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 63, ASSERT_TYPE_ASSERT, "(s_R_RT_common.m_allocationLockMode == R_RT_AllocationLockMode_Unlocked)", (const char *)&queryFormat, "s_R_RT_common.m_allocationLockMode == R_RT_AllocationLockMode_Unlocked") )
      __debugbreak();
  }
}

/*
==============
R_RT_Common_Startup
==============
*/
void R_RT_Common_Startup(void)
{
  XB3ConsoleType XB3ConsoleType; 
  unsigned int v1; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 35, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  s_R_RT_common.m_frontend = (R_RT_CommonInternal::<unnamed_type_m_frontend>)268369921;
  v1 = 0x10000;
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    v1 = 0x20000;
  *(_QWORD *)&s_R_RT_common.m_allocationMutex.readCount = 0i64;
  s_R_RT_common.m_allocationMutex.tempPriority.threadHandle = NULL;
  *(_QWORD *)&s_R_RT_common.m_allocationMutex.tempPriority.oldPriority = 0i64;
  *(_QWORD *)&s_R_RT_common.m_allocationMutex.writeThreadId = 0i64;
  s_R_RT_common.m_allocationLockMode = R_RT_AllocationLockMode_Unlocked;
  g_R_RT_surfaceMemoryAlignMin = v1;
}

/*
==============
R_RT_EndFrontendFrame
==============
*/
void R_RT_EndFrontendFrame(void)
{
  int v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 155, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = (s_R_RT_common.m_frontend.m_framePass + 4096) & 0xF000;
  s_R_RT_common.m_frontend.m_nextPass = truncate_cast<unsigned short,unsigned int>(v0 + 1);
  s_R_RT_common.m_frontend.m_framePass = truncate_cast<unsigned short,unsigned int>(v0 + 4095);
}

/*
==============
R_RT_GetFrontendFramePass
==============
*/
__int64 R_RT_GetFrontendFramePass()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 148, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  return s_R_RT_common.m_frontend.m_framePass;
}

/*
==============
R_RT_GetThreadAllocationLockMode
==============
*/
R_RT_AllocationLockMode R_RT_GetThreadAllocationLockMode()
{
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 69, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  return Sys_IsRenderThread() + 1;
}

/*
==============
R_RT_HaveAllocationLock
==============
*/
bool R_RT_HaveAllocationLock()
{
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 69, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  return s_R_RT_common.m_allocationLockMode == (unsigned __int8)(Sys_IsRenderThread() + 1);
}

/*
==============
R_RT_NewFrontendPass
==============
*/
__int64 R_RT_NewFrontendPass()
{
  unsigned __int16 m_nextPass; 
  __int64 result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 138, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  m_nextPass = s_R_RT_common.m_frontend.m_nextPass;
  if ( (!s_R_RT_common.m_frontend.m_nextPass || s_R_RT_common.m_frontend.m_nextPass >= s_R_RT_common.m_frontend.m_framePass) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 140, ASSERT_TYPE_ASSERT, "(pass != 0 && pass < s_R_RT_common.m_frontend.m_framePass)", (const char *)&queryFormat, "pass != 0 && pass < s_R_RT_common.m_frontend.m_framePass") )
    __debugbreak();
  result = m_nextPass;
  s_R_RT_common.m_frontend.m_nextPass = m_nextPass + 1;
  return result;
}

