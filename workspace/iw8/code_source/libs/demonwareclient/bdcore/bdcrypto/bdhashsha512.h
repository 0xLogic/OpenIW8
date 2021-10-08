/*
==============
bdHashSHA512::operator delete
==============
*/

void __fastcall bdHashSHA512::operator delete(void *__formal, void *a2)
{
  ??3bdHashSHA512@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdHashSHA512::operator delete
==============
*/

void __fastcall bdHashSHA512::operator delete(void *p)
{
  ??3bdHashSHA512@@SAXPEAX@Z(p);
}

/*
==============
bdHashSHA512::operator delete
==============
*/
void bdHashSHA512::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdHashSHA512::operator delete
==============
*/
void bdHashSHA512::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

