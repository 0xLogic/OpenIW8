/*
==============
bdInitAckChunk::operator delete
==============
*/

void __fastcall bdInitAckChunk::operator delete(void *p)
{
  ??3bdInitAckChunk@@SAXPEAX@Z(p);
}

/*
==============
bdInitAckChunk::operator delete
==============
*/
void bdInitAckChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

