/*
==============
FX_ThreadingCheck_Enter
==============
*/

void __fastcall FX_ThreadingCheck_Enter(FxSystem *fxSystem, int scope)
{
  ?FX_ThreadingCheck_Enter@@YAXPEAUFxSystem@@H@Z(fxSystem, scope);
}

/*
==============
FX_ThreadingCheck_Leave
==============
*/

void __fastcall FX_ThreadingCheck_Leave(FxSystem *fxSystem, int scope)
{
  ?FX_ThreadingCheck_Leave@@YAXPEAUFxSystem@@H@Z(fxSystem, scope);
}

/*
==============
FX_ThreadingCheckScopeLock::~FX_ThreadingCheckScopeLock
==============
*/

void __fastcall FX_ThreadingCheckScopeLock::~FX_ThreadingCheckScopeLock(FX_ThreadingCheckScopeLock *this)
{
  ??1FX_ThreadingCheckScopeLock@@QEAA@XZ(this);
}

/*
==============
FX_ThreadingCheckScopeLock::~FX_ThreadingCheckScopeLock
==============
*/
void FX_ThreadingCheckScopeLock::~FX_ThreadingCheckScopeLock(FX_ThreadingCheckScopeLock *this)
{
  FX_ThreadingCheck_Leave(this->fxSystem, this->scope);
}

/*
==============
FX_ThreadingCheck_Enter
==============
*/
void FX_ThreadingCheck_Enter(FxSystem *fxSystem, int scope)
{
  volatile int *v3; 
  volatile int *p_threadingCheckMultipleReaders; 
  volatile int *p_threadingCheckExclusiveWrite; 

  if ( scope )
  {
    if ( scope != 1 )
    {
      p_threadingCheckExclusiveWrite = &fxSystem->threadingCheckExclusiveWrite;
      if ( (((_BYTE)fxSystem + 40) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &fxSystem->threadingCheckExclusiveWrite) )
        __debugbreak();
      if ( _InterlockedCompareExchange(p_threadingCheckExclusiveWrite, 0, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_type.h", 187, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &fxSystem->threadingCheckExclusiveWrite, 0, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &fxSystem->threadingCheckExclusiveWrite, 0, 0 ) == 0") )
        __debugbreak();
      Sys_InterlockedIncrement(&fxSystem->threadingCheckMultipleReaders);
    }
  }
  else
  {
    v3 = &fxSystem->threadingCheckExclusiveWrite;
    if ( (((_BYTE)fxSystem + 40) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &fxSystem->threadingCheckExclusiveWrite) )
      __debugbreak();
    if ( _InterlockedCompareExchange(v3, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_type.h", 178, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &fxSystem->threadingCheckExclusiveWrite, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &fxSystem->threadingCheckExclusiveWrite, 1, 0 ) == 0") )
      __debugbreak();
    p_threadingCheckMultipleReaders = &fxSystem->threadingCheckMultipleReaders;
    if ( ((unsigned __int8)p_threadingCheckMultipleReaders & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_threadingCheckMultipleReaders) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_threadingCheckMultipleReaders, 0, 0) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_type.h", 179, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &fxSystem->threadingCheckMultipleReaders, 0, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &fxSystem->threadingCheckMultipleReaders, 0, 0 ) == 0") )
        __debugbreak();
    }
  }
}

/*
==============
FX_ThreadingCheck_Leave
==============
*/
void FX_ThreadingCheck_Leave(FxSystem *fxSystem, int scope)
{
  volatile int *v3; 
  volatile int *p_threadingCheckMultipleReaders; 
  const char *v5; 
  int v6; 
  const char *v7; 
  volatile int *p_threadingCheckExclusiveWrite; 

  if ( scope )
  {
    if ( scope != 1 )
    {
      p_threadingCheckExclusiveWrite = &fxSystem->threadingCheckExclusiveWrite;
      if ( (((_BYTE)fxSystem + 40) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &fxSystem->threadingCheckExclusiveWrite) )
        __debugbreak();
      if ( _InterlockedCompareExchange(p_threadingCheckExclusiveWrite, 0, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_type.h", 207, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &fxSystem->threadingCheckExclusiveWrite, 0, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &fxSystem->threadingCheckExclusiveWrite, 0, 0 ) == 0") )
        __debugbreak();
      if ( (((_BYTE)fxSystem + 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &fxSystem->threadingCheckMultipleReaders) )
        __debugbreak();
      if ( _InterlockedDecrement(&fxSystem->threadingCheckMultipleReaders) < 0 )
      {
        v5 = "Sys_InterlockedDecrement( &fxSystem->threadingCheckMultipleReaders ) >= 0";
        v6 = 208;
        v7 = "(Sys_InterlockedDecrement( &fxSystem->threadingCheckMultipleReaders ) >= 0)";
LABEL_25:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_type.h", v6, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v5) )
          __debugbreak();
      }
    }
  }
  else
  {
    v3 = &fxSystem->threadingCheckExclusiveWrite;
    if ( (((_BYTE)fxSystem + 40) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &fxSystem->threadingCheckExclusiveWrite) )
      __debugbreak();
    if ( _InterlockedCompareExchange(v3, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_type.h", 198, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &fxSystem->threadingCheckExclusiveWrite, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &fxSystem->threadingCheckExclusiveWrite, 0, 1 ) == 1") )
      __debugbreak();
    p_threadingCheckMultipleReaders = &fxSystem->threadingCheckMultipleReaders;
    if ( ((unsigned __int8)p_threadingCheckMultipleReaders & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_threadingCheckMultipleReaders) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_threadingCheckMultipleReaders, 0, 0) )
    {
      v5 = "Sys_InterlockedCompareExchange( &fxSystem->threadingCheckMultipleReaders, 0, 0 ) == 0";
      v6 = 199;
      v7 = "(Sys_InterlockedCompareExchange( &fxSystem->threadingCheckMultipleReaders, 0, 0 ) == 0)";
      goto LABEL_25;
    }
  }
}

