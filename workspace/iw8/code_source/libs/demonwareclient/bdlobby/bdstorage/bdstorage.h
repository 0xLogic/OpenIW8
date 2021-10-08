/*
==============
bdStorage::operator delete
==============
*/

void __fastcall bdStorage::operator delete(void *p)
{
  ??3bdStorage@@SAXPEAX@Z(p);
}

/*
==============
bdStorage::operator delete
==============
*/
void bdStorage::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

