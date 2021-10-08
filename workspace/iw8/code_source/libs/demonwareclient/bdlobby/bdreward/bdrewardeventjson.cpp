/*
==============
bdRewardEventJSON::deserialize
==============
*/

bool __fastcall bdRewardEventJSON::deserialize(bdRewardEventJSON *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdRewardEventJSON@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRewardEventJSON::bdRewardEventJSON
==============
*/

void __fastcall bdRewardEventJSON::bdRewardEventJSON(bdRewardEventJSON *this, const char *jsonData)
{
  ??0bdRewardEventJSON@@QEAA@PEBD@Z(this, jsonData);
}

/*
==============
bdRewardEventJSON::set
==============
*/

bool __fastcall bdRewardEventJSON::set(bdRewardEventJSON *this, const char *jsonData)
{
  return ?set@bdRewardEventJSON@@QEAA_NPEBD@Z(this, jsonData);
}

/*
==============
bdRewardEventJSON::bdRewardEventJSON
==============
*/

void __fastcall bdRewardEventJSON::bdRewardEventJSON(bdRewardEventJSON *this)
{
  ??0bdRewardEventJSON@@QEAA@XZ(this);
}

/*
==============
bdRewardEventJSON::~bdRewardEventJSON
==============
*/

void __fastcall bdRewardEventJSON::~bdRewardEventJSON(bdRewardEventJSON *this)
{
  ??1bdRewardEventJSON@@UEAA@XZ(this);
}

/*
==============
bdRewardEventJSON::sizeOf
==============
*/

unsigned int __fastcall bdRewardEventJSON::sizeOf(bdRewardEventJSON *this)
{
  return ?sizeOf@bdRewardEventJSON@@UEAAIXZ(this);
}

/*
==============
bdRewardEventJSON::serialize
==============
*/

bool __fastcall bdRewardEventJSON::serialize(bdRewardEventJSON *this, bdByteBuffer *buffer)
{
  return ?serialize@bdRewardEventJSON@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdRewardEventJSON::reset
==============
*/

void __fastcall bdRewardEventJSON::reset(bdRewardEventJSON *this)
{
  ?reset@bdRewardEventJSON@@QEAAXXZ(this);
}

/*
==============
bdRewardEventJSON::bdRewardEventJSON
==============
*/
void bdRewardEventJSON::bdRewardEventJSON(bdRewardEventJSON *this, const char *jsonData, int a3)
{
  _BYTE *v5; 
  unsigned __int64 v6; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardEventJSON::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdRewardEventJSON::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap828 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap828[8] = 0;
  }
  bdRewardEvent::bdRewardEvent(this, BD_REWARD_EVENT_JSON);
  this->__vftable = (bdRewardEventJSON_vtbl *)&bdRewardEventJSON::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRewardEventJSON::`vftable'{for `bdSerializable'};
  *(bdRewardEventJSON_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardEventJSON_vtbl *)&bdRewardEventJSON::`vftable'{for `bdReferencable'};
  bdHandleAssert(jsonData != NULL, "(jsonData != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardeventjson.cpp", "bdRewardEventJSON::bdRewardEventJSON", 0x49u, "bdRewardEventJSON jsonData must not be NULL", -2i64);
  v5 = memchr_0(jsonData, 0, 0x800ui64);
  v6 = 2048i64;
  if ( v5 )
    v6 = v5 - jsonData;
  bdHandleAssert(v6 < 0x800, "(bdStrnlen(jsonData, BD_REWARD_EVENT_JSON_MAX_SIZE) < BD_REWARD_EVENT_JSON_MAX_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardeventjson.cpp", "bdRewardEventJSON::bdRewardEventJSON", 0x49u, "bdRewardEventJSON jsonData must be shorter than BD_REWARD_EVENT_JSON_MAX_SIZE");
  bdStrlcpy(&this->_bytes_20[8], jsonData, 0x800ui64);
}

/*
==============
bdRewardEventJSON::bdRewardEventJSON
==============
*/
void bdRewardEventJSON::bdRewardEventJSON(bdRewardEventJSON *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardEventJSON::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdRewardEventJSON::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap828 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap828[8] = 0;
  }
  bdRewardEvent::bdRewardEvent(this, BD_REWARD_EVENT_JSON);
  this->__vftable = (bdRewardEventJSON_vtbl *)&bdRewardEventJSON::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRewardEventJSON::`vftable'{for `bdSerializable'};
  *(bdRewardEventJSON_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardEventJSON_vtbl *)&bdRewardEventJSON::`vftable'{for `bdReferencable'};
  memset_0(&this->_bytes_20[8], 0, 0x800ui64);
}

/*
==============
bdRewardEventJSON::~bdRewardEventJSON
==============
*/
void bdRewardEventJSON::~bdRewardEventJSON(bdRewardEventJSON *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdRewardEventJSON::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdRewardEventJSON::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 2080) = &bdRewardEventJSON::`vftable'{for `bdReferencable'};
  bdRewardEvent::~bdRewardEvent((bdRewardEventJSON *)((char *)this - 2048));
}

/*
==============
bdRewardEventJSON::deserialize
==============
*/
_BOOL8 bdRewardEventJSON::deserialize(bdRewardEventJSON *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  bool v6; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = bdRewardEvent::deserialize(this, (bdReference<bdByteBuffer>)&buffera);
  bdHandleAssert(*(_DWORD *)this->_bytes_20 == 1, "(m_type == BD_REWARD_EVENT_JSON)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardeventjson.cpp", "bdRewardEventJSON::deserialize", 0x49u, "Error RewardEventType is not bdRewardEventJSON", -2i64);
  v6 = v5 && *(_DWORD *)this->_bytes_20 == 1 && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, &this->_bytes_20[8], 0x800ui64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v6;
}

/*
==============
bdRewardEventJSON::reset
==============
*/
void bdRewardEventJSON::reset(bdRewardEventJSON *this)
{
  memset_0(&this->_bytes_20[8], 0, 0x800ui64);
}

/*
==============
bdRewardEventJSON::serialize
==============
*/
bool bdRewardEventJSON::serialize(bdRewardEventJSON *this, bdByteBuffer *buffer)
{
  return bdRewardEvent::serialize(this, buffer) && bdByteBuffer::writeString(buffer, (const char *const)&this->__vftable + 24, 0x800ui64);
}

/*
==============
bdRewardEventJSON::set
==============
*/
char bdRewardEventJSON::set(bdRewardEventJSON *this, const char *jsonData)
{
  _BYTE *v4; 

  v4 = memchr_0(jsonData, 0, 0x800ui64);
  if ( v4 && (unsigned __int64)(v4 - jsonData) < 0x800 )
  {
    bdStrlcpy(&this->_bytes_20[8], jsonData, 0x800ui64);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdReward/bdRewardEventJSON", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardeventjson.cpp", "bdRewardEventJSON::set", 0x49u, "bdRewardEventJSON jsonData must be shorter than BD_REWARD_EVENT_JSON_MAX_SIZE");
    return 0;
  }
}

/*
==============
bdRewardEventJSON::sizeOf
==============
*/
__int64 bdRewardEventJSON::sizeOf(bdRewardEventJSON *this)
{
  return 2104i64;
}

