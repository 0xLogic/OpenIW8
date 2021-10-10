/*
==============
bdPerformanceValue::sizeOf
==============
*/

unsigned int __fastcall bdPerformanceValue::sizeOf(bdPerformanceValue *this)
{
  return ?sizeOf@bdPerformanceValue@@UEAAIXZ(this);
}

/*
==============
bdStoredPerformanceValue::sizeOf
==============
*/

unsigned int __fastcall bdStoredPerformanceValue::sizeOf(bdStoredPerformanceValue *this)
{
  return ?sizeOf@bdStoredPerformanceValue@@UEAAIXZ(this);
}

/*
==============
bdStoredPerformanceValue::bdStoredPerformanceValue
==============
*/

void __fastcall bdStoredPerformanceValue::bdStoredPerformanceValue(bdStoredPerformanceValue *this)
{
  ??0bdStoredPerformanceValue@@QEAA@XZ(this);
}

/*
==============
bdPerformanceValue::bdPerformanceValue
==============
*/

void __fastcall bdPerformanceValue::bdPerformanceValue(bdPerformanceValue *this)
{
  ??0bdPerformanceValue@@QEAA@XZ(this);
}

/*
==============
bdStoredPerformanceValue::~bdStoredPerformanceValue
==============
*/

void __fastcall bdStoredPerformanceValue::~bdStoredPerformanceValue(bdStoredPerformanceValue *this)
{
  ??1bdStoredPerformanceValue@@UEAA@XZ(this);
}

/*
==============
bdPerformanceValue::serialize
==============
*/

bool __fastcall bdPerformanceValue::serialize(bdPerformanceValue *this, bdByteBuffer *buffer)
{
  return ?serialize@bdPerformanceValue@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdStoredPerformanceValue::serialize
==============
*/

bool __fastcall bdStoredPerformanceValue::serialize(bdStoredPerformanceValue *this, bdByteBuffer *buffer)
{
  return ?serialize@bdStoredPerformanceValue@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdPerformanceValue::~bdPerformanceValue
==============
*/

void __fastcall bdPerformanceValue::~bdPerformanceValue(bdPerformanceValue *this)
{
  ??1bdPerformanceValue@@UEAA@XZ(this);
}

/*
==============
bdStoredPerformanceValue::deserialize
==============
*/

bool __fastcall bdStoredPerformanceValue::deserialize(bdStoredPerformanceValue *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdStoredPerformanceValue@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdPerformanceValue::deserialize
==============
*/

bool __fastcall bdPerformanceValue::deserialize(bdPerformanceValue *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdPerformanceValue@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdPerformanceValue::bdPerformanceValue
==============
*/
void bdPerformanceValue::bdPerformanceValue(bdPerformanceValue *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdPerformanceValue::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdPerformanceValue::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_20[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdPerformanceValue_vtbl *)&bdPerformanceValue::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdPerformanceValue::`vftable'{for `bdSerializable'};
  *(bdPerformanceValue_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdPerformanceValue_vtbl *)&bdPerformanceValue::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
}

/*
==============
bdStoredPerformanceValue::bdStoredPerformanceValue
==============
*/
void bdStoredPerformanceValue::bdStoredPerformanceValue(bdStoredPerformanceValue *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStoredPerformanceValue::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStoredPerformanceValue::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_20[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdStoredPerformanceValue_vtbl *)&bdStoredPerformanceValue::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStoredPerformanceValue::`vftable'{for `bdSerializable'};
  *(bdStoredPerformanceValue_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStoredPerformanceValue_vtbl *)&bdStoredPerformanceValue::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_DWORD *)&this->_bytes_20[8] = 0;
}

/*
==============
bdPerformanceValue::~bdPerformanceValue
==============
*/
void bdPerformanceValue::~bdPerformanceValue(bdPerformanceValue *this)
{
  bdTaskResult *v1; 

  v1 = (bdPerformanceValue *)((char *)this - 32);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdPerformanceValue::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdPerformanceValue::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 40) = &bdPerformanceValue::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)&this[-1]._bytes_20[16]);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdStoredPerformanceValue::~bdStoredPerformanceValue
==============
*/
void bdStoredPerformanceValue::~bdStoredPerformanceValue(bdStoredPerformanceValue *this)
{
  bdTaskResult *v1; 

  v1 = (bdStoredPerformanceValue *)((char *)this - 32);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdStoredPerformanceValue::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdStoredPerformanceValue::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 40) = &bdStoredPerformanceValue::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)&this[-1]._bytes_20[16]);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdPerformanceValue::deserialize
==============
*/
__int64 bdPerformanceValue::deserialize(bdPerformanceValue *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt64; 
  unsigned __int8 v5; 

  *(_QWORD *)this->_bytes_20 = 0i64;
  UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)this->_bytes_20);
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  if ( UInt64 && bdByteBuffer::readInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (__int64 *)&this->_bytes_20[8]) )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMatchMaking/bdPerformanceValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformancevalue.cpp", "bdPerformanceValue::deserialize", 0x2Bu, "Deserialization failed");
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v5;
}

/*
==============
bdStoredPerformanceValue::deserialize
==============
*/
__int64 bdStoredPerformanceValue::deserialize(bdStoredPerformanceValue *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt64; 
  unsigned __int8 v5; 

  *(_QWORD *)this->_bytes_20 = 0i64;
  UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)this->_bytes_20);
  *(_DWORD *)&this->_bytes_20[8] = 0;
  if ( UInt64 && bdByteBuffer::readFloat32((bdByteBuffer *)buffer.m_ptr->__vftable, (float *)&this->_bytes_20[8]) )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMatchMaking/bdPerformanceValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdperformancevalue.cpp", "bdStoredPerformanceValue::deserialize", 0x53u, "Deserialization failed");
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v5;
}

/*
==============
bdPerformanceValue::serialize
==============
*/
bool bdPerformanceValue::serialize(bdPerformanceValue *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUInt64(buffer, *((_QWORD *)&this->__vftable + 2)) && bdByteBuffer::writeInt64(buffer, *((_QWORD *)&this->__vftable + 3));
}

/*
==============
bdStoredPerformanceValue::serialize
==============
*/
bool bdStoredPerformanceValue::serialize(bdStoredPerformanceValue *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUInt64(buffer, *((_QWORD *)&this->__vftable + 2)) && bdByteBuffer::writeFloat32(buffer, *((const float *)&this->__vftable + 6));
}

/*
==============
bdPerformanceValue::sizeOf
==============
*/
__int64 bdPerformanceValue::sizeOf(bdPerformanceValue *this)
{
  return 64i64;
}

/*
==============
bdStoredPerformanceValue::sizeOf
==============
*/
__int64 bdStoredPerformanceValue::sizeOf(bdStoredPerformanceValue *this)
{
  return 64i64;
}

