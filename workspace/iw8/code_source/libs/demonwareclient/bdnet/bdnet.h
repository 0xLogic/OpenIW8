/*
==============
bdNetImpl::operator delete
==============
*/

void __fastcall bdNetImpl::operator delete(void *p)
{
  ??3bdNetImpl@@SAXPEAX@Z(p);
}

/*
==============
bdNetImpl::operator delete
==============
*/
void bdNetImpl::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

