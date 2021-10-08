/*
==============
bdInitChunk::operator delete
==============
*/

void __fastcall bdInitChunk::operator delete(void *p)
{
  ??3bdInitChunk@@SAXPEAX@Z(p);
}

/*
==============
bdInitChunk::operator delete
==============
*/
void bdInitChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

