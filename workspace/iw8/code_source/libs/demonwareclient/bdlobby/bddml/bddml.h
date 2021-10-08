/*
==============
bdDML::operator delete
==============
*/

void __fastcall bdDML::operator delete(void *p)
{
  ??3bdDML@@SAXPEAX@Z(p);
}

/*
==============
bdDML::operator delete
==============
*/
void bdDML::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

