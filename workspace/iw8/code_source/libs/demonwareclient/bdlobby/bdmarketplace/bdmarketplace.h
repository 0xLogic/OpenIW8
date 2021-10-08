/*
==============
bdMarketplace::operator delete
==============
*/

void __fastcall bdMarketplace::operator delete(void *p)
{
  ??3bdMarketplace@@SAXPEAX@Z(p);
}

/*
==============
bdMarketplace::operator delete
==============
*/
void bdMarketplace::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

