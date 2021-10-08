/*
==============
bdAsyncMatchMaking::operator delete
==============
*/

void __fastcall bdAsyncMatchMaking::operator delete(void *p)
{
  ??3bdAsyncMatchMaking@@SAXPEAX@Z(p);
}

/*
==============
bdAsyncMatchMaking::operator delete
==============
*/
void bdAsyncMatchMaking::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

