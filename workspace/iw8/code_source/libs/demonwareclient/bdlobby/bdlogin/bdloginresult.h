/*
==============
bdLoginResult::operator delete
==============
*/

void __fastcall bdLoginResult::operator delete(void *p)
{
  ??3bdLoginResult@@SAXPEAX@Z(p);
}

/*
==============
bdLoginResult::operator delete
==============
*/
void bdLoginResult::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

