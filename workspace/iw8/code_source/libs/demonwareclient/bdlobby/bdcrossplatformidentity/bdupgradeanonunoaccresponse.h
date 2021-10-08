/*
==============
bdUpgradeAnonUnoAccResponse::operator delete
==============
*/

void __fastcall bdUpgradeAnonUnoAccResponse::operator delete(void *p)
{
  ??3bdUpgradeAnonUnoAccResponse@@SAXPEAX@Z(p);
}

/*
==============
bdUpgradeAnonUnoAccResponse::operator delete
==============
*/
void bdUpgradeAnonUnoAccResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

