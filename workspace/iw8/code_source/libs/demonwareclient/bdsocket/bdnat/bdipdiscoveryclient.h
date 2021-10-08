/*
==============
bdIPDiscoveryClient::operator delete
==============
*/

void __fastcall bdIPDiscoveryClient::operator delete(void *p)
{
  ??3bdIPDiscoveryClient@@SAXPEAX@Z(p);
}

/*
==============
bdIPDiscoveryClient::operator delete
==============
*/
void bdIPDiscoveryClient::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

