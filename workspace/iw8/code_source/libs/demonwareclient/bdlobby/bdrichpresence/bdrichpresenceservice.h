/*
==============
bdRichPresenceService::operator delete
==============
*/

void __fastcall bdRichPresenceService::operator delete(void *p)
{
  ??3bdRichPresenceService@@SAXPEAX@Z(p);
}

/*
==============
bdRichPresenceService::operator delete
==============
*/
void bdRichPresenceService::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

