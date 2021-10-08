/*
==============
bdStatsInfo::sizeOf
==============
*/

unsigned int __fastcall bdStatsInfo::sizeOf(bdStatsInfo *this)
{
  return ?sizeOf@bdStatsInfo@@UEAAIXZ(this);
}

/*
==============
bdStatsInfo::deserialize
==============
*/

bool __fastcall bdStatsInfo::deserialize(bdStatsInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdStatsInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdStatsInfo::serialize
==============
*/

bool __fastcall bdStatsInfo::serialize(bdStatsInfo *this, bdByteBuffer *buffer)
{
  return ?serialize@bdStatsInfo@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdStatsInfoEx::bdStatsInfoEx
==============
*/

void __fastcall bdStatsInfoEx::bdStatsInfoEx(bdStatsInfoEx *this, bdStatsInfo *statsInfo)
{
  ??0bdStatsInfoEx@@QEAA@PEAVbdStatsInfo@@@Z(this, statsInfo);
}

/*
==============
bdStatsInfoEx::deserialize
==============
*/

bool __fastcall bdStatsInfoEx::deserialize(bdStatsInfoEx *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdStatsInfoEx@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdStatsInfoEx::bdStatsInfoEx
==============
*/

void __fastcall bdStatsInfoEx::bdStatsInfoEx(bdStatsInfoEx *this)
{
  ??0bdStatsInfoEx@@QEAA@XZ(this);
}

/*
==============
bdStatsInfoEx::sizeOf
==============
*/

unsigned int __fastcall bdStatsInfoEx::sizeOf(bdStatsInfoEx *this)
{
  return ?sizeOf@bdStatsInfoEx@@UEAAIXZ(this);
}

/*
==============
bdStatsInfoEx::~bdStatsInfoEx
==============
*/

void __fastcall bdStatsInfoEx::~bdStatsInfoEx(bdStatsInfoEx *this)
{
  ??1bdStatsInfoEx@@UEAA@XZ(this);
}

/*
==============
bdStatsInfo::bdStatsInfo
==============
*/

void __fastcall bdStatsInfo::bdStatsInfo(bdStatsInfo *this)
{
  ??0bdStatsInfo@@QEAA@XZ(this);
}

/*
==============
bdStatsInfo::~bdStatsInfo
==============
*/

void __fastcall bdStatsInfo::~bdStatsInfo(bdStatsInfo *this)
{
  ??1bdStatsInfo@@UEAA@XZ(this);
}

/*
==============
bdStatsInfo::bdStatsInfo
==============
*/
void bdStatsInfo::bdStatsInfo(bdStatsInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStatsInfo::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStatsInfo::`vbtable'{for `bdSerializable'};
    *(_QWORD *)(&this->m_secondsSinceUpdate + 1) = &bdReferencable::`vftable';
    *(&this->m_secondsSinceUpdate + 3) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdStatsInfo_vtbl *)&bdStatsInfo::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStatsInfo::`vftable'{for `bdSerializable'};
  *(bdStatsInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStatsInfo_vtbl *)&bdStatsInfo::`vftable'{for `bdReferencable'};
  *(_DWORD *)this->_bytes_20 = 0;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  this->m_writeType = STAT_WRITE_ADD;
  this->m_rating = 0i64;
  this->m_rank = 0i64;
  this->m_secondsSinceUpdate = 0;
  *(_QWORD *)this->m_entityName = 0i64;
  *(_QWORD *)&this->m_entityName[8] = 0i64;
  *(_QWORD *)&this->m_entityName[16] = 0i64;
  *(_QWORD *)&this->m_entityName[24] = 0i64;
  *(_QWORD *)&this->m_entityName[32] = 0i64;
  *(_QWORD *)&this->m_entityName[40] = 0i64;
  *(_QWORD *)&this->m_entityName[48] = 0i64;
  *(_QWORD *)&this->m_entityName[56] = 0i64;
  this->m_entityName[64] = 0;
}

/*
==============
bdStatsInfoEx::bdStatsInfoEx
==============
*/
void bdStatsInfoEx::bdStatsInfoEx(bdStatsInfoEx *this, bdStatsInfo *statsInfo, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStatsInfoEx::`vbtable';
    *(_QWORD *)this->gap28 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap28[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdStatsInfoEx_vtbl *)&bdStatsInfoEx::`vftable'{for `bdTaskResult'};
  *(bdStatsInfoEx_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStatsInfoEx_vtbl *)&bdStatsInfoEx::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = *(_QWORD *)&statsInfo->_bytes_20[8];
  this->m_statsInfo = statsInfo;
}

/*
==============
bdStatsInfoEx::bdStatsInfoEx
==============
*/
void bdStatsInfoEx::bdStatsInfoEx(bdStatsInfoEx *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStatsInfoEx::`vbtable';
    *(_QWORD *)this->gap28 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap28[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdStatsInfoEx_vtbl *)&bdStatsInfoEx::`vftable'{for `bdTaskResult'};
  *(bdStatsInfoEx_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStatsInfoEx_vtbl *)&bdStatsInfoEx::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_statsInfo = NULL;
}

