/*
==============
Sys_CheckLockWrite
==============
*/

void __fastcall Sys_CheckLockWrite(const FastCriticalSection *critSect)
{
  ?Sys_CheckLockWrite@@YAXPEBUFastCriticalSection@@@Z(critSect);
}

/*
==============
FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead
==============
*/

void __fastcall FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(FastCriticalSectionScopeRead *this)
{
  ??1FastCriticalSectionScopeRead@@QEAA@XZ(this);
}

/*
==============
FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite
==============
*/

void __fastcall FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(FastCriticalSectionScopeWrite *this)
{
  ??1FastCriticalSectionScopeWrite@@QEAA@XZ(this);
}

/*
==============
Sys_LockRead
==============
*/

void __fastcall Sys_LockRead(FastCriticalSection *critSect)
{
  ?Sys_LockRead@@YAXPEAUFastCriticalSection@@@Z(critSect);
}

/*
==============
Sys_LockWrite
==============
*/

void __fastcall Sys_LockWrite(FastCriticalSection *critSect)
{
  ?Sys_LockWrite@@YAXPEAUFastCriticalSection@@@Z(critSect);
}

/*
==============
Sys_UnlockRead
==============
*/

void __fastcall Sys_UnlockRead(FastCriticalSection *critSect)
{
  ?Sys_UnlockRead@@YAXPEAUFastCriticalSection@@@Z(critSect);
}

/*
==============
Sys_WaitInterlockedCompareExchange
==============
*/

void __fastcall Sys_WaitInterlockedCompareExchange(volatile int *destination, int value, int comperand)
{
  ?Sys_WaitInterlockedCompareExchange@@YAXPECJHH@Z(destination, value, comperand);
}

/*
==============
Sys_UnlockWrite
==============
*/

void __fastcall Sys_UnlockWrite(FastCriticalSection *critSect)
{
  ?Sys_UnlockWrite@@YAXPEAUFastCriticalSection@@@Z(critSect);
}

/*
==============
FastCriticalSectionScopeRead::FastCriticalSectionScopeRead
==============
*/

void __fastcall FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(FastCriticalSectionScopeRead *this, FastCriticalSection *a2)
{
  ??0FastCriticalSectionScopeRead@@QEAA@PEAUFastCriticalSection@@@Z(this, a2);
}

