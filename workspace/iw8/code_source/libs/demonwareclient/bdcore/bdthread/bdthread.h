/*
==============
bdThread::operator delete
==============
*/

void __fastcall bdThread::operator delete(void *p)
{
  ??3bdThread@@SAXPEAX@Z(p);
}

/*
==============
bdThread::operator delete
==============
*/
void bdThread::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

