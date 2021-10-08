/*
==============
Microsoft::WRL::Wrappers::Details::SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits>::~SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits>
==============
*/

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits>::~SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits>(Microsoft::WRL::Wrappers::Details::SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits> *this)
{
  ??1?$SyncLockT@USRWLockExclusiveTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@QEAA@XZ(this);
}

/*
==============
Microsoft::WRL::Wrappers::Details::SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits>::~SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits>
==============
*/
void Microsoft::WRL::Wrappers::Details::SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits>::~SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits>(Microsoft::WRL::Wrappers::Details::SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits> *this)
{
  _RTL_SRWLOCK *sync; 

  sync = this->sync_;
  if ( sync )
  {
    ReleaseSRWLockExclusive(sync);
    this->sync_ = NULL;
  }
}

