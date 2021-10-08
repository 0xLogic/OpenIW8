/*
==============
bdContentStreaming::operator delete
==============
*/

void __fastcall bdContentStreaming::operator delete(void *p)
{
  ??3bdContentStreaming@@SAXPEAX@Z(p);
}

/*
==============
bdContentStreaming::operator delete
==============
*/
void bdContentStreaming::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

