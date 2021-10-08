/*
==============
bdUnicastConnection::operator delete
==============
*/

void __fastcall bdUnicastConnection::operator delete(void *p)
{
  ??3bdUnicastConnection@@SAXPEAX@Z(p);
}

/*
==============
bdUnicastConnection::operator delete
==============
*/
void bdUnicastConnection::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

