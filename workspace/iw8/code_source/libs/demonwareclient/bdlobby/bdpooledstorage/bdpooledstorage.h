/*
==============
bdPooledStorage::operator delete
==============
*/

void __fastcall bdPooledStorage::operator delete(void *p)
{
  ??3bdPooledStorage@@SAXPEAX@Z(p);
}

/*
==============
bdPooledStorage::operator delete
==============
*/
void bdPooledStorage::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

