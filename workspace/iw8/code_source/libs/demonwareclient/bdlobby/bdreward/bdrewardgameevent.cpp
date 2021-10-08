/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/

void __fastcall bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this, const char *eventName, unsigned __int64 value, bdRewardGameEventTimeStamp timeStamp)
{
  ??0bdRewardGameEvent@@QEAA@PEBD_KVbdRewardGameEventTimeStamp@@@Z(this, eventName, value, timeStamp);
}

/*
==============
bdRewardGameEvent::getEventValues
==============
*/

unsigned int __fastcall bdRewardGameEvent::getEventValues(bdRewardGameEvent *this, const bdRewardGameEventValue **outValues)
{
  return ?getEventValues@bdRewardGameEvent@@QEBAIPEAPEBVbdRewardGameEventValue@@@Z(this, outValues);
}

/*
==============
bdRewardGameEventValue::setKey
==============
*/

unsigned __int64 __fastcall bdRewardGameEventValue::setKey(bdRewardGameEventValue *this, const char *key)
{
  return ?setKey@bdRewardGameEventValue@@IEAA_KPEBD@Z(this, key);
}

/*
==============
bdRewardGameEventValue::set
==============
*/

void __fastcall bdRewardGameEventValue::set(bdRewardGameEventValue *this, const char *key, unsigned __int64 value)
{
  ?set@bdRewardGameEventValue@@QEAAXPEBD_K@Z(this, key, value);
}

/*
==============
bdRewardUserGameEventsList::bdRewardUserGameEventsList
==============
*/

void __fastcall bdRewardUserGameEventsList::bdRewardUserGameEventsList(bdRewardUserGameEventsList *this, const bdUserAccountID *user, const unsigned int numEvents, const bdRewardGameEvent **eventsList)
{
  ??0bdRewardUserGameEventsList@@QEAA@VbdUserAccountID@@IQEAPEBVbdRewardGameEvent@@@Z(this, user, numEvents, eventsList);
}

/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/

void __fastcall bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this, const char *eventName, const bdRewardGameEventValue *values, const unsigned int numValues, bdRewardGameEventTimeStamp timeStamp)
{
  ??0bdRewardGameEvent@@QEAA@PEBDQEBVbdRewardGameEventValue@@IVbdRewardGameEventTimeStamp@@@Z(this, eventName, values, numValues, timeStamp);
}

/*
==============
bdRewardGameEvent::setEventTimeStamp
==============
*/

void __fastcall bdRewardGameEvent::setEventTimeStamp(bdRewardGameEvent *this, unsigned __int64 timeStamp)
{
  ?setEventTimeStamp@bdRewardGameEvent@@QEAAX_K@Z(this, timeStamp);
}

/*
==============
bdRewardGameEvent::setEventValues
==============
*/

void __fastcall bdRewardGameEvent::setEventValues(bdRewardGameEvent *this, const bdRewardGameEventValue *values, const unsigned int numValues)
{
  ?setEventValues@bdRewardGameEvent@@QEAAXQEBVbdRewardGameEventValue@@I@Z(this, values, numValues);
}

/*
==============
bdRewardGameEventValue::bdRewardGameEventValue
==============
*/

void __fastcall bdRewardGameEventValue::bdRewardGameEventValue(bdRewardGameEventValue *this, const char *key, unsigned __int64 value)
{
  ??0bdRewardGameEventValue@@QEAA@PEBD_K@Z(this, key, value);
}

/*
==============
bdRewardUserGameEventsList::setUser
==============
*/

