/*
==============
Sys_AcquireWriteLock
==============
*/

void __fastcall Sys_AcquireWriteLock(RWLock *lock)
{
  ?Sys_AcquireWriteLock@@YAXPEAURWLock@@@Z(lock);
}

/*
==============
Sys_CloseReadWriteLock
==============
*/

void __fastcall Sys_CloseReadWriteLock(RWLock *lock)
{
  ?Sys_CloseReadWriteLock@@YAXPEAURWLock@@@Z(lock);
}

/*
==============
Sys_CreateReadWriteLock
==============
*/

void __fastcall Sys_CreateReadWriteLock(RWLock *lock)
{
  ?Sys_CreateReadWriteLock@@YAXPEAURWLock@@@Z(lock);
}

/*
==============
Sys_AcquireReadLock
==============
*/

void __fastcall Sys_AcquireReadLock(RWLock *lock)
{
  ?Sys_AcquireReadLock@@YAXPEAURWLock@@@Z(lock);
}

/*
==============
Sys_CheckAcquireLock
==============
*/

void __fastcall Sys_CheckAcquireLock(RWLock *lock)
{
  ?Sys_CheckAcquireLock@@YAXPEAURWLock@@@Z(lock);
}

/*
==============
Sys_CheckReleaseLock
==============
*/

void __fastcall Sys_CheckReleaseLock(RWLock *lock)
{
  ?Sys_CheckReleaseLock@@YAXPEAURWLock@@@Z(lock);
}

/*
==============
Sys_ReleaseWriteLock
==============
*/

void __fastcall Sys_ReleaseWriteLock(RWLock *lock)
{
  ?Sys_ReleaseWriteLock@@YAXPEAURWLock@@@Z(lock);
}

/*
==============
Sys_CheckAcquireLock
==============
*/
void Sys_CheckAcquireLock(RWLock *lock)
{
  ThreadContext CurrentThreadContext; 
  volatile int *p_acquireLock; 
  const char *ThreadContextName; 

  if ( !lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 51, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
    __debugbreak();
  if ( lock->initialized != -1412623820 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 52, ASSERT_TYPE_ASSERT, "( lock->initialized == RWLOCK_INITIALIZED_SENTINEL )", "RWLock needs to be initialized first via Sys_CreateReadWriteLock") )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( (CurrentThreadContext & 0x1F) != CurrentThreadContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 61, ASSERT_TYPE_ASSERT, "((context & 31) == context)", "%s\n\tToo many thread contexts for acquireLock. The acquireLock bitfield needs to be wider to support more than 32 thread contexts", "(context & 31) == context") )
    __debugbreak();
  p_acquireLock = &lock->acquireLock;
  if ( ((unsigned __int8)p_acquireLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_acquireLock) )
    __debugbreak();
  _m_prefetchw((const void *)p_acquireLock);
  if ( (_InterlockedOr(p_acquireLock, 1 << CurrentThreadContext) & (1 << CurrentThreadContext)) != 0 )
  {
    ThreadContextName = Sys_GetThreadContextName(CurrentThreadContext);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 64, ASSERT_TYPE_ASSERT, "((Sys_InterlockedOr( &lock->acquireLock, contextMask ) & contextMask) == 0)", "%s\n\tTrying to acquire a lock recursively on thread %s", "(Sys_InterlockedOr( &lock->acquireLock, contextMask ) & contextMask) == 0", ThreadContextName) )
      __debugbreak();
  }
}

/*
==============
Sys_CheckReleaseLock
==============
*/
void Sys_CheckReleaseLock(RWLock *lock)
{
  ThreadContext CurrentThreadContext; 
  volatile int *p_acquireLock; 
  const char *ThreadContextName; 

  if ( !lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 74, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
    __debugbreak();
  if ( lock->initialized != -1412623820 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 75, ASSERT_TYPE_ASSERT, "( lock->initialized == RWLOCK_INITIALIZED_SENTINEL )", "RWLock needs to be initialized first via Sys_CreateReadWriteLock") )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( (CurrentThreadContext & 0x1F) != CurrentThreadContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 84, ASSERT_TYPE_ASSERT, "((context & 31) == context)", "%s\n\tToo many thread contexts for acquireLock. The acquireLock bitfield needs to be wider to support more than 32 thread contexts", "(context & 31) == context") )
    __debugbreak();
  p_acquireLock = &lock->acquireLock;
  if ( ((unsigned __int8)p_acquireLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_acquireLock) )
    __debugbreak();
  _m_prefetchw((const void *)p_acquireLock);
  if ( ((1 << CurrentThreadContext) & _InterlockedAnd(p_acquireLock, ~(1 << CurrentThreadContext))) != 1 << CurrentThreadContext )
  {
    ThreadContextName = Sys_GetThreadContextName(CurrentThreadContext);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 87, ASSERT_TYPE_ASSERT, "((Sys_InterlockedAnd( &lock->acquireLock, ~contextMask ) & contextMask) == contextMask)", "%s\n\tTrying to release a lock without first acquiring it on thread %s", "(Sys_InterlockedAnd( &lock->acquireLock, ~contextMask ) & contextMask) == contextMask", ThreadContextName) )
      __debugbreak();
  }
}