/*
==============
bdStatsInfo::~bdStatsInfo
==============
*/
void bdStatsInfo::~bdStatsInfo(bdStatsInfo *this)
{
  bdTaskResult *v1; 

  v1 = (bdStatsInfo *)((char *)this - 128);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdStatsInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdStatsInfo::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 136) = &bdStatsInfo::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)&this[-1].m_writeType);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdStatsInfoEx::~bdStatsInfoEx
==============
*/
void bdStatsInfoEx::~bdStatsInfoEx(bdStatsInfoEx *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdStatsInfoEx::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 32) = &bdStatsInfoEx::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdStatsInfoEx *)((char *)this - 24));
}

/*
==============
bdStatsInfo::deserialize
==============
*/
__int64 bdStatsInfo::deserialize(bdStatsInfo *this, bdReference<bdByteBuffer> buffer)
{
  unsigned __int8 v4; 

  if ( bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->_bytes_20[8]) && bdByteBuffer::readInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_rating) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_rank) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_entityName, 0x40ui64) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_secondsSinceUpdate) )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "statsInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstatsinfo.cpp", "bdStatsInfo::deserialize", 0x37u, "Deserialization failed");
  }
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
bdStatsInfoEx::deserialize
==============
*/
__int64 bdStatsInfoEx::deserialize(bdStatsInfoEx *this, bdReference<bdByteBuffer> buffer)
{
  bdStatsInfo *m_statsInfo; 
  bool (__fastcall *deserialize)(bdTaskResult *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v6; 
  unsigned __int8 UInt64; 
  bdStatsInfo *v8; 
  bdByteBuffer_vtbl *v10; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  if ( this->m_statsInfo && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 4) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 5) )
  {
    if ( *((_DWORD *)&this->__vftable + 5) )
    {
      UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 3);
    }
    else
    {
      m_statsInfo = this->m_statsInfo;
      deserialize = m_statsInfo->deserialize;
      v6 = buffer.m_ptr->__vftable;
      v10 = v6;
      if ( v6 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v6->allocateBuffer, 1u);
      UInt64 = ((__int64 (__fastcall *)(bdStatsInfo *, bdByteBuffer_vtbl **))deserialize)(m_statsInfo, &v10);
      if ( UInt64 )
      {
        v8 = this->m_statsInfo;
        *((_QWORD *)&this->__vftable + 3) = *(_QWORD *)&v8->_bytes_20[8];
        *(_DWORD *)v8->_bytes_20 = *((_DWORD *)&this->__vftable + 4);
      }
    }
  }
  else
  {
    UInt64 = 0;
  }
  if ( buffer.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return UInt64;
}

/*
==============
bdStatsInfo::serialize
==============
*/
char bdStatsInfo::serialize(bdStatsInfo *this, bdByteBuffer *buffer)
{
  if ( bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 4)) && bdByteBuffer::writeUInt64(buffer, *((_QWORD *)&this->__vftable + 3)) && bdByteBuffer::writeUByte8(buffer, this->_bytes_20[0]) && bdByteBuffer::writeInt64(buffer, *(_QWORD *)&this->_bytes_20[8]) )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "statsInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstatsinfo.cpp", "bdStatsInfo::serialize", 0x29u, "Serialization failed");
  return 0;
}

/*
==============
bdStatsInfo::sizeOf
==============
*/
__int64 bdStatsInfo::sizeOf(bdStatsInfo *this)
{
  return 160i64;
}

/*
==============
bdStatsInfoEx::sizeOf
==============
*/
__int64 bdStatsInfoEx::sizeOf(bdStatsInfoEx *this)
{
  return 56i64;
}

