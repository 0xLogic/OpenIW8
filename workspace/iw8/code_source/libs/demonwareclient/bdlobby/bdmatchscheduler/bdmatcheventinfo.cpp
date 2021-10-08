/*
==============
bdMatchEventInfo::sizeOf
==============
*/

unsigned int __fastcall bdMatchEventInfo::sizeOf(bdMatchEventInfo *this)
{
  return ?sizeOf@bdMatchEventInfo@@UEAAIXZ(this);
}

/*
==============
bdMatchEventInfo::bdMatchEventInfo
==============
*/

void __fastcall bdMatchEventInfo::bdMatchEventInfo(bdMatchEventInfo *this, unsigned __int8 *eventDesc, unsigned int eventDescLength)
{
  ??0bdMatchEventInfo@@QEAA@PEAEI@Z(this, eventDesc, eventDescLength);
}

/*
==============
bdMatchEventInfo::deserialize
==============
*/

bool __fastcall bdMatchEventInfo::deserialize(bdMatchEventInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMatchEventInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMatchEventInfo::bdMatchEventInfo
==============
*/

void __fastcall bdMatchEventInfo::bdMatchEventInfo(bdMatchEventInfo *this)
{
  ??0bdMatchEventInfo@@QEAA@XZ(this);
}

/*
==============
bdMatchEventInfo::~bdMatchEventInfo
==============
*/

void __fastcall bdMatchEventInfo::~bdMatchEventInfo(bdMatchEventInfo *this)
{
  ??1bdMatchEventInfo@@UEAA@XZ(this);
}

/*
==============
bdMatchEventInfo::bdMatchEventInfo
==============
*/
void bdMatchEventInfo::bdMatchEventInfo(bdMatchEventInfo *this, unsigned __int8 *eventDesc, unsigned int eventDescLength, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMatchEventInfo::`vbtable';
    *(&this->m_globalEventNum + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_globalEventNum + 4) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMatchEventInfo_vtbl *)&bdMatchEventInfo::`vftable'{for `bdTaskResult'};
  *(bdMatchEventInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMatchEventInfo_vtbl *)&bdMatchEventInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = eventDesc;
  this->m_eventDescLength = eventDescLength;
  this->m_eventTime = 0;
  this->m_globalEventNum = 0i64;
}

/*
==============
bdMatchEventInfo::bdMatchEventInfo
==============
*/
void bdMatchEventInfo::bdMatchEventInfo(bdMatchEventInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMatchEventInfo::`vbtable';
    *(&this->m_globalEventNum + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_globalEventNum + 4) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMatchEventInfo_vtbl *)&bdMatchEventInfo::`vftable'{for `bdTaskResult'};
  *(bdMatchEventInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMatchEventInfo_vtbl *)&bdMatchEventInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)&this->m_eventDescLength = 0i64;
  this->m_globalEventNum = 0i64;
}

/*
==============
bdMatchEventInfo::~bdMatchEventInfo
==============
*/
void bdMatchEventInfo::~bdMatchEventInfo(bdMatchEventInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdMatchEventInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 40) = &bdMatchEventInfo::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdMatchEventInfo *)((char *)this - 32));
}

/*
==============
bdMatchEventInfo::deserialize
==============
*/
_BOOL8 bdMatchEventInfo::deserialize(bdMatchEventInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt64; 
  unsigned int m_eventDescLength; 
  bool v6; 
  unsigned int v7; 
  __int64 v8; 
  bool v9; 

  UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2);
  m_eventDescLength = this->m_eventDescLength;
  v6 = UInt64 && bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, *((unsigned __int8 *const *)&this->__vftable + 3), &this->m_eventDescLength);
  v7 = this->m_eventDescLength;
  if ( v7 )
  {
    v8 = m_eventDescLength - 1;
    if ( (unsigned int)v8 >= v7 )
      v8 = v7;
    *(_BYTE *)(v8 + *((_QWORD *)&this->__vftable + 3)) = 0;
  }
  v9 = v6 && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_eventTime) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_globalEventNum);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdMatchEventInfo::sizeOf
==============
*/
__int64 bdMatchEventInfo::sizeOf(bdMatchEventInfo *this)
{
  return 64i64;
}

