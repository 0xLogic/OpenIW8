/*
==============
bdMatchScheduler::operator delete
==============
*/

void __fastcall bdMatchScheduler::operator delete(void *p)
{
  ??3bdMatchScheduler@@SAXPEAX@Z(p);
}

/*
==============
bdMatchScheduler::operator delete
==============
*/
void bdMatchScheduler::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

