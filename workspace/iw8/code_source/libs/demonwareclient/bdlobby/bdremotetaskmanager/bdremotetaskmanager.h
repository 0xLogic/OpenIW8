/*
==============
bdRemoteTaskManager::operator delete
==============
*/

void __fastcall bdRemoteTaskManager::operator delete(void *p)
{
  ??3bdRemoteTaskManager@@SAXPEAX@Z(p);
}

/*
==============
bdRemoteTaskManager::operator delete
==============
*/
void bdRemoteTaskManager::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

