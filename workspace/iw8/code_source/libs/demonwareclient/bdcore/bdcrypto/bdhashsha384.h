/*
==============
bdHashSHA384::operator delete
==============
*/

void __fastcall bdHashSHA384::operator delete(void *__formal, void *a2)
{
  ??3bdHashSHA384@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdHashSHA384::operator delete
==============
*/

void __fastcall bdHashSHA384::operator delete(void *p)
{
  ??3bdHashSHA384@@SAXPEAX@Z(p);
}

/*
==============
bdHashSHA384::operator delete
==============
*/
void bdHashSHA384::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdHashSHA384::operator delete
==============
*/
void bdHashSHA384::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

