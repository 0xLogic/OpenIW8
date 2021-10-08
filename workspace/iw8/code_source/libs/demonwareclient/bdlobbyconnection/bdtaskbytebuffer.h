/*
==============
bdTaskByteBuffer::operator delete
==============
*/

void __fastcall bdTaskByteBuffer::operator delete(void *p)
{
  ??3bdTaskByteBuffer@@SAXPEAX@Z(p);
}

/*
==============
bdTaskByteBuffer::operator delete
==============
*/
void bdTaskByteBuffer::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

