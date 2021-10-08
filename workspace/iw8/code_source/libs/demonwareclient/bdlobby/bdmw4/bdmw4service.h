/*
==============
bdMW4Service::operator delete
==============
*/

void __fastcall bdMW4Service::operator delete(void *p)
{
  ??3bdMW4Service@@SAXPEAX@Z(p);
}

/*
==============
bdMW4Service::operator delete
==============
*/
void bdMW4Service::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

