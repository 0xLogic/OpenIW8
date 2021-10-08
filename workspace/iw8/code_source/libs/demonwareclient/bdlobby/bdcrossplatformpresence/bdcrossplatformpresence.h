/*
==============
bdCrossPlatformPresence::operator delete
==============
*/

void __fastcall bdCrossPlatformPresence::operator delete(void *p)
{
  ??3bdCrossPlatformPresence@@SAXPEAX@Z(p);
}

/*
==============
bdCrossPlatformPresence::operator delete
==============
*/
void bdCrossPlatformPresence::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

