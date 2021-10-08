/*
==============
bdCrossPlatformUserLists::operator delete
==============
*/

void __fastcall bdCrossPlatformUserLists::operator delete(void *p)
{
  ??3bdCrossPlatformUserLists@@SAXPEAX@Z(p);
}

/*
==============
bdCrossPlatformUserLists::operator delete
==============
*/
void bdCrossPlatformUserLists::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

