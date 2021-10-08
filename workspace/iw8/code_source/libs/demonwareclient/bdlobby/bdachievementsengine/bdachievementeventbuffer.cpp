/*
==============
bdAchievementEventBuffer::Iterator::operator*
==============
*/

const bdAchievementEventBuffer::Entry *__fastcall bdAchievementEventBuffer::Iterator::operator*(bdAchievementEventBuffer::Iterator *this)
{
  return ??DIterator@bdAchievementEventBuffer@@QEAAAEBVEntry@1@XZ(this);
}

/*
==============
bdAchievementEventBuffer::Iterator::operator-
==============
*/

int __fastcall bdAchievementEventBuffer::Iterator::operator-(bdAchievementEventBuffer::Iterator *this, const bdAchievementEventBuffer::Iterator *rhs)
{
  return ??GIterator@bdAchievementEventBuffer@@QEBAHAEBV01@@Z(this, rhs);
}

/*
==============
bdAchievementEventBuffer::popProcessed
==============
*/

bool __fastcall bdAchievementEventBuffer::popProcessed(bdAchievementEventBuffer *this)
{
  return ?popProcessed@bdAchievementEventBuffer@@QEAA_NXZ(this);
}

/*
==============
bdAchievementEventBuffer::markProcessed
==============
*/

bool __fastcall bdAchievementEventBuffer::markProcessed(bdAchievementEventBuffer *this)
{
  return ?markProcessed@bdAchievementEventBuffer@@QEAA_NXZ(this);
}

/*
==============
bdAchievementEventBuffer::Entry::getEvent
==============
*/

const bdAchievementEvent *__fastcall bdAchievementEventBuffer::Entry::getEvent(bdAchievementEventBuffer::Entry *this)
{
  return ?getEvent@Entry@bdAchievementEventBuffer@@QEBAAEBVbdAchievementEvent@@XZ(this);
}

/*
==============
bdAchievementEventBuffer::getUnprocessedBegin
==============
*/

bdAchievementEventBuffer::Iterator *__fastcall bdAchievementEventBuffer::getUnprocessedBegin(bdAchievementEventBuffer *this, bdAchievementEventBuffer::Iterator *result)
{
  return ?getUnprocessedBegin@bdAchievementEventBuffer@@QEBA?AVIterator@1@XZ(this, result);
}

/*
==============
bdAchievementEventBuffer::getProcessedEnd
==============
*/

bdAchievementEventBuffer::Iterator *__fastcall bdAchievementEventBuffer::getProcessedEnd(bdAchievementEventBuffer *this, bdAchievementEventBuffer::Iterator *result)
{
  return ?getProcessedEnd@bdAchievementEventBuffer@@QEBA?AVIterator@1@XZ(this, result);
}

/*
==============
bdAchievementEventBuffer::getProcessedBegin
==============
*/

bdAchievementEventBuffer::Iterator *__fastcall bdAchievementEventBuffer::getProcessedBegin(bdAchievementEventBuffer *this, bdAchievementEventBuffer::Iterator *result)
{
  return ?getProcessedBegin@bdAchievementEventBuffer@@QEBA?AVIterator@1@XZ(this, result);
}

/*
==============
bdAchievementEventBuffer::pushUnprocessed
==============
*/

bool __fastcall bdAchievementEventBuffer::pushUnprocessed(bdAchievementEventBuffer *this, const bdAchievementEventBuffer::Entry *entry)
{
  return ?pushUnprocessed@bdAchievementEventBuffer@@QEAA_NAEBVEntry@1@@Z(this, entry);
}

/*
==============
bdAchievementEventBuffer::Iterator::operator!=
==============
*/

bool __fastcall bdAchievementEventBuffer::Iterator::operator!=(bdAchievementEventBuffer::Iterator *this, const bdAchievementEventBuffer::Iterator *rhs)
{
  return ??9Iterator@bdAchievementEventBuffer@@QEBA_NAEBV01@@Z(this, rhs);
}

