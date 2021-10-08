/*
==============
bdDDL::operator delete
==============
*/

void __fastcall bdDDL::operator delete(void *p)
{
  ??3bdDDL@@SAXPEAX@Z(p);
}

/*
==============
bdDDL::operator delete
==============
*/
void bdDDL::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

