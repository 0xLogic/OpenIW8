/*
==============
bdKeyArchive::operator delete
==============
*/

void __fastcall bdKeyArchive::operator delete(void *p)
{
  ??3bdKeyArchive@@SAXPEAX@Z(p);
}

/*
==============
bdKeyArchive::operator delete
==============
*/
void bdKeyArchive::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

