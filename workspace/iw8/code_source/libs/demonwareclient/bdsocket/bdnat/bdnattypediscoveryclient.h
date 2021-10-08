/*
==============
bdNATTypeDiscoveryClient::operator delete
==============
*/

void __fastcall bdNATTypeDiscoveryClient::operator delete(void *p)
{
  ??3bdNATTypeDiscoveryClient@@SAXPEAX@Z(p);
}

/*
==============
bdNATTypeDiscoveryClient::operator delete
==============
*/
void bdNATTypeDiscoveryClient::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