/*
==============
bdAchievementEventBuffer::Iterator::operator++
==============
*/

bdAchievementEventBuffer::Iterator *__fastcall bdAchievementEventBuffer::Iterator::operator++(bdAchievementEventBuffer::Iterator *this, bdAchievementEventBuffer::Iterator *result, int __formal)
{
  return ??EIterator@bdAchievementEventBuffer@@QEAA?AV01@H@Z(this, result, __formal);
}

/*
==============
bdAchievementEventBuffer::Entry::getFirstPartyUser
==============
*/

const bdUserAccountID *__fastcall bdAchievementEventBuffer::Entry::getFirstPartyUser(bdAchievementEventBuffer::Entry *this)
{
  return ?getFirstPartyUser@Entry@bdAchievementEventBuffer@@QEBAAEBVbdUserAccountID@@XZ(this);
}

/*
==============
bdAchievementEventBuffer::bdAchievementEventBuffer
==============
*/

void __fastcall bdAchievementEventBuffer::bdAchievementEventBuffer(bdAchievementEventBuffer *this)
{
  ??0bdAchievementEventBuffer@@QEAA@XZ(this);
}

/*
==============
bdAchievementEventBuffer::Iterator::operator->
==============
*/

const bdAchievementEventBuffer::Entry *__fastcall bdAchievementEventBuffer::Iterator::operator->(bdAchievementEventBuffer::Iterator *this)
{
  return ??CIterator@bdAchievementEventBuffer@@QEAAPEBVEntry@1@XZ(this);
}

/*
==============
bdAchievementEventBuffer::Entry::Entry
==============
*/

void __fastcall bdAchievementEventBuffer::Entry::Entry(bdAchievementEventBuffer::Entry *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform, const bdAchievementEvent *event, unsigned __int64 timestamp, int timesAttempted)
{
  ??0Entry@bdAchievementEventBuffer@@QEAA@AEBVbdUserAccountID@@0W4bdPlatformID@@AEBVbdAchievementEvent@@_KH@Z(this, user, firstPartyUser, platform, event, timestamp, timesAttempted);
}

/*
==============
bdAchievementEventBuffer::Entry::getTimestamp
==============
*/

unsigned __int64 __fastcall bdAchievementEventBuffer::Entry::getTimestamp(bdAchievementEventBuffer::Entry *this)
{
  return ?getTimestamp@Entry@bdAchievementEventBuffer@@QEBA_KXZ(this);
}

/*
==============
bdAchievementEventBuffer::Iterator::operator==
==============
*/

bool __fastcall bdAchievementEventBuffer::Iterator::operator==(bdAchievementEventBuffer::Iterator *this, const bdAchievementEventBuffer::Iterator *rhs)
{
  return ??8Iterator@bdAchievementEventBuffer@@QEBA_NAEBV01@@Z(this, rhs);
}

/*
==============
bdAchievementEventBuffer::Entry::Entry
==============
*/

void __fastcall bdAchievementEventBuffer::Entry::Entry(bdAchievementEventBuffer::Entry *this)
{
  ??0Entry@bdAchievementEventBuffer@@QEAA@XZ(this);
}

/*
==============
bdAchievementEventBuffer::Iterator::operator++
==============
*/

bdAchievementEventBuffer::Iterator *__fastcall bdAchievementEventBuffer::Iterator::operator++(bdAchievementEventBuffer::Iterator *this)
{
  return ??EIterator@bdAchievementEventBuffer@@QEAAAEAV01@XZ(this);
}

/*
==============
bdAchievementEventBuffer::Entry::getTimesAttempted
==============
*/

int __fastcall bdAchievementEventBuffer::Entry::getTimesAttempted(bdAchievementEventBuffer::Entry *this)
{
  return ?getTimesAttempted@Entry@bdAchievementEventBuffer@@QEBAHXZ(this);
}

