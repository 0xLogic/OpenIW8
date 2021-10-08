/*
==============
bdRESTLegacyTask::operator delete
==============
*/

void __fastcall bdRESTLegacyTask::operator delete(void *p)
{
  ??3bdRESTLegacyTask@@SAXPEAX@Z(p);
}

/*
==============
bdRESTLegacyTask::operator delete
==============
*/
void bdRESTLegacyTask::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

