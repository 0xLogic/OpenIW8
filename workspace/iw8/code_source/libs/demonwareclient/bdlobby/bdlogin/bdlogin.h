/*
==============
bdLogin::operator delete
==============
*/

void __fastcall bdLogin::operator delete(void *p)
{
  ??3bdLogin@@SAXPEAX@Z(p);
}

/*
==============
bdLogin::operator delete
==============
*/
void bdLogin::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

