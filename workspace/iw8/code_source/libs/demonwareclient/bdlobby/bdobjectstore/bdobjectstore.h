/*
==============
bdObjectStore::operator delete
==============
*/

void __fastcall bdObjectStore::operator delete(void *p)
{
  ??3bdObjectStore@@SAXPEAX@Z(p);
}

/*
==============
bdObjectStore::operator delete
==============
*/
void bdObjectStore::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

