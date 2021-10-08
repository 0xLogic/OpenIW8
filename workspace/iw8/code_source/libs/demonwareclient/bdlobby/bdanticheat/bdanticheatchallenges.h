/*
==============
bdAntiCheatChallenges::operator delete
==============
*/

void __fastcall bdAntiCheatChallenges::operator delete(void *p)
{
  ??3bdAntiCheatChallenges@@SAXPEAX@Z(p);
}

/*
==============
bdAntiCheatChallenges::operator delete
==============
*/
void bdAntiCheatChallenges::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

