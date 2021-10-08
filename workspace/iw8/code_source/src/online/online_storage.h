/*
==============
OnlineStorage::~OnlineStorage
==============
*/

void __fastcall OnlineStorage::~OnlineStorage(OnlineStorage *this)
{
  ??1OnlineStorage@@UEAA@XZ(this);
}

/*
==============
OnlineStorage::~OnlineStorage
==============
*/
void OnlineStorage::~OnlineStorage(OnlineStorage *this)
{
  this->__vftable = (OnlineStorage_vtbl *)&OnlineStorage::`vftable';
  `eh vector destructor iterator'(this->m_taskQueue, 0x6B0ui64, 0x10ui64, (void (__fastcall *)(void *))OnlineStorageTask::~OnlineStorageTask);
}

