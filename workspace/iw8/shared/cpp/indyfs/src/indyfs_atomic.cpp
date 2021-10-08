/*
==============
indyfs_atomic_add
==============
*/

unsigned int __fastcall indyfs_atomic_add(volatile unsigned int *var, unsigned int value)
{
  return ?indyfs_atomic_add@@YAIPECII@Z(var, value);
}

/*
==============
indyfs_atomic_exchange
==============
*/

unsigned int __fastcall indyfs_atomic_exchange(volatile unsigned int *var, unsigned int newValue)
{
  return ?indyfs_atomic_exchange@@YAIPECII@Z(var, newValue);
}

/*
==============
indyfs_atomic_sub
==============
*/

unsigned int __fastcall indyfs_atomic_sub(volatile unsigned int *var, unsigned int value)
{
  return ?indyfs_atomic_sub@@YAIPECII@Z(var, value);
}

/*
==============
indyfs_atomic_compare_and_exchange
==============
*/

unsigned int __fastcall indyfs_atomic_compare_and_exchange(volatile unsigned int *var, unsigned int compare, unsigned int newValue)
{
  return ?indyfs_atomic_compare_and_exchange@@YAIPECIII@Z(var, compare, newValue);
}

/*
==============
indyfs_atomic_add
==============
*/
__int64 indyfs_atomic_add(volatile unsigned int *var, unsigned int value)
{
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)var, value);
}

/*
==============
indyfs_atomic_compare_and_exchange
==============
*/
__int64 indyfs_atomic_compare_and_exchange(volatile unsigned int *var, unsigned int compare, unsigned int newValue)
{
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)var, newValue, compare);
}

/*
==============
indyfs_atomic_exchange
==============
*/
__int64 indyfs_atomic_exchange(volatile unsigned int *var, unsigned int newValue)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)var, newValue);
}

/*
==============
indyfs_atomic_sub
==============
*/
__int64 indyfs_atomic_sub(volatile unsigned int *var, unsigned int value)
{
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)var, -value);
}

