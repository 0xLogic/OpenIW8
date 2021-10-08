/*
==============
bdGetHostByName::operator delete
==============
*/

void __fastcall bdGetHostByName::operator delete(void *p)
{
  ??3bdGetHostByName@@SAXPEAX@Z(p);
}

/*
==============
bdGetHostByName::operator delete
==============
*/
void bdGetHostByName::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

