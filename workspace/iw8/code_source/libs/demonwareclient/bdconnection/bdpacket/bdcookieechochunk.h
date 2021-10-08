/*
==============
bdCookieEchoChunk::operator delete
==============
*/

void __fastcall bdCookieEchoChunk::operator delete(void *p)
{
  ??3bdCookieEchoChunk@@SAXPEAX@Z(p);
}

/*
==============
bdCookieEchoChunk::operator delete
==============
*/
void bdCookieEchoChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

