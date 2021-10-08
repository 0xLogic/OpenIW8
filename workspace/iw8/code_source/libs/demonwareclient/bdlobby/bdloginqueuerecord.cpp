/*
==============
bdLoginQueueRecord::deserialize
==============
*/

bool __fastcall bdLoginQueueRecord::deserialize(bdLoginQueueRecord *this, bdJSONDeserializer *responseJSON)
{
  return ?deserialize@bdLoginQueueRecord@@QEAA_NAEAVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdLoginQueueRecord::bdLoginQueueRecord
==============
*/

void __fastcall bdLoginQueueRecord::bdLoginQueueRecord(bdLoginQueueRecord *this)
{
  ??0bdLoginQueueRecord@@QEAA@XZ(this);
}

/*
==============
bdLoginQueueRecord::bdLoginQueueRecord
==============
*/

void __fastcall bdLoginQueueRecord::bdLoginQueueRecord(bdLoginQueueRecord *this, const unsigned int memberPosition, const unsigned int estimatedWaitTimeSec, const unsigned int nextPollAfterSec)
{
  ??0bdLoginQueueRecord@@QEAA@III@Z(this, memberPosition, estimatedWaitTimeSec, nextPollAfterSec);
}

/*
==============
bdLoginQueueRecord::~bdLoginQueueRecord
==============
*/

void __fastcall bdLoginQueueRecord::~bdLoginQueueRecord(bdLoginQueueRecord *this)
{
  ??1bdLoginQueueRecord@@UEAA@XZ(this);
}

/*
==============
bdLoginQueueRecord::bdLoginQueueRecord
==============
*/
void bdLoginQueueRecord::bdLoginQueueRecord(bdLoginQueueRecord *this, const unsigned int memberPosition, const unsigned int estimatedWaitTimeSec, const unsigned int nextPollAfterSec)
{
  this->m_position = memberPosition;
  this->__vftable = (bdLoginQueueRecord_vtbl *)&bdLoginQueueRecord::`vftable';
  this->m_estimatedWaitTimeSec = estimatedWaitTimeSec;
  this->m_nextPollAfterSec = nextPollAfterSec;
}

/*
==============
bdLoginQueueRecord::bdLoginQueueRecord
==============
*/
void bdLoginQueueRecord::bdLoginQueueRecord(bdLoginQueueRecord *this)
{
  *(_QWORD *)&this->m_position = -1i64;
  this->__vftable = (bdLoginQueueRecord_vtbl *)&bdLoginQueueRecord::`vftable';
  this->m_nextPollAfterSec = 0;
}

/*
==============
bdLoginQueueRecord::~bdLoginQueueRecord
==============
*/
void bdLoginQueueRecord::~bdLoginQueueRecord(bdLoginQueueRecord *this)
{
  this->__vftable = (bdLoginQueueRecord_vtbl *)&bdLoginQueueRecord::`vftable';
}

/*
==============
bdLoginQueueRecord::deserialize
==============
*/
_BOOL8 bdLoginQueueRecord::deserialize(bdLoginQueueRecord *this, bdJSONDeserializer *responseJSON)
{
  bool v4; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8[5]; 
  unsigned __int64 v9; 
  unsigned __int64 value; 

  v9 = 0i64;
  value = 0i64;
  v6 = 0i64;
  v7 = 0i64;
  v8[0] = 0i64;
  v4 = bdJSONDeserializer::getUInt64(responseJSON, "member_position", &v9) && bdJSONDeserializer::getUInt64(responseJSON, "estimated_wait_time", &value) && bdJSONDeserializer::getUInt64(responseJSON, "next_poll_after", &v7);
  if ( bdJSONDeserializer::hasKey(responseJSON, "estimated_wait_time_ms") )
    v4 = v4 && bdJSONDeserializer::getUInt64(responseJSON, "estimated_wait_time_ms", &v6);
  if ( bdJSONDeserializer::hasKey(responseJSON, "next_poll_after_ms") )
  {
    if ( v4 && bdJSONDeserializer::getUInt64(responseJSON, "next_poll_after_ms", v8) )
    {
      v4 = 1;
LABEL_19:
      this->m_position = v9;
      this->m_estimatedWaitTimeSec = value;
      this->m_estimatedWaitTimeMilliseconds = v6;
      this->m_nextPollAfterSec = v7;
      this->m_nextPollAfterMilliseconds = v8[0];
      this->m_ivSeed = 0;
      return v4;
    }
    v4 = 0;
  }
  else if ( v4 )
  {
    goto LABEL_19;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLoginQueueRecord", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdloginqueuerecord.cpp", "bdLoginQueueRecord::deserialize", 0x49u, "Unable to deserialize bdLoginQueueRecord: Invalid JSON response");
  return v4;
}

