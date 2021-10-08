/*
==============
bdDataChannelTask::~bdDataChannelTask
==============
*/

void __fastcall bdDataChannelTask::~bdDataChannelTask(bdDataChannelTask *this)
{
  ??1bdDataChannelTask@@UEAA@XZ(this);
}

/*
==============
bdDataChannelTask::getStatus
==============
*/

bdTask::bdStatus __fastcall bdDataChannelTask::getStatus(bdDataChannelTask *this)
{
  return ?getStatus@bdDataChannelTask@@UEAA?AW4bdStatus@bdTask@@XZ(this);
}

/*
==============
bdDataChannelTask::bdDataChannelTask
==============
*/

void __fastcall bdDataChannelTask::bdDataChannelTask(bdDataChannelTask *this)
{
  ??0bdDataChannelTask@@QEAA@XZ(this);
}

/*
==============
bdDataChannelTask::bdDataChannelTask
==============
*/
void bdDataChannelTask::bdDataChannelTask(bdDataChannelTask *this)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdDataChannelTask_vtbl *)&bdDataChannelTask::`vftable';
  this->m_status = BD_EMPTY;
}

/*
==============
bdDataChannelTask::~bdDataChannelTask
==============
*/
void bdDataChannelTask::~bdDataChannelTask(bdDataChannelTask *this)
{
  this->__vftable = (bdDataChannelTask_vtbl *)&bdDataChannelTask::`vftable';
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdDataChannelTask::getStatus
==============
*/
__int64 bdDataChannelTask::getStatus(bdDataChannelTask *this)
{
  return (unsigned int)this->m_status;
}

