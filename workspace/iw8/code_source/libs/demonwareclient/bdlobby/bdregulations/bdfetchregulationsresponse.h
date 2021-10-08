/*
==============
bdFetchRegulationsResponse::operator delete
==============
*/

void __fastcall bdFetchRegulationsResponse::operator delete(void *p)
{
  ??3bdFetchRegulationsResponse@@SAXPEAX@Z(p);
}

/*
==============
bdFetchRegulationsResponse::operator delete
==============
*/
void bdFetchRegulationsResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

