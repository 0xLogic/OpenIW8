/*
==============
bdDataChunk::operator delete
==============
*/

void __fastcall bdDataChunk::operator delete(void *p)
{
  ??3bdDataChunk@@SAXPEAX@Z(p);
}

/*
==============
bdDataChunk::operator delete
==============
*/
void bdDataChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

