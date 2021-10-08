/*
==============
bdUpgradeAnonymousToFull::operator delete
==============
*/

void __fastcall bdUpgradeAnonymousToFull::operator delete(void *p)
{
  ??3bdUpgradeAnonymousToFull@@SAXPEAX@Z(p);
}

/*
==============
bdUpgradeAnonymousToFull::operator delete
==============
*/
void bdUpgradeAnonymousToFull::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

