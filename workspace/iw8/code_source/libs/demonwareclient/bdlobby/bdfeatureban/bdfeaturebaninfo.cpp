/*
==============
bdFeatureBanInfo::~bdFeatureBanInfo
==============
*/

void __fastcall bdFeatureBanInfo::~bdFeatureBanInfo(bdFeatureBanInfo *this)
{
  ??1bdFeatureBanInfo@@UEAA@XZ(this);
}

/*
==============
bdFeatureBanInfo::sizeOf
==============
*/

unsigned int __fastcall bdFeatureBanInfo::sizeOf(bdFeatureBanInfo *this)
{
  return ?sizeOf@bdFeatureBanInfo@@UEAAIXZ(this);
}

/*
==============
bdFeatureBanInfo::deserialize
==============
*/

bool __fastcall bdFeatureBanInfo::deserialize(bdFeatureBanInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdFeatureBanInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdFeatureBanInfo::bdFeatureBanInfo
==============
*/

void __fastcall bdFeatureBanInfo::bdFeatureBanInfo(bdFeatureBanInfo *this)
{
  ??0bdFeatureBanInfo@@QEAA@XZ(this);
}

/*
==============
bdFeatureBanInfo::bdFeatureBanInfo
==============
*/
void bdFeatureBanInfo::bdFeatureBanInfo(bdFeatureBanInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdFeatureBanInfo::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdFeatureBanInfo_vtbl *)&bdFeatureBanInfo::`vftable'{for `bdTaskResult'};
  *(bdFeatureBanInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdFeatureBanInfo_vtbl *)&bdFeatureBanInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 0;
}

/*
==============
bdFeatureBanInfo::~bdFeatureBanInfo
==============
*/
void bdFeatureBanInfo::~bdFeatureBanInfo(bdFeatureBanInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdFeatureBanInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 24) = &bdFeatureBanInfo::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdFeatureBanInfo *)((char *)this - 16));
}

/*
==============
bdFeatureBanInfo::deserialize
==============
*/
_BOOL8 bdFeatureBanInfo::deserialize(bdFeatureBanInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 6);
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
bdFeatureBanInfo::sizeOf
==============
*/
__int64 bdFeatureBanInfo::sizeOf(bdFeatureBanInfo *this)
{
  return 48i64;
}

