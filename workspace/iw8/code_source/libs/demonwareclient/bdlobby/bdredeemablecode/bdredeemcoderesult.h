/*
==============
bdRedeemCodeResult::operator delete
==============
*/

void __fastcall bdRedeemCodeResult::operator delete(void *p)
{
  ??3bdRedeemCodeResult@@SAXPEAX@Z(p);
}

/*
==============
bdRedeemCodeResult::operator delete
==============
*/
void bdRedeemCodeResult::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

