/*
==============
bdCounter::operator delete
==============
*/

void __fastcall bdCounter::operator delete(void *p)
{
  ??3bdCounter@@SAXPEAX@Z(p);
}

/*
==============
bdCounter::operator delete
==============
*/
void bdCounter::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

