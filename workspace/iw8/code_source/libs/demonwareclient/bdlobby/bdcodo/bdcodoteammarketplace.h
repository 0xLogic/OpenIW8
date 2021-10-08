/*
==============
bdCODOTeamMarketplace::operator delete
==============
*/

void __fastcall bdCODOTeamMarketplace::operator delete(void *p)
{
  ??3bdCODOTeamMarketplace@@SAXPEAX@Z(p);
}

/*
==============
bdCODOTeamMarketplace::operator delete
==============
*/
void bdCODOTeamMarketplace::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

