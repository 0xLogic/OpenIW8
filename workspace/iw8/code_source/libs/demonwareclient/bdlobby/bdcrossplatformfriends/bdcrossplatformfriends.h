/*
==============
bdCrossPlatformFriends::operator delete
==============
*/

void __fastcall bdCrossPlatformFriends::operator delete(void *p)
{
  ??3bdCrossPlatformFriends@@SAXPEAX@Z(p);
}

/*
==============
bdCrossPlatformFriends::operator delete
==============
*/
void bdCrossPlatformFriends::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

