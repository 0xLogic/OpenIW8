/*
==============
bdDataChannelManagerStandardImpl::operator delete
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::operator delete(void *p)
{
  ??3bdDataChannelManagerStandardImpl@@SAXPEAX@Z(p);
}

/*
==============
bdDataChannelManagerStandardImpl::operator delete
==============
*/
void bdDataChannelManagerStandardImpl::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