void __fastcall bdRewardUserGameEventsList::setUser(bdRewardUserGameEventsList *this, const bdUserAccountID *user)
{
  ?setUser@bdRewardUserGameEventsList@@QEAAXVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdRewardGameEventTimeStamp::bdRewardGameEventTimeStamp
==============
*/

void __fastcall bdRewardGameEventTimeStamp::bdRewardGameEventTimeStamp(bdRewardGameEventTimeStamp *this)
{
  ??0bdRewardGameEventTimeStamp@@QEAA@XZ(this);
}

/*
==============
bdRewardGameEventTimeStamp::setUInt64
==============
*/

void __fastcall bdRewardGameEventTimeStamp::setUInt64(bdRewardGameEventTimeStamp *this, unsigned __int64 timeStampMilliseconds)
{
  ?setUInt64@bdRewardGameEventTimeStamp@@QEAAX_K@Z(this, timeStampMilliseconds);
}

/*
==============
bdRewardGameEvent::serialize
==============
*/

bool __fastcall bdRewardGameEvent::serialize(bdRewardGameEvent *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdRewardGameEvent@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/

void __fastcall bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this, const char *eventName, unsigned __int64 value)
{
  ??0bdRewardGameEvent@@QEAA@PEBD_K@Z(this, eventName, value);
}

/*
==============
bdRewardUserGameEventsList::bdRewardUserGameEventsList
==============
*/

void __fastcall bdRewardUserGameEventsList::bdRewardUserGameEventsList(bdRewardUserGameEventsList *this)
{
  ??0bdRewardUserGameEventsList@@QEAA@XZ(this);
}

/*
==============
bdRewardGameEventTimeStamp::getUInt64
==============
*/

unsigned __int64 __fastcall bdRewardGameEventTimeStamp::getUInt64(bdRewardGameEventTimeStamp *this)
{
  return ?getUInt64@bdRewardGameEventTimeStamp@@QEBA_KXZ(this);
}

/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/

void __fastcall bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this, const char *eventName, const bdRewardGameEventValue *values, const unsigned int numValues)
{
  ??0bdRewardGameEvent@@QEAA@PEBDQEBVbdRewardGameEventValue@@I@Z(this, eventName, values, numValues);
}

/*
==============
bdRewardGameEvent::getEventTimeStamp
==============
*/

bdRewardGameEventTimeStamp *__fastcall bdRewardGameEvent::getEventTimeStamp(bdRewardGameEvent *this, bdRewardGameEventTimeStamp *result)
{
  return ?getEventTimeStamp@bdRewardGameEvent@@QEBA?AVbdRewardGameEventTimeStamp@@XZ(this, result);
}

/*
==============
bdRewardGameEventValue::serialize
==============
*/

bool __fastcall bdRewardGameEventValue::serialize(bdRewardGameEventValue *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdRewardGameEventValue@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/

void __fastcall bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this)
{
  ??0bdRewardGameEvent@@QEAA@XZ(this);
}

/*
==============
bdRewardUserGameEventsList::bdRewardUserGameEventsList
==============
*/

void __fastcall bdRewardUserGameEventsList::bdRewardUserGameEventsList(bdRewardUserGameEventsList *this, const bdUserAccountID *user)
{
  ??0bdRewardUserGameEventsList@@QEAA@VbdUserAccountID@@@Z(this, user);
}

/*
==============
bdRewardGameEvent::setEventName
==============
*/

unsigned __int64 __fastcall bdRewardGameEvent::setEventName(bdRewardGameEvent *this, const char *eventName)
{
  return ?setEventName@bdRewardGameEvent@@QEAA_KPEBD@Z(this, eventName);
}

/*
==============
bdRewardGameEventTimeStamp::~bdRewardGameEventTimeStamp
==============
*/

void __fastcall bdRewardGameEventTimeStamp::~bdRewardGameEventTimeStamp(bdRewardGameEventTimeStamp *this)
{
  ??1bdRewardGameEventTimeStamp@@QEAA@XZ(this);
}

/*
==============
bdRewardGameEventValue::bdRewardGameEventValue
==============
*/

void __fastcall bdRewardGameEventValue::bdRewardGameEventValue(bdRewardGameEventValue *this)
{
  ??0bdRewardGameEventValue@@QEAA@XZ(this);
}

/*
==============
bdRewardGameEventValue::getValue
==============
*/

unsigned __int64 __fastcall bdRewardGameEventValue::getValue(bdRewardGameEventValue *this)
{
  return ?getValue@bdRewardGameEventValue@@QEBA_KXZ(this);
}

/*
==============
bdRewardUserGameEventsList::serialize
==============
*/

