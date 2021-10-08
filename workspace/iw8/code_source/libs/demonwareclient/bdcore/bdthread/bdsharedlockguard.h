/*
==============
bdSharedLockGuard<bdSharedMutex>::~bdSharedLockGuard<bdSharedMutex>
==============
*/

void __fastcall bdSharedLockGuard<bdSharedMutex>::~bdSharedLockGuard<bdSharedMutex>(bdSharedLockGuard<bdSharedMutex> *this)
{
  ??1?$bdSharedLockGuard@VbdSharedMutex@@@@QEAA@XZ(this);
}

/*
==============
bdSharedLockGuard<bdSharedMutex>::~bdSharedLockGuard<bdSharedMutex>
==============
*/
void bdSharedLockGuard<bdSharedMutex>::~bdSharedLockGuard<bdSharedMutex>(bdSharedLockGuard<bdSharedMutex> *this)
{
  bdSharedMutex::unlock_shared(this->m_lockable);
}

