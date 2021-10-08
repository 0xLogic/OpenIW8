/*
==============
bdRewardEventJSONV2::~bdRewardEventJSONV2
==============
*/

void __fastcall bdRewardEventJSONV2::~bdRewardEventJSONV2(bdRewardEventJSONV2 *this)
{
  ??1bdRewardEventJSONV2@@UEAA@XZ(this);
}

/*
==============
bdRewardEventJSONV2::bdRewardEventJSONV2
==============
*/

void __fastcall bdRewardEventJSONV2::bdRewardEventJSONV2(bdRewardEventJSONV2 *this, const char *jsonData)
{
  ??0bdRewardEventJSONV2@@QEAA@PEBD@Z(this, jsonData);
}

/*
==============
bdRewardEventJSONV2::serialize
==============
*/

bool __fastcall bdRewardEventJSONV2::serialize(bdRewardEventJSONV2 *this, bdByteBuffer *buffer)
{
  return ?serialize@bdRewardEventJSONV2@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdRewardEventJSONV2::sizeOf
==============
*/

unsigned int __fastcall bdRewardEventJSONV2::sizeOf(bdRewardEventJSONV2 *this)
{
  return ?sizeOf@bdRewardEventJSONV2@@UEAAIXZ(this);
}

/*
==============
bdRewardEventJSONV2::deserialize
==============
*/

bool __fastcall bdRewardEventJSONV2::deserialize(bdRewardEventJSONV2 *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdRewardEventJSONV2@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRewardEventJSONV2::bdRewardEventJSONV2
==============
*/

void __fastcall bdRewardEventJSONV2::bdRewardEventJSONV2(bdRewardEventJSONV2 *this, const bdString *jsonData)
{
  ??0bdRewardEventJSONV2@@QEAA@AEBVbdString@@@Z(this, jsonData);
}

/*
==============
bdRewardEventJSONV2::bdRewardEventJSONV2
==============
*/

void __fastcall bdRewardEventJSONV2::bdRewardEventJSONV2(bdRewardEventJSONV2 *this)
{
  ??0bdRewardEventJSONV2@@QEAA@XZ(this);
}

/*
==============
bdRewardEventJSONV2::reset
==============
*/

void __fastcall bdRewardEventJSONV2::reset(bdRewardEventJSONV2 *this)
{
  ?reset@bdRewardEventJSONV2@@QEAAXXZ(this);
}

/*
==============
bdRewardEventJSONV2::setJsonData
==============
*/

bool __fastcall bdRewardEventJSONV2::setJsonData(bdRewardEventJSONV2 *this, const char *jsonData)
{
  return ?setJsonData@bdRewardEventJSONV2@@QEAA_NPEBD@Z(this, jsonData);
}

/*
==============
bdRewardEventJSONV2::getJsonData
==============
*/

const char *__fastcall bdRewardEventJSONV2::getJsonData(bdRewardEventJSONV2 *this)
{
  return ?getJsonData@bdRewardEventJSONV2@@QEBAPEBDXZ(this);
}

/*
==============
bdRewardEventJSONV2::bdRewardEventJSONV2
==============
*/
void bdRewardEventJSONV2::bdRewardEventJSONV2(bdRewardEventJSONV2 *this, const bdString *jsonData, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardEventJSONV2::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdRewardEventJSONV2::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap30 = &bdReferencable::`vftable';
    *((_DWORD *)&this->bdRewardEvent + 14) = 0;
  }
  bdRewardEvent::bdRewardEvent(this, BD_REWARD_EVENT_JSON);
  this->__vftable = (bdRewardEventJSONV2_vtbl *)&bdRewardEventJSONV2::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRewardEventJSONV2::`vftable'{for `bdSerializable'};
  *(bdRewardEventJSONV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardEventJSONV2_vtbl *)&bdRewardEventJSONV2::`vftable'{for `bdReferencable'};
  bdString::bdString((bdString *)&this->_bytes_20[8], jsonData);
}

/*
==============
bdRewardEventJSONV2::bdRewardEventJSONV2
==============
*/
void bdRewardEventJSONV2::bdRewardEventJSONV2(bdRewardEventJSONV2 *this, const char *jsonData, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardEventJSONV2::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdRewardEventJSONV2::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap30 = &bdReferencable::`vftable';
    *((_DWORD *)&this->bdRewardEvent + 14) = 0;
  }
  bdRewardEvent::bdRewardEvent(this, BD_REWARD_EVENT_JSON);
  this->__vftable = (bdRewardEventJSONV2_vtbl *)&bdRewardEventJSONV2::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRewardEventJSONV2::`vftable'{for `bdSerializable'};
  *(bdRewardEventJSONV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardEventJSONV2_vtbl *)&bdRewardEventJSONV2::`vftable'{for `bdReferencable'};
  bdString::bdString((bdString *)&this->_bytes_20[8], jsonData);
}