bool __fastcall bdRewardUserGameEventsList::serialize(bdRewardUserGameEventsList *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdRewardUserGameEventsList@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdRewardGameEvent::getEventName
==============
*/

const char *__fastcall bdRewardGameEvent::getEventName(bdRewardGameEvent *this)
{
  return ?getEventName@bdRewardGameEvent@@QEBAPEBDXZ(this);
}

/*
==============
bdRewardGameEvent::setEventTimeStamp
==============
*/

void __fastcall bdRewardGameEvent::setEventTimeStamp(bdRewardGameEvent *this, bdRewardGameEventTimeStamp timeStamp)
{
  ?setEventTimeStamp@bdRewardGameEvent@@QEAAXVbdRewardGameEventTimeStamp@@@Z(this, timeStamp);
}

/*
==============
bdRewardUserGameEventsList::~bdRewardUserGameEventsList
==============
*/

void __fastcall bdRewardUserGameEventsList::~bdRewardUserGameEventsList(bdRewardUserGameEventsList *this)
{
  ??1bdRewardUserGameEventsList@@UEAA@XZ(this);
}

/*
==============
bdRewardGameEventValue::getKey
==============
*/

const char *__fastcall bdRewardGameEventValue::getKey(bdRewardGameEventValue *this)
{
  return ?getKey@bdRewardGameEventValue@@QEBAPEBDXZ(this);
}

/*
==============
bdRewardGameEvent::~bdRewardGameEvent
==============
*/

void __fastcall bdRewardGameEvent::~bdRewardGameEvent(bdRewardGameEvent *this)
{
  ??1bdRewardGameEvent@@UEAA@XZ(this);
}

/*
==============
bdRewardUserGameEventsList::setEventsList
==============
*/

void __fastcall bdRewardUserGameEventsList::setEventsList(bdRewardUserGameEventsList *this, const unsigned int numEvents, const bdRewardGameEvent **eventsList)
{
  ?setEventsList@bdRewardUserGameEventsList@@QEAAXIQEAPEBVbdRewardGameEvent@@@Z(this, numEvents, eventsList);
}

/*
==============
bdRewardGameEventValue::~bdRewardGameEventValue
==============
*/

void __fastcall bdRewardGameEventValue::~bdRewardGameEventValue(bdRewardGameEventValue *this)
{
  ??1bdRewardGameEventValue@@UEAA@XZ(this);
}

/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/
void bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this, const char *eventName, const bdRewardGameEventValue *values, const unsigned int numValues, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardGameEvent::`vbtable';
    *(_QWORD *)&this->gap304[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap304[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardGameEvent_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdReferencable'};
  this->m_timeStamp.m_timeStamp = 1000 * bdPlatformTiming::getPOSIXTimestamp();
  `eh vector vbase constructor iterator'(this->m_values, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdRewardGameEventValue::bdRewardGameEventValue, (void (__fastcall *)(void *))bdRewardGameEventValue::`vbase destructor);
  bdRewardGameEvent::setEventValues(this, values, numValues);
  bdRewardGameEvent::setEventName(this, eventName);
}

/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/
void bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this, const char *eventName, const bdRewardGameEventValue *values, const unsigned int numValues, bdRewardGameEventTimeStamp timeStamp, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardGameEvent::`vbtable';
    *(_QWORD *)&this->gap304[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap304[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardGameEvent_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdReferencable'};
  this->m_timeStamp = timeStamp;
  `eh vector vbase constructor iterator'(this->m_values, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdRewardGameEventValue::bdRewardGameEventValue, (void (__fastcall *)(void *))bdRewardGameEventValue::`vbase destructor);
  bdRewardGameEvent::setEventValues(this, values, numValues);
  bdRewardGameEvent::setEventName(this, eventName);
}

