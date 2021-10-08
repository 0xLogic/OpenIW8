/*
==============
bdMessaging::operator delete
==============
*/

void __fastcall bdMessaging::operator delete(void *p)
{
  ??3bdMessaging@@SAXPEAX@Z(p);
}

/*
==============
bdMessaging::operator delete
==============
*/
void bdMessaging::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

