/*
==============
bdTags::operator delete
==============
*/

void __fastcall bdTags::operator delete(void *p)
{
  ??3bdTags@@SAXPEAX@Z(p);
}

/*
==============
bdTags::operator delete
==============
*/
void bdTags::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

