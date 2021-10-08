/*
==============
bdLoopbackConnection::operator delete
==============
*/

void __fastcall bdLoopbackConnection::operator delete(void *p)
{
  ??3bdLoopbackConnection@@SAXPEAX@Z(p);
}

/*
==============
bdLoopbackConnection::operator delete
==============
*/
void bdLoopbackConnection::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

