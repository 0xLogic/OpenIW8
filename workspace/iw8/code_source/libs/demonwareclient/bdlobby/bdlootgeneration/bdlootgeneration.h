/*
==============
bdLootGeneration::operator delete
==============
*/

void __fastcall bdLootGeneration::operator delete(void *p)
{
  ??3bdLootGeneration@@SAXPEAX@Z(p);
}

/*
==============
bdLootGeneration::operator delete
==============
*/
void bdLootGeneration::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

