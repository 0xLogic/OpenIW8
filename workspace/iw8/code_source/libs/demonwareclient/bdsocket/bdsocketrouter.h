/*
==============
bdSocketRouter::operator delete
==============
*/

void __fastcall bdSocketRouter::operator delete(void *p)
{
  ??3bdSocketRouter@@SAXPEAX@Z(p);
}

/*
==============
bdSocketRouter::operator delete
==============
*/
void bdSocketRouter::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

