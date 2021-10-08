/*
==============
bdHashSHA256::operator delete
==============
*/

void __fastcall bdHashSHA256::operator delete(void *__formal, void *a2)
{
  ??3bdHashSHA256@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdHashSHA256::operator delete
==============
*/

void __fastcall bdHashSHA256::operator delete(void *p)
{
  ??3bdHashSHA256@@SAXPEAX@Z(p);
}

/*
==============
bdHashSHA256::operator delete
==============
*/
void bdHashSHA256::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdHashSHA256::operator delete
==============
*/
void bdHashSHA256::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

