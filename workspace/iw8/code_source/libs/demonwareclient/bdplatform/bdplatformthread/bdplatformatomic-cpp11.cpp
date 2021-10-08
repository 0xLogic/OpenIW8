/*
==============
bdPlatformAtomic::store
==============
*/

void __fastcall bdPlatformAtomic::store(std::atomic<int> *target, int valueToSet)
{
  ?store@bdPlatformAtomic@@SAXAEAU?$atomic@H@std@@H@Z(target, valueToSet);
}

/*
==============
bdPlatformAtomic::load
==============
*/

int __fastcall bdPlatformAtomic::load(std::atomic<int> *value)
{
  return ?load@bdPlatformAtomic@@SAHAEAU?$atomic@H@std@@@Z(value);
}

/*
==============
bdPlatformAtomic::increment
==============
*/

int __fastcall bdPlatformAtomic::increment(std::atomic<int> *value)
{
  return ?increment@bdPlatformAtomic@@SAHAEAU?$atomic@H@std@@@Z(value);
}

/*
==============
bdPlatformAtomic::decrement
==============
*/

int __fastcall bdPlatformAtomic::decrement(std::atomic<int> *value)
{
  return ?decrement@bdPlatformAtomic@@SAHAEAU?$atomic@H@std@@@Z(value);
}

/*
==============
bdPlatformAtomic::decrement
==============
*/
__int64 bdPlatformAtomic::decrement(std::atomic<int> *value)
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)value);
}

/*
==============
bdPlatformAtomic::increment
==============
*/
__int64 bdPlatformAtomic::increment(std::atomic<int> *value)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)value);
}

/*
==============
bdPlatformAtomic::load
==============
*/
__int64 bdPlatformAtomic::load(std::atomic<int> *value)
{
  return value->_My_val;
}

/*
==============
bdPlatformAtomic::store
==============
*/
void bdPlatformAtomic::store(std::atomic<int> *target, int valueToSet)
{
  _InterlockedExchange((volatile __int32 *)target, valueToSet);
}

