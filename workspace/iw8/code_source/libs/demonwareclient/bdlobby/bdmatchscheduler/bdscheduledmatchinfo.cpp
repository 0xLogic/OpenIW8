/*
==============
bdScheduledMatchInfo::~bdScheduledMatchInfo
==============
*/

void __fastcall bdScheduledMatchInfo::~bdScheduledMatchInfo(bdScheduledMatchInfo *this)
{
  ??1bdScheduledMatchInfo@@UEAA@XZ(this);
}

/*
==============
bdScheduledMatchInfo::deserialize
==============
*/

bool __fastcall bdScheduledMatchInfo::deserialize(bdScheduledMatchInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdScheduledMatchInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdScheduledMatchInfo::bdScheduledMatchInfo
==============
*/

void __fastcall bdScheduledMatchInfo::bdScheduledMatchInfo(bdScheduledMatchInfo *this)
{
  ??0bdScheduledMatchInfo@@QEAA@XZ(this);
}

/*
==============
bdScheduledMatchInfo::bdScheduledMatchInfo
==============
*/

void __fastcall bdScheduledMatchInfo::bdScheduledMatchInfo(bdScheduledMatchInfo *this, unsigned __int8 *m_matchMetadata, unsigned int m_matchMetadataLength)
{
  ??0bdScheduledMatchInfo@@QEAA@PEAEI@Z(this, m_matchMetadata, m_matchMetadataLength);
}

/*
==============
bdScheduledMatchInfo::sizeOf
==============
*/

unsigned int __fastcall bdScheduledMatchInfo::sizeOf(bdScheduledMatchInfo *this)
{
  return ?sizeOf@bdScheduledMatchInfo@@UEAAIXZ(this);
}

/*
==============
bdScheduledMatchInfo::bdScheduledMatchInfo
==============
*/
void bdScheduledMatchInfo::bdScheduledMatchInfo(bdScheduledMatchInfo *this, unsigned __int8 *m_matchMetadata, unsigned int m_matchMetadataLength, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdScheduledMatchInfo::`vbtable';
    *(_QWORD *)this->gap60 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap60[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdScheduledMatchInfo_vtbl *)&bdScheduledMatchInfo::`vftable'{for `bdTaskResult'};
  *(bdScheduledMatchInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdScheduledMatchInfo_vtbl *)&bdScheduledMatchInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_matchMetadata = m_matchMetadata;
  this->m_matchMetadataLength = m_matchMetadataLength;
  this->m_affinityID = 0i64;
  this->m_userAccountIDs.m_data = NULL;
  *(_QWORD *)&this->m_userAccountIDs.m_capacity = 0i64;
  this->m_userIDs.m_data = NULL;
  *(_QWORD *)&this->m_userIDs.m_capacity = 0i64;
}

/*
==============
bdScheduledMatchInfo::bdScheduledMatchInfo
==============
*/
void bdScheduledMatchInfo::bdScheduledMatchInfo(bdScheduledMatchInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdScheduledMatchInfo::`vbtable';
    *(_QWORD *)this->gap60 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap60[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdScheduledMatchInfo_vtbl *)&bdScheduledMatchInfo::`vftable'{for `bdTaskResult'};
  *(bdScheduledMatchInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdScheduledMatchInfo_vtbl *)&bdScheduledMatchInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_matchMetadata = NULL;
  this->m_matchMetadataLength = 0;
  this->m_affinityID = 0i64;
  this->m_userAccountIDs.m_data = NULL;
  *(_QWORD *)&this->m_userAccountIDs.m_capacity = 0i64;
  this->m_userIDs.m_data = NULL;
  *(_QWORD *)&this->m_userIDs.m_capacity = 0i64;
}

/*
==============
bdScheduledMatchInfo::~bdScheduledMatchInfo
==============
*/
void bdScheduledMatchInfo::~bdScheduledMatchInfo(bdScheduledMatchInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdScheduledMatchInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 88) = &bdScheduledMatchInfo::`vftable'{for `bdReferencable'};
  bdMemory::deallocate(*(void **)this[-1].gap60);
  *(_QWORD *)this[-1].gap60 = 0i64;
  *(_QWORD *)&this[-1].gap60[8] = 0i64;
  bdMemory::deallocate(this[-1].m_userIDs.m_data);
  this[-1].m_userIDs.m_data = NULL;
  *(_QWORD *)&this[-1].m_userIDs.m_capacity = 0i64;
  bdTaskResult::~bdTaskResult((bdScheduledMatchInfo *)((char *)this - 80));
}

