/*
==============
bdHeartbeatChunk::operator delete
==============
*/

void __fastcall bdHeartbeatChunk::operator delete(void *p)
{
  ??3bdHeartbeatChunk@@SAXPEAX@Z(p);
}

/*
==============
bdHeartbeatChunk::operator delete
==============
*/
void bdHeartbeatChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

