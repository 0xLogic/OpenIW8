/*
==============
bdLoginTask::operator delete
==============
*/

void __fastcall bdLoginTask::operator delete(void *p)
{
  ??3bdLoginTask@@SAXPEAX@Z(p);
}

/*
==============
bdLoginTask::~bdLoginTask
==============
*/

void __fastcall bdLoginTask::~bdLoginTask(bdLoginTask *this)
{
  ??1bdLoginTask@@UEAA@XZ(this);
}

/*
==============
bdLoginTask::operator delete
==============
*/
void bdLoginTask::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

/*
==============
bdLoginTask::~bdLoginTask
==============
*/
void bdLoginTask::~bdLoginTask(bdLoginTask *this)
{
  this->__vftable = (bdLoginTask_vtbl *)&bdLoginTask::`vftable';
}

