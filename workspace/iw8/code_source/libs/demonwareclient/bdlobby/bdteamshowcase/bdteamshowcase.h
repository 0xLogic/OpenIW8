/*
==============
bdTeamShowcase::operator delete
==============
*/

void __fastcall bdTeamShowcase::operator delete(void *p)
{
  ??3bdTeamShowcase@@SAXPEAX@Z(p);
}

/*
==============
bdTeamShowcase::operator delete
==============
*/
void bdTeamShowcase::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

