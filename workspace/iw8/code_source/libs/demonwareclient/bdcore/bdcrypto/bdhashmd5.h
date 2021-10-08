/*
==============
bdHashMD5::operator delete
==============
*/

void __fastcall bdHashMD5::operator delete(void *p)
{
  ??3bdHashMD5@@SAXPEAX@Z(p);
}

/*
==============
bdHashMD5::operator delete
==============
*/

void __fastcall bdHashMD5::operator delete(void *__formal, void *a2)
{
  ??3bdHashMD5@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdHashMD5::operator delete
==============
*/
void bdHashMD5::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdHashMD5::operator delete
==============
*/
void bdHashMD5::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

