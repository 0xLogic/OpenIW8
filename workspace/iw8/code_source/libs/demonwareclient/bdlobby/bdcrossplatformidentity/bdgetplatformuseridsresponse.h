/*
==============
bdGetPlatformUserIDsResponse::operator delete
==============
*/

void __fastcall bdGetPlatformUserIDsResponse::operator delete(void *p)
{
  ??3bdGetPlatformUserIDsResponse@@SAXPEAX@Z(p);
}

/*
==============
bdGetPlatformUserIDsResponse::operator delete
==============
*/
void bdGetPlatformUserIDsResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

