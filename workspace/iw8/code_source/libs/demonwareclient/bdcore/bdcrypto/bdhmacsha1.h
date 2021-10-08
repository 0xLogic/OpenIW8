/*
==============
bdHMacSHA1::operator delete
==============
*/

void __fastcall bdHMacSHA1::operator delete(void *p)
{
  ??3bdHMacSHA1@@SAXPEAX@Z(p);
}

/*
==============
bdHMacSHA1::operator delete
==============
*/

void __fastcall bdHMacSHA1::operator delete(void *__formal, void *a2)
{
  ??3bdHMacSHA1@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdHMacSHA1::operator delete
==============
*/
void bdHMacSHA1::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdHMacSHA1::operator delete
==============
*/
void bdHMacSHA1::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

