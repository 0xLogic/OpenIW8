/*
==============
bdRESTRequestBuilder::operator delete
==============
*/

void __fastcall bdRESTRequestBuilder::operator delete(void *p)
{
  ??3bdRESTRequestBuilder@@SAXPEAX@Z(p);
}

/*
==============
bdRESTRequestBuilder::operator delete
==============
*/
void bdRESTRequestBuilder::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

