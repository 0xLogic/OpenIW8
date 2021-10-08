/*
==============
bdHMacSHA512::operator delete
==============
*/

void __fastcall bdHMacSHA512::operator delete(void *p)
{
  ??3bdHMacSHA512@@SAXPEAX@Z(p);
}

/*
==============
bdHMacSHA512::operator delete
==============
*/

void __fastcall bdHMacSHA512::operator delete(void *__formal, void *a2)
{
  ??3bdHMacSHA512@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdHMacSHA512::operator delete
==============
*/
void bdHMacSHA512::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdHMacSHA512::operator delete
==============
*/
void bdHMacSHA512::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

