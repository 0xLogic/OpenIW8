/*
==============
bdStats::operator delete
==============
*/

void __fastcall bdStats::operator delete(void *p)
{
  ??3bdStats@@SAXPEAX@Z(p);
}

/*
==============
bdStats::operator delete
==============
*/
void bdStats::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

