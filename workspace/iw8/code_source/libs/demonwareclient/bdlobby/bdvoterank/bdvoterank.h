/*
==============
bdVoteRank::operator delete
==============
*/

void __fastcall bdVoteRank::operator delete(void *p)
{
  ??3bdVoteRank@@SAXPEAX@Z(p);
}

/*
==============
bdVoteRank::operator delete
==============
*/
void bdVoteRank::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

