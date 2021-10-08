/*
==============
bdTeamProfile::bdTeamProfile
==============
*/

void __fastcall bdTeamProfile::bdTeamProfile(bdTeamProfile *this)
{
  ??0bdTeamProfile@@QEAA@XZ(this);
}

/*
==============
bdTeamProfile::sizeOf
==============
*/

unsigned int __fastcall bdTeamProfile::sizeOf(bdTeamProfile *this)
{
  return ?sizeOf@bdTeamProfile@@UEAAIXZ(this);
}

/*
==============
bdTeamProfile::deserialize
==============
*/

bool __fastcall bdTeamProfile::deserialize(bdTeamProfile *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTeamProfile@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTeamProfile::serialize
==============
*/

bool __fastcall bdTeamProfile::serialize(bdTeamProfile *this, bdByteBuffer *__formal)
{
  return ?serialize@bdTeamProfile@@UEBA_NAEAVbdByteBuffer@@@Z(this, __formal);
}

/*
==============
bdTeamProfile::~bdTeamProfile
==============
*/

void __fastcall bdTeamProfile::~bdTeamProfile(bdTeamProfile *this)
{
  ??1bdTeamProfile@@UEAA@XZ(this);
}

/*
==============
bdTeamProfile::bdTeamProfile
==============
*/
void bdTeamProfile::bdTeamProfile(bdTeamProfile *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamProfile::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdTeamProfile::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdTeamProfile_vtbl *)&bdTeamProfile::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdTeamProfile::`vftable'{for `bdSerializable'};
  *(bdTeamProfile_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamProfile_vtbl *)&bdTeamProfile::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
}

/*
==============
bdTeamProfile::~bdTeamProfile
==============
*/
void bdTeamProfile::~bdTeamProfile(bdTeamProfile *this)
{
  bdTaskResult *v1; 

  v1 = (bdTeamProfile *)((char *)this - 24);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTeamProfile::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdTeamProfile::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 32) = &bdTeamProfile::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)this[-1].gap30);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdTeamProfile::deserialize
==============
*/
_BOOL8 bdTeamProfile::deserialize(bdTeamProfile *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt64; 

  UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)this->_bytes_20);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return UInt64;
}

/*
==============
bdTeamProfile::serialize
==============
*/
char bdTeamProfile::serialize(bdTeamProfile *this, bdByteBuffer *__formal)
{
  return 1;
}

/*
==============
bdTeamProfile::sizeOf
==============
*/
__int64 bdTeamProfile::sizeOf(bdTeamProfile *this)
{
  return 56i64;
}

