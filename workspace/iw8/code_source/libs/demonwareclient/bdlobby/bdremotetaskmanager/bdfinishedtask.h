/*
==============
bdFinishedTask::operator delete
==============
*/

void __fastcall bdFinishedTask::operator delete(void *p)
{
  ??3bdFinishedTask@@SAXPEAX@Z(p);
}

/*
==============
bdFinishedTask::operator delete
==============
*/
void bdFinishedTask::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

