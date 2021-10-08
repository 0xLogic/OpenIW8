/*
==============
bdTrulyRandomImpl::operator delete
==============
*/

void __fastcall bdTrulyRandomImpl::operator delete(void *p)
{
  ??3bdTrulyRandomImpl@@SAXPEAX@Z(p);
}

/*
==============
bdTrulyRandomImpl::operator delete
==============
*/
void bdTrulyRandomImpl::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