/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/
void bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this, const char *eventName, unsigned __int64 value, int a4)
{
  bdRewardGameEventValue ptr; 

  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardGameEvent::`vbtable';
    *(_QWORD *)&this->gap304[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap304[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardGameEvent_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdReferencable'};
  this->m_timeStamp.m_timeStamp = 1000 * bdPlatformTiming::getPOSIXTimestamp();
  `eh vector vbase constructor iterator'(this->m_values, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdRewardGameEventValue::bdRewardGameEventValue, (void (__fastcall *)(void *))bdRewardGameEventValue::`vbase destructor);
  *((_QWORD *)&ptr.__vftable + 1) = &bdRewardGameEventValue::`vbtable';
  *(&ptr.m_value + 1) = (unsigned __int64)&bdReferencable::`vftable';
  *((_DWORD *)&ptr.m_value + 4) = 0;
  bdStructBufferSerializable::bdStructBufferSerializable(&ptr);
  ptr.__vftable = (bdRewardGameEventValue_vtbl *)&bdRewardGameEventValue::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&ptr.m_key[*(int *)(*((_QWORD *)&ptr.__vftable + 1) + 4i64) - 24] = &bdRewardGameEventValue::`vftable'{for `bdReferencable'};
  ptr.m_value = value;
  if ( bdStrlcpy((char *const)&ptr.__vftable + 16, (const char *const)&stru_143CE7590, 0x14ui64) >= 0x14 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward/bdRewardGameEvent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEventValue::setKey", 0xB6u, "key [%s] is too long", (const char *)&stru_143CE7590);
  bdRewardGameEvent::setEventValues(this, &ptr, 1u);
  bdRewardGameEvent::setEventName(this, eventName);
  `eh vector destructor iterator'(&ptr, 0x40ui64, 1ui64, (void (__fastcall *)(void *))bdRewardGameEventValue::`vbase destructor);
}

/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/
void bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this, const char *eventName, unsigned __int64 value, bdRewardGameEventTimeStamp timeStamp, int a5)
{
  bdRewardGameEventValue ptr; 

  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardGameEvent::`vbtable';
    *(_QWORD *)&this->gap304[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap304[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardGameEvent_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdReferencable'};
  this->m_timeStamp = timeStamp;
  `eh vector vbase constructor iterator'(this->m_values, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdRewardGameEventValue::bdRewardGameEventValue, (void (__fastcall *)(void *))bdRewardGameEventValue::`vbase destructor);
  *((_QWORD *)&ptr.__vftable + 1) = &bdRewardGameEventValue::`vbtable';
  *(&ptr.m_value + 1) = (unsigned __int64)&bdReferencable::`vftable';
  *((_DWORD *)&ptr.m_value + 4) = 0;
  bdStructBufferSerializable::bdStructBufferSerializable(&ptr);
  ptr.__vftable = (bdRewardGameEventValue_vtbl *)&bdRewardGameEventValue::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&ptr.m_key[*(int *)(*((_QWORD *)&ptr.__vftable + 1) + 4i64) - 24] = &bdRewardGameEventValue::`vftable'{for `bdReferencable'};
  ptr.m_value = value;
  if ( bdStrlcpy((char *const)&ptr.__vftable + 16, (const char *const)&stru_143CE7590, 0x14ui64) >= 0x14 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward/bdRewardGameEvent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEventValue::setKey", 0xB6u, "key [%s] is too long", (const char *)&stru_143CE7590);
  bdRewardGameEvent::setEventValues(this, &ptr, 1u);
  bdRewardGameEvent::setEventName(this, eventName);
  `eh vector destructor iterator'(&ptr, 0x40ui64, 1ui64, (void (__fastcall *)(void *))bdRewardGameEventValue::`vbase destructor);
}

/*
==============
bdRewardGameEvent::bdRewardGameEvent
==============
*/
void bdRewardGameEvent::bdRewardGameEvent(bdRewardGameEvent *this, int a2)
{
  bdRewardGameEventValue ptr; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardGameEvent::`vbtable';
    *(_QWORD *)&this->gap304[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap304[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardGameEvent_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardGameEvent_vtbl *)&bdRewardGameEvent::`vftable'{for `bdReferencable'};
  this->m_timeStamp.m_timeStamp = 1000 * bdPlatformTiming::getPOSIXTimestamp();
  `eh vector vbase constructor iterator'(this->m_values, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdRewardGameEventValue::bdRewardGameEventValue, (void (__fastcall *)(void *))bdRewardGameEventValue::`vbase destructor);
  *((_QWORD *)&ptr.__vftable + 1) = &bdRewardGameEventValue::`vbtable';
  *(&ptr.m_value + 1) = (unsigned __int64)&bdReferencable::`vftable';
  *((_DWORD *)&ptr.m_value + 4) = 0;
  bdStructBufferSerializable::bdStructBufferSerializable(&ptr);
  ptr.__vftable = (bdRewardGameEventValue_vtbl *)&bdRewardGameEventValue::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&ptr.m_key[*(int *)(*((_QWORD *)&ptr.__vftable + 1) + 4i64) - 24] = &bdRewardGameEventValue::`vftable'{for `bdReferencable'};
  ptr.m_value = 0i64;
  if ( bdStrlcpy((char *const)&ptr.__vftable + 16, (const char *const)&stru_143CE7590, 0x14ui64) >= 0x14 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward/bdRewardGameEvent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEventValue::setKey", 0xB6u, "key [%s] is too long", (const char *)&stru_143CE7590);
  bdRewardGameEvent::setEventValues(this, &ptr, 1u);
  if ( bdStrlcpy((char *const)&this->__vftable + 16, (const char *const)&queryFormat.fmt + 3, 0x64ui64) >= 0x64 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward/bdRewardGameEvent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEvent::setEventName", 0x50u, "eventName [%s] is too long", (const char *)&this->__vftable + 16);
  `eh vector destructor iterator'(&ptr, 0x40ui64, 1ui64, (void (__fastcall *)(void *))bdRewardGameEventValue::`vbase destructor);
}

