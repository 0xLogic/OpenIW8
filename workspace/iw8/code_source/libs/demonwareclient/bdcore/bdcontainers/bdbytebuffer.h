/*
==============
bdByteBuffer::operator delete
==============
*/

void __fastcall bdByteBuffer::operator delete(void *p)
{
  ??3bdByteBuffer@@SAXPEAX@Z(p);
}

/*
==============
bdByteBuffer::operator delete
==============
*/
void bdByteBuffer::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

