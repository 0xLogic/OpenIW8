/*
==============
bdTeamFailedHandleMembership::~bdTeamFailedHandleMembership
==============
*/

void __fastcall bdTeamFailedHandleMembership::~bdTeamFailedHandleMembership(bdTeamFailedHandleMembership *this)
{
  ??1bdTeamFailedHandleMembership@@UEAA@XZ(this);
}

/*
==============
bdTeamFailedHandleMembership::deserialize
==============
*/

bool __fastcall bdTeamFailedHandleMembership::deserialize(bdTeamFailedHandleMembership *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTeamFailedHandleMembership@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTeamFailedHandleMembership::sizeOf
==============
*/

unsigned int __fastcall bdTeamFailedHandleMembership::sizeOf(bdTeamFailedHandleMembership *this)
{
  return ?sizeOf@bdTeamFailedHandleMembership@@UEAAIXZ(this);
}

/*
==============
bdTeamFailedHandleMembership::bdTeamFailedHandleMembership
==============
*/

void __fastcall bdTeamFailedHandleMembership::bdTeamFailedHandleMembership(bdTeamFailedHandleMembership *this)
{
  ??0bdTeamFailedHandleMembership@@QEAA@XZ(this);
}

/*
==============
bdTeamFailedHandleMembership::bdTeamFailedHandleMembership
==============
*/
void bdTeamFailedHandleMembership::bdTeamFailedHandleMembership(bdTeamFailedHandleMembership *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamFailedHandleMembership::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdTeamFailedHandleMembership_vtbl *)&bdTeamFailedHandleMembership::`vftable'{for `bdTaskResult'};
  *(bdTeamFailedHandleMembership_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamFailedHandleMembership_vtbl *)&bdTeamFailedHandleMembership::`vftable'{for `bdReferencable'};
}

/*
==============
bdTeamFailedHandleMembership::~bdTeamFailedHandleMembership
==============
*/
void bdTeamFailedHandleMembership::~bdTeamFailedHandleMembership(bdTeamFailedHandleMembership *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTeamFailedHandleMembership::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 24) = &bdTeamFailedHandleMembership::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdTeamFailedHandleMembership *)((char *)this - 16));
}

/*
==============
bdTeamFailedHandleMembership::deserialize
==============
*/
_BOOL8 bdTeamFailedHandleMembership::deserialize(bdTeamFailedHandleMembership *this, bdReference<bdByteBuffer> buffer)
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
bdTeamFailedHandleMembership::sizeOf
==============
*/
__int64 bdTeamFailedHandleMembership::sizeOf(bdTeamFailedHandleMembership *this)
{
  return 48i64;
}

