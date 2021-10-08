/*
==============
bdPlatformMutex::destroy
==============
*/

bool __fastcall bdPlatformMutex::destroy(void **handle)
{
  return ?destroy@bdPlatformMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformMutex::lock
==============
*/

bool __fastcall bdPlatformMutex::lock(void **handle)
{
  return ?lock@bdPlatformMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformMutex::unlock
==============
*/

bool __fastcall bdPlatformMutex::unlock(void **handle)
{
  return ?unlock@bdPlatformMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformMutex::tryLock
==============
*/

bool __fastcall bdPlatformMutex::tryLock(void **handle)
{
  return ?tryLock@bdPlatformMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformMutex::createMutex
==============
*/

void *__fastcall bdPlatformMutex::createMutex(_RTL_CRITICAL_SECTION *storage)
{
  return ?createMutex@bdPlatformMutex@@SAPEAXAEAU_RTL_CRITICAL_SECTION@@@Z(storage);
}

/*
==============
bdPlatformMutex::createMutex
==============
*/
_RTL_CRITICAL_SECTION *bdPlatformMutex::createMutex(_RTL_CRITICAL_SECTION *storage)
{
  InitializeCriticalSection(storage);
  SetCriticalSectionSpinCount(storage, 0xFA0u);
  return storage;
}

/*
==============
bdPlatformMutex::destroy
==============
*/
char bdPlatformMutex::destroy(void **handle)
{
  _RTL_CRITICAL_SECTION *v2; 

  v2 = (_RTL_CRITICAL_SECTION *)*handle;
  if ( v2 )
  {
    DeleteCriticalSection(v2);
    *handle = NULL;
  }
  return 1;
}

/*
==============
bdPlatformMutex::lock
==============
*/
char bdPlatformMutex::lock(void **handle)
{
  EnterCriticalSection((LPCRITICAL_SECTION)*handle);
  return 1;
}

/*
==============
bdPlatformMutex::tryLock
==============
*/
bool bdPlatformMutex::tryLock(void **handle)
{
  return TryEnterCriticalSection((LPCRITICAL_SECTION)*handle);
}

/*
==============
bdPlatformMutex::unlock
==============
*/
char bdPlatformMutex::unlock(void **handle)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)*handle);
  return 1;
}