/*
==============
bdAchievementEventBuffer::Entry::getUser
==============
*/

const bdUserAccountID *__fastcall bdAchievementEventBuffer::Entry::getUser(bdAchievementEventBuffer::Entry *this)
{
  return ?getUser@Entry@bdAchievementEventBuffer@@QEBAAEBVbdUserAccountID@@XZ(this);
}

/*
==============
bdAchievementEventBuffer::getUnprocessedEnd
==============
*/

bdAchievementEventBuffer::Iterator *__fastcall bdAchievementEventBuffer::getUnprocessedEnd(bdAchievementEventBuffer *this, bdAchievementEventBuffer::Iterator *result)
{
  return ?getUnprocessedEnd@bdAchievementEventBuffer@@QEBA?AVIterator@1@XZ(this, result);
}

/*
==============
bdAchievementEventBuffer::Entry::getPlatform
==============
*/

bdPlatformID __fastcall bdAchievementEventBuffer::Entry::getPlatform(bdAchievementEventBuffer::Entry *this)
{
  return ?getPlatform@Entry@bdAchievementEventBuffer@@QEBA?AW4bdPlatformID@@XZ(this);
}

/*
==============
bdAchievementEventBuffer::getSize
==============
*/

unsigned int __fastcall bdAchievementEventBuffer::getSize(bdAchievementEventBuffer *this)
{
  return ?getSize@bdAchievementEventBuffer@@QEAAIXZ(this);
}

/*
==============
bdAchievementEventBuffer::Iterator::Iterator
==============
*/

void __fastcall bdAchievementEventBuffer::Iterator::Iterator(bdAchievementEventBuffer::Iterator *this, const bdAchievementEventBuffer::Entry *buffer, unsigned int offset)
{
  ??0Iterator@bdAchievementEventBuffer@@AEAA@PEBVEntry@1@I@Z(this, buffer, offset);
}

/*
==============
bdAchievementEventBuffer::Entry::Entry
==============
*/
void bdAchievementEventBuffer::Entry::Entry(bdAchievementEventBuffer::Entry *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform, const bdAchievementEvent *event, unsigned __int64 timestamp, int timesAttempted)
{
  bdUserAccountID::bdUserAccountID(&this->m_user, user);
  bdUserAccountID::bdUserAccountID(&this->m_firstPartyUser, firstPartyUser);
  this->m_platform = platform;
  _RBX = &this->m_event;
  *((_QWORD *)&this->m_event.__vftable + 1) = &bdAchievementEvent::`vbtable';
  _RDI = event;
  bdReferencable::bdReferencable((bdReferencable *)(&this->m_event.m_keyValues + 1), (const bdReferencable *)((char *)&event->__vftable + *(int *)(*((_QWORD *)&event->__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable(&this->m_event, event);
  this->m_event.__vftable = (bdAchievementEvent_vtbl *)&bdAchievementEvent::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementEvent_vtbl **)((char *)&this->m_event.__vftable + *(int *)(*((_QWORD *)&this->m_event.__vftable + 1) + 4i64) + 8) = (bdAchievementEvent_vtbl *)&bdAchievementEvent::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->m_event.__vftable + 2) = *((_QWORD *)&event->__vftable + 2);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+18h]
    vmovups ymmword ptr [rbx+18h], ymm0
    vmovups ymm1, ymmword ptr [rdi+38h]
    vmovups ymmword ptr [rbx+38h], ymm1
    vmovups ymm0, ymmword ptr [rdi+58h]
    vmovups ymmword ptr [rbx+58h], ymm0
  }
  *(_DWORD *)&this->m_event.m_name[88] = *(_DWORD *)&event->m_name[88];
  this->m_event.m_name[92] = event->m_name[92];
  this->m_event.m_timestamp = event->m_timestamp;
  `eh vector vbase constructor iterator'(&this->m_event.m_keyValues, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdAchievementEventKeyValue::bdAchievementEventKeyValue, (void (__fastcall *)(void *))bdAchievementEventKeyValue::`vbase destructor);
  this->m_event.m_keyValues.m_size = 0;
  bdStructFixedSizeArray<bdAchievementEventKeyValue,10>::copy(&this->m_event.m_keyValues, &event->m_keyValues);
  this->m_timestamp = timestamp;
  this->m_timesAttempted = timesAttempted;
}

