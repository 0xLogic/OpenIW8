/*
==============
IndyFsLockGuard::~IndyFsLockGuard
==============
*/

void __fastcall IndyFsLockGuard::~IndyFsLockGuard(IndyFsLockGuard *this)
{
  ??1IndyFsLockGuard@@QEAA@XZ(this);
}

/*
==============
IndyFsLockGuard::~IndyFsLockGuard
==============
*/
void IndyFsLockGuard::~IndyFsLockGuard(IndyFsLockGuard *this)
{
  indyfs_mutex_unlock((LPCRITICAL_SECTION)this->mutex);
}

