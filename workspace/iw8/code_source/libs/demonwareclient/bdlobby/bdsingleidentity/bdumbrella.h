/*
==============
bdUmbrella::operator delete
==============
*/

void __fastcall bdUmbrella::operator delete(void *p)
{
  ??3bdUmbrella@@SAXPEAX@Z(p);
}

/*
==============
bdUmbrella::operator delete
==============
*/
void bdUmbrella::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

