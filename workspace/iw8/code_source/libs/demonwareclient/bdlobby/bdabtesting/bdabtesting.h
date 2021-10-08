/*
==============
bdABTesting::operator delete
==============
*/

void __fastcall bdABTesting::operator delete(void *p)
{
  ??3bdABTesting@@SAXPEAX@Z(p);
}

/*
==============
bdABTesting::operator delete
==============
*/
void bdABTesting::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

