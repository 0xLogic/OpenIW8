/*
==============
bdLockGuard<bdSharedMutex>::~bdLockGuard<bdSharedMutex>
==============
*/

void __fastcall bdLockGuard<bdSharedMutex>::~bdLockGuard<bdSharedMutex>(bdLockGuard<bdSharedMutex> *this)
{
  ??1?$bdLockGuard@VbdSharedMutex@@@@QEAA@XZ(this);
}

/*
==============
bdLockGuard<bdMutex>::~bdLockGuard<bdMutex>
==============
*/

void __fastcall bdLockGuard<bdMutex>::~bdLockGuard<bdMutex>(bdLockGuard<bdMutex> *this)
{
  ??1?$bdLockGuard@VbdMutex@@@@QEAA@XZ(this);
}

/*
==============
bdLockGuard<bdMutex>::~bdLockGuard<bdMutex>
==============
*/
void bdLockGuard<bdMutex>::~bdLockGuard<bdMutex>(bdLockGuard<bdMutex> *this)
{
  bdMutex::unlock(this->m_lockable);
}

/*
==============
bdLockGuard<bdSharedMutex>::~bdLockGuard<bdSharedMutex>
==============
*/
void bdLockGuard<bdSharedMutex>::~bdLockGuard<bdSharedMutex>(bdLockGuard<bdSharedMutex> *this)
{
  bdSharedMutex::unlock(this->m_lockable);
}

