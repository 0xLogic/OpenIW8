/*
==============
bdRESTResponseMessage::operator delete
==============
*/

void __fastcall bdRESTResponseMessage::operator delete(void *p)
{
  ??3bdRESTResponseMessage@@SAXPEAX@Z(p);
}

/*
==============
bdRESTResponseMessage::operator delete
==============
*/
void bdRESTResponseMessage::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

