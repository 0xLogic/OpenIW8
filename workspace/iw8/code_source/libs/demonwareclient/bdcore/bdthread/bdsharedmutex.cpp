/*
==============
bdSharedMutex::unlock_shared
==============
*/

void __fastcall bdSharedMutex::unlock_shared(bdSharedMutex *this)
{
  ?unlock_shared@bdSharedMutex@@QEAAXXZ(this);
}

/*
==============
bdSharedMutex::bdSharedMutex
==============
*/

void __fastcall bdSharedMutex::bdSharedMutex(bdSharedMutex *this)
{
  ??0bdSharedMutex@@QEAA@XZ(this);
}

/*
==============
bdSharedMutex::try_lock_shared
==============
*/

bool __fastcall bdSharedMutex::try_lock_shared(bdSharedMutex *this)
{
  return ?try_lock_shared@bdSharedMutex@@QEAA_NXZ(this);
}

/*
==============
bdSharedMutex::lock_shared
==============
*/

void __fastcall bdSharedMutex::lock_shared(bdSharedMutex *this)
{
  ?lock_shared@bdSharedMutex@@QEAAXXZ(this);
}

/*
==============
bdSharedMutex::lock
==============
*/

void __fastcall bdSharedMutex::lock(bdSharedMutex *this)
{
  ?lock@bdSharedMutex@@QEAAXXZ(this);
}

/*
==============
bdSharedMutex::try_lock
==============
*/

bool __fastcall bdSharedMutex::try_lock(bdSharedMutex *this)
{
  return ?try_lock@bdSharedMutex@@QEAA_NXZ(this);
}

/*
==============
bdSharedMutex::~bdSharedMutex
==============
*/

void __fastcall bdSharedMutex::~bdSharedMutex(bdSharedMutex *this)
{
  ??1bdSharedMutex@@QEAA@XZ(this);
}

/*
==============
bdSharedMutex::unlock
==============
*/

void __fastcall bdSharedMutex::unlock(bdSharedMutex *this)
{
  ?unlock@bdSharedMutex@@QEAAXXZ(this);
}

/*
==============
bdSharedMutex::bdSharedMutex
==============
*/
void bdSharedMutex::bdSharedMutex(bdSharedMutex *this)
{
  this->m_handle = bdPlatformSharedMutex::createSharedMutex(&this->m_mutexData);
}

/*
==============
bdSharedMutex::~bdSharedMutex
==============
*/
void bdSharedMutex::~bdSharedMutex(bdSharedMutex *this)
{
  bdPlatformSharedMutex::destroy(&this->m_handle);
}

/*
==============
bdSharedMutex::lock
==============
*/

void __fastcall bdSharedMutex::lock(bdSharedMutex *this)
{
  bdPlatformSharedMutex::lock(&this->m_handle);
}

/*
==============
bdSharedMutex::lock_shared
==============
*/

void __fastcall bdSharedMutex::lock_shared(bdSharedMutex *this)
{
  bdPlatformSharedMutex::lockShared(&this->m_handle);
}

/*
==============
bdSharedMutex::try_lock
==============
*/

bool __fastcall bdSharedMutex::try_lock(bdSharedMutex *this)
{
  return bdPlatformSharedMutex::tryLock(&this->m_handle);
}

/*
==============
bdSharedMutex::try_lock_shared
==============
*/

bool __fastcall bdSharedMutex::try_lock_shared(bdSharedMutex *this)
{
  return bdPlatformSharedMutex::tryLockShared(&this->m_handle);
}

/*
==============
bdSharedMutex::unlock
==============
*/

void __fastcall bdSharedMutex::unlock(bdSharedMutex *this)
{
  bdPlatformSharedMutex::unlock(&this->m_handle);
}

/*
==============
bdSharedMutex::unlock_shared
==============
*/

void __fastcall bdSharedMutex::unlock_shared(bdSharedMutex *this)
{
  bdPlatformSharedMutex::unlockShared(&this->m_handle);
}

