/*
==============
bdDataChannelUserInfoV1::operator delete
==============
*/

void __fastcall bdDataChannelUserInfoV1::operator delete(void *p)
{
  ??3bdDataChannelUserInfoV1@@SAXPEAX@Z(p);
}

/*
==============
bdDataChannelUserInfoV2::operator delete
==============
*/

void __fastcall bdDataChannelUserInfoV2::operator delete(void *p)
{
  ??3bdDataChannelUserInfoV2@@SAXPEAX@Z(p);
}

/*
==============
bdDataChannelUserInfoV1::operator delete
==============
*/
void bdDataChannelUserInfoV1::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

/*
==============
bdDataChannelUserInfoV2::operator delete
==============
*/
void bdDataChannelUserInfoV2::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