/*
==============
bdScheduledMatchInfo::deserialize
==============
*/
_BOOL8 bdScheduledMatchInfo::deserialize(bdScheduledMatchInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  unsigned int *p_m_matchMetadataLength; 
  unsigned int m_matchMetadataLength; 
  bool v7; 
  unsigned int v8; 
  __int64 v9; 
  bool String; 
  unsigned int i; 
  unsigned int m_capacity; 
  unsigned int v13; 
  void *v14; 
  unsigned int v15; 
  unsigned int m_size; 
  unsigned int j; 
  __int64 v21; 
  unsigned int v23; 
  unsigned int v24; 
  bdUserAccountID *v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int numElements; 
  unsigned int u; 
  unsigned int v36; 
  unsigned __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  bdByteBuffer *m_ptr; 
  bdUserAccountID v41; 
  char s[16]; 

  v39 = -2i64;
  m_ptr = buffer.m_ptr;
  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 6) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 7);
  p_m_matchMetadataLength = &this->m_matchMetadataLength;
  m_matchMetadataLength = this->m_matchMetadataLength;
  v7 = v4 && bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_matchMetadata, &this->m_matchMetadataLength);
  v8 = *p_m_matchMetadataLength;
  if ( *p_m_matchMetadataLength )
  {
    v9 = m_matchMetadataLength - 1;
    if ( (unsigned int)v9 >= v8 )
      v9 = v8;
    this->m_matchMetadata[v9] = 0;
  }
  if ( v7 && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_affinityID) )
  {
    u = 0;
    if ( bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &u) )
    {
      String = 1;
      goto LABEL_20;
    }
  }
  else
  {
    u = 0;
  }
  String = 0;
LABEL_20:
  this->m_status = u;
  numElements = 0;
  bdByteBuffer::readArrayStart((bdByteBuffer *)buffer.m_ptr->__vftable, 0xAu, &numElements);
  if ( numElements )
  {
    for ( i = 0; i < numElements; ++i )
    {
      if ( !String )
        break;
      String = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &v37);
      m_capacity = this->m_userIDs.m_capacity;
      if ( this->m_userIDs.m_size == m_capacity )
      {
        v13 = this->m_userIDs.m_capacity;
        if ( !m_capacity )
          v13 = 1;
        v14 = NULL;
        v15 = m_capacity + v13;
        if ( v15 )
        {
          v14 = bdMemory::allocate(8i64 * v15);
          m_size = this->m_userIDs.m_size;
          if ( m_size )
            memcpy_0(v14, this->m_userIDs.m_data, 8i64 * m_size);
        }
        bdMemory::deallocate(this->m_userIDs.m_data);
        this->m_userIDs.m_data = (unsigned __int64 *)v14;
        this->m_userIDs.m_capacity = v15;
      }
      _RCX = this->m_userIDs.m_size;
      _RAX = this->m_userIDs.m_data;
      __asm
      {
        vmovsd  xmm0, [rbp+57h+var_C0]
        vmovsd  qword ptr [rax+rcx*8], xmm0
      }
      ++this->m_userIDs.m_size;
    }
  }
  bdByteBuffer::readArrayEnd((bdByteBuffer *)buffer.m_ptr->__vftable);
  v36 = 0;
  bdByteBuffer::readArrayStart((bdByteBuffer *)buffer.m_ptr->__vftable, 0x10u, &v36);
  bdHandleAssert(numElements == v36, "numUserIDs == numAccountTypes", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchscheduler\\bdscheduledmatchinfo.cpp", "bdScheduledMatchInfo::deserialize", 0x4Au, "Mismatched userIDs and accountTypes");
  if ( v36 )
  {
    for ( j = 0; j < numElements; ++j )
    {
      if ( !String )
        break;
      String = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, s, 9ui64);
      bdHandleAssert(j < this->m_userIDs.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<unsigned __int64>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      bdUserAccountID::bdUserAccountID(&v41, &this->m_userIDs.m_data[j], s);
      _R8 = v21;
      v38 = v21;
      v23 = this->m_userAccountIDs.m_capacity;
      if ( this->m_userAccountIDs.m_size == v23 )
      {
        v24 = this->m_userAccountIDs.m_capacity;
        if ( !v23 )
          v24 = 1;
        v25 = NULL;
        v26 = v23 + v24;
        if ( (_DWORD)v26 )
        {
          v25 = (bdUserAccountID *)bdMemory::allocate(72 * v26);
          v27 = this->m_userAccountIDs.m_size;
          if ( (_DWORD)v27 )
            memcpy_0(v25, this->m_userAccountIDs.m_data, 72 * v27);
        }
        bdMemory::deallocate(this->m_userAccountIDs.m_data);
        this->m_userAccountIDs.m_data = v25;
        this->m_userAccountIDs.m_capacity = v26;
        _R8 = v38;
      }
      _RCX = 9i64 * this->m_userAccountIDs.m_size;
      _RAX = this->m_userAccountIDs.m_data;
      __asm
      {
        vmovups ymm0, ymmword ptr [r8]
        vmovups ymmword ptr [rax+rcx*8], ymm0
        vmovups ymm1, ymmword ptr [r8+20h]
        vmovups ymmword ptr [rax+rcx*8+20h], ymm1
        vmovsd  xmm0, qword ptr [r8+40h]
        vmovsd  qword ptr [rax+rcx*8+40h], xmm0
      }
      ++this->m_userAccountIDs.m_size;
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v41.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v41.gap38);
    }
  }
  bdByteBuffer::readArrayEnd((bdByteBuffer *)buffer.m_ptr->__vftable);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return String;
}

/*
==============
bdScheduledMatchInfo::sizeOf
==============
*/
__int64 bdScheduledMatchInfo::sizeOf(bdScheduledMatchInfo *this)
{
  return 112i64;
}

