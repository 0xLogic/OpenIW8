/*
==============
FX_WaitEnterWriteSystemLock
==============
*/

void __fastcall FX_WaitEnterWriteSystemLock(FxAccessLock *lock)
{
  ?FX_WaitEnterWriteSystemLock@@YAXPEATFxAccessLock@@@Z(lock);
}

/*
==============
FX_ExitReadSystemLock
==============
*/

void __fastcall FX_ExitReadSystemLock(FxAccessLock *lock)
{
  ?FX_ExitReadSystemLock@@YAXPEATFxAccessLock@@@Z(lock);
}

/*
==============
FX_WaitEnterReadSystemLock
==============
*/

void __fastcall FX_WaitEnterReadSystemLock(FxAccessLock *lock)
{
  ?FX_WaitEnterReadSystemLock@@YAXPEATFxAccessLock@@@Z(lock);
}

/*
==============
FX_ExitWriteSystemLock
==============
*/

void __fastcall FX_ExitWriteSystemLock(FxAccessLock *lock)
{
  ?FX_ExitWriteSystemLock@@YAXPEATFxAccessLock@@@Z(lock);
}

/*
==============
FX_ExitReadSystemLock
==============
*/
void FX_ExitReadSystemLock(FxAccessLock *lock)
{
  __int64 v1; 
  signed __int32 data; 

  v1 = (unsigned __int8)lock & 3;
  do
  {
    data = lock->data;
    if ( v1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", lock) )
        __debugbreak();
    }
  }
  while ( data != _InterlockedCompareExchange((volatile signed __int32 *)lock, data ^ (unsigned __int8)(data ^ (data + 1)), data) );
}

/*
==============
FX_ExitWriteSystemLock
==============
*/
void FX_ExitWriteSystemLock(FxAccessLock *lock)
{
  lock->u.writeRead = (lock->u.writeRead + 256) ^ (unsigned __int8)(lock->u.writeRead ^ (lock->u.writeRead + 1));
}

/*
==============
FX_WaitEnterReadSystemLock
==============
*/
void FX_WaitEnterReadSystemLock(FxAccessLock *lock)
{
  unsigned int v2; 
  unsigned __int8 read; 

  if ( ((unsigned __int8)lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", lock) )
    __debugbreak();
  v2 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)lock, 0x10000u) >> 16;
  while ( 1 )
  {
    read = lock->m.read;
    if ( (_BYTE)v2 == read )
      break;
    Sys_Sleep(0);
  }
  lock->m.read = read + 1;
}

/*
==============
FX_WaitEnterWriteSystemLock
==============
*/
void FX_WaitEnterWriteSystemLock(FxAccessLock *lock)
{
  unsigned int v2; 

  if ( ((unsigned __int8)lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", lock) )
    __debugbreak();
  v2 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)lock, 0x10000u) >> 16;
  while ( (_BYTE)v2 != lock->m.write )
    Sys_Sleep(0);
}

