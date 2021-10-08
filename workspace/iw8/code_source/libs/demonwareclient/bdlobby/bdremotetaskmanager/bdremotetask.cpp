/*
==============
convert_service_to_string
==============
*/

void __fastcall convert_service_to_string(unsigned __int8 serviceid, char *str_buffer, const unsigned int len)
{
  ?convert_service_to_string@@YAXEPEADI@Z(serviceid, str_buffer, len);
}

/*
==============
bdRemoteTask::stop
==============
*/

void __fastcall bdRemoteTask::stop(bdRemoteTask *this, const bdReference<bdByteBuffer> results, const unsigned __int64 id)
{
  ?stop@bdRemoteTask@@IEAAXV?$bdReference@VbdByteBuffer@@@@_K@Z(this, results, id);
}

/*
==============
bdRemoteTask::cancelTask
==============
*/

void __fastcall bdRemoteTask::cancelTask(bdRemoteTask *this)
{
  ?cancelTask@bdRemoteTask@@QEAAXXZ(this);
}

/*
==============
add_task_entry
==============
*/

void __fastcall add_task_entry(unsigned __int64 transactionid, unsigned int startTime, unsigned __int8 serviceid, unsigned __int8 taskid)
{
  ?add_task_entry@@YAX_KIEE@Z(transactionid, startTime, serviceid, taskid);
}

/*
==============
tTaskInfo::tTaskInfo
==============
*/

void __fastcall tTaskInfo::tTaskInfo(tTaskInfo *this)
{
  ??0tTaskInfo@@QEAA@XZ(this);
}

/*
==============
bdRemoteTask::getTransactionID
==============
*/

unsigned __int64 __fastcall bdRemoteTask::getTransactionID(bdRemoteTask *this)
{
  return ?getTransactionID@bdRemoteTask@@QEBA_KXZ(this);
}

/*
==============
bdRemoteTask::setTimeout
==============
*/

void __fastcall bdRemoteTask::setTimeout(bdRemoteTask *this, const float timeout)
{
  ?setTimeout@bdRemoteTask@@UEAAXM@Z(this, timeout);
}

/*
==============
bdRemoteTask::getTaskId
==============
*/

unsigned __int8 __fastcall bdRemoteTask::getTaskId(bdRemoteTask *this)
{
  return ?getTaskId@bdRemoteTask@@QEBAEXZ(this);
}

/*
==============
bdRemoteTask::getTaskResult
==============
*/

bdTaskResult *__fastcall bdRemoteTask::getTaskResult(bdRemoteTask *this)
{
  return ?getTaskResult@bdRemoteTask@@QEAAPEAVbdTaskResult@@XZ(this);
}

/*
==============
bdRemoteTask::getServiceId
==============
*/

unsigned __int8 __fastcall bdRemoteTask::getServiceId(bdRemoteTask *this)
{
  return ?getServiceId@bdRemoteTask@@QEBAEXZ(this);
}

/*
==============
bdRemoteTask::bdRemoteTask
==============
*/

void __fastcall bdRemoteTask::bdRemoteTask(bdRemoteTask *this)
{
  ??0bdRemoteTask@@QEAA@XZ(this);
}

/*
==============
bdRemoteTask::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdRemoteTask::getErrorCode(bdRemoteTask *this)
{
  return ?getErrorCode@bdRemoteTask@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdRemoteTask::start
==============
*/

void __fastcall bdRemoteTask::start(bdRemoteTask *this, const float timeout)
{
  ?start@bdRemoteTask@@MEAAXM@Z(this, timeout);
}

/*
==============
bdRemoteTask::deserializeTaskReply
==============
*/

