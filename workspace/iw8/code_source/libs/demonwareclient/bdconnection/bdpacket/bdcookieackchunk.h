/*
==============
bdCookieAckChunk::operator delete
==============
*/

void __fastcall bdCookieAckChunk::operator delete(void *p)
{
  ??3bdCookieAckChunk@@SAXPEAX@Z(p);
}

/*
==============
bdCookieAckChunk::operator delete
==============
*/
void bdCookieAckChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

