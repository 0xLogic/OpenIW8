/*
==============
bdMutex::unlock
==============
*/

bool __fastcall bdMutex::unlock(bdMutex *this)
{
  return ?unlock@bdMutex@@QEAA_NXZ(this);
}

/*
==============
bdMutex::~bdMutex
==============
*/

void __fastcall bdMutex::~bdMutex(bdMutex *this)
{
  ??1bdMutex@@QEAA@XZ(this);
}

/*
==============
bdMutex::try_lock
==============
*/

bool __fastcall bdMutex::try_lock(bdMutex *this)
{
  return ?try_lock@bdMutex@@QEAA_NXZ(this);
}

/*
==============
bdMutex::bdMutex
==============
*/

void __fastcall bdMutex::bdMutex(bdMutex *this)
{
  ??0bdMutex@@QEAA@XZ(this);
}

/*
==============
bdMutex::lock
==============
*/

bool __fastcall bdMutex::lock(bdMutex *this)
{
  return ?lock@bdMutex@@QEAA_NXZ(this);
}

/*
==============
bdMutex::bdMutex
==============
*/
void bdMutex::bdMutex(bdMutex *this)
{
  this->m_handle = bdPlatformMutex::createMutex(&this->m_mutexData);
}

/*
==============
bdMutex::~bdMutex
==============
*/
void bdMutex::~bdMutex(bdMutex *this)
{
  bdPlatformMutex::destroy(&this->m_handle);
}

/*
==============
bdMutex::lock
==============
*/

bool __fastcall bdMutex::lock(bdMutex *this)
{
  return bdPlatformMutex::lock(&this->m_handle);
}

/*
==============
bdMutex::try_lock
==============
*/

bool __fastcall bdMutex::try_lock(bdMutex *this)
{
  return bdPlatformMutex::tryLock(&this->m_handle);
}

/*
==============
bdMutex::unlock
==============
*/

bool __fastcall bdMutex::unlock(bdMutex *this)
{
  return bdPlatformMutex::unlock(&this->m_handle);
}

