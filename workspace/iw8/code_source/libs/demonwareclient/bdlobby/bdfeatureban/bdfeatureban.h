/*
==============
bdFeatureBan::operator delete
==============
*/

void __fastcall bdFeatureBan::operator delete(void *p)
{
  ??3bdFeatureBan@@SAXPEAX@Z(p);
}

/*
==============
bdFeatureBan::operator delete
==============
*/
void bdFeatureBan::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

