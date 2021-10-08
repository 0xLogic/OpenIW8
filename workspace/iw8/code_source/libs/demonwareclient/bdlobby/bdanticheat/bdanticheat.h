/*
==============
bdAntiCheat::operator delete
==============
*/

void __fastcall bdAntiCheat::operator delete(void *p)
{
  ??3bdAntiCheat@@SAXPEAX@Z(p);
}

/*
==============
bdAntiCheat::operator delete
==============
*/
void bdAntiCheat::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

