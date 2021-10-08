/*
==============
bdString::operator delete
==============
*/

void __fastcall bdString::operator delete(void *p)
{
  ??3bdString@@SAXPEAX@Z(p);
}

/*
==============
bdString::operator delete
==============
*/

void __fastcall bdString::operator delete(void *__formal, void *a2)
{
  ??3bdString@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdString::operator delete
==============
*/
void bdString::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdString::operator delete
==============
*/
void bdString::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

