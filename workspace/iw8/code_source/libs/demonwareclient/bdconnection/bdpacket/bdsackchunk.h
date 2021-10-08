/*
==============
bdSAckChunk::operator delete
==============
*/

void __fastcall bdSAckChunk::operator delete(void *p)
{
  ??3bdSAckChunk@@SAXPEAX@Z(p);
}

/*
==============
bdSAckChunk::operator delete
==============
*/
void bdSAckChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

