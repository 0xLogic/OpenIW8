/*
==============
bdCrossTitleLocalizedStrings::operator delete
==============
*/

void __fastcall bdCrossTitleLocalizedStrings::operator delete(void *p)
{
  ??3bdCrossTitleLocalizedStrings@@SAXPEAX@Z(p);
}

/*
==============
bdCrossTitleLocalizedStrings::operator delete
==============
*/
void bdCrossTitleLocalizedStrings::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

