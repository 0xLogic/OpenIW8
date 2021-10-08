/*
==============
bdBitBuffer::operator delete
==============
*/

void __fastcall bdBitBuffer::operator delete(void *p)
{
  ??3bdBitBuffer@@SAXPEAX@Z(p);
}

/*
==============
bdBitBuffer::operator delete
==============
*/
void bdBitBuffer::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

