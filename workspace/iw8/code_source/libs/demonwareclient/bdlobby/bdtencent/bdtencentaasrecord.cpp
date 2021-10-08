/*
==============
bdTencentAASRecord::bdTencentAASRecord
==============
*/

void __fastcall bdTencentAASRecord::bdTencentAASRecord(bdTencentAASRecord *this)
{
  ??0bdTencentAASRecord@@QEAA@XZ(this);
}

/*
==============
bdTencentAASRecord::sizeOf
==============
*/

unsigned int __fastcall bdTencentAASRecord::sizeOf(bdTencentAASRecord *this)
{
  return ?sizeOf@bdTencentAASRecord@@UEAAIXZ(this);
}

/*
==============
bdTencentAASRecord::deserialize
==============
*/

bool __fastcall bdTencentAASRecord::deserialize(bdTencentAASRecord *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTencentAASRecord@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTencentAASRecord::~bdTencentAASRecord
==============
*/

void __fastcall bdTencentAASRecord::~bdTencentAASRecord(bdTencentAASRecord *this)
{
  ??1bdTencentAASRecord@@UEAA@XZ(this);
}

/*
==============
bdTencentAASRecord::bdTencentAASRecord
==============
*/
void bdTencentAASRecord::bdTencentAASRecord(bdTencentAASRecord *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTencentAASRecord::`vbtable';
    *(_QWORD *)&this->gap24[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap24[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdTencentAASRecord_vtbl *)&bdTencentAASRecord::`vftable'{for `bdTaskResult'};
  *(bdTencentAASRecord_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTencentAASRecord_vtbl *)&bdTencentAASRecord::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_recordAge = 0;
}

/*
==============
bdTencentAASRecord::~bdTencentAASRecord
==============
*/
void bdTencentAASRecord::~bdTencentAASRecord(bdTencentAASRecord *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTencentAASRecord::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 32) = &bdTencentAASRecord::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdTencentAASRecord *)((char *)this - 24));
}

/*
==============
bdTencentAASRecord::deserialize
==============
*/
bool bdTencentAASRecord::deserialize(bdTencentAASRecord *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt64; 
  bool v5; 
  unsigned __int8 v7; 
  unsigned __int8 b; 

  b = 0;
  if ( bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &b) && b == 1 )
  {
    UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2);
    v7 = 0;
    v5 = 0;
    if ( UInt64 && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &v7) )
    {
      *((_DWORD *)&this->__vftable + 6) = v7;
      if ( bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 7) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_recordAge) )
        v5 = 1;
    }
    if ( buffer.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
    {
      if ( buffer.m_ptr->__vftable )
        (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
      buffer.m_ptr->__vftable = NULL;
    }
    return v5;
  }
  else
  {
    if ( buffer.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
    {
      if ( buffer.m_ptr->__vftable )
        (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
      buffer.m_ptr->__vftable = NULL;
    }
    return 0;
  }
}

/*
==============
bdTencentAASRecord::sizeOf
==============
*/
__int64 bdTencentAASRecord::sizeOf(bdTencentAASRecord *this)
{
  return 56i64;
}

