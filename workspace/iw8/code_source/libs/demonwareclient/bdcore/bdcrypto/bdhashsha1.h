/*
==============
bdHashSHA1::operator delete
==============
*/

void __fastcall bdHashSHA1::operator delete(void *p)
{
  ??3bdHashSHA1@@SAXPEAX@Z(p);
}

/*
==============
bdHashSHA1::operator delete
==============
*/

void __fastcall bdHashSHA1::operator delete(void *__formal, void *a2)
{
  ??3bdHashSHA1@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdHashSHA1::operator delete
==============
*/
void bdHashSHA1::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdHashSHA1::operator delete
==============
*/
void bdHashSHA1::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

