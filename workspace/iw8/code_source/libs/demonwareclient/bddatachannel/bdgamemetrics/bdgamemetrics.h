/*
==============
bdGameMetrics::operator delete
==============
*/

void __fastcall bdGameMetrics::operator delete(void *p)
{
  ??3bdGameMetrics@@SAXPEAX@Z(p);
}

/*
==============
bdGameMetrics::operator delete
==============
*/
void bdGameMetrics::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

