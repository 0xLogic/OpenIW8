/*
==============
bdRegulations::operator delete
==============
*/

void __fastcall bdRegulations::operator delete(void *p)
{
  ??3bdRegulations@@SAXPEAX@Z(p);
}

/*
==============
bdRegulations::operator delete
==============
*/
void bdRegulations::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

