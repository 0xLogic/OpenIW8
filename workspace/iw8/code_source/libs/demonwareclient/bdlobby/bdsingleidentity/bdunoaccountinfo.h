/*
==============
bdUnoAccountInfo::operator delete
==============
*/

void __fastcall bdUnoAccountInfo::operator delete(void *p)
{
  ??3bdUnoAccountInfo@@SAXPEAX@Z(p);
}

/*
==============
bdUnoAccountInfo::operator delete
==============
*/
void bdUnoAccountInfo::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

