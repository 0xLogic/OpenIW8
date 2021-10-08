/*
==============
bdDTLSAssociation::operator delete
==============
*/

void __fastcall bdDTLSAssociation::operator delete(void *p)
{
  ??3bdDTLSAssociation@@SAXPEAX@Z(p);
}

/*
==============
bdDTLSAssociation::operator delete
==============
*/
void bdDTLSAssociation::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

