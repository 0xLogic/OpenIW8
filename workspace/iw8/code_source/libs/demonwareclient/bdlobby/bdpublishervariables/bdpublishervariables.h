/*
==============
bdPublisherVariables::operator delete
==============
*/

void __fastcall bdPublisherVariables::operator delete(void *p)
{
  ??3bdPublisherVariables@@SAXPEAX@Z(p);
}

/*
==============
bdPublisherVariables::operator delete
==============
*/
void bdPublisherVariables::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

