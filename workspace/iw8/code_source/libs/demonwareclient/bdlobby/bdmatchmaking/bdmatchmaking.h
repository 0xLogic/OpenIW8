/*
==============
bdMatchMaking::operator delete
==============
*/

void __fastcall bdMatchMaking::operator delete(void *p)
{
  ??3bdMatchMaking@@SAXPEAX@Z(p);
}

/*
==============
bdMatchMaking::operator delete
==============
*/
void bdMatchMaking::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

