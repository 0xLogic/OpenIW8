/*
==============
bdServerInventory::operator delete
==============
*/

void __fastcall bdServerInventory::operator delete(void *p)
{
  ??3bdServerInventory@@SAXPEAX@Z(p);
}

/*
==============
bdServerInventory::operator delete
==============
*/
void bdServerInventory::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

