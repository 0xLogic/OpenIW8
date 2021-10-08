/*
==============
bdUserInfo::~bdUserInfo
==============
*/

void __fastcall bdUserInfo::~bdUserInfo(bdUserInfo *this)
{
  ??1bdUserInfo@@UEAA@XZ(this);
}

/*
==============
bdUserInfo::sizeOf
==============
*/

unsigned int __fastcall bdUserInfo::sizeOf(bdUserInfo *this)
{
  return ?sizeOf@bdUserInfo@@UEAAIXZ(this);
}

/*
==============
bdUserInfo::deserialize
==============
*/

bool __fastcall bdUserInfo::deserialize(bdUserInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdUserInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdUserInfo::bdUserInfo
==============
*/

void __fastcall bdUserInfo::bdUserInfo(bdUserInfo *this)
{
  ??0bdUserInfo@@QEAA@XZ(this);
}

/*
==============
bdUserInfo::bdUserInfo
==============
*/
void bdUserInfo::bdUserInfo(bdUserInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserInfo::`vbtable';
    *(_QWORD *)this->gap58 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap58[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdUserInfo_vtbl *)&bdUserInfo::`vftable'{for `bdTaskResult'};
  *(bdUserInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserInfo_vtbl *)&bdUserInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
}

/*
==============
bdUserInfo::~bdUserInfo
==============
*/
void bdUserInfo::~bdUserInfo(bdUserInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdUserInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 80) = &bdUserInfo::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdUserInfo *)((char *)this - 72));
}

/*
==============
bdUserInfo::deserialize
==============
*/
_BOOL8 bdUserInfo::deserialize(bdUserInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 24, 0x40ui64);
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
bdUserInfo::sizeOf
==============
*/
__int64 bdUserInfo::sizeOf(bdUserInfo *this)
{
  return 104i64;
}

