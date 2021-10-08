/*
==============
bdMLG::operator delete
==============
*/

void __fastcall bdMLG::operator delete(void *p)
{
  ??3bdMLG@@SAXPEAX@Z(p);
}

/*
==============
bdMLG::operator delete
==============
*/
void bdMLG::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