/*
==============
bdRewardGameEventTimeStamp::bdRewardGameEventTimeStamp
==============
*/
void bdRewardGameEventTimeStamp::bdRewardGameEventTimeStamp(bdRewardGameEventTimeStamp *this)
{
  this->m_timeStamp = 1000 * bdPlatformTiming::getPOSIXTimestamp();
}

/*
==============
bdRewardGameEventValue::bdRewardGameEventValue
==============
*/
void bdRewardGameEventValue::bdRewardGameEventValue(bdRewardGameEventValue *this, const char *key, unsigned __int64 value, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardGameEventValue::`vbtable';
    *(&this->m_value + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_value + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardGameEventValue_vtbl *)&bdRewardGameEventValue::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardGameEventValue_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardGameEventValue_vtbl *)&bdRewardGameEventValue::`vftable'{for `bdReferencable'};
  this->m_value = value;
  bdRewardGameEventValue::setKey(this, key);
}

/*
==============
bdRewardGameEventValue::bdRewardGameEventValue
==============
*/
void bdRewardGameEventValue::bdRewardGameEventValue(bdRewardGameEventValue *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardGameEventValue::`vbtable';
    *(&this->m_value + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_value + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardGameEventValue_vtbl *)&bdRewardGameEventValue::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardGameEventValue_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardGameEventValue_vtbl *)&bdRewardGameEventValue::`vftable'{for `bdReferencable'};
  this->m_value = 0i64;
  if ( bdStrlcpy((char *const)&this->__vftable + 16, (const char *const)&queryFormat.fmt + 3, 0x14ui64) >= 0x14 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward/bdRewardGameEvent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEventValue::setKey", 0xB6u, "key [%s] is too long", (const char *)&queryFormat.fmt + 3);
}

/*
==============
bdRewardUserGameEventsList::bdRewardUserGameEventsList
==============
*/
void bdRewardUserGameEventsList::bdRewardUserGameEventsList(bdRewardUserGameEventsList *this, const bdUserAccountID *user, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardUserGameEventsList::`vbtable';
    *(_QWORD *)this->gap78 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap78[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardUserGameEventsList_vtbl *)&bdRewardUserGameEventsList::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardUserGameEventsList_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardUserGameEventsList_vtbl *)&bdRewardUserGameEventsList::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 0;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user, user);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
}

/*
==============
bdRewardUserGameEventsList::bdRewardUserGameEventsList
==============
*/
void bdRewardUserGameEventsList::bdRewardUserGameEventsList(bdRewardUserGameEventsList *this, const bdUserAccountID *user, const unsigned int numEvents, const bdRewardGameEvent **eventsList, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardUserGameEventsList::`vbtable';
    *(_QWORD *)this->gap78 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap78[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardUserGameEventsList_vtbl *)&bdRewardUserGameEventsList::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardUserGameEventsList_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardUserGameEventsList_vtbl *)&bdRewardUserGameEventsList::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = eventsList;
  *((_DWORD *)&this->__vftable + 6) = numEvents;
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user, user);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
}

