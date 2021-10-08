/*
==============
bdCODO::operator delete
==============
*/

void __fastcall bdCODO::operator delete(void *p)
{
  ??3bdCODO@@SAXPEAX@Z(p);
}

/*
==============
bdCODO::operator delete
==============
*/
void bdCODO::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