bool __fastcall bdRemoteTask::deserializeTaskReply(bdRemoteTask *this, const bdReference<bdByteBuffer> buffer)
{
  return ?deserializeTaskReply@bdRemoteTask@@MEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRemoteTask::bdRemoteTask
==============
*/

void __fastcall bdRemoteTask::bdRemoteTask(bdRemoteTask *this, bdTask::bdStatus status)
{
  ??0bdRemoteTask@@IEAA@W4bdStatus@bdTask@@@Z(this, status);
}

/*
==============
bdRemoteTask::getTimer
==============
*/

bdStopwatch *__fastcall bdRemoteTask::getTimer(bdRemoteTask *this, bdStopwatch *result)
{
  return ?getTimer@bdRemoteTask@@QEBA?AVbdStopwatch@@XZ(this, result);
}

/*
==============
bdRemoteTask::~bdRemoteTask
==============
*/

void __fastcall bdRemoteTask::~bdRemoteTask(bdRemoteTask *this)
{
  ??1bdRemoteTask@@UEAA@XZ(this);
}

/*
==============
print_task_list
==============
*/

void print_task_list(void)
{
  ?print_task_list@@YAXXZ();
}

/*
==============
bdRemoteTask::setTaskResult
==============
*/

void __fastcall bdRemoteTask::setTaskResult(bdRemoteTask *this, bdTaskResult *result, const unsigned int numResults)
{
  ?setTaskResult@bdRemoteTask@@QEAAXPEAVbdTaskResult@@I@Z(this, result, numResults);
}

/*
==============
bdRemoteTask::getTotalNumResults
==============
*/

unsigned int __fastcall bdRemoteTask::getTotalNumResults(bdRemoteTask *this)
{
  return ?getTotalNumResults@bdRemoteTask@@QEBAIXZ(this);
}

/*
==============
bdRemoteTask::handleAsyncTaskReply
==============
*/

void __fastcall bdRemoteTask::handleAsyncTaskReply(bdRemoteTask *this, const bdReference<bdByteBuffer> buffer)
{
  ?handleAsyncTaskReply@bdRemoteTask@@UEAAXV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRemoteTask::getNumResults
==============
*/

unsigned int __fastcall bdRemoteTask::getNumResults(bdRemoteTask *this)
{
  return ?getNumResults@bdRemoteTask@@QEBAIXZ(this);
}

/*
==============
bdRemoteTask::getByteResults
==============
*/

bdReference<bdByteBuffer> *__fastcall bdRemoteTask::getByteResults(bdRemoteTask *this, bdReference<bdByteBuffer> *result)
{
  return ?getByteResults@bdRemoteTask@@QEBA?AV?$bdReference@VbdByteBuffer@@@@XZ(this, result);
}

/*
==============
bdRemoteTask::getStatus
==============
*/

bdTask::bdStatus __fastcall bdRemoteTask::getStatus(bdRemoteTask *this)
{
  return ?getStatus@bdRemoteTask@@UEAA?AW4bdStatus@bdTask@@XZ(this);
}

/*
==============
bdRemoteTask::getTimeout
==============
*/

double __fastcall bdRemoteTask::getTimeout(bdRemoteTask *this)
{
  double result; 

  *(float *)&result = ?getTimeout@bdRemoteTask@@QEBAMXZ(this);
  return result;
}

/*
==============
bdRemoteTask::handleTaskReply
==============
*/

void __fastcall bdRemoteTask::handleTaskReply(bdRemoteTask *this, const bdReference<bdByteBuffer> buffer)
{
  ?handleTaskReply@bdRemoteTask@@QEAAXV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRemoteTask::setTaskResultProcessor
==============
*/

void __fastcall bdRemoteTask::setTaskResultProcessor(bdRemoteTask *this, bdTaskResultProcessor *processor)
{
  ?setTaskResultProcessor@bdRemoteTask@@QEAAXPEAVbdTaskResultProcessor@@@Z(this, processor);
}

/*
==============
bdRemoteTask::setTaskResultList
==============
*/

void __fastcall bdRemoteTask::setTaskResultList(bdRemoteTask *this, bdTaskResult **result, const unsigned int numResults)
{
  ?setTaskResultList@bdRemoteTask@@QEAAXPEAPEAVbdTaskResult@@I@Z(this, result, numResults);
}

/*
==============
bdRemoteTask::bdRemoteTask
==============
*/
void bdRemoteTask::bdRemoteTask(bdRemoteTask *this, bdTask::bdStatus status)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdRemoteTask_vtbl *)&bdRemoteTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_timer);
  this->m_timeout = 0.0;
  this->m_status = status;
  this->m_byteResults.m_ptr = NULL;
  this->m_taskResult = NULL;
  this->m_taskResultList = NULL;
  *(_QWORD *)&this->m_numResults = 0i64;
  this->m_totalNumResults = 0;
  this->m_transactionID = 0i64;
  this->m_errorCode = BD_NO_ERROR;
  this->m_taskResultProcessor = NULL;
}

