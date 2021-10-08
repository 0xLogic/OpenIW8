/*
==============
bdGetCrossPlatformUserIDsResponse::operator delete
==============
*/

void __fastcall bdGetCrossPlatformUserIDsResponse::operator delete(void *p)
{
  ??3bdGetCrossPlatformUserIDsResponse@@SAXPEAX@Z(p);
}

/*
==============
bdGetCrossPlatformUserIDsResponse::operator delete
==============
*/
void bdGetCrossPlatformUserIDsResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

