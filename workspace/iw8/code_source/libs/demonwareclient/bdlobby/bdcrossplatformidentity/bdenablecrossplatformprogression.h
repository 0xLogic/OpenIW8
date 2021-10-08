/*
==============
bdEnableCrossplatformProgression::operator delete
==============
*/

void __fastcall bdEnableCrossplatformProgression::operator delete(void *p)
{
  ??3bdEnableCrossplatformProgression@@SAXPEAX@Z(p);
}

/*
==============
bdEnableCrossplatformProgression::operator delete
==============
*/
void bdEnableCrossplatformProgression::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

