/*
==============
bdHMacSHA256::operator delete
==============
*/

void __fastcall bdHMacSHA256::operator delete(void *__formal, void *a2)
{
  ??3bdHMacSHA256@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdHMacSHA256::operator delete
==============
*/

void __fastcall bdHMacSHA256::operator delete(void *p)
{
  ??3bdHMacSHA256@@SAXPEAX@Z(p);
}

/*
==============
bdHMacSHA256::operator delete
==============
*/
void bdHMacSHA256::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdHMacSHA256::operator delete
==============
*/
void bdHMacSHA256::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

