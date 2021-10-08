/*
==============
LeaderBoardRow<10>::serialize
==============
*/

bool __fastcall LeaderBoardRow<10>::serialize(LeaderBoardRow<10> *this, bdByteBuffer *buffer)
{
  return ?serialize@?$LeaderBoardRow@$09@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
LeaderBoardRow<10>::~LeaderBoardRow<10>
==============
*/

void __fastcall LeaderBoardRow<10>::~LeaderBoardRow<10>(LeaderBoardRow<10> *this)
{
  ??1?$LeaderBoardRow@$09@@UEAA@XZ(this);
}

/*
==============
LeaderBoardRow<10>::deserialize
==============
*/

bool __fastcall LeaderBoardRow<10>::deserialize(LeaderBoardRow<10> *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@?$LeaderBoardRow@$09@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
LeaderBoardRow<10>::LeaderBoardRow<10>
==============
*/

void __fastcall LeaderBoardRow<10>::LeaderBoardRow<10>(LeaderBoardRow<10> *this)
{
  ??0?$LeaderBoardRow@$09@@QEAA@XZ(this);
}

/*
==============
LeaderBoardRow<10>::sizeOf
==============
*/

unsigned int __fastcall LeaderBoardRow<10>::sizeOf(LeaderBoardRow<10> *this)
{
  return ?sizeOf@?$LeaderBoardRow@$09@@UEAAIXZ(this);
}

/*
==============
LeaderBoardRow<10>::serialize
==============
*/
char LeaderBoardRow<10>::serialize(LeaderBoardRow<10> *this, bdByteBuffer *buffer)
{
  __int64 i; 

  bdStatsInfo::serialize(this, buffer);
  for ( i = 0i64; (unsigned int)i < *(_DWORD *)&this->m_columns[8]; i = (unsigned int)(i + 1) )
    bdByteBuffer::writeInt32(buffer, *(_DWORD *)&this->m_entityName[4 * i + 56]);
  return 1;
}

/*
==============
LeaderBoardRow<10>::deserialize
==============
*/
_BOOL8 LeaderBoardRow<10>::deserialize(LeaderBoardRow<10> *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool Int32; 
  __int64 i; 
  bdReference<bdByteBuffer> buffera; 

  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  Int32 = bdStatsInfo::deserialize(this, (bdReference<bdByteBuffer>)&buffera);
  for ( i = 0i64; Int32; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= this->m_columnsCount )
      break;
    Int32 = bdByteBuffer::readInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (int *)&this->m_entityName[4 * i + 72]);
  }
  if ( buffer.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return Int32;
}

/*
==============
LeaderBoardRow<10>::sizeOf
==============
*/
__int64 LeaderBoardRow<10>::sizeOf(LeaderBoardRow<10> *this)
{
  return 208i64;
}

/*
==============
LeaderBoardRow<10>::LeaderBoardRow<10>
==============
*/
void LeaderBoardRow<10>::LeaderBoardRow<10>(LeaderBoardRow<10> *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &LeaderBoardRow<10>::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &LeaderBoardRow<10>::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gapBC[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapBC[12] = 0;
  }
  bdStatsInfo::bdStatsInfo(this);
  this->__vftable = (LeaderBoardRow<10>_vtbl *)&LeaderBoardRow<10>::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &LeaderBoardRow<10>::`vftable'{for `bdSerializable'};
  *(LeaderBoardRow<10>_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (LeaderBoardRow<10>_vtbl *)&LeaderBoardRow<10>::`vftable'{for `bdReferencable'};
  *(_QWORD *)(&this->m_secondsSinceUpdate + 1) = 0i64;
  *(_QWORD *)(&this->m_secondsSinceUpdate + 3) = 0i64;
  *(_QWORD *)this->m_columns = 0i64;
  *(_QWORD *)&this->m_columns[8] = 0i64;
  *(_QWORD *)&this->m_columns[16] = 0i64;
  this->m_columnsCount = 10;
}

/*
==============
LeaderBoardRow<10>::~LeaderBoardRow<10>
==============
*/
void LeaderBoardRow<10>::~LeaderBoardRow<10>(LeaderBoardRow<10> *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &LeaderBoardRow<10>::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &LeaderBoardRow<10>::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 184) = &LeaderBoardRow<10>::`vftable'{for `bdReferencable'};
  bdStatsInfo::~bdStatsInfo((LeaderBoardRow<10> *)((char *)this - 48));
}

