/*
==============
bdPerformance::operator delete
==============
*/

void __fastcall bdPerformance::operator delete(void *p)
{
  ??3bdPerformance@@SAXPEAX@Z(p);
}

/*
==============
bdPerformance::operator delete
==============
*/
void bdPerformance::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

