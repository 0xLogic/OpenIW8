/*
==============
bdStreamingTask::operator delete
==============
*/

void __fastcall bdStreamingTask::operator delete(void *p)
{
  ??3bdStreamingTask@@SAXPEAX@Z(p);
}

/*
==============
bdStreamingTask::operator delete
==============
*/
void bdStreamingTask::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

