/*
==============
bdRESTTaskManager::operator delete
==============
*/

void __fastcall bdRESTTaskManager::operator delete(void *p)
{
  ??3bdRESTTaskManager@@SAXPEAX@Z(p);
}

/*
==============
bdRESTTaskManager::operator delete
==============
*/
void bdRESTTaskManager::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

