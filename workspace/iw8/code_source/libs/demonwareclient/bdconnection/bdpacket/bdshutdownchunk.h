/*
==============
bdShutdownChunk::operator delete
==============
*/

void __fastcall bdShutdownChunk::operator delete(void *p)
{
  ??3bdShutdownChunk@@SAXPEAX@Z(p);
}

/*
==============
bdShutdownChunk::operator delete
==============
*/
void bdShutdownChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

