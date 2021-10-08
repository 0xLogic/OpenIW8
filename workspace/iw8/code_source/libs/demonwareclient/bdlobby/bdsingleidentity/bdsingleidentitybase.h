/*
==============
bdSingleIdentityBase::operator delete
==============
*/

void __fastcall bdSingleIdentityBase::operator delete(void *p)
{
  ??3bdSingleIdentityBase@@SAXPEAX@Z(p);
}

/*
==============
bdSingleIdentityBase::operator delete
==============
*/
void bdSingleIdentityBase::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

