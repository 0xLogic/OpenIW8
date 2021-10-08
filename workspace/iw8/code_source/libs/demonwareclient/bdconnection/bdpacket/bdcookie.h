/*
==============
bdCookie::operator delete
==============
*/

void __fastcall bdCookie::operator delete(void *p)
{
  ??3bdCookie@@SAXPEAX@Z(p);
}

/*
==============
bdCookie::operator delete
==============
*/
void bdCookie::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

