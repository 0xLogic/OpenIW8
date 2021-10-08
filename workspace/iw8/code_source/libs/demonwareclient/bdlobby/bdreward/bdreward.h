/*
==============
bdReward::operator delete
==============
*/

void __fastcall bdReward::operator delete(void *p)
{
  ??3bdReward@@SAXPEAX@Z(p);
}

/*
==============
bdReward::operator delete
==============
*/
void bdReward::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

