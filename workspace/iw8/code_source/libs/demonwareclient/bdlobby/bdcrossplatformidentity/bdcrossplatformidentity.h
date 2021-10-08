/*
==============
bdCrossPlatformIdentity::operator delete
==============
*/

void __fastcall bdCrossPlatformIdentity::operator delete(void *p)
{
  ??3bdCrossPlatformIdentity@@SAXPEAX@Z(p);
}

/*
==============
bdCrossPlatformIdentity::operator delete
==============
*/
void bdCrossPlatformIdentity::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

