/*
==============
bdCrossPlatformUser::operator delete[]
==============
*/

void __fastcall bdCrossPlatformUser::operator delete[](void *p)
{
  ??_VbdCrossPlatformUser@@SAXPEAX@Z(p);
}

/*
==============
bdCrossPlatformUser::operator delete[]
==============
*/
void bdCrossPlatformUser::operator delete[](void *p)
{
  bdMemory::deallocate(p);
}

