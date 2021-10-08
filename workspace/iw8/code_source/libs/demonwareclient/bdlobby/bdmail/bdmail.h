/*
==============
bdMail::operator delete
==============
*/

void __fastcall bdMail::operator delete(void *p)
{
  ??3bdMail@@SAXPEAX@Z(p);
}

/*
==============
bdMail::operator delete
==============
*/
void bdMail::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

