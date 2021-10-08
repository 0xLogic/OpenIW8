/*
==============
bdPlatformSharedMutex::tryLock
==============
*/

bool __fastcall bdPlatformSharedMutex::tryLock(void **handle)
{
  return ?tryLock@bdPlatformSharedMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSharedMutex::lockShared
==============
*/

bool __fastcall bdPlatformSharedMutex::lockShared(void **handle)
{
  return ?lockShared@bdPlatformSharedMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSharedMutex::createSharedMutex
==============
*/

void *__fastcall bdPlatformSharedMutex::createSharedMutex(_RTL_SRWLOCK *storage)
{
  return ?createSharedMutex@bdPlatformSharedMutex@@SAPEAXAEAU_RTL_SRWLOCK@@@Z(storage);
}

/*
==============
bdPlatformSharedMutex::tryLockShared
==============
*/

bool __fastcall bdPlatformSharedMutex::tryLockShared(void **handle)
{
  return ?tryLockShared@bdPlatformSharedMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSharedMutex::unlockShared
==============
*/

bool __fastcall bdPlatformSharedMutex::unlockShared(void **handle)
{
  return ?unlockShared@bdPlatformSharedMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSharedMutex::unlock
==============
*/

bool __fastcall bdPlatformSharedMutex::unlock(void **handle)
{
  return ?unlock@bdPlatformSharedMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSharedMutex::destroy
==============
*/

bool __fastcall bdPlatformSharedMutex::destroy(void **handle)
{
  return ?destroy@bdPlatformSharedMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSharedMutex::lock
==============
*/

bool __fastcall bdPlatformSharedMutex::lock(void **handle)
{
  return ?lock@bdPlatformSharedMutex@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSharedMutex::createSharedMutex
==============
*/
_RTL_SRWLOCK *bdPlatformSharedMutex::createSharedMutex(_RTL_SRWLOCK *storage)
{
  if ( storage )
    InitializeSRWLock(storage);
  return storage;
}

/*
==============
bdPlatformSharedMutex::destroy
==============
*/
char bdPlatformSharedMutex::destroy(void **handle)
{
  *handle = NULL;
  return 1;
}

/*
==============
bdPlatformSharedMutex::lock
==============
*/
char bdPlatformSharedMutex::lock(void **handle)
{
  AcquireSRWLockExclusive((PSRWLOCK)*handle);
  return 1;
}

/*
==============
bdPlatformSharedMutex::lockShared
==============
*/
char bdPlatformSharedMutex::lockShared(void **handle)
{
  AcquireSRWLockShared((PSRWLOCK)*handle);
  return 1;
}

/*
==============
bdPlatformSharedMutex::tryLock
==============
*/
bool bdPlatformSharedMutex::tryLock(void **handle)
{
  return TryAcquireSRWLockExclusive((PSRWLOCK)*handle) != 0;
}

/*
==============
bdPlatformSharedMutex::tryLockShared
==============
*/
bool bdPlatformSharedMutex::tryLockShared(void **handle)
{
  return TryAcquireSRWLockShared((PSRWLOCK)*handle) != 0;
}

/*
==============
bdPlatformSharedMutex::unlock
==============
*/
char bdPlatformSharedMutex::unlock(void **handle)
{
  ReleaseSRWLockExclusive((PSRWLOCK)*handle);
  return 1;
}

/*
==============
bdPlatformSharedMutex::unlockShared
==============
*/
char bdPlatformSharedMutex::unlockShared(void **handle)
{
  ReleaseSRWLockShared((PSRWLOCK)*handle);
  return 1;
}