/*
==============
bdRemoteTask::bdRemoteTask
==============
*/
void bdRemoteTask::bdRemoteTask(bdRemoteTask *this)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdRemoteTask_vtbl *)&bdRemoteTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_timer);
  *(_QWORD *)&this->m_timeout = 0i64;
  this->m_byteResults.m_ptr = NULL;
  this->m_taskResult = NULL;
  this->m_taskResultList = NULL;
  *(_QWORD *)&this->m_numResults = 0i64;
  this->m_totalNumResults = 0;
  this->m_transactionID = 0i64;
  this->m_errorCode = BD_NO_ERROR;
  this->m_taskResultProcessor = NULL;
  bdStopwatch::reset(&this->m_timer);
}

/*
==============
tTaskInfo::tTaskInfo
==============
*/
void tTaskInfo::tTaskInfo(tTaskInfo *this)
{
  this->transactionid = 0i64;
  this->starttime = 0;
  *(_WORD *)&this->serviceid = 0;
}

/*
==============
bdRemoteTask::~bdRemoteTask
==============
*/
void bdRemoteTask::~bdRemoteTask(bdRemoteTask *this)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v3; 

  this->__vftable = (bdRemoteTask_vtbl *)&bdRemoteTask::`vftable';
  m_ptr = this->m_byteResults.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_byteResults.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_byteResults.m_ptr = NULL;
  }
  bdReferencable::~bdReferencable(this);
}

/*
==============
add_task_entry
==============
*/
void add_task_entry(unsigned __int64 transactionid, unsigned int startTime, unsigned __int8 serviceid, unsigned __int8 taskid)
{
  int v5; 
  int v6; 
  __int64 v7; 

  v5 = 100 * (s_current_spot_to_use / 100);
  v6 = s_current_spot_to_use++;
  v7 = v6 - v5;
  s_last_n_transactions[v7].starttime = startTime;
  s_last_n_transactions[v7].transactionid = transactionid;
  s_last_n_transactions[v7].serviceid = serviceid;
  s_last_n_transactions[v7].taskid = taskid;
}

/*
==============
bdRemoteTask::cancelTask
==============
*/
void bdRemoteTask::cancelTask(bdRemoteTask *this)
{
  this->m_status = BD_CANCELLED;
}

/*
==============
convert_service_to_string
==============
*/
void convert_service_to_string(unsigned __int8 serviceid, char *str_buffer, const unsigned int len)
{
  int v3; 
  __int64 v4; 
  size_t v6; 
  const char *v7; 

  v3 = serviceid;
  v4 = len;
  bdHandleAssert(str_buffer != NULL, "str_buffer != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "convert_service_to_string", 0x31u, "str_buffer shouldn't be NULL");
  switch ( v3 )
  {
    case 3:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 26i64;
        v7 = "BD_TEAM_MANAGEMENT_SERVICE";
        goto LABEL_140;
      }
      break;
    case 4:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 16i64;
        v7 = "BD_STATS_SERVICE";
        goto LABEL_140;
      }
      break;
    case 6:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 20i64;
        v7 = "BD_MESSAGING_SERVICE";
        goto LABEL_140;
      }
      break;
    case 7:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 18i64;
        v7 = "BD_AUTH_SERVICE_ID";
        goto LABEL_140;
      }
      break;
    case 8:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 29i64;
        v7 = "BD_PROFILE_MANAGEMENT_SERVICE";
        goto LABEL_140;
      }
      break;
    case 9:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 29i64;
        v7 = "BD_FRIENDS_MANAGEMENT_SERVICE";
        goto LABEL_140;
      }
      break;
    case 10:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 18i64;
        v7 = "BD_STORAGE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 11:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 23i64;
        v7 = "BD_CHANNEL_CHAT_SERVICE";
        goto LABEL_140;
      }
      break;
    case 12:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 26i64;
        v7 = "BD_TITLE_UTILITIES_SERVICE";
        goto LABEL_140;
      }
      break;
    case 15:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 22i64;
        v7 = "BD_KEY_ARCHIVE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 18:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 14i64;
        v7 = "BD_LSG_SERVICE";
        goto LABEL_140;
      }
      break;
    case 19:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 22i64;
        v7 = "BD_ARBITRATION_SERVICE";
        goto LABEL_140;
      }
      break;
    case 21:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 22i64;
        v7 = "BD_MATCHMAKING_SERVICE";
        goto LABEL_140;
      }
      break;
    case 23:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 18i64;
        v7 = "BD_COUNTER_SERVICE";
        goto LABEL_140;
      }
      break;
    case 26:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 25i64;
        v7 = "BD_CONTENT_UNLOCK_SERVICE";
        goto LABEL_140;
      }
      break;
    case 27:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 14i64;
        v7 = "BD_DML_SERVICE";
        goto LABEL_140;
      }
      break;
    case 28:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 16i64;
        v7 = "BD_GROUP_SERVICE";
        goto LABEL_140;
      }
      break;
    case 29:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 15i64;
        v7 = "BD_MAIL_SERVICE";
        goto LABEL_140;
      }
      break;
    case 34:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 24i64;
        v7 = "BD_FACEBOOK_LITE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 35:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 18i64;
        v7 = "BD_TWITTER_SERVICE";
        goto LABEL_140;
      }
      break;
    case 36:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 19i64;
        v7 = "BD_FACEBOOK_SERVICE";
        goto LABEL_140;
      }
      break;
    case 38:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 20i64;
        v7 = "BD_ANTICHEAT_SERVICE";
        goto LABEL_140;
      }
      break;
    case 50:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 21i64;
        v7 = "BD_STREAMING_SERVICE2";
        goto LABEL_140;
      }
      break;
    case 52:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 14i64;
        v7 = "BD_TAG_SERVICE";
        goto LABEL_140;
      }
      break;
    case 53:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 25i64;
        v7 = "BD_REPORT_CONTENT_SERVICE";
        goto LABEL_140;
      }
      break;
    case 55:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 19i64;
        v7 = "BD_VOTERANK_SERVICE";
        goto LABEL_140;
      }
      break;
    case 57:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 19i64;
        v7 = "BD_LINKCODE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 58:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 25i64;
        v7 = "BD_POOLED_STORAGE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 65:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 20i64;
        v7 = "BD_USERGROUP_SERVICE";
        goto LABEL_140;
      }
      break;
    case 66:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 23i64;
        v7 = "BD_SUBSCRIPTION_SERVICE";
        goto LABEL_140;
      }
      break;
    case 67:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 19i64;
        v7 = "BD_EVENTLOG_SERVICE";
        goto LABEL_140;
      }
      break;
    case 68:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 23i64;
        v7 = "BD_RICHPRESENCE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 69:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 22i64;
        v7 = "BD_FEATURE_BAN_SERVICE";
        goto LABEL_140;
      }
      break;
    case 71:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 18i64;
        v7 = "BD_TENCENT_SERVICE";
        goto LABEL_140;
      }
      break;
    case 73:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 16i64;
        v7 = "BD_RELAY_SERVICE";
        goto LABEL_140;
      }
      break;
    case 80:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 22i64;
        v7 = "BD_MARKETPLACE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 81:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 17i64;
        v7 = "BD_LEAGUE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 82:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 23i64;
        v7 = "BD_LEAGUE_STATS_SERVICE";
        goto LABEL_140;
      }
      break;
    case 83:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 19i64;
        v7 = "BD_COMMERCE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 86:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 26i64;
        v7 = "BD_LINKED_ACCOUNTS_SERVICE";
        goto LABEL_140;
      }
      break;
    case 102:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 15i64;
        v7 = "BD_GMSG_SERVICE";
        goto LABEL_140;
      }
      break;
    case 103:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 19i64;
        v7 = "BD_PRESENCE_SERVICE";
        goto LABEL_140;
      }
      break;
    case 104:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 26i64;
        v7 = "BD_MARKETING_COMMS_SERVICE";
        goto LABEL_140;
      }
      break;
    case 191:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 15i64;
        v7 = "BD_CODO_SERVICE";
        goto LABEL_140;
      }
      break;
    case 193:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 28i64;
        v7 = "BD_OBJECTSTORE_PROXY_SERVICE";
        goto LABEL_140;
      }
      break;
    default:
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( (_DWORD)v4 && str_buffer )
      {
        v6 = 7i64;
        v7 = "UNKNOWN";
LABEL_140:
        if ( v4 - 1 <= v6 )
          v6 = v4 - 1;
        memcpy_0(str_buffer, v7, v6);
        str_buffer[v6] = 0;
      }
      break;
  }
}

/*
==============
bdRemoteTask::deserializeTaskReply
==============
*/
_BOOL8 bdRemoteTask::deserializeTaskReply(bdRemoteTask *this, const bdReference<bdByteBuffer> buffer)
{
  bdRemoteTask *v3; 
  bool v4; 
  bdTaskResult *m_taskResult; 
  __int64 v6; 
  bdTaskResult *v7; 
  unsigned int m_numResults; 
  unsigned int v9; 
  bool (__fastcall *deserialize)(bdTaskResult *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v11; 
  bdTaskResultProcessor *m_taskResultProcessor; 
  __int64 v13; 
  unsigned int m_maxNumResults; 
  unsigned int v15; 
  __int64 v16; 
  bdTaskResult *v17; 
  bool (__fastcall *v18)(bdTaskResult *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v19; 
  bdByteBuffer_vtbl *v22; 
  bdByteBuffer_vtbl *v23; 

  v3 = this;
  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numResults) )
    goto LABEL_32;
  v4 = 1;
  if ( !v3->m_numResults )
  {
    m_taskResultProcessor = v3->m_taskResultProcessor;
    if ( !m_taskResultProcessor )
      goto LABEL_34;
    v13 = 0i64;
LABEL_16:
    if ( m_taskResultProcessor->processResult(m_taskResultProcessor, v3->m_taskResult, v13) )
    {
      v4 = 1;
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &v3->m_totalNumResults) )
  {
LABEL_32:
    v4 = 0;
    goto LABEL_33;
  }
  m_taskResult = v3->m_taskResult;
  if ( m_taskResult )
  {
    v6 = m_taskResult->sizeOf(m_taskResult);
    v7 = v3->m_taskResult;
    m_numResults = v3->m_numResults;
    if ( m_numResults >= v3->m_maxNumResults )
      m_numResults = v3->m_maxNumResults;
    v9 = 0;
    if ( m_numResults )
    {
      do
      {
        if ( !v4 )
          break;
        bdHandleAssert(v7 != NULL, "taskResult != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::deserializeTaskReply", 0x1D2u, "taskResult shouldn't be NULL");
        deserialize = v7->deserialize;
        v11 = buffer.m_ptr->__vftable;
        v22 = v11;
        if ( v11 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v11->allocateBuffer, 1u);
        v4 = ((unsigned __int8 (__fastcall *)(bdTaskResult *, bdByteBuffer_vtbl **))deserialize)(v7, &v22) != 0;
        v7 = (bdTaskResult *)((char *)v7 + v6);
        ++v9;
      }
      while ( v9 < m_numResults );
      v3 = this;
    }
    m_taskResultProcessor = v3->m_taskResultProcessor;
    if ( !m_taskResultProcessor )
    {
LABEL_27:
      if ( v4 )
        goto LABEL_34;
LABEL_33:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::deserializeTaskReply", 0x1FBu, "Failed to deserialize task results (transaction ID: %I64u)!", v3->m_transactionID);
      goto LABEL_34;
    }
    if ( v4 )
    {
      v13 = m_numResults;
      goto LABEL_16;
    }
    goto LABEL_32;
  }
  if ( !v3->m_taskResultList )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::deserializeTaskReply", 0x1EBu, "Received task result but have nowhere to deserialize to (transaction ID: %I64u).", v3->m_transactionID);
    goto LABEL_34;
  }
  m_maxNumResults = v3->m_numResults;
  if ( m_maxNumResults >= v3->m_maxNumResults )
    m_maxNumResults = v3->m_maxNumResults;
  v15 = 0;
  if ( m_maxNumResults )
  {
    v16 = 0i64;
    while ( v4 )
    {
      bdHandleAssert(v3->m_taskResultList[v16] != NULL, "m_taskResultList[i] != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::deserializeTaskReply", 0x1E3u, "m_taskResultList[] shouldn't be NULL");
      v17 = v3->m_taskResultList[v16];
      v18 = v17->deserialize;
      v19 = buffer.m_ptr->__vftable;
      v23 = v19;
      if ( v19 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v19->allocateBuffer, 1u);
      v4 = ((unsigned __int8 (__fastcall *)(bdTaskResult *, bdByteBuffer_vtbl **))v18)(v17, &v23) != 0;
      ++v15;
      ++v16;
      if ( v15 >= m_maxNumResults )
        goto LABEL_27;
    }
    goto LABEL_33;
  }
LABEL_34:
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdRemoteTask::getByteResults
==============
*/
bdReference<bdByteBuffer> *bdRemoteTask::getByteResults(bdRemoteTask *this, bdReference<bdByteBuffer> *result)
{
  bdByteBuffer *m_ptr; 

  m_ptr = this->m_byteResults.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdRemoteTask::getErrorCode
==============
*/
__int64 bdRemoteTask::getErrorCode(bdRemoteTask *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdRemoteTask::getNumResults
==============
*/
__int64 bdRemoteTask::getNumResults(bdRemoteTask *this)
{
  return this->m_numResults;
}

/*
==============
bdRemoteTask::getServiceId
==============
*/
__int64 bdRemoteTask::getServiceId(bdRemoteTask *this)
{
  return this->m_serviceId;
}

/*
==============
bdRemoteTask::getStatus
==============
*/
__int64 bdRemoteTask::getStatus(bdRemoteTask *this)
{
  char v4; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v6; 
  double v10; 

  _RBX = this;
  if ( this->m_status != BD_PENDING )
    return (unsigned int)this->m_status;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rcx+18h]
  }
  if ( this->m_status )
    return (unsigned int)this->m_status;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
  __asm { vcomiss xmm0, dword ptr [rbx+18h] }
  if ( !v4 )
  {
    _RBX->m_status = BD_TIMED_OUT;
    m_ptr = _RBX->m_byteResults.m_ptr;
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v6 = _RBX->m_byteResults.m_ptr;
      if ( v6 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v6->~bdReferencable)(v6, 1i64);
    }
    _RBX->m_byteResults.m_ptr = NULL;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm0
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::getStatus", 0x100u, "Remote task timed out after %.3fs.", v10);
  }
  return (unsigned int)_RBX->m_status;
}

/*
==============
bdRemoteTask::getTaskId
==============
*/
__int64 bdRemoteTask::getTaskId(bdRemoteTask *this)
{
  return this->m_taskId;
}

/*
==============
bdRemoteTask::getTaskResult
==============
*/
bdTaskResult *bdRemoteTask::getTaskResult(bdRemoteTask *this)
{
  return this->m_taskResult;
}

/*
==============
bdRemoteTask::getTimeout
==============
*/
float bdRemoteTask::getTimeout(bdRemoteTask *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+18h] }
  return *(float *)&_XMM0;
}

/*
==============
bdRemoteTask::getTimer
==============
*/
bdStopwatch *bdRemoteTask::getTimer(bdRemoteTask *this, bdStopwatch *result)
{
  result->m_start = (unsigned __int64)this->m_timer;
  return result;
}

/*
==============
bdRemoteTask::getTotalNumResults
==============
*/
__int64 bdRemoteTask::getTotalNumResults(bdRemoteTask *this)
{
  return this->m_totalNumResults;
}

/*
==============
bdRemoteTask::getTransactionID
==============
*/
unsigned __int64 bdRemoteTask::getTransactionID(bdRemoteTask *this)
{
  return this->m_transactionID;
}

/*
==============
bdRemoteTask::handleAsyncTaskReply
==============
*/
void bdRemoteTask::handleAsyncTaskReply(bdRemoteTask *this, const bdReference<bdByteBuffer> buffer)
{
  unsigned int v4; 
  bool (__fastcall *deserializeTaskReply)(bdRemoteTask *, const bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v6; 
  char v7; 
  unsigned int line; 
  char *format; 
  unsigned __int64 m_transactionID; 
  unsigned int u; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer_vtbl *v13; 

  m_ptr = buffer.m_ptr;
  u = 4;
  bdLogMessage(BD_LOG_INFO, "info/", "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::handleAsyncTaskReply", 0x189u, "Received asynchronous task reply (transaction ID: %I64u).", this->m_transactionID);
  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &u) )
  {
LABEL_6:
    this->m_status = BD_FAILED;
    m_transactionID = this->m_transactionID;
    format = "Failed to deserialize asynchronous task result (transaction ID: %I64u)!";
    line = 438;
LABEL_7:
    this->m_errorCode = BD_HANDLE_TASK_FAILED;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::handleAsyncTaskReply", line, format, m_transactionID);
    goto LABEL_8;
  }
  v4 = u;
  if ( u )
  {
    this->m_status = BD_FAILED;
    if ( v4 == 200 )
    {
      m_transactionID = this->m_transactionID;
      format = "Received BD_ASYNCHRONOUS_ERROR in asynchronous reply (transaction ID: %I64u).  This should never happen!";
      line = 412;
      goto LABEL_7;
    }
    this->m_errorCode = v4;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::handleAsyncTaskReply", 0x1A5u, "Remote task failed (transaction ID: %I64u, error code: %u).", this->m_transactionID, v4);
    if ( this->m_errorCode == BD_TOO_MANY_TASKS )
    {
      j_printf("** Too many tasks outstanding within time limit. Output outstanding task list **\n");
      print_task_list();
    }
  }
  else
  {
    this->m_errorCode = BD_NO_ERROR;
    deserializeTaskReply = this->deserializeTaskReply;
    v6 = buffer.m_ptr->__vftable;
    v13 = v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->allocateBuffer, 1u);
    v7 = ((__int64 (__fastcall *)(bdRemoteTask *, bdByteBuffer_vtbl **))deserializeTaskReply)(this, &v13);
    this->m_status = BD_DONE;
    if ( !v7 )
      goto LABEL_6;
  }
LABEL_8:
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdRemoteTask::handleTaskReply
==============
*/
void bdRemoteTask::handleTaskReply(bdRemoteTask *this, const bdReference<bdByteBuffer> buffer)
{
  unsigned int v4; 
  bool (__fastcall *deserializeTaskReply)(bdRemoteTask *, const bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v6; 
  char v7; 
  __int64 v8[5]; 
  unsigned __int8 b; 
  unsigned int u; 

  v8[1] = -2i64;
  u = 4;
  if ( !bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_transactionID) || (bdLogMessage(BD_LOG_INFO, "info/", "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::handleTaskReply", 0x156u, "Received task reply (transaction ID: %I64u).", this->m_transactionID), !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &u)) )
  {
LABEL_11:
    this->m_errorCode = BD_HANDLE_TASK_FAILED;
    this->m_status = BD_FAILED;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::handleTaskReply", 0x180u, "Failed to deserialize task result!");
    goto LABEL_12;
  }
  v4 = u;
  if ( u )
  {
    if ( u != 200 )
    {
      this->m_errorCode = u;
      this->m_status = BD_FAILED;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::handleTaskReply", 0x16Fu, "Remote task failed (transaction ID: %I64u, error code: %u).", this->m_transactionID, v4);
      if ( this->m_errorCode == BD_TOO_MANY_TASKS )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::handleTaskReply", 0x174u, "** Too many tasks outstanding within time limit. Output outstanding task list **\n");
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "bdRemoteTask::handleTaskReply", 0x175u, "** transaction id will be 0 for incomplete transactions. **\n");
        print_task_list();
      }
    }
  }
  else
  {
    this->m_errorCode = BD_NO_ERROR;
    if ( !bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &b) )
      goto LABEL_9;
    deserializeTaskReply = this->deserializeTaskReply;
    v6 = buffer.m_ptr->__vftable;
    v8[0] = (__int64)v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->allocateBuffer, 1u);
    if ( ((unsigned __int8 (__fastcall *)(bdRemoteTask *, __int64 *))deserializeTaskReply)(this, v8) )
      v7 = 1;
    else
LABEL_9:
      v7 = 0;
    this->m_status = BD_DONE;
    if ( !v7 )
      goto LABEL_11;
  }
LABEL_12:
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
print_task_list
==============
*/
void print_task_list(void)
{
  int v0; 
  __int64 v1; 
  tTaskInfo *v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  char str_buffer[64]; 

  v0 = s_current_spot_to_use;
  v1 = 100i64;
  do
  {
    v2 = &s_last_n_transactions[v0 % 100];
    if ( v2->starttime )
    {
      convert_service_to_string(v2->serviceid, str_buffer, 0x40u);
      LODWORD(v5) = v2->taskid;
      LODWORD(v4) = v2->serviceid;
      LODWORD(v3) = v2->starttime;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRemoteTask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdremotetask.cpp", "print_task_list", 0xCDu, "\t%d transactionid : %I64u serviceid : %d (%s) taskid %d\n", v3, v2->transactionid, v4, str_buffer, v5);
    }
    ++v0;
    --v1;
  }
  while ( v1 );
}

/*
==============
bdRemoteTask::setTaskResult
==============
*/
void bdRemoteTask::setTaskResult(bdRemoteTask *this, bdTaskResult *result, const unsigned int numResults)
{
  this->m_taskResult = result;
  this->m_maxNumResults = numResults;
}

/*
==============
bdRemoteTask::setTaskResultList
==============
*/
void bdRemoteTask::setTaskResultList(bdRemoteTask *this, bdTaskResult **result, const unsigned int numResults)
{
  this->m_taskResultList = result;
  this->m_maxNumResults = numResults;
}

/*
==============
bdRemoteTask::setTaskResultProcessor
==============
*/
void bdRemoteTask::setTaskResultProcessor(bdRemoteTask *this, bdTaskResultProcessor *processor)
{
  this->m_taskResultProcessor = processor;
}

/*
==============
bdRemoteTask::setTimeout
==============
*/

void __fastcall bdRemoteTask::setTimeout(bdRemoteTask *this, double timeout)
{
  __asm { vmovss  dword ptr [rcx+18h], xmm1 }
}

/*
==============
bdRemoteTask::start
==============
*/

void __fastcall bdRemoteTask::start(bdRemoteTask *this, double timeout)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v6; 
  unsigned __int8 m_taskId; 
  unsigned __int8 m_serviceId; 
  unsigned int LoResTimeStamp; 
  unsigned __int64 m_transactionID; 
  unsigned int v11; 
  __int64 v13; 

  _RSI = this;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  bdStopwatch::start(&this->m_timer);
  __asm { vmovss  dword ptr [rsi+18h], xmm6 }
  _RSI->m_status = BD_PENDING;
  m_ptr = _RSI->m_byteResults.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v6 = _RSI->m_byteResults.m_ptr;
      if ( v6 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v6->~bdReferencable)(v6, 1i64);
    }
  }
  _RSI->m_byteResults.m_ptr = NULL;
  m_taskId = _RSI->m_taskId;
  m_serviceId = _RSI->m_serviceId;
  LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
  m_transactionID = _RSI->m_transactionID;
  v11 = LoResTimeStamp;
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  v13 = s_current_spot_to_use % 100;
  ++s_current_spot_to_use;
  s_last_n_transactions[v13].serviceid = m_serviceId;
  s_last_n_transactions[v13].starttime = v11;
  s_last_n_transactions[v13].transactionid = m_transactionID;
  s_last_n_transactions[v13].taskid = m_taskId;
}

/*
==============
bdRemoteTask::stop
==============
*/
void bdRemoteTask::stop(bdRemoteTask *this, const bdReference<bdByteBuffer> results, const unsigned __int64 id)
{
  bdReference<bdByteBuffer> *p_m_byteResults; 
  bdByteBuffer_vtbl *v7; 

  p_m_byteResults = &this->m_byteResults;
  this->m_status = BD_DONE;
  if ( (bdReference<bdByteBuffer> *)results.m_ptr != &this->m_byteResults )
  {
    if ( p_m_byteResults->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_byteResults->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_byteResults->m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))p_m_byteResults->m_ptr->~bdReferencable)(p_m_byteResults->m_ptr, 1i64);
    v7 = results.m_ptr->__vftable;
    p_m_byteResults->m_ptr = (bdByteBuffer *)results.m_ptr->__vftable;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->allocateBuffer, 1u);
  }
  this->m_transactionID = id;
  if ( results.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&results.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( results.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))results.m_ptr->~bdReferencable)(results.m_ptr->__vftable, 1i64);
    results.m_ptr->__vftable = NULL;
  }
}

