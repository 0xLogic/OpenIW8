/*
==============
bdHTTPXboxOne::operator delete
==============
*/

void __fastcall bdHTTPXboxOne::operator delete(void *p)
{
  ??3bdHTTPXboxOne@@SAXPEAX@Z(p);
}

/*
==============
bdHTTPXboxOne::operator delete
==============
*/
void bdHTTPXboxOne::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