/*
==============
bdAchievementEventBuffer::Entry::Entry
==============
*/
void bdAchievementEventBuffer::Entry::Entry(bdAchievementEventBuffer::Entry *this)
{
  bdUserAccountID::bdUserAccountID(&this->m_user);
  bdUserAccountID::bdUserAccountID(&this->m_firstPartyUser);
  this->m_platform = BD_PLATFORM_ID_INVALID;
  bdAchievementEvent::bdAchievementEvent(&this->m_event);
  this->m_timestamp = 0i64;
  this->m_timesAttempted = 0;
}

/*
==============
bdAchievementEventBuffer::Iterator::Iterator
==============
*/
void bdAchievementEventBuffer::Iterator::Iterator(bdAchievementEventBuffer::Iterator *this, const bdAchievementEventBuffer::Entry *buffer, unsigned int offset)
{
  this->m_buffer = buffer;
  this->m_offset = offset;
}

/*
==============
bdAchievementEventBuffer::bdAchievementEventBuffer
==============
*/
void bdAchievementEventBuffer::bdAchievementEventBuffer(bdAchievementEventBuffer *this)
{
  `eh vector constructor iterator'(this, 0x3C8ui64, 0x80ui64, (void (__fastcall *)(void *))bdAchievementEventBuffer::Entry::Entry, (void (__fastcall *)(void *))bdAchievementEventBuffer::Entry::~Entry);
  *(_QWORD *)&this->m_size = 0i64;
  this->m_head = 0;
}

/*
==============
bdAchievementEventBuffer::Iterator::operator==
==============
*/
bool bdAchievementEventBuffer::Iterator::operator==(bdAchievementEventBuffer::Iterator *this, const bdAchievementEventBuffer::Iterator *rhs)
{
  return this->m_buffer == rhs->m_buffer && this->m_offset == rhs->m_offset;
}

/*
==============
bdAchievementEventBuffer::Iterator::operator!=
==============
*/
bool bdAchievementEventBuffer::Iterator::operator!=(bdAchievementEventBuffer::Iterator *this, const bdAchievementEventBuffer::Iterator *rhs)
{
  return this->m_buffer != rhs->m_buffer || this->m_offset != rhs->m_offset;
}

/*
==============
bdAchievementEventBuffer::Iterator::operator->
==============
*/
const bdAchievementEventBuffer::Entry *bdAchievementEventBuffer::Iterator::operator->(bdAchievementEventBuffer::Iterator *this)
{
  return &this->m_buffer[this->m_offset & 0x7F];
}

/*
==============
bdAchievementEventBuffer::Iterator::operator*
==============
*/
const bdAchievementEventBuffer::Entry *bdAchievementEventBuffer::Iterator::operator*(bdAchievementEventBuffer::Iterator *this)
{
  return &this->m_buffer[this->m_offset & 0x7F];
}

/*
==============
bdAchievementEventBuffer::Iterator::operator++
==============
*/
bdAchievementEventBuffer::Iterator *bdAchievementEventBuffer::Iterator::operator++(bdAchievementEventBuffer::Iterator *this, bdAchievementEventBuffer::Iterator *result, int __formal)
{
  bdAchievementEventBuffer::Iterator *v4; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  ++this->m_offset;
  v4 = result;
  __asm { vmovups xmmword ptr [rdx], xmm0 }
  return v4;
}

/*
==============
bdAchievementEventBuffer::Iterator::operator++
==============
*/
bdAchievementEventBuffer::Iterator *bdAchievementEventBuffer::Iterator::operator++(bdAchievementEventBuffer::Iterator *this)
{
  ++this->m_offset;
  return this;
}

/*
==============
bdAchievementEventBuffer::Iterator::operator-
==============
*/
__int64 bdAchievementEventBuffer::Iterator::operator-(bdAchievementEventBuffer::Iterator *this, const bdAchievementEventBuffer::Iterator *rhs)
{
  return this->m_offset - rhs->m_offset;
}

/*
==============
bdAchievementEventBuffer::Entry::getEvent
==============
*/
bdAchievementEvent *bdAchievementEventBuffer::Entry::getEvent(bdAchievementEventBuffer::Entry *this)
{
  return &this->m_event;
}

/*
==============
bdAchievementEventBuffer::Entry::getFirstPartyUser
==============
*/
bdUserAccountID *bdAchievementEventBuffer::Entry::getFirstPartyUser(bdAchievementEventBuffer::Entry *this)
{
  return &this->m_firstPartyUser;
}

/*
==============
bdAchievementEventBuffer::Entry::getPlatform
==============
*/
__int64 bdAchievementEventBuffer::Entry::getPlatform(bdAchievementEventBuffer::Entry *this)
{
  return (unsigned int)this->m_platform;
}

/*
==============
bdAchievementEventBuffer::getProcessedBegin
==============
*/
bdAchievementEventBuffer::Iterator *bdAchievementEventBuffer::getProcessedBegin(bdAchievementEventBuffer *this, bdAchievementEventBuffer::Iterator *result)
{
  bdAchievementEventBuffer::Iterator *v2; 

  result->m_offset = this->m_head;
  v2 = result;
  result->m_buffer = (const bdAchievementEventBuffer::Entry *)this;
  return v2;
}

/*
==============
bdAchievementEventBuffer::getProcessedEnd
==============
*/
bdAchievementEventBuffer::Iterator *bdAchievementEventBuffer::getProcessedEnd(bdAchievementEventBuffer *this, bdAchievementEventBuffer::Iterator *result)
{
  bdAchievementEventBuffer::Iterator *v2; 

  result->m_offset = this->m_size + this->m_head - this->m_unprocessedSize;
  v2 = result;
  result->m_buffer = (const bdAchievementEventBuffer::Entry *)this;
  return v2;
}

/*
==============
bdAchievementEventBuffer::getSize
==============
*/
__int64 bdAchievementEventBuffer::getSize(bdAchievementEventBuffer *this)
{
  return this->m_size;
}

/*
==============
bdAchievementEventBuffer::Entry::getTimesAttempted
==============
*/
__int64 bdAchievementEventBuffer::Entry::getTimesAttempted(bdAchievementEventBuffer::Entry *this)
{
  return (unsigned int)this->m_timesAttempted;
}

/*
==============
bdAchievementEventBuffer::Entry::getTimestamp
==============
*/
unsigned __int64 bdAchievementEventBuffer::Entry::getTimestamp(bdAchievementEventBuffer::Entry *this)
{
  return this->m_timestamp;
}

/*
==============
bdAchievementEventBuffer::getUnprocessedBegin
==============
*/
bdAchievementEventBuffer::Iterator *bdAchievementEventBuffer::getUnprocessedBegin(bdAchievementEventBuffer *this, bdAchievementEventBuffer::Iterator *result)
{
  bdAchievementEventBuffer::Iterator *v2; 

  result->m_offset = this->m_size + this->m_head - this->m_unprocessedSize;
  v2 = result;
  result->m_buffer = (const bdAchievementEventBuffer::Entry *)this;
  return v2;
}

/*
==============
bdAchievementEventBuffer::getUnprocessedEnd
==============
*/
bdAchievementEventBuffer::Iterator *bdAchievementEventBuffer::getUnprocessedEnd(bdAchievementEventBuffer *this, bdAchievementEventBuffer::Iterator *result)
{
  bdAchievementEventBuffer::Iterator *v2; 

  result->m_offset = this->m_size + this->m_head;
  v2 = result;
  result->m_buffer = (const bdAchievementEventBuffer::Entry *)this;
  return v2;
}

/*
==============
bdAchievementEventBuffer::Entry::getUser
==============
*/
bdAchievementEventBuffer::Entry *bdAchievementEventBuffer::Entry::getUser(bdAchievementEventBuffer::Entry *this)
{
  return this;
}

/*
==============
bdAchievementEventBuffer::markProcessed
==============
*/
bool bdAchievementEventBuffer::markProcessed(bdAchievementEventBuffer *this)
{
  unsigned int m_unprocessedSize; 

  m_unprocessedSize = this->m_unprocessedSize;
  if ( m_unprocessedSize )
  {
    this->m_unprocessedSize = m_unprocessedSize - 1;
    LOBYTE(m_unprocessedSize) = 1;
  }
  return m_unprocessedSize;
}

/*
==============
bdAchievementEventBuffer::popProcessed
==============
*/
char bdAchievementEventBuffer::popProcessed(bdAchievementEventBuffer *this)
{
  unsigned int m_size; 

  m_size = this->m_size;
  if ( m_size == this->m_unprocessedSize )
    return 0;
  this->m_head = ((unsigned __int8)this->m_head + 1) & 0x7F;
  this->m_size = m_size - 1;
  return 1;
}

/*
==============
bdAchievementEventBuffer::pushUnprocessed
==============
*/
bool bdAchievementEventBuffer::pushUnprocessed(bdAchievementEventBuffer *this, const bdAchievementEventBuffer::Entry *entry)
{
  unsigned int m_size; 
  bool result; 

  _RDI = entry;
  m_size = this->m_size;
  if ( m_size == 128 )
    return 0;
  _RSI = &this->m_buffer[((_BYTE)m_size + (unsigned __int8)this->m_head) & 0x7F];
  bdUserAccountID::operator=(&_RSI->m_user, &entry->m_user);
  bdUserAccountID::operator=(&_RSI->m_firstPartyUser, &_RDI->m_firstPartyUser);
  _RSI->m_platform = _RDI->m_platform;
  bdReferencable::operator=((bdReferencable *)((char *)&_RSI->m_event.__vftable + *(int *)(*((_QWORD *)&_RSI->m_event.__vftable + 1) + 4i64) + 8), (const bdReferencable *)((char *)&_RDI->m_event.__vftable + *(int *)(*((_QWORD *)&_RDI->m_event.__vftable + 1) + 4i64) + 8));
  *((_QWORD *)&_RSI->m_event.__vftable + 2) = *((_QWORD *)&_RDI->m_event.__vftable + 2);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0B0h]
    vmovups ymmword ptr [rsi+0B0h], ymm0
    vmovups ymm1, ymmword ptr [rdi+0D0h]
    vmovups ymmword ptr [rsi+0D0h], ymm1
    vmovups ymm0, ymmword ptr [rdi+0F0h]
    vmovups ymmword ptr [rsi+0F0h], ymm0
  }
  *(_DWORD *)&_RSI->m_event.m_name[88] = *(_DWORD *)&_RDI->m_event.m_name[88];
  _RSI->m_event.m_name[92] = _RDI->m_event.m_name[92];
  _RSI->m_event.m_timestamp = _RDI->m_event.m_timestamp;
  if ( &_RSI->m_event.m_keyValues != &_RDI->m_event.m_keyValues )
    bdStructFixedSizeArray<bdAchievementEventKeyValue,10>::copy(&_RSI->m_event.m_keyValues, &_RDI->m_event.m_keyValues);
  _RSI->m_timestamp = _RDI->m_timestamp;
  _RSI->m_timesAttempted = _RDI->m_timesAttempted;
  result = 1;
  ++this->m_size;
  ++this->m_unprocessedSize;
  return result;
}

