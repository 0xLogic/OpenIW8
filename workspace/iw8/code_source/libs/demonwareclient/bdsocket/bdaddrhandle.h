/*
==============
bdAddrHandle::operator delete
==============
*/

void __fastcall bdAddrHandle::operator delete(void *p)
{
  ??3bdAddrHandle@@SAXPEAX@Z(p);
}

/*
==============
bdAddrHandle::operator delete
==============
*/
void bdAddrHandle::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

