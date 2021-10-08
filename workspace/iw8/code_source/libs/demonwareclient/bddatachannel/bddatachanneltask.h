/*
==============
bdDataChannelTask::operator delete
==============
*/

void __fastcall bdDataChannelTask::operator delete(void *p)
{
  ??3bdDataChannelTask@@SAXPEAX@Z(p);
}

/*
==============
bdDataChannelTask::operator delete
==============
*/
void bdDataChannelTask::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

