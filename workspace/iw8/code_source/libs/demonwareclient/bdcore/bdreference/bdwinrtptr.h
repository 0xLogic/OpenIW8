/*
==============
bdWinRTPtr::operator delete
==============
*/

void __fastcall bdWinRTPtr::operator delete(void *p)
{
  ??3bdWinRTPtr@@SAXPEAX@Z(p);
}

/*
==============
bdWinRTPtr::operator delete
==============
*/
void bdWinRTPtr::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

