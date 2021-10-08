/*
==============
bdSemaphore::bdSemaphore
==============
*/

void __fastcall bdSemaphore::bdSemaphore(bdSemaphore *this, unsigned int initialCount, unsigned int maxCount)
{
  ??0bdSemaphore@@QEAA@II@Z(this, initialCount, maxCount);
}

/*
==============
bdSemaphore::release
==============
*/

void __fastcall bdSemaphore::release(bdSemaphore *this)
{
  ?release@bdSemaphore@@QEAAXXZ(this);
}

/*
==============
bdSemaphore::~bdSemaphore
==============
*/

void __fastcall bdSemaphore::~bdSemaphore(bdSemaphore *this)
{
  ??1bdSemaphore@@MEAA@XZ(this);
}

/*
==============
bdSemaphore::destroy
==============
*/

void __fastcall bdSemaphore::destroy(bdSemaphore *this)
{
  ?destroy@bdSemaphore@@QEAAXXZ(this);
}

/*
==============
bdSemaphore::wait
==============
*/

bool __fastcall bdSemaphore::wait(bdSemaphore *this)
{
  return ?wait@bdSemaphore@@QEAA_NXZ(this);
}

/*
==============
bdSemaphore::bdSemaphore
==============
*/
void bdSemaphore::bdSemaphore(bdSemaphore *this, unsigned int initialCount, unsigned int maxCount)
{
  this->__vftable = (bdSemaphore_vtbl *)&bdSemaphore::`vftable';
  this->m_handle = bdPlatformSemaphore::createSemaphore(initialCount, maxCount);
}

/*
==============
bdSemaphore::~bdSemaphore
==============
*/
void bdSemaphore::~bdSemaphore(bdSemaphore *this)
{
  this->__vftable = (bdSemaphore_vtbl *)&bdSemaphore::`vftable';
}

/*
==============
bdSemaphore::destroy
==============
*/
void bdSemaphore::destroy(bdSemaphore *this)
{
  bdPlatformSemaphore::destroy(&this->m_handle);
  if ( this )
    ((void (__fastcall *)(bdSemaphore *, __int64))this->~bdSemaphore)(this, 1i64);
}

/*
==============
bdSemaphore::release
==============
*/
void bdSemaphore::release(bdSemaphore *this)
{
  bdPlatformSemaphore::release(&this->m_handle);
}

/*
==============
bdSemaphore::wait
==============
*/
bool bdSemaphore::wait(bdSemaphore *this)
{
  return bdPlatformSemaphore::wait(&this->m_handle);
}

