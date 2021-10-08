/*
==============
bdRelayAssociation::operator delete
==============
*/

void __fastcall bdRelayAssociation::operator delete(void *p)
{
  ??3bdRelayAssociation@@SAXPEAX@Z(p);
}

/*
==============
bdRelayAssociation::operator delete
==============
*/
void bdRelayAssociation::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

