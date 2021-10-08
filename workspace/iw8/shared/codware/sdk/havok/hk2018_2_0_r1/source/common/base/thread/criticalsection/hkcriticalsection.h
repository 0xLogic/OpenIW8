/*
==============
hkCriticalSectionLock::~hkCriticalSectionLock
==============
*/

void __fastcall hkCriticalSectionLock::~hkCriticalSectionLock(hkCriticalSectionLock *this)
{
  ??1hkCriticalSectionLock@@QEAA@XZ(this);
}

/*
==============
hkCriticalSectionLock::~hkCriticalSectionLock
==============
*/
void hkCriticalSectionLock::~hkCriticalSectionLock(hkCriticalSectionLock *this)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)this->m_section);
}

