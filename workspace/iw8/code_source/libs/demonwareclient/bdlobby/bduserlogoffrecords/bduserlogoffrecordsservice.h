/*
==============
bdUserLogoffRecordsService::operator delete
==============
*/

void __fastcall bdUserLogoffRecordsService::operator delete(void *p)
{
  ??3bdUserLogoffRecordsService@@SAXPEAX@Z(p);
}

/*
==============
bdUserLogoffRecordsService::operator delete
==============
*/
void bdUserLogoffRecordsService::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

