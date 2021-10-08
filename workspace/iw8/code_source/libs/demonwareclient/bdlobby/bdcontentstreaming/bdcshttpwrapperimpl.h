/*
==============
bdCSHTTPWrapperImpl::operator delete
==============
*/

void __fastcall bdCSHTTPWrapperImpl::operator delete(void *p)
{
  ??3bdCSHTTPWrapperImpl@@SAXPEAX@Z(p);
}

/*
==============
bdCSHTTPWrapperImpl::operator delete
==============
*/
void bdCSHTTPWrapperImpl::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