/*
==============
bdRewardUserGameEventsList::bdRewardUserGameEventsList
==============
*/
void bdRewardUserGameEventsList::bdRewardUserGameEventsList(bdRewardUserGameEventsList *this, int a2)
{
  const bdUserAccountID *v3; 
  bdUserAccountID v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardUserGameEventsList::`vbtable';
    *(_QWORD *)this->gap78 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap78[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRewardUserGameEventsList_vtbl *)&bdRewardUserGameEventsList::`vftable'{for `bdStructBufferSerializable'};
  *(bdRewardUserGameEventsList_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardUserGameEventsList_vtbl *)&bdRewardUserGameEventsList::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 0;
  bdUserAccountID::bdUserAccountID(&v4);
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user, v3);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v4.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v4.gap38);
}

/*
==============
bdRewardGameEvent::~bdRewardGameEvent
==============
*/
void bdRewardGameEvent::~bdRewardGameEvent(bdRewardGameEvent *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdRewardGameEvent::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 768) = &bdRewardGameEvent::`vftable'{for `bdReferencable'};
  `eh vector destructor iterator'(&this[-1].m_values[0].__vftable + 2, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdRewardGameEventValue::`vbase destructor);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdRewardGameEvent *)((char *)this - 760));
}

/*
==============
bdRewardGameEventTimeStamp::~bdRewardGameEventTimeStamp
==============
*/
void bdRewardGameEventTimeStamp::~bdRewardGameEventTimeStamp(bdRewardGameEventTimeStamp *this)
{
  ;
}

/*
==============
bdRewardGameEventValue::~bdRewardGameEventValue
==============
*/
void bdRewardGameEventValue::~bdRewardGameEventValue(bdRewardGameEventValue *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdRewardGameEventValue::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 40) = &bdRewardGameEventValue::`vftable'{for `bdReferencable'};
  bdStructBufferSerializable::~bdStructBufferSerializable((bdRewardGameEventValue *)((char *)this - 32));
}

/*
==============
bdRewardUserGameEventsList::~bdRewardUserGameEventsList
==============
*/
void bdRewardUserGameEventsList::~bdRewardUserGameEventsList(bdRewardUserGameEventsList *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdRewardUserGameEventsList::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 112) = &bdRewardUserGameEventsList::`vftable'{for `bdReferencable'};
  bdStructBufferSerializable::~bdStructBufferSerializable((bdRewardUserGameEventsList *)((char *)this - 16));
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this[-1].m_user._bytes_48);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].gap78);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdRewardUserGameEventsList *)((char *)this - 104));
}

/*
==============
bdRewardGameEvent::getEventName
==============
*/
bdRewardGameEvent_vtbl **bdRewardGameEvent::getEventName(bdRewardGameEvent *this)
{
  return &this->__vftable + 2;
}

/*
==============
bdRewardGameEvent::getEventTimeStamp
==============
*/
bdRewardGameEventTimeStamp *bdRewardGameEvent::getEventTimeStamp(bdRewardGameEvent *this, bdRewardGameEventTimeStamp *result)
{
  result->m_timeStamp = (unsigned __int64)this->m_timeStamp;
  return result;
}

/*
==============
bdRewardGameEvent::getEventValues
==============
*/
__int64 bdRewardGameEvent::getEventValues(bdRewardGameEvent *this, const bdRewardGameEventValue **outValues)
{
  *outValues = this->m_values;
  return this->m_numValues;
}

/*
==============
bdRewardGameEventValue::getKey
==============
*/
bdRewardGameEventValue_vtbl **bdRewardGameEventValue::getKey(bdRewardGameEventValue *this)
{
  return &this->__vftable + 2;
}

/*
==============
bdRewardGameEventTimeStamp::getUInt64
==============
*/
unsigned __int64 bdRewardGameEventTimeStamp::getUInt64(bdRewardGameEventTimeStamp *this)
{
  return this->m_timeStamp;
}

/*
==============
bdRewardGameEventValue::getValue
==============
*/
unsigned __int64 bdRewardGameEventValue::getValue(bdRewardGameEventValue *this)
{
  return this->m_value;
}

