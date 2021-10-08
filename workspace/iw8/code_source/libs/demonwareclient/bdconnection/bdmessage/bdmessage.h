/*
==============
bdMessage::operator delete
==============
*/

void __fastcall bdMessage::operator delete(void *p)
{
  ??3bdMessage@@SAXPEAX@Z(p);
}

/*
==============
bdMessage::operator delete
==============
*/
void bdMessage::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