/*
==============
Sys_LockWrite
==============
*/
void Sys_LockWrite(FastCriticalSection *critSect)
{
  volatile int *p_writeCount; 
  threadId_t CurrentThreadId; 
  TempThreadPriority tempPriority; 

  _RBX = critSect;
  Sys_TempThreadPriorityAtLeastNormalBegin(&tempPriority);
  if ( _RBX->writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 147, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't try to call this again on a thread that already holds the lock.") )
    __debugbreak();
  while ( 1 )
  {
    if ( !_RBX->readCount )
    {
      p_writeCount = &_RBX->writeCount;
      if ( (((_BYTE)_RBX + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_writeCount) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(p_writeCount, 1, 0) )
        break;
    }
LABEL_22:
    Sys_Sleep(0);
  }
  if ( _RBX->writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 103, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == INVALID_THREAD_ID)", (const char *)&queryFormat, "critSect->writeThreadId == INVALID_THREAD_ID") )
    __debugbreak();
  CurrentThreadId = Sys_GetCurrentThreadId();
  _RBX->writeThreadId = CurrentThreadId;
  if ( !CurrentThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 105, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId != INVALID_THREAD_ID)", (const char *)&queryFormat, "critSect->writeThreadId != INVALID_THREAD_ID") )
    __debugbreak();
  if ( _RBX->readCount )
  {
    _RBX->writeThreadId = 0;
    if ( (((_BYTE)_RBX + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_writeCount) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 113, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
      __debugbreak();
    goto LABEL_22;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+tempPriority.threadHandle]
    vmovups xmmword ptr [rbx+8], xmm0
  }
}

/*
==============
Sys_UnlockWrite
==============
*/
void Sys_UnlockWrite(FastCriticalSection *critSect)
{
  volatile int *p_writeCount; 
  int v4; 
  int v5; 
  TempThreadPriority tempPriority; 

  p_writeCount = &critSect->writeCount;
  _RDI = critSect;
  if ( critSect->writeCount != 1 )
  {
    v5 = 1;
    v4 = *p_writeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", v4, v5) )
      __debugbreak();
  }
  if ( _RDI->writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rdi+8] }
  _RDI->writeThreadId = 0;
  __asm { vmovups xmmword ptr [rsp+68h+tempPriority.threadHandle], xmm0 }
  if ( ((unsigned __int8)p_writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(&tempPriority);
}

/*
==============
FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite
==============
*/
void FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(FastCriticalSectionScopeWrite *this)
{
  volatile int *p_writeCount; 
  int v4; 
  int v5; 
  TempThreadPriority tempPriority; 

  _RDI = this->cs;
  p_writeCount = &this->cs->writeCount;
  if ( *p_writeCount != 1 )
  {
    v5 = 1;
    v4 = *p_writeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", v4, v5) )
      __debugbreak();
  }
  if ( _RDI->writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  _RDI->writeThreadId = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+8]
    vmovups xmmword ptr [rsp+78h+tempPriority.threadHandle], xmm0
  }
  if ( ((unsigned __int8)p_writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(&tempPriority);
}

/*
==============
Sys_WaitInterlockedCompareExchange
==============
*/
void Sys_WaitInterlockedCompareExchange(volatile int *destination, int value, int comperand)
{
  while ( 1 )
  {
    if ( *destination == comperand )
    {
      if ( ((unsigned __int8)destination & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)destination) )
        __debugbreak();
      if ( comperand == _InterlockedCompareExchange(destination, value, comperand) )
        break;
    }
    Sys_Sleep(0);
  }
}

/*
==============
Sys_LockRead
==============
*/
void Sys_LockRead(FastCriticalSection *critSect)
{
  if ( critSect->writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)critSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", critSect) )
    __debugbreak();
  _InterlockedIncrement(&critSect->readCount);
  while ( critSect->writeCount )
    Sys_Sleep(0);
}

/*
==============
Sys_UnlockRead
==============
*/
void Sys_UnlockRead(FastCriticalSection *critSect)
{
  volatile int readCount; 

  if ( critSect->readCount <= 0 )
  {
    readCount = critSect->readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int8)critSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", critSect) )
    __debugbreak();
  _InterlockedDecrement(&critSect->readCount);
}

/*
==============
FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead
==============
*/
void FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(FastCriticalSectionScopeRead *this)
{
  Sys_UnlockRead(this->cs);
}

/*
==============
FastCriticalSectionScopeRead::FastCriticalSectionScopeRead
==============
*/
void FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(FastCriticalSectionScopeRead *this, FastCriticalSection *a2)
{
  FastCriticalSection *cs; 

  this->cs = a2;
  if ( !a2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  cs = this->cs;
  if ( cs->writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)cs & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", cs) )
    __debugbreak();
  _InterlockedIncrement(&cs->readCount);
  while ( cs->writeCount )
    Sys_Sleep(0);
}

/*
==============
Sys_CheckLockWrite
==============
*/
void Sys_CheckLockWrite(const FastCriticalSection *critSect)
{
  threadId_t CurrentThreadId; 

  if ( !critSect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 216, ASSERT_TYPE_ASSERT, "(critSect)", (const char *)&queryFormat, "critSect") )
    __debugbreak();
  if ( critSect->writeThreadId != Sys_GetCurrentThreadId() )
  {
    CurrentThreadId = Sys_GetCurrentThreadId();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 217, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId ) == ( Sys_GetCurrentThreadId() )", "%s == %s\n\t%i, %i", "critSect->writeThreadId", "Sys_GetCurrentThreadId()", critSect->writeThreadId, CurrentThreadId) )
      __debugbreak();
  }
  if ( !critSect->writeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 218, ASSERT_TYPE_ASSERT, "(critSect->writeCount)", (const char *)&queryFormat, "critSect->writeCount") )
    __debugbreak();
}

