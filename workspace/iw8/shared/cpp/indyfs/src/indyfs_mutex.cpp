/*
==============
indyfs_mutex_unlock
==============
*/

void __stdcall indyfs_mutex_unlock(LPCRITICAL_SECTION lpCriticalSection)
{
  ?indyfs_mutex_unlock@@YAXPEAUIndyFsMutex@@@Z(lpCriticalSection);
}

/*
==============
indyfs_mutex_init
==============
*/

void __stdcall indyfs_mutex_init(LPCRITICAL_SECTION lpCriticalSection)
{
  ?indyfs_mutex_init@@YAXPEAUIndyFsMutex@@@Z(lpCriticalSection);
}

/*
==============
indyfs_mutex_lock
==============
*/

void __stdcall indyfs_mutex_lock(LPCRITICAL_SECTION lpCriticalSection)
{
  ?indyfs_mutex_lock@@YAXPEAUIndyFsMutex@@@Z(lpCriticalSection);
}

/*
==============
indyfs_mutex_term
==============
*/

void __stdcall indyfs_mutex_term(LPCRITICAL_SECTION lpCriticalSection)
{
  ?indyfs_mutex_term@@YAXPEAUIndyFsMutex@@@Z(lpCriticalSection);
}

/*
==============
indyfs_mutex_init
==============
*/

void __stdcall indyfs_mutex_init(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSection(lpCriticalSection);
}

/*
==============
indyfs_mutex_lock
==============
*/

void __stdcall indyfs_mutex_lock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}

/*
==============
indyfs_mutex_term
==============
*/

void __stdcall indyfs_mutex_term(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

/*
==============
indyfs_mutex_unlock
==============
*/

void __stdcall indyfs_mutex_unlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}

