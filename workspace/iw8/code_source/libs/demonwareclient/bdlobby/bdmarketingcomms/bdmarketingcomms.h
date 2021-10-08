/*
==============
bdMarketingComms::operator delete
==============
*/

void __fastcall bdMarketingComms::operator delete(void *p)
{
  ??3bdMarketingComms@@SAXPEAX@Z(p);
}

/*
==============
bdMarketingComms::operator delete
==============
*/
void bdMarketingComms::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