/*
==============
Sys_AcquireWriteLock
==============
*/
void Sys_AcquireWriteLock(RWLock *lock)
{
  ThreadContext CurrentThreadContext; 
  volatile int *p_acquireLock; 
  const char *ThreadContextName; 
  threadId_t CurrentThreadId; 

  if ( !lock )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 168, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 51, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
      __debugbreak();
  }
  if ( lock->initialized != -1412623820 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 52, ASSERT_TYPE_ASSERT, "( lock->initialized == RWLOCK_INITIALIZED_SENTINEL )", "RWLock needs to be initialized first via Sys_CreateReadWriteLock") )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( (CurrentThreadContext & 0x1F) != CurrentThreadContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 61, ASSERT_TYPE_ASSERT, "((context & 31) == context)", "%s\n\tToo many thread contexts for acquireLock. The acquireLock bitfield needs to be wider to support more than 32 thread contexts", "(context & 31) == context") )
    __debugbreak();
  p_acquireLock = &lock->acquireLock;
  if ( (((_BYTE)lock + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &lock->acquireLock) )
    __debugbreak();
  _m_prefetchw((const void *)p_acquireLock);
  if ( (_InterlockedOr(p_acquireLock, 1 << CurrentThreadContext) & (1 << CurrentThreadContext)) != 0 )
  {
    ThreadContextName = Sys_GetThreadContextName(CurrentThreadContext);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 64, ASSERT_TYPE_ASSERT, "((Sys_InterlockedOr( &lock->acquireLock, contextMask ) & contextMask) == 0)", "%s\n\tTrying to acquire a lock recursively on thread %s", "(Sys_InterlockedOr( &lock->acquireLock, contextMask ) & contextMask) == 0", ThreadContextName) )
      __debugbreak();
  }
  AcquireSRWLockExclusive((PSRWLOCK)lock);
  CurrentThreadId = Sys_GetCurrentThreadId();
  lock->writeThreadId = CurrentThreadId;
  if ( !CurrentThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
    __debugbreak();
}

/*
==============
Sys_ReleaseWriteLock
==============
*/
void Sys_ReleaseWriteLock(RWLock *lock)
{
  ThreadContext CurrentThreadContext; 
  volatile int *p_acquireLock; 
  const char *ThreadContextName; 

  if ( !lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 216, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
    __debugbreak();
  lock->writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)lock);
  if ( lock->initialized != -1412623820 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 75, ASSERT_TYPE_ASSERT, "( lock->initialized == RWLOCK_INITIALIZED_SENTINEL )", "RWLock needs to be initialized first via Sys_CreateReadWriteLock") )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( (CurrentThreadContext & 0x1F) != CurrentThreadContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 84, ASSERT_TYPE_ASSERT, "((context & 31) == context)", "%s\n\tToo many thread contexts for acquireLock. The acquireLock bitfield needs to be wider to support more than 32 thread contexts", "(context & 31) == context") )
    __debugbreak();
  p_acquireLock = &lock->acquireLock;
  if ( ((unsigned __int8)p_acquireLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_acquireLock) )
    __debugbreak();
  _m_prefetchw((const void *)p_acquireLock);
  if ( ((1 << CurrentThreadContext) & _InterlockedAnd(p_acquireLock, ~(1 << CurrentThreadContext))) != 1 << CurrentThreadContext )
  {
    ThreadContextName = Sys_GetThreadContextName(CurrentThreadContext);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 87, ASSERT_TYPE_ASSERT, "((Sys_InterlockedAnd( &lock->acquireLock, ~contextMask ) & contextMask) == contextMask)", "%s\n\tTrying to release a lock without first acquiring it on thread %s", "(Sys_InterlockedAnd( &lock->acquireLock, ~contextMask ) & contextMask) == contextMask", ThreadContextName) )
      __debugbreak();
  }
}

/*
==============
Sys_AcquireReadLock
==============
*/
void Sys_AcquireReadLock(RWLock *lock)
{
  if ( !lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 146, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
    __debugbreak();
  Sys_CheckAcquireLock(lock);
  AcquireSRWLockShared((PSRWLOCK)lock);
}

/*
==============
Sys_CloseReadWriteLock
==============
*/
void Sys_CloseReadWriteLock(RWLock *lock)
{
  volatile int acquireLock; 
  __int64 v3; 

  if ( !lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 132, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
    __debugbreak();
  acquireLock = lock->acquireLock;
  lock->initialized = 0;
  if ( acquireLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", lock->acquireLock, 0i64) )
    __debugbreak();
  if ( lock->writeThreadId )
  {
    LODWORD(v3) = lock->writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v3, 0i64) )
      __debugbreak();
  }
}

/*
==============
Sys_CreateReadWriteLock
==============
*/
void Sys_CreateReadWriteLock(RWLock *lock)
{
  if ( !lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 117, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
    __debugbreak();
  InitializeSRWLock((PSRWLOCK)lock);
  lock->initialized = -1412623820;
  lock->acquireLock = 0;
  lock->writeThreadId = 0;
}

