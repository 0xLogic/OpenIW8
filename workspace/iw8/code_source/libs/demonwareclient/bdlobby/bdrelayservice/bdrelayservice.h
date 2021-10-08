/*
==============
bdRelayService::operator delete
==============
*/

void __fastcall bdRelayService::operator delete(void *p)
{
  ??3bdRelayService@@SAXPEAX@Z(p);
}

/*
==============
bdRelayService::operator delete
==============
*/
void bdRelayService::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

