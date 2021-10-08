/*
==============
bdProfiles::operator delete
==============
*/

void __fastcall bdProfiles::operator delete(void *p)
{
  ??3bdProfiles@@SAXPEAX@Z(p);
}

/*
==============
bdProfiles::operator delete
==============
*/
void bdProfiles::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