/*
==============
bdRewardEventJSONV2::bdRewardEventJSONV2
==============
*/
void bdRewardEventJSONV2::bdRewardEventJSONV2(bdRewardEventJSONV2 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRewardEventJSONV2::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdRewardEventJSONV2::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap30 = &bdReferencable::`vftable';
    *((_DWORD *)&this->bdRewardEvent + 14) = 0;
  }
  bdRewardEvent::bdRewardEvent(this, BD_REWARD_EVENT_JSON);
  this->__vftable = (bdRewardEventJSONV2_vtbl *)&bdRewardEventJSONV2::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRewardEventJSONV2::`vftable'{for `bdSerializable'};
  *(bdRewardEventJSONV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardEventJSONV2_vtbl *)&bdRewardEventJSONV2::`vftable'{for `bdReferencable'};
  bdString::bdString((bdString *)&this->_bytes_20[8]);
}

/*
==============
bdRewardEventJSONV2::~bdRewardEventJSONV2
==============
*/
void bdRewardEventJSONV2::~bdRewardEventJSONV2(bdRewardEventJSONV2 *this)
{
  bdRewardEvent *v1; 

  *((_QWORD *)&this[-1].__vftable + 2) = &bdRewardEventJSONV2::`vftable'{for `bdTaskResult'};
  v1 = (bdRewardEventJSONV2 *)((char *)this - 8);
  *(_QWORD *)this[-1]._bytes_20 = &bdRewardEventJSONV2::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 40) = &bdRewardEventJSONV2::`vftable'{for `bdReferencable'};
  bdString::~bdString((bdString *)&this[-1].bdRewardEvent + 7);
  bdRewardEvent::~bdRewardEvent(v1);
}

/*
==============
bdRewardEventJSONV2::deserialize
==============
*/
_BOOL8 bdRewardEventJSONV2::deserialize(bdRewardEventJSONV2 *this, bdReference<bdByteBuffer> buffer)
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
  bdHandleAssert(*(_DWORD *)this->_bytes_20 == 1, "(m_type == BD_REWARD_EVENT_JSON)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdreward\\bdrewardeventjsonv2.cpp", "bdRewardEventJSONV2::deserialize", 0x2Cu, "Error RewardEventType is not bdRewardEventJSON", -2i64);
  v6 = v5 && *(_DWORD *)this->_bytes_20 == 1 && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (bdString *)&this->_bytes_20[8]);
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
bdRewardEventJSONV2::getJsonData
==============
*/
const char *bdRewardEventJSONV2::getJsonData(bdRewardEventJSONV2 *this)
{
  return bdString::getBuffer((bdString *)&this->_bytes_20[8]);
}

/*
==============
bdRewardEventJSONV2::reset
==============
*/
void bdRewardEventJSONV2::reset(bdRewardEventJSONV2 *this)
{
  const bdString *v2; 
  bdString v3; 

  bdString::bdString(&v3);
  bdString::operator=((bdString *)&this->_bytes_20[8], v2);
  bdString::~bdString(&v3);
}

/*
==============
bdRewardEventJSONV2::serialize
==============
*/
bool bdRewardEventJSONV2::serialize(bdRewardEventJSONV2 *this, bdByteBuffer *buffer)
{
  return bdRewardEvent::serialize(this, buffer) && bdByteBuffer::writeString(buffer, (const bdString *)&this->__vftable + 3);
}

/*
==============
bdRewardEventJSONV2::setJsonData
==============
*/
char bdRewardEventJSONV2::setJsonData(bdRewardEventJSONV2 *this, const char *jsonData)
{
  bdString::operator=((bdString *)&this->_bytes_20[8], jsonData);
  return 1;
}

/*
==============
bdRewardEventJSONV2::sizeOf
==============
*/
__int64 bdRewardEventJSONV2::sizeOf(bdRewardEventJSONV2 *this)
{
  return 64i64;
}

