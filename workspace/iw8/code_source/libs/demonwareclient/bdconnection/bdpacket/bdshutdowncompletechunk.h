/*
==============
bdShutdownCompleteChunk::operator delete
==============
*/

void __fastcall bdShutdownCompleteChunk::operator delete(void *p)
{
  ??3bdShutdownCompleteChunk@@SAXPEAX@Z(p);
}

/*
==============
bdShutdownCompleteChunk::operator delete
==============
*/
void bdShutdownCompleteChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

