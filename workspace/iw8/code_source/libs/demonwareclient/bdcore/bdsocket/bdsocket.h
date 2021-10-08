/*
==============
bdSocket::operator delete
==============
*/

void __fastcall bdSocket::operator delete(void *p)
{
  ??3bdSocket@@SAXPEAX@Z(p);
}

/*
==============
bdSocket::operator delete
==============
*/
void bdSocket::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

