/*
==============
bdHeartbeatAckChunk::operator delete
==============
*/

void __fastcall bdHeartbeatAckChunk::operator delete(void *p)
{
  ??3bdHeartbeatAckChunk@@SAXPEAX@Z(p);
}

/*
==============
bdHeartbeatAckChunk::operator delete
==============
*/
void bdHeartbeatAckChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

