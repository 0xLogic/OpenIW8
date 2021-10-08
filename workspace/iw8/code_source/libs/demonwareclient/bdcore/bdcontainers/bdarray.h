/*
==============
bdArray<bdAntiCheatChallenge>::operator delete
==============
*/

void __fastcall bdArray<bdAntiCheatChallenge>::operator delete(void *p)
{
  ??3?$bdArray@VbdAntiCheatChallenge@@@@SAXPEAX@Z(p);
}

/*
==============
bdArray<bdAntiCheatChallenge>::operator delete
==============
*/
void bdArray<bdAntiCheatChallenge>::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

