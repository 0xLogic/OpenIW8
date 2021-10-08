/*
==============
bdGetCrossPlatformUsernamesResponse::operator delete
==============
*/

void __fastcall bdGetCrossPlatformUsernamesResponse::operator delete(void *p)
{
  ??3bdGetCrossPlatformUsernamesResponse@@SAXPEAX@Z(p);
}

/*
==============
bdGetCrossPlatformUsernamesResponse::operator delete
==============
*/
void bdGetCrossPlatformUsernamesResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

