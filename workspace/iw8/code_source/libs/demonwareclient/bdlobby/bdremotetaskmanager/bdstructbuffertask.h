/*
==============
bdStructBufferTask::operator delete
==============
*/

void __fastcall bdStructBufferTask::operator delete(void *p)
{
  ??3bdStructBufferTask@@SAXPEAX@Z(p);
}

/*
==============
bdStructBufferTask::operator delete
==============
*/
void bdStructBufferTask::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

