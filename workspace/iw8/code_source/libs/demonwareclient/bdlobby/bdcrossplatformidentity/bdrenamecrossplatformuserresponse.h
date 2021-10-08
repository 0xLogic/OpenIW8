/*
==============
bdRenameCrossPlatformUserResponse::operator delete
==============
*/

void __fastcall bdRenameCrossPlatformUserResponse::operator delete(void *p)
{
  ??3bdRenameCrossPlatformUserResponse@@SAXPEAX@Z(p);
}

/*
==============
bdRenameCrossPlatformUserResponse::operator delete
==============
*/
void bdRenameCrossPlatformUserResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

