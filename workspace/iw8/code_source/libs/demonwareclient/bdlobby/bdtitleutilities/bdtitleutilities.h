/*
==============
bdTitleUtilities::operator delete
==============
*/

void __fastcall bdTitleUtilities::operator delete(void *p)
{
  ??3bdTitleUtilities@@SAXPEAX@Z(p);
}

/*
==============
bdTitleUtilities::operator delete
==============
*/
void bdTitleUtilities::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

