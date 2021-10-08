/*
==============
bdFinishedTask::bdFinishedTask
==============
*/

void __fastcall bdFinishedTask::bdFinishedTask(bdFinishedTask *this, bdTask::bdStatus status)
{
  ??0bdFinishedTask@@QEAA@W4bdStatus@bdTask@@@Z(this, status);
}

/*
==============
bdFinishedTask::bdFinishedTask
==============
*/
void bdFinishedTask::bdFinishedTask(bdFinishedTask *this, bdTask::bdStatus status)
{
  bdRemoteTask::bdRemoteTask(this, status);
  this->__vftable = (bdFinishedTask_vtbl *)&bdFinishedTask::`vftable';
}

