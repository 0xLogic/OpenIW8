/*
==============
Sys_InterlockedExchange
==============
*/

int __fastcall Sys_InterlockedExchange(volatile int *target, int value)
{
  return ?Sys_InterlockedExchange@@YAHPECJH@Z(target, value);
}

/*
==============
Sys_InterlockedExchangeAdd
==============
*/

int __fastcall Sys_InterlockedExchangeAdd(volatile int *addend, int increment)
{
  return ?Sys_InterlockedExchangeAdd@@YAHPECJH@Z(addend, increment);
}

/*
==============
Sys_InterlockedLoad
==============
*/

int __fastcall Sys_InterlockedLoad(const volatile int *addr)
{
  return ?Sys_InterlockedLoad@@YAHPEDJ@Z(addr);
}

/*
==============
Sys_InterlockedDecrement
==============
*/

int __fastcall Sys_InterlockedDecrement(volatile int *addend)
{
  return ?Sys_InterlockedDecrement@@YAHPECJ@Z(addend);
}

/*
==============
Sys_InterlockedAnd
==============
*/

int __fastcall Sys_InterlockedAnd(volatile int *target, int mask)
{
  return ?Sys_InterlockedAnd@@YAHPECJH@Z(target, mask);
}

/*
==============
Sys_InterlockedCompareExchange
==============
*/

int __fastcall Sys_InterlockedCompareExchange(volatile int *target, int value, int comperand)
{
  return ?Sys_InterlockedCompareExchange@@YAHPECJHH@Z(target, value, comperand);
}

/*
==============
Sys_InterlockedIncrement
==============
*/

int __fastcall Sys_InterlockedIncrement(volatile int *addend)
{
  return ?Sys_InterlockedIncrement@@YAHPECJ@Z(addend);
}

/*
==============
Sys_InterlockedExchangeAdd64
==============
*/

__int64 __fastcall Sys_InterlockedExchangeAdd64(volatile __int64 *addend, __int64 increment)
{
  return ?Sys_InterlockedExchangeAdd64@@YA_JPEC_J_J@Z(addend, increment);
}

/*
==============
Sys_InterlockedOr
==============
*/

int __fastcall Sys_InterlockedOr(volatile int *target, int mask)
{
  return ?Sys_InterlockedOr@@YAHPECJH@Z(target, mask);
}

/*
==============
Sys_InterlockedDecrement
==============
*/
__int64 Sys_InterlockedDecrement(volatile int *addend)
{
  if ( ((unsigned __int8)addend & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)addend) )
    __debugbreak();
  return (unsigned int)_InterlockedDecrement(addend);
}

/*
==============
Sys_InterlockedIncrement
==============
*/
__int64 Sys_InterlockedIncrement(volatile int *addend)
{
  if ( ((unsigned __int8)addend & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)addend) )
    __debugbreak();
  return (unsigned int)_InterlockedIncrement(addend);
}

/*
==============
Sys_InterlockedCompareExchange
==============
*/
__int64 Sys_InterlockedCompareExchange(volatile int *target, int value, int comperand)
{
  if ( ((unsigned __int8)target & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)target) )
    __debugbreak();
  return (unsigned int)_InterlockedCompareExchange(target, value, comperand);
}

/*
==============
Sys_InterlockedLoad
==============
*/
__int64 Sys_InterlockedLoad(const volatile int *addr)
{
  if ( ((unsigned __int8)addr & 3) == 0 )
    return *(unsigned int *)addr;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)addr) )
    __debugbreak();
  return *(unsigned int *)addr;
}

/*
==============
Sys_InterlockedExchangeAdd
==============
*/
__int64 Sys_InterlockedExchangeAdd(volatile int *addend, int increment)
{
  if ( ((unsigned __int8)addend & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)addend) )
    __debugbreak();
  return (unsigned int)_InterlockedExchangeAdd(addend, increment);
}

/*
==============
Sys_InterlockedExchange
==============
*/
__int64 Sys_InterlockedExchange(volatile int *target, int value)
{
  if ( ((unsigned __int8)target & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)target) )
    __debugbreak();
  return (unsigned int)_InterlockedExchange(target, value);
}

/*
==============
Sys_InterlockedExchangeAdd64
==============
*/
__int64 Sys_InterlockedExchangeAdd64(volatile __int64 *addend, __int64 increment)
{
  if ( ((unsigned __int8)addend & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", (const void *)addend) )
    __debugbreak();
  return _InterlockedExchangeAdd64(addend, increment);
}

/*
==============
Sys_InterlockedOr
==============
*/
__int64 Sys_InterlockedOr(volatile int *target, int mask)
{
  if ( ((unsigned __int8)target & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)target) )
    __debugbreak();
  _m_prefetchw((const void *)target);
  return (unsigned int)_InterlockedOr(target, mask);
}

/*
==============
Sys_InterlockedAnd
==============
*/
__int64 Sys_InterlockedAnd(volatile int *target, int mask)
{
  if ( ((unsigned __int8)target & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)target) )
    __debugbreak();
  _m_prefetchw((const void *)target);
  return (unsigned int)_InterlockedAnd(target, mask);
}

