/*
==============
bdTeams::operator delete
==============
*/

void __fastcall bdTeams::operator delete(void *p)
{
  ??3bdTeams@@SAXPEAX@Z(p);
}

/*
==============
bdTeams::operator delete
==============
*/
void bdTeams::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

