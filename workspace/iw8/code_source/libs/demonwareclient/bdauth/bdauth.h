/*
==============
bdAuth::operator delete
==============
*/

void __fastcall bdAuth::operator delete(void *p)
{
  ??3bdAuth@@SAXPEAX@Z(p);
}

/*
==============
bdAuth::operator delete
==============
*/
void bdAuth::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

