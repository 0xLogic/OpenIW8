/*
==============
bdRemoteTask::operator delete
==============
*/

void __fastcall bdRemoteTask::operator delete(void *p)
{
  ??3bdRemoteTask@@SAXPEAX@Z(p);
}

/*
==============
bdRemoteTask::operator delete
==============
*/
void bdRemoteTask::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