/*
==============
bdRewardGameEvent::serialize
==============
*/
bool bdRewardGameEvent::serialize(bdRewardGameEvent *this, bdStructBufferSerializer *serializer)
{
  unsigned int m_numValues; 
  unsigned int v5; 
  bool v6; 

  if ( !bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x64u) || !bdStructBufferSerializer::writeInt64(serializer, 3u, this->m_timeStamp.m_timeStamp) )
    return 0;
  m_numValues = this->m_numValues;
  v5 = 0;
  v6 = 1;
  if ( !m_numValues )
    return 1;
  do
    v6 = v6 && bdStructBufferSerializer::writeObject(serializer, 4u, &this->m_values[v5++]);
  while ( v5 < m_numValues );
  return v6;
}

/*
==============
bdRewardGameEventValue::serialize
==============
*/
bool bdRewardGameEventValue::serialize(bdRewardGameEventValue *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x14u) && bdStructBufferSerializer::writeUInt64(serializer, 2u, this->m_value);
}

/*
==============
bdRewardUserGameEventsList::serialize
==============
*/
bool bdRewardUserGameEventsList::serialize(bdRewardUserGameEventsList *this, bdStructBufferSerializer *serializer)
{
  unsigned int v4; 
  bool v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)this->m_user.gap38) )
    return 0;
  v4 = *((_DWORD *)&this->__vftable + 6);
  v5 = 1;
  if ( !v4 )
    return 1;
  v6 = 0i64;
  v7 = v4;
  do
  {
    v5 = v5 && bdStructBufferSerializer::writeObject(serializer, 2u, *(const bdStructBufferSerializable **)(*((_QWORD *)&this->__vftable + 2) + v6));
    v6 += 8i64;
    --v7;
  }
  while ( v7 );
  return v5;
}

/*
==============
bdRewardGameEventValue::set
==============
*/
void bdRewardGameEventValue::set(bdRewardGameEventValue *this, const char *key, unsigned __int64 value)
{
  this->m_value = value;
  bdRewardGameEventValue::setKey(this, key);
}

