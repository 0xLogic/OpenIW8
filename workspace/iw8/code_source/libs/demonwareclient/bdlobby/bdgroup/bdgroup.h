/*
==============
bdGroup::operator delete
==============
*/

void __fastcall bdGroup::operator delete(void *p)
{
  ??3bdGroup@@SAXPEAX@Z(p);
}

/*
==============
bdGroup::operator delete
==============
*/
void bdGroup::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

