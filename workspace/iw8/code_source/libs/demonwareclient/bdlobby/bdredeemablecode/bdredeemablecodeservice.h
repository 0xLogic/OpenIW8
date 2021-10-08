/*
==============
bdRedeemableCodeService::operator delete
==============
*/

void __fastcall bdRedeemableCodeService::operator delete(void *p)
{
  ??3bdRedeemableCodeService@@SAXPEAX@Z(p);
}

/*
==============
bdRedeemableCodeService::operator delete
==============
*/
void bdRedeemableCodeService::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