/*
==============
bdRewardGameEvent::setEventName
==============
*/
unsigned __int64 bdRewardGameEvent::setEventName(bdRewardGameEvent *this, const char *eventName)
{
  const char *v2; 
  unsigned __int64 result; 
  unsigned __int64 v4; 

  if ( eventName )
  {
    v2 = (const char *)(&this->__vftable + 2);
    result = bdStrlcpy((char *const)&this->__vftable + 16, eventName, 0x64ui64);
    v4 = result;
    if ( result >= 0x64 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward/bdRewardGameEvent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEvent::setEventName", 0x50u, "eventName [%s] is too long", v2);
      return v4;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward/bdRewardGameEvent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEvent::setEventName", 0x55u, "eventName is NULL");
    return 0i64;
  }
  return result;
}

/*
==============
bdRewardGameEvent::setEventTimeStamp
==============
*/
void bdRewardGameEvent::setEventTimeStamp(bdRewardGameEvent *this, bdRewardGameEventTimeStamp timeStamp)
{
  this->m_timeStamp = timeStamp;
}

/*
==============
bdRewardGameEvent::setEventTimeStamp
==============
*/
void bdRewardGameEvent::setEventTimeStamp(bdRewardGameEvent *this, unsigned __int64 timeStamp)
{
  this->m_timeStamp.m_timeStamp = timeStamp;
}

/*
==============
bdRewardGameEvent::setEventValues
==============
*/
void bdRewardGameEvent::setEventValues(bdRewardGameEvent *this, const bdRewardGameEventValue *values, const unsigned int numValues)
{
  signed __int64 v6; 
  bdRewardGameEventValue_vtbl **v7; 
  __int64 v8; 

  bdHandleAssert(numValues <= 0xA, "numValues <= BD_REWARD_GAME_EVENT_MAX_NUM_VALUES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEvent::setEventValues", 0x40u, "Cannot call setEventValues with numValues > %d", 10);
  if ( numValues )
  {
    v6 = (char *)values - (char *)this;
    v7 = &this->m_values[0].__vftable + 2;
    v8 = numValues;
    do
    {
      bdReferencable::operator=((bdReferencable *)((char *)v7 + SHIDWORD((*(v7 - 1))->serialize) - 8), (const bdReferencable *)((char *)v7 + v6 + SHIDWORD((*(bdRewardGameEventValue_vtbl **)((char *)v7 + v6 - 136))->serialize) - 136));
      *(_BYTE *)v7 = *((_BYTE *)v7 + v6 - 128);
      *((_BYTE *)v7 + 1) = *((_BYTE *)v7 + v6 - 127);
      *((_BYTE *)v7 + 2) = *((_BYTE *)v7 + v6 - 126);
      *((_BYTE *)v7 + 3) = *((_BYTE *)v7 + v6 - 125);
      *((_BYTE *)v7 + 4) = *((_BYTE *)v7 + v6 - 124);
      *((_BYTE *)v7 + 5) = *((_BYTE *)v7 + v6 - 123);
      *((_BYTE *)v7 + 6) = *((_BYTE *)v7 + v6 - 122);
      *((_BYTE *)v7 + 7) = *((_BYTE *)v7 + v6 - 121);
      *((_BYTE *)v7 + 8) = *((_BYTE *)v7 + v6 - 120);
      *((_BYTE *)v7 + 9) = *((_BYTE *)v7 + v6 - 119);
      *((_BYTE *)v7 + 10) = *((_BYTE *)v7 + v6 - 118);
      *((_BYTE *)v7 + 11) = *((_BYTE *)v7 + v6 - 117);
      *((_BYTE *)v7 + 12) = *((_BYTE *)v7 + v6 - 116);
      *((_BYTE *)v7 + 13) = *((_BYTE *)v7 + v6 - 115);
      *((_BYTE *)v7 + 14) = *((_BYTE *)v7 + v6 - 114);
      *((_BYTE *)v7 + 15) = *((_BYTE *)v7 + v6 - 113);
      *((_BYTE *)v7 + 16) = *((_BYTE *)v7 + v6 - 112);
      *((_BYTE *)v7 + 17) = *((_BYTE *)v7 + v6 - 111);
      *((_BYTE *)v7 + 18) = *((_BYTE *)v7 + v6 - 110);
      *((_BYTE *)v7 + 19) = *((_BYTE *)v7 + v6 - 109);
      v7[3] = *(bdRewardGameEventValue_vtbl **)((char *)v7 + v6 - 104);
      v7 += 8;
      --v8;
    }
    while ( v8 );
  }
  this->m_numValues = numValues;
}

/*
==============
bdRewardUserGameEventsList::setEventsList
==============
*/
void bdRewardUserGameEventsList::setEventsList(bdRewardUserGameEventsList *this, const unsigned int numEvents, const bdRewardGameEvent **eventsList)
{
  *((_DWORD *)&this->__vftable + 6) = numEvents;
  *((_QWORD *)&this->__vftable + 2) = eventsList;
}

/*
==============
bdRewardGameEventValue::setKey
==============
*/
unsigned __int64 bdRewardGameEventValue::setKey(bdRewardGameEventValue *this, const char *key)
{
  unsigned __int64 result; 
  unsigned __int64 v4; 

  if ( key )
  {
    result = bdStrlcpy((char *const)&this->__vftable + 16, key, 0x14ui64);
    v4 = result;
    if ( result >= 0x14 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward/bdRewardGameEvent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEventValue::setKey", 0xB6u, "key [%s] is too long", key);
      return v4;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdReward/bdRewardGameEvent", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardgameevent.cpp", "bdRewardGameEventValue::setKey", 0xBBu, "key is NULL");
    return 0i64;
  }
  return result;
}

/*
==============
bdRewardGameEventTimeStamp::setUInt64
==============
*/
void bdRewardGameEventTimeStamp::setUInt64(bdRewardGameEventTimeStamp *this, unsigned __int64 timeStampMilliseconds)
{
  this->m_timeStamp = timeStampMilliseconds;
}

/*
==============
bdRewardUserGameEventsList::setUser
==============
*/
void bdRewardUserGameEventsList::setUser(bdRewardUserGameEventsList *this, const bdUserAccountID *user)
{
  bdStructUserAccountID v4; 

  bdStructUserAccountID::bdStructUserAccountID(&v4, user);
  bdUserAccountID::operator=(&this->m_user, &v4);
  bdReferencable::operator=((bdReferencable *)&this->m_user.gap38[*(int *)(*(_QWORD *)&this->m_user.gap38[8] + 4i64) + 8], (const bdReferencable *)&v4.gap38[*(int *)(*(_QWORD *)&v4.gap38[8] + 4i64) + 8]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v4._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v4.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v4._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
}

