/*
==============
bdProfileInfo::~bdProfileInfo
==============
*/

void __fastcall bdProfileInfo::~bdProfileInfo(bdProfileInfo *this)
{
  ??1bdProfileInfo@@UEAA@XZ(this);
}

/*
==============
bdProfileInfo::serialize
==============
*/

bool __fastcall bdProfileInfo::serialize(bdProfileInfo *this, bdByteBuffer *__formal)
{
  return ?serialize@bdProfileInfo@@UEBA_NAEAVbdByteBuffer@@@Z(this, __formal);
}

/*
==============
bdProfileInfo::sizeOf
==============
*/

unsigned int __fastcall bdProfileInfo::sizeOf(bdProfileInfo *this)
{
  return ?sizeOf@bdProfileInfo@@UEAAIXZ(this);
}

/*
==============
bdProfileInfo::bdProfileInfo
==============
*/

void __fastcall bdProfileInfo::bdProfileInfo(bdProfileInfo *this)
{
  ??0bdProfileInfo@@QEAA@XZ(this);
}

/*
==============
bdProfileInfo::getEntityID
==============
*/

unsigned __int64 __fastcall bdProfileInfo::getEntityID(bdProfileInfo *this)
{
  return ?getEntityID@bdProfileInfo@@QEBA_KXZ(this);
}

/*
==============
bdProfileInfo::deserialize
==============
*/

bool __fastcall bdProfileInfo::deserialize(bdProfileInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdProfileInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdProfileInfo::bdProfileInfo
==============
*/
void bdProfileInfo::bdProfileInfo(bdProfileInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdProfileInfo::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdProfileInfo::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdProfileInfo_vtbl *)&bdProfileInfo::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdProfileInfo::`vftable'{for `bdSerializable'};
  *(bdProfileInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdProfileInfo_vtbl *)&bdProfileInfo::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
}

/*
==============
bdProfileInfo::~bdProfileInfo
==============
*/
void bdProfileInfo::~bdProfileInfo(bdProfileInfo *this)
{
  bdTaskResult *v1; 

  v1 = (bdProfileInfo *)((char *)this - 24);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdProfileInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdProfileInfo::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 32) = &bdProfileInfo::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)this[-1].gap30);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdProfileInfo::deserialize
==============
*/
_BOOL8 bdProfileInfo::deserialize(bdProfileInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt64; 

  UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)this->_bytes_20);
  if ( !UInt64 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "profilesInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofileinfo.cpp", "bdProfileInfo::deserialize", 0x21u, "Deserialization failed");
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
bdProfileInfo::getEntityID
==============
*/
unsigned __int64 bdProfileInfo::getEntityID(bdProfileInfo *this)
{
  return *(_QWORD *)this->_bytes_20;
}

/*
==============
bdProfileInfo::serialize
==============
*/
char bdProfileInfo::serialize(bdProfileInfo *this, bdByteBuffer *__formal)
{
  return 1;
}

/*
==============
bdProfileInfo::sizeOf
==============
*/
__int64 bdProfileInfo::sizeOf(bdProfileInfo *this)
{
  return 56i64;
}

