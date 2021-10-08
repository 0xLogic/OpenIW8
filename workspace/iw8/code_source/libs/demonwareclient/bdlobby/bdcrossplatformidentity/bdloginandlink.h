/*
==============
bdLoginAndLink::operator delete
==============
*/

void __fastcall bdLoginAndLink::operator delete(void *p)
{
  ??3bdLoginAndLink@@SAXPEAX@Z(p);
}

/*
==============
bdLoginAndLink::operator delete
==============
*/
void bdLoginAndLink::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

