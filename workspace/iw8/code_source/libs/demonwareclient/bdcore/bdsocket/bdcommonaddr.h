/*
==============
bdCommonAddr::operator delete
==============
*/

void __fastcall bdCommonAddr::operator delete(void *p)
{
  ??3bdCommonAddr@@SAXPEAX@Z(p);
}

/*
==============
bdCommonAddr::operator delete
==============
*/
void bdCommonAddr::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

