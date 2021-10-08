/*
==============
bdGetCrossPlatformUserSearchResponse::operator delete
==============
*/

void __fastcall bdGetCrossPlatformUserSearchResponse::operator delete(void *p)
{
  ??3bdGetCrossPlatformUserSearchResponse@@SAXPEAX@Z(p);
}

/*
==============
bdGetCrossPlatformUserSearchResponse::operator delete
==============
*/
void bdGetCrossPlatformUserSearchResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

